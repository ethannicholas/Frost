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
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
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
#include "panda/collections/Array.h"
#include "panda/io/Console.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef org$pandalanguage$pandac$Position (*$fn147)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn207)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn307)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn367)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn374)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn382)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn389)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn480)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn547)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn554)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn561)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn574)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn599)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn606)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn619)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1849)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2981)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3006)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3053)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn4027)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x61\x76\x65\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 15, -724609158782993845, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x61\x76\x65\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 15, -724609158782993845, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x61\x76\x65\x20\x74\x75\x70\x6c\x65\x20\x61\x74\x20", 14, -2110090616446303392, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x61\x76\x65\x20\x6c\x61\x6d\x62\x64\x61\x20\x61\x74\x20", 15, -724609158782993845, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3d\x3e\x27", 4, 144870702, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s4105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s4356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s4360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$pandac$parser$Parser* self, panda$threads$MessageQueue* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp2;
    org$pandalanguage$pandac$parser$Lexer* $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6;
    panda$collections$Stack* $tmp8;
    panda$collections$Stack* $tmp9;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp12;
    panda$threads$MessageQueue* $tmp14;
    panda$threads$MessageQueue* $tmp15;
    panda$core$Object* $tmp16;
    self->lexer = NULL;
    self->errors = NULL;
    self->path = NULL;
    self->source = NULL;
    self->pushbackBuffer = NULL;
    self->commaSeparatedExpressionContext = NULL;
    self->speculativeBuffer = NULL;
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
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp13 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp13);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->speculativeBuffer = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    self->allowLambdas = ((panda$core$Bit) { true });
    {
        $tmp14 = self->errors;
        $tmp15 = p_errors;
        self->errors = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    panda$core$Bit$wrapper* $tmp17;
    $tmp17 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp17->value = ((panda$core$Bit) { false });
    $tmp16 = ((panda$core$Object*) $tmp17);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp16);
    panda$core$Panda$unref$panda$core$Object($tmp16);
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    panda$io$File* $tmp18;
    panda$io$File* $tmp19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        $tmp18 = self->path;
        $tmp19 = p_path;
        self->path = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
    {
        $tmp20 = self->source;
        $tmp21 = p_source;
        self->source = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx24;
    org$pandalanguage$pandac$parser$Token result27;
    org$pandalanguage$pandac$parser$Token $returnValue29;
    org$pandalanguage$pandac$parser$Token result31;
    panda$core$Int64 $tmp22 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp23 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp22, ((panda$core$Int64) { 0 }));
    if ($tmp23.value) {
    {
        panda$core$Int64 $tmp25 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp26 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp25, ((panda$core$Int64) { 1 }));
        idx24 = $tmp26;
        org$pandalanguage$pandac$parser$Token $tmp28 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx24);
        result27 = $tmp28;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx24);
        $returnValue29 = result27;
        return $returnValue29;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp32 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result31 = $tmp32;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result31);
    }
    }
    $returnValue29 = result31;
    return $returnValue29;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result36;
    org$pandalanguage$pandac$parser$Token$Kind $match$60_1338;
    org$pandalanguage$pandac$parser$Token next43;
    org$pandalanguage$pandac$parser$Token$Kind $match$66_2545;
    panda$core$String* $tmp47;
    panda$core$Char8 $tmp49;
    org$pandalanguage$pandac$parser$Token $returnValue52;
    org$pandalanguage$pandac$parser$Token next57;
    org$pandalanguage$pandac$parser$Token$Kind $match$78_2559;
    $l34:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp37 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result36 = $tmp37;
        {
            $match$60_1338 = result36.kind;
            panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$60_1338.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp39.value) {
            {
                goto $l34;
            }
            }
            else {
            panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$60_1338.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp40.value) {
            {
                $l41:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp44 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next43 = $tmp44;
                    {
                        $match$66_2545 = next43.kind;
                        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_2545.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp46.value) {
                        {
                            panda$core$String* $tmp48 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next43);
                            $tmp47 = $tmp48;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp49, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp50 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp47, $tmp49);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                            if ($tmp50.value) {
                            {
                                goto $l34;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_2545.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp51.value) {
                        {
                            $returnValue52 = next43;
                            return $returnValue52;
                        }
                        }
                        }
                    }
                }
                }
                $l42:;
            }
            }
            else {
            panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$60_1338.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp54.value) {
            {
                $l55:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp58 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next57 = $tmp58;
                    {
                        $match$78_2559 = next57.kind;
                        panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_2559.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp60.value) {
                        {
                            goto $l34;
                        }
                        }
                        else {
                        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_2559.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp61.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result36, &$s62);
                            $returnValue52 = next57;
                            return $returnValue52;
                        }
                        }
                        }
                    }
                }
                }
                $l56:;
            }
            }
            else {
            {
                $returnValue52 = result36;
                return $returnValue52;
            }
            }
            }
            }
        }
    }
    }
    $l35:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $returnValue68;
    panda$core$Int64 $tmp65 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp65, ((panda$core$Int64) { 0 }));
    if ($tmp66.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp67 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp67);
    }
    }
    panda$core$Int64 $tmp69 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp70 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp69, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp71 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp70);
    $returnValue68 = $tmp71;
    return $returnValue68;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result73;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue76;
    org$pandalanguage$pandac$parser$Token $tmp74 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result73 = $tmp74;
    panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result73.kind.$rawValue, p_kind.$rawValue);
    if ($tmp75.value) {
    {
        $returnValue76 = ((org$pandalanguage$pandac$parser$Token$nullable) { result73, true });
        return $returnValue76;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result73);
    $returnValue76 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue76;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result79;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue82;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp92;
    org$pandalanguage$pandac$parser$Token $tmp80 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result79 = $tmp80;
    panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result79.kind.$rawValue, p_kind.$rawValue);
    if ($tmp81.value) {
    {
        $returnValue82 = ((org$pandalanguage$pandac$parser$Token$nullable) { result79, true });
        return $returnValue82;
    }
    }
    panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s88, p_expected);
    $tmp87 = $tmp89;
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s90);
    $tmp86 = $tmp91;
    panda$core$String* $tmp93 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result79);
    $tmp92 = $tmp93;
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, $tmp92);
    $tmp85 = $tmp94;
    panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, &$s95);
    $tmp84 = $tmp96;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result79, $tmp84);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    $returnValue82 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue82;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp99;
    panda$core$Bit $tmp98 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp98.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp100 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp100, self->path, p_token.position, p_msg);
        $tmp99 = $tmp100;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp99));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp101 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp101.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp102;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp103 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp104 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp103, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp102, $tmp104, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp106 = $tmp102.start.value;
    panda$core$Int64 i105 = { $tmp106 };
    int64_t $tmp108 = $tmp102.end.value;
    int64_t $tmp109 = $tmp102.step.value;
    bool $tmp110 = $tmp102.inclusive.value;
    bool $tmp117 = $tmp109 > 0;
    if ($tmp117) goto $l115; else goto $l116;
    $l115:;
    if ($tmp110) goto $l118; else goto $l119;
    $l118:;
    if ($tmp106 <= $tmp108) goto $l111; else goto $l113;
    $l119:;
    if ($tmp106 < $tmp108) goto $l111; else goto $l113;
    $l116:;
    if ($tmp110) goto $l120; else goto $l121;
    $l120:;
    if ($tmp106 >= $tmp108) goto $l111; else goto $l113;
    $l121:;
    if ($tmp106 > $tmp108) goto $l111; else goto $l113;
    $l111:;
    {
        org$pandalanguage$pandac$parser$Token $tmp123 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i105);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp123);
    }
    $l114:;
    if ($tmp117) goto $l125; else goto $l126;
    $l125:;
    int64_t $tmp127 = $tmp108 - i105.value;
    if ($tmp110) goto $l128; else goto $l129;
    $l128:;
    if ((uint64_t) $tmp127 >= $tmp109) goto $l124; else goto $l113;
    $l129:;
    if ((uint64_t) $tmp127 > $tmp109) goto $l124; else goto $l113;
    $l126:;
    int64_t $tmp131 = i105.value - $tmp108;
    if ($tmp110) goto $l132; else goto $l133;
    $l132:;
    if ((uint64_t) $tmp131 >= -$tmp109) goto $l124; else goto $l113;
    $l133:;
    if ((uint64_t) $tmp131 > -$tmp109) goto $l124; else goto $l113;
    $l124:;
    i105.value += $tmp109;
    goto $l111;
    $l113:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue135;
    panda$core$String* $tmp136;
    panda$core$String* $tmp137;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp138;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp138, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp139 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp138);
    $tmp137 = $tmp139;
    $tmp136 = $tmp137;
    $returnValue135 = $tmp136;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
    return $returnValue135;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue141;
    org$pandalanguage$pandac$ASTNode* $tmp142;
    org$pandalanguage$pandac$ASTNode* $tmp144;
    org$pandalanguage$pandac$ASTNode* $tmp145;
    org$pandalanguage$pandac$parser$Token$Kind $tmp149;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp142 = p_chunk;
        $returnValue141 = $tmp142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
        return $returnValue141;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp146 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp148 = (($fn147) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp149, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp146, ((panda$core$Int64) { 4 }), $tmp148, p_string, $tmp149, p_chunk);
    $tmp145 = $tmp146;
    $tmp144 = $tmp145;
    $returnValue141 = $tmp144;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
    return $returnValue141;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result154 = NULL;
    panda$core$MutableString* $tmp155;
    panda$core$MutableString* $tmp156;
    org$pandalanguage$pandac$parser$Token token160;
    org$pandalanguage$pandac$parser$Token$Kind $match$160_13162;
    panda$core$String* str167 = NULL;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$Char8 $tmp171;
    panda$core$String* $returnValue174;
    panda$core$String* $tmp175;
    panda$core$String* $tmp182;
    org$pandalanguage$pandac$parser$Token escape189;
    panda$core$String* $tmp193;
    panda$core$String* escapeText197 = NULL;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$Char8 c201;
    panda$core$Object* $tmp202;
    panda$collections$ListView* $tmp203;
    panda$core$Char8 $match$179_21209;
    panda$core$Char8 $tmp210;
    panda$core$Char8 $tmp212;
    panda$core$Char8 $tmp213;
    panda$core$Char8 $tmp215;
    panda$core$Char8 $tmp216;
    panda$core$Char8 $tmp218;
    panda$core$Char8 $tmp219;
    panda$core$Char8 $tmp221;
    panda$core$Char8 $tmp222;
    panda$core$Char8 $tmp224;
    panda$core$Char8 $tmp225;
    panda$core$Char8 $tmp227;
    panda$core$Char8 $tmp228;
    panda$core$Char8 $tmp230;
    panda$core$String* $tmp232;
    panda$core$String* $tmp236;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp237;
    panda$core$String* $tmp243;
    panda$core$String* $tmp244;
    panda$core$String* $tmp248;
    int $tmp153;
    {
        panda$core$MutableString* $tmp157 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp157);
        $tmp156 = $tmp157;
        $tmp155 = $tmp156;
        result154 = $tmp155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
        $l158:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp161 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token160 = $tmp161;
            {
                $match$160_13162 = token160.kind;
                panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_13162.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp163.value) {
                {
                    int $tmp166;
                    {
                        panda$core$String* $tmp170 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token160);
                        $tmp169 = $tmp170;
                        $tmp168 = $tmp169;
                        str167 = $tmp168;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp171, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp172 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str167, $tmp171);
                        if ($tmp172.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s173);
                            $tmp175 = NULL;
                            $returnValue174 = $tmp175;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                            $tmp166 = 0;
                            goto $l164;
                            $l176:;
                            $tmp153 = 0;
                            goto $l151;
                            $l177:;
                            return $returnValue174;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result154, str167);
                    }
                    $tmp166 = -1;
                    goto $l164;
                    $l164:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str167));
                    str167 = NULL;
                    switch ($tmp166) {
                        case -1: goto $l179;
                        case 0: goto $l176;
                    }
                    $l179:;
                }
                }
                else {
                panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_13162.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp180.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s181);
                    $tmp182 = NULL;
                    $returnValue174 = $tmp182;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                    $tmp153 = 1;
                    goto $l151;
                    $l183:;
                    return $returnValue174;
                }
                }
                else {
                panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_13162.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp185.value) {
                {
                    int $tmp188;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp190 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape189 = $tmp190;
                        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape189.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp191.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s192);
                            $tmp193 = NULL;
                            $returnValue174 = $tmp193;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                            $tmp188 = 0;
                            goto $l186;
                            $l194:;
                            $tmp153 = 2;
                            goto $l151;
                            $l195:;
                            return $returnValue174;
                        }
                        }
                        panda$core$String* $tmp200 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape189);
                        $tmp199 = $tmp200;
                        $tmp198 = $tmp199;
                        escapeText197 = $tmp198;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                        panda$collections$ListView* $tmp204 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText197);
                        $tmp203 = $tmp204;
                        ITable* $tmp205 = $tmp203->$class->itable;
                        while ($tmp205->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp205 = $tmp205->next;
                        }
                        $fn207 $tmp206 = $tmp205->methods[0];
                        panda$core$Object* $tmp208 = $tmp206($tmp203, ((panda$core$Int64) { 0 }));
                        $tmp202 = $tmp208;
                        c201 = ((panda$core$Char8$wrapper*) $tmp202)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp202);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                        {
                            $match$179_21209 = c201;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp211 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$179_21209, $tmp210);
                            if ($tmp211.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp212, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp212);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp214 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$179_21209, $tmp213);
                            if ($tmp214.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp215, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp215);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp217 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$179_21209, $tmp216);
                            if ($tmp217.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp218);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp220 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$179_21209, $tmp219);
                            if ($tmp220.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp221);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp223 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$179_21209, $tmp222);
                            if ($tmp223.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp224);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp226 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$179_21209, $tmp225);
                            if ($tmp226.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp227);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp229 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$179_21209, $tmp228);
                            if ($tmp229.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp230, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp230);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s231);
                                $tmp232 = NULL;
                                $returnValue174 = $tmp232;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
                                $tmp188 = 1;
                                goto $l186;
                                $l233:;
                                $tmp153 = 3;
                                goto $l151;
                                $l234:;
                                return $returnValue174;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp238 = panda$core$String$start$R$panda$core$String$Index(escapeText197);
                        panda$core$String$Index $tmp239 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText197, $tmp238);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp237, ((panda$core$String$Index$nullable) { $tmp239, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp240 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText197, $tmp237);
                        $tmp236 = $tmp240;
                        panda$core$MutableString$append$panda$core$String(result154, $tmp236);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
                    }
                    $tmp188 = -1;
                    goto $l186;
                    $l186:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText197));
                    escapeText197 = NULL;
                    switch ($tmp188) {
                        case 0: goto $l194;
                        case -1: goto $l241;
                        case 1: goto $l233;
                    }
                    $l241:;
                }
                }
                else {
                panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$160_13162.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp242.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token160);
                    panda$core$String* $tmp245 = panda$core$MutableString$finish$R$panda$core$String(result154);
                    $tmp244 = $tmp245;
                    $tmp243 = $tmp244;
                    $returnValue174 = $tmp243;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp243));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
                    $tmp153 = 4;
                    goto $l151;
                    $l246:;
                    return $returnValue174;
                }
                }
                else {
                {
                    panda$core$String* $tmp249 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token160);
                    $tmp248 = $tmp249;
                    panda$core$MutableString$append$panda$core$String(result154, $tmp248);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                }
                }
                }
                }
                }
            }
        }
        }
        $l159:;
    }
    $tmp153 = -1;
    goto $l151;
    $l151:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result154));
    result154 = NULL;
    switch ($tmp153) {
        case 2: goto $l195;
        case -1: goto $l250;
        case 4: goto $l246;
        case 0: goto $l177;
        case 1: goto $l183;
        case 3: goto $l234;
    }
    $l250:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result254 = NULL;
    panda$core$MutableString* $tmp255;
    panda$core$MutableString* $tmp256;
    org$pandalanguage$pandac$parser$Token token260;
    org$pandalanguage$pandac$parser$Token$Kind $match$205_13262;
    panda$core$String* str267 = NULL;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    panda$core$Char8 $tmp271;
    panda$core$String* $returnValue274;
    panda$core$String* $tmp275;
    panda$core$String* $tmp282;
    org$pandalanguage$pandac$parser$Token escape289;
    panda$core$String* $tmp293;
    panda$core$String* escapeText297 = NULL;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$Char8 c301;
    panda$core$Object* $tmp302;
    panda$collections$ListView* $tmp303;
    panda$core$Char8 $match$224_21309;
    panda$core$Char8 $tmp310;
    panda$core$Char8 $tmp312;
    panda$core$Char8 $tmp313;
    panda$core$Char8 $tmp315;
    panda$core$Char8 $tmp316;
    panda$core$Char8 $tmp318;
    panda$core$Char8 $tmp319;
    panda$core$Char8 $tmp321;
    panda$core$Char8 $tmp322;
    panda$core$Char8 $tmp324;
    panda$core$Char8 $tmp325;
    panda$core$Char8 $tmp327;
    panda$core$Char8 $tmp328;
    panda$core$Char8 $tmp330;
    panda$core$Char8 $tmp331;
    panda$core$Char8 $tmp333;
    panda$core$String* $tmp335;
    panda$core$String* $tmp339;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp340;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$core$String* $tmp357;
    int $tmp253;
    {
        panda$core$MutableString* $tmp257 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp257);
        $tmp256 = $tmp257;
        $tmp255 = $tmp256;
        result254 = $tmp255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
        $l258:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp261 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token260 = $tmp261;
            {
                $match$205_13262 = token260.kind;
                panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$205_13262.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp263.value) {
                {
                    int $tmp266;
                    {
                        panda$core$String* $tmp270 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token260);
                        $tmp269 = $tmp270;
                        $tmp268 = $tmp269;
                        str267 = $tmp268;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp271, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp272 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str267, $tmp271);
                        if ($tmp272.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s273);
                            $tmp275 = NULL;
                            $returnValue274 = $tmp275;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                            $tmp266 = 0;
                            goto $l264;
                            $l276:;
                            $tmp253 = 0;
                            goto $l251;
                            $l277:;
                            return $returnValue274;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result254, str267);
                    }
                    $tmp266 = -1;
                    goto $l264;
                    $l264:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str267));
                    str267 = NULL;
                    switch ($tmp266) {
                        case -1: goto $l279;
                        case 0: goto $l276;
                    }
                    $l279:;
                }
                }
                else {
                panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$205_13262.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp280.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s281);
                    $tmp282 = NULL;
                    $returnValue274 = $tmp282;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
                    $tmp253 = 1;
                    goto $l251;
                    $l283:;
                    return $returnValue274;
                }
                }
                else {
                panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$205_13262.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp285.value) {
                {
                    int $tmp288;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp290 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape289 = $tmp290;
                        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape289.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp291.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s292);
                            $tmp293 = NULL;
                            $returnValue274 = $tmp293;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                            $tmp288 = 0;
                            goto $l286;
                            $l294:;
                            $tmp253 = 2;
                            goto $l251;
                            $l295:;
                            return $returnValue274;
                        }
                        }
                        panda$core$String* $tmp300 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape289);
                        $tmp299 = $tmp300;
                        $tmp298 = $tmp299;
                        escapeText297 = $tmp298;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                        panda$collections$ListView* $tmp304 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText297);
                        $tmp303 = $tmp304;
                        ITable* $tmp305 = $tmp303->$class->itable;
                        while ($tmp305->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp305 = $tmp305->next;
                        }
                        $fn307 $tmp306 = $tmp305->methods[0];
                        panda$core$Object* $tmp308 = $tmp306($tmp303, ((panda$core$Int64) { 0 }));
                        $tmp302 = $tmp308;
                        c301 = ((panda$core$Char8$wrapper*) $tmp302)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp302);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                        {
                            $match$224_21309 = c301;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp310, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp311 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp310);
                            if ($tmp311.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp312, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp312);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp313, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp314 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp313);
                            if ($tmp314.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp315);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp316, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp317 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp316);
                            if ($tmp317.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp318, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp318);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp320 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp319);
                            if ($tmp320.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp321, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp321);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp323 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp322);
                            if ($tmp323.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp324, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp324);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp326 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp325);
                            if ($tmp326.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp327, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp327);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 58 }));
                            panda$core$Bit $tmp329 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp328);
                            if ($tmp329.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp330, ((panda$core$UInt8) { 58 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp330);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp332 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$224_21309, $tmp331);
                            if ($tmp332.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp333, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp333);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s334);
                                $tmp335 = NULL;
                                $returnValue274 = $tmp335;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
                                $tmp288 = 1;
                                goto $l286;
                                $l336:;
                                $tmp253 = 3;
                                goto $l251;
                                $l337:;
                                return $returnValue274;
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
                        panda$core$String$Index $tmp341 = panda$core$String$start$R$panda$core$String$Index(escapeText297);
                        panda$core$String$Index $tmp342 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText297, $tmp341);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp340, ((panda$core$String$Index$nullable) { $tmp342, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp343 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText297, $tmp340);
                        $tmp339 = $tmp343;
                        panda$core$MutableString$append$panda$core$String(result254, $tmp339);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                    }
                    $tmp288 = -1;
                    goto $l286;
                    $l286:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText297));
                    escapeText297 = NULL;
                    switch ($tmp288) {
                        case -1: goto $l344;
                        case 0: goto $l294;
                        case 1: goto $l336;
                    }
                    $l344:;
                }
                }
                else {
                panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$205_13262.$rawValue, ((panda$core$Int64) { 95 }));
                if ($tmp345.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token260);
                    panda$core$String* $tmp348 = panda$core$MutableString$finish$R$panda$core$String(result254);
                    $tmp347 = $tmp348;
                    $tmp346 = $tmp347;
                    $returnValue274 = $tmp346;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                    $tmp253 = 4;
                    goto $l251;
                    $l349:;
                    return $returnValue274;
                }
                }
                else {
                panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$205_13262.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp351.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token260);
                    panda$core$String* $tmp354 = panda$core$MutableString$finish$R$panda$core$String(result254);
                    $tmp353 = $tmp354;
                    $tmp352 = $tmp353;
                    $returnValue274 = $tmp352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                    $tmp253 = 5;
                    goto $l251;
                    $l355:;
                    return $returnValue274;
                }
                }
                else {
                {
                    panda$core$String* $tmp358 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token260);
                    $tmp357 = $tmp358;
                    panda$core$MutableString$append$panda$core$String(result254, $tmp357);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l259:;
    }
    $tmp253 = -1;
    goto $l251;
    $l251:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result254));
    result254 = NULL;
    switch ($tmp253) {
        case 4: goto $l349;
        case 3: goto $l337;
        case 0: goto $l277;
        case 1: goto $l283;
        case 5: goto $l355;
        case 2: goto $l295;
        case -1: goto $l359;
    }
    $l359:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot363 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp364;
    org$pandalanguage$pandac$ASTNode* $tmp365;
    org$pandalanguage$pandac$ASTNode* call370 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp371;
    org$pandalanguage$pandac$ASTNode* $tmp372;
    panda$collections$ImmutableArray* $tmp376;
    org$pandalanguage$pandac$ASTNode* stringType378 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp379;
    org$pandalanguage$pandac$ASTNode* $tmp380;
    org$pandalanguage$pandac$ASTNode* $returnValue385;
    org$pandalanguage$pandac$ASTNode* $tmp386;
    org$pandalanguage$pandac$ASTNode* $tmp387;
    org$pandalanguage$pandac$parser$Token$Kind $tmp391;
    int $tmp362;
    {
        org$pandalanguage$pandac$ASTNode* $tmp366 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp368 = (($fn367) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp366, ((panda$core$Int64) { 15 }), $tmp368, p_expr, &$s369);
        $tmp365 = $tmp366;
        $tmp364 = $tmp365;
        dot363 = $tmp364;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
        org$pandalanguage$pandac$ASTNode* $tmp373 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp375 = (($fn374) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp377 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp377);
        $tmp376 = $tmp377;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp373, ((panda$core$Int64) { 8 }), $tmp375, dot363, $tmp376);
        $tmp372 = $tmp373;
        $tmp371 = $tmp372;
        call370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
        org$pandalanguage$pandac$ASTNode* $tmp381 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp383 = (($fn382) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp381, ((panda$core$Int64) { 41 }), $tmp383, &$s384);
        $tmp380 = $tmp381;
        $tmp379 = $tmp380;
        stringType378 = $tmp379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        org$pandalanguage$pandac$ASTNode* $tmp388 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp390 = (($fn389) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp391, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp388, ((panda$core$Int64) { 4 }), $tmp390, call370, $tmp391, stringType378);
        $tmp387 = $tmp388;
        $tmp386 = $tmp387;
        $returnValue385 = $tmp386;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
        $tmp362 = 0;
        goto $l360;
        $l392:;
        return $returnValue385;
    }
    $l360:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot363));
    dot363 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call370));
    call370 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType378));
    stringType378 = NULL;
    switch ($tmp362) {
        case 0: goto $l392;
    }
    $l394:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $atPre1398;
    org$pandalanguage$pandac$parser$Token start402;
    panda$core$String* $tmp409;
    panda$core$String* $tmp410;
    panda$core$String* $tmp412;
    org$pandalanguage$pandac$ASTNode* $returnValue417;
    org$pandalanguage$pandac$ASTNode* $tmp418;
    org$pandalanguage$pandac$ASTNode* result422 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp423;
    panda$core$MutableString* chunk424 = NULL;
    panda$core$MutableString* $tmp425;
    panda$core$MutableString* $tmp426;
    org$pandalanguage$pandac$parser$Token token430;
    org$pandalanguage$pandac$parser$Token$Kind $match$272_13433;
    panda$core$String* str438 = NULL;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    panda$core$Char8 $tmp442;
    org$pandalanguage$pandac$ASTNode* $tmp445;
    org$pandalanguage$pandac$ASTNode* $tmp453;
    org$pandalanguage$pandac$parser$Token escape461;
    org$pandalanguage$pandac$ASTNode* $tmp465;
    panda$core$String* escapeText470 = NULL;
    panda$core$String* $tmp471;
    panda$core$String* $tmp472;
    panda$core$Char8 c474;
    panda$core$Object* $tmp475;
    panda$collections$ListView* $tmp476;
    panda$core$Char8 $match$291_21482;
    panda$core$Char8 $tmp483;
    panda$core$Char8 $tmp485;
    panda$core$Char8 $tmp486;
    panda$core$Char8 $tmp488;
    panda$core$Char8 $tmp489;
    panda$core$Char8 $tmp491;
    panda$core$Char8 $tmp492;
    panda$core$Char8 $tmp494;
    panda$core$Char8 $tmp495;
    panda$core$Char8 $tmp497;
    panda$core$Char8 $tmp498;
    panda$core$Char8 $tmp500;
    panda$core$Char8 $tmp501;
    panda$core$Bit oldAllow506;
    org$pandalanguage$pandac$ASTNode* expr507 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp508;
    org$pandalanguage$pandac$ASTNode* $tmp509;
    org$pandalanguage$pandac$ASTNode* $tmp511;
    panda$core$String* align517 = NULL;
    panda$core$String* $tmp518;
    panda$core$String* format519 = NULL;
    panda$core$String* $tmp520;
    org$pandalanguage$pandac$parser$Token$Kind $tmp521;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    panda$core$String* $tmp525;
    org$pandalanguage$pandac$parser$Token$Kind $tmp527;
    panda$core$String* $tmp532;
    panda$core$String* $tmp533;
    panda$core$String* $tmp534;
    org$pandalanguage$pandac$ASTNode* $tmp536;
    org$pandalanguage$pandac$ASTNode* formattable543 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp544;
    org$pandalanguage$pandac$ASTNode* $tmp545;
    org$pandalanguage$pandac$ASTNode* cast550 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp551;
    org$pandalanguage$pandac$ASTNode* $tmp552;
    org$pandalanguage$pandac$parser$Token$Kind $tmp556;
    org$pandalanguage$pandac$ASTNode* dot557 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp558;
    org$pandalanguage$pandac$ASTNode* $tmp559;
    panda$collections$Array* callArgs564 = NULL;
    panda$collections$Array* $tmp565;
    panda$collections$Array* $tmp566;
    org$pandalanguage$pandac$ASTNode* $tmp568;
    org$pandalanguage$pandac$ASTNode* $tmp570;
    org$pandalanguage$pandac$ASTNode* $tmp571;
    org$pandalanguage$pandac$ASTNode* $tmp572;
    panda$collections$ImmutableArray* $tmp576;
    org$pandalanguage$pandac$parser$Token$Kind $tmp579;
    org$pandalanguage$pandac$ASTNode* $tmp582;
    org$pandalanguage$pandac$ASTNode* $tmp591;
    org$pandalanguage$pandac$ASTNode* $tmp592;
    org$pandalanguage$pandac$ASTNode* $tmp593;
    org$pandalanguage$pandac$ASTNode* pandaType595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp596;
    org$pandalanguage$pandac$ASTNode* $tmp597;
    org$pandalanguage$pandac$ASTNode* callTarget602 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp603;
    org$pandalanguage$pandac$ASTNode* $tmp604;
    panda$collections$Array* callArgs609 = NULL;
    panda$collections$Array* $tmp610;
    panda$collections$Array* $tmp611;
    org$pandalanguage$pandac$ASTNode* $tmp613;
    org$pandalanguage$pandac$ASTNode* $tmp615;
    org$pandalanguage$pandac$ASTNode* $tmp616;
    org$pandalanguage$pandac$ASTNode* $tmp617;
    panda$collections$ImmutableArray* $tmp621;
    panda$core$String* text624 = NULL;
    panda$core$String* $tmp625;
    panda$core$String* $tmp626;
    panda$core$MutableString* $tmp628;
    panda$core$MutableString* $tmp629;
    panda$core$MutableString* $tmp630;
    org$pandalanguage$pandac$ASTNode* $tmp637;
    org$pandalanguage$pandac$ASTNode* $tmp638;
    org$pandalanguage$pandac$ASTNode* $tmp639;
    org$pandalanguage$pandac$ASTNode* $tmp640;
    org$pandalanguage$pandac$ASTNode* $tmp643;
    org$pandalanguage$pandac$ASTNode* $tmp644;
    org$pandalanguage$pandac$ASTNode* $tmp645;
    org$pandalanguage$pandac$ASTNode* $tmp647;
    org$pandalanguage$pandac$ASTNode* $tmp648;
    org$pandalanguage$pandac$ASTNode* $tmp649;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    panda$core$String* $tmp658;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp659;
    panda$core$String* $tmp664;
    org$pandalanguage$pandac$ASTNode* $tmp666;
    org$pandalanguage$pandac$ASTNode* $tmp667;
    org$pandalanguage$pandac$ASTNode* $tmp668;
    panda$core$String* $tmp670;
    int $tmp397;
    {
        $atPre1398 = self->allowLambdas;
        int $tmp401;
        {
            org$pandalanguage$pandac$parser$Token $tmp403 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            start402 = $tmp403;
            panda$core$Bit $tmp405 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start402.kind.$rawValue, ((panda$core$Int64) { 7 }));
            bool $tmp404 = $tmp405.value;
            if (!$tmp404) goto $l406;
            panda$core$Bit $tmp407 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start402.kind.$rawValue, ((panda$core$Int64) { 6 }));
            $tmp404 = $tmp407.value;
            $l406:;
            panda$core$Bit $tmp408 = { $tmp404 };
            if ($tmp408.value) {
            {
                panda$core$String* $tmp413 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start402);
                $tmp412 = $tmp413;
                panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s411, $tmp412);
                $tmp410 = $tmp414;
                panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s415);
                $tmp409 = $tmp416;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start402, $tmp409);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                $tmp418 = NULL;
                $returnValue417 = $tmp418;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
                $tmp401 = 0;
                goto $l399;
                $l419:;
                $tmp397 = 0;
                goto $l395;
                $l420:;
                return $returnValue417;
            }
            }
            $tmp423 = NULL;
            result422 = $tmp423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
            panda$core$MutableString* $tmp427 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp427);
            $tmp426 = $tmp427;
            $tmp425 = $tmp426;
            chunk424 = $tmp425;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp425));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
            $l428:;
            while (true) {
            {
                org$pandalanguage$pandac$parser$Token $tmp431 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                token430 = $tmp431;
                panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token430.kind.$rawValue, start402.kind.$rawValue);
                if ($tmp432.value) {
                {
                    goto $l429;
                }
                }
                {
                    $match$272_13433 = token430.kind;
                    panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13433.$rawValue, ((panda$core$Int64) { 12 }));
                    if ($tmp434.value) {
                    {
                        int $tmp437;
                        {
                            panda$core$String* $tmp441 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token430);
                            $tmp440 = $tmp441;
                            $tmp439 = $tmp440;
                            str438 = $tmp439;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                            panda$core$Char8$init$panda$core$UInt8(&$tmp442, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp443 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str438, $tmp442);
                            if ($tmp443.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start402, &$s444);
                                $tmp445 = NULL;
                                $returnValue417 = $tmp445;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
                                $tmp437 = 0;
                                goto $l435;
                                $l446:;
                                $tmp401 = 1;
                                goto $l399;
                                $l447:;
                                $tmp397 = 1;
                                goto $l395;
                                $l448:;
                                return $returnValue417;
                            }
                            }
                            panda$core$MutableString$append$panda$core$String(chunk424, str438);
                        }
                        $tmp437 = -1;
                        goto $l435;
                        $l435:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str438));
                        str438 = NULL;
                        switch ($tmp437) {
                            case -1: goto $l450;
                            case 0: goto $l446;
                        }
                        $l450:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13433.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp451.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start402, &$s452);
                        $tmp453 = NULL;
                        $returnValue417 = $tmp453;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp453));
                        $tmp401 = 2;
                        goto $l399;
                        $l454:;
                        $tmp397 = 2;
                        goto $l395;
                        $l455:;
                        return $returnValue417;
                    }
                    }
                    else {
                    panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$272_13433.$rawValue, ((panda$core$Int64) { 106 }));
                    if ($tmp457.value) {
                    {
                        int $tmp460;
                        {
                            org$pandalanguage$pandac$parser$Token $tmp462 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                            escape461 = $tmp462;
                            panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape461.kind.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp463.value) {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start402, &$s464);
                                $tmp465 = NULL;
                                $returnValue417 = $tmp465;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
                                $tmp460 = 0;
                                goto $l458;
                                $l466:;
                                $tmp401 = 3;
                                goto $l399;
                                $l467:;
                                $tmp397 = 3;
                                goto $l395;
                                $l468:;
                                return $returnValue417;
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
                            ITable* $tmp478 = $tmp476->$class->itable;
                            while ($tmp478->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp478 = $tmp478->next;
                            }
                            $fn480 $tmp479 = $tmp478->methods[0];
                            panda$core$Object* $tmp481 = $tmp479($tmp476, ((panda$core$Int64) { 0 }));
                            $tmp475 = $tmp481;
                            c474 = ((panda$core$Char8$wrapper*) $tmp475)->value;
                            panda$core$Panda$unref$panda$core$Object($tmp475);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
                            {
                                $match$291_21482 = c474;
                                panda$core$Char8$init$panda$core$UInt8(&$tmp483, ((panda$core$UInt8) { 110 }));
                                panda$core$Bit $tmp484 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21482, $tmp483);
                                if ($tmp484.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp485, ((panda$core$UInt8) { 10 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk424, $tmp485);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp486, ((panda$core$UInt8) { 114 }));
                                panda$core$Bit $tmp487 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21482, $tmp486);
                                if ($tmp487.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp488, ((panda$core$UInt8) { 13 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk424, $tmp488);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp489, ((panda$core$UInt8) { 116 }));
                                panda$core$Bit $tmp490 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21482, $tmp489);
                                if ($tmp490.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp491, ((panda$core$UInt8) { 9 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk424, $tmp491);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp492, ((panda$core$UInt8) { 39 }));
                                panda$core$Bit $tmp493 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21482, $tmp492);
                                if ($tmp493.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp494, ((panda$core$UInt8) { 39 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk424, $tmp494);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp495, ((panda$core$UInt8) { 34 }));
                                panda$core$Bit $tmp496 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21482, $tmp495);
                                if ($tmp496.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp497, ((panda$core$UInt8) { 34 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk424, $tmp497);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp498, ((panda$core$UInt8) { 92 }));
                                panda$core$Bit $tmp499 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21482, $tmp498);
                                if ($tmp499.value) {
                                {
                                    panda$core$Char8$init$panda$core$UInt8(&$tmp500, ((panda$core$UInt8) { 92 }));
                                    panda$core$MutableString$append$panda$core$Char8(chunk424, $tmp500);
                                }
                                }
                                else {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp501, ((panda$core$UInt8) { 123 }));
                                panda$core$Bit $tmp502 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$291_21482, $tmp501);
                                if ($tmp502.value) {
                                {
                                    {
                                        int $tmp505;
                                        {
                                            oldAllow506 = self->allowLambdas;
                                            self->allowLambdas = ((panda$core$Bit) { false });
                                            org$pandalanguage$pandac$ASTNode* $tmp510 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                            $tmp509 = $tmp510;
                                            $tmp508 = $tmp509;
                                            expr507 = $tmp508;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
                                            self->allowLambdas = oldAllow506;
                                            if (((panda$core$Bit) { expr507 == NULL }).value) {
                                            {
                                                $tmp511 = NULL;
                                                $returnValue417 = $tmp511;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
                                                $tmp505 = 0;
                                                goto $l503;
                                                $l512:;
                                                $tmp460 = 1;
                                                goto $l458;
                                                $l513:;
                                                $tmp401 = 4;
                                                goto $l399;
                                                $l514:;
                                                $tmp397 = 4;
                                                goto $l395;
                                                $l515:;
                                                return $returnValue417;
                                            }
                                            }
                                            $tmp518 = NULL;
                                            align517 = $tmp518;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
                                            $tmp520 = NULL;
                                            format519 = $tmp520;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp521, ((panda$core$Int64) { 105 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp522 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp521);
                                            if (((panda$core$Bit) { $tmp522.nonnull }).value) {
                                            {
                                                {
                                                    $tmp523 = align517;
                                                    panda$core$String* $tmp526 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start402);
                                                    $tmp525 = $tmp526;
                                                    $tmp524 = $tmp525;
                                                    align517 = $tmp524;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp524));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp527, ((panda$core$Int64) { 95 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp528 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp527);
                                            if (((panda$core$Bit) { $tmp528.nonnull }).value) {
                                            {
                                                int $tmp531;
                                                {
                                                    {
                                                        $tmp532 = format519;
                                                        panda$core$String* $tmp535 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start402);
                                                        $tmp534 = $tmp535;
                                                        $tmp533 = $tmp534;
                                                        format519 = $tmp533;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp532));
                                                    }
                                                    if (((panda$core$Bit) { format519 == NULL }).value) {
                                                    {
                                                        $tmp536 = NULL;
                                                        $returnValue417 = $tmp536;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
                                                        $tmp531 = 0;
                                                        goto $l529;
                                                        $l537:;
                                                        $tmp505 = 1;
                                                        goto $l503;
                                                        $l538:;
                                                        $tmp460 = 2;
                                                        goto $l458;
                                                        $l539:;
                                                        $tmp401 = 5;
                                                        goto $l399;
                                                        $l540:;
                                                        $tmp397 = 5;
                                                        goto $l395;
                                                        $l541:;
                                                        return $returnValue417;
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp546 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp548 = (($fn547) expr507->$class->vtable[2])(expr507);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp546, ((panda$core$Int64) { 41 }), $tmp548, &$s549);
                                                    $tmp545 = $tmp546;
                                                    $tmp544 = $tmp545;
                                                    formattable543 = $tmp544;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp544));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
                                                    org$pandalanguage$pandac$ASTNode* $tmp553 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp555 = (($fn554) expr507->$class->vtable[2])(expr507);
                                                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp556, ((panda$core$Int64) { 89 }));
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp553, ((panda$core$Int64) { 4 }), $tmp555, expr507, $tmp556, formattable543);
                                                    $tmp552 = $tmp553;
                                                    $tmp551 = $tmp552;
                                                    cast550 = $tmp551;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                                                    org$pandalanguage$pandac$ASTNode* $tmp560 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp562 = (($fn561) expr507->$class->vtable[2])(expr507);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp560, ((panda$core$Int64) { 15 }), $tmp562, cast550, &$s563);
                                                    $tmp559 = $tmp560;
                                                    $tmp558 = $tmp559;
                                                    dot557 = $tmp558;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp558));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                                                    panda$collections$Array* $tmp567 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp567);
                                                    $tmp566 = $tmp567;
                                                    $tmp565 = $tmp566;
                                                    callArgs564 = $tmp565;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                                                    org$pandalanguage$pandac$ASTNode* $tmp569 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp569, ((panda$core$Int64) { 37 }), start402.position, format519);
                                                    $tmp568 = $tmp569;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs564, ((panda$core$Object*) $tmp568));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp568));
                                                    {
                                                        $tmp570 = expr507;
                                                        org$pandalanguage$pandac$ASTNode* $tmp573 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        org$pandalanguage$pandac$Position $tmp575 = (($fn574) expr507->$class->vtable[2])(expr507);
                                                        panda$collections$ImmutableArray* $tmp577 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs564);
                                                        $tmp576 = $tmp577;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp573, ((panda$core$Int64) { 8 }), $tmp575, dot557, $tmp576);
                                                        $tmp572 = $tmp573;
                                                        $tmp571 = $tmp572;
                                                        expr507 = $tmp571;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
                                                    }
                                                }
                                                $tmp531 = -1;
                                                goto $l529;
                                                $l529:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable543));
                                                formattable543 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast550));
                                                cast550 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot557));
                                                dot557 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs564));
                                                callArgs564 = NULL;
                                                switch ($tmp531) {
                                                    case 0: goto $l537;
                                                    case -1: goto $l578;
                                                }
                                                $l578:;
                                            }
                                            }
                                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp579, ((panda$core$Int64) { 100 }));
                                            org$pandalanguage$pandac$parser$Token$nullable $tmp581 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp579, &$s580);
                                            if (((panda$core$Bit) { !$tmp581.nonnull }).value) {
                                            {
                                                $tmp582 = NULL;
                                                $returnValue417 = $tmp582;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp582));
                                                $tmp505 = 2;
                                                goto $l503;
                                                $l583:;
                                                $tmp460 = 3;
                                                goto $l458;
                                                $l584:;
                                                $tmp401 = 6;
                                                goto $l399;
                                                $l585:;
                                                $tmp397 = 6;
                                                goto $l395;
                                                $l586:;
                                                return $returnValue417;
                                            }
                                            }
                                            if (((panda$core$Bit) { align517 != NULL }).value) {
                                            {
                                                int $tmp590;
                                                {
                                                    if (((panda$core$Bit) { format519 == NULL }).value) {
                                                    {
                                                        {
                                                            $tmp591 = expr507;
                                                            org$pandalanguage$pandac$ASTNode* $tmp594 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr507);
                                                            $tmp593 = $tmp594;
                                                            $tmp592 = $tmp593;
                                                            expr507 = $tmp592;
                                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp591));
                                                        }
                                                    }
                                                    }
                                                    org$pandalanguage$pandac$ASTNode* $tmp598 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp600 = (($fn599) expr507->$class->vtable[2])(expr507);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp598, ((panda$core$Int64) { 41 }), $tmp600, &$s601);
                                                    $tmp597 = $tmp598;
                                                    $tmp596 = $tmp597;
                                                    pandaType595 = $tmp596;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
                                                    org$pandalanguage$pandac$ASTNode* $tmp605 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp607 = (($fn606) expr507->$class->vtable[2])(expr507);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp605, ((panda$core$Int64) { 15 }), $tmp607, pandaType595, &$s608);
                                                    $tmp604 = $tmp605;
                                                    $tmp603 = $tmp604;
                                                    callTarget602 = $tmp603;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                                                    panda$collections$Array* $tmp612 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp612);
                                                    $tmp611 = $tmp612;
                                                    $tmp610 = $tmp611;
                                                    callArgs609 = $tmp610;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs609, ((panda$core$Object*) expr507));
                                                    org$pandalanguage$pandac$ASTNode* $tmp614 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp614, ((panda$core$Int64) { 37 }), start402.position, align517);
                                                    $tmp613 = $tmp614;
                                                    panda$collections$Array$add$panda$collections$Array$T(callArgs609, ((panda$core$Object*) $tmp613));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp613));
                                                    {
                                                        $tmp615 = expr507;
                                                        org$pandalanguage$pandac$ASTNode* $tmp618 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                        org$pandalanguage$pandac$Position $tmp620 = (($fn619) expr507->$class->vtable[2])(expr507);
                                                        panda$collections$ImmutableArray* $tmp622 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs609);
                                                        $tmp621 = $tmp622;
                                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp618, ((panda$core$Int64) { 8 }), $tmp620, callTarget602, $tmp621);
                                                        $tmp617 = $tmp618;
                                                        $tmp616 = $tmp617;
                                                        expr507 = $tmp616;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp616));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                                    }
                                                }
                                                $tmp590 = -1;
                                                goto $l588;
                                                $l588:;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType595));
                                                pandaType595 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget602));
                                                callTarget602 = NULL;
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs609));
                                                callArgs609 = NULL;
                                                switch ($tmp590) {
                                                    case -1: goto $l623;
                                                }
                                                $l623:;
                                            }
                                            }
                                            panda$core$String* $tmp627 = panda$core$MutableString$finish$R$panda$core$String(chunk424);
                                            $tmp626 = $tmp627;
                                            $tmp625 = $tmp626;
                                            text624 = $tmp625;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp625));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                                            {
                                                $tmp628 = chunk424;
                                                panda$core$MutableString* $tmp631 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                                panda$core$MutableString$init($tmp631);
                                                $tmp630 = $tmp631;
                                                $tmp629 = $tmp630;
                                                chunk424 = $tmp629;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
                                            }
                                            panda$core$Bit $tmp634 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text624, &$s633);
                                            bool $tmp632 = $tmp634.value;
                                            if ($tmp632) goto $l635;
                                            $tmp632 = ((panda$core$Bit) { result422 != NULL }).value;
                                            $l635:;
                                            panda$core$Bit $tmp636 = { $tmp632 };
                                            if ($tmp636.value) {
                                            {
                                                {
                                                    $tmp637 = result422;
                                                    org$pandalanguage$pandac$ASTNode* $tmp641 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp641, ((panda$core$Int64) { 37 }), start402.position, text624);
                                                    $tmp640 = $tmp641;
                                                    org$pandalanguage$pandac$ASTNode* $tmp642 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result422, $tmp640);
                                                    $tmp639 = $tmp642;
                                                    $tmp638 = $tmp639;
                                                    result422 = $tmp638;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp638));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                                                }
                                                {
                                                    $tmp643 = result422;
                                                    org$pandalanguage$pandac$ASTNode* $tmp646 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result422, expr507);
                                                    $tmp645 = $tmp646;
                                                    $tmp644 = $tmp645;
                                                    result422 = $tmp644;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp647 = result422;
                                                    org$pandalanguage$pandac$ASTNode* $tmp650 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr507);
                                                    $tmp649 = $tmp650;
                                                    $tmp648 = $tmp649;
                                                    result422 = $tmp648;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                                                }
                                            }
                                            }
                                        }
                                        $tmp505 = -1;
                                        goto $l503;
                                        $l503:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr507));
                                        expr507 = NULL;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align517));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format519));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text624));
                                        text624 = NULL;
                                        switch ($tmp505) {
                                            case 0: goto $l512;
                                            case -1: goto $l651;
                                            case 1: goto $l538;
                                            case 2: goto $l583;
                                        }
                                        $l651:;
                                    }
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token430, &$s652);
                                    $tmp653 = NULL;
                                    $returnValue417 = $tmp653;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
                                    $tmp460 = 4;
                                    goto $l458;
                                    $l654:;
                                    $tmp401 = 7;
                                    goto $l399;
                                    $l655:;
                                    $tmp397 = 7;
                                    goto $l395;
                                    $l656:;
                                    return $returnValue417;
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            panda$core$String$Index $tmp660 = panda$core$String$start$R$panda$core$String$Index(escapeText470);
                            panda$core$String$Index $tmp661 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText470, $tmp660);
                            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp659, ((panda$core$String$Index$nullable) { $tmp661, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp662 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText470, $tmp659);
                            $tmp658 = $tmp662;
                            panda$core$MutableString$append$panda$core$String(chunk424, $tmp658);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                        }
                        $tmp460 = -1;
                        goto $l458;
                        $l458:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText470));
                        escapeText470 = NULL;
                        switch ($tmp460) {
                            case 4: goto $l654;
                            case 0: goto $l466;
                            case 1: goto $l513;
                            case -1: goto $l663;
                            case 3: goto $l584;
                            case 2: goto $l539;
                        }
                        $l663:;
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp665 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token430);
                        $tmp664 = $tmp665;
                        panda$core$MutableString$append$panda$core$String(chunk424, $tmp664);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
                    }
                    }
                    }
                    }
                }
            }
            }
            $l429:;
            org$pandalanguage$pandac$ASTNode* $tmp669 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp671 = panda$core$MutableString$finish$R$panda$core$String(chunk424);
            $tmp670 = $tmp671;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp669, ((panda$core$Int64) { 37 }), start402.position, $tmp670);
            $tmp668 = $tmp669;
            org$pandalanguage$pandac$ASTNode* $tmp672 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result422, $tmp668);
            $tmp667 = $tmp672;
            $tmp666 = $tmp667;
            $returnValue417 = $tmp666;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp666));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
            $tmp401 = 8;
            goto $l399;
            $l673:;
            $tmp397 = 8;
            goto $l395;
            $l674:;
            return $returnValue417;
        }
        $l399:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk424));
        chunk424 = NULL;
        switch ($tmp401) {
            case 2: goto $l454;
            case 0: goto $l419;
            case 3: goto $l467;
            case 1: goto $l447;
            case 7: goto $l655;
            case 5: goto $l540;
            case 8: goto $l673;
            case 6: goto $l585;
            case 4: goto $l514;
        }
        $l676:;
    }
    $tmp397 = -1;
    goto $l395;
    $l395:;
    panda$core$Bit $tmp678 = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->allowLambdas, $atPre1398);
    PANDA_ASSERT($tmp678.value);
    switch ($tmp397) {
        case 1: goto $l448;
        case 0: goto $l420;
        case 2: goto $l455;
        case 3: goto $l468;
        case 6: goto $l586;
        case 7: goto $l656;
        case -1: goto $l677;
        case 4: goto $l515;
        case 8: goto $l674;
        case 5: goto $l541;
    }
    $l677:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp683;
    org$pandalanguage$pandac$ASTNode* $returnValue686;
    org$pandalanguage$pandac$ASTNode* $tmp687;
    org$pandalanguage$pandac$ASTNode* expr690 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp691;
    org$pandalanguage$pandac$ASTNode* $tmp692;
    org$pandalanguage$pandac$ASTNode* $tmp694;
    org$pandalanguage$pandac$ASTNode* $match$377_9700 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp701;
    org$pandalanguage$pandac$Position firstPosition703;
    panda$core$String* firstName705 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp707;
    panda$collections$Array* parameters712 = NULL;
    panda$collections$Array* $tmp713;
    panda$collections$Array* $tmp714;
    org$pandalanguage$pandac$ASTNode* firstType716 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp717;
    org$pandalanguage$pandac$ASTNode* $tmp718;
    org$pandalanguage$pandac$ASTNode* $tmp720;
    org$pandalanguage$pandac$ASTNode* $tmp725;
    org$pandalanguage$pandac$parser$Token$Kind $tmp730;
    org$pandalanguage$pandac$parser$Token$nullable nextName735;
    org$pandalanguage$pandac$parser$Token$Kind $tmp736;
    org$pandalanguage$pandac$parser$Token$Kind $tmp739;
    org$pandalanguage$pandac$ASTNode* $tmp742;
    org$pandalanguage$pandac$ASTNode* nextType748 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp749;
    org$pandalanguage$pandac$ASTNode* $tmp750;
    org$pandalanguage$pandac$ASTNode* $tmp752;
    org$pandalanguage$pandac$ASTNode* $tmp758;
    panda$core$String* $tmp760;
    org$pandalanguage$pandac$parser$Token$Kind $tmp763;
    org$pandalanguage$pandac$ASTNode* $tmp766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp771;
    org$pandalanguage$pandac$ASTNode* $tmp774;
    org$pandalanguage$pandac$ASTNode* body779 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp780;
    org$pandalanguage$pandac$ASTNode* $tmp781;
    org$pandalanguage$pandac$ASTNode* $tmp783;
    panda$core$String* $tmp788;
    panda$core$String* $tmp789;
    panda$core$Object* $tmp791;
    org$pandalanguage$pandac$ASTNode* $tmp796;
    org$pandalanguage$pandac$ASTNode* $tmp797;
    panda$collections$ImmutableArray* $tmp799;
    org$pandalanguage$pandac$parser$Token$Kind $tmp806;
    panda$collections$Array* parameters811 = NULL;
    panda$collections$Array* $tmp812;
    panda$collections$Array* $tmp813;
    panda$core$Bit validLambda815;
    org$pandalanguage$pandac$parser$Token$Kind $tmp819;
    org$pandalanguage$pandac$ASTNode* nextExpr824 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp825;
    org$pandalanguage$pandac$ASTNode* $tmp826;
    org$pandalanguage$pandac$ASTNode* $tmp828;
    org$pandalanguage$pandac$ASTNode* $tmp836;
    org$pandalanguage$pandac$parser$Token$Kind $tmp844;
    org$pandalanguage$pandac$ASTNode* $tmp847;
    org$pandalanguage$pandac$parser$Token$Kind $tmp854;
    org$pandalanguage$pandac$ASTNode* body860 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp861;
    org$pandalanguage$pandac$ASTNode* $tmp862;
    org$pandalanguage$pandac$ASTNode* $tmp864;
    panda$core$String* $tmp870;
    panda$core$String* $tmp871;
    panda$core$Object* $tmp873;
    org$pandalanguage$pandac$ASTNode* $tmp878;
    org$pandalanguage$pandac$ASTNode* $tmp879;
    panda$collections$ImmutableArray* $tmp881;
    panda$core$String* $tmp889;
    panda$core$String* $tmp890;
    panda$core$Object* $tmp892;
    org$pandalanguage$pandac$ASTNode* $tmp897;
    org$pandalanguage$pandac$ASTNode* $tmp898;
    panda$collections$ImmutableArray* $tmp900;
    org$pandalanguage$pandac$parser$Token$Kind $tmp910;
    org$pandalanguage$pandac$parser$Token$Kind $tmp912;
    org$pandalanguage$pandac$ASTNode* $tmp914;
    panda$collections$Array* arguments919 = NULL;
    panda$collections$Array* $tmp920;
    panda$collections$Array* $tmp921;
    org$pandalanguage$pandac$ASTNode* nextExpr928 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp929;
    org$pandalanguage$pandac$ASTNode* $tmp930;
    org$pandalanguage$pandac$ASTNode* $tmp932;
    org$pandalanguage$pandac$parser$Token$Kind $tmp940;
    org$pandalanguage$pandac$parser$Token$Kind $tmp942;
    org$pandalanguage$pandac$ASTNode* $tmp944;
    org$pandalanguage$pandac$ASTNode* $tmp945;
    panda$collections$ImmutableArray* $tmp947;
    int $tmp681;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp683, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp685 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp683, &$s684);
        start682 = $tmp685;
        if (((panda$core$Bit) { !start682.nonnull }).value) {
        {
            $tmp687 = NULL;
            $returnValue686 = $tmp687;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp687));
            $tmp681 = 0;
            goto $l679;
            $l688:;
            return $returnValue686;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp693 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp692 = $tmp693;
        $tmp691 = $tmp692;
        expr690 = $tmp691;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
        if (((panda$core$Bit) { expr690 == NULL }).value) {
        {
            $tmp694 = NULL;
            $returnValue686 = $tmp694;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp694));
            $tmp681 = 1;
            goto $l679;
            $l695:;
            return $returnValue686;
        }
        }
        int $tmp699;
        {
            $tmp701 = expr690;
            $match$377_9700 = $tmp701;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
            panda$core$Bit $tmp702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$377_9700->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp702.value) {
            {
                org$pandalanguage$pandac$Position* $tmp704 = ((org$pandalanguage$pandac$Position*) ((char*) $match$377_9700->$data + 0));
                firstPosition703 = *$tmp704;
                panda$core$String** $tmp706 = ((panda$core$String**) ((char*) $match$377_9700->$data + 16));
                firstName705 = *$tmp706;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp707, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp708 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp707);
                if (((panda$core$Bit) { $tmp708.nonnull }).value) {
                {
                    int $tmp711;
                    {
                        panda$collections$Array* $tmp715 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp715);
                        $tmp714 = $tmp715;
                        $tmp713 = $tmp714;
                        parameters712 = $tmp713;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp713));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                        org$pandalanguage$pandac$ASTNode* $tmp719 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp718 = $tmp719;
                        $tmp717 = $tmp718;
                        firstType716 = $tmp717;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp717));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                        if (((panda$core$Bit) { firstType716 == NULL }).value) {
                        {
                            $tmp720 = NULL;
                            $returnValue686 = $tmp720;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp720));
                            $tmp711 = 0;
                            goto $l709;
                            $l721:;
                            $tmp699 = 0;
                            goto $l697;
                            $l722:;
                            $tmp681 = 2;
                            goto $l679;
                            $l723:;
                            return $returnValue686;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp726 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp726, ((panda$core$Int64) { 31 }), firstPosition703, firstName705, firstType716);
                        $tmp725 = $tmp726;
                        panda$collections$Array$add$panda$collections$Array$T(parameters712, ((panda$core$Object*) $tmp725));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                        $l727:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp730, ((panda$core$Int64) { 105 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp731 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp730);
                        bool $tmp729 = ((panda$core$Bit) { $tmp731.nonnull }).value;
                        if (!$tmp729) goto $l728;
                        {
                            int $tmp734;
                            {
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp736, ((panda$core$Int64) { 48 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp738 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp736, &$s737);
                                nextName735 = $tmp738;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp739, ((panda$core$Int64) { 95 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp741 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp739, &$s740);
                                if (((panda$core$Bit) { !$tmp741.nonnull }).value) {
                                {
                                    $tmp742 = NULL;
                                    $returnValue686 = $tmp742;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
                                    $tmp734 = 0;
                                    goto $l732;
                                    $l743:;
                                    $tmp711 = 1;
                                    goto $l709;
                                    $l744:;
                                    $tmp699 = 1;
                                    goto $l697;
                                    $l745:;
                                    $tmp681 = 3;
                                    goto $l679;
                                    $l746:;
                                    return $returnValue686;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp751 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp750 = $tmp751;
                                $tmp749 = $tmp750;
                                nextType748 = $tmp749;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp749));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
                                if (((panda$core$Bit) { nextType748 == NULL }).value) {
                                {
                                    $tmp752 = NULL;
                                    $returnValue686 = $tmp752;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp752));
                                    $tmp734 = 1;
                                    goto $l732;
                                    $l753:;
                                    $tmp711 = 2;
                                    goto $l709;
                                    $l754:;
                                    $tmp699 = 2;
                                    goto $l697;
                                    $l755:;
                                    $tmp681 = 4;
                                    goto $l679;
                                    $l756:;
                                    return $returnValue686;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp759 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$core$String* $tmp761 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) nextName735.value));
                                $tmp760 = $tmp761;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp759, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) nextName735.value).position, $tmp760, nextType748);
                                $tmp758 = $tmp759;
                                panda$collections$Array$add$panda$collections$Array$T(parameters712, ((panda$core$Object*) $tmp758));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp758));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
                            }
                            $tmp734 = -1;
                            goto $l732;
                            $l732:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextType748));
                            nextType748 = NULL;
                            switch ($tmp734) {
                                case -1: goto $l762;
                                case 0: goto $l743;
                                case 1: goto $l753;
                            }
                            $l762:;
                        }
                        goto $l727;
                        $l728:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp763, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp765 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp763, &$s764);
                        if (((panda$core$Bit) { !$tmp765.nonnull }).value) {
                        {
                            $tmp766 = NULL;
                            $returnValue686 = $tmp766;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
                            $tmp711 = 3;
                            goto $l709;
                            $l767:;
                            $tmp699 = 3;
                            goto $l697;
                            $l768:;
                            $tmp681 = 5;
                            goto $l679;
                            $l769:;
                            return $returnValue686;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp771, ((panda$core$Int64) { 90 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp773 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp771, &$s772);
                        if (((panda$core$Bit) { !$tmp773.nonnull }).value) {
                        {
                            $tmp774 = NULL;
                            $returnValue686 = $tmp774;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                            $tmp711 = 4;
                            goto $l709;
                            $l775:;
                            $tmp699 = 4;
                            goto $l697;
                            $l776:;
                            $tmp681 = 6;
                            goto $l679;
                            $l777:;
                            return $returnValue686;
                        }
                        }
                        org$pandalanguage$pandac$ASTNode* $tmp782 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp781 = $tmp782;
                        $tmp780 = $tmp781;
                        body779 = $tmp780;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp780));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp781));
                        if (((panda$core$Bit) { body779 == NULL }).value) {
                        {
                            $tmp783 = NULL;
                            $returnValue686 = $tmp783;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp783));
                            $tmp711 = 5;
                            goto $l709;
                            $l784:;
                            $tmp699 = 5;
                            goto $l697;
                            $l785:;
                            $tmp681 = 7;
                            goto $l679;
                            $l786:;
                            return $returnValue686;
                        }
                        }
                        org$pandalanguage$pandac$Position$wrapper* $tmp792;
                        $tmp792 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp792->value = ((org$pandalanguage$pandac$parser$Token) start682.value).position;
                        $tmp791 = ((panda$core$Object*) $tmp792);
                        panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s790, $tmp791);
                        $tmp789 = $tmp793;
                        panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp789, &$s794);
                        $tmp788 = $tmp795;
                        panda$io$Console$printLine$panda$core$String($tmp788);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
                        panda$core$Panda$unref$panda$core$Object($tmp791);
                        org$pandalanguage$pandac$ASTNode* $tmp798 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$collections$ImmutableArray* $tmp800 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters712);
                        $tmp799 = $tmp800;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp798, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start682.value).position, $tmp799, body779);
                        $tmp797 = $tmp798;
                        $tmp796 = $tmp797;
                        $returnValue686 = $tmp796;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp796));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                        $tmp711 = 6;
                        goto $l709;
                        $l801:;
                        $tmp699 = 6;
                        goto $l697;
                        $l802:;
                        $tmp681 = 8;
                        goto $l679;
                        $l803:;
                        return $returnValue686;
                    }
                    $l709:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters712));
                    parameters712 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) firstType716));
                    firstType716 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body779));
                    body779 = NULL;
                    switch ($tmp711) {
                        case 2: goto $l754;
                        case 0: goto $l721;
                        case 4: goto $l775;
                        case 5: goto $l784;
                        case 6: goto $l801;
                        case 3: goto $l767;
                        case 1: goto $l744;
                    }
                    $l805:;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp806, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp807 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp806);
                if (((panda$core$Bit) { $tmp807.nonnull }).value) {
                {
                    int $tmp810;
                    {
                        panda$collections$Array* $tmp814 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp814);
                        $tmp813 = $tmp814;
                        $tmp812 = $tmp813;
                        parameters811 = $tmp812;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp812));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                        panda$collections$Array$add$panda$collections$Array$T(parameters811, ((panda$core$Object*) expr690));
                        validLambda815 = ((panda$core$Bit) { true });
                        $l816:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp819, ((panda$core$Int64) { 105 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp820 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp819);
                        bool $tmp818 = ((panda$core$Bit) { $tmp820.nonnull }).value;
                        if (!$tmp818) goto $l817;
                        {
                            int $tmp823;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp827 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp826 = $tmp827;
                                $tmp825 = $tmp826;
                                nextExpr824 = $tmp825;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
                                if (((panda$core$Bit) { nextExpr824 == NULL }).value) {
                                {
                                    $tmp828 = NULL;
                                    $returnValue686 = $tmp828;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
                                    $tmp823 = 0;
                                    goto $l821;
                                    $l829:;
                                    $tmp810 = 0;
                                    goto $l808;
                                    $l830:;
                                    $tmp699 = 7;
                                    goto $l697;
                                    $l831:;
                                    $tmp681 = 9;
                                    goto $l679;
                                    $l832:;
                                    return $returnValue686;
                                }
                                }
                                bool $tmp834 = validLambda815.value;
                                if (!$tmp834) goto $l835;
                                $tmp836 = nextExpr824;
                                panda$core$Bit $tmp840;
                                if (((panda$core$Bit) { $tmp836 != NULL }).value) goto $l837; else goto $l838;
                                $l837:;
                                panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp836->$rawValue, ((panda$core$Int64) { 20 }));
                                $tmp840 = $tmp841;
                                goto $l839;
                                $l838:;
                                $tmp840 = ((panda$core$Bit) { false });
                                goto $l839;
                                $l839:;
                                $tmp834 = $tmp840.value;
                                $l835:;
                                panda$core$Bit $tmp842 = { $tmp834 };
                                validLambda815 = $tmp842;
                                panda$collections$Array$add$panda$collections$Array$T(parameters811, ((panda$core$Object*) nextExpr824));
                            }
                            $tmp823 = -1;
                            goto $l821;
                            $l821:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr824));
                            nextExpr824 = NULL;
                            switch ($tmp823) {
                                case 0: goto $l829;
                                case -1: goto $l843;
                            }
                            $l843:;
                        }
                        goto $l816;
                        $l817:;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp844, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp846 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp844, &$s845);
                        if (((panda$core$Bit) { !$tmp846.nonnull }).value) {
                        {
                            $tmp847 = NULL;
                            $returnValue686 = $tmp847;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
                            $tmp810 = 1;
                            goto $l808;
                            $l848:;
                            $tmp699 = 8;
                            goto $l697;
                            $l849:;
                            $tmp681 = 10;
                            goto $l679;
                            $l850:;
                            return $returnValue686;
                        }
                        }
                        bool $tmp852 = validLambda815.value;
                        if (!$tmp852) goto $l853;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp854, ((panda$core$Int64) { 90 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp855 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp854);
                        $tmp852 = ((panda$core$Bit) { $tmp855.nonnull }).value;
                        $l853:;
                        panda$core$Bit $tmp856 = { $tmp852 };
                        if ($tmp856.value) {
                        {
                            int $tmp859;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp863 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp862 = $tmp863;
                                $tmp861 = $tmp862;
                                body860 = $tmp861;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp861));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp862));
                                if (((panda$core$Bit) { body860 == NULL }).value) {
                                {
                                    $tmp864 = NULL;
                                    $returnValue686 = $tmp864;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp864));
                                    $tmp859 = 0;
                                    goto $l857;
                                    $l865:;
                                    $tmp810 = 2;
                                    goto $l808;
                                    $l866:;
                                    $tmp699 = 9;
                                    goto $l697;
                                    $l867:;
                                    $tmp681 = 11;
                                    goto $l679;
                                    $l868:;
                                    return $returnValue686;
                                }
                                }
                                org$pandalanguage$pandac$Position$wrapper* $tmp874;
                                $tmp874 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                                $tmp874->value = ((org$pandalanguage$pandac$parser$Token) start682.value).position;
                                $tmp873 = ((panda$core$Object*) $tmp874);
                                panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s872, $tmp873);
                                $tmp871 = $tmp875;
                                panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s876);
                                $tmp870 = $tmp877;
                                panda$io$Console$printLine$panda$core$String($tmp870);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
                                panda$core$Panda$unref$panda$core$Object($tmp873);
                                org$pandalanguage$pandac$ASTNode* $tmp880 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                panda$collections$ImmutableArray* $tmp882 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters811);
                                $tmp881 = $tmp882;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp880, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) start682.value).position, $tmp881, body860);
                                $tmp879 = $tmp880;
                                $tmp878 = $tmp879;
                                $returnValue686 = $tmp878;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp878));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
                                $tmp859 = 1;
                                goto $l857;
                                $l883:;
                                $tmp810 = 3;
                                goto $l808;
                                $l884:;
                                $tmp699 = 10;
                                goto $l697;
                                $l885:;
                                $tmp681 = 12;
                                goto $l679;
                                $l886:;
                                return $returnValue686;
                            }
                            $l857:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body860));
                            body860 = NULL;
                            switch ($tmp859) {
                                case 0: goto $l865;
                                case 1: goto $l883;
                            }
                            $l888:;
                        }
                        }
                        org$pandalanguage$pandac$Position$wrapper* $tmp893;
                        $tmp893 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp893->value = ((org$pandalanguage$pandac$parser$Token) start682.value).position;
                        $tmp892 = ((panda$core$Object*) $tmp893);
                        panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s891, $tmp892);
                        $tmp890 = $tmp894;
                        panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s895);
                        $tmp889 = $tmp896;
                        panda$io$Console$printLine$panda$core$String($tmp889);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
                        panda$core$Panda$unref$panda$core$Object($tmp892);
                        org$pandalanguage$pandac$ASTNode* $tmp899 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        panda$collections$ImmutableArray* $tmp901 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters811);
                        $tmp900 = $tmp901;
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp899, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start682.value).position, $tmp900);
                        $tmp898 = $tmp899;
                        $tmp897 = $tmp898;
                        $returnValue686 = $tmp897;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp897));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                        $tmp810 = 4;
                        goto $l808;
                        $l902:;
                        $tmp699 = 11;
                        goto $l697;
                        $l903:;
                        $tmp681 = 13;
                        goto $l679;
                        $l904:;
                        return $returnValue686;
                    }
                    $l808:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters811));
                    parameters811 = NULL;
                    switch ($tmp810) {
                        case 3: goto $l884;
                        case 1: goto $l848;
                        case 0: goto $l830;
                        case 4: goto $l902;
                        case 2: goto $l866;
                    }
                    $l906:;
                }
                }
            }
            }
            else {
            {
                int $tmp909;
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp910, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp911 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp910);
                    if (((panda$core$Bit) { !$tmp911.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp912, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp912, &$s913);
                        $tmp914 = expr690;
                        $returnValue686 = $tmp914;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp914));
                        $tmp909 = 0;
                        goto $l907;
                        $l915:;
                        $tmp699 = 12;
                        goto $l697;
                        $l916:;
                        $tmp681 = 14;
                        goto $l679;
                        $l917:;
                        return $returnValue686;
                    }
                    }
                    panda$collections$Array* $tmp922 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp922);
                    $tmp921 = $tmp922;
                    $tmp920 = $tmp921;
                    arguments919 = $tmp920;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
                    panda$collections$Array$add$panda$collections$Array$T(arguments919, ((panda$core$Object*) expr690));
                    $l923:;
                    {
                        int $tmp927;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp931 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp930 = $tmp931;
                            $tmp929 = $tmp930;
                            nextExpr928 = $tmp929;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp930));
                            if (((panda$core$Bit) { nextExpr928 == NULL }).value) {
                            {
                                $tmp932 = NULL;
                                $returnValue686 = $tmp932;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
                                $tmp927 = 0;
                                goto $l925;
                                $l933:;
                                $tmp909 = 1;
                                goto $l907;
                                $l934:;
                                $tmp699 = 13;
                                goto $l697;
                                $l935:;
                                $tmp681 = 15;
                                goto $l679;
                                $l936:;
                                return $returnValue686;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(arguments919, ((panda$core$Object*) nextExpr928));
                        }
                        $tmp927 = -1;
                        goto $l925;
                        $l925:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) nextExpr928));
                        nextExpr928 = NULL;
                        switch ($tmp927) {
                            case 0: goto $l933;
                            case -1: goto $l938;
                        }
                        $l938:;
                    }
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp940, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp941 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp940);
                    bool $tmp939 = ((panda$core$Bit) { $tmp941.nonnull }).value;
                    if ($tmp939) goto $l923;
                    $l924:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp942, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp942, &$s943);
                    org$pandalanguage$pandac$ASTNode* $tmp946 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp948 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(arguments919);
                    $tmp947 = $tmp948;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp946, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start682.value).position, $tmp947);
                    $tmp945 = $tmp946;
                    $tmp944 = $tmp945;
                    $returnValue686 = $tmp944;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
                    $tmp909 = 2;
                    goto $l907;
                    $l949:;
                    $tmp699 = 14;
                    goto $l697;
                    $l950:;
                    $tmp681 = 16;
                    goto $l679;
                    $l951:;
                    return $returnValue686;
                }
                $l907:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arguments919));
                arguments919 = NULL;
                switch ($tmp909) {
                    case 0: goto $l915;
                    case 1: goto $l934;
                    case 2: goto $l949;
                }
                $l953:;
            }
            }
        }
        $tmp699 = -1;
        goto $l697;
        $l697:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
        switch ($tmp699) {
            case 13: goto $l935;
            case 3: goto $l768;
            case -1: goto $l954;
            case 12: goto $l916;
            case 11: goto $l903;
            case 0: goto $l722;
            case 5: goto $l785;
            case 4: goto $l776;
            case 1: goto $l745;
            case 14: goto $l950;
            case 7: goto $l831;
            case 2: goto $l755;
            case 6: goto $l802;
            case 8: goto $l849;
            case 10: goto $l885;
            case 9: goto $l867;
        }
        $l954:;
    }
    $tmp681 = -1;
    goto $l679;
    $l679:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr690));
    expr690 = NULL;
    switch ($tmp681) {
        case -1: goto $l955;
        case 15: goto $l936;
        case 5: goto $l769;
        case 14: goto $l917;
        case 13: goto $l904;
        case 1: goto $l695;
        case 7: goto $l786;
        case 3: goto $l746;
        case 6: goto $l777;
        case 10: goto $l850;
        case 9: goto $l832;
        case 4: goto $l756;
        case 8: goto $l803;
        case 12: goto $l886;
        case 16: goto $l951;
        case 0: goto $l688;
        case 2: goto $l723;
        case 11: goto $l868;
    }
    $l955:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start959;
    org$pandalanguage$pandac$parser$Token$Kind $tmp960;
    panda$core$String* $tmp963;
    panda$core$String* $tmp964;
    panda$core$Object* $tmp966;
    org$pandalanguage$pandac$parser$Token$Kind $tmp971;
    org$pandalanguage$pandac$ASTNode* t976 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp977;
    org$pandalanguage$pandac$ASTNode* $tmp978;
    org$pandalanguage$pandac$ASTNode* $returnValue980;
    org$pandalanguage$pandac$ASTNode* $tmp981;
    panda$collections$Array* parameters985 = NULL;
    panda$collections$Array* $tmp986;
    panda$collections$Array* $tmp987;
    org$pandalanguage$pandac$ASTNode* $tmp989;
    panda$core$String* $tmp991;
    org$pandalanguage$pandac$parser$Token$Kind $tmp993;
    org$pandalanguage$pandac$ASTNode* $tmp996;
    org$pandalanguage$pandac$ASTNode* expr1000 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1001;
    org$pandalanguage$pandac$ASTNode* $tmp1002;
    org$pandalanguage$pandac$ASTNode* $tmp1004;
    org$pandalanguage$pandac$ASTNode* $tmp1008;
    org$pandalanguage$pandac$ASTNode* $tmp1009;
    panda$collections$ImmutableArray* $tmp1011;
    panda$collections$Array* parameters1017 = NULL;
    panda$collections$Array* $tmp1018;
    panda$collections$Array* $tmp1019;
    org$pandalanguage$pandac$ASTNode* $tmp1021;
    panda$core$String* $tmp1023;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1025;
    org$pandalanguage$pandac$ASTNode* $tmp1028;
    org$pandalanguage$pandac$ASTNode* expr1031 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1032;
    org$pandalanguage$pandac$ASTNode* $tmp1033;
    org$pandalanguage$pandac$ASTNode* $tmp1035;
    org$pandalanguage$pandac$ASTNode* $tmp1038;
    org$pandalanguage$pandac$ASTNode* $tmp1039;
    panda$collections$ImmutableArray* $tmp1041;
    int $tmp958;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp960, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp962 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp960, &$s961);
        start959 = $tmp962;
        org$pandalanguage$pandac$Position$wrapper* $tmp967;
        $tmp967 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
        $tmp967->value = ((org$pandalanguage$pandac$parser$Token) start959.value).position;
        $tmp966 = ((panda$core$Object*) $tmp967);
        panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s965, $tmp966);
        $tmp964 = $tmp968;
        panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s969);
        $tmp963 = $tmp970;
        panda$io$Console$printLine$panda$core$String($tmp963);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
        panda$core$Panda$unref$panda$core$Object($tmp966);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp971, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp972 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp971);
        if (((panda$core$Bit) { $tmp972.nonnull }).value) {
        {
            int $tmp975;
            {
                org$pandalanguage$pandac$ASTNode* $tmp979 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp978 = $tmp979;
                $tmp977 = $tmp978;
                t976 = $tmp977;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
                if (((panda$core$Bit) { t976 == NULL }).value) {
                {
                    $tmp981 = NULL;
                    $returnValue980 = $tmp981;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp981));
                    $tmp975 = 0;
                    goto $l973;
                    $l982:;
                    $tmp958 = 0;
                    goto $l956;
                    $l983:;
                    return $returnValue980;
                }
                }
                panda$collections$Array* $tmp988 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp988);
                $tmp987 = $tmp988;
                $tmp986 = $tmp987;
                parameters985 = $tmp986;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                org$pandalanguage$pandac$ASTNode* $tmp990 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp992 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start959.value));
                $tmp991 = $tmp992;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp990, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start959.value).position, $tmp991, t976);
                $tmp989 = $tmp990;
                panda$collections$Array$add$panda$collections$Array$T(parameters985, ((panda$core$Object*) $tmp989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp993, ((panda$core$Int64) { 90 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp995 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp993, &$s994);
                if (((panda$core$Bit) { !$tmp995.nonnull }).value) {
                {
                    $tmp996 = NULL;
                    $returnValue980 = $tmp996;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp996));
                    $tmp975 = 1;
                    goto $l973;
                    $l997:;
                    $tmp958 = 1;
                    goto $l956;
                    $l998:;
                    return $returnValue980;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1003 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1002 = $tmp1003;
                $tmp1001 = $tmp1002;
                expr1000 = $tmp1001;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                if (((panda$core$Bit) { expr1000 == NULL }).value) {
                {
                    $tmp1004 = NULL;
                    $returnValue980 = $tmp1004;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1004));
                    $tmp975 = 2;
                    goto $l973;
                    $l1005:;
                    $tmp958 = 2;
                    goto $l956;
                    $l1006:;
                    return $returnValue980;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1010 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp1012 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters985);
                $tmp1011 = $tmp1012;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1010, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start959.value).position, $tmp1011, expr1000);
                $tmp1009 = $tmp1010;
                $tmp1008 = $tmp1009;
                $returnValue980 = $tmp1008;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
                $tmp975 = 3;
                goto $l973;
                $l1013:;
                $tmp958 = 3;
                goto $l956;
                $l1014:;
                return $returnValue980;
            }
            $l973:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t976));
            t976 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters985));
            parameters985 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1000));
            expr1000 = NULL;
            switch ($tmp975) {
                case 1: goto $l997;
                case 2: goto $l1005;
                case 3: goto $l1013;
                case 0: goto $l982;
            }
            $l1016:;
        }
        }
        panda$collections$Array* $tmp1020 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1020);
        $tmp1019 = $tmp1020;
        $tmp1018 = $tmp1019;
        parameters1017 = $tmp1018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1019));
        org$pandalanguage$pandac$ASTNode* $tmp1022 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1024 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start959.value));
        $tmp1023 = $tmp1024;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1022, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start959.value).position, $tmp1023);
        $tmp1021 = $tmp1022;
        panda$collections$Array$add$panda$collections$Array$T(parameters1017, ((panda$core$Object*) $tmp1021));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1025, ((panda$core$Int64) { 90 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1027 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1025, &$s1026);
        if (((panda$core$Bit) { !$tmp1027.nonnull }).value) {
        {
            $tmp1028 = NULL;
            $returnValue980 = $tmp1028;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1028));
            $tmp958 = 4;
            goto $l956;
            $l1029:;
            return $returnValue980;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1034 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1033 = $tmp1034;
        $tmp1032 = $tmp1033;
        expr1031 = $tmp1032;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
        if (((panda$core$Bit) { expr1031 == NULL }).value) {
        {
            $tmp1035 = NULL;
            $returnValue980 = $tmp1035;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1035));
            $tmp958 = 5;
            goto $l956;
            $l1036:;
            return $returnValue980;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1040 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1042 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1017);
        $tmp1041 = $tmp1042;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1040, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) start959.value).position, $tmp1041, expr1031);
        $tmp1039 = $tmp1040;
        $tmp1038 = $tmp1039;
        $returnValue980 = $tmp1038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1041));
        $tmp958 = 6;
        goto $l956;
        $l1043:;
        return $returnValue980;
    }
    $l956:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1017));
    parameters1017 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1031));
    expr1031 = NULL;
    switch ($tmp958) {
        case 3: goto $l1014;
        case 0: goto $l983;
        case 1: goto $l998;
        case 5: goto $l1036;
        case 4: goto $l1029;
        case 6: goto $l1043;
        case 2: goto $l1006;
    }
    $l1045:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t1046;
    org$pandalanguage$pandac$parser$Token$Kind $match$502_91048;
    org$pandalanguage$pandac$parser$Token$Kind check1050;
    org$pandalanguage$pandac$ASTNode* $returnValue1060;
    org$pandalanguage$pandac$ASTNode* $tmp1061;
    org$pandalanguage$pandac$ASTNode* $tmp1062;
    org$pandalanguage$pandac$ASTNode* $tmp1065;
    org$pandalanguage$pandac$ASTNode* $tmp1066;
    panda$core$String* $tmp1068;
    org$pandalanguage$pandac$ASTNode* $tmp1072;
    org$pandalanguage$pandac$ASTNode* $tmp1073;
    panda$core$String* $tmp1075;
    org$pandalanguage$pandac$ASTNode* $tmp1080;
    org$pandalanguage$pandac$ASTNode* $tmp1081;
    panda$core$String* $tmp1083;
    panda$core$String* $tmp1084;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1086;
    org$pandalanguage$pandac$ASTNode* $tmp1091;
    org$pandalanguage$pandac$ASTNode* $tmp1092;
    panda$core$String* $tmp1094;
    panda$core$String* $tmp1095;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1097;
    org$pandalanguage$pandac$ASTNode* $tmp1102;
    org$pandalanguage$pandac$ASTNode* $tmp1103;
    panda$core$String* $tmp1105;
    org$pandalanguage$pandac$ASTNode* $tmp1110;
    org$pandalanguage$pandac$ASTNode* $tmp1111;
    org$pandalanguage$pandac$ASTNode* $tmp1115;
    org$pandalanguage$pandac$ASTNode* $tmp1116;
    org$pandalanguage$pandac$ASTNode* $tmp1120;
    org$pandalanguage$pandac$ASTNode* $tmp1121;
    org$pandalanguage$pandac$ASTNode* $tmp1125;
    org$pandalanguage$pandac$ASTNode* $tmp1126;
    org$pandalanguage$pandac$ASTNode* $tmp1130;
    org$pandalanguage$pandac$ASTNode* $tmp1131;
    org$pandalanguage$pandac$ASTNode* $tmp1139;
    org$pandalanguage$pandac$ASTNode* $tmp1140;
    org$pandalanguage$pandac$ASTNode* $tmp1144;
    org$pandalanguage$pandac$ASTNode* $tmp1145;
    panda$core$String* name1152 = NULL;
    panda$core$String* $tmp1153;
    panda$core$String* $tmp1154;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1161;
    org$pandalanguage$pandac$ASTNode* expr1163 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1164;
    org$pandalanguage$pandac$ASTNode* $tmp1165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1167;
    org$pandalanguage$pandac$ASTNode* $tmp1169;
    org$pandalanguage$pandac$ASTNode* $tmp1170;
    org$pandalanguage$pandac$ASTNode* $tmp1178;
    org$pandalanguage$pandac$ASTNode* $tmp1179;
    panda$core$String* $tmp1183;
    panda$core$String* $tmp1184;
    org$pandalanguage$pandac$ASTNode* $tmp1189;
    org$pandalanguage$pandac$ASTNode* $tmp1198;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    panda$core$String* $tmp1202;
    panda$core$String* $tmp1203;
    panda$core$String* $tmp1205;
    org$pandalanguage$pandac$ASTNode* $tmp1210;
    org$pandalanguage$pandac$parser$Token $tmp1047 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t1046 = $tmp1047;
    {
        $match$502_91048 = t1046.kind;
        panda$core$Bit $tmp1049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1049.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1051 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            check1050 = $tmp1051.kind;
            bool $tmp1053 = self->allowLambdas.value;
            if (!$tmp1053) goto $l1054;
            panda$core$Bit $tmp1055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1050.$rawValue, ((panda$core$Int64) { 95 }));
            $tmp1053 = $tmp1055.value;
            $l1054:;
            panda$core$Bit $tmp1056 = { $tmp1053 };
            bool $tmp1052 = $tmp1056.value;
            if ($tmp1052) goto $l1057;
            panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(check1050.$rawValue, ((panda$core$Int64) { 90 }));
            $tmp1052 = $tmp1058.value;
            $l1057:;
            panda$core$Bit $tmp1059 = { $tmp1052 };
            if ($tmp1059.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1046);
                org$pandalanguage$pandac$ASTNode* $tmp1063 = org$pandalanguage$pandac$parser$Parser$lambda$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1062 = $tmp1063;
                $tmp1061 = $tmp1062;
                $returnValue1060 = $tmp1061;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
                return $returnValue1060;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1067 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1069 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1046);
            $tmp1068 = $tmp1069;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1067, ((panda$core$Int64) { 20 }), t1046.position, $tmp1068);
            $tmp1066 = $tmp1067;
            $tmp1065 = $tmp1066;
            $returnValue1060 = $tmp1065;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1071.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1074 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1076 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1046);
            $tmp1075 = $tmp1076;
            panda$core$UInt64$nullable $tmp1077 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp1075);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1074, ((panda$core$Int64) { 22 }), t1046.position, ((panda$core$UInt64) $tmp1077.value));
            $tmp1073 = $tmp1074;
            $tmp1072 = $tmp1073;
            $returnValue1060 = $tmp1072;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1072));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1073));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1075));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1079.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1082 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1085 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1046);
            $tmp1084 = $tmp1085;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1086, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1087 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1084, $tmp1086);
            $tmp1083 = $tmp1087;
            panda$core$UInt64$nullable $tmp1088 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1083, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1082, ((panda$core$Int64) { 22 }), t1046.position, ((panda$core$UInt64) $tmp1088.value));
            $tmp1081 = $tmp1082;
            $tmp1080 = $tmp1081;
            $returnValue1060 = $tmp1080;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1080));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1081));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1084));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1090.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1093 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1096 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1046);
            $tmp1095 = $tmp1096;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1097, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp1098 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp1095, $tmp1097);
            $tmp1094 = $tmp1098;
            panda$core$UInt64$nullable $tmp1099 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp1094, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp1093, ((panda$core$Int64) { 22 }), t1046.position, ((panda$core$UInt64) $tmp1099.value));
            $tmp1092 = $tmp1093;
            $tmp1091 = $tmp1092;
            $returnValue1060 = $tmp1091;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1091));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1094));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1095));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1101.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1104 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1106 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1046);
            $tmp1105 = $tmp1106;
            panda$core$Real64$nullable $tmp1107 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp1105);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp1104, ((panda$core$Int64) { 34 }), t1046.position, ((panda$core$Real64) $tmp1107.value));
            $tmp1103 = $tmp1104;
            $tmp1102 = $tmp1103;
            $returnValue1060 = $tmp1102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1102));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1109.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1112 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1112, ((panda$core$Int64) { 36 }), t1046.position);
            $tmp1111 = $tmp1112;
            $tmp1110 = $tmp1111;
            $returnValue1060 = $tmp1110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1110));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1114.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1117 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1117, ((panda$core$Int64) { 38 }), t1046.position);
            $tmp1116 = $tmp1117;
            $tmp1115 = $tmp1116;
            $returnValue1060 = $tmp1115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1119.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1122 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1122, ((panda$core$Int64) { 28 }), t1046.position);
            $tmp1121 = $tmp1122;
            $tmp1120 = $tmp1121;
            $returnValue1060 = $tmp1120;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1124.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1127 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1127, ((panda$core$Int64) { 5 }), t1046.position, ((panda$core$Bit) { true }));
            $tmp1126 = $tmp1127;
            $tmp1125 = $tmp1126;
            $returnValue1060 = $tmp1125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1129.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1132 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp1132, ((panda$core$Int64) { 5 }), t1046.position, ((panda$core$Bit) { false }));
            $tmp1131 = $tmp1132;
            $tmp1130 = $tmp1131;
            $returnValue1060 = $tmp1130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1131));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp1134 = $tmp1135.value;
        if ($tmp1134) goto $l1136;
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp1134 = $tmp1137.value;
        $l1136:;
        panda$core$Bit $tmp1138 = { $tmp1134 };
        if ($tmp1138.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1046);
            org$pandalanguage$pandac$ASTNode* $tmp1141 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1140 = $tmp1141;
            $tmp1139 = $tmp1140;
            $returnValue1060 = $tmp1139;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1143.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1046);
            org$pandalanguage$pandac$ASTNode* $tmp1146 = org$pandalanguage$pandac$parser$Parser$parenthesizedExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1145 = $tmp1146;
            $tmp1144 = $tmp1145;
            $returnValue1060 = $tmp1144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1145));
            return $returnValue1060;
        }
        }
        else {
        panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1148.value) {
        {
            int $tmp1151;
            {
                panda$core$String* $tmp1155 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1046);
                $tmp1154 = $tmp1155;
                $tmp1153 = $tmp1154;
                name1152 = $tmp1153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1154));
                panda$core$Bit $tmp1157 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1152, &$s1156);
                if ($tmp1157.value) {
                {
                    int $tmp1160;
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1161, ((panda$core$Int64) { 103 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1161, &$s1162);
                        org$pandalanguage$pandac$ASTNode* $tmp1166 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1165 = $tmp1166;
                        $tmp1164 = $tmp1165;
                        expr1163 = $tmp1164;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1165));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1167, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1167, &$s1168);
                        org$pandalanguage$pandac$ASTNode* $tmp1171 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1171, ((panda$core$Int64) { 2 }), t1046.position, expr1163);
                        $tmp1170 = $tmp1171;
                        $tmp1169 = $tmp1170;
                        $returnValue1060 = $tmp1169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1170));
                        $tmp1160 = 0;
                        goto $l1158;
                        $l1172:;
                        $tmp1151 = 0;
                        goto $l1149;
                        $l1173:;
                        return $returnValue1060;
                    }
                    $l1158:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1163));
                    expr1163 = NULL;
                    switch ($tmp1160) {
                        case 0: goto $l1172;
                    }
                    $l1175:;
                }
                }
                else {
                panda$core$Bit $tmp1177 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name1152, &$s1176);
                if ($tmp1177.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1180 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1180, ((panda$core$Int64) { 3 }), t1046.position);
                    $tmp1179 = $tmp1180;
                    $tmp1178 = $tmp1179;
                    $returnValue1060 = $tmp1178;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1178));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1179));
                    $tmp1151 = 1;
                    goto $l1149;
                    $l1181:;
                    return $returnValue1060;
                }
                }
                }
                panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1185, name1152);
                $tmp1184 = $tmp1186;
                panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1184, &$s1187);
                $tmp1183 = $tmp1188;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1046, $tmp1183);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1183));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
                $tmp1189 = NULL;
                $returnValue1060 = $tmp1189;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1189));
                $tmp1151 = 2;
                goto $l1149;
                $l1190:;
                return $returnValue1060;
            }
            $l1149:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1152));
            name1152 = NULL;
            switch ($tmp1151) {
                case 1: goto $l1181;
                case 0: goto $l1173;
                case 2: goto $l1190;
            }
            $l1192:;
        }
        }
        else {
        panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 20 }));
        bool $tmp1193 = $tmp1194.value;
        if ($tmp1193) goto $l1195;
        panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$502_91048.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp1193 = $tmp1196.value;
        $l1195:;
        panda$core$Bit $tmp1197 = { $tmp1193 };
        if ($tmp1197.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t1046);
            org$pandalanguage$pandac$ASTNode* $tmp1200 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1199 = $tmp1200;
            $tmp1198 = $tmp1199;
            $returnValue1060 = $tmp1198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
            return $returnValue1060;
        }
        }
        else {
        {
            panda$core$String* $tmp1206 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t1046);
            $tmp1205 = $tmp1206;
            panda$core$String* $tmp1207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1204, $tmp1205);
            $tmp1203 = $tmp1207;
            panda$core$String* $tmp1209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1203, &$s1208);
            $tmp1202 = $tmp1209;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t1046, $tmp1202);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1205));
            $tmp1210 = NULL;
            $returnValue1060 = $tmp1210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1210));
            return $returnValue1060;
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
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$558_91215 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1216;
    panda$core$String* text1218 = NULL;
    panda$core$String* $returnValue1220;
    panda$core$String* $tmp1221;
    org$pandalanguage$pandac$ASTNode* base1225 = NULL;
    panda$core$String* field1227 = NULL;
    panda$core$String* result1232 = NULL;
    panda$core$String* $tmp1233;
    panda$core$String* $tmp1234;
    panda$core$String* $tmp1236;
    panda$core$String* $tmp1237;
    panda$core$String* $tmp1238;
    panda$core$String* $tmp1239;
    panda$core$String* $tmp1240;
    panda$core$String* $tmp1244;
    panda$core$String* $tmp1249;
    int $tmp1214;
    {
        $tmp1216 = p_expr;
        $match$558_91215 = $tmp1216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
        panda$core$Bit $tmp1217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$558_91215->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1217.value) {
        {
            panda$core$String** $tmp1219 = ((panda$core$String**) ((char*) $match$558_91215->$data + 16));
            text1218 = *$tmp1219;
            $tmp1221 = text1218;
            $returnValue1220 = $tmp1221;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1221));
            $tmp1214 = 0;
            goto $l1212;
            $l1222:;
            return $returnValue1220;
        }
        }
        else {
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$558_91215->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1224.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1226 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$558_91215->$data + 16));
            base1225 = *$tmp1226;
            panda$core$String** $tmp1228 = ((panda$core$String**) ((char*) $match$558_91215->$data + 24));
            field1227 = *$tmp1228;
            int $tmp1231;
            {
                panda$core$String* $tmp1235 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base1225);
                $tmp1234 = $tmp1235;
                $tmp1233 = $tmp1234;
                result1232 = $tmp1233;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
                if (((panda$core$Bit) { result1232 != NULL }).value) {
                {
                    {
                        $tmp1237 = result1232;
                        $tmp1236 = $tmp1237;
                        panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1241, field1227);
                        $tmp1240 = $tmp1242;
                        panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1232, $tmp1240);
                        $tmp1239 = $tmp1243;
                        $tmp1238 = $tmp1239;
                        result1232 = $tmp1238;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1236));
                    }
                }
                }
                $tmp1244 = result1232;
                $returnValue1220 = $tmp1244;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
                $tmp1231 = 0;
                goto $l1229;
                $l1245:;
                $tmp1214 = 1;
                goto $l1212;
                $l1246:;
                return $returnValue1220;
            }
            $l1229:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1232));
            result1232 = NULL;
            switch ($tmp1231) {
                case 0: goto $l1245;
            }
            $l1248:;
        }
        }
        else {
        {
            $tmp1249 = NULL;
            $returnValue1220 = $tmp1249;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1249));
            $tmp1214 = 2;
            goto $l1212;
            $l1250:;
            return $returnValue1220;
        }
        }
        }
    }
    $tmp1214 = -1;
    goto $l1212;
    $l1212:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
    switch ($tmp1214) {
        case 1: goto $l1246;
        case 2: goto $l1250;
        case 0: goto $l1222;
        case -1: goto $l1252;
    }
    $l1252:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name1253;
    org$pandalanguage$pandac$parser$Token$Kind $match$578_91255;
    panda$core$String* $returnValue1341;
    panda$core$String* $tmp1342;
    panda$core$String* $tmp1343;
    org$pandalanguage$pandac$parser$Token token1347;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1353;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1357;
    panda$core$String* $tmp1360;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1362;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1371;
    panda$core$String* $tmp1373;
    panda$core$String* $tmp1378;
    org$pandalanguage$pandac$parser$Token $tmp1254 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name1253 = $tmp1254;
    {
        $match$578_91255 = name1253.kind;
        panda$core$Bit $tmp1277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp1276 = $tmp1277.value;
        if ($tmp1276) goto $l1278;
        panda$core$Bit $tmp1279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp1276 = $tmp1279.value;
        $l1278:;
        panda$core$Bit $tmp1280 = { $tmp1276 };
        bool $tmp1275 = $tmp1280.value;
        if ($tmp1275) goto $l1281;
        panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp1275 = $tmp1282.value;
        $l1281:;
        panda$core$Bit $tmp1283 = { $tmp1275 };
        bool $tmp1274 = $tmp1283.value;
        if ($tmp1274) goto $l1284;
        panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp1274 = $tmp1285.value;
        $l1284:;
        panda$core$Bit $tmp1286 = { $tmp1274 };
        bool $tmp1273 = $tmp1286.value;
        if ($tmp1273) goto $l1287;
        panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp1273 = $tmp1288.value;
        $l1287:;
        panda$core$Bit $tmp1289 = { $tmp1273 };
        bool $tmp1272 = $tmp1289.value;
        if ($tmp1272) goto $l1290;
        panda$core$Bit $tmp1291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp1272 = $tmp1291.value;
        $l1290:;
        panda$core$Bit $tmp1292 = { $tmp1272 };
        bool $tmp1271 = $tmp1292.value;
        if ($tmp1271) goto $l1293;
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp1271 = $tmp1294.value;
        $l1293:;
        panda$core$Bit $tmp1295 = { $tmp1271 };
        bool $tmp1270 = $tmp1295.value;
        if ($tmp1270) goto $l1296;
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp1270 = $tmp1297.value;
        $l1296:;
        panda$core$Bit $tmp1298 = { $tmp1270 };
        bool $tmp1269 = $tmp1298.value;
        if ($tmp1269) goto $l1299;
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp1269 = $tmp1300.value;
        $l1299:;
        panda$core$Bit $tmp1301 = { $tmp1269 };
        bool $tmp1268 = $tmp1301.value;
        if ($tmp1268) goto $l1302;
        panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp1268 = $tmp1303.value;
        $l1302:;
        panda$core$Bit $tmp1304 = { $tmp1268 };
        bool $tmp1267 = $tmp1304.value;
        if ($tmp1267) goto $l1305;
        panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp1267 = $tmp1306.value;
        $l1305:;
        panda$core$Bit $tmp1307 = { $tmp1267 };
        bool $tmp1266 = $tmp1307.value;
        if ($tmp1266) goto $l1308;
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp1266 = $tmp1309.value;
        $l1308:;
        panda$core$Bit $tmp1310 = { $tmp1266 };
        bool $tmp1265 = $tmp1310.value;
        if ($tmp1265) goto $l1311;
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp1265 = $tmp1312.value;
        $l1311:;
        panda$core$Bit $tmp1313 = { $tmp1265 };
        bool $tmp1264 = $tmp1313.value;
        if ($tmp1264) goto $l1314;
        panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp1264 = $tmp1315.value;
        $l1314:;
        panda$core$Bit $tmp1316 = { $tmp1264 };
        bool $tmp1263 = $tmp1316.value;
        if ($tmp1263) goto $l1317;
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp1263 = $tmp1318.value;
        $l1317:;
        panda$core$Bit $tmp1319 = { $tmp1263 };
        bool $tmp1262 = $tmp1319.value;
        if ($tmp1262) goto $l1320;
        panda$core$Bit $tmp1321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp1262 = $tmp1321.value;
        $l1320:;
        panda$core$Bit $tmp1322 = { $tmp1262 };
        bool $tmp1261 = $tmp1322.value;
        if ($tmp1261) goto $l1323;
        panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp1261 = $tmp1324.value;
        $l1323:;
        panda$core$Bit $tmp1325 = { $tmp1261 };
        bool $tmp1260 = $tmp1325.value;
        if ($tmp1260) goto $l1326;
        panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp1260 = $tmp1327.value;
        $l1326:;
        panda$core$Bit $tmp1328 = { $tmp1260 };
        bool $tmp1259 = $tmp1328.value;
        if ($tmp1259) goto $l1329;
        panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp1259 = $tmp1330.value;
        $l1329:;
        panda$core$Bit $tmp1331 = { $tmp1259 };
        bool $tmp1258 = $tmp1331.value;
        if ($tmp1258) goto $l1332;
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1258 = $tmp1333.value;
        $l1332:;
        panda$core$Bit $tmp1334 = { $tmp1258 };
        bool $tmp1257 = $tmp1334.value;
        if ($tmp1257) goto $l1335;
        panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1257 = $tmp1336.value;
        $l1335:;
        panda$core$Bit $tmp1337 = { $tmp1257 };
        bool $tmp1256 = $tmp1337.value;
        if ($tmp1256) goto $l1338;
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp1256 = $tmp1339.value;
        $l1338:;
        panda$core$Bit $tmp1340 = { $tmp1256 };
        if ($tmp1340.value) {
        {
            panda$core$String* $tmp1344 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1253);
            $tmp1343 = $tmp1344;
            $tmp1342 = $tmp1343;
            $returnValue1341 = $tmp1342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            return $returnValue1341;
        }
        }
        else {
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp1346.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1348 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token1347 = $tmp1348;
            panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1347.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp1349.value) {
            {
                $tmp1350 = &$s1351;
                $returnValue1341 = $tmp1350;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
                return $returnValue1341;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1347);
                $tmp1353 = &$s1354;
                $returnValue1341 = $tmp1353;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1353));
                return $returnValue1341;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$578_91255.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp1356.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1357, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1359 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1357, &$s1358);
            if (((panda$core$Bit) { !$tmp1359.nonnull }).value) {
            {
                $tmp1360 = NULL;
                $returnValue1341 = $tmp1360;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
                return $returnValue1341;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1362, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1363 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1362);
            if (((panda$core$Bit) { $tmp1363.nonnull }).value) {
            {
                $tmp1364 = &$s1365;
                $returnValue1341 = $tmp1364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                return $returnValue1341;
            }
            }
            $tmp1367 = &$s1368;
            $returnValue1341 = $tmp1367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
            return $returnValue1341;
        }
        }
        else {
        {
            panda$core$String* $tmp1374 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name1253);
            $tmp1373 = $tmp1374;
            panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1372, $tmp1373);
            $tmp1371 = $tmp1375;
            panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1376);
            $tmp1370 = $tmp1377;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name1253, $tmp1370);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
            $tmp1378 = NULL;
            $returnValue1341 = $tmp1378;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
            return $returnValue1341;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue1380;
    org$pandalanguage$pandac$ASTNode* $tmp1381;
    org$pandalanguage$pandac$ASTNode* $tmp1382;
    org$pandalanguage$pandac$ASTNode* $tmp1383 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    $tmp1382 = $tmp1383;
    $tmp1381 = $tmp1382;
    $returnValue1380 = $tmp1381;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
    return $returnValue1380;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1388;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1389;
    org$pandalanguage$pandac$ASTNode* $returnValue1392;
    org$pandalanguage$pandac$ASTNode* $tmp1393;
    panda$collections$Array* subtypes1396 = NULL;
    panda$collections$Array* $tmp1397;
    panda$collections$Array* $tmp1398;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1400;
    org$pandalanguage$pandac$ASTNode* t1405 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1406;
    org$pandalanguage$pandac$ASTNode* $tmp1407;
    org$pandalanguage$pandac$ASTNode* $tmp1409;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1416;
    org$pandalanguage$pandac$ASTNode* $tmp1418;
    org$pandalanguage$pandac$ASTNode* $tmp1419;
    org$pandalanguage$pandac$ASTNode* $tmp1420;
    org$pandalanguage$pandac$ASTNode* $tmp1422;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1426;
    org$pandalanguage$pandac$parser$Token yields1429;
    org$pandalanguage$pandac$parser$Token$Kind $match$640_91431;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1448;
    org$pandalanguage$pandac$ASTNode* $tmp1451;
    panda$collections$Array* returnTypes1455 = NULL;
    panda$collections$Array* $tmp1456;
    panda$collections$Array* $tmp1457;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1459;
    org$pandalanguage$pandac$ASTNode* t1464 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1465;
    org$pandalanguage$pandac$ASTNode* $tmp1466;
    org$pandalanguage$pandac$ASTNode* $tmp1468;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1476;
    org$pandalanguage$pandac$ASTNode* $tmp1478;
    org$pandalanguage$pandac$ASTNode* $tmp1479;
    org$pandalanguage$pandac$ASTNode* $tmp1480;
    org$pandalanguage$pandac$ASTNode* $tmp1482;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1487;
    org$pandalanguage$pandac$ASTNode* returnType1490 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1493;
    org$pandalanguage$pandac$ASTNode* $tmp1494;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    org$pandalanguage$pandac$ASTNode* $tmp1498;
    panda$core$Object* $tmp1499;
    org$pandalanguage$pandac$ASTNode* $tmp1501;
    org$pandalanguage$pandac$ASTNode* $tmp1502;
    org$pandalanguage$pandac$ASTNode* $tmp1503;
    panda$collections$ImmutableArray* $tmp1505;
    org$pandalanguage$pandac$ASTNode* $tmp1507;
    org$pandalanguage$pandac$ASTNode* $tmp1508;
    panda$collections$ImmutableArray* $tmp1510;
    org$pandalanguage$pandac$ASTNode* $tmp1516;
    org$pandalanguage$pandac$ASTNode* $tmp1517;
    panda$collections$ImmutableArray* $tmp1519;
    int $tmp1387;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1389, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1391 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1389, &$s1390);
        start1388 = $tmp1391;
        if (((panda$core$Bit) { !start1388.nonnull }).value) {
        {
            $tmp1393 = NULL;
            $returnValue1392 = $tmp1393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1393));
            $tmp1387 = 0;
            goto $l1385;
            $l1394:;
            return $returnValue1392;
        }
        }
        panda$collections$Array* $tmp1399 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1399);
        $tmp1398 = $tmp1399;
        $tmp1397 = $tmp1398;
        subtypes1396 = $tmp1397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1400, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1401 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1400);
        if (((panda$core$Bit) { !$tmp1401.nonnull }).value) {
        {
            int $tmp1404;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1408 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1407 = $tmp1408;
                $tmp1406 = $tmp1407;
                t1405 = $tmp1406;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                if (((panda$core$Bit) { t1405 == NULL }).value) {
                {
                    $tmp1409 = NULL;
                    $returnValue1392 = $tmp1409;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1409));
                    $tmp1404 = 0;
                    goto $l1402;
                    $l1410:;
                    $tmp1387 = 1;
                    goto $l1385;
                    $l1411:;
                    return $returnValue1392;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1396, ((panda$core$Object*) t1405));
                $l1413:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1416, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1417 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1416);
                bool $tmp1415 = ((panda$core$Bit) { $tmp1417.nonnull }).value;
                if (!$tmp1415) goto $l1414;
                {
                    {
                        $tmp1418 = t1405;
                        org$pandalanguage$pandac$ASTNode* $tmp1421 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1420 = $tmp1421;
                        $tmp1419 = $tmp1420;
                        t1405 = $tmp1419;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
                    }
                    if (((panda$core$Bit) { t1405 == NULL }).value) {
                    {
                        $tmp1422 = NULL;
                        $returnValue1392 = $tmp1422;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
                        $tmp1404 = 1;
                        goto $l1402;
                        $l1423:;
                        $tmp1387 = 2;
                        goto $l1385;
                        $l1424:;
                        return $returnValue1392;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1396, ((panda$core$Object*) t1405));
                }
                goto $l1413;
                $l1414:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1426, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1426, &$s1427);
            }
            $tmp1404 = -1;
            goto $l1402;
            $l1402:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1405));
            t1405 = NULL;
            switch ($tmp1404) {
                case 0: goto $l1410;
                case -1: goto $l1428;
                case 1: goto $l1423;
            }
            $l1428:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1430 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1429 = $tmp1430;
        {
            $match$640_91431 = yields1429.kind;
            panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$640_91431.$rawValue, ((panda$core$Int64) { 90 }));
            bool $tmp1434 = $tmp1435.value;
            if ($tmp1434) goto $l1436;
            panda$core$Bit $tmp1437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$640_91431.$rawValue, ((panda$core$Int64) { 91 }));
            $tmp1434 = $tmp1437.value;
            $l1436:;
            panda$core$Bit $tmp1438 = { $tmp1434 };
            bool $tmp1433 = $tmp1438.value;
            if ($tmp1433) goto $l1439;
            panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$640_91431.$rawValue, ((panda$core$Int64) { 92 }));
            $tmp1433 = $tmp1440.value;
            $l1439:;
            panda$core$Bit $tmp1441 = { $tmp1433 };
            bool $tmp1432 = $tmp1441.value;
            if ($tmp1432) goto $l1442;
            panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$640_91431.$rawValue, ((panda$core$Int64) { 93 }));
            $tmp1432 = $tmp1443.value;
            $l1442:;
            panda$core$Bit $tmp1444 = { $tmp1432 };
            if ($tmp1444.value) {
            {
                int $tmp1447;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1448, ((panda$core$Int64) { 103 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1450 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1448, &$s1449);
                    if (((panda$core$Bit) { !$tmp1450.nonnull }).value) {
                    {
                        $tmp1451 = NULL;
                        $returnValue1392 = $tmp1451;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
                        $tmp1447 = 0;
                        goto $l1445;
                        $l1452:;
                        $tmp1387 = 3;
                        goto $l1385;
                        $l1453:;
                        return $returnValue1392;
                    }
                    }
                    panda$collections$Array* $tmp1458 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1458);
                    $tmp1457 = $tmp1458;
                    $tmp1456 = $tmp1457;
                    returnTypes1455 = $tmp1456;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1456));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1459, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1460 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1459);
                    if (((panda$core$Bit) { !$tmp1460.nonnull }).value) {
                    {
                        int $tmp1463;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1467 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1466 = $tmp1467;
                            $tmp1465 = $tmp1466;
                            t1464 = $tmp1465;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                            if (((panda$core$Bit) { t1464 == NULL }).value) {
                            {
                                $tmp1468 = NULL;
                                $returnValue1392 = $tmp1468;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
                                $tmp1463 = 0;
                                goto $l1461;
                                $l1469:;
                                $tmp1447 = 1;
                                goto $l1445;
                                $l1470:;
                                $tmp1387 = 4;
                                goto $l1385;
                                $l1471:;
                                return $returnValue1392;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1455, ((panda$core$Object*) t1464));
                            $l1473:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1476, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1477 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1476);
                            bool $tmp1475 = ((panda$core$Bit) { $tmp1477.nonnull }).value;
                            if (!$tmp1475) goto $l1474;
                            {
                                {
                                    $tmp1478 = t1464;
                                    org$pandalanguage$pandac$ASTNode* $tmp1481 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1480 = $tmp1481;
                                    $tmp1479 = $tmp1480;
                                    t1464 = $tmp1479;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                                }
                                if (((panda$core$Bit) { t1464 == NULL }).value) {
                                {
                                    $tmp1482 = NULL;
                                    $returnValue1392 = $tmp1482;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1482));
                                    $tmp1463 = 1;
                                    goto $l1461;
                                    $l1483:;
                                    $tmp1447 = 2;
                                    goto $l1445;
                                    $l1484:;
                                    $tmp1387 = 5;
                                    goto $l1385;
                                    $l1485:;
                                    return $returnValue1392;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1455, ((panda$core$Object*) t1464));
                            }
                            goto $l1473;
                            $l1474:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1487, ((panda$core$Int64) { 104 }));
                            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1487, &$s1488);
                        }
                        $tmp1463 = -1;
                        goto $l1461;
                        $l1461:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1464));
                        t1464 = NULL;
                        switch ($tmp1463) {
                            case -1: goto $l1489;
                            case 1: goto $l1483;
                            case 0: goto $l1469;
                        }
                        $l1489:;
                    }
                    }
                    memset(&returnType1490, 0, sizeof(returnType1490));
                    panda$core$Int64 $tmp1491 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1455);
                    panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1491, ((panda$core$Int64) { 0 }));
                    if ($tmp1492.value) {
                    {
                        {
                            $tmp1493 = returnType1490;
                            $tmp1494 = NULL;
                            returnType1490 = $tmp1494;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1494));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1495 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1455);
                    panda$core$Bit $tmp1496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1495, ((panda$core$Int64) { 1 }));
                    if ($tmp1496.value) {
                    {
                        {
                            $tmp1497 = returnType1490;
                            panda$core$Object* $tmp1500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1455, ((panda$core$Int64) { 0 }));
                            $tmp1499 = $tmp1500;
                            $tmp1498 = ((org$pandalanguage$pandac$ASTNode*) $tmp1499);
                            returnType1490 = $tmp1498;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
                            panda$core$Panda$unref$panda$core$Object($tmp1499);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1501 = returnType1490;
                            org$pandalanguage$pandac$ASTNode* $tmp1504 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1506 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(returnTypes1455);
                            $tmp1505 = $tmp1506;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1504, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1388.value).position, $tmp1505);
                            $tmp1503 = $tmp1504;
                            $tmp1502 = $tmp1503;
                            returnType1490 = $tmp1502;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1501));
                        }
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1509 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1511 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1396);
                    $tmp1510 = $tmp1511;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1509, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start1388.value).position, yields1429.kind, $tmp1510, returnType1490);
                    $tmp1508 = $tmp1509;
                    $tmp1507 = $tmp1508;
                    $returnValue1392 = $tmp1507;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                    $tmp1447 = 3;
                    goto $l1445;
                    $l1512:;
                    $tmp1387 = 6;
                    goto $l1385;
                    $l1513:;
                    return $returnValue1392;
                }
                $l1445:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1455));
                returnTypes1455 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1490));
                switch ($tmp1447) {
                    case 3: goto $l1512;
                    case 1: goto $l1470;
                    case 0: goto $l1452;
                    case 2: goto $l1484;
                }
                $l1515:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1518 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp1520 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1396);
                $tmp1519 = $tmp1520;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1518, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1388.value).position, $tmp1519);
                $tmp1517 = $tmp1518;
                $tmp1516 = $tmp1517;
                $returnValue1392 = $tmp1516;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                $tmp1387 = 7;
                goto $l1385;
                $l1521:;
                return $returnValue1392;
            }
            }
        }
    }
    $tmp1387 = -1;
    goto $l1385;
    $l1385:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1396));
    subtypes1396 = NULL;
    switch ($tmp1387) {
        case 6: goto $l1513;
        case 7: goto $l1521;
        case 1: goto $l1411;
        case 2: goto $l1424;
        case 3: goto $l1453;
        case -1: goto $l1523;
        case 5: goto $l1485;
        case 0: goto $l1394;
        case 4: goto $l1471;
    }
    $l1523:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* $returnValue1529;
    org$pandalanguage$pandac$ASTNode* $tmp1530;
    org$pandalanguage$pandac$ASTNode* $tmp1531;
    org$pandalanguage$pandac$parser$Token$nullable start1535;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1536;
    org$pandalanguage$pandac$ASTNode* $tmp1539;
    panda$core$MutableString* name1542 = NULL;
    panda$core$MutableString* $tmp1543;
    panda$core$MutableString* $tmp1544;
    panda$core$String* $tmp1546;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1551;
    org$pandalanguage$pandac$parser$Token$nullable id1553;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1554;
    org$pandalanguage$pandac$ASTNode* $tmp1557;
    panda$core$Char8 $tmp1560;
    panda$core$String* $tmp1561;
    panda$core$String* finalName1563 = NULL;
    panda$core$String* $tmp1564;
    panda$core$String* $tmp1565;
    org$pandalanguage$pandac$ASTNode* result1567 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1568;
    org$pandalanguage$pandac$ASTNode* $tmp1569;
    panda$collections$Array* children1576 = NULL;
    panda$collections$Array* $tmp1577;
    panda$collections$Array* $tmp1578;
    org$pandalanguage$pandac$ASTNode* t1580 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1581;
    org$pandalanguage$pandac$ASTNode* $tmp1582;
    org$pandalanguage$pandac$ASTNode* $tmp1584;
    org$pandalanguage$pandac$ASTNode* $tmp1588;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1595;
    org$pandalanguage$pandac$ASTNode* $tmp1597;
    org$pandalanguage$pandac$ASTNode* $tmp1598;
    org$pandalanguage$pandac$ASTNode* $tmp1599;
    org$pandalanguage$pandac$ASTNode* $tmp1601;
    org$pandalanguage$pandac$ASTNode* $tmp1605;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1609;
    org$pandalanguage$pandac$ASTNode* $tmp1612;
    org$pandalanguage$pandac$ASTNode* $tmp1616;
    org$pandalanguage$pandac$ASTNode* $tmp1620;
    org$pandalanguage$pandac$ASTNode* $tmp1621;
    org$pandalanguage$pandac$ASTNode* $tmp1622;
    panda$collections$ImmutableArray* $tmp1624;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1627;
    org$pandalanguage$pandac$ASTNode* $tmp1629;
    org$pandalanguage$pandac$ASTNode* $tmp1630;
    org$pandalanguage$pandac$ASTNode* $tmp1631;
    org$pandalanguage$pandac$ASTNode* $tmp1633;
    int $tmp1526;
    {
        org$pandalanguage$pandac$parser$Token $tmp1527 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1527.kind.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1528.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1532 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1531 = $tmp1532;
            $tmp1530 = $tmp1531;
            $returnValue1529 = $tmp1530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            $tmp1526 = 0;
            goto $l1524;
            $l1533:;
            return $returnValue1529;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1536, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1538 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1536, &$s1537);
        start1535 = $tmp1538;
        if (((panda$core$Bit) { !start1535.nonnull }).value) {
        {
            $tmp1539 = NULL;
            $returnValue1529 = $tmp1539;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1539));
            $tmp1526 = 1;
            goto $l1524;
            $l1540:;
            return $returnValue1529;
        }
        }
        panda$core$MutableString* $tmp1545 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1547 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1535.value));
        $tmp1546 = $tmp1547;
        panda$core$MutableString$init$panda$core$String($tmp1545, $tmp1546);
        $tmp1544 = $tmp1545;
        $tmp1543 = $tmp1544;
        name1542 = $tmp1543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1546));
        $l1548:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1551, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1552 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1551);
        bool $tmp1550 = ((panda$core$Bit) { $tmp1552.nonnull }).value;
        if (!$tmp1550) goto $l1549;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1554, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1556 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1554, &$s1555);
            id1553 = $tmp1556;
            if (((panda$core$Bit) { !id1553.nonnull }).value) {
            {
                $tmp1557 = NULL;
                $returnValue1529 = $tmp1557;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1557));
                $tmp1526 = 2;
                goto $l1524;
                $l1558:;
                return $returnValue1529;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1560, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1542, $tmp1560);
            panda$core$String* $tmp1562 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1553.value));
            $tmp1561 = $tmp1562;
            panda$core$MutableString$append$panda$core$String(name1542, $tmp1561);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
        }
        goto $l1548;
        $l1549:;
        panda$core$String* $tmp1566 = panda$core$MutableString$finish$R$panda$core$String(name1542);
        $tmp1565 = $tmp1566;
        $tmp1564 = $tmp1565;
        finalName1563 = $tmp1564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
        org$pandalanguage$pandac$ASTNode* $tmp1570 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1570, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1535.value).position, finalName1563);
        $tmp1569 = $tmp1570;
        $tmp1568 = $tmp1569;
        result1567 = $tmp1568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
        org$pandalanguage$pandac$parser$Token $tmp1571 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1571.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1572.value) {
        {
            int $tmp1575;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1579 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1579);
                $tmp1578 = $tmp1579;
                $tmp1577 = $tmp1578;
                children1576 = $tmp1577;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1577));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
                org$pandalanguage$pandac$ASTNode* $tmp1583 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1582 = $tmp1583;
                $tmp1581 = $tmp1582;
                t1580 = $tmp1581;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1581));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
                if (((panda$core$Bit) { t1580 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1584 = result1567;
                        $returnValue1529 = $tmp1584;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
                        $tmp1575 = 0;
                        goto $l1573;
                        $l1585:;
                        $tmp1526 = 3;
                        goto $l1524;
                        $l1586:;
                        return $returnValue1529;
                    }
                    }
                    $tmp1588 = NULL;
                    $returnValue1529 = $tmp1588;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
                    $tmp1575 = 1;
                    goto $l1573;
                    $l1589:;
                    $tmp1526 = 4;
                    goto $l1524;
                    $l1590:;
                    return $returnValue1529;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1576, ((panda$core$Object*) t1580));
                $l1592:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1595, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1596 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1595);
                bool $tmp1594 = ((panda$core$Bit) { $tmp1596.nonnull }).value;
                if (!$tmp1594) goto $l1593;
                {
                    {
                        $tmp1597 = t1580;
                        org$pandalanguage$pandac$ASTNode* $tmp1600 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1599 = $tmp1600;
                        $tmp1598 = $tmp1599;
                        t1580 = $tmp1598;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1598));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
                    }
                    if (((panda$core$Bit) { t1580 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1601 = result1567;
                            $returnValue1529 = $tmp1601;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1601));
                            $tmp1575 = 2;
                            goto $l1573;
                            $l1602:;
                            $tmp1526 = 5;
                            goto $l1524;
                            $l1603:;
                            return $returnValue1529;
                        }
                        }
                        $tmp1605 = NULL;
                        $returnValue1529 = $tmp1605;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1605));
                        $tmp1575 = 3;
                        goto $l1573;
                        $l1606:;
                        $tmp1526 = 6;
                        goto $l1524;
                        $l1607:;
                        return $returnValue1529;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1576, ((panda$core$Object*) t1580));
                }
                goto $l1592;
                $l1593:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1609, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1611 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1609, &$s1610);
                if (((panda$core$Bit) { !$tmp1611.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1612 = result1567;
                        $returnValue1529 = $tmp1612;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1612));
                        $tmp1575 = 4;
                        goto $l1573;
                        $l1613:;
                        $tmp1526 = 7;
                        goto $l1524;
                        $l1614:;
                        return $returnValue1529;
                    }
                    }
                    $tmp1616 = NULL;
                    $returnValue1529 = $tmp1616;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1616));
                    $tmp1575 = 5;
                    goto $l1573;
                    $l1617:;
                    $tmp1526 = 8;
                    goto $l1524;
                    $l1618:;
                    return $returnValue1529;
                }
                }
                {
                    $tmp1620 = result1567;
                    org$pandalanguage$pandac$ASTNode* $tmp1623 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1625 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1576);
                    $tmp1624 = $tmp1625;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1623, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1535.value).position, finalName1563, $tmp1624);
                    $tmp1622 = $tmp1623;
                    $tmp1621 = $tmp1622;
                    result1567 = $tmp1621;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1621));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1622));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1620));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1575 = -1;
            goto $l1573;
            $l1573:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1576));
            children1576 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1580));
            t1580 = NULL;
            switch ($tmp1575) {
                case 1: goto $l1589;
                case 0: goto $l1585;
                case -1: goto $l1626;
                case 2: goto $l1602;
                case 4: goto $l1613;
                case 5: goto $l1617;
                case 3: goto $l1606;
            }
            $l1626:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1627, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1628 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1627);
        if (((panda$core$Bit) { $tmp1628.nonnull }).value) {
        {
            {
                $tmp1629 = result1567;
                org$pandalanguage$pandac$ASTNode* $tmp1632 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1632, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$parser$Token) start1535.value).position, result1567);
                $tmp1631 = $tmp1632;
                $tmp1630 = $tmp1631;
                result1567 = $tmp1630;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
            }
        }
        }
        $tmp1633 = result1567;
        $returnValue1529 = $tmp1633;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1633));
        $tmp1526 = 9;
        goto $l1524;
        $l1634:;
        return $returnValue1529;
    }
    $l1524:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1542));
    name1542 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1563));
    finalName1563 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1567));
    result1567 = NULL;
    switch ($tmp1526) {
        case 6: goto $l1607;
        case 3: goto $l1586;
        case 4: goto $l1590;
        case 8: goto $l1618;
        case 7: goto $l1614;
        case 2: goto $l1558;
        case 1: goto $l1540;
        case 9: goto $l1634;
        case 0: goto $l1533;
        case 5: goto $l1603;
    }
    $l1636:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1640 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1641;
    org$pandalanguage$pandac$ASTNode* $tmp1642;
    org$pandalanguage$pandac$ASTNode* $returnValue1644;
    org$pandalanguage$pandac$ASTNode* $tmp1645;
    org$pandalanguage$pandac$parser$Token token1650;
    org$pandalanguage$pandac$parser$Token$Kind $match$763_131652;
    panda$core$Object* $tmp1657;
    panda$collections$Array* args1659 = NULL;
    panda$collections$Array* $tmp1660;
    panda$collections$Array* $tmp1661;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1663;
    org$pandalanguage$pandac$ASTNode* expr1668 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1669;
    org$pandalanguage$pandac$ASTNode* $tmp1670;
    panda$core$Object* $tmp1672;
    org$pandalanguage$pandac$ASTNode* $tmp1674;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1682;
    org$pandalanguage$pandac$ASTNode* $tmp1684;
    org$pandalanguage$pandac$ASTNode* $tmp1685;
    org$pandalanguage$pandac$ASTNode* $tmp1686;
    panda$core$Object* $tmp1688;
    org$pandalanguage$pandac$ASTNode* $tmp1690;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1695;
    panda$core$Object* $tmp1698;
    org$pandalanguage$pandac$ASTNode* $tmp1700;
    panda$core$Object* $tmp1706;
    org$pandalanguage$pandac$ASTNode* $tmp1708;
    org$pandalanguage$pandac$ASTNode* $tmp1709;
    org$pandalanguage$pandac$ASTNode* $tmp1710;
    panda$collections$ImmutableArray* $tmp1712;
    org$pandalanguage$pandac$ASTNode* arg1719 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1720;
    org$pandalanguage$pandac$ASTNode* $tmp1721;
    org$pandalanguage$pandac$ASTNode* $tmp1723;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1727;
    org$pandalanguage$pandac$ASTNode* $tmp1730;
    org$pandalanguage$pandac$ASTNode* $tmp1734;
    org$pandalanguage$pandac$ASTNode* $tmp1735;
    org$pandalanguage$pandac$ASTNode* $tmp1736;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1738;
    panda$core$String* name1744 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1745;
    panda$core$String* $tmp1747;
    panda$core$String* $tmp1748;
    panda$core$String* $tmp1750;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1752;
    org$pandalanguage$pandac$ASTNode* $tmp1754;
    org$pandalanguage$pandac$ASTNode* $tmp1758;
    org$pandalanguage$pandac$ASTNode* $tmp1759;
    org$pandalanguage$pandac$ASTNode* $tmp1760;
    org$pandalanguage$pandac$ASTNode* target1767 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1768;
    org$pandalanguage$pandac$ASTNode* $tmp1769;
    org$pandalanguage$pandac$ASTNode* $tmp1771;
    org$pandalanguage$pandac$ASTNode* $tmp1775;
    org$pandalanguage$pandac$ASTNode* $tmp1776;
    org$pandalanguage$pandac$ASTNode* $tmp1777;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1779;
    panda$core$String* name1785 = NULL;
    panda$core$String* $tmp1786;
    panda$core$String* $tmp1787;
    panda$collections$Array* types1792 = NULL;
    panda$collections$Array* $tmp1793;
    panda$collections$Array* $tmp1794;
    org$pandalanguage$pandac$ASTNode* t1796 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1797;
    org$pandalanguage$pandac$ASTNode* $tmp1798;
    org$pandalanguage$pandac$ASTNode* $tmp1800;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1808;
    org$pandalanguage$pandac$ASTNode* $tmp1810;
    org$pandalanguage$pandac$ASTNode* $tmp1811;
    org$pandalanguage$pandac$ASTNode* $tmp1812;
    org$pandalanguage$pandac$ASTNode* $tmp1814;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1819;
    org$pandalanguage$pandac$ASTNode* $tmp1822;
    panda$core$Bit shouldAccept1827;
    panda$core$Object* $tmp1828;
    org$pandalanguage$pandac$parser$Token$Kind $match$868_291830;
    org$pandalanguage$pandac$ASTNode* $tmp1845;
    org$pandalanguage$pandac$ASTNode* $tmp1846;
    org$pandalanguage$pandac$ASTNode* $tmp1847;
    panda$collections$ImmutableArray* $tmp1851;
    org$pandalanguage$pandac$ASTNode* $tmp1855;
    org$pandalanguage$pandac$ASTNode* $tmp1861;
    org$pandalanguage$pandac$ASTNode* $tmp1866;
    int $tmp1639;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1643 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1642 = $tmp1643;
        $tmp1641 = $tmp1642;
        result1640 = $tmp1641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1642));
        if (((panda$core$Bit) { result1640 == NULL }).value) {
        {
            $tmp1645 = NULL;
            $returnValue1644 = $tmp1645;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
            $tmp1639 = 0;
            goto $l1637;
            $l1646:;
            return $returnValue1644;
        }
        }
        $l1648:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1651 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1650 = $tmp1651;
            {
                $match$763_131652 = token1650.kind;
                panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$763_131652.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1653.value) {
                {
                    int $tmp1656;
                    {
                        panda$core$Bit$wrapper* $tmp1658;
                        $tmp1658 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1658->value = ((panda$core$Bit) { true });
                        $tmp1657 = ((panda$core$Object*) $tmp1658);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1657);
                        panda$core$Panda$unref$panda$core$Object($tmp1657);
                        panda$collections$Array* $tmp1662 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1662);
                        $tmp1661 = $tmp1662;
                        $tmp1660 = $tmp1661;
                        args1659 = $tmp1660;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1660));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1663, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1664 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1663);
                        if (((panda$core$Bit) { !$tmp1664.nonnull }).value) {
                        {
                            int $tmp1667;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1671 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1670 = $tmp1671;
                                $tmp1669 = $tmp1670;
                                expr1668 = $tmp1669;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1669));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1670));
                                if (((panda$core$Bit) { expr1668 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1673 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1672 = $tmp1673;
                                    panda$core$Panda$unref$panda$core$Object($tmp1672);
                                    $tmp1674 = NULL;
                                    $returnValue1644 = $tmp1674;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1674));
                                    $tmp1667 = 0;
                                    goto $l1665;
                                    $l1675:;
                                    $tmp1656 = 0;
                                    goto $l1654;
                                    $l1676:;
                                    $tmp1639 = 1;
                                    goto $l1637;
                                    $l1677:;
                                    return $returnValue1644;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1659, ((panda$core$Object*) expr1668));
                                $l1679:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1682, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1683 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1682);
                                bool $tmp1681 = ((panda$core$Bit) { $tmp1683.nonnull }).value;
                                if (!$tmp1681) goto $l1680;
                                {
                                    {
                                        $tmp1684 = expr1668;
                                        org$pandalanguage$pandac$ASTNode* $tmp1687 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1686 = $tmp1687;
                                        $tmp1685 = $tmp1686;
                                        expr1668 = $tmp1685;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1685));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
                                    }
                                    if (((panda$core$Bit) { expr1668 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1689 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1688 = $tmp1689;
                                        panda$core$Panda$unref$panda$core$Object($tmp1688);
                                        $tmp1690 = NULL;
                                        $returnValue1644 = $tmp1690;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1690));
                                        $tmp1667 = 1;
                                        goto $l1665;
                                        $l1691:;
                                        $tmp1656 = 1;
                                        goto $l1654;
                                        $l1692:;
                                        $tmp1639 = 2;
                                        goto $l1637;
                                        $l1693:;
                                        return $returnValue1644;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1659, ((panda$core$Object*) expr1668));
                                }
                                goto $l1679;
                                $l1680:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1695, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1697 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1695, &$s1696);
                                if (((panda$core$Bit) { !$tmp1697.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1699 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1698 = $tmp1699;
                                    panda$core$Panda$unref$panda$core$Object($tmp1698);
                                    $tmp1700 = NULL;
                                    $returnValue1644 = $tmp1700;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1700));
                                    $tmp1667 = 2;
                                    goto $l1665;
                                    $l1701:;
                                    $tmp1656 = 2;
                                    goto $l1654;
                                    $l1702:;
                                    $tmp1639 = 3;
                                    goto $l1637;
                                    $l1703:;
                                    return $returnValue1644;
                                }
                                }
                            }
                            $tmp1667 = -1;
                            goto $l1665;
                            $l1665:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1668));
                            expr1668 = NULL;
                            switch ($tmp1667) {
                                case 2: goto $l1701;
                                case 1: goto $l1691;
                                case 0: goto $l1675;
                                case -1: goto $l1705;
                            }
                            $l1705:;
                        }
                        }
                        panda$core$Object* $tmp1707 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1706 = $tmp1707;
                        panda$core$Panda$unref$panda$core$Object($tmp1706);
                        {
                            $tmp1708 = result1640;
                            org$pandalanguage$pandac$ASTNode* $tmp1711 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1713 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1659);
                            $tmp1712 = $tmp1713;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1711, ((panda$core$Int64) { 8 }), token1650.position, result1640, $tmp1712);
                            $tmp1710 = $tmp1711;
                            $tmp1709 = $tmp1710;
                            result1640 = $tmp1709;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1709));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1712));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1708));
                        }
                    }
                    $tmp1656 = -1;
                    goto $l1654;
                    $l1654:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1659));
                    args1659 = NULL;
                    switch ($tmp1656) {
                        case 2: goto $l1702;
                        case 1: goto $l1692;
                        case 0: goto $l1676;
                        case -1: goto $l1714;
                    }
                    $l1714:;
                }
                }
                else {
                panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$763_131652.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1715.value) {
                {
                    int $tmp1718;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1722 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1721 = $tmp1722;
                        $tmp1720 = $tmp1721;
                        arg1719 = $tmp1720;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
                        if (((panda$core$Bit) { arg1719 == NULL }).value) {
                        {
                            $tmp1723 = NULL;
                            $returnValue1644 = $tmp1723;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
                            $tmp1718 = 0;
                            goto $l1716;
                            $l1724:;
                            $tmp1639 = 4;
                            goto $l1637;
                            $l1725:;
                            return $returnValue1644;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1727, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1729 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1727, &$s1728);
                        if (((panda$core$Bit) { !$tmp1729.nonnull }).value) {
                        {
                            $tmp1730 = NULL;
                            $returnValue1644 = $tmp1730;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1730));
                            $tmp1718 = 1;
                            goto $l1716;
                            $l1731:;
                            $tmp1639 = 5;
                            goto $l1637;
                            $l1732:;
                            return $returnValue1644;
                        }
                        }
                        {
                            $tmp1734 = result1640;
                            org$pandalanguage$pandac$ASTNode* $tmp1737 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1738, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1737, ((panda$core$Int64) { 4 }), token1650.position, result1640, $tmp1738, arg1719);
                            $tmp1736 = $tmp1737;
                            $tmp1735 = $tmp1736;
                            result1640 = $tmp1735;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1734));
                        }
                    }
                    $tmp1718 = -1;
                    goto $l1716;
                    $l1716:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1719));
                    arg1719 = NULL;
                    switch ($tmp1718) {
                        case -1: goto $l1739;
                        case 1: goto $l1731;
                        case 0: goto $l1724;
                    }
                    $l1739:;
                }
                }
                else {
                panda$core$Bit $tmp1740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$763_131652.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1740.value) {
                {
                    int $tmp1743;
                    {
                        memset(&name1744, 0, sizeof(name1744));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1745, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1746 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1745);
                        if (((panda$core$Bit) { $tmp1746.nonnull }).value) {
                        {
                            {
                                $tmp1747 = name1744;
                                $tmp1748 = &$s1749;
                                name1744 = $tmp1748;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1747));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1750 = name1744;
                                panda$core$String* $tmp1753 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1752 = $tmp1753;
                                $tmp1751 = $tmp1752;
                                name1744 = $tmp1751;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1750));
                            }
                            if (((panda$core$Bit) { name1744 == NULL }).value) {
                            {
                                $tmp1754 = NULL;
                                $returnValue1644 = $tmp1754;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1754));
                                $tmp1743 = 0;
                                goto $l1741;
                                $l1755:;
                                $tmp1639 = 6;
                                goto $l1637;
                                $l1756:;
                                return $returnValue1644;
                            }
                            }
                        }
                        }
                        {
                            $tmp1758 = result1640;
                            org$pandalanguage$pandac$ASTNode* $tmp1761 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1761, ((panda$core$Int64) { 15 }), token1650.position, result1640, name1744);
                            $tmp1760 = $tmp1761;
                            $tmp1759 = $tmp1760;
                            result1640 = $tmp1759;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1759));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1760));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1758));
                        }
                    }
                    $tmp1743 = -1;
                    goto $l1741;
                    $l1741:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1744));
                    switch ($tmp1743) {
                        case -1: goto $l1762;
                        case 0: goto $l1755;
                    }
                    $l1762:;
                }
                }
                else {
                panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$763_131652.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1763.value) {
                {
                    int $tmp1766;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1770 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1769 = $tmp1770;
                        $tmp1768 = $tmp1769;
                        target1767 = $tmp1768;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
                        if (((panda$core$Bit) { target1767 == NULL }).value) {
                        {
                            $tmp1771 = NULL;
                            $returnValue1644 = $tmp1771;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1771));
                            $tmp1766 = 0;
                            goto $l1764;
                            $l1772:;
                            $tmp1639 = 7;
                            goto $l1637;
                            $l1773:;
                            return $returnValue1644;
                        }
                        }
                        {
                            $tmp1775 = result1640;
                            org$pandalanguage$pandac$ASTNode* $tmp1778 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1779, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1778, ((panda$core$Int64) { 4 }), token1650.position, result1640, $tmp1779, target1767);
                            $tmp1777 = $tmp1778;
                            $tmp1776 = $tmp1777;
                            result1640 = $tmp1776;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
                        }
                    }
                    $tmp1766 = -1;
                    goto $l1764;
                    $l1764:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1767));
                    target1767 = NULL;
                    switch ($tmp1766) {
                        case 0: goto $l1772;
                        case -1: goto $l1780;
                    }
                    $l1780:;
                }
                }
                else {
                panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$763_131652.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1781.value) {
                {
                    int $tmp1784;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1650);
                        panda$core$String* $tmp1788 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1640);
                        $tmp1787 = $tmp1788;
                        $tmp1786 = $tmp1787;
                        name1785 = $tmp1786;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1786));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
                        if (((panda$core$Bit) { name1785 != NULL }).value) {
                        {
                            int $tmp1791;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1795 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1795);
                                $tmp1794 = $tmp1795;
                                $tmp1793 = $tmp1794;
                                types1792 = $tmp1793;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                                org$pandalanguage$pandac$ASTNode* $tmp1799 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1798 = $tmp1799;
                                $tmp1797 = $tmp1798;
                                t1796 = $tmp1797;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1797));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1798));
                                if (((panda$core$Bit) { t1796 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1800 = result1640;
                                    $returnValue1644 = $tmp1800;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1800));
                                    $tmp1791 = 0;
                                    goto $l1789;
                                    $l1801:;
                                    $tmp1784 = 0;
                                    goto $l1782;
                                    $l1802:;
                                    $tmp1639 = 8;
                                    goto $l1637;
                                    $l1803:;
                                    return $returnValue1644;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1792, ((panda$core$Object*) t1796));
                                $l1805:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1808, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1809 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1808);
                                bool $tmp1807 = ((panda$core$Bit) { $tmp1809.nonnull }).value;
                                if (!$tmp1807) goto $l1806;
                                {
                                    {
                                        $tmp1810 = t1796;
                                        org$pandalanguage$pandac$ASTNode* $tmp1813 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1812 = $tmp1813;
                                        $tmp1811 = $tmp1812;
                                        t1796 = $tmp1811;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1811));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
                                    }
                                    if (((panda$core$Bit) { t1796 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1814 = result1640;
                                        $returnValue1644 = $tmp1814;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
                                        $tmp1791 = 1;
                                        goto $l1789;
                                        $l1815:;
                                        $tmp1784 = 1;
                                        goto $l1782;
                                        $l1816:;
                                        $tmp1639 = 9;
                                        goto $l1637;
                                        $l1817:;
                                        return $returnValue1644;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1792, ((panda$core$Object*) t1796));
                                }
                                goto $l1805;
                                $l1806:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1819, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1821 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1819, &$s1820);
                                if (((panda$core$Bit) { !$tmp1821.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1822 = result1640;
                                    $returnValue1644 = $tmp1822;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
                                    $tmp1791 = 2;
                                    goto $l1789;
                                    $l1823:;
                                    $tmp1784 = 2;
                                    goto $l1782;
                                    $l1824:;
                                    $tmp1639 = 10;
                                    goto $l1637;
                                    $l1825:;
                                    return $returnValue1644;
                                }
                                }
                                memset(&shouldAccept1827, 0, sizeof(shouldAccept1827));
                                panda$core$Object* $tmp1829 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1828 = $tmp1829;
                                panda$core$Panda$unref$panda$core$Object($tmp1828);
                                if (((panda$core$Bit$wrapper*) $tmp1828)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1831 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$868_291830 = $tmp1831.kind;
                                        panda$core$Bit $tmp1835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$868_291830.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1834 = $tmp1835.value;
                                        if ($tmp1834) goto $l1836;
                                        panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$868_291830.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1834 = $tmp1837.value;
                                        $l1836:;
                                        panda$core$Bit $tmp1838 = { $tmp1834 };
                                        bool $tmp1833 = $tmp1838.value;
                                        if ($tmp1833) goto $l1839;
                                        panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$868_291830.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1833 = $tmp1840.value;
                                        $l1839:;
                                        panda$core$Bit $tmp1841 = { $tmp1833 };
                                        bool $tmp1832 = $tmp1841.value;
                                        if ($tmp1832) goto $l1842;
                                        panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$868_291830.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1832 = $tmp1843.value;
                                        $l1842:;
                                        panda$core$Bit $tmp1844 = { $tmp1832 };
                                        if ($tmp1844.value) {
                                        {
                                            shouldAccept1827 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1827 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1827 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1827.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1845 = result1640;
                                        org$pandalanguage$pandac$ASTNode* $tmp1848 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1850 = (($fn1849) result1640->$class->vtable[2])(result1640);
                                        panda$collections$ImmutableArray* $tmp1852 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1792);
                                        $tmp1851 = $tmp1852;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1848, ((panda$core$Int64) { 19 }), $tmp1850, name1785, $tmp1851);
                                        $tmp1847 = $tmp1848;
                                        $tmp1846 = $tmp1847;
                                        result1640 = $tmp1846;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1846));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1847));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
                                    }
                                    $tmp1791 = 3;
                                    goto $l1789;
                                    $l1853:;
                                    $tmp1784 = 3;
                                    goto $l1782;
                                    $l1854:;
                                    goto $l1648;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1855 = result1640;
                                    $returnValue1644 = $tmp1855;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1855));
                                    $tmp1791 = 4;
                                    goto $l1789;
                                    $l1856:;
                                    $tmp1784 = 4;
                                    goto $l1782;
                                    $l1857:;
                                    $tmp1639 = 11;
                                    goto $l1637;
                                    $l1858:;
                                    return $returnValue1644;
                                }
                                }
                            }
                            $tmp1791 = -1;
                            goto $l1789;
                            $l1789:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1792));
                            types1792 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1796));
                            t1796 = NULL;
                            switch ($tmp1791) {
                                case -1: goto $l1860;
                                case 3: goto $l1853;
                                case 0: goto $l1801;
                                case 4: goto $l1856;
                                case 1: goto $l1815;
                                case 2: goto $l1823;
                            }
                            $l1860:;
                        }
                        }
                        $tmp1861 = result1640;
                        $returnValue1644 = $tmp1861;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1861));
                        $tmp1784 = 5;
                        goto $l1782;
                        $l1862:;
                        $tmp1639 = 12;
                        goto $l1637;
                        $l1863:;
                        return $returnValue1644;
                    }
                    $l1782:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1785));
                    name1785 = NULL;
                    switch ($tmp1784) {
                        case 4: goto $l1857;
                        case 5: goto $l1862;
                        case 3: goto $l1854;
                        case 1: goto $l1816;
                        case 0: goto $l1802;
                        case 2: goto $l1824;
                    }
                    $l1865:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1650);
                    $tmp1866 = result1640;
                    $returnValue1644 = $tmp1866;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1866));
                    $tmp1639 = 13;
                    goto $l1637;
                    $l1867:;
                    return $returnValue1644;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1649:;
    }
    $tmp1639 = -1;
    goto $l1637;
    $l1637:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1640));
    result1640 = NULL;
    switch ($tmp1639) {
        case 4: goto $l1725;
        case 5: goto $l1732;
        case 3: goto $l1703;
        case 6: goto $l1756;
        case 9: goto $l1817;
        case 1: goto $l1677;
        case 7: goto $l1773;
        case 8: goto $l1803;
        case 13: goto $l1867;
        case 11: goto $l1858;
        case 12: goto $l1863;
        case -1: goto $l1869;
        case 2: goto $l1693;
        case 0: goto $l1646;
        case 10: goto $l1825;
    }
    $l1869:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1873 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1874;
    org$pandalanguage$pandac$ASTNode* $tmp1875;
    org$pandalanguage$pandac$ASTNode* $returnValue1877;
    org$pandalanguage$pandac$ASTNode* $tmp1878;
    org$pandalanguage$pandac$parser$Token$nullable op1886;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1887;
    org$pandalanguage$pandac$ASTNode* next1890 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1891;
    org$pandalanguage$pandac$ASTNode* $tmp1892;
    org$pandalanguage$pandac$ASTNode* $tmp1894;
    org$pandalanguage$pandac$ASTNode* $tmp1898;
    org$pandalanguage$pandac$ASTNode* $tmp1899;
    org$pandalanguage$pandac$ASTNode* $tmp1900;
    org$pandalanguage$pandac$ASTNode* $tmp1903;
    int $tmp1872;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1876 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1875 = $tmp1876;
        $tmp1874 = $tmp1875;
        result1873 = $tmp1874;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
        if (((panda$core$Bit) { result1873 == NULL }).value) {
        {
            $tmp1878 = NULL;
            $returnValue1877 = $tmp1878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1878));
            $tmp1872 = 0;
            goto $l1870;
            $l1879:;
            return $returnValue1877;
        }
        }
        $l1881:;
        while (true) {
        {
            int $tmp1885;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1887, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1888 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1887);
                op1886 = $tmp1888;
                if (((panda$core$Bit) { !op1886.nonnull }).value) {
                {
                    $tmp1885 = 0;
                    goto $l1883;
                    $l1889:;
                    goto $l1882;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1893 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1892 = $tmp1893;
                $tmp1891 = $tmp1892;
                next1890 = $tmp1891;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1891));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1892));
                if (((panda$core$Bit) { next1890 == NULL }).value) {
                {
                    $tmp1894 = NULL;
                    $returnValue1877 = $tmp1894;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1894));
                    $tmp1885 = 1;
                    goto $l1883;
                    $l1895:;
                    $tmp1872 = 1;
                    goto $l1870;
                    $l1896:;
                    return $returnValue1877;
                }
                }
                {
                    $tmp1898 = result1873;
                    org$pandalanguage$pandac$ASTNode* $tmp1901 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1901, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1886.value).position, result1873, ((org$pandalanguage$pandac$parser$Token) op1886.value).kind, next1890);
                    $tmp1900 = $tmp1901;
                    $tmp1899 = $tmp1900;
                    result1873 = $tmp1899;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1899));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1900));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1898));
                }
            }
            $tmp1885 = -1;
            goto $l1883;
            $l1883:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1890));
            next1890 = NULL;
            switch ($tmp1885) {
                case 0: goto $l1889;
                case -1: goto $l1902;
                case 1: goto $l1895;
            }
            $l1902:;
        }
        }
        $l1882:;
        $tmp1903 = result1873;
        $returnValue1877 = $tmp1903;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1903));
        $tmp1872 = 2;
        goto $l1870;
        $l1904:;
        return $returnValue1877;
    }
    $l1870:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1873));
    result1873 = NULL;
    switch ($tmp1872) {
        case 2: goto $l1904;
        case 1: goto $l1896;
        case 0: goto $l1879;
    }
    $l1906:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1907;
    org$pandalanguage$pandac$parser$Token$Kind $match$924_91909;
    org$pandalanguage$pandac$ASTNode* base1922 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1923;
    org$pandalanguage$pandac$ASTNode* $tmp1924;
    org$pandalanguage$pandac$ASTNode* $returnValue1926;
    org$pandalanguage$pandac$ASTNode* $tmp1927;
    org$pandalanguage$pandac$ASTNode* $tmp1930;
    org$pandalanguage$pandac$ASTNode* $tmp1931;
    org$pandalanguage$pandac$ASTNode* $tmp1936;
    org$pandalanguage$pandac$ASTNode* $tmp1937;
    org$pandalanguage$pandac$parser$Token $tmp1908 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1907 = $tmp1908;
    {
        $match$924_91909 = op1907.kind;
        panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_91909.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1911 = $tmp1912.value;
        if ($tmp1911) goto $l1913;
        panda$core$Bit $tmp1914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_91909.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1911 = $tmp1914.value;
        $l1913:;
        panda$core$Bit $tmp1915 = { $tmp1911 };
        bool $tmp1910 = $tmp1915.value;
        if ($tmp1910) goto $l1916;
        panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_91909.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1910 = $tmp1917.value;
        $l1916:;
        panda$core$Bit $tmp1918 = { $tmp1910 };
        if ($tmp1918.value) {
        {
            int $tmp1921;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1925 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1924 = $tmp1925;
                $tmp1923 = $tmp1924;
                base1922 = $tmp1923;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                if (((panda$core$Bit) { base1922 == NULL }).value) {
                {
                    $tmp1927 = NULL;
                    $returnValue1926 = $tmp1927;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1927));
                    $tmp1921 = 0;
                    goto $l1919;
                    $l1928:;
                    return $returnValue1926;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1932 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1932, ((panda$core$Int64) { 32 }), op1907.position, op1907.kind, base1922);
                $tmp1931 = $tmp1932;
                $tmp1930 = $tmp1931;
                $returnValue1926 = $tmp1930;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1931));
                $tmp1921 = 1;
                goto $l1919;
                $l1933:;
                return $returnValue1926;
            }
            $l1919:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1922));
            base1922 = NULL;
            switch ($tmp1921) {
                case 0: goto $l1928;
                case 1: goto $l1933;
            }
            $l1935:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1907);
            org$pandalanguage$pandac$ASTNode* $tmp1938 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1937 = $tmp1938;
            $tmp1936 = $tmp1937;
            $returnValue1926 = $tmp1936;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
            return $returnValue1926;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1943 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1944;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    org$pandalanguage$pandac$ASTNode* $returnValue1947;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    org$pandalanguage$pandac$parser$Token op1953;
    org$pandalanguage$pandac$parser$Token$Kind $match$950_131955;
    org$pandalanguage$pandac$ASTNode* next1984 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1985;
    org$pandalanguage$pandac$ASTNode* $tmp1986;
    org$pandalanguage$pandac$ASTNode* $tmp1988;
    org$pandalanguage$pandac$ASTNode* $tmp1992;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    org$pandalanguage$pandac$ASTNode* $tmp1994;
    org$pandalanguage$pandac$parser$Token nextToken1998;
    org$pandalanguage$pandac$ASTNode* next2004 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2005;
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    org$pandalanguage$pandac$ASTNode* $tmp2008;
    org$pandalanguage$pandac$ASTNode* $tmp2012;
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2014;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    int $tmp1942;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1946 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1945 = $tmp1946;
        $tmp1944 = $tmp1945;
        result1943 = $tmp1944;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1944));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
        if (((panda$core$Bit) { result1943 == NULL }).value) {
        {
            $tmp1948 = NULL;
            $returnValue1947 = $tmp1948;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
            $tmp1942 = 0;
            goto $l1940;
            $l1949:;
            return $returnValue1947;
        }
        }
        $l1951:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1954 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1953 = $tmp1954;
            {
                $match$950_131955 = op1953.kind;
                panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1961 = $tmp1962.value;
                if ($tmp1961) goto $l1963;
                panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1961 = $tmp1964.value;
                $l1963:;
                panda$core$Bit $tmp1965 = { $tmp1961 };
                bool $tmp1960 = $tmp1965.value;
                if ($tmp1960) goto $l1966;
                panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1960 = $tmp1967.value;
                $l1966:;
                panda$core$Bit $tmp1968 = { $tmp1960 };
                bool $tmp1959 = $tmp1968.value;
                if ($tmp1959) goto $l1969;
                panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1959 = $tmp1970.value;
                $l1969:;
                panda$core$Bit $tmp1971 = { $tmp1959 };
                bool $tmp1958 = $tmp1971.value;
                if ($tmp1958) goto $l1972;
                panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1958 = $tmp1973.value;
                $l1972:;
                panda$core$Bit $tmp1974 = { $tmp1958 };
                bool $tmp1957 = $tmp1974.value;
                if ($tmp1957) goto $l1975;
                panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1957 = $tmp1976.value;
                $l1975:;
                panda$core$Bit $tmp1977 = { $tmp1957 };
                bool $tmp1956 = $tmp1977.value;
                if ($tmp1956) goto $l1978;
                panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1956 = $tmp1979.value;
                $l1978:;
                panda$core$Bit $tmp1980 = { $tmp1956 };
                if ($tmp1980.value) {
                {
                    int $tmp1983;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1987 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1986 = $tmp1987;
                        $tmp1985 = $tmp1986;
                        next1984 = $tmp1985;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
                        if (((panda$core$Bit) { next1984 == NULL }).value) {
                        {
                            $tmp1988 = NULL;
                            $returnValue1947 = $tmp1988;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1988));
                            $tmp1983 = 0;
                            goto $l1981;
                            $l1989:;
                            $tmp1942 = 1;
                            goto $l1940;
                            $l1990:;
                            return $returnValue1947;
                        }
                        }
                        {
                            $tmp1992 = result1943;
                            org$pandalanguage$pandac$ASTNode* $tmp1995 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1995, ((panda$core$Int64) { 4 }), op1953.position, result1943, op1953.kind, next1984);
                            $tmp1994 = $tmp1995;
                            $tmp1993 = $tmp1994;
                            result1943 = $tmp1993;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                        }
                    }
                    $tmp1983 = -1;
                    goto $l1981;
                    $l1981:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1984));
                    next1984 = NULL;
                    switch ($tmp1983) {
                        case -1: goto $l1996;
                        case 0: goto $l1989;
                    }
                    $l1996:;
                }
                }
                else {
                panda$core$Bit $tmp1997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950_131955.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1997.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp1999 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken1998 = $tmp1999;
                    panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1998.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp2000.value) {
                    {
                        int $tmp2003;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2007 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2006 = $tmp2007;
                            $tmp2005 = $tmp2006;
                            next2004 = $tmp2005;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2006));
                            if (((panda$core$Bit) { next2004 == NULL }).value) {
                            {
                                $tmp2008 = NULL;
                                $returnValue1947 = $tmp2008;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
                                $tmp2003 = 0;
                                goto $l2001;
                                $l2009:;
                                $tmp1942 = 2;
                                goto $l1940;
                                $l2010:;
                                return $returnValue1947;
                            }
                            }
                            {
                                $tmp2012 = result1943;
                                org$pandalanguage$pandac$ASTNode* $tmp2015 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2016, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2015, ((panda$core$Int64) { 4 }), op1953.position, result1943, $tmp2016, next2004);
                                $tmp2014 = $tmp2015;
                                $tmp2013 = $tmp2014;
                                result1943 = $tmp2013;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2013));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2014));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
                            }
                        }
                        $tmp2003 = -1;
                        goto $l2001;
                        $l2001:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2004));
                        next2004 = NULL;
                        switch ($tmp2003) {
                            case -1: goto $l2017;
                            case 0: goto $l2009;
                        }
                        $l2017:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1998);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1953);
                        $tmp2018 = result1943;
                        $returnValue1947 = $tmp2018;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
                        $tmp1942 = 3;
                        goto $l1940;
                        $l2019:;
                        return $returnValue1947;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1953);
                    $tmp2021 = result1943;
                    $returnValue1947 = $tmp2021;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
                    $tmp1942 = 4;
                    goto $l1940;
                    $l2022:;
                    return $returnValue1947;
                }
                }
                }
            }
        }
        }
        $l1952:;
    }
    $tmp1942 = -1;
    goto $l1940;
    $l1940:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1943));
    result1943 = NULL;
    switch ($tmp1942) {
        case 4: goto $l2022;
        case -1: goto $l2024;
        case 2: goto $l2010;
        case 0: goto $l1949;
        case 1: goto $l1990;
        case 3: goto $l2019;
    }
    $l2024:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2028 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    org$pandalanguage$pandac$ASTNode* $tmp2030;
    org$pandalanguage$pandac$ASTNode* $returnValue2032;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    org$pandalanguage$pandac$parser$Token op2038;
    org$pandalanguage$pandac$parser$Token$Kind $match$991_132040;
    org$pandalanguage$pandac$ASTNode* next2053 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2054;
    org$pandalanguage$pandac$ASTNode* $tmp2055;
    org$pandalanguage$pandac$ASTNode* $tmp2057;
    org$pandalanguage$pandac$ASTNode* $tmp2061;
    org$pandalanguage$pandac$ASTNode* $tmp2062;
    org$pandalanguage$pandac$ASTNode* $tmp2063;
    org$pandalanguage$pandac$ASTNode* $tmp2066;
    int $tmp2027;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2031 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2030 = $tmp2031;
        $tmp2029 = $tmp2030;
        result2028 = $tmp2029;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
        if (((panda$core$Bit) { result2028 == NULL }).value) {
        {
            $tmp2033 = NULL;
            $returnValue2032 = $tmp2033;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2033));
            $tmp2027 = 0;
            goto $l2025;
            $l2034:;
            return $returnValue2032;
        }
        }
        $l2036:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2039 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2038 = $tmp2039;
            {
                $match$991_132040 = op2038.kind;
                panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$991_132040.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp2042 = $tmp2043.value;
                if ($tmp2042) goto $l2044;
                panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$991_132040.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp2042 = $tmp2045.value;
                $l2044:;
                panda$core$Bit $tmp2046 = { $tmp2042 };
                bool $tmp2041 = $tmp2046.value;
                if ($tmp2041) goto $l2047;
                panda$core$Bit $tmp2048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$991_132040.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp2041 = $tmp2048.value;
                $l2047:;
                panda$core$Bit $tmp2049 = { $tmp2041 };
                if ($tmp2049.value) {
                {
                    int $tmp2052;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2056 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2055 = $tmp2056;
                        $tmp2054 = $tmp2055;
                        next2053 = $tmp2054;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2054));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2055));
                        if (((panda$core$Bit) { next2053 == NULL }).value) {
                        {
                            $tmp2057 = NULL;
                            $returnValue2032 = $tmp2057;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
                            $tmp2052 = 0;
                            goto $l2050;
                            $l2058:;
                            $tmp2027 = 1;
                            goto $l2025;
                            $l2059:;
                            return $returnValue2032;
                        }
                        }
                        {
                            $tmp2061 = result2028;
                            org$pandalanguage$pandac$ASTNode* $tmp2064 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2064, ((panda$core$Int64) { 4 }), op2038.position, result2028, op2038.kind, next2053);
                            $tmp2063 = $tmp2064;
                            $tmp2062 = $tmp2063;
                            result2028 = $tmp2062;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                        }
                    }
                    $tmp2052 = -1;
                    goto $l2050;
                    $l2050:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2053));
                    next2053 = NULL;
                    switch ($tmp2052) {
                        case 0: goto $l2058;
                        case -1: goto $l2065;
                    }
                    $l2065:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2038);
                    $tmp2066 = result2028;
                    $returnValue2032 = $tmp2066;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2066));
                    $tmp2027 = 2;
                    goto $l2025;
                    $l2067:;
                    return $returnValue2032;
                }
                }
            }
        }
        }
        $l2037:;
    }
    $tmp2027 = -1;
    goto $l2025;
    $l2025:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2028));
    result2028 = NULL;
    switch ($tmp2027) {
        case 1: goto $l2059;
        case -1: goto $l2069;
        case 2: goto $l2067;
        case 0: goto $l2034;
    }
    $l2069:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2073 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$1011_92074;
    org$pandalanguage$pandac$ASTNode* $tmp2081;
    org$pandalanguage$pandac$ASTNode* $tmp2082;
    org$pandalanguage$pandac$ASTNode* $tmp2083;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    org$pandalanguage$pandac$ASTNode* $tmp2085;
    org$pandalanguage$pandac$ASTNode* $returnValue2087;
    org$pandalanguage$pandac$ASTNode* $tmp2088;
    org$pandalanguage$pandac$parser$Token op2091;
    org$pandalanguage$pandac$parser$Token$Kind $match$1021_92093;
    org$pandalanguage$pandac$parser$Token next2102;
    org$pandalanguage$pandac$ASTNode* right2104 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2114;
    org$pandalanguage$pandac$ASTNode* $tmp2115;
    org$pandalanguage$pandac$ASTNode* $tmp2116;
    org$pandalanguage$pandac$ASTNode* $tmp2118;
    org$pandalanguage$pandac$ASTNode* $tmp2122;
    org$pandalanguage$pandac$ASTNode* $tmp2123;
    org$pandalanguage$pandac$ASTNode* step2124 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2125;
    org$pandalanguage$pandac$ASTNode* $tmp2127;
    org$pandalanguage$pandac$ASTNode* $tmp2128;
    org$pandalanguage$pandac$ASTNode* $tmp2129;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    org$pandalanguage$pandac$ASTNode* $tmp2135;
    org$pandalanguage$pandac$ASTNode* $tmp2136;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    org$pandalanguage$pandac$ASTNode* $tmp2138;
    org$pandalanguage$pandac$ASTNode* $tmp2145;
    int $tmp2072;
    {
        memset(&result2073, 0, sizeof(result2073));
        {
            org$pandalanguage$pandac$parser$Token $tmp2075 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1011_92074 = $tmp2075.kind;
            panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_92074.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp2076 = $tmp2077.value;
            if ($tmp2076) goto $l2078;
            panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1011_92074.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp2076 = $tmp2079.value;
            $l2078:;
            panda$core$Bit $tmp2080 = { $tmp2076 };
            if ($tmp2080.value) {
            {
                {
                    $tmp2081 = result2073;
                    $tmp2082 = NULL;
                    result2073 = $tmp2082;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2082));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
                }
            }
            }
            else {
            {
                {
                    $tmp2083 = result2073;
                    org$pandalanguage$pandac$ASTNode* $tmp2086 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2085 = $tmp2086;
                    $tmp2084 = $tmp2085;
                    result2073 = $tmp2084;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2084));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2083));
                }
                if (((panda$core$Bit) { result2073 == NULL }).value) {
                {
                    $tmp2088 = NULL;
                    $returnValue2087 = $tmp2088;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                    $tmp2072 = 0;
                    goto $l2070;
                    $l2089:;
                    return $returnValue2087;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp2092 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op2091 = $tmp2092;
        {
            $match$1021_92093 = op2091.kind;
            panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1021_92093.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp2094 = $tmp2095.value;
            if ($tmp2094) goto $l2096;
            panda$core$Bit $tmp2097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1021_92093.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp2094 = $tmp2097.value;
            $l2096:;
            panda$core$Bit $tmp2098 = { $tmp2094 };
            if ($tmp2098.value) {
            {
                int $tmp2101;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2103 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next2102 = $tmp2103;
                    memset(&right2104, 0, sizeof(right2104));
                    panda$core$Bit $tmp2107 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2102.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp2106 = $tmp2107.value;
                    if (!$tmp2106) goto $l2108;
                    panda$core$Bit $tmp2109 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2102.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp2106 = $tmp2109.value;
                    $l2108:;
                    panda$core$Bit $tmp2110 = { $tmp2106 };
                    bool $tmp2105 = $tmp2110.value;
                    if (!$tmp2105) goto $l2111;
                    panda$core$Bit $tmp2112 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next2102.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp2105 = $tmp2112.value;
                    $l2111:;
                    panda$core$Bit $tmp2113 = { $tmp2105 };
                    if ($tmp2113.value) {
                    {
                        {
                            $tmp2114 = right2104;
                            org$pandalanguage$pandac$ASTNode* $tmp2117 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2116 = $tmp2117;
                            $tmp2115 = $tmp2116;
                            right2104 = $tmp2115;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2116));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2114));
                        }
                        if (((panda$core$Bit) { right2104 == NULL }).value) {
                        {
                            $tmp2118 = NULL;
                            $returnValue2087 = $tmp2118;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
                            $tmp2101 = 0;
                            goto $l2099;
                            $l2119:;
                            $tmp2072 = 1;
                            goto $l2070;
                            $l2120:;
                            return $returnValue2087;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2122 = right2104;
                            $tmp2123 = NULL;
                            right2104 = $tmp2123;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2123));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
                        }
                    }
                    }
                    memset(&step2124, 0, sizeof(step2124));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2125, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2126 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2125);
                    if (((panda$core$Bit) { $tmp2126.nonnull }).value) {
                    {
                        {
                            $tmp2127 = step2124;
                            org$pandalanguage$pandac$ASTNode* $tmp2130 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2129 = $tmp2130;
                            $tmp2128 = $tmp2129;
                            step2124 = $tmp2128;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2128));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
                        }
                        if (((panda$core$Bit) { step2124 == NULL }).value) {
                        {
                            $tmp2131 = NULL;
                            $returnValue2087 = $tmp2131;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2131));
                            $tmp2101 = 1;
                            goto $l2099;
                            $l2132:;
                            $tmp2072 = 2;
                            goto $l2070;
                            $l2133:;
                            return $returnValue2087;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp2135 = step2124;
                            $tmp2136 = NULL;
                            step2124 = $tmp2136;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2135));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2139 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op2091.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp2139, ((panda$core$Int64) { 33 }), op2091.position, result2073, right2104, $tmp2140, step2124);
                    $tmp2138 = $tmp2139;
                    $tmp2137 = $tmp2138;
                    $returnValue2087 = $tmp2137;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2137));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
                    $tmp2101 = 2;
                    goto $l2099;
                    $l2141:;
                    $tmp2072 = 3;
                    goto $l2070;
                    $l2142:;
                    return $returnValue2087;
                }
                $l2099:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right2104));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step2124));
                switch ($tmp2101) {
                    case 1: goto $l2132;
                    case 0: goto $l2119;
                    case 2: goto $l2141;
                }
                $l2144:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2091);
                $tmp2145 = result2073;
                $returnValue2087 = $tmp2145;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                $tmp2072 = 4;
                goto $l2070;
                $l2146:;
                return $returnValue2087;
            }
            }
        }
    }
    $tmp2072 = -1;
    goto $l2070;
    $l2070:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2073));
    switch ($tmp2072) {
        case 4: goto $l2146;
        case -1: goto $l2148;
        case 0: goto $l2089;
        case 2: goto $l2133;
        case 3: goto $l2142;
        case 1: goto $l2120;
    }
    $l2148:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2152 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2154;
    org$pandalanguage$pandac$ASTNode* $returnValue2156;
    org$pandalanguage$pandac$ASTNode* $tmp2157;
    org$pandalanguage$pandac$parser$Token op2162;
    org$pandalanguage$pandac$parser$Token$Kind $match$1064_132164;
    org$pandalanguage$pandac$ASTNode* next2197 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    org$pandalanguage$pandac$ASTNode* $tmp2199;
    org$pandalanguage$pandac$ASTNode* $tmp2201;
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    org$pandalanguage$pandac$ASTNode* $tmp2207;
    org$pandalanguage$pandac$ASTNode* $tmp2210;
    int $tmp2151;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2155 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2154 = $tmp2155;
        $tmp2153 = $tmp2154;
        result2152 = $tmp2153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
        if (((panda$core$Bit) { result2152 == NULL }).value) {
        {
            $tmp2157 = NULL;
            $returnValue2156 = $tmp2157;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
            $tmp2151 = 0;
            goto $l2149;
            $l2158:;
            return $returnValue2156;
        }
        }
        $l2160:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2163 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2162 = $tmp2163;
            {
                $match$1064_132164 = op2162.kind;
                panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp2171 = $tmp2172.value;
                if ($tmp2171) goto $l2173;
                panda$core$Bit $tmp2174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp2171 = $tmp2174.value;
                $l2173:;
                panda$core$Bit $tmp2175 = { $tmp2171 };
                bool $tmp2170 = $tmp2175.value;
                if ($tmp2170) goto $l2176;
                panda$core$Bit $tmp2177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp2170 = $tmp2177.value;
                $l2176:;
                panda$core$Bit $tmp2178 = { $tmp2170 };
                bool $tmp2169 = $tmp2178.value;
                if ($tmp2169) goto $l2179;
                panda$core$Bit $tmp2180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp2169 = $tmp2180.value;
                $l2179:;
                panda$core$Bit $tmp2181 = { $tmp2169 };
                bool $tmp2168 = $tmp2181.value;
                if ($tmp2168) goto $l2182;
                panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp2168 = $tmp2183.value;
                $l2182:;
                panda$core$Bit $tmp2184 = { $tmp2168 };
                bool $tmp2167 = $tmp2184.value;
                if ($tmp2167) goto $l2185;
                panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp2167 = $tmp2186.value;
                $l2185:;
                panda$core$Bit $tmp2187 = { $tmp2167 };
                bool $tmp2166 = $tmp2187.value;
                if ($tmp2166) goto $l2188;
                panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp2166 = $tmp2189.value;
                $l2188:;
                panda$core$Bit $tmp2190 = { $tmp2166 };
                bool $tmp2165 = $tmp2190.value;
                if ($tmp2165) goto $l2191;
                panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1064_132164.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp2165 = $tmp2192.value;
                $l2191:;
                panda$core$Bit $tmp2193 = { $tmp2165 };
                if ($tmp2193.value) {
                {
                    int $tmp2196;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2200 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2199 = $tmp2200;
                        $tmp2198 = $tmp2199;
                        next2197 = $tmp2198;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2199));
                        if (((panda$core$Bit) { next2197 == NULL }).value) {
                        {
                            $tmp2201 = NULL;
                            $returnValue2156 = $tmp2201;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
                            $tmp2196 = 0;
                            goto $l2194;
                            $l2202:;
                            $tmp2151 = 1;
                            goto $l2149;
                            $l2203:;
                            return $returnValue2156;
                        }
                        }
                        {
                            $tmp2205 = result2152;
                            org$pandalanguage$pandac$ASTNode* $tmp2208 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2208, ((panda$core$Int64) { 4 }), op2162.position, result2152, op2162.kind, next2197);
                            $tmp2207 = $tmp2208;
                            $tmp2206 = $tmp2207;
                            result2152 = $tmp2206;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
                        }
                    }
                    $tmp2196 = -1;
                    goto $l2194;
                    $l2194:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2197));
                    next2197 = NULL;
                    switch ($tmp2196) {
                        case -1: goto $l2209;
                        case 0: goto $l2202;
                    }
                    $l2209:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2162);
                    $tmp2210 = result2152;
                    $returnValue2156 = $tmp2210;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
                    $tmp2151 = 2;
                    goto $l2149;
                    $l2211:;
                    return $returnValue2156;
                }
                }
            }
        }
        }
        $l2161:;
    }
    $tmp2151 = -1;
    goto $l2149;
    $l2149:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2152));
    result2152 = NULL;
    switch ($tmp2151) {
        case -1: goto $l2213;
        case 2: goto $l2211;
        case 0: goto $l2158;
        case 1: goto $l2203;
    }
    $l2213:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2217 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2218;
    org$pandalanguage$pandac$ASTNode* $tmp2219;
    org$pandalanguage$pandac$ASTNode* $returnValue2221;
    org$pandalanguage$pandac$ASTNode* $tmp2222;
    org$pandalanguage$pandac$parser$Token op2227;
    org$pandalanguage$pandac$parser$Token$Kind $match$1095_132229;
    org$pandalanguage$pandac$ASTNode* next2238 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2239;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    org$pandalanguage$pandac$ASTNode* $tmp2246;
    org$pandalanguage$pandac$ASTNode* $tmp2247;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    int $tmp2216;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2220 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2219 = $tmp2220;
        $tmp2218 = $tmp2219;
        result2217 = $tmp2218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
        if (((panda$core$Bit) { result2217 == NULL }).value) {
        {
            $tmp2222 = NULL;
            $returnValue2221 = $tmp2222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2222));
            $tmp2216 = 0;
            goto $l2214;
            $l2223:;
            return $returnValue2221;
        }
        }
        $l2225:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2228 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op2227 = $tmp2228;
            {
                $match$1095_132229 = op2227.kind;
                panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1095_132229.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp2230 = $tmp2231.value;
                if ($tmp2230) goto $l2232;
                panda$core$Bit $tmp2233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1095_132229.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp2230 = $tmp2233.value;
                $l2232:;
                panda$core$Bit $tmp2234 = { $tmp2230 };
                if ($tmp2234.value) {
                {
                    int $tmp2237;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2241 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2240 = $tmp2241;
                        $tmp2239 = $tmp2240;
                        next2238 = $tmp2239;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2240));
                        if (((panda$core$Bit) { next2238 == NULL }).value) {
                        {
                            $tmp2242 = NULL;
                            $returnValue2221 = $tmp2242;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
                            $tmp2237 = 0;
                            goto $l2235;
                            $l2243:;
                            $tmp2216 = 1;
                            goto $l2214;
                            $l2244:;
                            return $returnValue2221;
                        }
                        }
                        {
                            $tmp2246 = result2217;
                            org$pandalanguage$pandac$ASTNode* $tmp2249 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2249, ((panda$core$Int64) { 4 }), op2227.position, result2217, op2227.kind, next2238);
                            $tmp2248 = $tmp2249;
                            $tmp2247 = $tmp2248;
                            result2217 = $tmp2247;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2247));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
                        }
                    }
                    $tmp2237 = -1;
                    goto $l2235;
                    $l2235:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2238));
                    next2238 = NULL;
                    switch ($tmp2237) {
                        case -1: goto $l2250;
                        case 0: goto $l2243;
                    }
                    $l2250:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op2227);
                    $tmp2251 = result2217;
                    $returnValue2221 = $tmp2251;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
                    $tmp2216 = 2;
                    goto $l2214;
                    $l2252:;
                    return $returnValue2221;
                }
                }
            }
        }
        }
        $l2226:;
    }
    $tmp2216 = -1;
    goto $l2214;
    $l2214:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2217));
    result2217 = NULL;
    switch ($tmp2216) {
        case -1: goto $l2254;
        case 1: goto $l2244;
        case 2: goto $l2252;
        case 0: goto $l2223;
    }
    $l2254:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result2258 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2259;
    org$pandalanguage$pandac$ASTNode* $tmp2260;
    org$pandalanguage$pandac$ASTNode* $returnValue2262;
    org$pandalanguage$pandac$ASTNode* $tmp2263;
    org$pandalanguage$pandac$parser$Token$nullable op2271;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2272;
    org$pandalanguage$pandac$ASTNode* next2275 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2276;
    org$pandalanguage$pandac$ASTNode* $tmp2277;
    org$pandalanguage$pandac$ASTNode* $tmp2279;
    org$pandalanguage$pandac$ASTNode* $tmp2283;
    org$pandalanguage$pandac$ASTNode* $tmp2284;
    org$pandalanguage$pandac$ASTNode* $tmp2285;
    org$pandalanguage$pandac$ASTNode* $tmp2288;
    int $tmp2257;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2261 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2260 = $tmp2261;
        $tmp2259 = $tmp2260;
        result2258 = $tmp2259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
        if (((panda$core$Bit) { result2258 == NULL }).value) {
        {
            $tmp2263 = NULL;
            $returnValue2262 = $tmp2263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2263));
            $tmp2257 = 0;
            goto $l2255;
            $l2264:;
            return $returnValue2262;
        }
        }
        $l2266:;
        while (true) {
        {
            int $tmp2270;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2272, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2273 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2272);
                op2271 = $tmp2273;
                if (((panda$core$Bit) { !op2271.nonnull }).value) {
                {
                    $tmp2270 = 0;
                    goto $l2268;
                    $l2274:;
                    goto $l2267;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2278 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2277 = $tmp2278;
                $tmp2276 = $tmp2277;
                next2275 = $tmp2276;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2276));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2277));
                if (((panda$core$Bit) { next2275 == NULL }).value) {
                {
                    $tmp2279 = NULL;
                    $returnValue2262 = $tmp2279;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2279));
                    $tmp2270 = 1;
                    goto $l2268;
                    $l2280:;
                    $tmp2257 = 1;
                    goto $l2255;
                    $l2281:;
                    return $returnValue2262;
                }
                }
                {
                    $tmp2283 = result2258;
                    org$pandalanguage$pandac$ASTNode* $tmp2286 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2286, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op2271.value).position, result2258, ((org$pandalanguage$pandac$parser$Token) op2271.value).kind, next2275);
                    $tmp2285 = $tmp2286;
                    $tmp2284 = $tmp2285;
                    result2258 = $tmp2284;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2284));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
                }
            }
            $tmp2270 = -1;
            goto $l2268;
            $l2268:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next2275));
            next2275 = NULL;
            switch ($tmp2270) {
                case 1: goto $l2280;
                case 0: goto $l2274;
                case -1: goto $l2287;
            }
            $l2287:;
        }
        }
        $l2267:;
        $tmp2288 = result2258;
        $returnValue2262 = $tmp2288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
        $tmp2257 = 2;
        goto $l2255;
        $l2289:;
        return $returnValue2262;
    }
    $l2255:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2258));
    result2258 = NULL;
    switch ($tmp2257) {
        case 2: goto $l2289;
        case 0: goto $l2264;
        case 1: goto $l2281;
    }
    $l2291:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2295;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2296;
    org$pandalanguage$pandac$ASTNode* $returnValue2299;
    org$pandalanguage$pandac$ASTNode* $tmp2300;
    org$pandalanguage$pandac$ASTNode* test2303 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2304;
    org$pandalanguage$pandac$ASTNode* $tmp2305;
    org$pandalanguage$pandac$ASTNode* $tmp2307;
    panda$collections$ImmutableArray* ifTrue2310 = NULL;
    panda$collections$ImmutableArray* $tmp2311;
    panda$collections$ImmutableArray* $tmp2312;
    org$pandalanguage$pandac$ASTNode* $tmp2314;
    org$pandalanguage$pandac$ASTNode* ifFalse2317 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2318;
    org$pandalanguage$pandac$ASTNode* $tmp2322;
    org$pandalanguage$pandac$ASTNode* $tmp2323;
    org$pandalanguage$pandac$ASTNode* $tmp2324;
    org$pandalanguage$pandac$ASTNode* $tmp2326;
    org$pandalanguage$pandac$ASTNode* $tmp2329;
    org$pandalanguage$pandac$ASTNode* $tmp2330;
    org$pandalanguage$pandac$ASTNode* $tmp2331;
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    org$pandalanguage$pandac$ASTNode* $tmp2336;
    org$pandalanguage$pandac$ASTNode* $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    int $tmp2294;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2296, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2298 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2296, &$s2297);
        start2295 = $tmp2298;
        if (((panda$core$Bit) { !start2295.nonnull }).value) {
        {
            $tmp2300 = NULL;
            $returnValue2299 = $tmp2300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
            $tmp2294 = 0;
            goto $l2292;
            $l2301:;
            return $returnValue2299;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2306 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2305 = $tmp2306;
        $tmp2304 = $tmp2305;
        test2303 = $tmp2304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
        if (((panda$core$Bit) { test2303 == NULL }).value) {
        {
            $tmp2307 = NULL;
            $returnValue2299 = $tmp2307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2307));
            $tmp2294 = 1;
            goto $l2292;
            $l2308:;
            return $returnValue2299;
        }
        }
        panda$collections$ImmutableArray* $tmp2313 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2312 = $tmp2313;
        $tmp2311 = $tmp2312;
        ifTrue2310 = $tmp2311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
        if (((panda$core$Bit) { ifTrue2310 == NULL }).value) {
        {
            $tmp2314 = NULL;
            $returnValue2299 = $tmp2314;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
            $tmp2294 = 2;
            goto $l2292;
            $l2315:;
            return $returnValue2299;
        }
        }
        memset(&ifFalse2317, 0, sizeof(ifFalse2317));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2318, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2319 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2318);
        if (((panda$core$Bit) { $tmp2319.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2320 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2320.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2321.value) {
            {
                {
                    $tmp2322 = ifFalse2317;
                    org$pandalanguage$pandac$ASTNode* $tmp2325 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2324 = $tmp2325;
                    $tmp2323 = $tmp2324;
                    ifFalse2317 = $tmp2323;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2323));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2324));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2322));
                }
                if (((panda$core$Bit) { ifFalse2317 == NULL }).value) {
                {
                    $tmp2326 = NULL;
                    $returnValue2299 = $tmp2326;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2326));
                    $tmp2294 = 3;
                    goto $l2292;
                    $l2327:;
                    return $returnValue2299;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp2329 = ifFalse2317;
                    org$pandalanguage$pandac$ASTNode* $tmp2332 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2331 = $tmp2332;
                    $tmp2330 = $tmp2331;
                    ifFalse2317 = $tmp2330;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2330));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
                }
                if (((panda$core$Bit) { ifFalse2317 == NULL }).value) {
                {
                    $tmp2333 = NULL;
                    $returnValue2299 = $tmp2333;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
                    $tmp2294 = 4;
                    goto $l2292;
                    $l2334:;
                    return $returnValue2299;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp2336 = ifFalse2317;
                $tmp2337 = NULL;
                ifFalse2317 = $tmp2337;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2340 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp2340, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start2295.value).position, test2303, ifTrue2310, ifFalse2317);
        $tmp2339 = $tmp2340;
        $tmp2338 = $tmp2339;
        $returnValue2299 = $tmp2338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
        $tmp2294 = 5;
        goto $l2292;
        $l2341:;
        return $returnValue2299;
    }
    $l2292:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2303));
    test2303 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue2310));
    ifTrue2310 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse2317));
    switch ($tmp2294) {
        case 4: goto $l2334;
        case 1: goto $l2308;
        case 5: goto $l2341;
        case 3: goto $l2327;
        case 0: goto $l2301;
        case 2: goto $l2315;
    }
    $l2343:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp2344;
    org$pandalanguage$pandac$ASTNode* $returnValue2347;
    org$pandalanguage$pandac$ASTNode* $tmp2348;
    org$pandalanguage$pandac$ASTNode* $tmp2350;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2344, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2346 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2344, &$s2345);
    if (((panda$core$Bit) { !$tmp2346.nonnull }).value) {
    {
        $tmp2348 = NULL;
        $returnValue2347 = $tmp2348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2348));
        return $returnValue2347;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2352 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp2351 = $tmp2352;
    $tmp2350 = $tmp2351;
    $returnValue2347 = $tmp2350;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
    return $returnValue2347;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id2354;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2355;
    org$pandalanguage$pandac$ASTNode* $returnValue2358;
    org$pandalanguage$pandac$ASTNode* $tmp2359;
    org$pandalanguage$pandac$ASTNode* type2366 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2367;
    org$pandalanguage$pandac$ASTNode* $tmp2368;
    org$pandalanguage$pandac$ASTNode* $tmp2370;
    org$pandalanguage$pandac$ASTNode* $tmp2373;
    org$pandalanguage$pandac$ASTNode* $tmp2374;
    panda$core$String* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $tmp2381;
    org$pandalanguage$pandac$ASTNode* $tmp2382;
    panda$core$String* $tmp2384;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2355, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2357 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2355, &$s2356);
    id2354 = $tmp2357;
    if (((panda$core$Bit) { !id2354.nonnull }).value) {
    {
        $tmp2359 = NULL;
        $returnValue2358 = $tmp2359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2359));
        return $returnValue2358;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2361 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2361.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2362.value) {
    {
        int $tmp2365;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2369 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2368 = $tmp2369;
            $tmp2367 = $tmp2368;
            type2366 = $tmp2367;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
            if (((panda$core$Bit) { type2366 == NULL }).value) {
            {
                $tmp2370 = NULL;
                $returnValue2358 = $tmp2370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2370));
                $tmp2365 = 0;
                goto $l2363;
                $l2371:;
                return $returnValue2358;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp2375 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp2377 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2354.value));
            $tmp2376 = $tmp2377;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2375, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) id2354.value).position, $tmp2376, type2366);
            $tmp2374 = $tmp2375;
            $tmp2373 = $tmp2374;
            $returnValue2358 = $tmp2373;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2373));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
            $tmp2365 = 1;
            goto $l2363;
            $l2378:;
            return $returnValue2358;
        }
        $l2363:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type2366));
        type2366 = NULL;
        switch ($tmp2365) {
            case 1: goto $l2378;
            case 0: goto $l2371;
        }
        $l2380:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2383 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp2385 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2354.value));
    $tmp2384 = $tmp2385;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2383, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id2354.value).position, $tmp2384);
    $tmp2382 = $tmp2383;
    $tmp2381 = $tmp2382;
    $returnValue2358 = $tmp2381;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2384));
    return $returnValue2358;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2390;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2391;
    org$pandalanguage$pandac$ASTNode* $returnValue2394;
    org$pandalanguage$pandac$ASTNode* $tmp2395;
    org$pandalanguage$pandac$ASTNode* t2398 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2399;
    org$pandalanguage$pandac$ASTNode* $tmp2400;
    org$pandalanguage$pandac$ASTNode* $tmp2402;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2405;
    org$pandalanguage$pandac$ASTNode* $tmp2408;
    org$pandalanguage$pandac$ASTNode* list2411 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2412;
    org$pandalanguage$pandac$ASTNode* $tmp2413;
    org$pandalanguage$pandac$ASTNode* $tmp2415;
    panda$collections$ImmutableArray* block2418 = NULL;
    panda$collections$ImmutableArray* $tmp2419;
    panda$collections$ImmutableArray* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2422;
    org$pandalanguage$pandac$ASTNode* $tmp2425;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    int $tmp2389;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2391, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2393 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2391, &$s2392);
        start2390 = $tmp2393;
        if (((panda$core$Bit) { !start2390.nonnull }).value) {
        {
            $tmp2395 = NULL;
            $returnValue2394 = $tmp2395;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2395));
            $tmp2389 = 0;
            goto $l2387;
            $l2396:;
            return $returnValue2394;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2401 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2400 = $tmp2401;
        $tmp2399 = $tmp2400;
        t2398 = $tmp2399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
        if (((panda$core$Bit) { t2398 == NULL }).value) {
        {
            $tmp2402 = NULL;
            $returnValue2394 = $tmp2402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2402));
            $tmp2389 = 1;
            goto $l2387;
            $l2403:;
            return $returnValue2394;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2405, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2407 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2405, &$s2406);
        if (((panda$core$Bit) { !$tmp2407.nonnull }).value) {
        {
            $tmp2408 = NULL;
            $returnValue2394 = $tmp2408;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2408));
            $tmp2389 = 2;
            goto $l2387;
            $l2409:;
            return $returnValue2394;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2414 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2413 = $tmp2414;
        $tmp2412 = $tmp2413;
        list2411 = $tmp2412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2413));
        if (((panda$core$Bit) { list2411 == NULL }).value) {
        {
            $tmp2415 = NULL;
            $returnValue2394 = $tmp2415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2415));
            $tmp2389 = 3;
            goto $l2387;
            $l2416:;
            return $returnValue2394;
        }
        }
        panda$collections$ImmutableArray* $tmp2421 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2420 = $tmp2421;
        $tmp2419 = $tmp2420;
        block2418 = $tmp2419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
        if (((panda$core$Bit) { block2418 == NULL }).value) {
        {
            $tmp2422 = NULL;
            $returnValue2394 = $tmp2422;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
            $tmp2389 = 4;
            goto $l2387;
            $l2423:;
            return $returnValue2394;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2427 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2427, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2390.value).position, p_label, t2398, list2411, block2418);
        $tmp2426 = $tmp2427;
        $tmp2425 = $tmp2426;
        $returnValue2394 = $tmp2425;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
        $tmp2389 = 5;
        goto $l2387;
        $l2428:;
        return $returnValue2394;
    }
    $l2387:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2398));
    t2398 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2411));
    list2411 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2418));
    block2418 = NULL;
    switch ($tmp2389) {
        case 2: goto $l2409;
        case 4: goto $l2423;
        case 1: goto $l2403;
        case 3: goto $l2416;
        case 5: goto $l2428;
        case 0: goto $l2396;
    }
    $l2430:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2434;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2435;
    org$pandalanguage$pandac$ASTNode* $returnValue2438;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    org$pandalanguage$pandac$ASTNode* test2442 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2443;
    org$pandalanguage$pandac$ASTNode* $tmp2444;
    org$pandalanguage$pandac$ASTNode* $tmp2446;
    panda$collections$ImmutableArray* body2449 = NULL;
    panda$collections$ImmutableArray* $tmp2450;
    panda$collections$ImmutableArray* $tmp2451;
    org$pandalanguage$pandac$ASTNode* $tmp2453;
    org$pandalanguage$pandac$ASTNode* $tmp2456;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    int $tmp2433;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2435, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2437 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2435, &$s2436);
        start2434 = $tmp2437;
        if (((panda$core$Bit) { !start2434.nonnull }).value) {
        {
            $tmp2439 = NULL;
            $returnValue2438 = $tmp2439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2439));
            $tmp2433 = 0;
            goto $l2431;
            $l2440:;
            return $returnValue2438;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2445 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2444 = $tmp2445;
        $tmp2443 = $tmp2444;
        test2442 = $tmp2443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2444));
        if (((panda$core$Bit) { test2442 == NULL }).value) {
        {
            $tmp2446 = NULL;
            $returnValue2438 = $tmp2446;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2446));
            $tmp2433 = 1;
            goto $l2431;
            $l2447:;
            return $returnValue2438;
        }
        }
        panda$collections$ImmutableArray* $tmp2452 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2451 = $tmp2452;
        $tmp2450 = $tmp2451;
        body2449 = $tmp2450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
        if (((panda$core$Bit) { body2449 == NULL }).value) {
        {
            $tmp2453 = NULL;
            $returnValue2438 = $tmp2453;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
            $tmp2433 = 2;
            goto $l2431;
            $l2454:;
            return $returnValue2438;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2458 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2458, ((panda$core$Int64) { 48 }), ((org$pandalanguage$pandac$parser$Token) start2434.value).position, p_label, test2442, body2449);
        $tmp2457 = $tmp2458;
        $tmp2456 = $tmp2457;
        $returnValue2438 = $tmp2456;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2456));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
        $tmp2433 = 3;
        goto $l2431;
        $l2459:;
        return $returnValue2438;
    }
    $l2431:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2442));
    test2442 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2449));
    body2449 = NULL;
    switch ($tmp2433) {
        case 3: goto $l2459;
        case 1: goto $l2447;
        case 2: goto $l2454;
        case 0: goto $l2440;
    }
    $l2461:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2465;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2466;
    org$pandalanguage$pandac$ASTNode* $returnValue2469;
    org$pandalanguage$pandac$ASTNode* $tmp2470;
    panda$collections$ImmutableArray* body2473 = NULL;
    panda$collections$ImmutableArray* $tmp2474;
    panda$collections$ImmutableArray* $tmp2475;
    org$pandalanguage$pandac$ASTNode* $tmp2477;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2480;
    org$pandalanguage$pandac$ASTNode* $tmp2483;
    org$pandalanguage$pandac$ASTNode* test2486 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2487;
    org$pandalanguage$pandac$ASTNode* $tmp2488;
    org$pandalanguage$pandac$ASTNode* $tmp2490;
    org$pandalanguage$pandac$ASTNode* $tmp2493;
    org$pandalanguage$pandac$ASTNode* $tmp2494;
    int $tmp2464;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2466, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2468 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2466, &$s2467);
        start2465 = $tmp2468;
        if (((panda$core$Bit) { !start2465.nonnull }).value) {
        {
            $tmp2470 = NULL;
            $returnValue2469 = $tmp2470;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2470));
            $tmp2464 = 0;
            goto $l2462;
            $l2471:;
            return $returnValue2469;
        }
        }
        panda$collections$ImmutableArray* $tmp2476 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2475 = $tmp2476;
        $tmp2474 = $tmp2475;
        body2473 = $tmp2474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
        if (((panda$core$Bit) { body2473 == NULL }).value) {
        {
            $tmp2477 = NULL;
            $returnValue2469 = $tmp2477;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2477));
            $tmp2464 = 1;
            goto $l2462;
            $l2478:;
            return $returnValue2469;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2480, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2482 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2480, &$s2481);
        if (((panda$core$Bit) { !$tmp2482.nonnull }).value) {
        {
            $tmp2483 = NULL;
            $returnValue2469 = $tmp2483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
            $tmp2464 = 2;
            goto $l2462;
            $l2484:;
            return $returnValue2469;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2489 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2488 = $tmp2489;
        $tmp2487 = $tmp2488;
        test2486 = $tmp2487;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
        if (((panda$core$Bit) { test2486 == NULL }).value) {
        {
            $tmp2490 = NULL;
            $returnValue2469 = $tmp2490;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2490));
            $tmp2464 = 3;
            goto $l2462;
            $l2491:;
            return $returnValue2469;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2495 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2495, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$parser$Token) start2465.value).position, p_label, body2473, test2486);
        $tmp2494 = $tmp2495;
        $tmp2493 = $tmp2494;
        $returnValue2469 = $tmp2493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
        $tmp2464 = 4;
        goto $l2462;
        $l2496:;
        return $returnValue2469;
    }
    $l2462:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2473));
    body2473 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2486));
    test2486 = NULL;
    switch ($tmp2464) {
        case 2: goto $l2484;
        case 3: goto $l2491;
        case 1: goto $l2478;
        case 4: goto $l2496;
        case 0: goto $l2471;
    }
    $l2498:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2502;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2503;
    org$pandalanguage$pandac$ASTNode* $returnValue2506;
    org$pandalanguage$pandac$ASTNode* $tmp2507;
    panda$collections$ImmutableArray* body2510 = NULL;
    panda$collections$ImmutableArray* $tmp2511;
    panda$collections$ImmutableArray* $tmp2512;
    org$pandalanguage$pandac$ASTNode* $tmp2514;
    org$pandalanguage$pandac$ASTNode* $tmp2517;
    org$pandalanguage$pandac$ASTNode* $tmp2518;
    int $tmp2501;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2503, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2505 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2503, &$s2504);
        start2502 = $tmp2505;
        if (((panda$core$Bit) { !start2502.nonnull }).value) {
        {
            $tmp2507 = NULL;
            $returnValue2506 = $tmp2507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2507));
            $tmp2501 = 0;
            goto $l2499;
            $l2508:;
            return $returnValue2506;
        }
        }
        panda$collections$ImmutableArray* $tmp2513 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2512 = $tmp2513;
        $tmp2511 = $tmp2512;
        body2510 = $tmp2511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2512));
        if (((panda$core$Bit) { body2510 == NULL }).value) {
        {
            $tmp2514 = NULL;
            $returnValue2506 = $tmp2514;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2514));
            $tmp2501 = 1;
            goto $l2499;
            $l2515:;
            return $returnValue2506;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2519 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2519, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2502.value).position, p_label, body2510);
        $tmp2518 = $tmp2519;
        $tmp2517 = $tmp2518;
        $returnValue2506 = $tmp2517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2518));
        $tmp2501 = 2;
        goto $l2499;
        $l2520:;
        return $returnValue2506;
    }
    $l2499:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2510));
    body2510 = NULL;
    switch ($tmp2501) {
        case 1: goto $l2515;
        case 2: goto $l2520;
        case 0: goto $l2508;
    }
    $l2522:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2526;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2527;
    org$pandalanguage$pandac$ASTNode* $returnValue2530;
    org$pandalanguage$pandac$ASTNode* $tmp2531;
    org$pandalanguage$pandac$ASTNode* expr2534 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2535;
    org$pandalanguage$pandac$ASTNode* $tmp2536;
    org$pandalanguage$pandac$ASTNode* $tmp2538;
    org$pandalanguage$pandac$ASTNode* message2541 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2542;
    org$pandalanguage$pandac$ASTNode* $tmp2544;
    org$pandalanguage$pandac$ASTNode* $tmp2545;
    org$pandalanguage$pandac$ASTNode* $tmp2546;
    org$pandalanguage$pandac$ASTNode* $tmp2548;
    org$pandalanguage$pandac$ASTNode* $tmp2551;
    org$pandalanguage$pandac$ASTNode* $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    org$pandalanguage$pandac$ASTNode* $tmp2554;
    int $tmp2525;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2527, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2529 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2527, &$s2528);
        start2526 = $tmp2529;
        if (((panda$core$Bit) { !start2526.nonnull }).value) {
        {
            $tmp2531 = NULL;
            $returnValue2530 = $tmp2531;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2531));
            $tmp2525 = 0;
            goto $l2523;
            $l2532:;
            return $returnValue2530;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2537 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2536 = $tmp2537;
        $tmp2535 = $tmp2536;
        expr2534 = $tmp2535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
        if (((panda$core$Bit) { expr2534 == NULL }).value) {
        {
            $tmp2538 = NULL;
            $returnValue2530 = $tmp2538;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2538));
            $tmp2525 = 1;
            goto $l2523;
            $l2539:;
            return $returnValue2530;
        }
        }
        memset(&message2541, 0, sizeof(message2541));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2542, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2543 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2542);
        if (((panda$core$Bit) { $tmp2543.nonnull }).value) {
        {
            {
                $tmp2544 = message2541;
                org$pandalanguage$pandac$ASTNode* $tmp2547 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2546 = $tmp2547;
                $tmp2545 = $tmp2546;
                message2541 = $tmp2545;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2545));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2544));
            }
            if (((panda$core$Bit) { message2541 == NULL }).value) {
            {
                $tmp2548 = NULL;
                $returnValue2530 = $tmp2548;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2548));
                $tmp2525 = 2;
                goto $l2523;
                $l2549:;
                return $returnValue2530;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2551 = message2541;
                $tmp2552 = NULL;
                message2541 = $tmp2552;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2555 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2555, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2526.value).position, expr2534, message2541);
        $tmp2554 = $tmp2555;
        $tmp2553 = $tmp2554;
        $returnValue2530 = $tmp2553;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
        $tmp2525 = 3;
        goto $l2523;
        $l2556:;
        return $returnValue2530;
    }
    $l2523:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2534));
    expr2534 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2541));
    switch ($tmp2525) {
        case 3: goto $l2556;
        case 2: goto $l2549;
        case 1: goto $l2539;
        case 0: goto $l2532;
    }
    $l2558:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2565;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2566;
    org$pandalanguage$pandac$ASTNode* $returnValue2569;
    org$pandalanguage$pandac$ASTNode* $tmp2570;
    panda$collections$Array* expressions2574 = NULL;
    panda$collections$Array* $tmp2575;
    panda$collections$Array* $tmp2576;
    org$pandalanguage$pandac$ASTNode* expr2578 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2579;
    org$pandalanguage$pandac$ASTNode* $tmp2580;
    org$pandalanguage$pandac$ASTNode* $tmp2582;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2589;
    org$pandalanguage$pandac$ASTNode* $tmp2591;
    org$pandalanguage$pandac$ASTNode* $tmp2592;
    org$pandalanguage$pandac$ASTNode* $tmp2593;
    org$pandalanguage$pandac$ASTNode* $tmp2595;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2602;
    panda$collections$Array* statements2606 = NULL;
    panda$collections$Array* $tmp2607;
    panda$collections$Array* $tmp2608;
    org$pandalanguage$pandac$parser$Token$Kind $match$1335_132612;
    org$pandalanguage$pandac$ASTNode* stmt2635 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    org$pandalanguage$pandac$ASTNode* $tmp2639;
    org$pandalanguage$pandac$ASTNode* stmt2649 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2650;
    org$pandalanguage$pandac$ASTNode* $tmp2651;
    org$pandalanguage$pandac$ASTNode* $tmp2653;
    org$pandalanguage$pandac$ASTNode* $tmp2659;
    org$pandalanguage$pandac$ASTNode* $tmp2660;
    panda$collections$ImmutableArray* $tmp2662;
    panda$collections$ImmutableArray* $tmp2664;
    int $tmp2561;
    {
        PANDA_ASSERT(self->allowLambdas.value);
        int $tmp2564;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2566, ((panda$core$Int64) { 39 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2568 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2566, &$s2567);
            start2565 = $tmp2568;
            if (((panda$core$Bit) { !start2565.nonnull }).value) {
            {
                $tmp2570 = NULL;
                $returnValue2569 = $tmp2570;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2570));
                $tmp2564 = 0;
                goto $l2562;
                $l2571:;
                $tmp2561 = 0;
                goto $l2559;
                $l2572:;
                return $returnValue2569;
            }
            }
            self->allowLambdas = ((panda$core$Bit) { false });
            panda$collections$Array* $tmp2577 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2577);
            $tmp2576 = $tmp2577;
            $tmp2575 = $tmp2576;
            expressions2574 = $tmp2575;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
            org$pandalanguage$pandac$ASTNode* $tmp2581 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2580 = $tmp2581;
            $tmp2579 = $tmp2580;
            expr2578 = $tmp2579;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2579));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2580));
            if (((panda$core$Bit) { expr2578 == NULL }).value) {
            {
                self->allowLambdas = ((panda$core$Bit) { true });
                $tmp2582 = NULL;
                $returnValue2569 = $tmp2582;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
                $tmp2564 = 1;
                goto $l2562;
                $l2583:;
                $tmp2561 = 1;
                goto $l2559;
                $l2584:;
                return $returnValue2569;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2574, ((panda$core$Object*) expr2578));
            $l2586:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2589, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2590 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2589);
            bool $tmp2588 = ((panda$core$Bit) { $tmp2590.nonnull }).value;
            if (!$tmp2588) goto $l2587;
            {
                {
                    $tmp2591 = expr2578;
                    org$pandalanguage$pandac$ASTNode* $tmp2594 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2593 = $tmp2594;
                    $tmp2592 = $tmp2593;
                    expr2578 = $tmp2592;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2592));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
                }
                if (((panda$core$Bit) { expr2578 == NULL }).value) {
                {
                    self->allowLambdas = ((panda$core$Bit) { true });
                    $tmp2595 = NULL;
                    $returnValue2569 = $tmp2595;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2595));
                    $tmp2564 = 2;
                    goto $l2562;
                    $l2596:;
                    $tmp2561 = 2;
                    goto $l2559;
                    $l2597:;
                    return $returnValue2569;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(expressions2574, ((panda$core$Object*) expr2578));
            }
            goto $l2586;
            $l2587:;
            self->allowLambdas = ((panda$core$Bit) { true });
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2599, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2601 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2599, &$s2600);
            if (((panda$core$Bit) { !$tmp2601.nonnull }).value) {
            {
                $tmp2602 = NULL;
                $returnValue2569 = $tmp2602;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                $tmp2564 = 3;
                goto $l2562;
                $l2603:;
                $tmp2561 = 3;
                goto $l2559;
                $l2604:;
                return $returnValue2569;
            }
            }
            panda$collections$Array* $tmp2609 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp2609);
            $tmp2608 = $tmp2609;
            $tmp2607 = $tmp2608;
            statements2606 = $tmp2607;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2608));
            $l2610:;
            while (true) {
            {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2613 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    $match$1335_132612 = $tmp2613.kind;
                    panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_132612.$rawValue, ((panda$core$Int64) { 39 }));
                    bool $tmp2615 = $tmp2616.value;
                    if ($tmp2615) goto $l2617;
                    panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_132612.$rawValue, ((panda$core$Int64) { 40 }));
                    $tmp2615 = $tmp2618.value;
                    $l2617:;
                    panda$core$Bit $tmp2619 = { $tmp2615 };
                    bool $tmp2614 = $tmp2619.value;
                    if ($tmp2614) goto $l2620;
                    panda$core$Bit $tmp2621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_132612.$rawValue, ((panda$core$Int64) { 100 }));
                    $tmp2614 = $tmp2621.value;
                    $l2620:;
                    panda$core$Bit $tmp2622 = { $tmp2614 };
                    if ($tmp2622.value) {
                    {
                        goto $l2611;
                    }
                    }
                    else {
                    panda$core$Bit $tmp2625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_132612.$rawValue, ((panda$core$Int64) { 28 }));
                    bool $tmp2624 = $tmp2625.value;
                    if ($tmp2624) goto $l2626;
                    panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_132612.$rawValue, ((panda$core$Int64) { 29 }));
                    $tmp2624 = $tmp2627.value;
                    $l2626:;
                    panda$core$Bit $tmp2628 = { $tmp2624 };
                    bool $tmp2623 = $tmp2628.value;
                    if ($tmp2623) goto $l2629;
                    panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_132612.$rawValue, ((panda$core$Int64) { 27 }));
                    $tmp2623 = $tmp2630.value;
                    $l2629:;
                    panda$core$Bit $tmp2631 = { $tmp2623 };
                    if ($tmp2631.value) {
                    {
                        int $tmp2634;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2638 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2637 = $tmp2638;
                            $tmp2636 = $tmp2637;
                            stmt2635 = $tmp2636;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
                            if (((panda$core$Bit) { stmt2635 == NULL }).value) {
                            {
                                $tmp2639 = NULL;
                                $returnValue2569 = $tmp2639;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2639));
                                $tmp2634 = 0;
                                goto $l2632;
                                $l2640:;
                                $tmp2564 = 4;
                                goto $l2562;
                                $l2641:;
                                $tmp2561 = 4;
                                goto $l2559;
                                $l2642:;
                                return $returnValue2569;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2606, ((panda$core$Object*) stmt2635));
                            $tmp2634 = 1;
                            goto $l2632;
                            $l2644:;
                            goto $l2611;
                        }
                        $l2632:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2635));
                        stmt2635 = NULL;
                        switch ($tmp2634) {
                            case 0: goto $l2640;
                            case 1: goto $l2644;
                        }
                        $l2645:;
                    }
                    }
                    else {
                    {
                        {
                            int $tmp2648;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp2652 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp2651 = $tmp2652;
                                $tmp2650 = $tmp2651;
                                stmt2649 = $tmp2650;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2650));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
                                if (((panda$core$Bit) { stmt2649 == NULL }).value) {
                                {
                                    $tmp2653 = NULL;
                                    $returnValue2569 = $tmp2653;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2653));
                                    $tmp2648 = 0;
                                    goto $l2646;
                                    $l2654:;
                                    $tmp2564 = 5;
                                    goto $l2562;
                                    $l2655:;
                                    $tmp2561 = 5;
                                    goto $l2559;
                                    $l2656:;
                                    return $returnValue2569;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(statements2606, ((panda$core$Object*) stmt2649));
                            }
                            $tmp2648 = -1;
                            goto $l2646;
                            $l2646:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2649));
                            stmt2649 = NULL;
                            switch ($tmp2648) {
                                case 0: goto $l2654;
                                case -1: goto $l2658;
                            }
                            $l2658:;
                        }
                    }
                    }
                    }
                }
            }
            }
            $l2611:;
            org$pandalanguage$pandac$ASTNode* $tmp2661 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2663 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2574);
            $tmp2662 = $tmp2663;
            panda$collections$ImmutableArray* $tmp2665 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2606);
            $tmp2664 = $tmp2665;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2661, ((panda$core$Int64) { 47 }), ((org$pandalanguage$pandac$parser$Token) start2565.value).position, $tmp2662, $tmp2664);
            $tmp2660 = $tmp2661;
            $tmp2659 = $tmp2660;
            $returnValue2569 = $tmp2659;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2659));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2660));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2664));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2662));
            $tmp2564 = 6;
            goto $l2562;
            $l2666:;
            $tmp2561 = 6;
            goto $l2559;
            $l2667:;
            return $returnValue2569;
        }
        $l2562:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2574));
        expressions2574 = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2578));
        expr2578 = NULL;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2606));
        statements2606 = NULL;
        switch ($tmp2564) {
            case 5: goto $l2655;
            case 6: goto $l2666;
            case 0: goto $l2571;
            case 4: goto $l2641;
            case 3: goto $l2603;
            case 2: goto $l2596;
            case 1: goto $l2583;
        }
        $l2669:;
    }
    $tmp2561 = -1;
    goto $l2559;
    $l2559:;
    PANDA_ASSERT(self->allowLambdas.value);
    switch ($tmp2561) {
        case 6: goto $l2667;
        case 5: goto $l2656;
        case 2: goto $l2597;
        case 1: goto $l2584;
        case 3: goto $l2604;
        case -1: goto $l2670;
        case 4: goto $l2642;
        case 0: goto $l2572;
    }
    $l2670:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2674;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2675;
    org$pandalanguage$pandac$ASTNode* $returnValue2678;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    org$pandalanguage$pandac$ASTNode* expr2682 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2683;
    org$pandalanguage$pandac$ASTNode* $tmp2684;
    org$pandalanguage$pandac$ASTNode* $tmp2686;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2689;
    org$pandalanguage$pandac$ASTNode* $tmp2692;
    panda$collections$Array* whens2695 = NULL;
    panda$collections$Array* $tmp2696;
    panda$collections$Array* $tmp2697;
    panda$collections$Array* other2699 = NULL;
    panda$collections$Array* $tmp2700;
    org$pandalanguage$pandac$parser$Token token2703;
    org$pandalanguage$pandac$parser$Token$Kind $match$1376_132705;
    org$pandalanguage$pandac$ASTNode* w2711 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2712;
    org$pandalanguage$pandac$ASTNode* $tmp2713;
    org$pandalanguage$pandac$ASTNode* $tmp2715;
    org$pandalanguage$pandac$parser$Token o2721;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2723;
    org$pandalanguage$pandac$ASTNode* $tmp2726;
    panda$collections$Array* $tmp2729;
    panda$collections$Array* $tmp2730;
    panda$collections$Array* $tmp2731;
    org$pandalanguage$pandac$parser$Token$Kind $match$1392_252735;
    org$pandalanguage$pandac$ASTNode* stmt2750 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$ASTNode* $tmp2752;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$ASTNode* stmt2763 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2764;
    org$pandalanguage$pandac$ASTNode* $tmp2765;
    org$pandalanguage$pandac$ASTNode* $tmp2767;
    panda$core$String* $tmp2772;
    panda$core$String* $tmp2774;
    panda$core$String* $tmp2775;
    panda$core$String* $tmp2777;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2783;
    org$pandalanguage$pandac$ASTNode* $tmp2786;
    org$pandalanguage$pandac$ASTNode* $tmp2789;
    org$pandalanguage$pandac$ASTNode* $tmp2790;
    panda$collections$ImmutableArray* $tmp2792;
    panda$collections$ImmutableArray* $tmp2794;
    org$pandalanguage$pandac$ASTNode* $tmp2798;
    org$pandalanguage$pandac$ASTNode* $tmp2799;
    panda$collections$ImmutableArray* $tmp2801;
    int $tmp2673;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2675, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2677 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2675, &$s2676);
        start2674 = $tmp2677;
        if (((panda$core$Bit) { !start2674.nonnull }).value) {
        {
            $tmp2679 = NULL;
            $returnValue2678 = $tmp2679;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
            $tmp2673 = 0;
            goto $l2671;
            $l2680:;
            return $returnValue2678;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2685 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2684 = $tmp2685;
        $tmp2683 = $tmp2684;
        expr2682 = $tmp2683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2684));
        if (((panda$core$Bit) { expr2682 == NULL }).value) {
        {
            $tmp2686 = NULL;
            $returnValue2678 = $tmp2686;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2686));
            $tmp2673 = 1;
            goto $l2671;
            $l2687:;
            return $returnValue2678;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2689, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2691 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2689, &$s2690);
        if (((panda$core$Bit) { !$tmp2691.nonnull }).value) {
        {
            $tmp2692 = NULL;
            $returnValue2678 = $tmp2692;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2692));
            $tmp2673 = 2;
            goto $l2671;
            $l2693:;
            return $returnValue2678;
        }
        }
        panda$collections$Array* $tmp2698 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2698);
        $tmp2697 = $tmp2698;
        $tmp2696 = $tmp2697;
        whens2695 = $tmp2696;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2696));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2697));
        $tmp2700 = NULL;
        other2699 = $tmp2700;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2700));
        $l2701:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2704 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2703 = $tmp2704;
            {
                $match$1376_132705 = token2703.kind;
                panda$core$Bit $tmp2706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1376_132705.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2706.value) {
                {
                    goto $l2702;
                }
                }
                else {
                panda$core$Bit $tmp2707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1376_132705.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2707.value) {
                {
                    int $tmp2710;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2714 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2713 = $tmp2714;
                        $tmp2712 = $tmp2713;
                        w2711 = $tmp2712;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2712));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2713));
                        if (((panda$core$Bit) { w2711 == NULL }).value) {
                        {
                            $tmp2715 = NULL;
                            $returnValue2678 = $tmp2715;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2715));
                            $tmp2710 = 0;
                            goto $l2708;
                            $l2716:;
                            $tmp2673 = 3;
                            goto $l2671;
                            $l2717:;
                            return $returnValue2678;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2695, ((panda$core$Object*) w2711));
                    }
                    $tmp2710 = -1;
                    goto $l2708;
                    $l2708:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2711));
                    w2711 = NULL;
                    switch ($tmp2710) {
                        case -1: goto $l2719;
                        case 0: goto $l2716;
                    }
                    $l2719:;
                }
                }
                else {
                panda$core$Bit $tmp2720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1376_132705.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2720.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2722 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2721 = $tmp2722;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2723, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2725 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2723, &$s2724);
                    if (((panda$core$Bit) { !$tmp2725.nonnull }).value) {
                    {
                        $tmp2726 = NULL;
                        $returnValue2678 = $tmp2726;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2726));
                        $tmp2673 = 4;
                        goto $l2671;
                        $l2727:;
                        return $returnValue2678;
                    }
                    }
                    {
                        $tmp2729 = other2699;
                        panda$collections$Array* $tmp2732 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2732);
                        $tmp2731 = $tmp2732;
                        $tmp2730 = $tmp2731;
                        other2699 = $tmp2730;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2730));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2731));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2729));
                    }
                    $l2733:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2736 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1392_252735 = $tmp2736.kind;
                            panda$core$Bit $tmp2737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_252735.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2737.value) {
                            {
                                goto $l2734;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_252735.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2739 = $tmp2740.value;
                            if ($tmp2739) goto $l2741;
                            panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_252735.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2739 = $tmp2742.value;
                            $l2741:;
                            panda$core$Bit $tmp2743 = { $tmp2739 };
                            bool $tmp2738 = $tmp2743.value;
                            if ($tmp2738) goto $l2744;
                            panda$core$Bit $tmp2745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_252735.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2738 = $tmp2745.value;
                            $l2744:;
                            panda$core$Bit $tmp2746 = { $tmp2738 };
                            if ($tmp2746.value) {
                            {
                                int $tmp2749;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2753 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2752 = $tmp2753;
                                    $tmp2751 = $tmp2752;
                                    stmt2750 = $tmp2751;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2752));
                                    if (((panda$core$Bit) { stmt2750 == NULL }).value) {
                                    {
                                        $tmp2754 = NULL;
                                        $returnValue2678 = $tmp2754;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2754));
                                        $tmp2749 = 0;
                                        goto $l2747;
                                        $l2755:;
                                        $tmp2673 = 5;
                                        goto $l2671;
                                        $l2756:;
                                        return $returnValue2678;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2699, ((panda$core$Object*) stmt2750));
                                    $tmp2749 = 1;
                                    goto $l2747;
                                    $l2758:;
                                    goto $l2734;
                                }
                                $l2747:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2750));
                                stmt2750 = NULL;
                                switch ($tmp2749) {
                                    case 1: goto $l2758;
                                    case 0: goto $l2755;
                                }
                                $l2759:;
                            }
                            }
                            else {
                            {
                                int $tmp2762;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2766 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2765 = $tmp2766;
                                    $tmp2764 = $tmp2765;
                                    stmt2763 = $tmp2764;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2764));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2765));
                                    if (((panda$core$Bit) { stmt2763 == NULL }).value) {
                                    {
                                        $tmp2767 = NULL;
                                        $returnValue2678 = $tmp2767;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2767));
                                        $tmp2762 = 0;
                                        goto $l2760;
                                        $l2768:;
                                        $tmp2673 = 6;
                                        goto $l2671;
                                        $l2769:;
                                        return $returnValue2678;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2699, ((panda$core$Object*) stmt2763));
                                }
                                $tmp2762 = -1;
                                goto $l2760;
                                $l2760:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2763));
                                stmt2763 = NULL;
                                switch ($tmp2762) {
                                    case 0: goto $l2768;
                                    case -1: goto $l2771;
                                }
                                $l2771:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2734:;
                    goto $l2702;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2778 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2703);
                    $tmp2777 = $tmp2778;
                    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2776, $tmp2777);
                    $tmp2775 = $tmp2779;
                    panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2780);
                    $tmp2774 = $tmp2781;
                    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2773, $tmp2774);
                    $tmp2772 = $tmp2782;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2703, $tmp2772);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2772));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2774));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2775));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2777));
                }
                }
                }
                }
            }
        }
        }
        $l2702:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2783, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2785 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2783, &$s2784);
        if (((panda$core$Bit) { !$tmp2785.nonnull }).value) {
        {
            $tmp2786 = NULL;
            $returnValue2678 = $tmp2786;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2786));
            $tmp2673 = 7;
            goto $l2671;
            $l2787:;
            return $returnValue2678;
        }
        }
        if (((panda$core$Bit) { other2699 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2791 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2793 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2695);
            $tmp2792 = $tmp2793;
            panda$collections$ImmutableArray* $tmp2795 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2699);
            $tmp2794 = $tmp2795;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2791, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2674.value).position, expr2682, $tmp2792, $tmp2794);
            $tmp2790 = $tmp2791;
            $tmp2789 = $tmp2790;
            $returnValue2678 = $tmp2789;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2789));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2790));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2794));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2792));
            $tmp2673 = 8;
            goto $l2671;
            $l2796:;
            return $returnValue2678;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2800 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2802 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2695);
        $tmp2801 = $tmp2802;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2800, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2674.value).position, expr2682, $tmp2801, NULL);
        $tmp2799 = $tmp2800;
        $tmp2798 = $tmp2799;
        $returnValue2678 = $tmp2798;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2799));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2801));
        $tmp2673 = 9;
        goto $l2671;
        $l2803:;
        return $returnValue2678;
    }
    $l2671:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2682));
    expr2682 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2695));
    whens2695 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2699));
    switch ($tmp2673) {
        case 4: goto $l2727;
        case 2: goto $l2693;
        case 6: goto $l2769;
        case 5: goto $l2756;
        case 9: goto $l2803;
        case 3: goto $l2717;
        case 8: goto $l2796;
        case 1: goto $l2687;
        case 7: goto $l2787;
        case 0: goto $l2680;
    }
    $l2805:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2809;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2810;
    panda$collections$ImmutableArray* $returnValue2813;
    panda$collections$ImmutableArray* $tmp2814;
    panda$collections$Array* result2817 = NULL;
    panda$collections$Array* $tmp2818;
    panda$collections$Array* $tmp2819;
    org$pandalanguage$pandac$parser$Token$Kind $match$1436_132823;
    org$pandalanguage$pandac$ASTNode* stmt2838 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2839;
    org$pandalanguage$pandac$ASTNode* $tmp2840;
    panda$collections$ImmutableArray* $tmp2842;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2846;
    panda$collections$ImmutableArray* $tmp2849;
    org$pandalanguage$pandac$ASTNode* stmt2858 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2859;
    org$pandalanguage$pandac$ASTNode* $tmp2860;
    panda$collections$ImmutableArray* $tmp2862;
    panda$collections$ImmutableArray* $tmp2867;
    panda$collections$ImmutableArray* $tmp2868;
    int $tmp2808;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2810, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2812 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2810, &$s2811);
        start2809 = $tmp2812;
        if (((panda$core$Bit) { !start2809.nonnull }).value) {
        {
            $tmp2814 = NULL;
            $returnValue2813 = $tmp2814;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2814));
            $tmp2808 = 0;
            goto $l2806;
            $l2815:;
            return $returnValue2813;
        }
        }
        panda$collections$Array* $tmp2820 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2820);
        $tmp2819 = $tmp2820;
        $tmp2818 = $tmp2819;
        result2817 = $tmp2818;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2818));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2819));
        $l2821:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2824 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1436_132823 = $tmp2824.kind;
                panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1436_132823.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2825.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2822;
                }
                }
                else {
                panda$core$Bit $tmp2828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1436_132823.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2827 = $tmp2828.value;
                if ($tmp2827) goto $l2829;
                panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1436_132823.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2827 = $tmp2830.value;
                $l2829:;
                panda$core$Bit $tmp2831 = { $tmp2827 };
                bool $tmp2826 = $tmp2831.value;
                if ($tmp2826) goto $l2832;
                panda$core$Bit $tmp2833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1436_132823.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2826 = $tmp2833.value;
                $l2832:;
                panda$core$Bit $tmp2834 = { $tmp2826 };
                if ($tmp2834.value) {
                {
                    int $tmp2837;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2841 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2840 = $tmp2841;
                        $tmp2839 = $tmp2840;
                        stmt2838 = $tmp2839;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2839));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2840));
                        if (((panda$core$Bit) { stmt2838 == NULL }).value) {
                        {
                            $tmp2842 = NULL;
                            $returnValue2813 = $tmp2842;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2842));
                            $tmp2837 = 0;
                            goto $l2835;
                            $l2843:;
                            $tmp2808 = 1;
                            goto $l2806;
                            $l2844:;
                            return $returnValue2813;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2846, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2848 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2846, &$s2847);
                        if (((panda$core$Bit) { !$tmp2848.nonnull }).value) {
                        {
                            $tmp2849 = NULL;
                            $returnValue2813 = $tmp2849;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2849));
                            $tmp2837 = 1;
                            goto $l2835;
                            $l2850:;
                            $tmp2808 = 2;
                            goto $l2806;
                            $l2851:;
                            return $returnValue2813;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2817, ((panda$core$Object*) stmt2838));
                        $tmp2837 = 2;
                        goto $l2835;
                        $l2853:;
                        goto $l2822;
                    }
                    $l2835:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2838));
                    stmt2838 = NULL;
                    switch ($tmp2837) {
                        case 0: goto $l2843;
                        case 2: goto $l2853;
                        case 1: goto $l2850;
                    }
                    $l2854:;
                }
                }
                else {
                {
                    int $tmp2857;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2861 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2860 = $tmp2861;
                        $tmp2859 = $tmp2860;
                        stmt2858 = $tmp2859;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2859));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2860));
                        if (((panda$core$Bit) { stmt2858 == NULL }).value) {
                        {
                            $tmp2862 = NULL;
                            $returnValue2813 = $tmp2862;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2862));
                            $tmp2857 = 0;
                            goto $l2855;
                            $l2863:;
                            $tmp2808 = 3;
                            goto $l2806;
                            $l2864:;
                            return $returnValue2813;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2817, ((panda$core$Object*) stmt2858));
                    }
                    $tmp2857 = -1;
                    goto $l2855;
                    $l2855:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2858));
                    stmt2858 = NULL;
                    switch ($tmp2857) {
                        case -1: goto $l2866;
                        case 0: goto $l2863;
                    }
                    $l2866:;
                }
                }
                }
            }
        }
        }
        $l2822:;
        panda$collections$ImmutableArray* $tmp2869 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2817);
        $tmp2868 = $tmp2869;
        $tmp2867 = $tmp2868;
        $returnValue2813 = $tmp2867;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2867));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2868));
        $tmp2808 = 4;
        goto $l2806;
        $l2870:;
        return $returnValue2813;
    }
    $l2806:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2817));
    result2817 = NULL;
    switch ($tmp2808) {
        case 2: goto $l2851;
        case 4: goto $l2870;
        case 3: goto $l2864;
        case 1: goto $l2844;
        case 0: goto $l2815;
    }
    $l2872:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2876 = NULL;
    panda$collections$ImmutableArray* $tmp2877;
    panda$collections$ImmutableArray* $tmp2878;
    org$pandalanguage$pandac$ASTNode* $returnValue2880;
    org$pandalanguage$pandac$ASTNode* $tmp2881;
    org$pandalanguage$pandac$ASTNode* $tmp2884;
    org$pandalanguage$pandac$ASTNode* $tmp2885;
    org$pandalanguage$pandac$Position $tmp2887;
    int $tmp2875;
    {
        panda$collections$ImmutableArray* $tmp2879 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2878 = $tmp2879;
        $tmp2877 = $tmp2878;
        statements2876 = $tmp2877;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2877));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2878));
        if (((panda$core$Bit) { statements2876 == NULL }).value) {
        {
            $tmp2881 = NULL;
            $returnValue2880 = $tmp2881;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2881));
            $tmp2875 = 0;
            goto $l2873;
            $l2882:;
            return $returnValue2880;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2886 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2887);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2886, ((panda$core$Int64) { 6 }), $tmp2887, statements2876);
        $tmp2885 = $tmp2886;
        $tmp2884 = $tmp2885;
        $returnValue2880 = $tmp2884;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2884));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2885));
        $tmp2875 = 1;
        goto $l2873;
        $l2888:;
        return $returnValue2880;
    }
    $l2873:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2876));
    statements2876 = NULL;
    switch ($tmp2875) {
        case 1: goto $l2888;
        case 0: goto $l2882;
    }
    $l2890:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2894 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2895;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    org$pandalanguage$pandac$ASTNode* $returnValue2898;
    org$pandalanguage$pandac$ASTNode* $tmp2899;
    org$pandalanguage$pandac$parser$Token$Kind $match$1480_92902;
    org$pandalanguage$pandac$parser$Token op2968;
    org$pandalanguage$pandac$ASTNode* rvalue2970 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2971;
    org$pandalanguage$pandac$ASTNode* $tmp2972;
    org$pandalanguage$pandac$ASTNode* $tmp2974;
    org$pandalanguage$pandac$ASTNode* $tmp2978;
    org$pandalanguage$pandac$ASTNode* $tmp2979;
    org$pandalanguage$pandac$parser$Token op2993;
    org$pandalanguage$pandac$ASTNode* rvalue2995 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2996;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    org$pandalanguage$pandac$ASTNode* $tmp2999;
    org$pandalanguage$pandac$ASTNode* $tmp3003;
    org$pandalanguage$pandac$ASTNode* $tmp3004;
    org$pandalanguage$pandac$ASTNode* $tmp3012;
    int $tmp2893;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2897 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2896 = $tmp2897;
        $tmp2895 = $tmp2896;
        start2894 = $tmp2895;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2896));
        if (((panda$core$Bit) { start2894 == NULL }).value) {
        {
            $tmp2899 = NULL;
            $returnValue2898 = $tmp2899;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2899));
            $tmp2893 = 0;
            goto $l2891;
            $l2900:;
            return $returnValue2898;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2903 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1480_92902 = $tmp2903.kind;
            panda$core$Bit $tmp2919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2918 = $tmp2919.value;
            if ($tmp2918) goto $l2920;
            panda$core$Bit $tmp2921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2918 = $tmp2921.value;
            $l2920:;
            panda$core$Bit $tmp2922 = { $tmp2918 };
            bool $tmp2917 = $tmp2922.value;
            if ($tmp2917) goto $l2923;
            panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2917 = $tmp2924.value;
            $l2923:;
            panda$core$Bit $tmp2925 = { $tmp2917 };
            bool $tmp2916 = $tmp2925.value;
            if ($tmp2916) goto $l2926;
            panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2916 = $tmp2927.value;
            $l2926:;
            panda$core$Bit $tmp2928 = { $tmp2916 };
            bool $tmp2915 = $tmp2928.value;
            if ($tmp2915) goto $l2929;
            panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2915 = $tmp2930.value;
            $l2929:;
            panda$core$Bit $tmp2931 = { $tmp2915 };
            bool $tmp2914 = $tmp2931.value;
            if ($tmp2914) goto $l2932;
            panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2914 = $tmp2933.value;
            $l2932:;
            panda$core$Bit $tmp2934 = { $tmp2914 };
            bool $tmp2913 = $tmp2934.value;
            if ($tmp2913) goto $l2935;
            panda$core$Bit $tmp2936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2913 = $tmp2936.value;
            $l2935:;
            panda$core$Bit $tmp2937 = { $tmp2913 };
            bool $tmp2912 = $tmp2937.value;
            if ($tmp2912) goto $l2938;
            panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2912 = $tmp2939.value;
            $l2938:;
            panda$core$Bit $tmp2940 = { $tmp2912 };
            bool $tmp2911 = $tmp2940.value;
            if ($tmp2911) goto $l2941;
            panda$core$Bit $tmp2942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2911 = $tmp2942.value;
            $l2941:;
            panda$core$Bit $tmp2943 = { $tmp2911 };
            bool $tmp2910 = $tmp2943.value;
            if ($tmp2910) goto $l2944;
            panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2910 = $tmp2945.value;
            $l2944:;
            panda$core$Bit $tmp2946 = { $tmp2910 };
            bool $tmp2909 = $tmp2946.value;
            if ($tmp2909) goto $l2947;
            panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2909 = $tmp2948.value;
            $l2947:;
            panda$core$Bit $tmp2949 = { $tmp2909 };
            bool $tmp2908 = $tmp2949.value;
            if ($tmp2908) goto $l2950;
            panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2908 = $tmp2951.value;
            $l2950:;
            panda$core$Bit $tmp2952 = { $tmp2908 };
            bool $tmp2907 = $tmp2952.value;
            if ($tmp2907) goto $l2953;
            panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2907 = $tmp2954.value;
            $l2953:;
            panda$core$Bit $tmp2955 = { $tmp2907 };
            bool $tmp2906 = $tmp2955.value;
            if ($tmp2906) goto $l2956;
            panda$core$Bit $tmp2957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2906 = $tmp2957.value;
            $l2956:;
            panda$core$Bit $tmp2958 = { $tmp2906 };
            bool $tmp2905 = $tmp2958.value;
            if ($tmp2905) goto $l2959;
            panda$core$Bit $tmp2960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2905 = $tmp2960.value;
            $l2959:;
            panda$core$Bit $tmp2961 = { $tmp2905 };
            bool $tmp2904 = $tmp2961.value;
            if ($tmp2904) goto $l2962;
            panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2904 = $tmp2963.value;
            $l2962:;
            panda$core$Bit $tmp2964 = { $tmp2904 };
            if ($tmp2964.value) {
            {
                int $tmp2967;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2969 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2968 = $tmp2969;
                    org$pandalanguage$pandac$ASTNode* $tmp2973 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2972 = $tmp2973;
                    $tmp2971 = $tmp2972;
                    rvalue2970 = $tmp2971;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2971));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2972));
                    if (((panda$core$Bit) { rvalue2970 == NULL }).value) {
                    {
                        $tmp2974 = NULL;
                        $returnValue2898 = $tmp2974;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2974));
                        $tmp2967 = 0;
                        goto $l2965;
                        $l2975:;
                        $tmp2893 = 1;
                        goto $l2891;
                        $l2976:;
                        return $returnValue2898;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2980 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2982 = (($fn2981) start2894->$class->vtable[2])(start2894);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2980, ((panda$core$Int64) { 4 }), $tmp2982, start2894, op2968.kind, rvalue2970);
                    $tmp2979 = $tmp2980;
                    $tmp2978 = $tmp2979;
                    $returnValue2898 = $tmp2978;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2978));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2979));
                    $tmp2967 = 1;
                    goto $l2965;
                    $l2983:;
                    $tmp2893 = 2;
                    goto $l2891;
                    $l2984:;
                    return $returnValue2898;
                }
                $l2965:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2970));
                rvalue2970 = NULL;
                switch ($tmp2967) {
                    case 1: goto $l2983;
                    case 0: goto $l2975;
                }
                $l2986:;
            }
            }
            else {
            panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1480_92902.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2987.value) {
            {
                int $tmp2990;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2991 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2991, &$s2992);
                    org$pandalanguage$pandac$parser$Token $tmp2994 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2993 = $tmp2994;
                    org$pandalanguage$pandac$ASTNode* $tmp2998 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2997 = $tmp2998;
                    $tmp2996 = $tmp2997;
                    rvalue2995 = $tmp2996;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2996));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2997));
                    if (((panda$core$Bit) { rvalue2995 == NULL }).value) {
                    {
                        $tmp2999 = NULL;
                        $returnValue2898 = $tmp2999;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2999));
                        $tmp2990 = 0;
                        goto $l2988;
                        $l3000:;
                        $tmp2893 = 3;
                        goto $l2891;
                        $l3001:;
                        return $returnValue2898;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3005 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp3007 = (($fn3006) start2894->$class->vtable[2])(start2894);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp3005, ((panda$core$Int64) { 4 }), $tmp3007, start2894, op2993.kind, rvalue2995);
                    $tmp3004 = $tmp3005;
                    $tmp3003 = $tmp3004;
                    $returnValue2898 = $tmp3003;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3003));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3004));
                    $tmp2990 = 1;
                    goto $l2988;
                    $l3008:;
                    $tmp2893 = 4;
                    goto $l2891;
                    $l3009:;
                    return $returnValue2898;
                }
                $l2988:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2995));
                rvalue2995 = NULL;
                switch ($tmp2990) {
                    case 0: goto $l3000;
                    case 1: goto $l3008;
                }
                $l3011:;
            }
            }
            else {
            {
                $tmp3012 = start2894;
                $returnValue2898 = $tmp3012;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3012));
                $tmp2893 = 5;
                goto $l2891;
                $l3013:;
                return $returnValue2898;
            }
            }
            }
        }
    }
    $tmp2893 = -1;
    goto $l2891;
    $l2891:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2894));
    start2894 = NULL;
    switch ($tmp2893) {
        case 4: goto $l3009;
        case 1: goto $l2976;
        case -1: goto $l3015;
        case 5: goto $l3013;
        case 3: goto $l3001;
        case 2: goto $l2984;
        case 0: goto $l2900;
    }
    $l3015:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t3019 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3020;
    org$pandalanguage$pandac$ASTNode* $tmp3021;
    org$pandalanguage$pandac$ASTNode* $returnValue3023;
    org$pandalanguage$pandac$ASTNode* $tmp3024;
    org$pandalanguage$pandac$ASTNode* value3027 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3028;
    org$pandalanguage$pandac$ASTNode* $tmp3030;
    org$pandalanguage$pandac$ASTNode* $tmp3031;
    org$pandalanguage$pandac$ASTNode* $tmp3032;
    org$pandalanguage$pandac$ASTNode* $tmp3034;
    org$pandalanguage$pandac$ASTNode* $tmp3041;
    org$pandalanguage$pandac$ASTNode* $tmp3042;
    org$pandalanguage$pandac$ASTNode* $tmp3043;
    org$pandalanguage$pandac$ASTNode* $tmp3045;
    org$pandalanguage$pandac$ASTNode* $tmp3048;
    org$pandalanguage$pandac$ASTNode* $tmp3049;
    org$pandalanguage$pandac$ASTNode* $tmp3050;
    org$pandalanguage$pandac$ASTNode* $tmp3051;
    int $tmp3018;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3022 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3021 = $tmp3022;
        $tmp3020 = $tmp3021;
        t3019 = $tmp3020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3021));
        if (((panda$core$Bit) { t3019 == NULL }).value) {
        {
            $tmp3024 = NULL;
            $returnValue3023 = $tmp3024;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3024));
            $tmp3018 = 0;
            goto $l3016;
            $l3025:;
            return $returnValue3023;
        }
        }
        memset(&value3027, 0, sizeof(value3027));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3028, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3029 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3028);
        if (((panda$core$Bit) { $tmp3029.nonnull }).value) {
        {
            {
                $tmp3030 = value3027;
                org$pandalanguage$pandac$ASTNode* $tmp3033 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3032 = $tmp3033;
                $tmp3031 = $tmp3032;
                value3027 = $tmp3031;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3031));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
            }
            if (((panda$core$Bit) { value3027 == NULL }).value) {
            {
                $tmp3034 = NULL;
                $returnValue3023 = $tmp3034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
                $tmp3018 = 1;
                goto $l3016;
                $l3035:;
                return $returnValue3023;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp3037 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3037.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp3038.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3039 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp3039, &$s3040);
            {
                $tmp3041 = value3027;
                org$pandalanguage$pandac$ASTNode* $tmp3044 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3043 = $tmp3044;
                $tmp3042 = $tmp3043;
                value3027 = $tmp3042;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3042));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3043));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
            }
            if (((panda$core$Bit) { value3027 == NULL }).value) {
            {
                $tmp3045 = NULL;
                $returnValue3023 = $tmp3045;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
                $tmp3018 = 2;
                goto $l3016;
                $l3046:;
                return $returnValue3023;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3048 = value3027;
                $tmp3049 = NULL;
                value3027 = $tmp3049;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3049));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3052 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3054 = (($fn3053) t3019->$class->vtable[2])(t3019);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp3052, ((panda$core$Int64) { 13 }), $tmp3054, t3019, value3027);
        $tmp3051 = $tmp3052;
        $tmp3050 = $tmp3051;
        $returnValue3023 = $tmp3050;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3051));
        $tmp3018 = 3;
        goto $l3016;
        $l3055:;
        return $returnValue3023;
    }
    $l3016:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3019));
    t3019 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value3027));
    switch ($tmp3018) {
        case 3: goto $l3055;
        case 1: goto $l3035;
        case 2: goto $l3046;
        case 0: goto $l3025;
    }
    $l3057:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3061;
    org$pandalanguage$pandac$Variable$Kind kind3063;
    org$pandalanguage$pandac$parser$Token$Kind $match$1539_93064;
    org$pandalanguage$pandac$Variable$Kind $tmp3066;
    org$pandalanguage$pandac$Variable$Kind $tmp3068;
    org$pandalanguage$pandac$Variable$Kind $tmp3070;
    org$pandalanguage$pandac$Variable$Kind $tmp3072;
    panda$collections$Array* declarations3074 = NULL;
    panda$collections$Array* $tmp3075;
    panda$collections$Array* $tmp3076;
    org$pandalanguage$pandac$ASTNode* decl3078 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3079;
    org$pandalanguage$pandac$ASTNode* $tmp3080;
    org$pandalanguage$pandac$ASTNode* $returnValue3082;
    org$pandalanguage$pandac$ASTNode* $tmp3083;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3089;
    org$pandalanguage$pandac$ASTNode* decl3094 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3095;
    org$pandalanguage$pandac$ASTNode* $tmp3096;
    org$pandalanguage$pandac$ASTNode* $tmp3098;
    org$pandalanguage$pandac$ASTNode* $tmp3103;
    org$pandalanguage$pandac$ASTNode* $tmp3104;
    panda$collections$ImmutableArray* $tmp3106;
    int $tmp3060;
    {
        org$pandalanguage$pandac$parser$Token $tmp3062 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start3061 = $tmp3062;
        memset(&kind3063, 0, sizeof(kind3063));
        {
            $match$1539_93064 = start3061.kind;
            panda$core$Bit $tmp3065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_93064.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp3065.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3066, ((panda$core$Int64) { 0 }));
                kind3063 = $tmp3066;
            }
            }
            else {
            panda$core$Bit $tmp3067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_93064.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp3067.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3068, ((panda$core$Int64) { 1 }));
                kind3063 = $tmp3068;
            }
            }
            else {
            panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_93064.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp3069.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3070, ((panda$core$Int64) { 3 }));
                kind3063 = $tmp3070;
            }
            }
            else {
            panda$core$Bit $tmp3071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1539_93064.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp3071.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp3072, ((panda$core$Int64) { 2 }));
                kind3063 = $tmp3072;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start3061, &$s3073);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp3077 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3077);
        $tmp3076 = $tmp3077;
        $tmp3075 = $tmp3076;
        declarations3074 = $tmp3075;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3076));
        org$pandalanguage$pandac$ASTNode* $tmp3081 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3080 = $tmp3081;
        $tmp3079 = $tmp3080;
        decl3078 = $tmp3079;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3079));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3080));
        if (((panda$core$Bit) { decl3078 == NULL }).value) {
        {
            $tmp3083 = NULL;
            $returnValue3082 = $tmp3083;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3083));
            $tmp3060 = 0;
            goto $l3058;
            $l3084:;
            return $returnValue3082;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations3074, ((panda$core$Object*) decl3078));
        $l3086:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3089, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3090 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3089);
        bool $tmp3088 = ((panda$core$Bit) { $tmp3090.nonnull }).value;
        if (!$tmp3088) goto $l3087;
        {
            int $tmp3093;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3097 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3096 = $tmp3097;
                $tmp3095 = $tmp3096;
                decl3094 = $tmp3095;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
                if (((panda$core$Bit) { decl3094 == NULL }).value) {
                {
                    $tmp3098 = NULL;
                    $returnValue3082 = $tmp3098;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3098));
                    $tmp3093 = 0;
                    goto $l3091;
                    $l3099:;
                    $tmp3060 = 1;
                    goto $l3058;
                    $l3100:;
                    return $returnValue3082;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations3074, ((panda$core$Object*) decl3094));
            }
            $tmp3093 = -1;
            goto $l3091;
            $l3091:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3094));
            decl3094 = NULL;
            switch ($tmp3093) {
                case -1: goto $l3102;
                case 0: goto $l3099;
            }
            $l3102:;
        }
        goto $l3086;
        $l3087:;
        org$pandalanguage$pandac$ASTNode* $tmp3105 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3107 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations3074);
        $tmp3106 = $tmp3107;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3105, ((panda$core$Int64) { 46 }), start3061.position, kind3063, $tmp3106);
        $tmp3104 = $tmp3105;
        $tmp3103 = $tmp3104;
        $returnValue3082 = $tmp3103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3106));
        $tmp3060 = 2;
        goto $l3058;
        $l3108:;
        return $returnValue3082;
    }
    $l3058:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations3074));
    declarations3074 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3078));
    decl3078 = NULL;
    switch ($tmp3060) {
        case 1: goto $l3100;
        case 2: goto $l3108;
        case 0: goto $l3084;
    }
    $l3110:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3114;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3115;
    org$pandalanguage$pandac$ASTNode* $returnValue3118;
    org$pandalanguage$pandac$ASTNode* $tmp3119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3122;
    org$pandalanguage$pandac$ASTNode* $tmp3125;
    panda$core$Object* $tmp3128;
    org$pandalanguage$pandac$ASTNode* target3130 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3131;
    org$pandalanguage$pandac$ASTNode* $tmp3132;
    panda$core$String* $tmp3134;
    panda$collections$Array* args3136 = NULL;
    panda$collections$Array* $tmp3137;
    panda$collections$Array* $tmp3138;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3140;
    org$pandalanguage$pandac$ASTNode* expr3145 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3146;
    org$pandalanguage$pandac$ASTNode* $tmp3147;
    panda$core$Object* $tmp3149;
    org$pandalanguage$pandac$ASTNode* $tmp3151;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3158;
    org$pandalanguage$pandac$ASTNode* $tmp3160;
    org$pandalanguage$pandac$ASTNode* $tmp3161;
    org$pandalanguage$pandac$ASTNode* $tmp3162;
    panda$core$Object* $tmp3164;
    org$pandalanguage$pandac$ASTNode* $tmp3166;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3170;
    panda$core$Object* $tmp3173;
    org$pandalanguage$pandac$ASTNode* $tmp3175;
    panda$core$Object* $tmp3180;
    org$pandalanguage$pandac$ASTNode* $tmp3182;
    org$pandalanguage$pandac$ASTNode* $tmp3183;
    panda$collections$ImmutableArray* $tmp3185;
    int $tmp3113;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3115, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3117 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3115, &$s3116);
        start3114 = $tmp3117;
        if (((panda$core$Bit) { !start3114.nonnull }).value) {
        {
            $tmp3119 = NULL;
            $returnValue3118 = $tmp3119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
            $tmp3113 = 0;
            goto $l3111;
            $l3120:;
            return $returnValue3118;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3122, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3124 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3122, &$s3123);
        if (((panda$core$Bit) { !$tmp3124.nonnull }).value) {
        {
            $tmp3125 = NULL;
            $returnValue3118 = $tmp3125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3125));
            $tmp3113 = 1;
            goto $l3111;
            $l3126:;
            return $returnValue3118;
        }
        }
        panda$core$Bit$wrapper* $tmp3129;
        $tmp3129 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp3129->value = ((panda$core$Bit) { true });
        $tmp3128 = ((panda$core$Object*) $tmp3129);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp3128);
        panda$core$Panda$unref$panda$core$Object($tmp3128);
        org$pandalanguage$pandac$ASTNode* $tmp3133 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3135 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3114.value));
        $tmp3134 = $tmp3135;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3133, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start3114.value).position, $tmp3134);
        $tmp3132 = $tmp3133;
        $tmp3131 = $tmp3132;
        target3130 = $tmp3131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3134));
        panda$collections$Array* $tmp3139 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3139);
        $tmp3138 = $tmp3139;
        $tmp3137 = $tmp3138;
        args3136 = $tmp3137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3138));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3140, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3141 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3140);
        if (((panda$core$Bit) { !$tmp3141.nonnull }).value) {
        {
            int $tmp3144;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3148 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3147 = $tmp3148;
                $tmp3146 = $tmp3147;
                expr3145 = $tmp3146;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3147));
                if (((panda$core$Bit) { expr3145 == NULL }).value) {
                {
                    panda$core$Object* $tmp3150 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3149 = $tmp3150;
                    panda$core$Panda$unref$panda$core$Object($tmp3149);
                    $tmp3151 = NULL;
                    $returnValue3118 = $tmp3151;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3151));
                    $tmp3144 = 0;
                    goto $l3142;
                    $l3152:;
                    $tmp3113 = 2;
                    goto $l3111;
                    $l3153:;
                    return $returnValue3118;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args3136, ((panda$core$Object*) expr3145));
                $l3155:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3158, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3159 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3158);
                bool $tmp3157 = ((panda$core$Bit) { $tmp3159.nonnull }).value;
                if (!$tmp3157) goto $l3156;
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
                        panda$core$Object* $tmp3165 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp3164 = $tmp3165;
                        panda$core$Panda$unref$panda$core$Object($tmp3164);
                        $tmp3166 = NULL;
                        $returnValue3118 = $tmp3166;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3166));
                        $tmp3144 = 1;
                        goto $l3142;
                        $l3167:;
                        $tmp3113 = 3;
                        goto $l3111;
                        $l3168:;
                        return $returnValue3118;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args3136, ((panda$core$Object*) expr3145));
                }
                goto $l3155;
                $l3156:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3170, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3172 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3170, &$s3171);
                if (((panda$core$Bit) { !$tmp3172.nonnull }).value) {
                {
                    panda$core$Object* $tmp3174 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp3173 = $tmp3174;
                    panda$core$Panda$unref$panda$core$Object($tmp3173);
                    $tmp3175 = NULL;
                    $returnValue3118 = $tmp3175;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3175));
                    $tmp3144 = 2;
                    goto $l3142;
                    $l3176:;
                    $tmp3113 = 4;
                    goto $l3111;
                    $l3177:;
                    return $returnValue3118;
                }
                }
            }
            $tmp3144 = -1;
            goto $l3142;
            $l3142:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3145));
            expr3145 = NULL;
            switch ($tmp3144) {
                case 1: goto $l3167;
                case -1: goto $l3179;
                case 0: goto $l3152;
                case 2: goto $l3176;
            }
            $l3179:;
        }
        }
        panda$core$Object* $tmp3181 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp3180 = $tmp3181;
        panda$core$Panda$unref$panda$core$Object($tmp3180);
        org$pandalanguage$pandac$ASTNode* $tmp3184 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3186 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args3136);
        $tmp3185 = $tmp3186;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3184, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$parser$Token) start3114.value).position, target3130, $tmp3185);
        $tmp3183 = $tmp3184;
        $tmp3182 = $tmp3183;
        $returnValue3118 = $tmp3182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3185));
        $tmp3113 = 5;
        goto $l3111;
        $l3187:;
        return $returnValue3118;
    }
    $l3111:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target3130));
    target3130 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args3136));
    args3136 = NULL;
    switch ($tmp3113) {
        case 5: goto $l3187;
        case 2: goto $l3153;
        case 3: goto $l3168;
        case 1: goto $l3126;
        case 4: goto $l3177;
        case 0: goto $l3120;
    }
    $l3189:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3190;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3191;
    org$pandalanguage$pandac$ASTNode* $returnValue3194;
    org$pandalanguage$pandac$ASTNode* $tmp3195;
    org$pandalanguage$pandac$parser$Token$nullable label3197;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3198;
    org$pandalanguage$pandac$ASTNode* $tmp3200;
    org$pandalanguage$pandac$ASTNode* $tmp3201;
    panda$core$String* $tmp3203;
    org$pandalanguage$pandac$ASTNode* $tmp3206;
    org$pandalanguage$pandac$ASTNode* $tmp3207;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3191, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3193 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3191, &$s3192);
    start3190 = $tmp3193;
    if (((panda$core$Bit) { !start3190.nonnull }).value) {
    {
        $tmp3195 = NULL;
        $returnValue3194 = $tmp3195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3195));
        return $returnValue3194;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3198, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3199 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3198);
    label3197 = $tmp3199;
    if (((panda$core$Bit) { label3197.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3202 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3204 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3197.value));
        $tmp3203 = $tmp3204;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3202, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start3190.value).position, $tmp3203);
        $tmp3201 = $tmp3202;
        $tmp3200 = $tmp3201;
        $returnValue3194 = $tmp3200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3203));
        return $returnValue3194;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3208 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3208, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start3190.value).position, NULL);
    $tmp3207 = $tmp3208;
    $tmp3206 = $tmp3207;
    $returnValue3194 = $tmp3206;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3206));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3207));
    return $returnValue3194;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3210;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3211;
    org$pandalanguage$pandac$ASTNode* $returnValue3214;
    org$pandalanguage$pandac$ASTNode* $tmp3215;
    org$pandalanguage$pandac$parser$Token$nullable label3217;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3218;
    org$pandalanguage$pandac$ASTNode* $tmp3220;
    org$pandalanguage$pandac$ASTNode* $tmp3221;
    panda$core$String* $tmp3223;
    org$pandalanguage$pandac$ASTNode* $tmp3226;
    org$pandalanguage$pandac$ASTNode* $tmp3227;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3211, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3213 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3211, &$s3212);
    start3210 = $tmp3213;
    if (((panda$core$Bit) { !start3210.nonnull }).value) {
    {
        $tmp3215 = NULL;
        $returnValue3214 = $tmp3215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3215));
        return $returnValue3214;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3218, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3219 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3218);
    label3217 = $tmp3219;
    if (((panda$core$Bit) { label3217.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp3222 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3224 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label3217.value));
        $tmp3223 = $tmp3224;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3222, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start3210.value).position, $tmp3223);
        $tmp3221 = $tmp3222;
        $tmp3220 = $tmp3221;
        $returnValue3214 = $tmp3220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
        return $returnValue3214;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp3228 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp3228, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start3210.value).position, NULL);
    $tmp3227 = $tmp3228;
    $tmp3226 = $tmp3227;
    $returnValue3214 = $tmp3226;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3226));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3227));
    return $returnValue3214;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3230;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3231;
    org$pandalanguage$pandac$ASTNode* $returnValue3234;
    org$pandalanguage$pandac$ASTNode* $tmp3235;
    org$pandalanguage$pandac$parser$Token$Kind $match$1643_93237;
    org$pandalanguage$pandac$ASTNode* $tmp3248;
    org$pandalanguage$pandac$ASTNode* $tmp3249;
    panda$collections$Array* children3255 = NULL;
    panda$collections$Array* $tmp3256;
    panda$collections$Array* $tmp3257;
    org$pandalanguage$pandac$ASTNode* expr3259 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3260;
    org$pandalanguage$pandac$ASTNode* $tmp3261;
    org$pandalanguage$pandac$ASTNode* $tmp3263;
    org$pandalanguage$pandac$ASTNode* $tmp3266;
    org$pandalanguage$pandac$ASTNode* $tmp3267;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3231, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp3233 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3231, &$s3232);
    start3230 = $tmp3233;
    if (((panda$core$Bit) { !start3230.nonnull }).value) {
    {
        $tmp3235 = NULL;
        $returnValue3234 = $tmp3235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3235));
        return $returnValue3234;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp3238 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1643_93237 = $tmp3238.kind;
        panda$core$Bit $tmp3241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1643_93237.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp3240 = $tmp3241.value;
        if ($tmp3240) goto $l3242;
        panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1643_93237.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp3240 = $tmp3243.value;
        $l3242:;
        panda$core$Bit $tmp3244 = { $tmp3240 };
        bool $tmp3239 = $tmp3244.value;
        if ($tmp3239) goto $l3245;
        panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1643_93237.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp3239 = $tmp3246.value;
        $l3245:;
        panda$core$Bit $tmp3247 = { $tmp3239 };
        if ($tmp3247.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3250 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3250, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start3230.value).position, NULL);
            $tmp3249 = $tmp3250;
            $tmp3248 = $tmp3249;
            $returnValue3234 = $tmp3248;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3248));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3249));
            return $returnValue3234;
        }
        }
        else {
        {
            int $tmp3254;
            {
                panda$collections$Array* $tmp3258 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp3258);
                $tmp3257 = $tmp3258;
                $tmp3256 = $tmp3257;
                children3255 = $tmp3256;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3257));
                org$pandalanguage$pandac$ASTNode* $tmp3262 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3261 = $tmp3262;
                $tmp3260 = $tmp3261;
                expr3259 = $tmp3260;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3261));
                if (((panda$core$Bit) { expr3259 == NULL }).value) {
                {
                    $tmp3263 = NULL;
                    $returnValue3234 = $tmp3263;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3263));
                    $tmp3254 = 0;
                    goto $l3252;
                    $l3264:;
                    return $returnValue3234;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children3255, ((panda$core$Object*) expr3259));
                org$pandalanguage$pandac$ASTNode* $tmp3268 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp3268, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start3230.value).position, expr3259);
                $tmp3267 = $tmp3268;
                $tmp3266 = $tmp3267;
                $returnValue3234 = $tmp3266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3267));
                $tmp3254 = 1;
                goto $l3252;
                $l3269:;
                return $returnValue3234;
            }
            $l3252:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children3255));
            children3255 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3259));
            expr3259 = NULL;
            switch ($tmp3254) {
                case 1: goto $l3269;
                case 0: goto $l3264;
            }
            $l3271:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1661_93272;
    org$pandalanguage$pandac$ASTNode* $returnValue3275;
    org$pandalanguage$pandac$ASTNode* $tmp3276;
    org$pandalanguage$pandac$ASTNode* $tmp3277;
    org$pandalanguage$pandac$ASTNode* $tmp3281;
    org$pandalanguage$pandac$ASTNode* $tmp3282;
    org$pandalanguage$pandac$ASTNode* $tmp3286;
    org$pandalanguage$pandac$ASTNode* $tmp3287;
    {
        org$pandalanguage$pandac$parser$Token $tmp3273 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1661_93272 = $tmp3273.kind;
        panda$core$Bit $tmp3274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1661_93272.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp3274.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3278 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3277 = $tmp3278;
            $tmp3276 = $tmp3277;
            $returnValue3275 = $tmp3276;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3276));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3277));
            return $returnValue3275;
        }
        }
        else {
        panda$core$Bit $tmp3280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1661_93272.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp3280.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3283 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3282 = $tmp3283;
            $tmp3281 = $tmp3282;
            $returnValue3275 = $tmp3281;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3282));
            return $returnValue3275;
        }
        }
        else {
        panda$core$Bit $tmp3285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1661_93272.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp3285.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3288 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3287 = $tmp3288;
            $tmp3286 = $tmp3287;
            $returnValue3275 = $tmp3286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3286));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3287));
            return $returnValue3275;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1673_93290;
    org$pandalanguage$pandac$ASTNode* $returnValue3293;
    org$pandalanguage$pandac$ASTNode* $tmp3294;
    org$pandalanguage$pandac$ASTNode* $tmp3295;
    org$pandalanguage$pandac$ASTNode* $tmp3299;
    org$pandalanguage$pandac$ASTNode* $tmp3300;
    org$pandalanguage$pandac$ASTNode* $tmp3304;
    org$pandalanguage$pandac$ASTNode* $tmp3305;
    org$pandalanguage$pandac$ASTNode* $tmp3309;
    org$pandalanguage$pandac$ASTNode* $tmp3310;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3313;
    org$pandalanguage$pandac$ASTNode* $tmp3315;
    {
        org$pandalanguage$pandac$parser$Token $tmp3291 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1673_93290 = $tmp3291.kind;
        panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1673_93290.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3292.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3296 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3295 = $tmp3296;
            $tmp3294 = $tmp3295;
            $returnValue3293 = $tmp3294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3294));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3295));
            return $returnValue3293;
        }
        }
        else {
        panda$core$Bit $tmp3298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1673_93290.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3298.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3301 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3300 = $tmp3301;
            $tmp3299 = $tmp3300;
            $returnValue3293 = $tmp3299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3300));
            return $returnValue3293;
        }
        }
        else {
        panda$core$Bit $tmp3303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1673_93290.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3303.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3306 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3305 = $tmp3306;
            $tmp3304 = $tmp3305;
            $returnValue3293 = $tmp3304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3305));
            return $returnValue3293;
        }
        }
        else {
        panda$core$Bit $tmp3308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1673_93290.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp3308.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3311 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp3310 = $tmp3311;
            $tmp3309 = $tmp3310;
            $returnValue3293 = $tmp3309;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
            return $returnValue3293;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3313, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3313, &$s3314);
            $tmp3315 = NULL;
            $returnValue3293 = $tmp3315;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3315));
            return $returnValue3293;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3320;
    org$pandalanguage$pandac$parser$Token$nullable start3321;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3322;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3324;
    org$pandalanguage$pandac$ASTNode* $returnValue3327;
    org$pandalanguage$pandac$ASTNode* $tmp3328;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3331;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3332;
    org$pandalanguage$pandac$parser$Token$nullable name3333;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3334;
    org$pandalanguage$pandac$ASTNode* $tmp3337;
    panda$collections$ImmutableArray* params3340 = NULL;
    panda$collections$ImmutableArray* $tmp3341;
    panda$collections$ImmutableArray* $tmp3342;
    org$pandalanguage$pandac$ASTNode* $tmp3344;
    org$pandalanguage$pandac$ASTNode* returnType3347 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3350;
    org$pandalanguage$pandac$ASTNode* $tmp3351;
    org$pandalanguage$pandac$ASTNode* $tmp3352;
    org$pandalanguage$pandac$ASTNode* $tmp3354;
    org$pandalanguage$pandac$ASTNode* $tmp3357;
    org$pandalanguage$pandac$ASTNode* $tmp3358;
    panda$collections$ImmutableArray* body3359 = NULL;
    panda$collections$ImmutableArray* $tmp3360;
    panda$collections$ImmutableArray* $tmp3361;
    org$pandalanguage$pandac$ASTNode* $tmp3363;
    org$pandalanguage$pandac$ASTNode* $tmp3366;
    org$pandalanguage$pandac$ASTNode* $tmp3367;
    panda$collections$ImmutableArray* $tmp3369;
    panda$core$String* $tmp3371;
    int $tmp3319;
    {
        memset(&kind3320, 0, sizeof(kind3320));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3322, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3323 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3322);
        start3321 = $tmp3323;
        if (((panda$core$Bit) { !start3321.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3324, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3326 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3324, &$s3325);
            start3321 = $tmp3326;
            if (((panda$core$Bit) { !start3321.nonnull }).value) {
            {
                $tmp3328 = NULL;
                $returnValue3327 = $tmp3328;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
                $tmp3319 = 0;
                goto $l3317;
                $l3329:;
                return $returnValue3327;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3331, ((panda$core$Int64) { 0 }));
            kind3320 = $tmp3331;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3332, ((panda$core$Int64) { 1 }));
            kind3320 = $tmp3332;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3334, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3336 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3334, &$s3335);
        name3333 = $tmp3336;
        if (((panda$core$Bit) { !name3333.nonnull }).value) {
        {
            $tmp3337 = NULL;
            $returnValue3327 = $tmp3337;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3337));
            $tmp3319 = 1;
            goto $l3317;
            $l3338:;
            return $returnValue3327;
        }
        }
        panda$collections$ImmutableArray* $tmp3343 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3342 = $tmp3343;
        $tmp3341 = $tmp3342;
        params3340 = $tmp3341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
        if (((panda$core$Bit) { params3340 == NULL }).value) {
        {
            $tmp3344 = NULL;
            $returnValue3327 = $tmp3344;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3344));
            $tmp3319 = 2;
            goto $l3317;
            $l3345:;
            return $returnValue3327;
        }
        }
        memset(&returnType3347, 0, sizeof(returnType3347));
        org$pandalanguage$pandac$parser$Token $tmp3348 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3348.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3349.value) {
        {
            {
                $tmp3350 = returnType3347;
                org$pandalanguage$pandac$ASTNode* $tmp3353 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3352 = $tmp3353;
                $tmp3351 = $tmp3352;
                returnType3347 = $tmp3351;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3350));
            }
            if (((panda$core$Bit) { returnType3347 == NULL }).value) {
            {
                $tmp3354 = NULL;
                $returnValue3327 = $tmp3354;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3354));
                $tmp3319 = 3;
                goto $l3317;
                $l3355:;
                return $returnValue3327;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3357 = returnType3347;
                $tmp3358 = NULL;
                returnType3347 = $tmp3358;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3358));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3357));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3362 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3361 = $tmp3362;
        $tmp3360 = $tmp3361;
        body3359 = $tmp3360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3361));
        if (((panda$core$Bit) { body3359 == NULL }).value) {
        {
            $tmp3363 = NULL;
            $returnValue3327 = $tmp3363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3363));
            $tmp3319 = 4;
            goto $l3317;
            $l3364:;
            return $returnValue3327;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3368 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3370 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3370);
        $tmp3369 = $tmp3370;
        panda$core$String* $tmp3372 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3333.value));
        $tmp3371 = $tmp3372;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3368, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3321.value).position, NULL, $tmp3369, kind3320, $tmp3371, params3340, returnType3347, body3359);
        $tmp3367 = $tmp3368;
        $tmp3366 = $tmp3367;
        $returnValue3327 = $tmp3366;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3369));
        $tmp3319 = 5;
        goto $l3317;
        $l3373:;
        return $returnValue3327;
    }
    $l3317:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3340));
    params3340 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3347));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3359));
    body3359 = NULL;
    switch ($tmp3319) {
        case 5: goto $l3373;
        case 4: goto $l3364;
        case 3: goto $l3355;
        case 1: goto $l3338;
        case 0: goto $l3329;
        case 2: goto $l3345;
    }
    $l3375:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1732_93376;
    org$pandalanguage$pandac$ASTNode* $returnValue3379;
    org$pandalanguage$pandac$ASTNode* $tmp3380;
    org$pandalanguage$pandac$ASTNode* $tmp3381;
    org$pandalanguage$pandac$ASTNode* $tmp3385;
    org$pandalanguage$pandac$ASTNode* $tmp3386;
    org$pandalanguage$pandac$ASTNode* $tmp3390;
    org$pandalanguage$pandac$ASTNode* $tmp3391;
    org$pandalanguage$pandac$ASTNode* $tmp3395;
    org$pandalanguage$pandac$ASTNode* $tmp3396;
    org$pandalanguage$pandac$ASTNode* $tmp3400;
    org$pandalanguage$pandac$ASTNode* $tmp3401;
    org$pandalanguage$pandac$ASTNode* $tmp3405;
    org$pandalanguage$pandac$ASTNode* $tmp3406;
    org$pandalanguage$pandac$ASTNode* $tmp3410;
    org$pandalanguage$pandac$ASTNode* $tmp3411;
    org$pandalanguage$pandac$ASTNode* $tmp3415;
    org$pandalanguage$pandac$ASTNode* $tmp3416;
    org$pandalanguage$pandac$parser$Token id3420;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3422;
    org$pandalanguage$pandac$ASTNode* $tmp3424;
    org$pandalanguage$pandac$ASTNode* $tmp3425;
    panda$core$String* $tmp3426;
    org$pandalanguage$pandac$ASTNode* $tmp3430;
    org$pandalanguage$pandac$ASTNode* $tmp3431;
    org$pandalanguage$pandac$ASTNode* $tmp3439;
    org$pandalanguage$pandac$ASTNode* $tmp3440;
    org$pandalanguage$pandac$ASTNode* $tmp3456;
    org$pandalanguage$pandac$ASTNode* $tmp3457;
    org$pandalanguage$pandac$ASTNode* $tmp3461;
    org$pandalanguage$pandac$ASTNode* $tmp3462;
    org$pandalanguage$pandac$ASTNode* $tmp3470;
    org$pandalanguage$pandac$ASTNode* $tmp3471;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3474;
    org$pandalanguage$pandac$ASTNode* $tmp3476;
    {
        org$pandalanguage$pandac$parser$Token $tmp3377 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1732_93376 = $tmp3377.kind;
        panda$core$Bit $tmp3378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp3378.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3382 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3381 = $tmp3382;
            $tmp3380 = $tmp3381;
            $returnValue3379 = $tmp3380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3380));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3381));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp3384.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3387 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3386 = $tmp3387;
            $tmp3385 = $tmp3386;
            $returnValue3379 = $tmp3385;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3386));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp3389.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3392 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3391 = $tmp3392;
            $tmp3390 = $tmp3391;
            $returnValue3379 = $tmp3390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3391));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp3394.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3397 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3396 = $tmp3397;
            $tmp3395 = $tmp3396;
            $returnValue3379 = $tmp3395;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3395));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3396));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp3399.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3402 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp3401 = $tmp3402;
            $tmp3400 = $tmp3401;
            $returnValue3379 = $tmp3400;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3401));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp3404.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3407 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3406 = $tmp3407;
            $tmp3405 = $tmp3406;
            $returnValue3379 = $tmp3405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3405));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3406));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp3409.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3412 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3411 = $tmp3412;
            $tmp3410 = $tmp3411;
            $returnValue3379 = $tmp3410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3411));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3414.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3417 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3416 = $tmp3417;
            $tmp3415 = $tmp3416;
            $returnValue3379 = $tmp3415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3416));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp3419.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3421 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id3420 = $tmp3421;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3422, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3423 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3422);
            if (((panda$core$Bit) { $tmp3423.nonnull }).value) {
            {
                panda$core$String* $tmp3427 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id3420);
                $tmp3426 = $tmp3427;
                org$pandalanguage$pandac$ASTNode* $tmp3428 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp3426);
                $tmp3425 = $tmp3428;
                $tmp3424 = $tmp3425;
                $returnValue3379 = $tmp3424;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3424));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3426));
                return $returnValue3379;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id3420);
            org$pandalanguage$pandac$ASTNode* $tmp3432 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3431 = $tmp3432;
            $tmp3430 = $tmp3431;
            $returnValue3379 = $tmp3430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3431));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp3434 = $tmp3435.value;
        if ($tmp3434) goto $l3436;
        panda$core$Bit $tmp3437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp3434 = $tmp3437.value;
        $l3436:;
        panda$core$Bit $tmp3438 = { $tmp3434 };
        if ($tmp3438.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3441 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3440 = $tmp3441;
            $tmp3439 = $tmp3440;
            $returnValue3379 = $tmp3439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3440));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp3445 = $tmp3446.value;
        if ($tmp3445) goto $l3447;
        panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp3445 = $tmp3448.value;
        $l3447:;
        panda$core$Bit $tmp3449 = { $tmp3445 };
        bool $tmp3444 = $tmp3449.value;
        if ($tmp3444) goto $l3450;
        panda$core$Bit $tmp3451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp3444 = $tmp3451.value;
        $l3450:;
        panda$core$Bit $tmp3452 = { $tmp3444 };
        bool $tmp3443 = $tmp3452.value;
        if ($tmp3443) goto $l3453;
        panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp3443 = $tmp3454.value;
        $l3453:;
        panda$core$Bit $tmp3455 = { $tmp3443 };
        if ($tmp3455.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3458 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3457 = $tmp3458;
            $tmp3456 = $tmp3457;
            $returnValue3379 = $tmp3456;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3456));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3457));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3460.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3463 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3462 = $tmp3463;
            $tmp3461 = $tmp3462;
            $returnValue3379 = $tmp3461;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3461));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3462));
            return $returnValue3379;
        }
        }
        else {
        panda$core$Bit $tmp3466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp3465 = $tmp3466.value;
        if ($tmp3465) goto $l3467;
        panda$core$Bit $tmp3468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1732_93376.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp3465 = $tmp3468.value;
        $l3467:;
        panda$core$Bit $tmp3469 = { $tmp3465 };
        if ($tmp3469.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3472 = org$pandalanguage$pandac$parser$Parser$innerMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3471 = $tmp3472;
            $tmp3470 = $tmp3471;
            $returnValue3379 = $tmp3470;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3470));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3471));
            return $returnValue3379;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3474, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3474, &$s3475);
            $tmp3476 = NULL;
            $returnValue3379 = $tmp3476;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3476));
            return $returnValue3379;
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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3481;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3482;
    org$pandalanguage$pandac$ASTNode* $returnValue3485;
    org$pandalanguage$pandac$ASTNode* $tmp3486;
    org$pandalanguage$pandac$parser$Token$nullable next3489;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3490;
    org$pandalanguage$pandac$ASTNode* $tmp3493;
    panda$core$MutableString* name3496 = NULL;
    panda$core$MutableString* $tmp3497;
    panda$core$MutableString* $tmp3498;
    panda$core$String* $tmp3500;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3504;
    panda$core$Char8 $tmp3506;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3507;
    org$pandalanguage$pandac$ASTNode* $tmp3510;
    panda$core$String* $tmp3513;
    org$pandalanguage$pandac$ASTNode* $tmp3515;
    org$pandalanguage$pandac$ASTNode* $tmp3516;
    panda$core$String* $tmp3518;
    int $tmp3480;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3482, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3484 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3482, &$s3483);
        start3481 = $tmp3484;
        if (((panda$core$Bit) { !start3481.nonnull }).value) {
        {
            $tmp3486 = NULL;
            $returnValue3485 = $tmp3486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
            $tmp3480 = 0;
            goto $l3478;
            $l3487:;
            return $returnValue3485;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3490, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3492 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3490, &$s3491);
        next3489 = $tmp3492;
        if (((panda$core$Bit) { !next3489.nonnull }).value) {
        {
            $tmp3493 = NULL;
            $returnValue3485 = $tmp3493;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3493));
            $tmp3480 = 1;
            goto $l3478;
            $l3494:;
            return $returnValue3485;
        }
        }
        panda$core$MutableString* $tmp3499 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3501 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3489.value));
        $tmp3500 = $tmp3501;
        panda$core$MutableString$init$panda$core$String($tmp3499, $tmp3500);
        $tmp3498 = $tmp3499;
        $tmp3497 = $tmp3498;
        name3496 = $tmp3497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3500));
        $l3502:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3504, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3505 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3504);
            next3489 = $tmp3505;
            if (((panda$core$Bit) { !next3489.nonnull }).value) {
            {
                goto $l3503;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3506, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3496, $tmp3506);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3507, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3509 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3507, &$s3508);
            next3489 = $tmp3509;
            if (((panda$core$Bit) { !next3489.nonnull }).value) {
            {
                $tmp3510 = NULL;
                $returnValue3485 = $tmp3510;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3510));
                $tmp3480 = 2;
                goto $l3478;
                $l3511:;
                return $returnValue3485;
            }
            }
            panda$core$String* $tmp3514 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3489.value));
            $tmp3513 = $tmp3514;
            panda$core$MutableString$append$panda$core$String(name3496, $tmp3513);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3513));
        }
        }
        $l3503:;
        org$pandalanguage$pandac$ASTNode* $tmp3517 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3519 = panda$core$MutableString$finish$R$panda$core$String(name3496);
        $tmp3518 = $tmp3519;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3517, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$parser$Token) start3481.value).position, $tmp3518);
        $tmp3516 = $tmp3517;
        $tmp3515 = $tmp3516;
        $returnValue3485 = $tmp3515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3518));
        $tmp3480 = 3;
        goto $l3478;
        $l3520:;
        return $returnValue3485;
    }
    $l3478:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3496));
    name3496 = NULL;
    switch ($tmp3480) {
        case 3: goto $l3520;
        case 1: goto $l3494;
        case 0: goto $l3487;
        case 2: goto $l3511;
    }
    $l3522:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3526;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3527;
    org$pandalanguage$pandac$ASTNode* $returnValue3530;
    org$pandalanguage$pandac$ASTNode* $tmp3531;
    org$pandalanguage$pandac$parser$Token$nullable next3534;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3535;
    org$pandalanguage$pandac$ASTNode* $tmp3538;
    panda$core$MutableString* name3541 = NULL;
    panda$core$MutableString* $tmp3542;
    panda$core$MutableString* $tmp3543;
    panda$core$String* $tmp3545;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3549;
    panda$core$Char8 $tmp3551;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3552;
    org$pandalanguage$pandac$ASTNode* $tmp3555;
    panda$core$String* $tmp3558;
    org$pandalanguage$pandac$ASTNode* $tmp3560;
    org$pandalanguage$pandac$ASTNode* $tmp3561;
    panda$core$String* $tmp3563;
    int $tmp3525;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3527, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3529 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3527, &$s3528);
        start3526 = $tmp3529;
        if (((panda$core$Bit) { !start3526.nonnull }).value) {
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
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3535, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3537 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3535, &$s3536);
        next3534 = $tmp3537;
        if (((panda$core$Bit) { !next3534.nonnull }).value) {
        {
            $tmp3538 = NULL;
            $returnValue3530 = $tmp3538;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3538));
            $tmp3525 = 1;
            goto $l3523;
            $l3539:;
            return $returnValue3530;
        }
        }
        panda$core$MutableString* $tmp3544 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3546 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3534.value));
        $tmp3545 = $tmp3546;
        panda$core$MutableString$init$panda$core$String($tmp3544, $tmp3545);
        $tmp3543 = $tmp3544;
        $tmp3542 = $tmp3543;
        name3541 = $tmp3542;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3545));
        $l3547:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3549, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3550 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3549);
            next3534 = $tmp3550;
            if (((panda$core$Bit) { !next3534.nonnull }).value) {
            {
                goto $l3548;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3551, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3541, $tmp3551);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3552, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3554 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3552, &$s3553);
            next3534 = $tmp3554;
            if (((panda$core$Bit) { !next3534.nonnull }).value) {
            {
                $tmp3555 = NULL;
                $returnValue3530 = $tmp3555;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3555));
                $tmp3525 = 2;
                goto $l3523;
                $l3556:;
                return $returnValue3530;
            }
            }
            panda$core$String* $tmp3559 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3534.value));
            $tmp3558 = $tmp3559;
            panda$core$MutableString$append$panda$core$String(name3541, $tmp3558);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3558));
        }
        }
        $l3548:;
        org$pandalanguage$pandac$ASTNode* $tmp3562 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3564 = panda$core$MutableString$finish$R$panda$core$String(name3541);
        $tmp3563 = $tmp3564;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3562, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start3526.value).position, $tmp3563);
        $tmp3561 = $tmp3562;
        $tmp3560 = $tmp3561;
        $returnValue3530 = $tmp3560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3563));
        $tmp3525 = 3;
        goto $l3523;
        $l3565:;
        return $returnValue3530;
    }
    $l3523:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3541));
    name3541 = NULL;
    switch ($tmp3525) {
        case 1: goto $l3539;
        case 3: goto $l3565;
        case 2: goto $l3556;
        case 0: goto $l3532;
    }
    $l3567:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3571;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3572;
    panda$collections$ImmutableArray* $returnValue3575;
    panda$collections$ImmutableArray* $tmp3576;
    org$pandalanguage$pandac$parser$Token$nullable id3579;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3580;
    panda$collections$ImmutableArray* $tmp3583;
    panda$collections$Array* parameters3586 = NULL;
    panda$collections$Array* $tmp3587;
    panda$collections$Array* $tmp3588;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3590;
    org$pandalanguage$pandac$ASTNode* t3595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3596;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    panda$collections$ImmutableArray* $tmp3599;
    org$pandalanguage$pandac$ASTNode* $tmp3603;
    panda$core$String* $tmp3605;
    org$pandalanguage$pandac$ASTNode* $tmp3608;
    panda$core$String* $tmp3610;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3615;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3617;
    panda$collections$ImmutableArray* $tmp3620;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3623;
    org$pandalanguage$pandac$ASTNode* t3628 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3629;
    org$pandalanguage$pandac$ASTNode* $tmp3630;
    panda$collections$ImmutableArray* $tmp3632;
    org$pandalanguage$pandac$ASTNode* $tmp3636;
    panda$core$String* $tmp3638;
    org$pandalanguage$pandac$ASTNode* $tmp3641;
    panda$core$String* $tmp3643;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3645;
    panda$collections$ImmutableArray* $tmp3648;
    panda$collections$ImmutableArray* $tmp3651;
    panda$collections$ImmutableArray* $tmp3652;
    int $tmp3570;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3572, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3574 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3572, &$s3573);
        start3571 = $tmp3574;
        if (((panda$core$Bit) { !start3571.nonnull }).value) {
        {
            $tmp3576 = NULL;
            $returnValue3575 = $tmp3576;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3576));
            $tmp3570 = 0;
            goto $l3568;
            $l3577:;
            return $returnValue3575;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3580, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3582 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3580, &$s3581);
        id3579 = $tmp3582;
        if (((panda$core$Bit) { !id3579.nonnull }).value) {
        {
            $tmp3583 = NULL;
            $returnValue3575 = $tmp3583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3583));
            $tmp3570 = 1;
            goto $l3568;
            $l3584:;
            return $returnValue3575;
        }
        }
        panda$collections$Array* $tmp3589 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3589);
        $tmp3588 = $tmp3589;
        $tmp3587 = $tmp3588;
        parameters3586 = $tmp3587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3588));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3590, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3591 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3590);
        if (((panda$core$Bit) { $tmp3591.nonnull }).value) {
        {
            int $tmp3594;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3598 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3597 = $tmp3598;
                $tmp3596 = $tmp3597;
                t3595 = $tmp3596;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3597));
                if (((panda$core$Bit) { t3595 == NULL }).value) {
                {
                    $tmp3599 = NULL;
                    $returnValue3575 = $tmp3599;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3599));
                    $tmp3594 = 0;
                    goto $l3592;
                    $l3600:;
                    $tmp3570 = 2;
                    goto $l3568;
                    $l3601:;
                    return $returnValue3575;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3604 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3606 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3579.value));
                $tmp3605 = $tmp3606;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3604, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) id3579.value).position, $tmp3605, t3595);
                $tmp3603 = $tmp3604;
                panda$collections$Array$add$panda$collections$Array$T(parameters3586, ((panda$core$Object*) $tmp3603));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3603));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3605));
            }
            $tmp3594 = -1;
            goto $l3592;
            $l3592:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3595));
            t3595 = NULL;
            switch ($tmp3594) {
                case 0: goto $l3600;
                case -1: goto $l3607;
            }
            $l3607:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3609 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3611 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3579.value));
            $tmp3610 = $tmp3611;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3609, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3579.value).position, $tmp3610);
            $tmp3608 = $tmp3609;
            panda$collections$Array$add$panda$collections$Array$T(parameters3586, ((panda$core$Object*) $tmp3608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3610));
        }
        }
        $l3612:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3615, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3616 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3615);
        bool $tmp3614 = ((panda$core$Bit) { $tmp3616.nonnull }).value;
        if (!$tmp3614) goto $l3613;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3617, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3619 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3617, &$s3618);
            id3579 = $tmp3619;
            if (((panda$core$Bit) { !id3579.nonnull }).value) {
            {
                $tmp3620 = NULL;
                $returnValue3575 = $tmp3620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3620));
                $tmp3570 = 3;
                goto $l3568;
                $l3621:;
                return $returnValue3575;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3623, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3624 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3623);
            if (((panda$core$Bit) { $tmp3624.nonnull }).value) {
            {
                int $tmp3627;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3631 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3630 = $tmp3631;
                    $tmp3629 = $tmp3630;
                    t3628 = $tmp3629;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3629));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
                    if (((panda$core$Bit) { t3628 == NULL }).value) {
                    {
                        $tmp3632 = NULL;
                        $returnValue3575 = $tmp3632;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3632));
                        $tmp3627 = 0;
                        goto $l3625;
                        $l3633:;
                        $tmp3570 = 4;
                        goto $l3568;
                        $l3634:;
                        return $returnValue3575;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3637 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3639 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3579.value));
                    $tmp3638 = $tmp3639;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3637, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) id3579.value).position, $tmp3638, t3628);
                    $tmp3636 = $tmp3637;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3586, ((panda$core$Object*) $tmp3636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3638));
                }
                $tmp3627 = -1;
                goto $l3625;
                $l3625:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3628));
                t3628 = NULL;
                switch ($tmp3627) {
                    case -1: goto $l3640;
                    case 0: goto $l3633;
                }
                $l3640:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3642 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3644 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3579.value));
                $tmp3643 = $tmp3644;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3642, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3579.value).position, $tmp3643);
                $tmp3641 = $tmp3642;
                panda$collections$Array$add$panda$collections$Array$T(parameters3586, ((panda$core$Object*) $tmp3641));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3641));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3643));
            }
            }
        }
        goto $l3612;
        $l3613:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3645, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3647 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3645, &$s3646);
        if (((panda$core$Bit) { !$tmp3647.nonnull }).value) {
        {
            $tmp3648 = NULL;
            $returnValue3575 = $tmp3648;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3648));
            $tmp3570 = 5;
            goto $l3568;
            $l3649:;
            return $returnValue3575;
        }
        }
        panda$collections$ImmutableArray* $tmp3653 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3586);
        $tmp3652 = $tmp3653;
        $tmp3651 = $tmp3652;
        $returnValue3575 = $tmp3651;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3651));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3652));
        $tmp3570 = 6;
        goto $l3568;
        $l3654:;
        return $returnValue3575;
    }
    $l3568:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3586));
    parameters3586 = NULL;
    switch ($tmp3570) {
        case 4: goto $l3634;
        case 6: goto $l3654;
        case 2: goto $l3601;
        case 5: goto $l3649;
        case 3: goto $l3621;
        case 0: goto $l3577;
        case 1: goto $l3584;
    }
    $l3656:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3660;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3661;
    panda$collections$ImmutableArray* $returnValue3664;
    panda$collections$ImmutableArray* $tmp3665;
    panda$collections$Array* result3668 = NULL;
    panda$collections$Array* $tmp3669;
    panda$collections$Array* $tmp3670;
    org$pandalanguage$pandac$ASTNode* t3672 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3673;
    org$pandalanguage$pandac$ASTNode* $tmp3674;
    panda$collections$ImmutableArray* $tmp3676;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3682;
    org$pandalanguage$pandac$ASTNode* $tmp3684;
    org$pandalanguage$pandac$ASTNode* $tmp3685;
    org$pandalanguage$pandac$ASTNode* $tmp3686;
    panda$collections$ImmutableArray* $tmp3688;
    panda$collections$ImmutableArray* $tmp3691;
    panda$collections$ImmutableArray* $tmp3692;
    int $tmp3659;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3661, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3663 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3661, &$s3662);
        start3660 = $tmp3663;
        if (((panda$core$Bit) { !start3660.nonnull }).value) {
        {
            $tmp3665 = NULL;
            $returnValue3664 = $tmp3665;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3665));
            $tmp3659 = 0;
            goto $l3657;
            $l3666:;
            return $returnValue3664;
        }
        }
        panda$collections$Array* $tmp3671 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3671);
        $tmp3670 = $tmp3671;
        $tmp3669 = $tmp3670;
        result3668 = $tmp3669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3670));
        org$pandalanguage$pandac$ASTNode* $tmp3675 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3674 = $tmp3675;
        $tmp3673 = $tmp3674;
        t3672 = $tmp3673;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3674));
        if (((panda$core$Bit) { t3672 == NULL }).value) {
        {
            $tmp3676 = NULL;
            $returnValue3664 = $tmp3676;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3676));
            $tmp3659 = 1;
            goto $l3657;
            $l3677:;
            return $returnValue3664;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3668, ((panda$core$Object*) t3672));
        $l3679:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3682, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3683 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3682);
        bool $tmp3681 = ((panda$core$Bit) { $tmp3683.nonnull }).value;
        if (!$tmp3681) goto $l3680;
        {
            {
                $tmp3684 = t3672;
                org$pandalanguage$pandac$ASTNode* $tmp3687 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3686 = $tmp3687;
                $tmp3685 = $tmp3686;
                t3672 = $tmp3685;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3684));
            }
            if (((panda$core$Bit) { t3672 == NULL }).value) {
            {
                $tmp3688 = NULL;
                $returnValue3664 = $tmp3688;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3688));
                $tmp3659 = 2;
                goto $l3657;
                $l3689:;
                return $returnValue3664;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3668, ((panda$core$Object*) t3672));
        }
        goto $l3679;
        $l3680:;
        panda$collections$ImmutableArray* $tmp3693 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3668);
        $tmp3692 = $tmp3693;
        $tmp3691 = $tmp3692;
        $returnValue3664 = $tmp3691;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3691));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3692));
        $tmp3659 = 3;
        goto $l3657;
        $l3694:;
        return $returnValue3664;
    }
    $l3657:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3668));
    result3668 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3672));
    t3672 = NULL;
    switch ($tmp3659) {
        case 2: goto $l3689;
        case 1: goto $l3677;
        case 3: goto $l3694;
        case 0: goto $l3666;
    }
    $l3696:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3700;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3701;
    org$pandalanguage$pandac$ASTNode* expr3704 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3705;
    org$pandalanguage$pandac$ASTNode* $tmp3707;
    org$pandalanguage$pandac$ASTNode* $tmp3708;
    org$pandalanguage$pandac$ASTNode* $tmp3709;
    org$pandalanguage$pandac$ASTNode* $returnValue3711;
    org$pandalanguage$pandac$ASTNode* $tmp3712;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3715;
    org$pandalanguage$pandac$ASTNode* $tmp3717;
    org$pandalanguage$pandac$ASTNode* $tmp3718;
    panda$core$String* $tmp3720;
    int $tmp3699;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3701, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3703 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3701, &$s3702);
        a3700 = $tmp3703;
        memset(&expr3704, 0, sizeof(expr3704));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3705, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3706 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3705);
        if (((panda$core$Bit) { $tmp3706.nonnull }).value) {
        {
            {
                $tmp3707 = expr3704;
                org$pandalanguage$pandac$ASTNode* $tmp3710 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3709 = $tmp3710;
                $tmp3708 = $tmp3709;
                expr3704 = $tmp3708;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3709));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3707));
            }
            if (((panda$core$Bit) { expr3704 == NULL }).value) {
            {
                $tmp3712 = NULL;
                $returnValue3711 = $tmp3712;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3712));
                $tmp3699 = 0;
                goto $l3697;
                $l3713:;
                return $returnValue3711;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3715, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3715, &$s3716);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3719 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3721 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3700.value));
        $tmp3720 = $tmp3721;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3719, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3700.value).position, $tmp3720, expr3704);
        $tmp3718 = $tmp3719;
        $tmp3717 = $tmp3718;
        $returnValue3711 = $tmp3717;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3717));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3718));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3720));
        $tmp3699 = 1;
        goto $l3697;
        $l3722:;
        return $returnValue3711;
    }
    $l3697:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3704));
    switch ($tmp3699) {
        case 1: goto $l3722;
        case 0: goto $l3713;
    }
    $l3724:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3728 = NULL;
    panda$collections$Array* $tmp3729;
    panda$collections$Array* $tmp3730;
    org$pandalanguage$pandac$ASTNode* a3740 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3741;
    org$pandalanguage$pandac$ASTNode* $tmp3742;
    panda$collections$ImmutableArray* $returnValue3746;
    panda$collections$ImmutableArray* $tmp3747;
    panda$collections$ImmutableArray* $tmp3748;
    int $tmp3727;
    {
        panda$collections$Array* $tmp3731 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3731);
        $tmp3730 = $tmp3731;
        $tmp3729 = $tmp3730;
        result3728 = $tmp3729;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3730));
        $l3732:;
        org$pandalanguage$pandac$parser$Token $tmp3735 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3735.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3734 = $tmp3736.value;
        if (!$tmp3734) goto $l3733;
        {
            int $tmp3739;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3743 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3742 = $tmp3743;
                $tmp3741 = $tmp3742;
                a3740 = $tmp3741;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3742));
                if (((panda$core$Bit) { a3740 == NULL }).value) {
                {
                    $tmp3739 = 0;
                    goto $l3737;
                    $l3744:;
                    goto $l3733;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3728, ((panda$core$Object*) a3740));
            }
            $tmp3739 = -1;
            goto $l3737;
            $l3737:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3740));
            a3740 = NULL;
            switch ($tmp3739) {
                case -1: goto $l3745;
                case 0: goto $l3744;
            }
            $l3745:;
        }
        goto $l3732;
        $l3733:;
        panda$collections$ImmutableArray* $tmp3749 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3728);
        $tmp3748 = $tmp3749;
        $tmp3747 = $tmp3748;
        $returnValue3746 = $tmp3747;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3747));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3748));
        $tmp3727 = 0;
        goto $l3725;
        $l3750:;
        return $returnValue3746;
    }
    $l3725:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3728));
    result3728 = NULL;
    switch ($tmp3727) {
        case 0: goto $l3750;
    }
    $l3752:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3756;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3757;
    org$pandalanguage$pandac$ASTNode* $returnValue3760;
    org$pandalanguage$pandac$ASTNode* $tmp3761;
    panda$core$MutableString* result3764 = NULL;
    panda$core$MutableString* $tmp3765;
    panda$core$MutableString* $tmp3766;
    org$pandalanguage$pandac$parser$Token next3770;
    org$pandalanguage$pandac$ASTNode* $tmp3775;
    panda$core$String* $tmp3778;
    org$pandalanguage$pandac$ASTNode* $tmp3780;
    org$pandalanguage$pandac$ASTNode* $tmp3781;
    panda$core$String* $tmp3783;
    int $tmp3755;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3757, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3759 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3757, &$s3758);
        start3756 = $tmp3759;
        if (((panda$core$Bit) { !start3756.nonnull }).value) {
        {
            $tmp3761 = NULL;
            $returnValue3760 = $tmp3761;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3761));
            $tmp3755 = 0;
            goto $l3753;
            $l3762:;
            return $returnValue3760;
        }
        }
        panda$core$MutableString* $tmp3767 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3767);
        $tmp3766 = $tmp3767;
        $tmp3765 = $tmp3766;
        result3764 = $tmp3765;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3765));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3766));
        $l3768:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3771 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3770 = $tmp3771;
            panda$core$Bit $tmp3772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3770.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3772.value) {
            {
                goto $l3769;
            }
            }
            panda$core$Bit $tmp3773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3770.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3773.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3756.value), &$s3774);
                $tmp3775 = NULL;
                $returnValue3760 = $tmp3775;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3775));
                $tmp3755 = 1;
                goto $l3753;
                $l3776:;
                return $returnValue3760;
            }
            }
            panda$core$String* $tmp3779 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3770);
            $tmp3778 = $tmp3779;
            panda$core$MutableString$append$panda$core$String(result3764, $tmp3778);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3778));
        }
        }
        $l3769:;
        org$pandalanguage$pandac$ASTNode* $tmp3782 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3784 = panda$core$MutableString$finish$R$panda$core$String(result3764);
        $tmp3783 = $tmp3784;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3782, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start3756.value).position, $tmp3783);
        $tmp3781 = $tmp3782;
        $tmp3780 = $tmp3781;
        $returnValue3760 = $tmp3780;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3781));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3783));
        $tmp3755 = 2;
        goto $l3753;
        $l3785:;
        return $returnValue3760;
    }
    $l3753:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3764));
    result3764 = NULL;
    switch ($tmp3755) {
        case 1: goto $l3776;
        case 2: goto $l3785;
        case 0: goto $l3762;
    }
    $l3787:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3791;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3792;
    org$pandalanguage$pandac$ASTNode* $returnValue3795;
    org$pandalanguage$pandac$ASTNode* $tmp3796;
    org$pandalanguage$pandac$ASTNode* t3799 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3800;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    org$pandalanguage$pandac$ASTNode* $tmp3803;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    panda$core$String* $tmp3809;
    int $tmp3790;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3792, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3794 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3792, &$s3793);
        id3791 = $tmp3794;
        if (((panda$core$Bit) { !id3791.nonnull }).value) {
        {
            $tmp3796 = NULL;
            $returnValue3795 = $tmp3796;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3796));
            $tmp3790 = 0;
            goto $l3788;
            $l3797:;
            return $returnValue3795;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3802 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3801 = $tmp3802;
        $tmp3800 = $tmp3801;
        t3799 = $tmp3800;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3801));
        if (((panda$core$Bit) { t3799 == NULL }).value) {
        {
            $tmp3803 = NULL;
            $returnValue3795 = $tmp3803;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3803));
            $tmp3790 = 1;
            goto $l3788;
            $l3804:;
            return $returnValue3795;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3810 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3791.value));
        $tmp3809 = $tmp3810;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3808, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) id3791.value).position, $tmp3809, t3799);
        $tmp3807 = $tmp3808;
        $tmp3806 = $tmp3807;
        $returnValue3795 = $tmp3806;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3806));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3807));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3809));
        $tmp3790 = 2;
        goto $l3788;
        $l3811:;
        return $returnValue3795;
    }
    $l3788:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3799));
    t3799 = NULL;
    switch ($tmp3790) {
        case 1: goto $l3804;
        case 2: goto $l3811;
        case 0: goto $l3797;
    }
    $l3813:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3817;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3818;
    panda$collections$ImmutableArray* $returnValue3821;
    panda$collections$ImmutableArray* $tmp3822;
    panda$collections$Array* result3825 = NULL;
    panda$collections$Array* $tmp3826;
    panda$collections$Array* $tmp3827;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3829;
    org$pandalanguage$pandac$ASTNode* param3834 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3835;
    org$pandalanguage$pandac$ASTNode* $tmp3836;
    panda$collections$ImmutableArray* $tmp3838;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3845;
    org$pandalanguage$pandac$ASTNode* $tmp3847;
    org$pandalanguage$pandac$ASTNode* $tmp3848;
    org$pandalanguage$pandac$ASTNode* $tmp3849;
    panda$collections$ImmutableArray* $tmp3851;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3855;
    panda$collections$ImmutableArray* $tmp3858;
    panda$collections$ImmutableArray* $tmp3863;
    panda$collections$ImmutableArray* $tmp3864;
    int $tmp3816;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3818, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3820 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3818, &$s3819);
        start3817 = $tmp3820;
        if (((panda$core$Bit) { !start3817.nonnull }).value) {
        {
            $tmp3822 = NULL;
            $returnValue3821 = $tmp3822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3822));
            $tmp3816 = 0;
            goto $l3814;
            $l3823:;
            return $returnValue3821;
        }
        }
        panda$collections$Array* $tmp3828 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3828);
        $tmp3827 = $tmp3828;
        $tmp3826 = $tmp3827;
        result3825 = $tmp3826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3826));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3827));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3829, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3830 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3829);
        if (((panda$core$Bit) { !$tmp3830.nonnull }).value) {
        {
            int $tmp3833;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3837 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3836 = $tmp3837;
                $tmp3835 = $tmp3836;
                param3834 = $tmp3835;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3836));
                if (((panda$core$Bit) { param3834 == NULL }).value) {
                {
                    $tmp3838 = NULL;
                    $returnValue3821 = $tmp3838;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3838));
                    $tmp3833 = 0;
                    goto $l3831;
                    $l3839:;
                    $tmp3816 = 1;
                    goto $l3814;
                    $l3840:;
                    return $returnValue3821;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3825, ((panda$core$Object*) param3834));
                $l3842:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3845, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3846 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3845);
                bool $tmp3844 = ((panda$core$Bit) { $tmp3846.nonnull }).value;
                if (!$tmp3844) goto $l3843;
                {
                    {
                        $tmp3847 = param3834;
                        org$pandalanguage$pandac$ASTNode* $tmp3850 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3849 = $tmp3850;
                        $tmp3848 = $tmp3849;
                        param3834 = $tmp3848;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3848));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3849));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3847));
                    }
                    if (((panda$core$Bit) { param3834 == NULL }).value) {
                    {
                        $tmp3851 = NULL;
                        $returnValue3821 = $tmp3851;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3851));
                        $tmp3833 = 1;
                        goto $l3831;
                        $l3852:;
                        $tmp3816 = 2;
                        goto $l3814;
                        $l3853:;
                        return $returnValue3821;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3825, ((panda$core$Object*) param3834));
                }
                goto $l3842;
                $l3843:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3855, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3857 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3855, &$s3856);
                if (((panda$core$Bit) { !$tmp3857.nonnull }).value) {
                {
                    $tmp3858 = NULL;
                    $returnValue3821 = $tmp3858;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3858));
                    $tmp3833 = 2;
                    goto $l3831;
                    $l3859:;
                    $tmp3816 = 3;
                    goto $l3814;
                    $l3860:;
                    return $returnValue3821;
                }
                }
            }
            $tmp3833 = -1;
            goto $l3831;
            $l3831:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3834));
            param3834 = NULL;
            switch ($tmp3833) {
                case -1: goto $l3862;
                case 0: goto $l3839;
                case 2: goto $l3859;
                case 1: goto $l3852;
            }
            $l3862:;
        }
        }
        panda$collections$ImmutableArray* $tmp3865 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3825);
        $tmp3864 = $tmp3865;
        $tmp3863 = $tmp3864;
        $returnValue3821 = $tmp3863;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3863));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3864));
        $tmp3816 = 4;
        goto $l3814;
        $l3866:;
        return $returnValue3821;
    }
    $l3814:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3825));
    result3825 = NULL;
    switch ($tmp3816) {
        case 3: goto $l3860;
        case 1: goto $l3840;
        case 2: goto $l3853;
        case 4: goto $l3866;
        case 0: goto $l3823;
    }
    $l3868:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3872;
    org$pandalanguage$pandac$parser$Token$nullable start3873;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3874;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3876;
    org$pandalanguage$pandac$ASTNode* $returnValue3879;
    org$pandalanguage$pandac$ASTNode* $tmp3880;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3883;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3884;
    panda$core$String* name3885 = NULL;
    panda$core$String* $tmp3886;
    panda$core$String* $tmp3887;
    org$pandalanguage$pandac$ASTNode* $tmp3889;
    panda$collections$ImmutableArray* params3892 = NULL;
    panda$collections$ImmutableArray* $tmp3893;
    panda$collections$ImmutableArray* $tmp3894;
    org$pandalanguage$pandac$ASTNode* $tmp3896;
    org$pandalanguage$pandac$ASTNode* returnType3899 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3902;
    org$pandalanguage$pandac$ASTNode* $tmp3903;
    org$pandalanguage$pandac$ASTNode* $tmp3904;
    org$pandalanguage$pandac$ASTNode* $tmp3906;
    org$pandalanguage$pandac$ASTNode* $tmp3909;
    org$pandalanguage$pandac$ASTNode* $tmp3910;
    panda$collections$ImmutableArray* body3911 = NULL;
    panda$collections$ImmutableArray* $tmp3914;
    panda$collections$ImmutableArray* $tmp3915;
    panda$collections$ImmutableArray* $tmp3916;
    org$pandalanguage$pandac$ASTNode* $tmp3918;
    panda$collections$ImmutableArray* $tmp3921;
    panda$collections$ImmutableArray* $tmp3922;
    org$pandalanguage$pandac$ASTNode* $tmp3923;
    org$pandalanguage$pandac$ASTNode* $tmp3924;
    int $tmp3871;
    {
        memset(&kind3872, 0, sizeof(kind3872));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3874, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3875 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3874);
        start3873 = $tmp3875;
        if (((panda$core$Bit) { !start3873.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3876, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3878 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3876, &$s3877);
            start3873 = $tmp3878;
            if (((panda$core$Bit) { !start3873.nonnull }).value) {
            {
                $tmp3880 = NULL;
                $returnValue3879 = $tmp3880;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3880));
                $tmp3871 = 0;
                goto $l3869;
                $l3881:;
                return $returnValue3879;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3883, ((panda$core$Int64) { 0 }));
            kind3872 = $tmp3883;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3884, ((panda$core$Int64) { 1 }));
            kind3872 = $tmp3884;
        }
        }
        panda$core$String* $tmp3888 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3887 = $tmp3888;
        $tmp3886 = $tmp3887;
        name3885 = $tmp3886;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3886));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3887));
        if (((panda$core$Bit) { name3885 == NULL }).value) {
        {
            $tmp3889 = NULL;
            $returnValue3879 = $tmp3889;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
            $tmp3871 = 1;
            goto $l3869;
            $l3890:;
            return $returnValue3879;
        }
        }
        panda$collections$ImmutableArray* $tmp3895 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3894 = $tmp3895;
        $tmp3893 = $tmp3894;
        params3892 = $tmp3893;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3893));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3894));
        if (((panda$core$Bit) { params3892 == NULL }).value) {
        {
            $tmp3896 = NULL;
            $returnValue3879 = $tmp3896;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3896));
            $tmp3871 = 2;
            goto $l3869;
            $l3897:;
            return $returnValue3879;
        }
        }
        memset(&returnType3899, 0, sizeof(returnType3899));
        org$pandalanguage$pandac$parser$Token $tmp3900 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3900.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3901.value) {
        {
            {
                $tmp3902 = returnType3899;
                org$pandalanguage$pandac$ASTNode* $tmp3905 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3904 = $tmp3905;
                $tmp3903 = $tmp3904;
                returnType3899 = $tmp3903;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3903));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3902));
            }
            if (((panda$core$Bit) { returnType3899 == NULL }).value) {
            {
                $tmp3906 = NULL;
                $returnValue3879 = $tmp3906;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3906));
                $tmp3871 = 3;
                goto $l3869;
                $l3907:;
                return $returnValue3879;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3909 = returnType3899;
                $tmp3910 = NULL;
                returnType3899 = $tmp3910;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3910));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3909));
            }
        }
        }
        memset(&body3911, 0, sizeof(body3911));
        org$pandalanguage$pandac$parser$Token $tmp3912 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3912.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3913.value) {
        {
            {
                $tmp3914 = body3911;
                panda$collections$ImmutableArray* $tmp3917 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3916 = $tmp3917;
                $tmp3915 = $tmp3916;
                body3911 = $tmp3915;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3915));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3916));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3914));
            }
            if (((panda$core$Bit) { body3911 == NULL }).value) {
            {
                $tmp3918 = NULL;
                $returnValue3879 = $tmp3918;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3918));
                $tmp3871 = 4;
                goto $l3869;
                $l3919:;
                return $returnValue3879;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3921 = body3911;
                $tmp3922 = NULL;
                body3911 = $tmp3922;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3921));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3925 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3925, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3873.value).position, p_doccomment, p_annotations, kind3872, name3885, params3892, returnType3899, body3911);
        $tmp3924 = $tmp3925;
        $tmp3923 = $tmp3924;
        $returnValue3879 = $tmp3923;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3923));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3924));
        $tmp3871 = 5;
        goto $l3869;
        $l3926:;
        return $returnValue3879;
    }
    $l3869:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3885));
    name3885 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3892));
    params3892 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3899));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3911));
    switch ($tmp3871) {
        case 2: goto $l3897;
        case 5: goto $l3926;
        case 4: goto $l3919;
        case 3: goto $l3907;
        case 1: goto $l3890;
        case 0: goto $l3881;
    }
    $l3928:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3932;
    org$pandalanguage$pandac$parser$Token$nullable start3933;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3934;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3936;
    org$pandalanguage$pandac$ASTNode* $returnValue3939;
    org$pandalanguage$pandac$ASTNode* $tmp3940;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3943;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3944;
    panda$collections$ImmutableArray* params3945 = NULL;
    panda$collections$ImmutableArray* $tmp3946;
    panda$collections$ImmutableArray* $tmp3947;
    org$pandalanguage$pandac$ASTNode* $tmp3949;
    org$pandalanguage$pandac$ASTNode* returnType3952 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3955;
    org$pandalanguage$pandac$ASTNode* $tmp3956;
    org$pandalanguage$pandac$ASTNode* $tmp3957;
    org$pandalanguage$pandac$ASTNode* $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3962;
    org$pandalanguage$pandac$ASTNode* $tmp3963;
    panda$collections$ImmutableArray* body3964 = NULL;
    panda$collections$ImmutableArray* $tmp3965;
    panda$collections$ImmutableArray* $tmp3966;
    org$pandalanguage$pandac$ASTNode* $tmp3968;
    org$pandalanguage$pandac$ASTNode* $tmp3971;
    org$pandalanguage$pandac$ASTNode* $tmp3972;
    panda$collections$ImmutableArray* $tmp3974;
    int $tmp3931;
    {
        memset(&kind3932, 0, sizeof(kind3932));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3934, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3935 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3934);
        start3933 = $tmp3935;
        if (((panda$core$Bit) { !start3933.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3936, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3938 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3936, &$s3937);
            start3933 = $tmp3938;
            if (((panda$core$Bit) { !start3933.nonnull }).value) {
            {
                $tmp3940 = NULL;
                $returnValue3939 = $tmp3940;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3940));
                $tmp3931 = 0;
                goto $l3929;
                $l3941:;
                return $returnValue3939;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3943, ((panda$core$Int64) { 0 }));
            kind3932 = $tmp3943;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3944, ((panda$core$Int64) { 1 }));
            kind3932 = $tmp3944;
        }
        }
        panda$collections$ImmutableArray* $tmp3948 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3947 = $tmp3948;
        $tmp3946 = $tmp3947;
        params3945 = $tmp3946;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3946));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3947));
        if (((panda$core$Bit) { params3945 == NULL }).value) {
        {
            $tmp3949 = NULL;
            $returnValue3939 = $tmp3949;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3949));
            $tmp3931 = 1;
            goto $l3929;
            $l3950:;
            return $returnValue3939;
        }
        }
        memset(&returnType3952, 0, sizeof(returnType3952));
        org$pandalanguage$pandac$parser$Token $tmp3953 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3953.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3954.value) {
        {
            {
                $tmp3955 = returnType3952;
                org$pandalanguage$pandac$ASTNode* $tmp3958 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3957 = $tmp3958;
                $tmp3956 = $tmp3957;
                returnType3952 = $tmp3956;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3955));
            }
            if (((panda$core$Bit) { returnType3952 == NULL }).value) {
            {
                $tmp3959 = NULL;
                $returnValue3939 = $tmp3959;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3959));
                $tmp3931 = 2;
                goto $l3929;
                $l3960:;
                return $returnValue3939;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3962 = returnType3952;
                $tmp3963 = NULL;
                returnType3952 = $tmp3963;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3962));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3967 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3966 = $tmp3967;
        $tmp3965 = $tmp3966;
        body3964 = $tmp3965;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3966));
        if (((panda$core$Bit) { body3964 == NULL }).value) {
        {
            $tmp3968 = NULL;
            $returnValue3939 = $tmp3968;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3968));
            $tmp3931 = 3;
            goto $l3929;
            $l3969:;
            return $returnValue3939;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3973 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3975 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3975);
        $tmp3974 = $tmp3975;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3973, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3933.value).position, NULL, $tmp3974, kind3932, &$s3976, params3945, returnType3952, body3964);
        $tmp3972 = $tmp3973;
        $tmp3971 = $tmp3972;
        $returnValue3939 = $tmp3971;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3971));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3972));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3974));
        $tmp3931 = 4;
        goto $l3929;
        $l3977:;
        return $returnValue3939;
    }
    $l3929:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3945));
    params3945 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3952));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3964));
    body3964 = NULL;
    switch ($tmp3931) {
        case 1: goto $l3950;
        case 2: goto $l3960;
        case 3: goto $l3969;
        case 4: goto $l3977;
        case 0: goto $l3941;
    }
    $l3979:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3983;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3984;
    org$pandalanguage$pandac$ASTNode* $returnValue3987;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    panda$collections$ImmutableArray* params3991 = NULL;
    panda$collections$ImmutableArray* $tmp3992;
    panda$collections$ImmutableArray* $tmp3993;
    org$pandalanguage$pandac$ASTNode* $tmp3995;
    panda$collections$ImmutableArray* b3998 = NULL;
    panda$collections$ImmutableArray* $tmp3999;
    panda$collections$ImmutableArray* $tmp4000;
    org$pandalanguage$pandac$ASTNode* $tmp4002;
    org$pandalanguage$pandac$ASTNode* $tmp4005;
    org$pandalanguage$pandac$ASTNode* $tmp4006;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp4008;
    int $tmp3982;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3984, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3986 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3984, &$s3985);
        start3983 = $tmp3986;
        if (((panda$core$Bit) { !start3983.nonnull }).value) {
        {
            $tmp3988 = NULL;
            $returnValue3987 = $tmp3988;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3988));
            $tmp3982 = 0;
            goto $l3980;
            $l3989:;
            return $returnValue3987;
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
            $returnValue3987 = $tmp3995;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3995));
            $tmp3982 = 1;
            goto $l3980;
            $l3996:;
            return $returnValue3987;
        }
        }
        panda$collections$ImmutableArray* $tmp4001 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp4000 = $tmp4001;
        $tmp3999 = $tmp4000;
        b3998 = $tmp3999;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3999));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4000));
        if (((panda$core$Bit) { b3998 == NULL }).value) {
        {
            $tmp4002 = NULL;
            $returnValue3987 = $tmp4002;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4002));
            $tmp3982 = 2;
            goto $l3980;
            $l4003:;
            return $returnValue3987;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4007 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp4008, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4007, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3983.value).position, p_doccomment, p_annotations, $tmp4008, &$s4009, params3991, NULL, b3998);
        $tmp4006 = $tmp4007;
        $tmp4005 = $tmp4006;
        $returnValue3987 = $tmp4005;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4006));
        $tmp3982 = 3;
        goto $l3980;
        $l4010:;
        return $returnValue3987;
    }
    $l3980:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3991));
    params3991 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b3998));
    b3998 = NULL;
    switch ($tmp3982) {
        case 2: goto $l4003;
        case 3: goto $l4010;
        case 1: goto $l3996;
        case 0: goto $l3989;
    }
    $l4012:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl4016 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4017;
    org$pandalanguage$pandac$ASTNode* $tmp4018;
    org$pandalanguage$pandac$ASTNode* $returnValue4020;
    org$pandalanguage$pandac$ASTNode* $tmp4021;
    org$pandalanguage$pandac$ASTNode* $tmp4024;
    org$pandalanguage$pandac$ASTNode* $tmp4025;
    int $tmp4015;
    {
        org$pandalanguage$pandac$ASTNode* $tmp4019 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp4018 = $tmp4019;
        $tmp4017 = $tmp4018;
        decl4016 = $tmp4017;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4017));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4018));
        if (((panda$core$Bit) { decl4016 == NULL }).value) {
        {
            $tmp4021 = NULL;
            $returnValue4020 = $tmp4021;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4021));
            $tmp4015 = 0;
            goto $l4013;
            $l4022:;
            return $returnValue4020;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4026 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp4028 = (($fn4027) decl4016->$class->vtable[2])(decl4016);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp4026, ((panda$core$Int64) { 16 }), $tmp4028, p_doccomment, p_annotations, decl4016);
        $tmp4025 = $tmp4026;
        $tmp4024 = $tmp4025;
        $returnValue4020 = $tmp4024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4025));
        $tmp4015 = 1;
        goto $l4013;
        $l4029:;
        return $returnValue4020;
    }
    $l4013:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4016));
    decl4016 = NULL;
    switch ($tmp4015) {
        case 1: goto $l4029;
        case 0: goto $l4022;
    }
    $l4031:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name4035;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4036;
    org$pandalanguage$pandac$ASTNode* $returnValue4039;
    org$pandalanguage$pandac$ASTNode* $tmp4040;
    panda$collections$Array* fields4043 = NULL;
    panda$collections$Array* $tmp4044;
    panda$collections$Array* $tmp4045;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4047;
    org$pandalanguage$pandac$ASTNode* field4054 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4055;
    org$pandalanguage$pandac$ASTNode* $tmp4056;
    org$pandalanguage$pandac$ASTNode* $tmp4058;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4065;
    org$pandalanguage$pandac$ASTNode* $tmp4067;
    org$pandalanguage$pandac$ASTNode* $tmp4068;
    org$pandalanguage$pandac$ASTNode* $tmp4069;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4076;
    org$pandalanguage$pandac$ASTNode* $tmp4079;
    org$pandalanguage$pandac$ASTNode* $tmp4082;
    org$pandalanguage$pandac$ASTNode* $tmp4083;
    panda$core$String* $tmp4085;
    panda$collections$ImmutableArray* $tmp4087;
    int $tmp4034;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4036, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4038 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4036, &$s4037);
        name4035 = $tmp4038;
        if (((panda$core$Bit) { !name4035.nonnull }).value) {
        {
            $tmp4040 = NULL;
            $returnValue4039 = $tmp4040;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4040));
            $tmp4034 = 0;
            goto $l4032;
            $l4041:;
            return $returnValue4039;
        }
        }
        panda$collections$Array* $tmp4046 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4046);
        $tmp4045 = $tmp4046;
        $tmp4044 = $tmp4045;
        fields4043 = $tmp4044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4045));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4047, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4048 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4047);
        if (((panda$core$Bit) { $tmp4048.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4049 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp4050 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4049.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp4050.value) {
            {
                int $tmp4053;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp4057 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp4056 = $tmp4057;
                    $tmp4055 = $tmp4056;
                    field4054 = $tmp4055;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4055));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4056));
                    if (((panda$core$Bit) { field4054 == NULL }).value) {
                    {
                        $tmp4058 = NULL;
                        $returnValue4039 = $tmp4058;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4058));
                        $tmp4053 = 0;
                        goto $l4051;
                        $l4059:;
                        $tmp4034 = 1;
                        goto $l4032;
                        $l4060:;
                        return $returnValue4039;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields4043, ((panda$core$Object*) field4054));
                    $l4062:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4065, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp4066 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4065);
                    bool $tmp4064 = ((panda$core$Bit) { $tmp4066.nonnull }).value;
                    if (!$tmp4064) goto $l4063;
                    {
                        {
                            $tmp4067 = field4054;
                            org$pandalanguage$pandac$ASTNode* $tmp4070 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp4069 = $tmp4070;
                            $tmp4068 = $tmp4069;
                            field4054 = $tmp4068;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4068));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4069));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4067));
                        }
                        if (((panda$core$Bit) { field4054 == NULL }).value) {
                        {
                            $tmp4071 = NULL;
                            $returnValue4039 = $tmp4071;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4071));
                            $tmp4053 = 1;
                            goto $l4051;
                            $l4072:;
                            $tmp4034 = 2;
                            goto $l4032;
                            $l4073:;
                            return $returnValue4039;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields4043, ((panda$core$Object*) field4054));
                    }
                    goto $l4062;
                    $l4063:;
                }
                $tmp4053 = -1;
                goto $l4051;
                $l4051:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field4054));
                field4054 = NULL;
                switch ($tmp4053) {
                    case 0: goto $l4059;
                    case -1: goto $l4075;
                    case 1: goto $l4072;
                }
                $l4075:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4076, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp4078 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4076, &$s4077);
            if (((panda$core$Bit) { !$tmp4078.nonnull }).value) {
            {
                $tmp4079 = NULL;
                $returnValue4039 = $tmp4079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4079));
                $tmp4034 = 3;
                goto $l4032;
                $l4080:;
                return $returnValue4039;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp4084 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp4086 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4035.value));
        $tmp4085 = $tmp4086;
        panda$collections$ImmutableArray* $tmp4088 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields4043);
        $tmp4087 = $tmp4088;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp4084, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) name4035.value).position, p_doccomment, $tmp4085, $tmp4087);
        $tmp4083 = $tmp4084;
        $tmp4082 = $tmp4083;
        $returnValue4039 = $tmp4082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4083));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4085));
        $tmp4034 = 4;
        goto $l4032;
        $l4089:;
        return $returnValue4039;
    }
    $l4032:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields4043));
    fields4043 = NULL;
    switch ($tmp4034) {
        case 4: goto $l4089;
        case 3: goto $l4080;
        case 0: goto $l4041;
        case 1: goto $l4060;
        case 2: goto $l4073;
    }
    $l4091:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4095;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4096;
    org$pandalanguage$pandac$ASTNode* $returnValue4099;
    org$pandalanguage$pandac$ASTNode* $tmp4100;
    org$pandalanguage$pandac$parser$Token$nullable name4103;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4104;
    org$pandalanguage$pandac$ASTNode* $tmp4107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4110;
    org$pandalanguage$pandac$ASTNode* $tmp4113;
    panda$collections$Array* members4116 = NULL;
    panda$collections$Array* $tmp4117;
    panda$collections$Array* $tmp4118;
    org$pandalanguage$pandac$ASTNode* dc4120 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4121;
    org$pandalanguage$pandac$parser$Token next4124;
    org$pandalanguage$pandac$parser$Token$Kind $match$2151_134126;
    panda$core$String* $tmp4165;
    panda$core$String* $tmp4166;
    panda$core$String* $tmp4168;
    org$pandalanguage$pandac$ASTNode* $tmp4173;
    org$pandalanguage$pandac$ASTNode* $tmp4174;
    org$pandalanguage$pandac$ASTNode* $tmp4175;
    org$pandalanguage$pandac$ASTNode* c4181 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4182;
    org$pandalanguage$pandac$ASTNode* $tmp4183;
    org$pandalanguage$pandac$ASTNode* $tmp4185;
    org$pandalanguage$pandac$ASTNode* $tmp4189;
    org$pandalanguage$pandac$ASTNode* $tmp4190;
    panda$collections$ImmutableArray* a4192 = NULL;
    panda$collections$ImmutableArray* $tmp4193;
    panda$collections$ImmutableArray* $tmp4194;
    org$pandalanguage$pandac$parser$Token next4198;
    org$pandalanguage$pandac$parser$Token$Kind $match$2175_134200;
    panda$core$String* $tmp4204;
    panda$core$String* $tmp4205;
    panda$core$String* $tmp4207;
    org$pandalanguage$pandac$ASTNode* $tmp4212;
    panda$collections$ImmutableArray* $tmp4215;
    panda$collections$ImmutableArray* $tmp4216;
    panda$collections$ImmutableArray* $tmp4217;
    panda$core$String* $tmp4225;
    panda$core$String* $tmp4226;
    panda$core$String* $tmp4228;
    org$pandalanguage$pandac$ASTNode* $tmp4233;
    org$pandalanguage$pandac$ASTNode* $tmp4236;
    org$pandalanguage$pandac$ASTNode* $tmp4237;
    org$pandalanguage$pandac$ASTNode* $tmp4238;
    org$pandalanguage$pandac$ASTNode* decl4244 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4245;
    org$pandalanguage$pandac$ASTNode* $tmp4246;
    org$pandalanguage$pandac$ASTNode* $tmp4248;
    org$pandalanguage$pandac$ASTNode* $tmp4252;
    org$pandalanguage$pandac$ASTNode* $tmp4253;
    panda$collections$ImmutableArray* $tmp4254;
    panda$collections$ImmutableArray* $tmp4255;
    panda$collections$ImmutableArray* $tmp4256;
    org$pandalanguage$pandac$ASTNode* decl4263 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4264;
    org$pandalanguage$pandac$ASTNode* $tmp4265;
    org$pandalanguage$pandac$ASTNode* $tmp4267;
    org$pandalanguage$pandac$ASTNode* $tmp4271;
    org$pandalanguage$pandac$ASTNode* $tmp4272;
    panda$collections$ImmutableArray* $tmp4273;
    panda$collections$ImmutableArray* $tmp4274;
    panda$collections$ImmutableArray* $tmp4275;
    org$pandalanguage$pandac$ASTNode* decl4282 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4283;
    org$pandalanguage$pandac$ASTNode* $tmp4284;
    org$pandalanguage$pandac$ASTNode* $tmp4286;
    org$pandalanguage$pandac$ASTNode* $tmp4290;
    org$pandalanguage$pandac$ASTNode* $tmp4291;
    panda$collections$ImmutableArray* $tmp4292;
    panda$collections$ImmutableArray* $tmp4293;
    panda$collections$ImmutableArray* $tmp4294;
    org$pandalanguage$pandac$ASTNode* decl4305 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4306;
    org$pandalanguage$pandac$ASTNode* $tmp4307;
    org$pandalanguage$pandac$ASTNode* $tmp4309;
    org$pandalanguage$pandac$ASTNode* $tmp4313;
    org$pandalanguage$pandac$ASTNode* $tmp4314;
    panda$collections$ImmutableArray* $tmp4315;
    panda$collections$ImmutableArray* $tmp4316;
    panda$collections$ImmutableArray* $tmp4317;
    org$pandalanguage$pandac$ASTNode* decl4336 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4337;
    org$pandalanguage$pandac$ASTNode* $tmp4338;
    org$pandalanguage$pandac$ASTNode* $tmp4340;
    org$pandalanguage$pandac$ASTNode* $tmp4344;
    org$pandalanguage$pandac$ASTNode* $tmp4345;
    panda$collections$ImmutableArray* $tmp4346;
    panda$collections$ImmutableArray* $tmp4347;
    panda$collections$ImmutableArray* $tmp4348;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4352;
    panda$core$String* $tmp4354;
    panda$core$String* $tmp4355;
    panda$core$String* $tmp4357;
    org$pandalanguage$pandac$ASTNode* $tmp4362;
    org$pandalanguage$pandac$ASTNode* $tmp4365;
    org$pandalanguage$pandac$ASTNode* $tmp4366;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4368;
    panda$core$String* $tmp4369;
    panda$collections$ImmutableArray* $tmp4371;
    int $tmp4094;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4096, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4098 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4096, &$s4097);
        start4095 = $tmp4098;
        if (((panda$core$Bit) { !start4095.nonnull }).value) {
        {
            $tmp4100 = NULL;
            $returnValue4099 = $tmp4100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4100));
            $tmp4094 = 0;
            goto $l4092;
            $l4101:;
            return $returnValue4099;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4104, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4106 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4104, &$s4105);
        name4103 = $tmp4106;
        if (((panda$core$Bit) { !name4103.nonnull }).value) {
        {
            $tmp4107 = NULL;
            $returnValue4099 = $tmp4107;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4107));
            $tmp4094 = 1;
            goto $l4092;
            $l4108:;
            return $returnValue4099;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4110, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4112 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4110, &$s4111);
        if (((panda$core$Bit) { !$tmp4112.nonnull }).value) {
        {
            $tmp4113 = NULL;
            $returnValue4099 = $tmp4113;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4113));
            $tmp4094 = 2;
            goto $l4092;
            $l4114:;
            return $returnValue4099;
        }
        }
        panda$collections$Array* $tmp4119 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4119);
        $tmp4118 = $tmp4119;
        $tmp4117 = $tmp4118;
        members4116 = $tmp4117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4118));
        $tmp4121 = NULL;
        dc4120 = $tmp4121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4121));
        $l4122:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4125 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4124 = $tmp4125;
            {
                $match$2151_134126 = next4124.kind;
                panda$core$Bit $tmp4136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp4135 = $tmp4136.value;
                if ($tmp4135) goto $l4137;
                panda$core$Bit $tmp4138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp4135 = $tmp4138.value;
                $l4137:;
                panda$core$Bit $tmp4139 = { $tmp4135 };
                bool $tmp4134 = $tmp4139.value;
                if ($tmp4134) goto $l4140;
                panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp4134 = $tmp4141.value;
                $l4140:;
                panda$core$Bit $tmp4142 = { $tmp4134 };
                bool $tmp4133 = $tmp4142.value;
                if ($tmp4133) goto $l4143;
                panda$core$Bit $tmp4144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp4133 = $tmp4144.value;
                $l4143:;
                panda$core$Bit $tmp4145 = { $tmp4133 };
                bool $tmp4132 = $tmp4145.value;
                if ($tmp4132) goto $l4146;
                panda$core$Bit $tmp4147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp4132 = $tmp4147.value;
                $l4146:;
                panda$core$Bit $tmp4148 = { $tmp4132 };
                bool $tmp4131 = $tmp4148.value;
                if ($tmp4131) goto $l4149;
                panda$core$Bit $tmp4150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp4131 = $tmp4150.value;
                $l4149:;
                panda$core$Bit $tmp4151 = { $tmp4131 };
                bool $tmp4130 = $tmp4151.value;
                if ($tmp4130) goto $l4152;
                panda$core$Bit $tmp4153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp4130 = $tmp4153.value;
                $l4152:;
                panda$core$Bit $tmp4154 = { $tmp4130 };
                bool $tmp4129 = $tmp4154.value;
                if ($tmp4129) goto $l4155;
                panda$core$Bit $tmp4156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp4129 = $tmp4156.value;
                $l4155:;
                panda$core$Bit $tmp4157 = { $tmp4129 };
                bool $tmp4128 = $tmp4157.value;
                if ($tmp4128) goto $l4158;
                panda$core$Bit $tmp4159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp4128 = $tmp4159.value;
                $l4158:;
                panda$core$Bit $tmp4160 = { $tmp4128 };
                bool $tmp4127 = $tmp4160.value;
                if ($tmp4127) goto $l4161;
                panda$core$Bit $tmp4162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp4127 = $tmp4162.value;
                $l4161:;
                panda$core$Bit $tmp4163 = { $tmp4127 };
                if ($tmp4163.value) {
                {
                    goto $l4123;
                }
                }
                else {
                panda$core$Bit $tmp4164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp4164.value) {
                {
                    if (((panda$core$Bit) { dc4120 != NULL }).value) {
                    {
                        panda$core$String* $tmp4169 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4124);
                        $tmp4168 = $tmp4169;
                        panda$core$String* $tmp4170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4167, $tmp4168);
                        $tmp4166 = $tmp4170;
                        panda$core$String* $tmp4172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4166, &$s4171);
                        $tmp4165 = $tmp4172;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4124, $tmp4165);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4165));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4166));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4168));
                    }
                    }
                    {
                        $tmp4173 = dc4120;
                        org$pandalanguage$pandac$ASTNode* $tmp4176 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4175 = $tmp4176;
                        $tmp4174 = $tmp4175;
                        dc4120 = $tmp4174;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4174));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4173));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2151_134126.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp4177.value) {
                {
                    int $tmp4180;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4184 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4120);
                        $tmp4183 = $tmp4184;
                        $tmp4182 = $tmp4183;
                        c4181 = $tmp4182;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4182));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4183));
                        if (((panda$core$Bit) { c4181 == NULL }).value) {
                        {
                            $tmp4185 = NULL;
                            $returnValue4099 = $tmp4185;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4185));
                            $tmp4180 = 0;
                            goto $l4178;
                            $l4186:;
                            $tmp4094 = 3;
                            goto $l4092;
                            $l4187:;
                            return $returnValue4099;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4116, ((panda$core$Object*) c4181));
                        {
                            $tmp4189 = dc4120;
                            $tmp4190 = NULL;
                            dc4120 = $tmp4190;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4190));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4189));
                        }
                    }
                    $tmp4180 = -1;
                    goto $l4178;
                    $l4178:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c4181));
                    c4181 = NULL;
                    switch ($tmp4180) {
                        case 0: goto $l4186;
                        case -1: goto $l4191;
                    }
                    $l4191:;
                }
                }
                else {
                {
                    goto $l4123;
                }
                }
                }
                }
            }
        }
        }
        $l4123:;
        panda$collections$ImmutableArray* $tmp4195 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp4195);
        $tmp4194 = $tmp4195;
        $tmp4193 = $tmp4194;
        a4192 = $tmp4193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4194));
        $l4196:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp4199 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next4198 = $tmp4199;
            {
                $match$2175_134200 = next4198.kind;
                panda$core$Bit $tmp4201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp4201.value) {
                {
                    panda$core$Int64 $tmp4202 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4192);
                    panda$core$Bit $tmp4203 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4202, ((panda$core$Int64) { 0 }));
                    if ($tmp4203.value) {
                    {
                        panda$core$String* $tmp4208 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4198);
                        $tmp4207 = $tmp4208;
                        panda$core$String* $tmp4209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4206, $tmp4207);
                        $tmp4205 = $tmp4209;
                        panda$core$String* $tmp4211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4205, &$s4210);
                        $tmp4204 = $tmp4211;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4198, $tmp4204);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4204));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4205));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4207));
                        $tmp4212 = NULL;
                        $returnValue4099 = $tmp4212;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4212));
                        $tmp4094 = 4;
                        goto $l4092;
                        $l4213:;
                        return $returnValue4099;
                    }
                    }
                    {
                        $tmp4215 = a4192;
                        panda$collections$ImmutableArray* $tmp4218 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp4217 = $tmp4218;
                        $tmp4216 = $tmp4217;
                        a4192 = $tmp4216;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4216));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4215));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp4219.value) {
                {
                    bool $tmp4220 = ((panda$core$Bit) { dc4120 != NULL }).value;
                    if ($tmp4220) goto $l4221;
                    panda$core$Int64 $tmp4222 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a4192);
                    panda$core$Bit $tmp4223 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4222, ((panda$core$Int64) { 0 }));
                    $tmp4220 = $tmp4223.value;
                    $l4221:;
                    panda$core$Bit $tmp4224 = { $tmp4220 };
                    if ($tmp4224.value) {
                    {
                        panda$core$String* $tmp4229 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4198);
                        $tmp4228 = $tmp4229;
                        panda$core$String* $tmp4230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4227, $tmp4228);
                        $tmp4226 = $tmp4230;
                        panda$core$String* $tmp4232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4226, &$s4231);
                        $tmp4225 = $tmp4232;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4198, $tmp4225);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4225));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4226));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4228));
                        $tmp4233 = NULL;
                        $returnValue4099 = $tmp4233;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4233));
                        $tmp4094 = 5;
                        goto $l4092;
                        $l4234:;
                        return $returnValue4099;
                    }
                    }
                    {
                        $tmp4236 = dc4120;
                        org$pandalanguage$pandac$ASTNode* $tmp4239 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4238 = $tmp4239;
                        $tmp4237 = $tmp4238;
                        dc4120 = $tmp4237;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4237));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4238));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4236));
                    }
                }
                }
                else {
                panda$core$Bit $tmp4240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp4240.value) {
                {
                    int $tmp4243;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4247 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4120, a4192);
                        $tmp4246 = $tmp4247;
                        $tmp4245 = $tmp4246;
                        decl4244 = $tmp4245;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4245));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4246));
                        if (((panda$core$Bit) { decl4244 == NULL }).value) {
                        {
                            $tmp4248 = NULL;
                            $returnValue4099 = $tmp4248;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4248));
                            $tmp4243 = 0;
                            goto $l4241;
                            $l4249:;
                            $tmp4094 = 6;
                            goto $l4092;
                            $l4250:;
                            return $returnValue4099;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4116, ((panda$core$Object*) decl4244));
                        {
                            $tmp4252 = dc4120;
                            $tmp4253 = NULL;
                            dc4120 = $tmp4253;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4253));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4252));
                        }
                        {
                            $tmp4254 = a4192;
                            panda$collections$ImmutableArray* $tmp4257 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4257);
                            $tmp4256 = $tmp4257;
                            $tmp4255 = $tmp4256;
                            a4192 = $tmp4255;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4255));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4256));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4254));
                        }
                    }
                    $tmp4243 = -1;
                    goto $l4241;
                    $l4241:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4244));
                    decl4244 = NULL;
                    switch ($tmp4243) {
                        case -1: goto $l4258;
                        case 0: goto $l4249;
                    }
                    $l4258:;
                }
                }
                else {
                panda$core$Bit $tmp4259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp4259.value) {
                {
                    int $tmp4262;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4266 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4120, a4192);
                        $tmp4265 = $tmp4266;
                        $tmp4264 = $tmp4265;
                        decl4263 = $tmp4264;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4264));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4265));
                        if (((panda$core$Bit) { decl4263 == NULL }).value) {
                        {
                            $tmp4267 = NULL;
                            $returnValue4099 = $tmp4267;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4267));
                            $tmp4262 = 0;
                            goto $l4260;
                            $l4268:;
                            $tmp4094 = 7;
                            goto $l4092;
                            $l4269:;
                            return $returnValue4099;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4116, ((panda$core$Object*) decl4263));
                        {
                            $tmp4271 = dc4120;
                            $tmp4272 = NULL;
                            dc4120 = $tmp4272;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4272));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4271));
                        }
                        {
                            $tmp4273 = a4192;
                            panda$collections$ImmutableArray* $tmp4276 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4276);
                            $tmp4275 = $tmp4276;
                            $tmp4274 = $tmp4275;
                            a4192 = $tmp4274;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4274));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4275));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4273));
                        }
                    }
                    $tmp4262 = -1;
                    goto $l4260;
                    $l4260:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4263));
                    decl4263 = NULL;
                    switch ($tmp4262) {
                        case -1: goto $l4277;
                        case 0: goto $l4268;
                    }
                    $l4277:;
                }
                }
                else {
                panda$core$Bit $tmp4278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp4278.value) {
                {
                    int $tmp4281;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4285 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4120, a4192);
                        $tmp4284 = $tmp4285;
                        $tmp4283 = $tmp4284;
                        decl4282 = $tmp4283;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4283));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4284));
                        if (((panda$core$Bit) { decl4282 == NULL }).value) {
                        {
                            $tmp4286 = NULL;
                            $returnValue4099 = $tmp4286;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4286));
                            $tmp4281 = 0;
                            goto $l4279;
                            $l4287:;
                            $tmp4094 = 8;
                            goto $l4092;
                            $l4288:;
                            return $returnValue4099;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4116, ((panda$core$Object*) decl4282));
                        {
                            $tmp4290 = dc4120;
                            $tmp4291 = NULL;
                            dc4120 = $tmp4291;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4291));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4290));
                        }
                        {
                            $tmp4292 = a4192;
                            panda$collections$ImmutableArray* $tmp4295 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4295);
                            $tmp4294 = $tmp4295;
                            $tmp4293 = $tmp4294;
                            a4192 = $tmp4293;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4293));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4294));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4292));
                        }
                    }
                    $tmp4281 = -1;
                    goto $l4279;
                    $l4279:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4282));
                    decl4282 = NULL;
                    switch ($tmp4281) {
                        case -1: goto $l4296;
                        case 0: goto $l4287;
                    }
                    $l4296:;
                }
                }
                else {
                panda$core$Bit $tmp4298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp4297 = $tmp4298.value;
                if ($tmp4297) goto $l4299;
                panda$core$Bit $tmp4300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp4297 = $tmp4300.value;
                $l4299:;
                panda$core$Bit $tmp4301 = { $tmp4297 };
                if ($tmp4301.value) {
                {
                    int $tmp4304;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4308 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4120, a4192);
                        $tmp4307 = $tmp4308;
                        $tmp4306 = $tmp4307;
                        decl4305 = $tmp4306;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4306));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4307));
                        if (((panda$core$Bit) { decl4305 == NULL }).value) {
                        {
                            $tmp4309 = NULL;
                            $returnValue4099 = $tmp4309;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4309));
                            $tmp4304 = 0;
                            goto $l4302;
                            $l4310:;
                            $tmp4094 = 9;
                            goto $l4092;
                            $l4311:;
                            return $returnValue4099;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4116, ((panda$core$Object*) decl4305));
                        {
                            $tmp4313 = dc4120;
                            $tmp4314 = NULL;
                            dc4120 = $tmp4314;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4314));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4313));
                        }
                        {
                            $tmp4315 = a4192;
                            panda$collections$ImmutableArray* $tmp4318 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4318);
                            $tmp4317 = $tmp4318;
                            $tmp4316 = $tmp4317;
                            a4192 = $tmp4316;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4316));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4317));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4315));
                        }
                    }
                    $tmp4304 = -1;
                    goto $l4302;
                    $l4302:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4305));
                    decl4305 = NULL;
                    switch ($tmp4304) {
                        case 0: goto $l4310;
                        case -1: goto $l4319;
                    }
                    $l4319:;
                }
                }
                else {
                panda$core$Bit $tmp4323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp4322 = $tmp4323.value;
                if ($tmp4322) goto $l4324;
                panda$core$Bit $tmp4325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp4322 = $tmp4325.value;
                $l4324:;
                panda$core$Bit $tmp4326 = { $tmp4322 };
                bool $tmp4321 = $tmp4326.value;
                if ($tmp4321) goto $l4327;
                panda$core$Bit $tmp4328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp4321 = $tmp4328.value;
                $l4327:;
                panda$core$Bit $tmp4329 = { $tmp4321 };
                bool $tmp4320 = $tmp4329.value;
                if ($tmp4320) goto $l4330;
                panda$core$Bit $tmp4331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp4320 = $tmp4331.value;
                $l4330:;
                panda$core$Bit $tmp4332 = { $tmp4320 };
                if ($tmp4332.value) {
                {
                    int $tmp4335;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp4339 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4120, a4192);
                        $tmp4338 = $tmp4339;
                        $tmp4337 = $tmp4338;
                        decl4336 = $tmp4337;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4337));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4338));
                        if (((panda$core$Bit) { decl4336 == NULL }).value) {
                        {
                            $tmp4340 = NULL;
                            $returnValue4099 = $tmp4340;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4340));
                            $tmp4335 = 0;
                            goto $l4333;
                            $l4341:;
                            $tmp4094 = 10;
                            goto $l4092;
                            $l4342:;
                            return $returnValue4099;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members4116, ((panda$core$Object*) decl4336));
                        {
                            $tmp4344 = dc4120;
                            $tmp4345 = NULL;
                            dc4120 = $tmp4345;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4345));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4344));
                        }
                        {
                            $tmp4346 = a4192;
                            panda$collections$ImmutableArray* $tmp4349 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp4349);
                            $tmp4348 = $tmp4349;
                            $tmp4347 = $tmp4348;
                            a4192 = $tmp4347;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4347));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4348));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4346));
                        }
                    }
                    $tmp4335 = -1;
                    goto $l4333;
                    $l4333:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl4336));
                    decl4336 = NULL;
                    switch ($tmp4335) {
                        case 0: goto $l4341;
                        case -1: goto $l4350;
                    }
                    $l4350:;
                }
                }
                else {
                panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2175_134200.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp4351.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4352, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4352, &$s4353);
                    goto $l4197;
                }
                }
                else {
                {
                    panda$core$String* $tmp4358 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next4198);
                    $tmp4357 = $tmp4358;
                    panda$core$String* $tmp4359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4356, $tmp4357);
                    $tmp4355 = $tmp4359;
                    panda$core$String* $tmp4361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4355, &$s4360);
                    $tmp4354 = $tmp4361;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next4198, $tmp4354);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4354));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4355));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4357));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp4362 = NULL;
                    $returnValue4099 = $tmp4362;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4362));
                    $tmp4094 = 11;
                    goto $l4092;
                    $l4363:;
                    return $returnValue4099;
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
        $l4197:;
        org$pandalanguage$pandac$ASTNode* $tmp4367 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4368, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp4370 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4103.value));
        $tmp4369 = $tmp4370;
        panda$collections$ImmutableArray* $tmp4372 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4116);
        $tmp4371 = $tmp4372;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4367, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4095.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp4368, $tmp4369, NULL, NULL, $tmp4371);
        $tmp4366 = $tmp4367;
        $tmp4365 = $tmp4366;
        $returnValue4099 = $tmp4365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4369));
        $tmp4094 = 12;
        goto $l4092;
        $l4373:;
        return $returnValue4099;
    }
    $l4092:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4116));
    members4116 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4120));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4192));
    a4192 = NULL;
    switch ($tmp4094) {
        case 5: goto $l4234;
        case 2: goto $l4114;
        case 3: goto $l4187;
        case 8: goto $l4288;
        case 1: goto $l4108;
        case 7: goto $l4269;
        case 6: goto $l4250;
        case 12: goto $l4373;
        case 0: goto $l4101;
        case 11: goto $l4363;
        case 4: goto $l4213;
        case 9: goto $l4311;
        case 10: goto $l4342;
    }
    $l4375:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start4379;
    org$pandalanguage$pandac$ASTNode* dc4381 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4383;
    org$pandalanguage$pandac$ASTNode* $tmp4384;
    org$pandalanguage$pandac$ASTNode* $tmp4385;
    org$pandalanguage$pandac$ASTNode* $returnValue4387;
    org$pandalanguage$pandac$ASTNode* $tmp4388;
    org$pandalanguage$pandac$ASTNode* $tmp4391;
    org$pandalanguage$pandac$ASTNode* $tmp4392;
    panda$collections$ImmutableArray* a4393 = NULL;
    panda$collections$ImmutableArray* $tmp4394;
    panda$collections$ImmutableArray* $tmp4395;
    org$pandalanguage$pandac$ASTNode* $tmp4397;
    org$pandalanguage$pandac$parser$Token$Kind $match$2261_94400;
    org$pandalanguage$pandac$ASTNode* $tmp4403;
    org$pandalanguage$pandac$ASTNode* $tmp4404;
    org$pandalanguage$pandac$ASTNode* $tmp4409;
    org$pandalanguage$pandac$ASTNode* $tmp4410;
    org$pandalanguage$pandac$ASTNode* $tmp4415;
    org$pandalanguage$pandac$ASTNode* $tmp4416;
    org$pandalanguage$pandac$ASTNode* $tmp4425;
    org$pandalanguage$pandac$ASTNode* $tmp4426;
    org$pandalanguage$pandac$ASTNode* $tmp4431;
    org$pandalanguage$pandac$ASTNode* $tmp4432;
    org$pandalanguage$pandac$ASTNode* $tmp4449;
    org$pandalanguage$pandac$ASTNode* $tmp4450;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4454;
    org$pandalanguage$pandac$ASTNode* $tmp4456;
    int $tmp4378;
    {
        org$pandalanguage$pandac$parser$Token $tmp4380 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start4379 = $tmp4380;
        memset(&dc4381, 0, sizeof(dc4381));
        panda$core$Bit $tmp4382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start4379.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp4382.value) {
        {
            {
                $tmp4383 = dc4381;
                org$pandalanguage$pandac$ASTNode* $tmp4386 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4385 = $tmp4386;
                $tmp4384 = $tmp4385;
                dc4381 = $tmp4384;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4384));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4385));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4383));
            }
            if (((panda$core$Bit) { dc4381 == NULL }).value) {
            {
                $tmp4388 = NULL;
                $returnValue4387 = $tmp4388;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4388));
                $tmp4378 = 0;
                goto $l4376;
                $l4389:;
                return $returnValue4387;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4391 = dc4381;
                $tmp4392 = NULL;
                dc4381 = $tmp4392;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4391));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp4396 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp4395 = $tmp4396;
        $tmp4394 = $tmp4395;
        a4393 = $tmp4394;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4395));
        if (((panda$core$Bit) { a4393 == NULL }).value) {
        {
            $tmp4397 = NULL;
            $returnValue4387 = $tmp4397;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4397));
            $tmp4378 = 1;
            goto $l4376;
            $l4398:;
            return $returnValue4387;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp4401 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2261_94400 = $tmp4401.kind;
            panda$core$Bit $tmp4402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp4402.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4405 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4381, a4393);
                $tmp4404 = $tmp4405;
                $tmp4403 = $tmp4404;
                $returnValue4387 = $tmp4403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4404));
                $tmp4378 = 2;
                goto $l4376;
                $l4406:;
                return $returnValue4387;
            }
            }
            else {
            panda$core$Bit $tmp4408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp4408.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4411 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4381, a4393);
                $tmp4410 = $tmp4411;
                $tmp4409 = $tmp4410;
                $returnValue4387 = $tmp4409;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4409));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4410));
                $tmp4378 = 3;
                goto $l4376;
                $l4412:;
                return $returnValue4387;
            }
            }
            else {
            panda$core$Bit $tmp4414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp4414.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4417 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4381, a4393);
                $tmp4416 = $tmp4417;
                $tmp4415 = $tmp4416;
                $returnValue4387 = $tmp4415;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4415));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4416));
                $tmp4378 = 4;
                goto $l4376;
                $l4418:;
                return $returnValue4387;
            }
            }
            else {
            panda$core$Bit $tmp4421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp4420 = $tmp4421.value;
            if ($tmp4420) goto $l4422;
            panda$core$Bit $tmp4423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp4420 = $tmp4423.value;
            $l4422:;
            panda$core$Bit $tmp4424 = { $tmp4420 };
            if ($tmp4424.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4427 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4381, a4393);
                $tmp4426 = $tmp4427;
                $tmp4425 = $tmp4426;
                $returnValue4387 = $tmp4425;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4426));
                $tmp4378 = 5;
                goto $l4376;
                $l4428:;
                return $returnValue4387;
            }
            }
            else {
            panda$core$Bit $tmp4430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp4430.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4433 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4381, a4393);
                $tmp4432 = $tmp4433;
                $tmp4431 = $tmp4432;
                $returnValue4387 = $tmp4431;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4432));
                $tmp4378 = 6;
                goto $l4376;
                $l4434:;
                return $returnValue4387;
            }
            }
            else {
            panda$core$Bit $tmp4439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp4438 = $tmp4439.value;
            if ($tmp4438) goto $l4440;
            panda$core$Bit $tmp4441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp4438 = $tmp4441.value;
            $l4440:;
            panda$core$Bit $tmp4442 = { $tmp4438 };
            bool $tmp4437 = $tmp4442.value;
            if ($tmp4437) goto $l4443;
            panda$core$Bit $tmp4444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp4437 = $tmp4444.value;
            $l4443:;
            panda$core$Bit $tmp4445 = { $tmp4437 };
            bool $tmp4436 = $tmp4445.value;
            if ($tmp4436) goto $l4446;
            panda$core$Bit $tmp4447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2261_94400.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp4436 = $tmp4447.value;
            $l4446:;
            panda$core$Bit $tmp4448 = { $tmp4436 };
            if ($tmp4448.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4451 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc4381, a4393);
                $tmp4450 = $tmp4451;
                $tmp4449 = $tmp4450;
                $returnValue4387 = $tmp4449;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4449));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4450));
                $tmp4378 = 7;
                goto $l4376;
                $l4452:;
                return $returnValue4387;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4454, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4454, &$s4455);
                $tmp4456 = NULL;
                $returnValue4387 = $tmp4456;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4456));
                $tmp4378 = 8;
                goto $l4376;
                $l4457:;
                return $returnValue4387;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp4378 = -1;
    goto $l4376;
    $l4376:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc4381));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a4393));
    a4393 = NULL;
    switch ($tmp4378) {
        case 3: goto $l4412;
        case 1: goto $l4398;
        case -1: goto $l4459;
        case 7: goto $l4452;
        case 8: goto $l4457;
        case 5: goto $l4428;
        case 6: goto $l4434;
        case 4: goto $l4418;
        case 2: goto $l4406;
        case 0: goto $l4389;
    }
    $l4459:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4463;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4464;
    org$pandalanguage$pandac$ASTNode* $returnValue4467;
    org$pandalanguage$pandac$ASTNode* $tmp4468;
    org$pandalanguage$pandac$parser$Token$nullable name4471;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4472;
    org$pandalanguage$pandac$ASTNode* $tmp4475;
    panda$collections$ImmutableArray* generics4478 = NULL;
    panda$collections$ImmutableArray* $tmp4481;
    panda$collections$ImmutableArray* $tmp4482;
    panda$collections$ImmutableArray* $tmp4483;
    org$pandalanguage$pandac$ASTNode* $tmp4485;
    panda$collections$ImmutableArray* $tmp4488;
    panda$collections$ImmutableArray* $tmp4489;
    panda$collections$ImmutableArray* stypes4490 = NULL;
    panda$collections$ImmutableArray* $tmp4493;
    panda$collections$ImmutableArray* $tmp4494;
    panda$collections$ImmutableArray* $tmp4495;
    org$pandalanguage$pandac$ASTNode* $tmp4497;
    panda$collections$ImmutableArray* $tmp4500;
    panda$collections$ImmutableArray* $tmp4501;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4502;
    org$pandalanguage$pandac$ASTNode* $tmp4505;
    panda$collections$Array* members4508 = NULL;
    panda$collections$Array* $tmp4509;
    panda$collections$Array* $tmp4510;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4515;
    org$pandalanguage$pandac$ASTNode* member4520 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4521;
    org$pandalanguage$pandac$ASTNode* $tmp4522;
    org$pandalanguage$pandac$ASTNode* $tmp4524;
    org$pandalanguage$pandac$ASTNode* $tmp4529;
    org$pandalanguage$pandac$ASTNode* $tmp4530;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4532;
    panda$core$String* $tmp4533;
    panda$collections$ImmutableArray* $tmp4535;
    int $tmp4462;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4464, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4466 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4464, &$s4465);
        start4463 = $tmp4466;
        if (((panda$core$Bit) { !start4463.nonnull }).value) {
        {
            $tmp4468 = NULL;
            $returnValue4467 = $tmp4468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4468));
            $tmp4462 = 0;
            goto $l4460;
            $l4469:;
            return $returnValue4467;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4472, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4474 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4472, &$s4473);
        name4471 = $tmp4474;
        if (((panda$core$Bit) { !name4471.nonnull }).value) {
        {
            $tmp4475 = NULL;
            $returnValue4467 = $tmp4475;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4475));
            $tmp4462 = 1;
            goto $l4460;
            $l4476:;
            return $returnValue4467;
        }
        }
        memset(&generics4478, 0, sizeof(generics4478));
        org$pandalanguage$pandac$parser$Token $tmp4479 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4479.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4480.value) {
        {
            {
                $tmp4481 = generics4478;
                panda$collections$ImmutableArray* $tmp4484 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4483 = $tmp4484;
                $tmp4482 = $tmp4483;
                generics4478 = $tmp4482;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4482));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4483));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4481));
            }
            if (((panda$core$Bit) { generics4478 == NULL }).value) {
            {
                $tmp4485 = NULL;
                $returnValue4467 = $tmp4485;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4485));
                $tmp4462 = 2;
                goto $l4460;
                $l4486:;
                return $returnValue4467;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4488 = generics4478;
                $tmp4489 = NULL;
                generics4478 = $tmp4489;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4488));
            }
        }
        }
        memset(&stypes4490, 0, sizeof(stypes4490));
        org$pandalanguage$pandac$parser$Token $tmp4491 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4491.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4492.value) {
        {
            {
                $tmp4493 = stypes4490;
                panda$collections$ImmutableArray* $tmp4496 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4495 = $tmp4496;
                $tmp4494 = $tmp4495;
                stypes4490 = $tmp4494;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4494));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4493));
            }
            if (((panda$core$Bit) { stypes4490 == NULL }).value) {
            {
                $tmp4497 = NULL;
                $returnValue4467 = $tmp4497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
                $tmp4462 = 3;
                goto $l4460;
                $l4498:;
                return $returnValue4467;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4500 = stypes4490;
                $tmp4501 = NULL;
                stypes4490 = $tmp4501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4500));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4502, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4504 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4502, &$s4503);
        if (((panda$core$Bit) { !$tmp4504.nonnull }).value) {
        {
            $tmp4505 = NULL;
            $returnValue4467 = $tmp4505;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4505));
            $tmp4462 = 4;
            goto $l4460;
            $l4506:;
            return $returnValue4467;
        }
        }
        panda$collections$Array* $tmp4511 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4511);
        $tmp4510 = $tmp4511;
        $tmp4509 = $tmp4510;
        members4508 = $tmp4509;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4509));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4510));
        $l4512:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4515, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4516 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4515);
        bool $tmp4514 = ((panda$core$Bit) { !$tmp4516.nonnull }).value;
        if (!$tmp4514) goto $l4513;
        {
            int $tmp4519;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4523 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4522 = $tmp4523;
                $tmp4521 = $tmp4522;
                member4520 = $tmp4521;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4521));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4522));
                if (((panda$core$Bit) { member4520 == NULL }).value) {
                {
                    $tmp4524 = NULL;
                    $returnValue4467 = $tmp4524;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4524));
                    $tmp4519 = 0;
                    goto $l4517;
                    $l4525:;
                    $tmp4462 = 5;
                    goto $l4460;
                    $l4526:;
                    return $returnValue4467;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4508, ((panda$core$Object*) member4520));
            }
            $tmp4519 = -1;
            goto $l4517;
            $l4517:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4520));
            member4520 = NULL;
            switch ($tmp4519) {
                case -1: goto $l4528;
                case 0: goto $l4525;
            }
            $l4528:;
        }
        goto $l4512;
        $l4513:;
        org$pandalanguage$pandac$ASTNode* $tmp4531 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4532, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4534 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4471.value));
        $tmp4533 = $tmp4534;
        panda$collections$ImmutableArray* $tmp4536 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4508);
        $tmp4535 = $tmp4536;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4531, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4463.value).position, p_doccomment, p_annotations, $tmp4532, $tmp4533, generics4478, stypes4490, $tmp4535);
        $tmp4530 = $tmp4531;
        $tmp4529 = $tmp4530;
        $returnValue4467 = $tmp4529;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4533));
        $tmp4462 = 6;
        goto $l4460;
        $l4537:;
        return $returnValue4467;
    }
    $l4460:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4490));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4508));
    members4508 = NULL;
    switch ($tmp4462) {
        case 5: goto $l4526;
        case 2: goto $l4486;
        case 6: goto $l4537;
        case 3: goto $l4498;
        case 1: goto $l4476;
        case 0: goto $l4469;
        case 4: goto $l4506;
    }
    $l4539:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4543;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4544;
    org$pandalanguage$pandac$ASTNode* $returnValue4547;
    org$pandalanguage$pandac$ASTNode* $tmp4548;
    org$pandalanguage$pandac$parser$Token$nullable name4551;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4552;
    org$pandalanguage$pandac$ASTNode* $tmp4555;
    panda$collections$ImmutableArray* generics4558 = NULL;
    panda$collections$ImmutableArray* $tmp4561;
    panda$collections$ImmutableArray* $tmp4562;
    panda$collections$ImmutableArray* $tmp4563;
    org$pandalanguage$pandac$ASTNode* $tmp4565;
    panda$collections$ImmutableArray* $tmp4568;
    panda$collections$ImmutableArray* $tmp4569;
    panda$collections$ImmutableArray* $tmp4570;
    panda$collections$Array* intfs4572 = NULL;
    panda$collections$Array* $tmp4573;
    panda$collections$Array* $tmp4574;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4576;
    org$pandalanguage$pandac$ASTNode* t4581 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4582;
    org$pandalanguage$pandac$ASTNode* $tmp4583;
    org$pandalanguage$pandac$ASTNode* $tmp4585;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4592;
    org$pandalanguage$pandac$ASTNode* $tmp4594;
    org$pandalanguage$pandac$ASTNode* $tmp4595;
    org$pandalanguage$pandac$ASTNode* $tmp4596;
    org$pandalanguage$pandac$ASTNode* $tmp4598;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4603;
    org$pandalanguage$pandac$ASTNode* $tmp4606;
    panda$collections$Array* members4609 = NULL;
    panda$collections$Array* $tmp4610;
    panda$collections$Array* $tmp4611;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4616;
    org$pandalanguage$pandac$ASTNode* member4621 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4622;
    org$pandalanguage$pandac$ASTNode* $tmp4623;
    org$pandalanguage$pandac$ASTNode* $tmp4625;
    org$pandalanguage$pandac$ASTNode* $tmp4630;
    org$pandalanguage$pandac$ASTNode* $tmp4631;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4633;
    panda$core$String* $tmp4634;
    panda$collections$ImmutableArray* $tmp4636;
    panda$collections$ImmutableArray* $tmp4638;
    int $tmp4542;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4544, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4546 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4544, &$s4545);
        start4543 = $tmp4546;
        if (((panda$core$Bit) { !start4543.nonnull }).value) {
        {
            $tmp4548 = NULL;
            $returnValue4547 = $tmp4548;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4548));
            $tmp4542 = 0;
            goto $l4540;
            $l4549:;
            return $returnValue4547;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4552, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4554 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4552, &$s4553);
        name4551 = $tmp4554;
        if (((panda$core$Bit) { !name4551.nonnull }).value) {
        {
            $tmp4555 = NULL;
            $returnValue4547 = $tmp4555;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4555));
            $tmp4542 = 1;
            goto $l4540;
            $l4556:;
            return $returnValue4547;
        }
        }
        memset(&generics4558, 0, sizeof(generics4558));
        org$pandalanguage$pandac$parser$Token $tmp4559 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4559.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4560.value) {
        {
            {
                $tmp4561 = generics4558;
                panda$collections$ImmutableArray* $tmp4564 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4563 = $tmp4564;
                $tmp4562 = $tmp4563;
                generics4558 = $tmp4562;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4562));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4563));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4561));
            }
            if (((panda$core$Bit) { generics4558 == NULL }).value) {
            {
                $tmp4565 = NULL;
                $returnValue4547 = $tmp4565;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4565));
                $tmp4542 = 2;
                goto $l4540;
                $l4566:;
                return $returnValue4547;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4568 = generics4558;
                panda$collections$ImmutableArray* $tmp4571 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4571);
                $tmp4570 = $tmp4571;
                $tmp4569 = $tmp4570;
                generics4558 = $tmp4569;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4570));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4568));
            }
        }
        }
        panda$collections$Array* $tmp4575 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4575);
        $tmp4574 = $tmp4575;
        $tmp4573 = $tmp4574;
        intfs4572 = $tmp4573;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4573));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4574));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4576, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4577 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4576);
        if (((panda$core$Bit) { $tmp4577.nonnull }).value) {
        {
            int $tmp4580;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4584 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4583 = $tmp4584;
                $tmp4582 = $tmp4583;
                t4581 = $tmp4582;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4583));
                if (((panda$core$Bit) { t4581 == NULL }).value) {
                {
                    $tmp4585 = NULL;
                    $returnValue4547 = $tmp4585;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4585));
                    $tmp4580 = 0;
                    goto $l4578;
                    $l4586:;
                    $tmp4542 = 3;
                    goto $l4540;
                    $l4587:;
                    return $returnValue4547;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4572, ((panda$core$Object*) t4581));
                $l4589:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4592, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4593 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4592);
                bool $tmp4591 = ((panda$core$Bit) { $tmp4593.nonnull }).value;
                if (!$tmp4591) goto $l4590;
                {
                    {
                        $tmp4594 = t4581;
                        org$pandalanguage$pandac$ASTNode* $tmp4597 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4596 = $tmp4597;
                        $tmp4595 = $tmp4596;
                        t4581 = $tmp4595;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4595));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4596));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4594));
                    }
                    if (((panda$core$Bit) { t4581 == NULL }).value) {
                    {
                        $tmp4598 = NULL;
                        $returnValue4547 = $tmp4598;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4598));
                        $tmp4580 = 1;
                        goto $l4578;
                        $l4599:;
                        $tmp4542 = 4;
                        goto $l4540;
                        $l4600:;
                        return $returnValue4547;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4572, ((panda$core$Object*) t4581));
                }
                goto $l4589;
                $l4590:;
            }
            $tmp4580 = -1;
            goto $l4578;
            $l4578:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4581));
            t4581 = NULL;
            switch ($tmp4580) {
                case -1: goto $l4602;
                case 0: goto $l4586;
                case 1: goto $l4599;
            }
            $l4602:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4603, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4605 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4603, &$s4604);
        if (((panda$core$Bit) { !$tmp4605.nonnull }).value) {
        {
            $tmp4606 = NULL;
            $returnValue4547 = $tmp4606;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4606));
            $tmp4542 = 5;
            goto $l4540;
            $l4607:;
            return $returnValue4547;
        }
        }
        panda$collections$Array* $tmp4612 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4612);
        $tmp4611 = $tmp4612;
        $tmp4610 = $tmp4611;
        members4609 = $tmp4610;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4610));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4611));
        $l4613:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4616, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4617 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4616);
        bool $tmp4615 = ((panda$core$Bit) { !$tmp4617.nonnull }).value;
        if (!$tmp4615) goto $l4614;
        {
            int $tmp4620;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4624 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4623 = $tmp4624;
                $tmp4622 = $tmp4623;
                member4621 = $tmp4622;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4623));
                if (((panda$core$Bit) { member4621 == NULL }).value) {
                {
                    $tmp4625 = NULL;
                    $returnValue4547 = $tmp4625;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4625));
                    $tmp4620 = 0;
                    goto $l4618;
                    $l4626:;
                    $tmp4542 = 6;
                    goto $l4540;
                    $l4627:;
                    return $returnValue4547;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4609, ((panda$core$Object*) member4621));
            }
            $tmp4620 = -1;
            goto $l4618;
            $l4618:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4621));
            member4621 = NULL;
            switch ($tmp4620) {
                case 0: goto $l4626;
                case -1: goto $l4629;
            }
            $l4629:;
        }
        goto $l4613;
        $l4614:;
        org$pandalanguage$pandac$ASTNode* $tmp4632 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4633, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4635 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4551.value));
        $tmp4634 = $tmp4635;
        panda$collections$ImmutableArray* $tmp4637 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4572);
        $tmp4636 = $tmp4637;
        panda$collections$ImmutableArray* $tmp4639 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4609);
        $tmp4638 = $tmp4639;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4632, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4543.value).position, p_doccomment, p_annotations, $tmp4633, $tmp4634, generics4558, $tmp4636, $tmp4638);
        $tmp4631 = $tmp4632;
        $tmp4630 = $tmp4631;
        $returnValue4547 = $tmp4630;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4634));
        $tmp4542 = 7;
        goto $l4540;
        $l4640:;
        return $returnValue4547;
    }
    $l4540:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4558));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4572));
    intfs4572 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4609));
    members4609 = NULL;
    switch ($tmp4542) {
        case 4: goto $l4600;
        case 5: goto $l4607;
        case 1: goto $l4556;
        case 2: goto $l4566;
        case 6: goto $l4627;
        case 0: goto $l4549;
        case 7: goto $l4640;
        case 3: goto $l4587;
    }
    $l4642:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2385_94643;
    org$pandalanguage$pandac$ASTNode* $returnValue4646;
    org$pandalanguage$pandac$ASTNode* $tmp4647;
    org$pandalanguage$pandac$ASTNode* $tmp4648;
    org$pandalanguage$pandac$ASTNode* $tmp4652;
    org$pandalanguage$pandac$ASTNode* $tmp4653;
    org$pandalanguage$pandac$ASTNode* $tmp4681;
    org$pandalanguage$pandac$ASTNode* $tmp4682;
    org$pandalanguage$pandac$ASTNode* $tmp4685;
    org$pandalanguage$pandac$ASTNode* $tmp4686;
    {
        org$pandalanguage$pandac$parser$Token $tmp4644 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2385_94643 = $tmp4644.kind;
        panda$core$Bit $tmp4645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4645.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4649 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4648 = $tmp4649;
            $tmp4647 = $tmp4648;
            $returnValue4646 = $tmp4647;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4647));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4648));
            return $returnValue4646;
        }
        }
        else {
        panda$core$Bit $tmp4651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4651.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4654 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4653 = $tmp4654;
            $tmp4652 = $tmp4653;
            $returnValue4646 = $tmp4652;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4652));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4653));
            return $returnValue4646;
        }
        }
        else {
        panda$core$Bit $tmp4662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp4661 = $tmp4662.value;
        if ($tmp4661) goto $l4663;
        panda$core$Bit $tmp4664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp4661 = $tmp4664.value;
        $l4663:;
        panda$core$Bit $tmp4665 = { $tmp4661 };
        bool $tmp4660 = $tmp4665.value;
        if ($tmp4660) goto $l4666;
        panda$core$Bit $tmp4667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp4660 = $tmp4667.value;
        $l4666:;
        panda$core$Bit $tmp4668 = { $tmp4660 };
        bool $tmp4659 = $tmp4668.value;
        if ($tmp4659) goto $l4669;
        panda$core$Bit $tmp4670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp4659 = $tmp4670.value;
        $l4669:;
        panda$core$Bit $tmp4671 = { $tmp4659 };
        bool $tmp4658 = $tmp4671.value;
        if ($tmp4658) goto $l4672;
        panda$core$Bit $tmp4673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp4658 = $tmp4673.value;
        $l4672:;
        panda$core$Bit $tmp4674 = { $tmp4658 };
        bool $tmp4657 = $tmp4674.value;
        if ($tmp4657) goto $l4675;
        panda$core$Bit $tmp4676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp4657 = $tmp4676.value;
        $l4675:;
        panda$core$Bit $tmp4677 = { $tmp4657 };
        bool $tmp4656 = $tmp4677.value;
        if ($tmp4656) goto $l4678;
        panda$core$Bit $tmp4679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2385_94643.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp4656 = $tmp4679.value;
        $l4678:;
        panda$core$Bit $tmp4680 = { $tmp4656 };
        if ($tmp4680.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4683 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4682 = $tmp4683;
            $tmp4681 = $tmp4682;
            $returnValue4646 = $tmp4681;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4681));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4682));
            return $returnValue4646;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4687 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4686 = $tmp4687;
            $tmp4685 = $tmp4686;
            $returnValue4646 = $tmp4685;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4685));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4686));
            return $returnValue4646;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4692 = NULL;
    panda$collections$Array* $tmp4693;
    panda$collections$Array* $tmp4694;
    org$pandalanguage$pandac$ASTNode* entry4704 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4705;
    org$pandalanguage$pandac$ASTNode* $tmp4706;
    org$pandalanguage$pandac$ASTNode* $returnValue4708;
    org$pandalanguage$pandac$ASTNode* $tmp4709;
    org$pandalanguage$pandac$ASTNode* $tmp4715;
    org$pandalanguage$pandac$ASTNode* $tmp4716;
    panda$collections$ImmutableArray* $tmp4718;
    int $tmp4691;
    {
        panda$collections$Array* $tmp4695 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4695);
        $tmp4694 = $tmp4695;
        $tmp4693 = $tmp4694;
        entries4692 = $tmp4693;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4694));
        $l4696:;
        org$pandalanguage$pandac$parser$Token $tmp4699 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4700 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4699.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4698 = $tmp4700.value;
        if (!$tmp4698) goto $l4697;
        {
            int $tmp4703;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4707 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4706 = $tmp4707;
                $tmp4705 = $tmp4706;
                entry4704 = $tmp4705;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4706));
                if (((panda$core$Bit) { entry4704 == NULL }).value) {
                {
                    $tmp4709 = NULL;
                    $returnValue4708 = $tmp4709;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4709));
                    $tmp4703 = 0;
                    goto $l4701;
                    $l4710:;
                    $tmp4691 = 0;
                    goto $l4689;
                    $l4711:;
                    return $returnValue4708;
                }
                }
                panda$core$Bit $tmp4713 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4713.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4692, ((panda$core$Object*) entry4704));
            }
            $tmp4703 = -1;
            goto $l4701;
            $l4701:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4704));
            entry4704 = NULL;
            switch ($tmp4703) {
                case 0: goto $l4710;
                case -1: goto $l4714;
            }
            $l4714:;
        }
        goto $l4696;
        $l4697:;
        org$pandalanguage$pandac$ASTNode* $tmp4717 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4719 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4692);
        $tmp4718 = $tmp4719;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4717, ((panda$core$Int64) { 17 }), $tmp4718);
        $tmp4716 = $tmp4717;
        $tmp4715 = $tmp4716;
        $returnValue4708 = $tmp4715;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4715));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4716));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4718));
        $tmp4691 = 1;
        goto $l4689;
        $l4720:;
        return $returnValue4708;
    }
    $l4689:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4692));
    entries4692 = NULL;
    switch ($tmp4691) {
        case 1: goto $l4720;
        case 0: goto $l4711;
    }
    $l4722:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4725;
    {
    }
    $tmp4725 = -1;
    goto $l4723;
    $l4723:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4725) {
        case -1: goto $l4726;
    }
    $l4726:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

