#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "panda/io/File.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/core/Int64.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/UInt64.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Panda.h"
#include "panda/core/Real64.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn57)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef panda$core$Object* (*$fn122)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn176)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn269)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn378)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);

static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp1 = (org$pandalanguage$pandac$parser$Lexer*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class;
    $tmp1->refCount.value = 1;
    org$pandalanguage$pandac$parser$Lexer$init($tmp1);
    self->lexer = $tmp1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp3 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) malloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp3->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp3);
    self->pushbackBuffer = $tmp3;
    panda$collections$Stack* $tmp5 = (panda$collections$Stack*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp5->refCount.value = 1;
    panda$collections$Stack$init($tmp5);
    self->commaSeparatedExpressionContext = $tmp5;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) malloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp7->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    self->speculativeBuffer = $tmp7;
    self->errors = p_errors;
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { false }))));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    self->path = p_path;
    self->source = p_source;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx11;
    org$pandalanguage$pandac$parser$Token result14;
    org$pandalanguage$pandac$parser$Token result16;
    panda$core$Int64 $tmp9 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp9, ((panda$core$Int64) { 0 }));
    if ($tmp10.value) {
    {
        panda$core$Int64 $tmp12 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp13 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp12, ((panda$core$Int64) { 1 }));
        idx11 = $tmp13;
        org$pandalanguage$pandac$parser$Token $tmp15 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx11);
        result14 = $tmp15;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx11);
        return result14;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp17 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result16 = $tmp17;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result16);
    }
    }
    return result16;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result20;
    org$pandalanguage$pandac$parser$Token next24;
    panda$core$Char8 $tmp27;
    org$pandalanguage$pandac$parser$Token next31;
    $l18:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp21 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result20 = $tmp21;
        switch (result20.kind.value) {
            case 12:
            {
                goto $l18;
            }
            break;
            case 8:
            {
                $l22:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp25 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next24 = $tmp25;
                    switch (next24.kind.value) {
                        case 12:
                        {
                            panda$core$String* $tmp26 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next24);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp27, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp28 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp26, $tmp27);
                            if ($tmp28.value) {
                            {
                                goto $l18;
                            }
                            }
                        }
                        break;
                        case 0:
                        {
                            return next24;
                        }
                        break;
                    }
                }
                }
                $l23:;
            }
            break;
            case 9:
            {
                $l29:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp32 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next31 = $tmp32;
                    switch (next31.kind.value) {
                        case 10:
                        {
                            goto $l18;
                        }
                        break;
                        case 0:
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result20, &$s33);
                            return next31;
                        }
                        break;
                    }
                }
                }
                $l30:;
            }
            break;
            default:
            {
                return result20;
            }
        }
    }
    }
    $l19:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp34 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp34, ((panda$core$Int64) { 0 }));
    if ($tmp35.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp36 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp36);
    }
    }
    panda$core$Int64 $tmp37 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp38 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp37, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp39 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp38);
    return $tmp39;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind) {
    org$pandalanguage$pandac$parser$Token result40;
    org$pandalanguage$pandac$parser$Token $tmp41 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result40 = $tmp41;
    panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result40.kind, p_kind);
    if ($tmp42.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result40, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result40);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result43;
    org$pandalanguage$pandac$parser$Token $tmp44 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result43 = $tmp44;
    panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result43.kind, p_kind);
    if ($tmp45.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result43, true });
    }
    }
    panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s46, p_expected);
    panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, &$s48);
    panda$core$String* $tmp50 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result43);
    panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, $tmp50);
    panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp51, &$s52);
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result43, $tmp53);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp54 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp54.value) {
    {
        ITable* $tmp55 = self->errors->$class->itable;
        while ($tmp55->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp55 = $tmp55->next;
        }
        $fn57 $tmp56 = $tmp55->methods[0];
        $tmp56(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp58 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp58.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp59;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp60 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp61 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp60, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp59, $tmp61, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp63 = $tmp59.start.value;
    panda$core$Int64 i62 = { $tmp63 };
    int64_t $tmp65 = $tmp59.end.value;
    int64_t $tmp66 = $tmp59.step.value;
    bool $tmp67 = $tmp59.inclusive.value;
    bool $tmp74 = $tmp66 > 0;
    if ($tmp74) goto $l72; else goto $l73;
    $l72:;
    if ($tmp67) goto $l75; else goto $l76;
    $l75:;
    if ($tmp63 <= $tmp65) goto $l68; else goto $l70;
    $l76:;
    if ($tmp63 < $tmp65) goto $l68; else goto $l70;
    $l73:;
    if ($tmp67) goto $l77; else goto $l78;
    $l77:;
    if ($tmp63 >= $tmp65) goto $l68; else goto $l70;
    $l78:;
    if ($tmp63 > $tmp65) goto $l68; else goto $l70;
    $l68:;
    {
        org$pandalanguage$pandac$parser$Token $tmp80 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i62);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp80);
    }
    $l71:;
    if ($tmp74) goto $l82; else goto $l83;
    $l82:;
    int64_t $tmp84 = $tmp65 - i62.value;
    if ($tmp67) goto $l85; else goto $l86;
    $l85:;
    if ($tmp84 >= $tmp66) goto $l81; else goto $l70;
    $l86:;
    if ($tmp84 > $tmp66) goto $l81; else goto $l70;
    $l83:;
    int64_t $tmp88 = i62.value - $tmp65;
    if ($tmp67) goto $l89; else goto $l90;
    $l89:;
    if ($tmp88 >= -$tmp66) goto $l81; else goto $l70;
    $l90:;
    if ($tmp88 > -$tmp66) goto $l81; else goto $l70;
    $l81:;
    i62.value += $tmp66;
    goto $l68;
    $l70:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp92;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp92, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp93 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp92);
    return $tmp93;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children94;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp95 = (panda$collections$Array*) malloc(40);
    $tmp95->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp95->refCount.value = 1;
    panda$collections$Array$init($tmp95);
    children94 = $tmp95;
    panda$collections$Array$add$panda$collections$Array$T(children94, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children94, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp97 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp97->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp97->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp97, ((panda$core$Int64) { 103 }), p_string->position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 51 }))), ((panda$collections$ListView*) children94));
    return $tmp97;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result99;
    org$pandalanguage$pandac$parser$Token token104;
    panda$core$String* str106;
    panda$core$Char8 $tmp108;
    org$pandalanguage$pandac$parser$Token escape112;
    panda$core$String* escapeText116;
    panda$core$Char8 c118;
    panda$core$Char8 $match$176_21124;
    panda$core$Char8 $tmp125;
    panda$core$Char8 $tmp127;
    panda$core$Char8 $tmp128;
    panda$core$Char8 $tmp130;
    panda$core$Char8 $tmp131;
    panda$core$Char8 $tmp133;
    panda$core$Char8 $tmp134;
    panda$core$Char8 $tmp136;
    panda$core$Char8 $tmp137;
    panda$core$Char8 $tmp139;
    panda$core$Char8 $tmp140;
    panda$core$Char8 $tmp142;
    panda$core$Char8 $tmp143;
    panda$core$Char8 $tmp145;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp147;
    panda$core$MutableString* $tmp100 = (panda$core$MutableString*) malloc(48);
    $tmp100->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp100->refCount.value = 1;
    panda$core$MutableString$init($tmp100);
    result99 = $tmp100;
    $l102:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp105 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token104 = $tmp105;
        switch (token104.kind.value) {
            case 12:
            {
                panda$core$String* $tmp107 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token104);
                str106 = $tmp107;
                panda$core$Char8$init$panda$core$UInt8(&$tmp108, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp109 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str106, $tmp108);
                if ($tmp109.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token104, &$s110);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result99, str106);
            }
            break;
            case 0:
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token104, &$s111);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp113 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape112 = $tmp113;
                panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape112.kind, ((panda$core$Int64) { 0 }));
                if ($tmp114.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token104, &$s115);
                    return NULL;
                }
                }
                panda$core$String* $tmp117 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape112);
                escapeText116 = $tmp117;
                panda$collections$ListView* $tmp119 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText116);
                ITable* $tmp120 = $tmp119->$class->itable;
                while ($tmp120->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp120 = $tmp120->next;
                }
                $fn122 $tmp121 = $tmp120->methods[0];
                panda$core$Object* $tmp123 = $tmp121($tmp119, ((panda$core$Int64) { 0 }));
                c118 = ((panda$core$Char8$wrapper*) $tmp123)->value;
                {
                    $match$176_21124 = c118;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp125, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp126 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21124, $tmp125);
                    if ($tmp126.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp127, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result99, $tmp127);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp128, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp129 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21124, $tmp128);
                    if ($tmp129.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp130, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result99, $tmp130);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp131, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp132 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21124, $tmp131);
                    if ($tmp132.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp133, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result99, $tmp133);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp134, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp135 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21124, $tmp134);
                    if ($tmp135.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp136, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result99, $tmp136);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp137, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp138 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21124, $tmp137);
                    if ($tmp138.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp139, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result99, $tmp139);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp140, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp141 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21124, $tmp140);
                    if ($tmp141.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result99, $tmp142);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp143, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp144 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21124, $tmp143);
                    if ($tmp144.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp145, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result99, $tmp145);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token104, &$s146);
                        return NULL;
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String$Index $tmp148 = panda$core$String$start$R$panda$core$String$Index(escapeText116);
                panda$core$String$Index $tmp149 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText116, $tmp148);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp147, ((panda$core$String$Index$nullable) { $tmp149, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp150 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText116, $tmp147);
                panda$core$MutableString$append$panda$core$String(result99, $tmp150);
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token104);
                panda$core$String* $tmp151 = panda$core$MutableString$finish$R$panda$core$String(result99);
                return $tmp151;
            }
            break;
            default:
            {
                panda$core$String* $tmp152 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token104);
                panda$core$MutableString$append$panda$core$String(result99, $tmp152);
            }
        }
    }
    }
    $l103:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result153;
    org$pandalanguage$pandac$parser$Token token158;
    panda$core$String* str160;
    panda$core$Char8 $tmp162;
    org$pandalanguage$pandac$parser$Token escape166;
    panda$core$String* escapeText170;
    panda$core$Char8 c172;
    panda$core$Char8 $match$221_21178;
    panda$core$Char8 $tmp179;
    panda$core$Char8 $tmp181;
    panda$core$Char8 $tmp182;
    panda$core$Char8 $tmp184;
    panda$core$Char8 $tmp185;
    panda$core$Char8 $tmp187;
    panda$core$Char8 $tmp188;
    panda$core$Char8 $tmp190;
    panda$core$Char8 $tmp191;
    panda$core$Char8 $tmp193;
    panda$core$Char8 $tmp194;
    panda$core$Char8 $tmp196;
    panda$core$Char8 $tmp197;
    panda$core$Char8 $tmp199;
    panda$core$Char8 $tmp200;
    panda$core$Char8 $tmp202;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp204;
    panda$core$MutableString* $tmp154 = (panda$core$MutableString*) malloc(48);
    $tmp154->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp154->refCount.value = 1;
    panda$core$MutableString$init($tmp154);
    result153 = $tmp154;
    $l156:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp159 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token158 = $tmp159;
        switch (token158.kind.value) {
            case 12:
            {
                panda$core$String* $tmp161 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token158);
                str160 = $tmp161;
                panda$core$Char8$init$panda$core$UInt8(&$tmp162, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp163 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str160, $tmp162);
                if ($tmp163.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token158, &$s164);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result153, str160);
            }
            break;
            case 0:
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token158, &$s165);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp167 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape166 = $tmp167;
                panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape166.kind, ((panda$core$Int64) { 0 }));
                if ($tmp168.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token158, &$s169);
                    return NULL;
                }
                }
                panda$core$String* $tmp171 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape166);
                escapeText170 = $tmp171;
                panda$collections$ListView* $tmp173 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText170);
                ITable* $tmp174 = $tmp173->$class->itable;
                while ($tmp174->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp174 = $tmp174->next;
                }
                $fn176 $tmp175 = $tmp174->methods[0];
                panda$core$Object* $tmp177 = $tmp175($tmp173, ((panda$core$Int64) { 0 }));
                c172 = ((panda$core$Char8$wrapper*) $tmp177)->value;
                {
                    $match$221_21178 = c172;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp179, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp180 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp179);
                    if ($tmp180.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp181, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp181);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp182, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp183 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp182);
                    if ($tmp183.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp184, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp184);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp185, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp186 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp185);
                    if ($tmp186.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp187, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp187);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp188, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp189 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp188);
                    if ($tmp189.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp190, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp190);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp191, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp192 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp191);
                    if ($tmp192.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp193, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp193);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp194, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp195 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp194);
                    if ($tmp195.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp196, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp196);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp197, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp198 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp197);
                    if ($tmp198.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp199, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp199);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp200, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp201 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21178, $tmp200);
                    if ($tmp201.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp202, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result153, $tmp202);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token158, &$s203);
                        return NULL;
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
                panda$core$String$Index $tmp205 = panda$core$String$start$R$panda$core$String$Index(escapeText170);
                panda$core$String$Index $tmp206 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText170, $tmp205);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp204, ((panda$core$String$Index$nullable) { $tmp206, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp207 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText170, $tmp204);
                panda$core$MutableString$append$panda$core$String(result153, $tmp207);
            }
            break;
            case 95:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token158);
                panda$core$String* $tmp208 = panda$core$MutableString$finish$R$panda$core$String(result153);
                return $tmp208;
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token158);
                panda$core$String* $tmp209 = panda$core$MutableString$finish$R$panda$core$String(result153);
                return $tmp209;
            }
            break;
            default:
            {
                panda$core$String* $tmp210 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token158);
                panda$core$MutableString$append$panda$core$String(result153, $tmp210);
            }
        }
    }
    }
    $l157:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$collections$Array* dotChildren211;
    org$pandalanguage$pandac$ASTNode* dot214;
    panda$collections$Array* callChildren218;
    org$pandalanguage$pandac$ASTNode* call221;
    panda$collections$Array* castChildren224;
    panda$collections$Array* $tmp212 = (panda$collections$Array*) malloc(40);
    $tmp212->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp212->refCount.value = 1;
    panda$collections$Array$init($tmp212);
    dotChildren211 = $tmp212;
    panda$collections$Array$add$panda$collections$Array$T(dotChildren211, ((panda$core$Object*) p_expr));
    org$pandalanguage$pandac$ASTNode* $tmp215 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp215->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp215->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp215, ((panda$core$Int64) { 108 }), p_expr->position, ((panda$core$Object*) &$s217), ((panda$collections$ListView*) dotChildren211));
    dot214 = $tmp215;
    panda$collections$Array* $tmp219 = (panda$collections$Array*) malloc(40);
    $tmp219->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp219->refCount.value = 1;
    panda$collections$Array$init($tmp219);
    callChildren218 = $tmp219;
    panda$collections$Array$add$panda$collections$Array$T(callChildren218, ((panda$core$Object*) dot214));
    org$pandalanguage$pandac$ASTNode* $tmp222 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp222->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp222->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp222, ((panda$core$Int64) { 107 }), p_expr->position, ((panda$collections$ListView*) callChildren218));
    call221 = $tmp222;
    panda$collections$Array* $tmp225 = (panda$collections$Array*) malloc(40);
    $tmp225->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp225->refCount.value = 1;
    panda$collections$Array$init($tmp225);
    castChildren224 = $tmp225;
    panda$collections$Array$add$panda$collections$Array$T(castChildren224, ((panda$core$Object*) call221));
    org$pandalanguage$pandac$ASTNode* $tmp227 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp227->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp227->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp227, ((panda$core$Int64) { 109 }), p_expr->position, &$s229);
    panda$collections$Array$add$panda$collections$Array$T(castChildren224, ((panda$core$Object*) $tmp227));
    org$pandalanguage$pandac$ASTNode* $tmp230 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp230->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp230->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp230, ((panda$core$Int64) { 111 }), p_expr->position, ((panda$collections$ListView*) castChildren224));
    return $tmp230;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start232;
    org$pandalanguage$pandac$ASTNode* result244;
    panda$core$MutableString* chunk245;
    org$pandalanguage$pandac$parser$Token token250;
    panda$core$String* str253;
    panda$core$Char8 $tmp255;
    org$pandalanguage$pandac$parser$Token escape259;
    panda$core$String* escapeText263;
    panda$core$Char8 c265;
    panda$core$Char8 $match$295_21271;
    panda$core$Char8 $tmp272;
    panda$core$Char8 $tmp274;
    panda$core$Char8 $tmp275;
    panda$core$Char8 $tmp277;
    panda$core$Char8 $tmp278;
    panda$core$Char8 $tmp280;
    panda$core$Char8 $tmp281;
    panda$core$Char8 $tmp283;
    panda$core$Char8 $tmp284;
    panda$core$Char8 $tmp286;
    panda$core$Char8 $tmp287;
    panda$core$Char8 $tmp289;
    panda$core$Char8 $tmp290;
    org$pandalanguage$pandac$ASTNode* expr292;
    panda$core$String* align294;
    panda$core$String* format295;
    panda$collections$Array* castChildren300;
    org$pandalanguage$pandac$ASTNode* cast306;
    panda$collections$Array* dotChildren309;
    org$pandalanguage$pandac$ASTNode* dot312;
    panda$collections$Array* callChildren316;
    panda$collections$Array* callTargetChildren326;
    org$pandalanguage$pandac$ASTNode* callTarget332;
    panda$collections$Array* callChildren336;
    panda$core$String* text343;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp358;
    org$pandalanguage$pandac$parser$Token $tmp233 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start232 = $tmp233;
    panda$core$Bit $tmp235 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start232.kind, ((panda$core$Int64) { 7 }));
    bool $tmp234 = $tmp235.value;
    if (!$tmp234) goto $l236;
    panda$core$Bit $tmp237 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start232.kind, ((panda$core$Int64) { 6 }));
    $tmp234 = $tmp237.value;
    $l236:;
    panda$core$Bit $tmp238 = { $tmp234 };
    if ($tmp238.value) {
    {
        panda$core$String* $tmp240 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start232);
        panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s239, $tmp240);
        panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start232, $tmp243);
        return NULL;
    }
    }
    result244 = NULL;
    panda$core$MutableString* $tmp246 = (panda$core$MutableString*) malloc(48);
    $tmp246->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp246->refCount.value = 1;
    panda$core$MutableString$init($tmp246);
    chunk245 = $tmp246;
    $l248:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp251 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token250 = $tmp251;
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token250.kind, start232.kind);
        if ($tmp252.value) {
        {
            goto $l249;
        }
        }
        switch (token250.kind.value) {
            case 12:
            {
                panda$core$String* $tmp254 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token250);
                str253 = $tmp254;
                panda$core$Char8$init$panda$core$UInt8(&$tmp255, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp256 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str253, $tmp255);
                if ($tmp256.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start232, &$s257);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk245, str253);
            }
            break;
            case 0:
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start232, &$s258);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp260 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape259 = $tmp260;
                panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape259.kind, ((panda$core$Int64) { 0 }));
                if ($tmp261.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start232, &$s262);
                    return NULL;
                }
                }
                panda$core$String* $tmp264 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape259);
                escapeText263 = $tmp264;
                panda$collections$ListView* $tmp266 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText263);
                ITable* $tmp267 = $tmp266->$class->itable;
                while ($tmp267->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp267 = $tmp267->next;
                }
                $fn269 $tmp268 = $tmp267->methods[0];
                panda$core$Object* $tmp270 = $tmp268($tmp266, ((panda$core$Int64) { 0 }));
                c265 = ((panda$core$Char8$wrapper*) $tmp270)->value;
                {
                    $match$295_21271 = c265;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp272, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp273 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21271, $tmp272);
                    if ($tmp273.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp274, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk245, $tmp274);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp275, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp276 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21271, $tmp275);
                    if ($tmp276.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp277, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk245, $tmp277);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp278, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp279 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21271, $tmp278);
                    if ($tmp279.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp280, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk245, $tmp280);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp281, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp282 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21271, $tmp281);
                    if ($tmp282.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp283, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk245, $tmp283);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp284, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp285 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21271, $tmp284);
                    if ($tmp285.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp286, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk245, $tmp286);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp287, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp288 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21271, $tmp287);
                    if ($tmp288.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp289, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk245, $tmp289);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp290, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp291 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21271, $tmp290);
                    if ($tmp291.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp293 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr292 = $tmp293;
                            if (((panda$core$Bit) { expr292 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            align294 = NULL;
                            format295 = NULL;
                            org$pandalanguage$pandac$parser$Token$nullable $tmp296 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                            if (((panda$core$Bit) { $tmp296.nonnull }).value) {
                            {
                                panda$core$String* $tmp297 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start232);
                                align294 = $tmp297;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp298 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
                            if (((panda$core$Bit) { $tmp298.nonnull }).value) {
                            {
                                panda$core$String* $tmp299 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start232);
                                format295 = $tmp299;
                                if (((panda$core$Bit) { format295 == NULL }).value) {
                                {
                                    return NULL;
                                }
                                }
                                panda$collections$Array* $tmp301 = (panda$collections$Array*) malloc(40);
                                $tmp301->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp301->refCount.value = 1;
                                panda$collections$Array$init($tmp301);
                                castChildren300 = $tmp301;
                                panda$collections$Array$add$panda$collections$Array$T(castChildren300, ((panda$core$Object*) expr292));
                                org$pandalanguage$pandac$ASTNode* $tmp303 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp303->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp303->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp303, ((panda$core$Int64) { 109 }), expr292->position, &$s305);
                                panda$collections$Array$add$panda$collections$Array$T(castChildren300, ((panda$core$Object*) $tmp303));
                                org$pandalanguage$pandac$ASTNode* $tmp307 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp307->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp307->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp307, ((panda$core$Int64) { 111 }), expr292->position, ((panda$collections$ListView*) castChildren300));
                                cast306 = $tmp307;
                                panda$collections$Array* $tmp310 = (panda$collections$Array*) malloc(40);
                                $tmp310->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp310->refCount.value = 1;
                                panda$collections$Array$init($tmp310);
                                dotChildren309 = $tmp310;
                                panda$collections$Array$add$panda$collections$Array$T(dotChildren309, ((panda$core$Object*) cast306));
                                org$pandalanguage$pandac$ASTNode* $tmp313 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp313->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp313->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp313, ((panda$core$Int64) { 108 }), expr292->position, ((panda$core$Object*) &$s315), ((panda$collections$ListView*) dotChildren309));
                                dot312 = $tmp313;
                                panda$collections$Array* $tmp317 = (panda$collections$Array*) malloc(40);
                                $tmp317->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp317->refCount.value = 1;
                                panda$collections$Array$init($tmp317);
                                callChildren316 = $tmp317;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren316, ((panda$core$Object*) dot312));
                                org$pandalanguage$pandac$ASTNode* $tmp319 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp319->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp319->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp319, ((panda$core$Int64) { 113 }), start232.position, format295);
                                panda$collections$Array$add$panda$collections$Array$T(callChildren316, ((panda$core$Object*) $tmp319));
                                org$pandalanguage$pandac$ASTNode* $tmp321 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp321->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp321->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp321, ((panda$core$Int64) { 107 }), expr292->position, ((panda$collections$ListView*) callChildren316));
                                expr292 = $tmp321;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp324 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s323);
                            if (((panda$core$Bit) { !$tmp324.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            if (((panda$core$Bit) { align294 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format295 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp325 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr292);
                                    expr292 = $tmp325;
                                }
                                }
                                panda$collections$Array* $tmp327 = (panda$collections$Array*) malloc(40);
                                $tmp327->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp327->refCount.value = 1;
                                panda$collections$Array$init($tmp327);
                                callTargetChildren326 = $tmp327;
                                org$pandalanguage$pandac$ASTNode* $tmp329 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp329->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp329->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp329, ((panda$core$Int64) { 109 }), expr292->position, &$s331);
                                panda$collections$Array$add$panda$collections$Array$T(callTargetChildren326, ((panda$core$Object*) $tmp329));
                                org$pandalanguage$pandac$ASTNode* $tmp333 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp333->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp333->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp333, ((panda$core$Int64) { 108 }), expr292->position, ((panda$core$Object*) &$s335), ((panda$collections$ListView*) callTargetChildren326));
                                callTarget332 = $tmp333;
                                panda$collections$Array* $tmp337 = (panda$collections$Array*) malloc(40);
                                $tmp337->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp337->refCount.value = 1;
                                panda$collections$Array$init($tmp337);
                                callChildren336 = $tmp337;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren336, ((panda$core$Object*) callTarget332));
                                panda$collections$Array$add$panda$collections$Array$T(callChildren336, ((panda$core$Object*) expr292));
                                org$pandalanguage$pandac$ASTNode* $tmp339 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp339->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp339->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp339, ((panda$core$Int64) { 113 }), start232.position, align294);
                                panda$collections$Array$add$panda$collections$Array$T(callChildren336, ((panda$core$Object*) $tmp339));
                                org$pandalanguage$pandac$ASTNode* $tmp341 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp341->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp341->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp341, ((panda$core$Int64) { 107 }), expr292->position, ((panda$collections$ListView*) callChildren336));
                                expr292 = $tmp341;
                            }
                            }
                            panda$core$String* $tmp344 = panda$core$MutableString$finish$R$panda$core$String(chunk245);
                            text343 = $tmp344;
                            panda$core$MutableString* $tmp345 = (panda$core$MutableString*) malloc(48);
                            $tmp345->$class = (panda$core$Class*) &panda$core$MutableString$class;
                            $tmp345->refCount.value = 1;
                            panda$core$MutableString$init($tmp345);
                            chunk245 = $tmp345;
                            panda$core$Bit $tmp349 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text343, &$s348);
                            bool $tmp347 = $tmp349.value;
                            if ($tmp347) goto $l350;
                            $tmp347 = ((panda$core$Bit) { result244 != NULL }).value;
                            $l350:;
                            panda$core$Bit $tmp351 = { $tmp347 };
                            if ($tmp351.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp352 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp352->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp352->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp352, ((panda$core$Int64) { 113 }), start232.position, text343);
                                org$pandalanguage$pandac$ASTNode* $tmp354 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result244, $tmp352);
                                result244 = $tmp354;
                                org$pandalanguage$pandac$ASTNode* $tmp355 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result244, expr292);
                                result244 = $tmp355;
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp356 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr292);
                                result244 = $tmp356;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token250, &$s357);
                        return NULL;
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String$Index $tmp359 = panda$core$String$start$R$panda$core$String$Index(escapeText263);
                panda$core$String$Index $tmp360 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText263, $tmp359);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp358, ((panda$core$String$Index$nullable) { $tmp360, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp361 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText263, $tmp358);
                panda$core$MutableString$append$panda$core$String(chunk245, $tmp361);
            }
            break;
            default:
            {
                panda$core$String* $tmp362 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token250);
                panda$core$MutableString$append$panda$core$String(chunk245, $tmp362);
            }
        }
    }
    }
    $l249:;
    org$pandalanguage$pandac$ASTNode* $tmp363 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp363->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp363->refCount.value = 1;
    panda$core$String* $tmp365 = panda$core$MutableString$finish$R$panda$core$String(chunk245);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp363, ((panda$core$Int64) { 113 }), start232.position, $tmp365);
    org$pandalanguage$pandac$ASTNode* $tmp366 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result244, $tmp363);
    return $tmp366;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result367;
    panda$collections$Iterator* c$Iter368;
    panda$core$Char8 c381;
    panda$core$UInt64 i387;
    result367 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp369 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp370 = ((panda$collections$Iterable*) $tmp369)->$class->itable;
        while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp370 = $tmp370->next;
        }
        $fn372 $tmp371 = $tmp370->methods[0];
        panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) $tmp369));
        c$Iter368 = $tmp373;
        $l374:;
        ITable* $tmp376 = c$Iter368->$class->itable;
        while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp376 = $tmp376->next;
        }
        $fn378 $tmp377 = $tmp376->methods[0];
        panda$core$Bit $tmp379 = $tmp377(c$Iter368);
        panda$core$Bit $tmp380 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp379);
        if (!$tmp380.value) goto $l375;
        {
            ITable* $tmp382 = c$Iter368->$class->itable;
            while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp382 = $tmp382->next;
            }
            $fn384 $tmp383 = $tmp382->methods[1];
            panda$core$Object* $tmp385 = $tmp383(c$Iter368);
            c381 = ((panda$core$Char8$wrapper*) $tmp385)->value;
            panda$core$UInt64 $tmp386 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result367, p_base);
            result367 = $tmp386;
            panda$core$UInt64 $tmp388 = panda$core$Char8$convert$R$panda$core$UInt64(c381);
            i387 = $tmp388;
            panda$core$Bit $tmp390 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i387, ((panda$core$UInt64) { 48 }));
            bool $tmp389 = $tmp390.value;
            if (!$tmp389) goto $l391;
            panda$core$Bit $tmp392 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i387, ((panda$core$UInt64) { 57 }));
            $tmp389 = $tmp392.value;
            $l391:;
            panda$core$Bit $tmp393 = { $tmp389 };
            if ($tmp393.value) {
            {
                panda$core$UInt64 $tmp394 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i387, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp395 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result367, $tmp394);
                result367 = $tmp395;
            }
            }
            else {
            panda$core$Bit $tmp397 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i387, ((panda$core$UInt64) { 65 }));
            bool $tmp396 = $tmp397.value;
            if (!$tmp396) goto $l398;
            panda$core$Bit $tmp399 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i387, ((panda$core$UInt64) { 70 }));
            $tmp396 = $tmp399.value;
            $l398:;
            panda$core$Bit $tmp400 = { $tmp396 };
            if ($tmp400.value) {
            {
                panda$core$UInt64 $tmp401 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i387, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp402 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result367, $tmp401);
                result367 = $tmp402;
            }
            }
            else {
            {
                panda$core$Bit $tmp404 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i387, ((panda$core$UInt64) { 97 }));
                bool $tmp403 = $tmp404.value;
                if (!$tmp403) goto $l405;
                panda$core$Bit $tmp406 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i387, ((panda$core$UInt64) { 102 }));
                $tmp403 = $tmp406.value;
                $l405:;
                panda$core$Bit $tmp407 = { $tmp403 };
                PANDA_ASSERT($tmp407.value);
                panda$core$UInt64 $tmp408 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i387, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp409 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result367, $tmp408);
                result367 = $tmp409;
            }
            }
            }
        }
        goto $l374;
        $l375:;
    }
    return result367;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t410;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp422;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp428;
    panda$core$Real64 $tmp434;
    org$pandalanguage$pandac$ASTNode* result446;
    org$pandalanguage$pandac$parser$Token $tmp411 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t410 = $tmp411;
    switch (t410.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp412 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp412->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp412->refCount.value = 1;
            panda$core$String* $tmp414 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t410);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp412, ((panda$core$Int64) { 106 }), t410.position, $tmp414);
            return $tmp412;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp415 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp415->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp415->refCount.value = 1;
            panda$core$String* $tmp417 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t410);
            panda$core$UInt64$nullable $tmp418 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp417);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp415, ((panda$core$Int64) { 102 }), t410.position, ((panda$core$UInt64) $tmp418.value));
            return $tmp415;
        }
        break;
        case 3:
        {
            org$pandalanguage$pandac$ASTNode* $tmp419 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp419->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp419->refCount.value = 1;
            panda$core$String* $tmp421 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t410);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp422, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp423 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp421, $tmp422);
            panda$core$UInt64 $tmp424 = org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(self, $tmp423, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp419, ((panda$core$Int64) { 102 }), t410.position, $tmp424);
            return $tmp419;
        }
        break;
        case 4:
        {
            org$pandalanguage$pandac$ASTNode* $tmp425 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp425->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp425->refCount.value = 1;
            panda$core$String* $tmp427 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t410);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp428, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp429 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp427, $tmp428);
            panda$core$UInt64 $tmp430 = org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(self, $tmp429, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp425, ((panda$core$Int64) { 102 }), t410.position, $tmp430);
            return $tmp425;
        }
        break;
        case 5:
        {
            org$pandalanguage$pandac$ASTNode* $tmp431 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp431->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp431->refCount.value = 1;
            panda$core$String* $tmp433 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t410);
            panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp434, $tmp433);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp431, ((panda$core$Int64) { 157 }), t410.position, $tmp434);
            return $tmp431;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp435 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp435->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp435->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp435, ((panda$core$Int64) { 114 }), t410.position);
            return $tmp435;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp437 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp437->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp437->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp437, ((panda$core$Int64) { 115 }), t410.position);
            return $tmp437;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp439 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp439->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp439->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp439, ((panda$core$Int64) { 117 }), t410.position);
            return $tmp439;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp441 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp441->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp441->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp441, ((panda$core$Int64) { 116 }), t410.position, ((panda$core$Bit) { true }));
            return $tmp441;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp443 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp443->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp443->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp443, ((panda$core$Int64) { 116 }), t410.position, ((panda$core$Bit) { false }));
            return $tmp443;
        }
        break;
        case 7:
        case 6:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t410);
            org$pandalanguage$pandac$ASTNode* $tmp445 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp445;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp447 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result446 = $tmp447;
            if (((panda$core$Bit) { result446 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp449 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s448);
            if (((panda$core$Bit) { !$tmp449.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result446;
        }
        break;
        default:
        {
            panda$core$String* $tmp451 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t410);
            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s450, $tmp451);
            panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s453);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t410, $tmp454);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result455;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp456 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp457 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp456));
            result455 = $tmp457;
            if (((panda$core$Bit) { result455 != NULL }).value) {
            {
                panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s458, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result455, $tmp459);
                result455 = $tmp460;
            }
            }
            return result455;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name461;
    org$pandalanguage$pandac$parser$Token token464;
    org$pandalanguage$pandac$parser$Token $tmp462 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name461 = $tmp462;
    switch (name461.kind.value) {
        case 48:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 57:
        case 58:
        case 59:
        case 62:
        case 65:
        case 64:
        case 56:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 49:
        case 50:
        case 72:
        {
            panda$core$String* $tmp463 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name461);
            return $tmp463;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp465 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token464 = $tmp465;
            panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token464.kind, ((panda$core$Int64) { 63 }));
            if ($tmp466.value) {
            {
                return &$s467;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token464);
                return &$s468;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp470 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s469);
            if (((panda$core$Bit) { !$tmp470.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp471 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp471.nonnull }).value) {
            {
                return &$s472;
            }
            }
            return &$s473;
        }
        break;
        default:
        {
            panda$core$String* $tmp475 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name461);
            panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s474, $tmp475);
            panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s477);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name461, $tmp478);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp479 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp479;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start480;
    panda$core$MutableString* name483;
    org$pandalanguage$pandac$parser$Token$nullable id490;
    panda$core$Char8 $tmp493;
    org$pandalanguage$pandac$ASTNode* result495;
    panda$core$Char8 $tmp501;
    panda$collections$Array* children502;
    org$pandalanguage$pandac$ASTNode* t505;
    panda$core$Char8 $tmp514;
    panda$collections$Array* children519;
    org$pandalanguage$pandac$parser$Token$nullable $tmp482 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s481);
    start480 = $tmp482;
    if (((panda$core$Bit) { !start480.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp484 = (panda$core$MutableString*) malloc(48);
    $tmp484->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp484->refCount.value = 1;
    panda$core$String* $tmp486 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start480.value));
    panda$core$MutableString$init$panda$core$String($tmp484, $tmp486);
    name483 = $tmp484;
    $l487:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp489 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp489.nonnull }).value) goto $l488;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp492 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s491);
        id490 = $tmp492;
        if (((panda$core$Bit) { !id490.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp493, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name483, $tmp493);
        panda$core$String* $tmp494 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id490.value));
        panda$core$MutableString$append$panda$core$String(name483, $tmp494);
    }
    goto $l487;
    $l488:;
    org$pandalanguage$pandac$ASTNode* $tmp496 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp496->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp496->refCount.value = 1;
    panda$core$String* $tmp498 = panda$core$MutableString$convert$R$panda$core$String(name483);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp496, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start480.value).position, $tmp498);
    result495 = $tmp496;
    org$pandalanguage$pandac$parser$Token $tmp499 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp499.kind, ((panda$core$Int64) { 62 }));
    if ($tmp500.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp501, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name483, $tmp501);
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp503 = (panda$collections$Array*) malloc(40);
        $tmp503->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp503->refCount.value = 1;
        panda$collections$Array$init($tmp503);
        children502 = $tmp503;
        panda$collections$Array$add$panda$collections$Array$T(children502, ((panda$core$Object*) result495));
        org$pandalanguage$pandac$ASTNode* $tmp506 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t505 = $tmp506;
        if (((panda$core$Bit) { t505 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result495;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children502, ((panda$core$Object*) t505));
        panda$core$MutableString$append$panda$core$Object(name483, ((panda$core$Object*) t505));
        $l507:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp509 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp509.nonnull }).value) goto $l508;
        {
            org$pandalanguage$pandac$ASTNode* $tmp510 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
            t505 = $tmp510;
            if (((panda$core$Bit) { t505 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result495;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children502, ((panda$core$Object*) t505));
            panda$core$MutableString$append$panda$core$String(name483, &$s511);
            panda$core$MutableString$append$panda$core$Object(name483, ((panda$core$Object*) t505));
        }
        goto $l507;
        $l508:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp513 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s512);
        if (((panda$core$Bit) { !$tmp513.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result495;
            }
            }
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp514, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name483, $tmp514);
        org$pandalanguage$pandac$ASTNode* $tmp515 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp515->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp515->refCount.value = 1;
        panda$core$String* $tmp517 = panda$core$MutableString$finish$R$panda$core$String(name483);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp515, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start480.value).position, ((panda$core$Object*) $tmp517), ((panda$collections$ListView*) children502));
        result495 = $tmp515;
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp518 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp518.nonnull }).value) {
    {
        panda$collections$Array* $tmp520 = (panda$collections$Array*) malloc(40);
        $tmp520->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp520->refCount.value = 1;
        panda$collections$Array$init($tmp520);
        children519 = $tmp520;
        panda$collections$Array$add$panda$collections$Array$T(children519, ((panda$core$Object*) result495));
        org$pandalanguage$pandac$ASTNode* $tmp522 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp522->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp522->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp522, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start480.value).position, ((panda$collections$ListView*) children519));
        result495 = $tmp522;
    }
    }
    return result495;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result524;
    org$pandalanguage$pandac$parser$Token token528;
    panda$collections$Array* children530;
    org$pandalanguage$pandac$ASTNode* expr534;
    panda$collections$Array* children544;
    org$pandalanguage$pandac$ASTNode* expr547;
    panda$core$String* name553;
    panda$collections$Array* children557;
    org$pandalanguage$pandac$ASTNode* target562;
    panda$collections$Array* children564;
    panda$core$String* name569;
    panda$core$MutableString* finalName571;
    panda$core$Char8 $tmp574;
    panda$collections$Array* types575;
    org$pandalanguage$pandac$ASTNode* t580;
    panda$core$Char8 $tmp589;
    panda$core$Bit shouldAccept590;
    org$pandalanguage$pandac$ASTNode* $tmp525 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result524 = $tmp525;
    if (((panda$core$Bit) { result524 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l526:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp529 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token528 = $tmp529;
        switch (token528.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp531 = (panda$collections$Array*) malloc(40);
                $tmp531->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp531->refCount.value = 1;
                panda$collections$Array$init($tmp531);
                children530 = $tmp531;
                panda$collections$Array$add$panda$collections$Array$T(children530, ((panda$core$Object*) result524));
                org$pandalanguage$pandac$parser$Token$nullable $tmp533 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp533.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp535 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr534 = $tmp535;
                    if (((panda$core$Bit) { expr534 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children530, ((panda$core$Object*) expr534));
                    $l536:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp538 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp538.nonnull }).value) goto $l537;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp539 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        expr534 = $tmp539;
                        if (((panda$core$Bit) { expr534 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children530, ((panda$core$Object*) expr534));
                    }
                    goto $l536;
                    $l537:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp541 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s540);
                    if (((panda$core$Bit) { !$tmp541.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp542 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp542->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp542->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp542, ((panda$core$Int64) { 107 }), token528.position, ((panda$collections$ListView*) children530));
                result524 = $tmp542;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp545 = (panda$collections$Array*) malloc(40);
                $tmp545->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp545->refCount.value = 1;
                panda$collections$Array$init($tmp545);
                children544 = $tmp545;
                panda$collections$Array$add$panda$collections$Array$T(children544, ((panda$core$Object*) result524));
                org$pandalanguage$pandac$ASTNode* $tmp548 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr547 = $tmp548;
                if (((panda$core$Bit) { expr547 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children544, ((panda$core$Object*) expr547));
                org$pandalanguage$pandac$parser$Token$nullable $tmp550 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s549);
                if (((panda$core$Bit) { !$tmp550.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp551 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp551->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp551->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp551, ((panda$core$Int64) { 103 }), token528.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children544));
                result524 = $tmp551;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp554 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp554.nonnull }).value) {
                {
                    name553 = &$s555;
                }
                }
                else {
                {
                    panda$core$String* $tmp556 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                    name553 = $tmp556;
                    if (((panda$core$Bit) { name553 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp558 = (panda$collections$Array*) malloc(40);
                $tmp558->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp558->refCount.value = 1;
                panda$collections$Array$init($tmp558);
                children557 = $tmp558;
                panda$collections$Array$add$panda$collections$Array$T(children557, ((panda$core$Object*) result524));
                org$pandalanguage$pandac$ASTNode* $tmp560 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp560->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp560->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp560, ((panda$core$Int64) { 108 }), token528.position, ((panda$core$Object*) name553), ((panda$collections$ListView*) children557));
                result524 = $tmp560;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp563 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target562 = $tmp563;
                if (((panda$core$Bit) { target562 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp565 = (panda$collections$Array*) malloc(40);
                $tmp565->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp565->refCount.value = 1;
                panda$collections$Array$init($tmp565);
                children564 = $tmp565;
                panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) result524));
                panda$collections$Array$add$panda$collections$Array$T(children564, ((panda$core$Object*) target562));
                org$pandalanguage$pandac$ASTNode* $tmp567 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp567->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp567->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp567, ((panda$core$Int64) { 111 }), token528.position, ((panda$collections$ListView*) children564));
                result524 = $tmp567;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token528);
                panda$core$String* $tmp570 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result524);
                name569 = $tmp570;
                if (((panda$core$Bit) { name569 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp572 = (panda$core$MutableString*) malloc(48);
                    $tmp572->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp572->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp572, name569);
                    finalName571 = $tmp572;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp574, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName571, $tmp574);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp576 = (panda$collections$Array*) malloc(40);
                    $tmp576->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp576->refCount.value = 1;
                    panda$collections$Array$init($tmp576);
                    types575 = $tmp576;
                    org$pandalanguage$pandac$ASTNode* $tmp578 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp578->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp578->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp578, ((panda$core$Int64) { 109 }), result524->position, name569);
                    panda$collections$Array$add$panda$collections$Array$T(types575, ((panda$core$Object*) $tmp578));
                    org$pandalanguage$pandac$ASTNode* $tmp581 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t580 = $tmp581;
                    if (((panda$core$Bit) { t580 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result524;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types575, ((panda$core$Object*) t580));
                    panda$core$MutableString$append$panda$core$Object(finalName571, ((panda$core$Object*) t580));
                    $l582:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp584 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp584.nonnull }).value) goto $l583;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp585 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        t580 = $tmp585;
                        if (((panda$core$Bit) { t580 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result524;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types575, ((panda$core$Object*) t580));
                        panda$core$MutableString$append$panda$core$String(finalName571, &$s586);
                        panda$core$MutableString$append$panda$core$Object(finalName571, ((panda$core$Object*) t580));
                    }
                    goto $l582;
                    $l583:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp588 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s587);
                    if (((panda$core$Bit) { !$tmp588.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result524;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp589, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName571, $tmp589);
                    panda$core$Object* $tmp591 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp591)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp592 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        switch ($tmp592.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept590 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept590 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept590 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept590.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        org$pandalanguage$pandac$ASTNode* $tmp593 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp593->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp593->refCount.value = 1;
                        panda$core$String* $tmp595 = panda$core$MutableString$convert$R$panda$core$String(finalName571);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp593, ((panda$core$Int64) { 154 }), result524->position, ((panda$core$Object*) $tmp595), ((panda$collections$ListView*) types575));
                        result524 = $tmp593;
                        goto $l526;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result524;
                    }
                    }
                }
                }
                return result524;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token528);
                return result524;
            }
        }
    }
    }
    $l527:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result596;
    org$pandalanguage$pandac$parser$Token$nullable op600;
    org$pandalanguage$pandac$ASTNode* next602;
    panda$collections$Array* children604;
    org$pandalanguage$pandac$ASTNode* $tmp597 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result596 = $tmp597;
    if (((panda$core$Bit) { result596 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l598:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp601 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 57 }));
        op600 = $tmp601;
        if (((panda$core$Bit) { !op600.nonnull }).value) {
        {
            goto $l599;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp603 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next602 = $tmp603;
        if (((panda$core$Bit) { next602 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp605 = (panda$collections$Array*) malloc(40);
        $tmp605->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp605->refCount.value = 1;
        panda$collections$Array$init($tmp605);
        children604 = $tmp605;
        panda$collections$Array$add$panda$collections$Array$T(children604, ((panda$core$Object*) result596));
        panda$collections$Array$add$panda$collections$Array$T(children604, ((panda$core$Object*) next602));
        org$pandalanguage$pandac$ASTNode* $tmp607 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp607->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp607->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp607, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op600.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op600.value).kind)), ((panda$collections$ListView*) children604));
        result596 = $tmp607;
    }
    }
    $l599:;
    return result596;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op609;
    org$pandalanguage$pandac$ASTNode* base611;
    panda$collections$Array* children613;
    org$pandalanguage$pandac$parser$Token $tmp610 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op609 = $tmp610;
    switch (op609.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp612 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base611 = $tmp612;
            if (((panda$core$Bit) { base611 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp614 = (panda$collections$Array*) malloc(40);
            $tmp614->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp614->refCount.value = 1;
            panda$collections$Array$init($tmp614);
            children613 = $tmp614;
            panda$collections$Array$add$panda$collections$Array$T(children613, ((panda$core$Object*) base611));
            org$pandalanguage$pandac$ASTNode* $tmp616 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp616->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp616->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp616, ((panda$core$Int64) { 112 }), op609.position, ((panda$core$Object*) wrap_panda$core$Int64(op609.kind)), ((panda$collections$ListView*) children613));
            return $tmp616;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op609);
            org$pandalanguage$pandac$ASTNode* $tmp618 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp618;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result619;
    org$pandalanguage$pandac$parser$Token op623;
    org$pandalanguage$pandac$ASTNode* next625;
    panda$collections$Array* children627;
    org$pandalanguage$pandac$parser$Token nextToken632;
    org$pandalanguage$pandac$ASTNode* next635;
    panda$collections$Array* children637;
    org$pandalanguage$pandac$ASTNode* $tmp620 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result619 = $tmp620;
    if (((panda$core$Bit) { result619 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l621:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp624 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op623 = $tmp624;
        switch (op623.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp626 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next625 = $tmp626;
                if (((panda$core$Bit) { next625 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp628 = (panda$collections$Array*) malloc(40);
                $tmp628->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp628->refCount.value = 1;
                panda$collections$Array$init($tmp628);
                children627 = $tmp628;
                panda$collections$Array$add$panda$collections$Array$T(children627, ((panda$core$Object*) result619));
                panda$collections$Array$add$panda$collections$Array$T(children627, ((panda$core$Object*) next625));
                org$pandalanguage$pandac$ASTNode* $tmp630 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp630->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp630->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp630, ((panda$core$Int64) { 103 }), op623.position, ((panda$core$Object*) wrap_panda$core$Int64(op623.kind)), ((panda$collections$ListView*) children627));
                result619 = $tmp630;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp633 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken632 = $tmp633;
                panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken632.kind, ((panda$core$Int64) { 63 }));
                if ($tmp634.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp636 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next635 = $tmp636;
                    if (((panda$core$Bit) { next635 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp638 = (panda$collections$Array*) malloc(40);
                    $tmp638->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp638->refCount.value = 1;
                    panda$collections$Array$init($tmp638);
                    children637 = $tmp638;
                    panda$collections$Array$add$panda$collections$Array$T(children637, ((panda$core$Object*) result619));
                    panda$collections$Array$add$panda$collections$Array$T(children637, ((panda$core$Object*) next635));
                    org$pandalanguage$pandac$ASTNode* $tmp640 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp640->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp640->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp640, ((panda$core$Int64) { 103 }), op623.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children637));
                    result619 = $tmp640;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken632);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op623);
                    return result619;
                }
                }
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op623);
                return result619;
            }
        }
    }
    }
    $l622:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result642;
    org$pandalanguage$pandac$parser$Token op646;
    org$pandalanguage$pandac$ASTNode* next648;
    panda$collections$Array* children650;
    org$pandalanguage$pandac$ASTNode* $tmp643 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result642 = $tmp643;
    if (((panda$core$Bit) { result642 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l644:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp647 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op646 = $tmp647;
        switch (op646.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp649 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next648 = $tmp649;
                if (((panda$core$Bit) { next648 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp651 = (panda$collections$Array*) malloc(40);
                $tmp651->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp651->refCount.value = 1;
                panda$collections$Array$init($tmp651);
                children650 = $tmp651;
                panda$collections$Array$add$panda$collections$Array$T(children650, ((panda$core$Object*) result642));
                panda$collections$Array$add$panda$collections$Array$T(children650, ((panda$core$Object*) next648));
                org$pandalanguage$pandac$ASTNode* $tmp653 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp653->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp653->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp653, ((panda$core$Int64) { 103 }), op646.position, ((panda$core$Object*) wrap_panda$core$Int64(op646.kind)), ((panda$collections$ListView*) children650));
                result642 = $tmp653;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op646);
                return result642;
            }
        }
    }
    }
    $l645:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result655;
    org$pandalanguage$pandac$Position $tmp659;
    org$pandalanguage$pandac$parser$Token op661;
    org$pandalanguage$pandac$parser$Token next663;
    org$pandalanguage$pandac$ASTNode* right665;
    org$pandalanguage$pandac$Position $tmp678;
    org$pandalanguage$pandac$ASTNode* step679;
    org$pandalanguage$pandac$Position $tmp684;
    panda$collections$Array* children685;
    panda$core$Int64 kind688;
    org$pandalanguage$pandac$parser$Token $tmp656 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp656.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp657 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp657->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp657->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp659);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp657, ((panda$core$Int64) { 138 }), $tmp659);
            result655 = $tmp657;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp660 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result655 = $tmp660;
            if (((panda$core$Bit) { result655 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp662 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op661 = $tmp662;
    switch (op661.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp664 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next663 = $tmp664;
            panda$core$Bit $tmp668 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next663.kind, ((panda$core$Int64) { 102 }));
            bool $tmp667 = $tmp668.value;
            if (!$tmp667) goto $l669;
            panda$core$Bit $tmp670 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next663.kind, ((panda$core$Int64) { 104 }));
            $tmp667 = $tmp670.value;
            $l669:;
            panda$core$Bit $tmp671 = { $tmp667 };
            bool $tmp666 = $tmp671.value;
            if (!$tmp666) goto $l672;
            panda$core$Bit $tmp673 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next663.kind, ((panda$core$Int64) { 33 }));
            $tmp666 = $tmp673.value;
            $l672:;
            panda$core$Bit $tmp674 = { $tmp666 };
            if ($tmp674.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp675 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                right665 = $tmp675;
                if (((panda$core$Bit) { right665 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp676 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp676->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp676->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp678);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp676, ((panda$core$Int64) { 138 }), $tmp678);
                right665 = $tmp676;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp680 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp680.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp681 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                step679 = $tmp681;
                if (((panda$core$Bit) { step679 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp682 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp682->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp682->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp684);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp682, ((panda$core$Int64) { 138 }), $tmp684);
                step679 = $tmp682;
            }
            }
            panda$collections$Array* $tmp686 = (panda$collections$Array*) malloc(40);
            $tmp686->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp686->refCount.value = 1;
            panda$collections$Array$init($tmp686);
            children685 = $tmp686;
            panda$collections$Array$add$panda$collections$Array$T(children685, ((panda$core$Object*) result655));
            panda$collections$Array$add$panda$collections$Array$T(children685, ((panda$core$Object*) right665));
            panda$collections$Array$add$panda$collections$Array$T(children685, ((panda$core$Object*) step679));
            panda$core$Bit $tmp689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op661.kind, ((panda$core$Int64) { 97 }));
            if ($tmp689.value) {
            {
                kind688 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind688 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp690 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp690->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp690->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp690, kind688, op661.position, ((panda$collections$ListView*) children685));
            return $tmp690;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op661);
            return result655;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result692;
    org$pandalanguage$pandac$parser$Token op696;
    org$pandalanguage$pandac$ASTNode* next698;
    panda$collections$Array* children700;
    org$pandalanguage$pandac$ASTNode* $tmp693 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result692 = $tmp693;
    if (((panda$core$Bit) { result692 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l694:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp697 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op696 = $tmp697;
        switch (op696.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp699 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next698 = $tmp699;
                if (((panda$core$Bit) { next698 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp701 = (panda$collections$Array*) malloc(40);
                $tmp701->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp701->refCount.value = 1;
                panda$collections$Array$init($tmp701);
                children700 = $tmp701;
                panda$collections$Array$add$panda$collections$Array$T(children700, ((panda$core$Object*) result692));
                panda$collections$Array$add$panda$collections$Array$T(children700, ((panda$core$Object*) next698));
                org$pandalanguage$pandac$ASTNode* $tmp703 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp703->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp703->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp703, ((panda$core$Int64) { 103 }), op696.position, ((panda$core$Object*) wrap_panda$core$Int64(op696.kind)), ((panda$collections$ListView*) children700));
                result692 = $tmp703;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op696);
                return result692;
            }
        }
    }
    }
    $l695:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result705;
    org$pandalanguage$pandac$parser$Token op709;
    org$pandalanguage$pandac$ASTNode* next711;
    panda$collections$Array* children713;
    org$pandalanguage$pandac$ASTNode* $tmp706 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result705 = $tmp706;
    if (((panda$core$Bit) { result705 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l707:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp710 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op709 = $tmp710;
        switch (op709.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp712 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next711 = $tmp712;
                if (((panda$core$Bit) { next711 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp714 = (panda$collections$Array*) malloc(40);
                $tmp714->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp714->refCount.value = 1;
                panda$collections$Array$init($tmp714);
                children713 = $tmp714;
                panda$collections$Array$add$panda$collections$Array$T(children713, ((panda$core$Object*) result705));
                panda$collections$Array$add$panda$collections$Array$T(children713, ((panda$core$Object*) next711));
                org$pandalanguage$pandac$ASTNode* $tmp716 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp716->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp716->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp716, ((panda$core$Int64) { 103 }), op709.position, ((panda$core$Object*) wrap_panda$core$Int64(op709.kind)), ((panda$collections$ListView*) children713));
                result705 = $tmp716;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op709);
                return result705;
            }
        }
    }
    }
    $l708:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result718;
    org$pandalanguage$pandac$parser$Token$nullable op722;
    org$pandalanguage$pandac$ASTNode* next724;
    panda$collections$Array* children726;
    org$pandalanguage$pandac$ASTNode* $tmp719 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result718 = $tmp719;
    if (((panda$core$Bit) { result718 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l720:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp723 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 68 }));
        op722 = $tmp723;
        if (((panda$core$Bit) { !op722.nonnull }).value) {
        {
            goto $l721;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp725 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next724 = $tmp725;
        if (((panda$core$Bit) { next724 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp727 = (panda$collections$Array*) malloc(40);
        $tmp727->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp727->refCount.value = 1;
        panda$collections$Array$init($tmp727);
        children726 = $tmp727;
        panda$collections$Array$add$panda$collections$Array$T(children726, ((panda$core$Object*) result718));
        panda$collections$Array$add$panda$collections$Array$T(children726, ((panda$core$Object*) next724));
        org$pandalanguage$pandac$ASTNode* $tmp729 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp729->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp729->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp729, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op722.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op722.value).kind)), ((panda$collections$ListView*) children726));
        result718 = $tmp729;
    }
    }
    $l721:;
    return result718;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start731;
    org$pandalanguage$pandac$ASTNode* test734;
    panda$collections$Array* children736;
    org$pandalanguage$pandac$ASTNode* ifTrue739;
    org$pandalanguage$pandac$ASTNode* ifFalse744;
    org$pandalanguage$pandac$ASTNode* ifFalse746;
    org$pandalanguage$pandac$parser$Token$nullable $tmp733 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s732);
    start731 = $tmp733;
    if (((panda$core$Bit) { !start731.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp735 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test734 = $tmp735;
    if (((panda$core$Bit) { test734 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp737 = (panda$collections$Array*) malloc(40);
    $tmp737->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp737->refCount.value = 1;
    panda$collections$Array$init($tmp737);
    children736 = $tmp737;
    panda$collections$Array$add$panda$collections$Array$T(children736, ((panda$core$Object*) test734));
    org$pandalanguage$pandac$ASTNode* $tmp740 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    ifTrue739 = $tmp740;
    if (((panda$core$Bit) { ifTrue739 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children736, ((panda$core$Object*) ifTrue739));
    org$pandalanguage$pandac$parser$Token$nullable $tmp741 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp741.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp742 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp742.kind, ((panda$core$Int64) { 36 }));
        if ($tmp743.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp745 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse744 = $tmp745;
            if (((panda$core$Bit) { ifFalse744 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children736, ((panda$core$Object*) ifFalse744));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp747 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse746 = $tmp747;
            if (((panda$core$Bit) { ifFalse746 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children736, ((panda$core$Object*) ifFalse746));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp748 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp748->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp748->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp748, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start731.value).position, ((panda$collections$ListView*) children736));
    return $tmp748;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp751 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s750);
    if (((panda$core$Bit) { !$tmp751.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp752 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp752;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id753;
    org$pandalanguage$pandac$ASTNode* type758;
    panda$collections$Array* children760;
    org$pandalanguage$pandac$parser$Token$nullable $tmp755 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s754);
    id753 = $tmp755;
    if (((panda$core$Bit) { !id753.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp756 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp756.kind, ((panda$core$Int64) { 95 }));
    if ($tmp757.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp759 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type758 = $tmp759;
        if (((panda$core$Bit) { type758 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp761 = (panda$collections$Array*) malloc(40);
        $tmp761->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp761->refCount.value = 1;
        panda$collections$Array$init($tmp761);
        children760 = $tmp761;
        panda$collections$Array$add$panda$collections$Array$T(children760, ((panda$core$Object*) type758));
        org$pandalanguage$pandac$ASTNode* $tmp763 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp763->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp763->refCount.value = 1;
        panda$core$String* $tmp765 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id753.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp763, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id753.value).position, ((panda$core$Object*) $tmp765), ((panda$collections$ListView*) children760));
        return $tmp763;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp766 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp766->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp766->refCount.value = 1;
    panda$core$String* $tmp768 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id753.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp766, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id753.value).position, $tmp768);
    return $tmp766;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start769;
    org$pandalanguage$pandac$ASTNode* t772;
    org$pandalanguage$pandac$ASTNode* list776;
    org$pandalanguage$pandac$ASTNode* block778;
    panda$collections$Array* children780;
    org$pandalanguage$pandac$parser$Token$nullable $tmp771 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 32 }), &$s770);
    start769 = $tmp771;
    if (((panda$core$Bit) { !start769.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp773 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t772 = $tmp773;
    if (((panda$core$Bit) { t772 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp775 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 34 }), &$s774);
    if (((panda$core$Bit) { !$tmp775.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp777 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list776 = $tmp777;
    if (((panda$core$Bit) { list776 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp779 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    block778 = $tmp779;
    if (((panda$core$Bit) { block778 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp781 = (panda$collections$Array*) malloc(40);
    $tmp781->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp781->refCount.value = 1;
    panda$collections$Array$init($tmp781);
    children780 = $tmp781;
    panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) t772));
    panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) list776));
    panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) block778));
    org$pandalanguage$pandac$ASTNode* $tmp783 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp783->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp783->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp783, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start769.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children780));
    return $tmp783;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start785;
    org$pandalanguage$pandac$ASTNode* test788;
    org$pandalanguage$pandac$ASTNode* body790;
    panda$collections$Array* children792;
    org$pandalanguage$pandac$parser$Token$nullable $tmp787 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s786);
    start785 = $tmp787;
    if (((panda$core$Bit) { !start785.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp789 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test788 = $tmp789;
    if (((panda$core$Bit) { test788 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp791 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body790 = $tmp791;
    if (((panda$core$Bit) { body790 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp793 = (panda$collections$Array*) malloc(40);
    $tmp793->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp793->refCount.value = 1;
    panda$collections$Array$init($tmp793);
    children792 = $tmp793;
    panda$collections$Array$add$panda$collections$Array$T(children792, ((panda$core$Object*) test788));
    panda$collections$Array$add$panda$collections$Array$T(children792, ((panda$core$Object*) body790));
    org$pandalanguage$pandac$ASTNode* $tmp795 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp795->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp795->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp795, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start785.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children792));
    return $tmp795;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start797;
    org$pandalanguage$pandac$ASTNode* body800;
    org$pandalanguage$pandac$ASTNode* test804;
    panda$collections$Array* children806;
    org$pandalanguage$pandac$parser$Token$nullable $tmp799 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s798);
    start797 = $tmp799;
    if (((panda$core$Bit) { !start797.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp801 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body800 = $tmp801;
    if (((panda$core$Bit) { body800 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp803 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s802);
    if (((panda$core$Bit) { !$tmp803.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp805 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test804 = $tmp805;
    if (((panda$core$Bit) { test804 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp807 = (panda$collections$Array*) malloc(40);
    $tmp807->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp807->refCount.value = 1;
    panda$collections$Array$init($tmp807);
    children806 = $tmp807;
    panda$collections$Array$add$panda$collections$Array$T(children806, ((panda$core$Object*) body800));
    panda$collections$Array$add$panda$collections$Array$T(children806, ((panda$core$Object*) test804));
    org$pandalanguage$pandac$ASTNode* $tmp809 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp809->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp809->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp809, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start797.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children806));
    return $tmp809;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start811;
    org$pandalanguage$pandac$ASTNode* body814;
    panda$collections$Array* children816;
    org$pandalanguage$pandac$parser$Token$nullable $tmp813 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 35 }), &$s812);
    start811 = $tmp813;
    if (((panda$core$Bit) { !start811.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp815 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body814 = $tmp815;
    if (((panda$core$Bit) { body814 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp817 = (panda$collections$Array*) malloc(40);
    $tmp817->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp817->refCount.value = 1;
    panda$collections$Array$init($tmp817);
    children816 = $tmp817;
    panda$collections$Array$add$panda$collections$Array$T(children816, ((panda$core$Object*) body814));
    org$pandalanguage$pandac$ASTNode* $tmp819 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp819->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp819->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp819, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start811.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children816));
    return $tmp819;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start821;
    org$pandalanguage$pandac$ASTNode* expr824;
    panda$collections$Array* children826;
    org$pandalanguage$pandac$ASTNode* message830;
    org$pandalanguage$pandac$parser$Token$nullable $tmp823 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 44 }), &$s822);
    start821 = $tmp823;
    if (((panda$core$Bit) { !start821.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp825 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr824 = $tmp825;
    if (((panda$core$Bit) { expr824 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp827 = (panda$collections$Array*) malloc(40);
    $tmp827->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp827->refCount.value = 1;
    panda$collections$Array$init($tmp827);
    children826 = $tmp827;
    panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) expr824));
    org$pandalanguage$pandac$parser$Token$nullable $tmp829 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp829.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp831 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        message830 = $tmp831;
        if (((panda$core$Bit) { message830 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children826, ((panda$core$Object*) message830));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp832 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp832->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp832->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp832, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start821.value).position, ((panda$collections$ListView*) children826));
    return $tmp832;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start834;
    panda$collections$Array* expressions837;
    org$pandalanguage$pandac$ASTNode* expr840;
    panda$collections$Array* children846;
    org$pandalanguage$pandac$ASTNode* stmt856;
    org$pandalanguage$pandac$ASTNode* stmt858;
    org$pandalanguage$pandac$parser$Token$nullable $tmp836 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 39 }), &$s835);
    start834 = $tmp836;
    if (((panda$core$Bit) { !start834.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp838 = (panda$collections$Array*) malloc(40);
    $tmp838->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp838->refCount.value = 1;
    panda$collections$Array$init($tmp838);
    expressions837 = $tmp838;
    org$pandalanguage$pandac$ASTNode* $tmp841 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr840 = $tmp841;
    if (((panda$core$Bit) { expr840 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions837, ((panda$core$Object*) expr840));
    $l842:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp844 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp844.nonnull }).value) goto $l843;
    {
        org$pandalanguage$pandac$ASTNode* $tmp845 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr840 = $tmp845;
        if (((panda$core$Bit) { expr840 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions837, ((panda$core$Object*) expr840));
    }
    goto $l842;
    $l843:;
    panda$collections$Array* $tmp847 = (panda$collections$Array*) malloc(40);
    $tmp847->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp847->refCount.value = 1;
    panda$collections$Array$init($tmp847);
    children846 = $tmp847;
    org$pandalanguage$pandac$ASTNode* $tmp849 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp849->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp849->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp849, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start834.value).position, ((panda$collections$ListView*) expressions837));
    panda$collections$Array$add$panda$collections$Array$T(children846, ((panda$core$Object*) $tmp849));
    org$pandalanguage$pandac$parser$Token$nullable $tmp852 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s851);
    if (((panda$core$Bit) { !$tmp852.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l853:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp855 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp855.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l854;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp857 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt856 = $tmp857;
                if (((panda$core$Bit) { stmt856 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children846, ((panda$core$Object*) stmt856));
                goto $l854;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp859 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt858 = $tmp859;
                    if (((panda$core$Bit) { stmt858 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children846, ((panda$core$Object*) stmt858));
                }
            }
        }
    }
    }
    $l854:;
    org$pandalanguage$pandac$ASTNode* $tmp860 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp860->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp860->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp860, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start834.value).position, ((panda$collections$ListView*) children846));
    return $tmp860;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start862;
    panda$collections$Array* children865;
    org$pandalanguage$pandac$ASTNode* expr868;
    org$pandalanguage$pandac$parser$Token token874;
    org$pandalanguage$pandac$ASTNode* w876;
    org$pandalanguage$pandac$parser$Token o878;
    panda$collections$Array* statements882;
    org$pandalanguage$pandac$ASTNode* stmt888;
    org$pandalanguage$pandac$ASTNode* stmt890;
    org$pandalanguage$pandac$parser$Token$nullable $tmp864 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 38 }), &$s863);
    start862 = $tmp864;
    if (((panda$core$Bit) { !start862.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp866 = (panda$collections$Array*) malloc(40);
    $tmp866->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp866->refCount.value = 1;
    panda$collections$Array$init($tmp866);
    children865 = $tmp866;
    org$pandalanguage$pandac$ASTNode* $tmp869 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr868 = $tmp869;
    if (((panda$core$Bit) { expr868 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) expr868));
    org$pandalanguage$pandac$parser$Token$nullable $tmp871 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s870);
    if (((panda$core$Bit) { !$tmp871.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l872:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp875 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token874 = $tmp875;
        switch (token874.kind.value) {
            case 100:
            {
                goto $l873;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp877 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w876 = $tmp877;
                if (((panda$core$Bit) { w876 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) w876));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp879 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o878 = $tmp879;
                org$pandalanguage$pandac$parser$Token$nullable $tmp881 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s880);
                if (((panda$core$Bit) { !$tmp881.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp883 = (panda$collections$Array*) malloc(40);
                $tmp883->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp883->refCount.value = 1;
                panda$collections$Array$init($tmp883);
                statements882 = $tmp883;
                $l885:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp887 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    switch ($tmp887.kind.value) {
                        case 100:
                        {
                            goto $l886;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp889 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt888 = $tmp889;
                            if (((panda$core$Bit) { stmt888 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements882, ((panda$core$Object*) stmt888));
                            goto $l886;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp891 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt890 = $tmp891;
                            if (((panda$core$Bit) { stmt890 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements882, ((panda$core$Object*) stmt890));
                        }
                    }
                }
                }
                $l886:;
                org$pandalanguage$pandac$ASTNode* $tmp892 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp892->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp892->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp892, ((panda$core$Int64) { 127 }), o878.position, ((panda$collections$ListView*) statements882));
                panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) $tmp892));
                goto $l873;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp896 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token874);
                panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s895, $tmp896);
                panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp897, &$s898);
                panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s894, $tmp899);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token874, $tmp900);
            }
        }
    }
    }
    $l873:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp902 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s901);
    if (((panda$core$Bit) { !$tmp902.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp903 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp903->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp903->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp903, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start862.value).position, ((panda$collections$ListView*) children865));
    return $tmp903;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start905;
    panda$collections$Array* children908;
    org$pandalanguage$pandac$ASTNode* stmt914;
    org$pandalanguage$pandac$ASTNode* stmt918;
    org$pandalanguage$pandac$parser$Token$nullable $tmp907 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s906);
    start905 = $tmp907;
    if (((panda$core$Bit) { !start905.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp909 = (panda$collections$Array*) malloc(40);
    $tmp909->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp909->refCount.value = 1;
    panda$collections$Array$init($tmp909);
    children908 = $tmp909;
    $l911:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp913 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp913.kind.value) {
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l912;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp915 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt914 = $tmp915;
                if (((panda$core$Bit) { stmt914 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp917 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s916);
                if (((panda$core$Bit) { !$tmp917.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children908, ((panda$core$Object*) stmt914));
                goto $l912;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp919 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt918 = $tmp919;
                if (((panda$core$Bit) { stmt918 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children908, ((panda$core$Object*) stmt918));
            }
        }
    }
    }
    $l912:;
    org$pandalanguage$pandac$ASTNode* $tmp920 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp920->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp920->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp920, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start905.value).position, ((panda$collections$ListView*) children908));
    return $tmp920;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start922;
    org$pandalanguage$pandac$parser$Token op925;
    org$pandalanguage$pandac$ASTNode* rvalue927;
    panda$collections$Array* children929;
    org$pandalanguage$pandac$parser$Token op936;
    org$pandalanguage$pandac$ASTNode* rvalue938;
    panda$collections$Array* children940;
    org$pandalanguage$pandac$ASTNode* $tmp923 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start922 = $tmp923;
    if (((panda$core$Bit) { start922 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp924 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp924.kind.value) {
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        {
            org$pandalanguage$pandac$parser$Token $tmp926 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op925 = $tmp926;
            org$pandalanguage$pandac$ASTNode* $tmp928 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue927 = $tmp928;
            if (((panda$core$Bit) { rvalue927 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp930 = (panda$collections$Array*) malloc(40);
            $tmp930->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp930->refCount.value = 1;
            panda$collections$Array$init($tmp930);
            children929 = $tmp930;
            panda$collections$Array$add$panda$collections$Array$T(children929, ((panda$core$Object*) start922));
            panda$collections$Array$add$panda$collections$Array$T(children929, ((panda$core$Object*) rvalue927));
            org$pandalanguage$pandac$ASTNode* $tmp932 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp932->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp932->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp932, ((panda$core$Int64) { 103 }), start922->position, ((panda$core$Object*) wrap_panda$core$Int64(op925.kind)), ((panda$collections$ListView*) children929));
            return $tmp932;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp934 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp934, &$s935);
            org$pandalanguage$pandac$parser$Token $tmp937 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op936 = $tmp937;
            org$pandalanguage$pandac$ASTNode* $tmp939 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue938 = $tmp939;
            if (((panda$core$Bit) { rvalue938 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp941 = (panda$collections$Array*) malloc(40);
            $tmp941->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp941->refCount.value = 1;
            panda$collections$Array$init($tmp941);
            children940 = $tmp941;
            panda$collections$Array$add$panda$collections$Array$T(children940, ((panda$core$Object*) start922));
            panda$collections$Array$add$panda$collections$Array$T(children940, ((panda$core$Object*) rvalue938));
            org$pandalanguage$pandac$ASTNode* $tmp943 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp943->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp943->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp943, ((panda$core$Int64) { 103 }), start922->position, ((panda$core$Object*) wrap_panda$core$Int64(op936.kind)), ((panda$collections$ListView*) children940));
            return $tmp943;
        }
        break;
        default:
        {
            return start922;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children945;
    org$pandalanguage$pandac$ASTNode* t948;
    org$pandalanguage$pandac$ASTNode* value951;
    org$pandalanguage$pandac$ASTNode* value957;
    panda$collections$Array* $tmp946 = (panda$collections$Array*) malloc(40);
    $tmp946->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp946->refCount.value = 1;
    panda$collections$Array$init($tmp946);
    children945 = $tmp946;
    org$pandalanguage$pandac$ASTNode* $tmp949 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t948 = $tmp949;
    if (((panda$core$Bit) { t948 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children945, ((panda$core$Object*) t948));
    org$pandalanguage$pandac$parser$Token$nullable $tmp950 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp950.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp952 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value951 = $tmp952;
        if (((panda$core$Bit) { value951 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children945, ((panda$core$Object*) value951));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp953 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp953.kind, ((panda$core$Int64) { 58 }));
    if ($tmp954.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp955 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp955, &$s956);
        org$pandalanguage$pandac$ASTNode* $tmp958 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value957 = $tmp958;
        if (((panda$core$Bit) { value957 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children945, ((panda$core$Object*) value957));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp959 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp959->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp959->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp959, ((panda$core$Int64) { 129 }), t948->position, ((panda$collections$ListView*) children945));
    return $tmp959;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start961;
    panda$core$Int64 kind963;
    panda$collections$Array* children965;
    org$pandalanguage$pandac$ASTNode* child968;
    org$pandalanguage$pandac$ASTNode* child973;
    org$pandalanguage$pandac$parser$Token $tmp962 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start961 = $tmp962;
    switch (start961.kind.value) {
        case 23:
        {
            kind963 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind963 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind963 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind963 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start961, &$s964);
        }
    }
    panda$collections$Array* $tmp966 = (panda$collections$Array*) malloc(40);
    $tmp966->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp966->refCount.value = 1;
    panda$collections$Array$init($tmp966);
    children965 = $tmp966;
    org$pandalanguage$pandac$ASTNode* $tmp969 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    child968 = $tmp969;
    if (((panda$core$Bit) { child968 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children965, ((panda$core$Object*) child968));
    $l970:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp972 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp972.nonnull }).value) goto $l971;
    {
        org$pandalanguage$pandac$ASTNode* $tmp974 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        child973 = $tmp974;
        if (((panda$core$Bit) { child973 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children965, ((panda$core$Object*) child973));
    }
    goto $l970;
    $l971:;
    org$pandalanguage$pandac$ASTNode* $tmp975 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp975->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp975->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp975, kind963, start961.position, ((panda$collections$ListView*) children965));
    return $tmp975;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start977;
    panda$collections$Array* children982;
    org$pandalanguage$pandac$ASTNode* expr989;
    org$pandalanguage$pandac$parser$Token$nullable $tmp979 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s978);
    start977 = $tmp979;
    if (((panda$core$Bit) { !start977.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp981 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s980);
    if (((panda$core$Bit) { !$tmp981.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp983 = (panda$collections$Array*) malloc(40);
    $tmp983->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp983->refCount.value = 1;
    panda$collections$Array$init($tmp983);
    children982 = $tmp983;
    org$pandalanguage$pandac$ASTNode* $tmp985 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp985->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp985->refCount.value = 1;
    panda$core$String* $tmp987 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start977.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp985, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start977.value).position, $tmp987);
    panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) $tmp985));
    org$pandalanguage$pandac$parser$Token$nullable $tmp988 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp988.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp990 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr989 = $tmp990;
        if (((panda$core$Bit) { expr989 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) expr989));
        $l991:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp993 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp993.nonnull }).value) goto $l992;
        {
            org$pandalanguage$pandac$ASTNode* $tmp994 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr989 = $tmp994;
            if (((panda$core$Bit) { expr989 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) expr989));
        }
        goto $l991;
        $l992:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp996 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s995);
        if (((panda$core$Bit) { !$tmp996.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp997 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp997->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp997->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp997, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start977.value).position, ((panda$collections$ListView*) children982));
    return $tmp997;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start999;
    org$pandalanguage$pandac$parser$Token$nullable label1002;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1001 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 28 }), &$s1000);
    start999 = $tmp1001;
    if (((panda$core$Bit) { !start999.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1003 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label1002 = $tmp1003;
    if (((panda$core$Bit) { label1002.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1004 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1004->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1004->refCount.value = 1;
        panda$core$String* $tmp1006 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1002.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1004, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, $tmp1006);
        return $tmp1004;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1007 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1007->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1007->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1007, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position);
    return $tmp1007;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1009;
    org$pandalanguage$pandac$parser$Token$nullable label1012;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1011 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 29 }), &$s1010);
    start1009 = $tmp1011;
    if (((panda$core$Bit) { !start1009.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1013 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label1012 = $tmp1013;
    if (((panda$core$Bit) { label1012.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1014 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1014->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1014->refCount.value = 1;
        panda$core$String* $tmp1016 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1012.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1014, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1009.value).position, $tmp1016);
        return $tmp1014;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1017 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1017->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1017->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1017, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1009.value).position);
    return $tmp1017;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1019;
    panda$collections$Array* children1025;
    org$pandalanguage$pandac$ASTNode* expr1028;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1021 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 27 }), &$s1020);
    start1019 = $tmp1021;
    if (((panda$core$Bit) { !start1019.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1022 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1022.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1023 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1023->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1023->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1023, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1019.value).position);
            return $tmp1023;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp1026 = (panda$collections$Array*) malloc(40);
            $tmp1026->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1026->refCount.value = 1;
            panda$collections$Array$init($tmp1026);
            children1025 = $tmp1026;
            org$pandalanguage$pandac$ASTNode* $tmp1029 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1028 = $tmp1029;
            if (((panda$core$Bit) { expr1028 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1025, ((panda$core$Object*) expr1028));
            org$pandalanguage$pandac$ASTNode* $tmp1030 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1030->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1030->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1030, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1019.value).position, ((panda$collections$ListView*) children1025));
            return $tmp1030;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1032 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1032.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1033 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1033;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1034 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1034;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1035 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1035;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1036 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1036.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1037 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1037;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1038 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1038;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1039 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1039;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1040 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1040;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s1041);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1051;
    org$pandalanguage$pandac$parser$Token $tmp1042 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1042.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1043 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1043;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1044 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1044;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1045 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1045;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1046 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1046;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1047 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1047;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1048 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1048;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1049 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1049;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1050 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1050;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1052 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1051 = $tmp1052;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1053 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1053.nonnull }).value) {
            {
                panda$core$String* $tmp1054 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1051);
                org$pandalanguage$pandac$ASTNode* $tmp1055 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1054);
                return $tmp1055;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1051);
            org$pandalanguage$pandac$ASTNode* $tmp1056 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1056;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1057 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1057;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1058 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1058;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1059 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1059;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s1060);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1061;
    org$pandalanguage$pandac$parser$Token$nullable next1064;
    panda$core$MutableString* name1067;
    panda$core$Char8 $tmp1074;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1063 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 14 }), &$s1062);
    start1061 = $tmp1063;
    if (((panda$core$Bit) { !start1061.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1066 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1065);
    next1064 = $tmp1066;
    if (((panda$core$Bit) { !next1064.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1068 = (panda$core$MutableString*) malloc(48);
    $tmp1068->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1068->refCount.value = 1;
    panda$core$String* $tmp1070 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1064.value));
    panda$core$MutableString$init$panda$core$String($tmp1068, $tmp1070);
    name1067 = $tmp1068;
    $l1071:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1073 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next1064 = $tmp1073;
        if (((panda$core$Bit) { !next1064.nonnull }).value) {
        {
            goto $l1072;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1074, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1067, $tmp1074);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1076 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1075);
        next1064 = $tmp1076;
        if (((panda$core$Bit) { !next1064.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1064.value));
        panda$core$MutableString$append$panda$core$String(name1067, $tmp1077);
    }
    }
    $l1072:;
    org$pandalanguage$pandac$ASTNode* $tmp1078 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1078->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1078->refCount.value = 1;
    panda$core$String* $tmp1080 = panda$core$MutableString$finish$R$panda$core$String(name1067);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1078, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1061.value).position, $tmp1080);
    return $tmp1078;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1081;
    org$pandalanguage$pandac$parser$Token$nullable next1084;
    panda$core$MutableString* name1087;
    panda$core$Char8 $tmp1094;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1083 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 15 }), &$s1082);
    start1081 = $tmp1083;
    if (((panda$core$Bit) { !start1081.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1086 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1085);
    next1084 = $tmp1086;
    if (((panda$core$Bit) { !next1084.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1088 = (panda$core$MutableString*) malloc(48);
    $tmp1088->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1088->refCount.value = 1;
    panda$core$String* $tmp1090 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1084.value));
    panda$core$MutableString$init$panda$core$String($tmp1088, $tmp1090);
    name1087 = $tmp1088;
    $l1091:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1093 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next1084 = $tmp1093;
        if (((panda$core$Bit) { !next1084.nonnull }).value) {
        {
            goto $l1092;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1094, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1087, $tmp1094);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1096 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1095);
        next1084 = $tmp1096;
        if (((panda$core$Bit) { !next1084.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1097 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1084.value));
        panda$core$MutableString$append$panda$core$String(name1087, $tmp1097);
    }
    }
    $l1092:;
    org$pandalanguage$pandac$ASTNode* $tmp1098 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1098->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1098->refCount.value = 1;
    panda$core$String* $tmp1100 = panda$core$MutableString$finish$R$panda$core$String(name1087);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1098, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1081.value).position, $tmp1100);
    return $tmp1098;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1101;
    org$pandalanguage$pandac$parser$Token$nullable id1104;
    panda$collections$Array* children1107;
    panda$collections$Array* idChildren1110;
    org$pandalanguage$pandac$ASTNode* t1114;
    org$pandalanguage$pandac$ASTNode* t1125;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1103 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 62 }), &$s1102);
    start1101 = $tmp1103;
    if (((panda$core$Bit) { !start1101.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1106 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1105);
    id1104 = $tmp1106;
    if (((panda$core$Bit) { !id1104.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1108 = (panda$collections$Array*) malloc(40);
    $tmp1108->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1108->refCount.value = 1;
    panda$collections$Array$init($tmp1108);
    children1107 = $tmp1108;
    panda$collections$Array* $tmp1111 = (panda$collections$Array*) malloc(40);
    $tmp1111->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1111->refCount.value = 1;
    panda$collections$Array$init($tmp1111);
    idChildren1110 = $tmp1111;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1113 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1113.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1115 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1114 = $tmp1115;
        if (((panda$core$Bit) { t1114 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1110, ((panda$core$Object*) t1114));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1116 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1116->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1116->refCount.value = 1;
    panda$core$String* $tmp1118 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1104.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1116, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1104.value).position, ((panda$core$Object*) $tmp1118), ((panda$collections$ListView*) idChildren1110));
    panda$collections$Array$add$panda$collections$Array$T(children1107, ((panda$core$Object*) $tmp1116));
    $l1119:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1121 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1121.nonnull }).value) goto $l1120;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1123 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1122);
        id1104 = $tmp1123;
        if (((panda$core$Bit) { !id1104.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1110);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1124 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1124.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1126 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1125 = $tmp1126;
            if (((panda$core$Bit) { t1125 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1110, ((panda$core$Object*) t1125));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1127 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1127->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1127->refCount.value = 1;
        panda$core$String* $tmp1129 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1104.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1127, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1104.value).position, ((panda$core$Object*) $tmp1129), ((panda$collections$ListView*) idChildren1110));
        panda$collections$Array$add$panda$collections$Array$T(children1107, ((panda$core$Object*) $tmp1127));
    }
    goto $l1119;
    $l1120:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1131 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s1130);
    if (((panda$core$Bit) { !$tmp1131.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1132 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1132->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1132->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1132, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1101.value).position, ((panda$collections$ListView*) children1107));
    return $tmp1132;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1134;
    panda$collections$Array* children1137;
    org$pandalanguage$pandac$ASTNode* t1140;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1136 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s1135);
    start1134 = $tmp1136;
    if (((panda$core$Bit) { !start1134.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1138 = (panda$collections$Array*) malloc(40);
    $tmp1138->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1138->refCount.value = 1;
    panda$collections$Array$init($tmp1138);
    children1137 = $tmp1138;
    org$pandalanguage$pandac$ASTNode* $tmp1141 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1140 = $tmp1141;
    if (((panda$core$Bit) { t1140 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1137, ((panda$core$Object*) t1140));
    $l1142:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1144 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1144.nonnull }).value) goto $l1143;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1145 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1140 = $tmp1145;
        if (((panda$core$Bit) { t1140 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1137, ((panda$core$Object*) t1140));
    }
    goto $l1142;
    $l1143:;
    org$pandalanguage$pandac$ASTNode* $tmp1146 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1146->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1146->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1146, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1134.value).position, ((panda$collections$ListView*) children1137));
    return $tmp1146;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1148;
    org$pandalanguage$pandac$parser$Token$nullable next1153;
    org$pandalanguage$pandac$Position $tmp1160;
    panda$collections$Array* $tmp1149 = (panda$collections$Array*) malloc(40);
    $tmp1149->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1149->refCount.value = 1;
    panda$collections$Array$init($tmp1149);
    children1148 = $tmp1149;
    $l1151:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1154 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 13 }));
        next1153 = $tmp1154;
        if (((panda$core$Bit) { !next1153.nonnull }).value) {
        {
            goto $l1152;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1155 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1155->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1155->refCount.value = 1;
        panda$core$String* $tmp1157 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1153.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1155, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1153.value).position, $tmp1157);
        panda$collections$Array$add$panda$collections$Array$T(children1148, ((panda$core$Object*) $tmp1155));
    }
    }
    $l1152:;
    org$pandalanguage$pandac$ASTNode* $tmp1158 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1158->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1158->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1160);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1158, ((panda$core$Int64) { 144 }), $tmp1160, ((panda$collections$ListView*) children1148));
    return $tmp1158;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1161;
    panda$core$MutableString* result1164;
    org$pandalanguage$pandac$parser$Token next1169;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1163 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 11 }), &$s1162);
    start1161 = $tmp1163;
    if (((panda$core$Bit) { !start1161.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1165 = (panda$core$MutableString*) malloc(48);
    $tmp1165->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1165->refCount.value = 1;
    panda$core$MutableString$init($tmp1165);
    result1164 = $tmp1165;
    $l1167:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1170 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1169 = $tmp1170;
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1169.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1171.value) {
        {
            goto $l1168;
        }
        }
        panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1169.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1172.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1161.value), &$s1173);
            return NULL;
        }
        }
        panda$core$String* $tmp1174 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1169);
        panda$core$MutableString$append$panda$core$String(result1164, $tmp1174);
    }
    }
    $l1168:;
    org$pandalanguage$pandac$ASTNode* $tmp1175 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1175->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1175->refCount.value = 1;
    panda$core$String* $tmp1177 = panda$core$MutableString$finish$R$panda$core$String(result1164);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1175, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1161.value).position, $tmp1177);
    return $tmp1175;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1178;
    org$pandalanguage$pandac$ASTNode* t1181;
    panda$collections$Array* children1183;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1180 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1179);
    id1178 = $tmp1180;
    if (((panda$core$Bit) { !id1178.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1182 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1181 = $tmp1182;
    if (((panda$core$Bit) { t1181 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1184 = (panda$collections$Array*) malloc(40);
    $tmp1184->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1184->refCount.value = 1;
    panda$collections$Array$init($tmp1184);
    children1183 = $tmp1184;
    panda$collections$Array$add$panda$collections$Array$T(children1183, ((panda$core$Object*) t1181));
    org$pandalanguage$pandac$ASTNode* $tmp1186 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1186->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1186->refCount.value = 1;
    panda$core$String* $tmp1188 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1178.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1186, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1178.value).position, ((panda$core$Object*) $tmp1188), ((panda$collections$ListView*) children1183));
    return $tmp1186;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1189;
    panda$collections$Array* children1192;
    org$pandalanguage$pandac$ASTNode* param1196;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1191 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s1190);
    start1189 = $tmp1191;
    if (((panda$core$Bit) { !start1189.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1193 = (panda$collections$Array*) malloc(40);
    $tmp1193->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1193->refCount.value = 1;
    panda$collections$Array$init($tmp1193);
    children1192 = $tmp1193;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1195 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1195.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1197 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1196 = $tmp1197;
        if (((panda$core$Bit) { param1196 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1192, ((panda$core$Object*) param1196));
        $l1198:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1200 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1200.nonnull }).value) goto $l1199;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1201 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
            param1196 = $tmp1201;
            if (((panda$core$Bit) { param1196 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1192, ((panda$core$Object*) param1196));
        }
        goto $l1198;
        $l1199:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1203 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1202);
        if (((panda$core$Bit) { !$tmp1203.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1204 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1204->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1204->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1204, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1189.value).position, ((panda$collections$ListView*) children1192));
    return $tmp1204;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1206;
    org$pandalanguage$pandac$parser$Token$nullable start1207;
    panda$core$String* name1211;
    panda$collections$Array* children1213;
    org$pandalanguage$pandac$ASTNode* params1216;
    org$pandalanguage$pandac$ASTNode* returnType1220;
    org$pandalanguage$pandac$Position $tmp1224;
    org$pandalanguage$pandac$ASTNode* b1227;
    org$pandalanguage$pandac$Position $tmp1231;
    org$pandalanguage$pandac$parser$Token token1232;
    panda$core$String* tokenText1234;
    org$pandalanguage$pandac$ASTNode* post1247;
    org$pandalanguage$pandac$Position $tmp1251;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1208 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 20 }));
    start1207 = $tmp1208;
    if (((panda$core$Bit) { !start1207.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1210 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 21 }), &$s1209);
        start1207 = $tmp1210;
        if (((panda$core$Bit) { !start1207.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1206 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1206 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1212 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1211 = $tmp1212;
    if (((panda$core$Bit) { name1211 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1214 = (panda$collections$Array*) malloc(40);
    $tmp1214->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1214->refCount.value = 1;
    panda$collections$Array$init($tmp1214);
    children1213 = $tmp1214;
    panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1217 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1216 = $tmp1217;
    if (((panda$core$Bit) { params1216 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) params1216));
    org$pandalanguage$pandac$parser$Token $tmp1218 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1218.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1219.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1221 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        returnType1220 = $tmp1221;
        if (((panda$core$Bit) { returnType1220 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) returnType1220));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1222 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1222->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1222->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1224);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1222, ((panda$core$Int64) { 138 }), $tmp1224);
        panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) $tmp1222));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1225 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1225.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1226.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1228 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
        b1227 = $tmp1228;
        if (((panda$core$Bit) { b1227 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) b1227));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1229 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1229->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1229->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1231);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1229, ((panda$core$Int64) { 138 }), $tmp1231);
        panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) $tmp1229));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1233 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1232 = $tmp1233;
    panda$core$String* $tmp1235 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1232);
    tokenText1234 = $tmp1235;
    panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1232.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1236 = $tmp1237.value;
    if (!$tmp1236) goto $l1238;
    panda$core$Bit $tmp1241 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1234, &$s1240);
    bool $tmp1239 = $tmp1241.value;
    if ($tmp1239) goto $l1242;
    panda$core$Bit $tmp1244 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1234, &$s1243);
    $tmp1239 = $tmp1244.value;
    $l1242:;
    panda$core$Bit $tmp1245 = { $tmp1239 };
    $tmp1236 = $tmp1245.value;
    $l1238:;
    panda$core$Bit $tmp1246 = { $tmp1236 };
    if ($tmp1246.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1248 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1247 = $tmp1248;
        if (((panda$core$Bit) { post1247 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) post1247));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1249 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1249->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1249->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1251);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1249, ((panda$core$Int64) { 138 }), $tmp1251);
        panda$collections$Array$add$panda$collections$Array$T(children1213, ((panda$core$Object*) $tmp1249));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1252 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1252->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1252->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1252, kind1206, ((org$pandalanguage$pandac$parser$Token) start1207.value).position, ((panda$core$Object*) name1211), ((panda$collections$ListView*) children1213));
    return $tmp1252;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1254;
    panda$collections$Array* children1257;
    org$pandalanguage$pandac$ASTNode* params1260;
    org$pandalanguage$pandac$ASTNode* b1262;
    org$pandalanguage$pandac$parser$Token token1264;
    panda$core$String* tokenText1266;
    org$pandalanguage$pandac$ASTNode* post1279;
    org$pandalanguage$pandac$Position $tmp1283;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1256 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s1255);
    start1254 = $tmp1256;
    if (((panda$core$Bit) { !start1254.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1258 = (panda$collections$Array*) malloc(40);
    $tmp1258->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1258->refCount.value = 1;
    panda$collections$Array$init($tmp1258);
    children1257 = $tmp1258;
    panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1261 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1260 = $tmp1261;
    if (((panda$core$Bit) { params1260 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) params1260));
    org$pandalanguage$pandac$ASTNode* $tmp1263 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    b1262 = $tmp1263;
    if (((panda$core$Bit) { b1262 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) b1262));
    org$pandalanguage$pandac$parser$Token $tmp1265 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1264 = $tmp1265;
    panda$core$String* $tmp1267 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1264);
    tokenText1266 = $tmp1267;
    panda$core$Bit $tmp1269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1264.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1268 = $tmp1269.value;
    if (!$tmp1268) goto $l1270;
    panda$core$Bit $tmp1273 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1266, &$s1272);
    bool $tmp1271 = $tmp1273.value;
    if ($tmp1271) goto $l1274;
    panda$core$Bit $tmp1276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1266, &$s1275);
    $tmp1271 = $tmp1276.value;
    $l1274:;
    panda$core$Bit $tmp1277 = { $tmp1271 };
    $tmp1268 = $tmp1277.value;
    $l1270:;
    panda$core$Bit $tmp1278 = { $tmp1268 };
    if ($tmp1278.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1280 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1279 = $tmp1280;
        if (((panda$core$Bit) { post1279 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) post1279));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1281 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1281->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1281->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1283);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1281, ((panda$core$Int64) { 138 }), $tmp1283);
        panda$collections$Array$add$panda$collections$Array$T(children1257, ((panda$core$Object*) $tmp1281));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1284 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1284->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1284->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1284, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1254.value).position, ((panda$collections$ListView*) children1257));
    return $tmp1284;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1286;
    panda$collections$Array* children1288;
    org$pandalanguage$pandac$ASTNode* $tmp1287 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1286 = $tmp1287;
    if (((panda$core$Bit) { decl1286 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1289 = (panda$collections$Array*) malloc(40);
    $tmp1289->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1289->refCount.value = 1;
    panda$collections$Array$init($tmp1289);
    children1288 = $tmp1289;
    panda$collections$Array$add$panda$collections$Array$T(children1288, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1288, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1288, ((panda$core$Object*) decl1286));
    org$pandalanguage$pandac$ASTNode* $tmp1291 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1291->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1291->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1291, ((panda$core$Int64) { 148 }), decl1286->position, ((panda$collections$ListView*) children1288));
    return $tmp1291;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1293;
    panda$collections$Array* types1296;
    org$pandalanguage$pandac$ASTNode* t1302;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1295 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1294);
    name1293 = $tmp1295;
    if (((panda$core$Bit) { !name1293.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1297 = (panda$collections$Array*) malloc(40);
    $tmp1297->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1297->refCount.value = 1;
    panda$collections$Array$init($tmp1297);
    types1296 = $tmp1297;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1299 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }));
    if (((panda$core$Bit) { $tmp1299.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1300 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1301 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1300.kind, ((panda$core$Int64) { 104 }));
        if ($tmp1301.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1303 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1302 = $tmp1303;
            if (((panda$core$Bit) { t1302 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(types1296, ((panda$core$Object*) t1302));
            $l1304:;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1306 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
            if (!((panda$core$Bit) { $tmp1306.nonnull }).value) goto $l1305;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1307 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t1302 = $tmp1307;
                if (((panda$core$Bit) { t1302 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(types1296, ((panda$core$Object*) t1302));
            }
            goto $l1304;
            $l1305:;
        }
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1309 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1308);
    if (((panda$core$Bit) { !$tmp1309.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1310 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1310->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1310->refCount.value = 1;
    panda$core$String* $tmp1312 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1293.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1310, ((panda$core$Int64) { 156 }), ((org$pandalanguage$pandac$parser$Token) name1293.value).position, ((panda$core$Object*) $tmp1312), ((panda$collections$ListView*) types1296));
    return $tmp1310;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, org$pandalanguage$pandac$ASTNode* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1313;
    org$pandalanguage$pandac$parser$Token$nullable name1316;
    panda$collections$Array* members1321;
    org$pandalanguage$pandac$ASTNode* dc1324;
    org$pandalanguage$pandac$Position $tmp1327;
    org$pandalanguage$pandac$parser$Token next1330;
    org$pandalanguage$pandac$ASTNode* c1339;
    org$pandalanguage$pandac$Position $tmp1343;
    org$pandalanguage$pandac$ASTNode* a1344;
    org$pandalanguage$pandac$Position $tmp1347;
    org$pandalanguage$pandac$parser$Token next1350;
    org$pandalanguage$pandac$ASTNode* decl1370;
    org$pandalanguage$pandac$Position $tmp1374;
    org$pandalanguage$pandac$Position $tmp1377;
    org$pandalanguage$pandac$ASTNode* decl1378;
    org$pandalanguage$pandac$Position $tmp1382;
    org$pandalanguage$pandac$Position $tmp1385;
    org$pandalanguage$pandac$ASTNode* decl1386;
    org$pandalanguage$pandac$Position $tmp1390;
    org$pandalanguage$pandac$Position $tmp1393;
    org$pandalanguage$pandac$ASTNode* decl1394;
    org$pandalanguage$pandac$Position $tmp1398;
    org$pandalanguage$pandac$Position $tmp1401;
    org$pandalanguage$pandac$ASTNode* decl1402;
    org$pandalanguage$pandac$Position $tmp1406;
    org$pandalanguage$pandac$Position $tmp1409;
    panda$collections$Array* children1411;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1315 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 19 }), &$s1314);
    start1313 = $tmp1315;
    if (((panda$core$Bit) { !start1313.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1318 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1317);
    name1316 = $tmp1318;
    if (((panda$core$Bit) { !name1316.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1320 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1319);
    if (((panda$core$Bit) { !$tmp1320.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1322 = (panda$collections$Array*) malloc(40);
    $tmp1322->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1322->refCount.value = 1;
    panda$collections$Array$init($tmp1322);
    members1321 = $tmp1322;
    org$pandalanguage$pandac$ASTNode* $tmp1325 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1325->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1325->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1327);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1325, ((panda$core$Int64) { 138 }), $tmp1327);
    dc1324 = $tmp1325;
    $l1328:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1331 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1330 = $tmp1331;
        switch (next1330.kind.value) {
            case 17:
            case 18:
            case 19:
            case 21:
            case 20:
            case 13:
            case 23:
            case 24:
            case 25:
            case 26:
            {
                goto $l1329;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1332 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1324->kind, ((panda$core$Int64) { 138 }));
                if ($tmp1332.value) {
                {
                    panda$core$String* $tmp1334 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1330);
                    panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1333, $tmp1334);
                    panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1336);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1330, $tmp1337);
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1338 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1324 = $tmp1338;
            }
            break;
            case 48:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1340 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1324);
                c1339 = $tmp1340;
                if (((panda$core$Bit) { c1339 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1321, ((panda$core$Object*) c1339));
                org$pandalanguage$pandac$ASTNode* $tmp1341 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1341->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1341->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1343);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1341, ((panda$core$Int64) { 138 }), $tmp1343);
                dc1324 = $tmp1341;
            }
            break;
        }
    }
    }
    $l1329:;
    org$pandalanguage$pandac$ASTNode* $tmp1345 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1345->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1345->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1347);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1345, ((panda$core$Int64) { 138 }), $tmp1347);
    a1344 = $tmp1345;
    $l1348:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1351 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1350 = $tmp1351;
        switch (next1350.kind.value) {
            case 13:
            {
                panda$core$Bit $tmp1352 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(a1344->kind, ((panda$core$Int64) { 138 }));
                if ($tmp1352.value) {
                {
                    panda$core$String* $tmp1354 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1350);
                    panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1353, $tmp1354);
                    panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1355, &$s1356);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1350, $tmp1357);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1358 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
                a1344 = $tmp1358;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1360 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1324->kind, ((panda$core$Int64) { 138 }));
                bool $tmp1359 = $tmp1360.value;
                if ($tmp1359) goto $l1361;
                panda$core$Bit $tmp1362 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(a1344->kind, ((panda$core$Int64) { 138 }));
                $tmp1359 = $tmp1362.value;
                $l1361:;
                panda$core$Bit $tmp1363 = { $tmp1359 };
                if ($tmp1363.value) {
                {
                    panda$core$String* $tmp1365 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1350);
                    panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1364, $tmp1365);
                    panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1367);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1350, $tmp1368);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1369 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1324 = $tmp1369;
            }
            break;
            case 17:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1371 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1324, a1344);
                decl1370 = $tmp1371;
                if (((panda$core$Bit) { decl1370 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1321, ((panda$core$Object*) decl1370));
                org$pandalanguage$pandac$ASTNode* $tmp1372 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1372->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1372->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1374);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1372, ((panda$core$Int64) { 138 }), $tmp1374);
                dc1324 = $tmp1372;
                org$pandalanguage$pandac$ASTNode* $tmp1375 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1375->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1375->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1377);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1375, ((panda$core$Int64) { 138 }), $tmp1377);
                a1344 = $tmp1375;
            }
            break;
            case 18:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1379 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1324, a1344);
                decl1378 = $tmp1379;
                if (((panda$core$Bit) { decl1378 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1321, ((panda$core$Object*) decl1378));
                org$pandalanguage$pandac$ASTNode* $tmp1380 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1380->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1380->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1382);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1380, ((panda$core$Int64) { 138 }), $tmp1382);
                dc1324 = $tmp1380;
                org$pandalanguage$pandac$ASTNode* $tmp1383 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1383->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1383->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1385);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1383, ((panda$core$Int64) { 138 }), $tmp1385);
                a1344 = $tmp1383;
            }
            break;
            case 19:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1387 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1324, a1344);
                decl1386 = $tmp1387;
                if (((panda$core$Bit) { decl1386 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1321, ((panda$core$Object*) decl1386));
                org$pandalanguage$pandac$ASTNode* $tmp1388 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1388->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1388->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1390);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1388, ((panda$core$Int64) { 138 }), $tmp1390);
                dc1324 = $tmp1388;
                org$pandalanguage$pandac$ASTNode* $tmp1391 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1391->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1391->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1393);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1391, ((panda$core$Int64) { 138 }), $tmp1393);
                a1344 = $tmp1391;
            }
            break;
            case 21:
            case 20:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1395 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1324, a1344);
                decl1394 = $tmp1395;
                if (((panda$core$Bit) { decl1394 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1321, ((panda$core$Object*) decl1394));
                org$pandalanguage$pandac$ASTNode* $tmp1396 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1396->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1396->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1398);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1396, ((panda$core$Int64) { 138 }), $tmp1398);
                dc1324 = $tmp1396;
                org$pandalanguage$pandac$ASTNode* $tmp1399 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1399->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1399->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1401);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1399, ((panda$core$Int64) { 138 }), $tmp1401);
                a1344 = $tmp1399;
            }
            break;
            case 23:
            case 24:
            case 25:
            case 26:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1403 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1324, a1344);
                decl1402 = $tmp1403;
                if (((panda$core$Bit) { decl1402 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1321, ((panda$core$Object*) decl1402));
                org$pandalanguage$pandac$ASTNode* $tmp1404 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1404->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1404->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1406);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1404, ((panda$core$Int64) { 138 }), $tmp1406);
                dc1324 = $tmp1404;
                org$pandalanguage$pandac$ASTNode* $tmp1407 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1407->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1407->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1409);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1407, ((panda$core$Int64) { 138 }), $tmp1409);
                a1344 = $tmp1407;
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s1410);
                goto $l1349;
            }
            break;
        }
    }
    }
    $l1349:;
    panda$collections$Array* $tmp1412 = (panda$collections$Array*) malloc(40);
    $tmp1412->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1412->refCount.value = 1;
    panda$collections$Array$init($tmp1412);
    children1411 = $tmp1412;
    panda$collections$Array$add$panda$collections$Array$T(children1411, ((panda$core$Object*) p_choiceDoccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1411, ((panda$core$Object*) p_choiceAnnotations));
    org$pandalanguage$pandac$ASTNode* $tmp1414 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1414->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1414->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1414, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1313.value).position, ((panda$collections$ListView*) members1321));
    panda$collections$Array$add$panda$collections$Array$T(children1411, ((panda$core$Object*) $tmp1414));
    org$pandalanguage$pandac$ASTNode* $tmp1416 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1416->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1416->refCount.value = 1;
    panda$core$String* $tmp1418 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1316.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1416, ((panda$core$Int64) { 155 }), ((org$pandalanguage$pandac$parser$Token) start1313.value).position, ((panda$core$Object*) $tmp1418), ((panda$collections$ListView*) children1411));
    return $tmp1416;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1419;
    org$pandalanguage$pandac$ASTNode* dc1421;
    org$pandalanguage$pandac$Position $tmp1426;
    org$pandalanguage$pandac$ASTNode* a1427;
    org$pandalanguage$pandac$parser$Token $tmp1420 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start1419 = $tmp1420;
    panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1419.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1422.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1423 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
        dc1421 = $tmp1423;
        if (((panda$core$Bit) { dc1421 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1424 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1424->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1424->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1426);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1424, ((panda$core$Int64) { 138 }), $tmp1426);
        dc1421 = $tmp1424;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1428 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
    a1427 = $tmp1428;
    if (((panda$core$Bit) { a1427 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1429 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1429.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1430 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1421, a1427);
            return $tmp1430;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1431 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1421, a1427);
            return $tmp1431;
        }
        break;
        case 19:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1432 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1421, a1427);
            return $tmp1432;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1433 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1421, a1427);
            return $tmp1433;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1434 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1421, a1427);
            return $tmp1434;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1435 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1421, a1427);
            return $tmp1435;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1436);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1437;
    org$pandalanguage$pandac$parser$Token$nullable start1440;
    org$pandalanguage$pandac$parser$Token$nullable name1443;
    org$pandalanguage$pandac$ASTNode* generics1448;
    org$pandalanguage$pandac$Position $tmp1452;
    org$pandalanguage$pandac$ASTNode* stypes1455;
    org$pandalanguage$pandac$Position $tmp1459;
    panda$collections$Array* members1462;
    org$pandalanguage$pandac$ASTNode* member1468;
    panda$collections$Array* $tmp1438 = (panda$collections$Array*) malloc(40);
    $tmp1438->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1438->refCount.value = 1;
    panda$collections$Array$init($tmp1438);
    children1437 = $tmp1438;
    panda$collections$Array$add$panda$collections$Array$T(children1437, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1437, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1442 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1441);
    start1440 = $tmp1442;
    if (((panda$core$Bit) { !start1440.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1445 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1444);
    name1443 = $tmp1445;
    if (((panda$core$Bit) { !name1443.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1446 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1446.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1447.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1449 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1448 = $tmp1449;
        if (((panda$core$Bit) { generics1448 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1437, ((panda$core$Object*) generics1448));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1450 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1450->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1450->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1452);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1450, ((panda$core$Int64) { 138 }), $tmp1452);
        panda$collections$Array$add$panda$collections$Array$T(children1437, ((panda$core$Object*) $tmp1450));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1453 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1453.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1454.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1456 = org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(self);
        stypes1455 = $tmp1456;
        if (((panda$core$Bit) { stypes1455 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1437, ((panda$core$Object*) stypes1455));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1457 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1457->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1457->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1459);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1457, ((panda$core$Int64) { 139 }), $tmp1459);
        panda$collections$Array$add$panda$collections$Array$T(children1437, ((panda$core$Object*) $tmp1457));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1461 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1460);
    if (((panda$core$Bit) { !$tmp1461.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1463 = (panda$collections$Array*) malloc(40);
    $tmp1463->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1463->refCount.value = 1;
    panda$collections$Array$init($tmp1463);
    members1462 = $tmp1463;
    $l1465:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1467 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1467.nonnull }).value) goto $l1466;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1469 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1468 = $tmp1469;
        if (((panda$core$Bit) { member1468 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1462, ((panda$core$Object*) member1468));
    }
    goto $l1465;
    $l1466:;
    org$pandalanguage$pandac$ASTNode* $tmp1470 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1470->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1470->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1470, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1440.value).position, ((panda$collections$ListView*) members1462));
    panda$collections$Array$add$panda$collections$Array$T(children1437, ((panda$core$Object*) $tmp1470));
    org$pandalanguage$pandac$ASTNode* $tmp1472 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1472->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1472->refCount.value = 1;
    panda$core$String* $tmp1474 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1443.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1472, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1440.value).position, ((panda$core$Object*) $tmp1474), ((panda$collections$ListView*) children1437));
    return $tmp1472;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1475;
    org$pandalanguage$pandac$parser$Token$nullable start1478;
    org$pandalanguage$pandac$parser$Token$nullable name1481;
    org$pandalanguage$pandac$ASTNode* generics1486;
    org$pandalanguage$pandac$Position $tmp1490;
    panda$collections$Array* intfs1491;
    org$pandalanguage$pandac$ASTNode* t1495;
    panda$collections$Array* members1505;
    org$pandalanguage$pandac$ASTNode* member1511;
    panda$collections$Array* $tmp1476 = (panda$collections$Array*) malloc(40);
    $tmp1476->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1476->refCount.value = 1;
    panda$collections$Array$init($tmp1476);
    children1475 = $tmp1476;
    panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1480 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 18 }), &$s1479);
    start1478 = $tmp1480;
    if (((panda$core$Bit) { !start1478.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1483 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1482);
    name1481 = $tmp1483;
    if (((panda$core$Bit) { !name1481.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1484 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1484.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1485.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1487 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1486 = $tmp1487;
        if (((panda$core$Bit) { generics1486 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) generics1486));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1488 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1488->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1488->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1490);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1488, ((panda$core$Int64) { 138 }), $tmp1490);
        panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) $tmp1488));
    }
    }
    panda$collections$Array* $tmp1492 = (panda$collections$Array*) malloc(40);
    $tmp1492->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1492->refCount.value = 1;
    panda$collections$Array$init($tmp1492);
    intfs1491 = $tmp1492;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1494 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1494.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1496 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1495 = $tmp1496;
        if (((panda$core$Bit) { t1495 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1491, ((panda$core$Object*) t1495));
        $l1497:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1499 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1499.nonnull }).value) goto $l1498;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1500 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1495 = $tmp1500;
            if (((panda$core$Bit) { t1495 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1491, ((panda$core$Object*) t1495));
        }
        goto $l1497;
        $l1498:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1501 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1501->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1501->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1501, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1478.value).position, ((panda$collections$ListView*) intfs1491));
    panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) $tmp1501));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1504 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1503);
    if (((panda$core$Bit) { !$tmp1504.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1506 = (panda$collections$Array*) malloc(40);
    $tmp1506->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1506->refCount.value = 1;
    panda$collections$Array$init($tmp1506);
    members1505 = $tmp1506;
    $l1508:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1510 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1510.nonnull }).value) goto $l1509;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1512 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1511 = $tmp1512;
        if (((panda$core$Bit) { member1511 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1505, ((panda$core$Object*) member1511));
    }
    goto $l1508;
    $l1509:;
    org$pandalanguage$pandac$ASTNode* $tmp1513 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1513->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1513->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1513, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1478.value).position, ((panda$collections$ListView*) members1505));
    panda$collections$Array$add$panda$collections$Array$T(children1475, ((panda$core$Object*) $tmp1513));
    org$pandalanguage$pandac$ASTNode* $tmp1515 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1515->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1515->refCount.value = 1;
    panda$core$String* $tmp1517 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1481.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1515, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1478.value).position, ((panda$core$Object*) $tmp1517), ((panda$collections$ListView*) children1475));
    return $tmp1515;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1518 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1518.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1519 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1519;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1520 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1520;
        }
        break;
        case 17:
        case 18:
        case 19:
        case 21:
        case 20:
        case 13:
        case 11:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1521 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1521;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1522 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1522;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1523;
    org$pandalanguage$pandac$ASTNode* entry1530;
    org$pandalanguage$pandac$Position $tmp1535;
    panda$collections$Array* $tmp1524 = (panda$collections$Array*) malloc(40);
    $tmp1524->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1524->refCount.value = 1;
    panda$collections$Array$init($tmp1524);
    entries1523 = $tmp1524;
    $l1526:;
    org$pandalanguage$pandac$parser$Token $tmp1528 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1529 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1528.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1529.value) goto $l1527;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1531 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry1530 = $tmp1531;
        if (((panda$core$Bit) { entry1530 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1532 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1532.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1523, ((panda$core$Object*) entry1530));
    }
    goto $l1526;
    $l1527:;
    org$pandalanguage$pandac$ASTNode* $tmp1533 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1533->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1533->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1535, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1533, ((panda$core$Int64) { 152 }), $tmp1535, ((panda$collections$ListView*) entries1523));
    return $tmp1533;
}

