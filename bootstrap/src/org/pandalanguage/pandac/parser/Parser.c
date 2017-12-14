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


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn57)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef panda$core$Object* (*$fn136)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn224)(panda$collections$Iterator*);

static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6E\x67\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x6C\x69\x74\x65\x72\x61\x6C", 27, 6051269863884878617, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x72\x69\x6E\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x76\x61\x6C\x69\x64\x20\x73\x74\x72\x69\x6E\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6E\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72\x20\x6F\x72\x20\x6F\x70\x65\x72\x61\x74\x6F\x72\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5D\x27", 3, 1437572, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6F\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x27", 4, 145324394, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27", 4, 145273490, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6C\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6C\x6F\x6F\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6E\x27", 6, 1483905450613, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6E\x27\x2C\x20\x27\x6F\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2C\x20\x6F\x72\x20\x27\x7D\x27\x2C\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x75\x6E\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3D\x27\x2C\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6F\x75\x20\x6D\x65\x61\x6E\x74\x20\x27\x3A\x3D\x27\x3F", 39, 5160334537588978262, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2C\x20\x27\x64\x65\x66\x27\x2C\x20\x27\x70\x72\x6F\x70\x65\x72\x74\x79\x27\x2C\x20\x6F\x72\x20\x27\x63\x6F\x6E\x73\x74\x61\x6E\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6B\x27", 7, 149654778879696, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6F\x6E\x74\x69\x6E\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6E\x27", 8, 15131981939543051, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6F\x27\x2C\x20\x27\x66\x6F\x72\x27\x2C\x20\x27\x6C\x6F\x6F\x70\x27\x2C\x20\x6F\x72\x20\x27\x77\x68\x69\x6C\x65\x27\x20\x66\x6F\x6C\x6C\x6F\x77\x69\x6E\x67\x20\x6C\x61\x62\x65\x6C", 47, -2376482472870228684, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6D\x65\x6E\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6B\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3C\x27", 3, 1434239, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3E\x27", 3, 1434441, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3A\x27", 3, 1434037, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x74\x65\x72\x6D\x69\x6E\x61\x74\x65\x64\x20\x64\x6F\x63\x75\x6D\x65\x6E\x74\x61\x74\x69\x6F\x6E\x20\x63\x6F\x6D\x6D\x65\x6E\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6D\x65\x74\x68\x6F\x64\x27\x20\x6F\x72\x20\x27\x66\x75\x6E\x63\x74\x69\x6F\x6E\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6F\x73\x74\x41\x6E\x64", 7, 227282500368930, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x68\x6F\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E\x2C\x20\x62\x75\x74\x20\x66\x6F\x75\x6E\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7D\x27", 3, 1440804, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6C\x61\x72\x61\x74\x69\x6F\x6E", 13, 8609604847663634804, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6C\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6E\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x20\x69\x64\x65\x6E\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7B\x27", 3, 1440602, NULL };

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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start99;
    org$pandalanguage$pandac$ASTNode* result111;
    panda$core$MutableString* chunk112;
    org$pandalanguage$pandac$parser$Token token117;
    panda$core$String* str120;
    panda$core$Char8 $tmp122;
    org$pandalanguage$pandac$parser$Token escape126;
    panda$core$String* escapeText130;
    panda$core$Char8 c132;
    panda$core$Char8 $match$185_21138;
    panda$core$Char8 $tmp139;
    panda$core$Char8 $tmp141;
    panda$core$Char8 $tmp142;
    panda$core$Char8 $tmp144;
    panda$core$Char8 $tmp145;
    panda$core$Char8 $tmp147;
    panda$core$Char8 $tmp148;
    panda$core$Char8 $tmp150;
    panda$core$Char8 $tmp151;
    panda$core$Char8 $tmp153;
    panda$core$Char8 $tmp154;
    panda$core$Char8 $tmp156;
    panda$core$Char8 $tmp157;
    org$pandalanguage$pandac$ASTNode* expr159;
    panda$core$String* text163;
    panda$collections$Array* dotChildren176;
    org$pandalanguage$pandac$ASTNode* dot179;
    panda$collections$Array* callChildren183;
    org$pandalanguage$pandac$ASTNode* call186;
    panda$collections$Array* castChildren189;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp198;
    org$pandalanguage$pandac$parser$Token $tmp100 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start99 = $tmp100;
    panda$core$Bit $tmp102 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start99.kind, ((panda$core$Int64) { 7 }));
    bool $tmp101 = $tmp102.value;
    if (!$tmp101) goto $l103;
    panda$core$Bit $tmp104 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start99.kind, ((panda$core$Int64) { 6 }));
    $tmp101 = $tmp104.value;
    $l103:;
    panda$core$Bit $tmp105 = { $tmp101 };
    if ($tmp105.value) {
    {
        panda$core$String* $tmp107 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start99);
        panda$core$String* $tmp108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s106, $tmp107);
        panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp108, &$s109);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start99, $tmp110);
        return NULL;
    }
    }
    result111 = NULL;
    panda$core$MutableString* $tmp113 = (panda$core$MutableString*) malloc(48);
    $tmp113->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp113->refCount.value = 1;
    panda$core$MutableString$init($tmp113);
    chunk112 = $tmp113;
    $l115:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp118 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token117 = $tmp118;
        panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token117.kind, start99.kind);
        if ($tmp119.value) {
        {
            goto $l116;
        }
        }
        switch (token117.kind.value) {
            case 12:
            {
                panda$core$String* $tmp121 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token117);
                str120 = $tmp121;
                panda$core$Char8$init$panda$core$UInt8(&$tmp122, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp123 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str120, $tmp122);
                if ($tmp123.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start99, &$s124);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk112, str120);
            }
            break;
            case 0:
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start99, &$s125);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp127 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape126 = $tmp127;
                panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape126.kind, ((panda$core$Int64) { 0 }));
                if ($tmp128.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start99, &$s129);
                    return NULL;
                }
                }
                panda$core$String* $tmp131 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape126);
                escapeText130 = $tmp131;
                panda$collections$ListView* $tmp133 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText130);
                ITable* $tmp134 = $tmp133->$class->itable;
                while ($tmp134->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp134 = $tmp134->next;
                }
                $fn136 $tmp135 = $tmp134->methods[0];
                panda$core$Object* $tmp137 = $tmp135($tmp133, ((panda$core$Int64) { 0 }));
                c132 = ((panda$core$Char8$wrapper*) $tmp137)->value;
                {
                    $match$185_21138 = c132;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp139, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp140 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$185_21138, $tmp139);
                    if ($tmp140.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp141, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk112, $tmp141);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp143 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$185_21138, $tmp142);
                    if ($tmp143.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp144, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk112, $tmp144);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp145, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp146 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$185_21138, $tmp145);
                    if ($tmp146.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk112, $tmp147);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp148, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp149 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$185_21138, $tmp148);
                    if ($tmp149.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp150, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk112, $tmp150);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp152 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$185_21138, $tmp151);
                    if ($tmp152.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp153, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk112, $tmp153);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp154, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp155 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$185_21138, $tmp154);
                    if ($tmp155.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp156, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk112, $tmp156);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp157, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp158 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$185_21138, $tmp157);
                    if ($tmp158.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp160 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr159 = $tmp160;
                            if (((panda$core$Bit) { expr159 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp162 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s161);
                            if (((panda$core$Bit) { !$tmp162.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$core$String* $tmp164 = panda$core$MutableString$finish$R$panda$core$String(chunk112);
                            text163 = $tmp164;
                            panda$core$MutableString* $tmp165 = (panda$core$MutableString*) malloc(48);
                            $tmp165->$class = (panda$core$Class*) &panda$core$MutableString$class;
                            $tmp165->refCount.value = 1;
                            panda$core$MutableString$init($tmp165);
                            chunk112 = $tmp165;
                            panda$core$Bit $tmp169 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text163, &$s168);
                            bool $tmp167 = $tmp169.value;
                            if ($tmp167) goto $l170;
                            $tmp167 = ((panda$core$Bit) { result111 != NULL }).value;
                            $l170:;
                            panda$core$Bit $tmp171 = { $tmp167 };
                            if ($tmp171.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp172 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp172->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp172->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp172, ((panda$core$Int64) { 113 }), start99.position, text163);
                                org$pandalanguage$pandac$ASTNode* $tmp174 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result111, $tmp172);
                                result111 = $tmp174;
                                org$pandalanguage$pandac$ASTNode* $tmp175 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result111, expr159);
                                result111 = $tmp175;
                            }
                            }
                            else {
                            {
                                panda$collections$Array* $tmp177 = (panda$collections$Array*) malloc(40);
                                $tmp177->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp177->refCount.value = 1;
                                panda$collections$Array$init($tmp177);
                                dotChildren176 = $tmp177;
                                panda$collections$Array$add$panda$collections$Array$T(dotChildren176, ((panda$core$Object*) expr159));
                                org$pandalanguage$pandac$ASTNode* $tmp180 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp180->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp180->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp180, ((panda$core$Int64) { 108 }), expr159->position, ((panda$core$Object*) &$s182), ((panda$collections$ListView*) dotChildren176));
                                dot179 = $tmp180;
                                panda$collections$Array* $tmp184 = (panda$collections$Array*) malloc(40);
                                $tmp184->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp184->refCount.value = 1;
                                panda$collections$Array$init($tmp184);
                                callChildren183 = $tmp184;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren183, ((panda$core$Object*) dot179));
                                org$pandalanguage$pandac$ASTNode* $tmp187 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp187->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp187->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp187, ((panda$core$Int64) { 107 }), expr159->position, ((panda$collections$ListView*) callChildren183));
                                call186 = $tmp187;
                                panda$collections$Array* $tmp190 = (panda$collections$Array*) malloc(40);
                                $tmp190->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp190->refCount.value = 1;
                                panda$collections$Array$init($tmp190);
                                castChildren189 = $tmp190;
                                panda$collections$Array$add$panda$collections$Array$T(castChildren189, ((panda$core$Object*) call186));
                                org$pandalanguage$pandac$ASTNode* $tmp192 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp192->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp192->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp192, ((panda$core$Int64) { 109 }), expr159->position, &$s194);
                                panda$collections$Array$add$panda$collections$Array$T(castChildren189, ((panda$core$Object*) $tmp192));
                                org$pandalanguage$pandac$ASTNode* $tmp195 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp195->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp195->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp195, ((panda$core$Int64) { 111 }), expr159->position, ((panda$collections$ListView*) castChildren189));
                                result111 = $tmp195;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token117, &$s197);
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
                panda$core$String$Index $tmp199 = panda$core$String$start$R$panda$core$String$Index(escapeText130);
                panda$core$String$Index $tmp200 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText130, $tmp199);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp198, ((panda$core$String$Index$nullable) { $tmp200, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp201 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText130, $tmp198);
                panda$core$MutableString$append$panda$core$String(chunk112, $tmp201);
            }
            break;
            default:
            {
                panda$core$String* $tmp202 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token117);
                panda$core$MutableString$append$panda$core$String(chunk112, $tmp202);
            }
        }
    }
    }
    $l116:;
    org$pandalanguage$pandac$ASTNode* $tmp203 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp203->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp203->refCount.value = 1;
    panda$core$String* $tmp205 = panda$core$MutableString$finish$R$panda$core$String(chunk112);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp203, ((panda$core$Int64) { 113 }), start99.position, $tmp205);
    org$pandalanguage$pandac$ASTNode* $tmp206 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result111, $tmp203);
    return $tmp206;
}
panda$core$UInt64 org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_s, panda$core$UInt64 p_base) {
    panda$core$UInt64 result207;
    panda$collections$Iterator* c$Iter208;
    panda$core$Char8 c221;
    panda$core$UInt64 i227;
    result207 = ((panda$core$UInt64) { 0 });
    {
        panda$collections$ListView* $tmp209 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp210 = ((panda$collections$Iterable*) $tmp209)->$class->itable;
        while ($tmp210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp210 = $tmp210->next;
        }
        $fn212 $tmp211 = $tmp210->methods[0];
        panda$collections$Iterator* $tmp213 = $tmp211(((panda$collections$Iterable*) $tmp209));
        c$Iter208 = $tmp213;
        $l214:;
        ITable* $tmp216 = c$Iter208->$class->itable;
        while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp216 = $tmp216->next;
        }
        $fn218 $tmp217 = $tmp216->methods[0];
        panda$core$Bit $tmp219 = $tmp217(c$Iter208);
        panda$core$Bit $tmp220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp219);
        if (!$tmp220.value) goto $l215;
        {
            ITable* $tmp222 = c$Iter208->$class->itable;
            while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp222 = $tmp222->next;
            }
            $fn224 $tmp223 = $tmp222->methods[1];
            panda$core$Object* $tmp225 = $tmp223(c$Iter208);
            c221 = ((panda$core$Char8$wrapper*) $tmp225)->value;
            panda$core$UInt64 $tmp226 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result207, p_base);
            result207 = $tmp226;
            panda$core$UInt64 $tmp228 = panda$core$Char8$convert$R$panda$core$UInt64(c221);
            i227 = $tmp228;
            panda$core$Bit $tmp230 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i227, ((panda$core$UInt64) { 48 }));
            bool $tmp229 = $tmp230.value;
            if (!$tmp229) goto $l231;
            panda$core$Bit $tmp232 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i227, ((panda$core$UInt64) { 57 }));
            $tmp229 = $tmp232.value;
            $l231:;
            panda$core$Bit $tmp233 = { $tmp229 };
            if ($tmp233.value) {
            {
                panda$core$UInt64 $tmp234 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i227, ((panda$core$UInt64) { 48 }));
                panda$core$UInt64 $tmp235 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result207, $tmp234);
                result207 = $tmp235;
            }
            }
            else {
            panda$core$Bit $tmp237 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i227, ((panda$core$UInt64) { 65 }));
            bool $tmp236 = $tmp237.value;
            if (!$tmp236) goto $l238;
            panda$core$Bit $tmp239 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i227, ((panda$core$UInt64) { 70 }));
            $tmp236 = $tmp239.value;
            $l238:;
            panda$core$Bit $tmp240 = { $tmp236 };
            if ($tmp240.value) {
            {
                panda$core$UInt64 $tmp241 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i227, ((panda$core$UInt64) { 55 }));
                panda$core$UInt64 $tmp242 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result207, $tmp241);
                result207 = $tmp242;
            }
            }
            else {
            {
                panda$core$Bit $tmp244 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(i227, ((panda$core$UInt64) { 97 }));
                bool $tmp243 = $tmp244.value;
                if (!$tmp243) goto $l245;
                panda$core$Bit $tmp246 = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(i227, ((panda$core$UInt64) { 102 }));
                $tmp243 = $tmp246.value;
                $l245:;
                panda$core$Bit $tmp247 = { $tmp243 };
                PANDA_ASSERT($tmp247.value);
                panda$core$UInt64 $tmp248 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(i227, ((panda$core$UInt64) { 87 }));
                panda$core$UInt64 $tmp249 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(result207, $tmp248);
                result207 = $tmp249;
            }
            }
            }
        }
        goto $l214;
        $l215:;
    }
    return result207;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t250;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp262;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp268;
    panda$core$Real64 $tmp274;
    org$pandalanguage$pandac$ASTNode* result286;
    org$pandalanguage$pandac$parser$Token $tmp251 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t250 = $tmp251;
    switch (t250.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp252 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp252->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp252->refCount.value = 1;
            panda$core$String* $tmp254 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t250);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp252, ((panda$core$Int64) { 106 }), t250.position, $tmp254);
            return $tmp252;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp255 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp255->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp255->refCount.value = 1;
            panda$core$String* $tmp257 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t250);
            panda$core$UInt64$nullable $tmp258 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp257);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp255, ((panda$core$Int64) { 102 }), t250.position, ((panda$core$UInt64) $tmp258.value));
            return $tmp255;
        }
        break;
        case 3:
        {
            org$pandalanguage$pandac$ASTNode* $tmp259 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp259->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp259->refCount.value = 1;
            panda$core$String* $tmp261 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t250);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp262, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp263 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp261, $tmp262);
            panda$core$UInt64 $tmp264 = org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(self, $tmp263, ((panda$core$UInt64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp259, ((panda$core$Int64) { 102 }), t250.position, $tmp264);
            return $tmp259;
        }
        break;
        case 4:
        {
            org$pandalanguage$pandac$ASTNode* $tmp265 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp265->refCount.value = 1;
            panda$core$String* $tmp267 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t250);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp268, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp269 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp267, $tmp268);
            panda$core$UInt64 $tmp270 = org$pandalanguage$pandac$parser$Parser$toUInt64$panda$core$String$panda$core$UInt64$R$panda$core$UInt64(self, $tmp269, ((panda$core$UInt64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp265, ((panda$core$Int64) { 102 }), t250.position, $tmp270);
            return $tmp265;
        }
        break;
        case 5:
        {
            org$pandalanguage$pandac$ASTNode* $tmp271 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp271->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp271->refCount.value = 1;
            panda$core$String* $tmp273 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t250);
            panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp274, $tmp273);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp271, ((panda$core$Int64) { 157 }), t250.position, $tmp274);
            return $tmp271;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp275 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp275->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp275->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp275, ((panda$core$Int64) { 114 }), t250.position);
            return $tmp275;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp277 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp277->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp277->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp277, ((panda$core$Int64) { 115 }), t250.position);
            return $tmp277;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp279 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp279->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp279->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp279, ((panda$core$Int64) { 117 }), t250.position);
            return $tmp279;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp281 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp281->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp281->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp281, ((panda$core$Int64) { 116 }), t250.position, ((panda$core$Bit) { true }));
            return $tmp281;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp283 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp283->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp283->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp283, ((panda$core$Int64) { 116 }), t250.position, ((panda$core$Bit) { false }));
            return $tmp283;
        }
        break;
        case 7:
        case 6:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t250);
            org$pandalanguage$pandac$ASTNode* $tmp285 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp285;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp287 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result286 = $tmp287;
            if (((panda$core$Bit) { result286 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp289 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s288);
            if (((panda$core$Bit) { !$tmp289.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result286;
        }
        break;
        default:
        {
            panda$core$String* $tmp291 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t250);
            panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s290, $tmp291);
            panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s293);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t250, $tmp294);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result295;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp296 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp297 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp296));
            result295 = $tmp297;
            if (((panda$core$Bit) { result295 != NULL }).value) {
            {
                panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s298, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result295, $tmp299);
                result295 = $tmp300;
            }
            }
            return result295;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name301;
    org$pandalanguage$pandac$parser$Token token304;
    org$pandalanguage$pandac$parser$Token $tmp302 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name301 = $tmp302;
    switch (name301.kind.value) {
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
            panda$core$String* $tmp303 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name301);
            return $tmp303;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp305 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token304 = $tmp305;
            panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token304.kind, ((panda$core$Int64) { 63 }));
            if ($tmp306.value) {
            {
                return &$s307;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token304);
                return &$s308;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp310 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s309);
            if (((panda$core$Bit) { !$tmp310.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp311 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp311.nonnull }).value) {
            {
                return &$s312;
            }
            }
            return &$s313;
        }
        break;
        default:
        {
            panda$core$String* $tmp315 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name301);
            panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s314, $tmp315);
            panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, &$s317);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name301, $tmp318);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp319 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp319;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start320;
    panda$core$MutableString* name323;
    org$pandalanguage$pandac$parser$Token$nullable id330;
    panda$core$Char8 $tmp333;
    org$pandalanguage$pandac$ASTNode* result335;
    panda$core$Char8 $tmp341;
    panda$collections$Array* children342;
    org$pandalanguage$pandac$ASTNode* t345;
    panda$core$Char8 $tmp354;
    panda$collections$Array* children359;
    org$pandalanguage$pandac$parser$Token$nullable $tmp322 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s321);
    start320 = $tmp322;
    if (((panda$core$Bit) { !start320.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp324 = (panda$core$MutableString*) malloc(48);
    $tmp324->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp324->refCount.value = 1;
    panda$core$String* $tmp326 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start320.value));
    panda$core$MutableString$init$panda$core$String($tmp324, $tmp326);
    name323 = $tmp324;
    $l327:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp329 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp329.nonnull }).value) goto $l328;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp332 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s331);
        id330 = $tmp332;
        if (((panda$core$Bit) { !id330.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp333, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name323, $tmp333);
        panda$core$String* $tmp334 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id330.value));
        panda$core$MutableString$append$panda$core$String(name323, $tmp334);
    }
    goto $l327;
    $l328:;
    org$pandalanguage$pandac$ASTNode* $tmp336 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp336->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp336->refCount.value = 1;
    panda$core$String* $tmp338 = panda$core$MutableString$convert$R$panda$core$String(name323);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp336, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start320.value).position, $tmp338);
    result335 = $tmp336;
    org$pandalanguage$pandac$parser$Token $tmp339 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp339.kind, ((panda$core$Int64) { 62 }));
    if ($tmp340.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp341, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name323, $tmp341);
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp343 = (panda$collections$Array*) malloc(40);
        $tmp343->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp343->refCount.value = 1;
        panda$collections$Array$init($tmp343);
        children342 = $tmp343;
        panda$collections$Array$add$panda$collections$Array$T(children342, ((panda$core$Object*) result335));
        org$pandalanguage$pandac$ASTNode* $tmp346 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t345 = $tmp346;
        if (((panda$core$Bit) { t345 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result335;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children342, ((panda$core$Object*) t345));
        panda$core$MutableString$append$panda$core$Object(name323, ((panda$core$Object*) t345));
        $l347:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp349 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp349.nonnull }).value) goto $l348;
        {
            org$pandalanguage$pandac$ASTNode* $tmp350 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
            t345 = $tmp350;
            if (((panda$core$Bit) { t345 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result335;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children342, ((panda$core$Object*) t345));
            panda$core$MutableString$append$panda$core$String(name323, &$s351);
            panda$core$MutableString$append$panda$core$Object(name323, ((panda$core$Object*) t345));
        }
        goto $l347;
        $l348:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp353 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s352);
        if (((panda$core$Bit) { !$tmp353.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result335;
            }
            }
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp354, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name323, $tmp354);
        org$pandalanguage$pandac$ASTNode* $tmp355 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp355->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp355->refCount.value = 1;
        panda$core$String* $tmp357 = panda$core$MutableString$finish$R$panda$core$String(name323);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp355, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start320.value).position, ((panda$core$Object*) $tmp357), ((panda$collections$ListView*) children342));
        result335 = $tmp355;
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp358 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp358.nonnull }).value) {
    {
        panda$collections$Array* $tmp360 = (panda$collections$Array*) malloc(40);
        $tmp360->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp360->refCount.value = 1;
        panda$collections$Array$init($tmp360);
        children359 = $tmp360;
        panda$collections$Array$add$panda$collections$Array$T(children359, ((panda$core$Object*) result335));
        org$pandalanguage$pandac$ASTNode* $tmp362 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp362->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp362->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp362, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start320.value).position, ((panda$collections$ListView*) children359));
        result335 = $tmp362;
    }
    }
    return result335;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result364;
    org$pandalanguage$pandac$parser$Token token368;
    panda$collections$Array* children370;
    org$pandalanguage$pandac$ASTNode* expr374;
    panda$collections$Array* children384;
    org$pandalanguage$pandac$ASTNode* expr387;
    panda$core$String* name393;
    panda$collections$Array* children397;
    org$pandalanguage$pandac$ASTNode* target402;
    panda$collections$Array* children404;
    panda$core$String* name409;
    panda$core$MutableString* finalName411;
    panda$core$Char8 $tmp414;
    panda$collections$Array* types415;
    org$pandalanguage$pandac$ASTNode* t420;
    panda$core$Char8 $tmp429;
    panda$core$Bit shouldAccept430;
    org$pandalanguage$pandac$ASTNode* $tmp365 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result364 = $tmp365;
    if (((panda$core$Bit) { result364 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l366:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp369 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token368 = $tmp369;
        switch (token368.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp371 = (panda$collections$Array*) malloc(40);
                $tmp371->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp371->refCount.value = 1;
                panda$collections$Array$init($tmp371);
                children370 = $tmp371;
                panda$collections$Array$add$panda$collections$Array$T(children370, ((panda$core$Object*) result364));
                org$pandalanguage$pandac$parser$Token$nullable $tmp373 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp373.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp375 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr374 = $tmp375;
                    if (((panda$core$Bit) { expr374 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children370, ((panda$core$Object*) expr374));
                    $l376:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp378 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp378.nonnull }).value) goto $l377;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp379 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        expr374 = $tmp379;
                        if (((panda$core$Bit) { expr374 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children370, ((panda$core$Object*) expr374));
                    }
                    goto $l376;
                    $l377:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp381 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s380);
                    if (((panda$core$Bit) { !$tmp381.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp382 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp382->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp382->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp382, ((panda$core$Int64) { 107 }), token368.position, ((panda$collections$ListView*) children370));
                result364 = $tmp382;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp385 = (panda$collections$Array*) malloc(40);
                $tmp385->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp385->refCount.value = 1;
                panda$collections$Array$init($tmp385);
                children384 = $tmp385;
                panda$collections$Array$add$panda$collections$Array$T(children384, ((panda$core$Object*) result364));
                org$pandalanguage$pandac$ASTNode* $tmp388 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr387 = $tmp388;
                if (((panda$core$Bit) { expr387 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children384, ((panda$core$Object*) expr387));
                org$pandalanguage$pandac$parser$Token$nullable $tmp390 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s389);
                if (((panda$core$Bit) { !$tmp390.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp391 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp391->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp391->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp391, ((panda$core$Int64) { 103 }), token368.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children384));
                result364 = $tmp391;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp394 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp394.nonnull }).value) {
                {
                    name393 = &$s395;
                }
                }
                else {
                {
                    panda$core$String* $tmp396 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                    name393 = $tmp396;
                    if (((panda$core$Bit) { name393 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp398 = (panda$collections$Array*) malloc(40);
                $tmp398->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp398->refCount.value = 1;
                panda$collections$Array$init($tmp398);
                children397 = $tmp398;
                panda$collections$Array$add$panda$collections$Array$T(children397, ((panda$core$Object*) result364));
                org$pandalanguage$pandac$ASTNode* $tmp400 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp400->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp400, ((panda$core$Int64) { 108 }), token368.position, ((panda$core$Object*) name393), ((panda$collections$ListView*) children397));
                result364 = $tmp400;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp403 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target402 = $tmp403;
                if (((panda$core$Bit) { target402 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp405 = (panda$collections$Array*) malloc(40);
                $tmp405->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp405->refCount.value = 1;
                panda$collections$Array$init($tmp405);
                children404 = $tmp405;
                panda$collections$Array$add$panda$collections$Array$T(children404, ((panda$core$Object*) result364));
                panda$collections$Array$add$panda$collections$Array$T(children404, ((panda$core$Object*) target402));
                org$pandalanguage$pandac$ASTNode* $tmp407 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp407->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp407->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp407, ((panda$core$Int64) { 111 }), token368.position, ((panda$collections$ListView*) children404));
                result364 = $tmp407;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token368);
                panda$core$String* $tmp410 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result364);
                name409 = $tmp410;
                if (((panda$core$Bit) { name409 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp412 = (panda$core$MutableString*) malloc(48);
                    $tmp412->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp412->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp412, name409);
                    finalName411 = $tmp412;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp414, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName411, $tmp414);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp416 = (panda$collections$Array*) malloc(40);
                    $tmp416->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp416->refCount.value = 1;
                    panda$collections$Array$init($tmp416);
                    types415 = $tmp416;
                    org$pandalanguage$pandac$ASTNode* $tmp418 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp418->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp418->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp418, ((panda$core$Int64) { 109 }), result364->position, name409);
                    panda$collections$Array$add$panda$collections$Array$T(types415, ((panda$core$Object*) $tmp418));
                    org$pandalanguage$pandac$ASTNode* $tmp421 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t420 = $tmp421;
                    if (((panda$core$Bit) { t420 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result364;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types415, ((panda$core$Object*) t420));
                    panda$core$MutableString$append$panda$core$Object(finalName411, ((panda$core$Object*) t420));
                    $l422:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp424 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp424.nonnull }).value) goto $l423;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp425 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        t420 = $tmp425;
                        if (((panda$core$Bit) { t420 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result364;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types415, ((panda$core$Object*) t420));
                        panda$core$MutableString$append$panda$core$String(finalName411, &$s426);
                        panda$core$MutableString$append$panda$core$Object(finalName411, ((panda$core$Object*) t420));
                    }
                    goto $l422;
                    $l423:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp428 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s427);
                    if (((panda$core$Bit) { !$tmp428.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result364;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp429, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName411, $tmp429);
                    panda$core$Object* $tmp431 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp431)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp432 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        switch ($tmp432.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept430 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept430 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept430 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept430.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        org$pandalanguage$pandac$ASTNode* $tmp433 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp433->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp433->refCount.value = 1;
                        panda$core$String* $tmp435 = panda$core$MutableString$convert$R$panda$core$String(finalName411);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp433, ((panda$core$Int64) { 154 }), result364->position, ((panda$core$Object*) $tmp435), ((panda$collections$ListView*) types415));
                        result364 = $tmp433;
                        goto $l366;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result364;
                    }
                    }
                }
                }
                return result364;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token368);
                return result364;
            }
        }
    }
    }
    $l367:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result436;
    org$pandalanguage$pandac$parser$Token$nullable op440;
    org$pandalanguage$pandac$ASTNode* next442;
    panda$collections$Array* children444;
    org$pandalanguage$pandac$ASTNode* $tmp437 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result436 = $tmp437;
    if (((panda$core$Bit) { result436 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l438:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp441 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 57 }));
        op440 = $tmp441;
        if (((panda$core$Bit) { !op440.nonnull }).value) {
        {
            goto $l439;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp443 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next442 = $tmp443;
        if (((panda$core$Bit) { next442 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp445 = (panda$collections$Array*) malloc(40);
        $tmp445->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp445->refCount.value = 1;
        panda$collections$Array$init($tmp445);
        children444 = $tmp445;
        panda$collections$Array$add$panda$collections$Array$T(children444, ((panda$core$Object*) result436));
        panda$collections$Array$add$panda$collections$Array$T(children444, ((panda$core$Object*) next442));
        org$pandalanguage$pandac$ASTNode* $tmp447 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp447->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp447->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp447, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op440.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op440.value).kind)), ((panda$collections$ListView*) children444));
        result436 = $tmp447;
    }
    }
    $l439:;
    return result436;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op449;
    org$pandalanguage$pandac$ASTNode* base451;
    panda$collections$Array* children453;
    org$pandalanguage$pandac$parser$Token $tmp450 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op449 = $tmp450;
    switch (op449.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp452 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base451 = $tmp452;
            if (((panda$core$Bit) { base451 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp454 = (panda$collections$Array*) malloc(40);
            $tmp454->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp454->refCount.value = 1;
            panda$collections$Array$init($tmp454);
            children453 = $tmp454;
            panda$collections$Array$add$panda$collections$Array$T(children453, ((panda$core$Object*) base451));
            org$pandalanguage$pandac$ASTNode* $tmp456 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp456->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp456->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp456, ((panda$core$Int64) { 112 }), op449.position, ((panda$core$Object*) wrap_panda$core$Int64(op449.kind)), ((panda$collections$ListView*) children453));
            return $tmp456;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op449);
            org$pandalanguage$pandac$ASTNode* $tmp458 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp458;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result459;
    org$pandalanguage$pandac$parser$Token op463;
    org$pandalanguage$pandac$ASTNode* next465;
    panda$collections$Array* children467;
    org$pandalanguage$pandac$parser$Token nextToken472;
    org$pandalanguage$pandac$ASTNode* next475;
    panda$collections$Array* children477;
    org$pandalanguage$pandac$ASTNode* $tmp460 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result459 = $tmp460;
    if (((panda$core$Bit) { result459 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l461:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp464 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op463 = $tmp464;
        switch (op463.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp466 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next465 = $tmp466;
                if (((panda$core$Bit) { next465 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp468 = (panda$collections$Array*) malloc(40);
                $tmp468->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp468->refCount.value = 1;
                panda$collections$Array$init($tmp468);
                children467 = $tmp468;
                panda$collections$Array$add$panda$collections$Array$T(children467, ((panda$core$Object*) result459));
                panda$collections$Array$add$panda$collections$Array$T(children467, ((panda$core$Object*) next465));
                org$pandalanguage$pandac$ASTNode* $tmp470 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp470->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp470->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp470, ((panda$core$Int64) { 103 }), op463.position, ((panda$core$Object*) wrap_panda$core$Int64(op463.kind)), ((panda$collections$ListView*) children467));
                result459 = $tmp470;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp473 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken472 = $tmp473;
                panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken472.kind, ((panda$core$Int64) { 63 }));
                if ($tmp474.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp476 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next475 = $tmp476;
                    if (((panda$core$Bit) { next475 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp478 = (panda$collections$Array*) malloc(40);
                    $tmp478->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp478->refCount.value = 1;
                    panda$collections$Array$init($tmp478);
                    children477 = $tmp478;
                    panda$collections$Array$add$panda$collections$Array$T(children477, ((panda$core$Object*) result459));
                    panda$collections$Array$add$panda$collections$Array$T(children477, ((panda$core$Object*) next475));
                    org$pandalanguage$pandac$ASTNode* $tmp480 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp480->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp480->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp480, ((panda$core$Int64) { 103 }), op463.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children477));
                    result459 = $tmp480;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken472);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op463);
                    return result459;
                }
                }
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op463);
                return result459;
            }
        }
    }
    }
    $l462:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result482;
    org$pandalanguage$pandac$parser$Token op486;
    org$pandalanguage$pandac$ASTNode* next488;
    panda$collections$Array* children490;
    org$pandalanguage$pandac$ASTNode* $tmp483 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result482 = $tmp483;
    if (((panda$core$Bit) { result482 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l484:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp487 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op486 = $tmp487;
        switch (op486.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp489 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next488 = $tmp489;
                if (((panda$core$Bit) { next488 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp491 = (panda$collections$Array*) malloc(40);
                $tmp491->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp491->refCount.value = 1;
                panda$collections$Array$init($tmp491);
                children490 = $tmp491;
                panda$collections$Array$add$panda$collections$Array$T(children490, ((panda$core$Object*) result482));
                panda$collections$Array$add$panda$collections$Array$T(children490, ((panda$core$Object*) next488));
                org$pandalanguage$pandac$ASTNode* $tmp493 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp493->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp493->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp493, ((panda$core$Int64) { 103 }), op486.position, ((panda$core$Object*) wrap_panda$core$Int64(op486.kind)), ((panda$collections$ListView*) children490));
                result482 = $tmp493;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op486);
                return result482;
            }
        }
    }
    }
    $l485:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result495;
    org$pandalanguage$pandac$Position $tmp499;
    org$pandalanguage$pandac$parser$Token op501;
    org$pandalanguage$pandac$parser$Token next503;
    org$pandalanguage$pandac$ASTNode* right505;
    org$pandalanguage$pandac$Position $tmp518;
    org$pandalanguage$pandac$ASTNode* step519;
    org$pandalanguage$pandac$Position $tmp524;
    panda$collections$Array* children525;
    panda$core$Int64 kind528;
    org$pandalanguage$pandac$parser$Token $tmp496 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp496.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp497 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp497->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp497->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp499);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp497, ((panda$core$Int64) { 138 }), $tmp499);
            result495 = $tmp497;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp500 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result495 = $tmp500;
            if (((panda$core$Bit) { result495 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp502 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op501 = $tmp502;
    switch (op501.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp504 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next503 = $tmp504;
            panda$core$Bit $tmp508 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next503.kind, ((panda$core$Int64) { 102 }));
            bool $tmp507 = $tmp508.value;
            if (!$tmp507) goto $l509;
            panda$core$Bit $tmp510 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next503.kind, ((panda$core$Int64) { 104 }));
            $tmp507 = $tmp510.value;
            $l509:;
            panda$core$Bit $tmp511 = { $tmp507 };
            bool $tmp506 = $tmp511.value;
            if (!$tmp506) goto $l512;
            panda$core$Bit $tmp513 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next503.kind, ((panda$core$Int64) { 33 }));
            $tmp506 = $tmp513.value;
            $l512:;
            panda$core$Bit $tmp514 = { $tmp506 };
            if ($tmp514.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp515 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                right505 = $tmp515;
                if (((panda$core$Bit) { right505 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp516 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp516->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp516->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp518);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp516, ((panda$core$Int64) { 138 }), $tmp518);
                right505 = $tmp516;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp520 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp520.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp521 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                step519 = $tmp521;
                if (((panda$core$Bit) { step519 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp522 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp522->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp522->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp524);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp522, ((panda$core$Int64) { 138 }), $tmp524);
                step519 = $tmp522;
            }
            }
            panda$collections$Array* $tmp526 = (panda$collections$Array*) malloc(40);
            $tmp526->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp526->refCount.value = 1;
            panda$collections$Array$init($tmp526);
            children525 = $tmp526;
            panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) result495));
            panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) right505));
            panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) step519));
            panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op501.kind, ((panda$core$Int64) { 97 }));
            if ($tmp529.value) {
            {
                kind528 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind528 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp530 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp530->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp530->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp530, kind528, op501.position, ((panda$collections$ListView*) children525));
            return $tmp530;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op501);
            return result495;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result532;
    org$pandalanguage$pandac$parser$Token op536;
    org$pandalanguage$pandac$ASTNode* next538;
    panda$collections$Array* children540;
    org$pandalanguage$pandac$ASTNode* $tmp533 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result532 = $tmp533;
    if (((panda$core$Bit) { result532 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l534:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp537 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op536 = $tmp537;
        switch (op536.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp539 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next538 = $tmp539;
                if (((panda$core$Bit) { next538 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp541 = (panda$collections$Array*) malloc(40);
                $tmp541->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp541->refCount.value = 1;
                panda$collections$Array$init($tmp541);
                children540 = $tmp541;
                panda$collections$Array$add$panda$collections$Array$T(children540, ((panda$core$Object*) result532));
                panda$collections$Array$add$panda$collections$Array$T(children540, ((panda$core$Object*) next538));
                org$pandalanguage$pandac$ASTNode* $tmp543 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp543->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp543->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp543, ((panda$core$Int64) { 103 }), op536.position, ((panda$core$Object*) wrap_panda$core$Int64(op536.kind)), ((panda$collections$ListView*) children540));
                result532 = $tmp543;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op536);
                return result532;
            }
        }
    }
    }
    $l535:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result545;
    org$pandalanguage$pandac$parser$Token op549;
    org$pandalanguage$pandac$ASTNode* next551;
    panda$collections$Array* children553;
    org$pandalanguage$pandac$ASTNode* $tmp546 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result545 = $tmp546;
    if (((panda$core$Bit) { result545 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l547:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp550 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op549 = $tmp550;
        switch (op549.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp552 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next551 = $tmp552;
                if (((panda$core$Bit) { next551 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp554 = (panda$collections$Array*) malloc(40);
                $tmp554->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp554->refCount.value = 1;
                panda$collections$Array$init($tmp554);
                children553 = $tmp554;
                panda$collections$Array$add$panda$collections$Array$T(children553, ((panda$core$Object*) result545));
                panda$collections$Array$add$panda$collections$Array$T(children553, ((panda$core$Object*) next551));
                org$pandalanguage$pandac$ASTNode* $tmp556 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp556->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp556->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp556, ((panda$core$Int64) { 103 }), op549.position, ((panda$core$Object*) wrap_panda$core$Int64(op549.kind)), ((panda$collections$ListView*) children553));
                result545 = $tmp556;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op549);
                return result545;
            }
        }
    }
    }
    $l548:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result558;
    org$pandalanguage$pandac$parser$Token$nullable op562;
    org$pandalanguage$pandac$ASTNode* next564;
    panda$collections$Array* children566;
    org$pandalanguage$pandac$ASTNode* $tmp559 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result558 = $tmp559;
    if (((panda$core$Bit) { result558 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l560:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp563 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 68 }));
        op562 = $tmp563;
        if (((panda$core$Bit) { !op562.nonnull }).value) {
        {
            goto $l561;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp565 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next564 = $tmp565;
        if (((panda$core$Bit) { next564 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp567 = (panda$collections$Array*) malloc(40);
        $tmp567->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp567->refCount.value = 1;
        panda$collections$Array$init($tmp567);
        children566 = $tmp567;
        panda$collections$Array$add$panda$collections$Array$T(children566, ((panda$core$Object*) result558));
        panda$collections$Array$add$panda$collections$Array$T(children566, ((panda$core$Object*) next564));
        org$pandalanguage$pandac$ASTNode* $tmp569 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp569->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp569->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp569, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op562.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op562.value).kind)), ((panda$collections$ListView*) children566));
        result558 = $tmp569;
    }
    }
    $l561:;
    return result558;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start571;
    org$pandalanguage$pandac$ASTNode* test574;
    panda$collections$Array* children576;
    org$pandalanguage$pandac$ASTNode* ifTrue579;
    org$pandalanguage$pandac$ASTNode* ifFalse584;
    org$pandalanguage$pandac$ASTNode* ifFalse586;
    org$pandalanguage$pandac$parser$Token$nullable $tmp573 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s572);
    start571 = $tmp573;
    if (((panda$core$Bit) { !start571.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp575 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test574 = $tmp575;
    if (((panda$core$Bit) { test574 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp577 = (panda$collections$Array*) malloc(40);
    $tmp577->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp577->refCount.value = 1;
    panda$collections$Array$init($tmp577);
    children576 = $tmp577;
    panda$collections$Array$add$panda$collections$Array$T(children576, ((panda$core$Object*) test574));
    org$pandalanguage$pandac$ASTNode* $tmp580 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    ifTrue579 = $tmp580;
    if (((panda$core$Bit) { ifTrue579 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children576, ((panda$core$Object*) ifTrue579));
    org$pandalanguage$pandac$parser$Token$nullable $tmp581 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp581.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp582 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp582.kind, ((panda$core$Int64) { 36 }));
        if ($tmp583.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp585 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse584 = $tmp585;
            if (((panda$core$Bit) { ifFalse584 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children576, ((panda$core$Object*) ifFalse584));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp587 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse586 = $tmp587;
            if (((panda$core$Bit) { ifFalse586 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children576, ((panda$core$Object*) ifFalse586));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp588 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp588->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp588->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp588, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start571.value).position, ((panda$collections$ListView*) children576));
    return $tmp588;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp591 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s590);
    if (((panda$core$Bit) { !$tmp591.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp592 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp592;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id593;
    org$pandalanguage$pandac$ASTNode* type598;
    panda$collections$Array* children600;
    org$pandalanguage$pandac$parser$Token$nullable $tmp595 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s594);
    id593 = $tmp595;
    if (((panda$core$Bit) { !id593.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp596 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp596.kind, ((panda$core$Int64) { 95 }));
    if ($tmp597.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp599 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type598 = $tmp599;
        if (((panda$core$Bit) { type598 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp601 = (panda$collections$Array*) malloc(40);
        $tmp601->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp601->refCount.value = 1;
        panda$collections$Array$init($tmp601);
        children600 = $tmp601;
        panda$collections$Array$add$panda$collections$Array$T(children600, ((panda$core$Object*) type598));
        org$pandalanguage$pandac$ASTNode* $tmp603 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp603->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp603->refCount.value = 1;
        panda$core$String* $tmp605 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id593.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp603, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id593.value).position, ((panda$core$Object*) $tmp605), ((panda$collections$ListView*) children600));
        return $tmp603;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp606 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp606->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp606->refCount.value = 1;
    panda$core$String* $tmp608 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id593.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp606, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id593.value).position, $tmp608);
    return $tmp606;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start609;
    org$pandalanguage$pandac$ASTNode* t612;
    org$pandalanguage$pandac$ASTNode* list616;
    org$pandalanguage$pandac$ASTNode* block618;
    panda$collections$Array* children620;
    org$pandalanguage$pandac$parser$Token$nullable $tmp611 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 32 }), &$s610);
    start609 = $tmp611;
    if (((panda$core$Bit) { !start609.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp613 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t612 = $tmp613;
    if (((panda$core$Bit) { t612 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp615 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 34 }), &$s614);
    if (((panda$core$Bit) { !$tmp615.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp617 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list616 = $tmp617;
    if (((panda$core$Bit) { list616 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp619 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    block618 = $tmp619;
    if (((panda$core$Bit) { block618 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp621 = (panda$collections$Array*) malloc(40);
    $tmp621->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp621->refCount.value = 1;
    panda$collections$Array$init($tmp621);
    children620 = $tmp621;
    panda$collections$Array$add$panda$collections$Array$T(children620, ((panda$core$Object*) t612));
    panda$collections$Array$add$panda$collections$Array$T(children620, ((panda$core$Object*) list616));
    panda$collections$Array$add$panda$collections$Array$T(children620, ((panda$core$Object*) block618));
    org$pandalanguage$pandac$ASTNode* $tmp623 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp623->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp623->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp623, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start609.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children620));
    return $tmp623;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start625;
    org$pandalanguage$pandac$ASTNode* test628;
    org$pandalanguage$pandac$ASTNode* body630;
    panda$collections$Array* children632;
    org$pandalanguage$pandac$parser$Token$nullable $tmp627 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s626);
    start625 = $tmp627;
    if (((panda$core$Bit) { !start625.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp629 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test628 = $tmp629;
    if (((panda$core$Bit) { test628 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp631 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body630 = $tmp631;
    if (((panda$core$Bit) { body630 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp633 = (panda$collections$Array*) malloc(40);
    $tmp633->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp633->refCount.value = 1;
    panda$collections$Array$init($tmp633);
    children632 = $tmp633;
    panda$collections$Array$add$panda$collections$Array$T(children632, ((panda$core$Object*) test628));
    panda$collections$Array$add$panda$collections$Array$T(children632, ((panda$core$Object*) body630));
    org$pandalanguage$pandac$ASTNode* $tmp635 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp635->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp635->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp635, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start625.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children632));
    return $tmp635;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start637;
    org$pandalanguage$pandac$ASTNode* body640;
    org$pandalanguage$pandac$ASTNode* test644;
    panda$collections$Array* children646;
    org$pandalanguage$pandac$parser$Token$nullable $tmp639 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s638);
    start637 = $tmp639;
    if (((panda$core$Bit) { !start637.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp641 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body640 = $tmp641;
    if (((panda$core$Bit) { body640 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp643 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s642);
    if (((panda$core$Bit) { !$tmp643.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp645 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test644 = $tmp645;
    if (((panda$core$Bit) { test644 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp647 = (panda$collections$Array*) malloc(40);
    $tmp647->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp647->refCount.value = 1;
    panda$collections$Array$init($tmp647);
    children646 = $tmp647;
    panda$collections$Array$add$panda$collections$Array$T(children646, ((panda$core$Object*) body640));
    panda$collections$Array$add$panda$collections$Array$T(children646, ((panda$core$Object*) test644));
    org$pandalanguage$pandac$ASTNode* $tmp649 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp649->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp649->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp649, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start637.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children646));
    return $tmp649;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start651;
    org$pandalanguage$pandac$ASTNode* body654;
    panda$collections$Array* children656;
    org$pandalanguage$pandac$parser$Token$nullable $tmp653 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 35 }), &$s652);
    start651 = $tmp653;
    if (((panda$core$Bit) { !start651.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp655 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body654 = $tmp655;
    if (((panda$core$Bit) { body654 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp657 = (panda$collections$Array*) malloc(40);
    $tmp657->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp657->refCount.value = 1;
    panda$collections$Array$init($tmp657);
    children656 = $tmp657;
    panda$collections$Array$add$panda$collections$Array$T(children656, ((panda$core$Object*) body654));
    org$pandalanguage$pandac$ASTNode* $tmp659 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp659->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp659->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp659, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start651.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children656));
    return $tmp659;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start661;
    org$pandalanguage$pandac$ASTNode* expr664;
    panda$collections$Array* children666;
    org$pandalanguage$pandac$ASTNode* message670;
    org$pandalanguage$pandac$parser$Token$nullable $tmp663 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 44 }), &$s662);
    start661 = $tmp663;
    if (((panda$core$Bit) { !start661.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp665 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr664 = $tmp665;
    if (((panda$core$Bit) { expr664 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp667 = (panda$collections$Array*) malloc(40);
    $tmp667->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp667->refCount.value = 1;
    panda$collections$Array$init($tmp667);
    children666 = $tmp667;
    panda$collections$Array$add$panda$collections$Array$T(children666, ((panda$core$Object*) expr664));
    org$pandalanguage$pandac$parser$Token$nullable $tmp669 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp669.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp671 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        message670 = $tmp671;
        if (((panda$core$Bit) { message670 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children666, ((panda$core$Object*) message670));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp672 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp672->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp672->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp672, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start661.value).position, ((panda$collections$ListView*) children666));
    return $tmp672;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start674;
    panda$collections$Array* expressions677;
    org$pandalanguage$pandac$ASTNode* expr680;
    panda$collections$Array* children686;
    org$pandalanguage$pandac$ASTNode* stmt696;
    org$pandalanguage$pandac$ASTNode* stmt698;
    org$pandalanguage$pandac$parser$Token$nullable $tmp676 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 39 }), &$s675);
    start674 = $tmp676;
    if (((panda$core$Bit) { !start674.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp678 = (panda$collections$Array*) malloc(40);
    $tmp678->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp678->refCount.value = 1;
    panda$collections$Array$init($tmp678);
    expressions677 = $tmp678;
    org$pandalanguage$pandac$ASTNode* $tmp681 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr680 = $tmp681;
    if (((panda$core$Bit) { expr680 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions677, ((panda$core$Object*) expr680));
    $l682:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp684 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp684.nonnull }).value) goto $l683;
    {
        org$pandalanguage$pandac$ASTNode* $tmp685 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr680 = $tmp685;
        if (((panda$core$Bit) { expr680 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions677, ((panda$core$Object*) expr680));
    }
    goto $l682;
    $l683:;
    panda$collections$Array* $tmp687 = (panda$collections$Array*) malloc(40);
    $tmp687->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp687->refCount.value = 1;
    panda$collections$Array$init($tmp687);
    children686 = $tmp687;
    org$pandalanguage$pandac$ASTNode* $tmp689 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp689->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp689->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp689, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start674.value).position, ((panda$collections$ListView*) expressions677));
    panda$collections$Array$add$panda$collections$Array$T(children686, ((panda$core$Object*) $tmp689));
    org$pandalanguage$pandac$parser$Token$nullable $tmp692 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s691);
    if (((panda$core$Bit) { !$tmp692.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l693:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp695 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp695.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l694;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp697 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt696 = $tmp697;
                if (((panda$core$Bit) { stmt696 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children686, ((panda$core$Object*) stmt696));
                goto $l694;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp699 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt698 = $tmp699;
                    if (((panda$core$Bit) { stmt698 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children686, ((panda$core$Object*) stmt698));
                }
            }
        }
    }
    }
    $l694:;
    org$pandalanguage$pandac$ASTNode* $tmp700 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp700->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp700->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp700, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start674.value).position, ((panda$collections$ListView*) children686));
    return $tmp700;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start702;
    panda$collections$Array* children705;
    org$pandalanguage$pandac$ASTNode* expr708;
    org$pandalanguage$pandac$parser$Token token714;
    org$pandalanguage$pandac$ASTNode* w716;
    org$pandalanguage$pandac$parser$Token o718;
    panda$collections$Array* statements722;
    org$pandalanguage$pandac$ASTNode* stmt728;
    org$pandalanguage$pandac$ASTNode* stmt730;
    org$pandalanguage$pandac$parser$Token$nullable $tmp704 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 38 }), &$s703);
    start702 = $tmp704;
    if (((panda$core$Bit) { !start702.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp706 = (panda$collections$Array*) malloc(40);
    $tmp706->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp706->refCount.value = 1;
    panda$collections$Array$init($tmp706);
    children705 = $tmp706;
    org$pandalanguage$pandac$ASTNode* $tmp709 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr708 = $tmp709;
    if (((panda$core$Bit) { expr708 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children705, ((panda$core$Object*) expr708));
    org$pandalanguage$pandac$parser$Token$nullable $tmp711 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s710);
    if (((panda$core$Bit) { !$tmp711.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l712:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp715 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token714 = $tmp715;
        switch (token714.kind.value) {
            case 100:
            {
                goto $l713;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp717 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w716 = $tmp717;
                if (((panda$core$Bit) { w716 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children705, ((panda$core$Object*) w716));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp719 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o718 = $tmp719;
                org$pandalanguage$pandac$parser$Token$nullable $tmp721 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s720);
                if (((panda$core$Bit) { !$tmp721.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp723 = (panda$collections$Array*) malloc(40);
                $tmp723->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp723->refCount.value = 1;
                panda$collections$Array$init($tmp723);
                statements722 = $tmp723;
                $l725:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp727 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    switch ($tmp727.kind.value) {
                        case 100:
                        {
                            goto $l726;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp729 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt728 = $tmp729;
                            if (((panda$core$Bit) { stmt728 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements722, ((panda$core$Object*) stmt728));
                            goto $l726;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp731 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt730 = $tmp731;
                            if (((panda$core$Bit) { stmt730 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements722, ((panda$core$Object*) stmt730));
                        }
                    }
                }
                }
                $l726:;
                org$pandalanguage$pandac$ASTNode* $tmp732 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp732->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp732->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp732, ((panda$core$Int64) { 127 }), o718.position, ((panda$collections$ListView*) statements722));
                panda$collections$Array$add$panda$collections$Array$T(children705, ((panda$core$Object*) $tmp732));
                goto $l713;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp736 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token714);
                panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s735, $tmp736);
                panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, &$s738);
                panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s734, $tmp739);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token714, $tmp740);
            }
        }
    }
    }
    $l713:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp742 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s741);
    if (((panda$core$Bit) { !$tmp742.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp743 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp743->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp743->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp743, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start702.value).position, ((panda$collections$ListView*) children705));
    return $tmp743;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start745;
    panda$collections$Array* children748;
    org$pandalanguage$pandac$ASTNode* stmt754;
    org$pandalanguage$pandac$ASTNode* stmt758;
    org$pandalanguage$pandac$parser$Token$nullable $tmp747 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s746);
    start745 = $tmp747;
    if (((panda$core$Bit) { !start745.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp749 = (panda$collections$Array*) malloc(40);
    $tmp749->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp749->refCount.value = 1;
    panda$collections$Array$init($tmp749);
    children748 = $tmp749;
    $l751:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp753 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp753.kind.value) {
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l752;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp755 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt754 = $tmp755;
                if (((panda$core$Bit) { stmt754 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp757 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s756);
                if (((panda$core$Bit) { !$tmp757.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children748, ((panda$core$Object*) stmt754));
                goto $l752;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp759 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt758 = $tmp759;
                if (((panda$core$Bit) { stmt758 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children748, ((panda$core$Object*) stmt758));
            }
        }
    }
    }
    $l752:;
    org$pandalanguage$pandac$ASTNode* $tmp760 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp760->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp760->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp760, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start745.value).position, ((panda$collections$ListView*) children748));
    return $tmp760;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start762;
    org$pandalanguage$pandac$parser$Token op765;
    org$pandalanguage$pandac$ASTNode* rvalue767;
    panda$collections$Array* children769;
    org$pandalanguage$pandac$parser$Token op776;
    org$pandalanguage$pandac$ASTNode* rvalue778;
    panda$collections$Array* children780;
    org$pandalanguage$pandac$ASTNode* $tmp763 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start762 = $tmp763;
    if (((panda$core$Bit) { start762 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp764 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp764.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp766 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op765 = $tmp766;
            org$pandalanguage$pandac$ASTNode* $tmp768 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue767 = $tmp768;
            if (((panda$core$Bit) { rvalue767 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp770 = (panda$collections$Array*) malloc(40);
            $tmp770->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp770->refCount.value = 1;
            panda$collections$Array$init($tmp770);
            children769 = $tmp770;
            panda$collections$Array$add$panda$collections$Array$T(children769, ((panda$core$Object*) start762));
            panda$collections$Array$add$panda$collections$Array$T(children769, ((panda$core$Object*) rvalue767));
            org$pandalanguage$pandac$ASTNode* $tmp772 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp772->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp772->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp772, ((panda$core$Int64) { 103 }), start762->position, ((panda$core$Object*) wrap_panda$core$Int64(op765.kind)), ((panda$collections$ListView*) children769));
            return $tmp772;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp774 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp774, &$s775);
            org$pandalanguage$pandac$parser$Token $tmp777 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op776 = $tmp777;
            org$pandalanguage$pandac$ASTNode* $tmp779 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue778 = $tmp779;
            if (((panda$core$Bit) { rvalue778 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp781 = (panda$collections$Array*) malloc(40);
            $tmp781->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp781->refCount.value = 1;
            panda$collections$Array$init($tmp781);
            children780 = $tmp781;
            panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) start762));
            panda$collections$Array$add$panda$collections$Array$T(children780, ((panda$core$Object*) rvalue778));
            org$pandalanguage$pandac$ASTNode* $tmp783 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp783->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp783->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp783, ((panda$core$Int64) { 103 }), start762->position, ((panda$core$Object*) wrap_panda$core$Int64(op776.kind)), ((panda$collections$ListView*) children780));
            return $tmp783;
        }
        break;
        default:
        {
            return start762;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children785;
    org$pandalanguage$pandac$ASTNode* t788;
    org$pandalanguage$pandac$ASTNode* value791;
    org$pandalanguage$pandac$ASTNode* value797;
    panda$collections$Array* $tmp786 = (panda$collections$Array*) malloc(40);
    $tmp786->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp786->refCount.value = 1;
    panda$collections$Array$init($tmp786);
    children785 = $tmp786;
    org$pandalanguage$pandac$ASTNode* $tmp789 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t788 = $tmp789;
    if (((panda$core$Bit) { t788 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children785, ((panda$core$Object*) t788));
    org$pandalanguage$pandac$parser$Token$nullable $tmp790 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp790.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp792 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value791 = $tmp792;
        if (((panda$core$Bit) { value791 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children785, ((panda$core$Object*) value791));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp793 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp793.kind, ((panda$core$Int64) { 58 }));
    if ($tmp794.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp795 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp795, &$s796);
        org$pandalanguage$pandac$ASTNode* $tmp798 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value797 = $tmp798;
        if (((panda$core$Bit) { value797 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children785, ((panda$core$Object*) value797));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp799 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp799->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp799->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp799, ((panda$core$Int64) { 129 }), t788->position, ((panda$collections$ListView*) children785));
    return $tmp799;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start801;
    panda$core$Int64 kind803;
    panda$collections$Array* children805;
    org$pandalanguage$pandac$ASTNode* child808;
    org$pandalanguage$pandac$ASTNode* child813;
    org$pandalanguage$pandac$parser$Token $tmp802 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start801 = $tmp802;
    switch (start801.kind.value) {
        case 23:
        {
            kind803 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind803 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind803 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind803 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start801, &$s804);
        }
    }
    panda$collections$Array* $tmp806 = (panda$collections$Array*) malloc(40);
    $tmp806->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp806->refCount.value = 1;
    panda$collections$Array$init($tmp806);
    children805 = $tmp806;
    org$pandalanguage$pandac$ASTNode* $tmp809 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    child808 = $tmp809;
    if (((panda$core$Bit) { child808 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children805, ((panda$core$Object*) child808));
    $l810:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp812 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp812.nonnull }).value) goto $l811;
    {
        org$pandalanguage$pandac$ASTNode* $tmp814 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        child813 = $tmp814;
        if (((panda$core$Bit) { child813 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children805, ((panda$core$Object*) child813));
    }
    goto $l810;
    $l811:;
    org$pandalanguage$pandac$ASTNode* $tmp815 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp815->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp815->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp815, kind803, start801.position, ((panda$collections$ListView*) children805));
    return $tmp815;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start817;
    panda$collections$Array* children822;
    org$pandalanguage$pandac$ASTNode* expr829;
    org$pandalanguage$pandac$parser$Token$nullable $tmp819 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s818);
    start817 = $tmp819;
    if (((panda$core$Bit) { !start817.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp821 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s820);
    if (((panda$core$Bit) { !$tmp821.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp823 = (panda$collections$Array*) malloc(40);
    $tmp823->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp823->refCount.value = 1;
    panda$collections$Array$init($tmp823);
    children822 = $tmp823;
    org$pandalanguage$pandac$ASTNode* $tmp825 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp825->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp825->refCount.value = 1;
    panda$core$String* $tmp827 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start817.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp825, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start817.value).position, $tmp827);
    panda$collections$Array$add$panda$collections$Array$T(children822, ((panda$core$Object*) $tmp825));
    org$pandalanguage$pandac$parser$Token$nullable $tmp828 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp828.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp830 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr829 = $tmp830;
        if (((panda$core$Bit) { expr829 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children822, ((panda$core$Object*) expr829));
        $l831:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp833 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp833.nonnull }).value) goto $l832;
        {
            org$pandalanguage$pandac$ASTNode* $tmp834 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr829 = $tmp834;
            if (((panda$core$Bit) { expr829 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children822, ((panda$core$Object*) expr829));
        }
        goto $l831;
        $l832:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp836 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s835);
        if (((panda$core$Bit) { !$tmp836.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp837 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp837->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp837->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp837, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start817.value).position, ((panda$collections$ListView*) children822));
    return $tmp837;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start839;
    org$pandalanguage$pandac$parser$Token$nullable label842;
    org$pandalanguage$pandac$parser$Token$nullable $tmp841 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 28 }), &$s840);
    start839 = $tmp841;
    if (((panda$core$Bit) { !start839.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp843 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label842 = $tmp843;
    if (((panda$core$Bit) { label842.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp844 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp844->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp844->refCount.value = 1;
        panda$core$String* $tmp846 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label842.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp844, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start839.value).position, $tmp846);
        return $tmp844;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp847 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp847->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp847->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp847, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start839.value).position);
    return $tmp847;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start849;
    org$pandalanguage$pandac$parser$Token$nullable label852;
    org$pandalanguage$pandac$parser$Token$nullable $tmp851 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 29 }), &$s850);
    start849 = $tmp851;
    if (((panda$core$Bit) { !start849.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp853 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label852 = $tmp853;
    if (((panda$core$Bit) { label852.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp854 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp854->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp854->refCount.value = 1;
        panda$core$String* $tmp856 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label852.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp854, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start849.value).position, $tmp856);
        return $tmp854;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp857 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp857->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp857->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp857, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start849.value).position);
    return $tmp857;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start859;
    panda$collections$Array* children865;
    org$pandalanguage$pandac$ASTNode* expr868;
    org$pandalanguage$pandac$parser$Token$nullable $tmp861 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 27 }), &$s860);
    start859 = $tmp861;
    if (((panda$core$Bit) { !start859.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp862 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp862.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp863 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp863->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp863->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp863, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start859.value).position);
            return $tmp863;
        }
        break;
        default:
        {
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
            org$pandalanguage$pandac$ASTNode* $tmp870 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp870->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp870->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp870, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start859.value).position, ((panda$collections$ListView*) children865));
            return $tmp870;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp872 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp872.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp873 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp873;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp874 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp874;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp875 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp875;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp876 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp876.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp877 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp877;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp878 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp878;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp879 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp879;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp880 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp880;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s881);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id891;
    org$pandalanguage$pandac$parser$Token $tmp882 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp882.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp883 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp883;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp884 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp884;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp885 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp885;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp886 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp886;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp887 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp887;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp888 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp888;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp889 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp889;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp890 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp890;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp892 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id891 = $tmp892;
            org$pandalanguage$pandac$parser$Token$nullable $tmp893 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp893.nonnull }).value) {
            {
                panda$core$String* $tmp894 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id891);
                org$pandalanguage$pandac$ASTNode* $tmp895 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp894);
                return $tmp895;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id891);
            org$pandalanguage$pandac$ASTNode* $tmp896 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp896;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp897 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp897;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp898 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp898;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp899 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp899;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s900);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start901;
    org$pandalanguage$pandac$parser$Token$nullable next904;
    panda$core$MutableString* name907;
    panda$core$Char8 $tmp914;
    org$pandalanguage$pandac$parser$Token$nullable $tmp903 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 14 }), &$s902);
    start901 = $tmp903;
    if (((panda$core$Bit) { !start901.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp906 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s905);
    next904 = $tmp906;
    if (((panda$core$Bit) { !next904.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp908 = (panda$core$MutableString*) malloc(48);
    $tmp908->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp908->refCount.value = 1;
    panda$core$String* $tmp910 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next904.value));
    panda$core$MutableString$init$panda$core$String($tmp908, $tmp910);
    name907 = $tmp908;
    $l911:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp913 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next904 = $tmp913;
        if (((panda$core$Bit) { !next904.nonnull }).value) {
        {
            goto $l912;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp914, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name907, $tmp914);
        org$pandalanguage$pandac$parser$Token$nullable $tmp916 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s915);
        next904 = $tmp916;
        if (((panda$core$Bit) { !next904.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp917 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next904.value));
        panda$core$MutableString$append$panda$core$String(name907, $tmp917);
    }
    }
    $l912:;
    org$pandalanguage$pandac$ASTNode* $tmp918 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp918->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp918->refCount.value = 1;
    panda$core$String* $tmp920 = panda$core$MutableString$finish$R$panda$core$String(name907);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp918, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start901.value).position, $tmp920);
    return $tmp918;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start921;
    org$pandalanguage$pandac$parser$Token$nullable next924;
    panda$core$MutableString* name927;
    panda$core$Char8 $tmp934;
    org$pandalanguage$pandac$parser$Token$nullable $tmp923 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 15 }), &$s922);
    start921 = $tmp923;
    if (((panda$core$Bit) { !start921.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp926 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s925);
    next924 = $tmp926;
    if (((panda$core$Bit) { !next924.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp928 = (panda$core$MutableString*) malloc(48);
    $tmp928->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp928->refCount.value = 1;
    panda$core$String* $tmp930 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next924.value));
    panda$core$MutableString$init$panda$core$String($tmp928, $tmp930);
    name927 = $tmp928;
    $l931:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp933 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next924 = $tmp933;
        if (((panda$core$Bit) { !next924.nonnull }).value) {
        {
            goto $l932;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp934, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name927, $tmp934);
        org$pandalanguage$pandac$parser$Token$nullable $tmp936 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s935);
        next924 = $tmp936;
        if (((panda$core$Bit) { !next924.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp937 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next924.value));
        panda$core$MutableString$append$panda$core$String(name927, $tmp937);
    }
    }
    $l932:;
    org$pandalanguage$pandac$ASTNode* $tmp938 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp938->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp938->refCount.value = 1;
    panda$core$String* $tmp940 = panda$core$MutableString$finish$R$panda$core$String(name927);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp938, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start921.value).position, $tmp940);
    return $tmp938;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start941;
    org$pandalanguage$pandac$parser$Token$nullable id944;
    panda$collections$Array* children947;
    panda$collections$Array* idChildren950;
    org$pandalanguage$pandac$ASTNode* t954;
    org$pandalanguage$pandac$ASTNode* t965;
    org$pandalanguage$pandac$parser$Token$nullable $tmp943 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 62 }), &$s942);
    start941 = $tmp943;
    if (((panda$core$Bit) { !start941.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp946 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s945);
    id944 = $tmp946;
    if (((panda$core$Bit) { !id944.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp948 = (panda$collections$Array*) malloc(40);
    $tmp948->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp948->refCount.value = 1;
    panda$collections$Array$init($tmp948);
    children947 = $tmp948;
    panda$collections$Array* $tmp951 = (panda$collections$Array*) malloc(40);
    $tmp951->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp951->refCount.value = 1;
    panda$collections$Array$init($tmp951);
    idChildren950 = $tmp951;
    org$pandalanguage$pandac$parser$Token$nullable $tmp953 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp953.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp955 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t954 = $tmp955;
        if (((panda$core$Bit) { t954 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren950, ((panda$core$Object*) t954));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp956 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp956->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp956->refCount.value = 1;
    panda$core$String* $tmp958 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id944.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp956, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id944.value).position, ((panda$core$Object*) $tmp958), ((panda$collections$ListView*) idChildren950));
    panda$collections$Array$add$panda$collections$Array$T(children947, ((panda$core$Object*) $tmp956));
    $l959:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp961 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp961.nonnull }).value) goto $l960;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp963 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s962);
        id944 = $tmp963;
        if (((panda$core$Bit) { !id944.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren950);
        org$pandalanguage$pandac$parser$Token$nullable $tmp964 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp964.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp966 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t965 = $tmp966;
            if (((panda$core$Bit) { t965 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren950, ((panda$core$Object*) t965));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp967 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp967->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp967->refCount.value = 1;
        panda$core$String* $tmp969 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id944.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp967, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id944.value).position, ((panda$core$Object*) $tmp969), ((panda$collections$ListView*) idChildren950));
        panda$collections$Array$add$panda$collections$Array$T(children947, ((panda$core$Object*) $tmp967));
    }
    goto $l959;
    $l960:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp971 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s970);
    if (((panda$core$Bit) { !$tmp971.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp972 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp972->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp972->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp972, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start941.value).position, ((panda$collections$ListView*) children947));
    return $tmp972;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start974;
    panda$collections$Array* children977;
    org$pandalanguage$pandac$ASTNode* t980;
    org$pandalanguage$pandac$parser$Token$nullable $tmp976 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s975);
    start974 = $tmp976;
    if (((panda$core$Bit) { !start974.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp978 = (panda$collections$Array*) malloc(40);
    $tmp978->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp978->refCount.value = 1;
    panda$collections$Array$init($tmp978);
    children977 = $tmp978;
    org$pandalanguage$pandac$ASTNode* $tmp981 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t980 = $tmp981;
    if (((panda$core$Bit) { t980 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children977, ((panda$core$Object*) t980));
    $l982:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp984 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp984.nonnull }).value) goto $l983;
    {
        org$pandalanguage$pandac$ASTNode* $tmp985 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t980 = $tmp985;
        if (((panda$core$Bit) { t980 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children977, ((panda$core$Object*) t980));
    }
    goto $l982;
    $l983:;
    org$pandalanguage$pandac$ASTNode* $tmp986 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp986->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp986->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp986, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start974.value).position, ((panda$collections$ListView*) children977));
    return $tmp986;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children988;
    org$pandalanguage$pandac$parser$Token$nullable next993;
    org$pandalanguage$pandac$Position $tmp1000;
    panda$collections$Array* $tmp989 = (panda$collections$Array*) malloc(40);
    $tmp989->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp989->refCount.value = 1;
    panda$collections$Array$init($tmp989);
    children988 = $tmp989;
    $l991:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp994 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 13 }));
        next993 = $tmp994;
        if (((panda$core$Bit) { !next993.nonnull }).value) {
        {
            goto $l992;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp995 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp995->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp995->refCount.value = 1;
        panda$core$String* $tmp997 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next993.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp995, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next993.value).position, $tmp997);
        panda$collections$Array$add$panda$collections$Array$T(children988, ((panda$core$Object*) $tmp995));
    }
    }
    $l992:;
    org$pandalanguage$pandac$ASTNode* $tmp998 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp998->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp998->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1000);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp998, ((panda$core$Int64) { 144 }), $tmp1000, ((panda$collections$ListView*) children988));
    return $tmp998;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1001;
    panda$core$MutableString* result1004;
    org$pandalanguage$pandac$parser$Token next1009;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1003 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 11 }), &$s1002);
    start1001 = $tmp1003;
    if (((panda$core$Bit) { !start1001.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1005 = (panda$core$MutableString*) malloc(48);
    $tmp1005->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1005->refCount.value = 1;
    panda$core$MutableString$init($tmp1005);
    result1004 = $tmp1005;
    $l1007:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1010 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1009 = $tmp1010;
        panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1009.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1011.value) {
        {
            goto $l1008;
        }
        }
        panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1009.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1012.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1001.value), &$s1013);
            return NULL;
        }
        }
        panda$core$String* $tmp1014 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1009);
        panda$core$MutableString$append$panda$core$String(result1004, $tmp1014);
    }
    }
    $l1008:;
    org$pandalanguage$pandac$ASTNode* $tmp1015 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1015->refCount.value = 1;
    panda$core$String* $tmp1017 = panda$core$MutableString$finish$R$panda$core$String(result1004);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1015, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1001.value).position, $tmp1017);
    return $tmp1015;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1018;
    org$pandalanguage$pandac$ASTNode* t1021;
    panda$collections$Array* children1023;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1020 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1019);
    id1018 = $tmp1020;
    if (((panda$core$Bit) { !id1018.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1022 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1021 = $tmp1022;
    if (((panda$core$Bit) { t1021 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1024 = (panda$collections$Array*) malloc(40);
    $tmp1024->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1024->refCount.value = 1;
    panda$collections$Array$init($tmp1024);
    children1023 = $tmp1024;
    panda$collections$Array$add$panda$collections$Array$T(children1023, ((panda$core$Object*) t1021));
    org$pandalanguage$pandac$ASTNode* $tmp1026 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1026->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1026->refCount.value = 1;
    panda$core$String* $tmp1028 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1018.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1026, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1018.value).position, ((panda$core$Object*) $tmp1028), ((panda$collections$ListView*) children1023));
    return $tmp1026;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1029;
    panda$collections$Array* children1032;
    org$pandalanguage$pandac$ASTNode* param1036;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1031 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s1030);
    start1029 = $tmp1031;
    if (((panda$core$Bit) { !start1029.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1033 = (panda$collections$Array*) malloc(40);
    $tmp1033->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1033->refCount.value = 1;
    panda$collections$Array$init($tmp1033);
    children1032 = $tmp1033;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1035 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1035.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1037 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1036 = $tmp1037;
        if (((panda$core$Bit) { param1036 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1032, ((panda$core$Object*) param1036));
        $l1038:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1040 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1040.nonnull }).value) goto $l1039;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1041 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
            param1036 = $tmp1041;
            if (((panda$core$Bit) { param1036 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1032, ((panda$core$Object*) param1036));
        }
        goto $l1038;
        $l1039:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1043 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1042);
        if (((panda$core$Bit) { !$tmp1043.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1044 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1044->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1044->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1044, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1029.value).position, ((panda$collections$ListView*) children1032));
    return $tmp1044;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1046;
    org$pandalanguage$pandac$parser$Token$nullable start1047;
    panda$core$String* name1051;
    panda$collections$Array* children1053;
    org$pandalanguage$pandac$ASTNode* params1056;
    org$pandalanguage$pandac$ASTNode* returnType1060;
    org$pandalanguage$pandac$Position $tmp1064;
    org$pandalanguage$pandac$ASTNode* b1067;
    org$pandalanguage$pandac$Position $tmp1071;
    org$pandalanguage$pandac$parser$Token token1072;
    panda$core$String* tokenText1074;
    org$pandalanguage$pandac$ASTNode* post1087;
    org$pandalanguage$pandac$Position $tmp1091;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1048 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 20 }));
    start1047 = $tmp1048;
    if (((panda$core$Bit) { !start1047.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1050 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 21 }), &$s1049);
        start1047 = $tmp1050;
        if (((panda$core$Bit) { !start1047.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1046 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1046 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1052 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1051 = $tmp1052;
    if (((panda$core$Bit) { name1051 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1054 = (panda$collections$Array*) malloc(40);
    $tmp1054->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1054->refCount.value = 1;
    panda$collections$Array$init($tmp1054);
    children1053 = $tmp1054;
    panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1057 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1056 = $tmp1057;
    if (((panda$core$Bit) { params1056 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) params1056));
    org$pandalanguage$pandac$parser$Token $tmp1058 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1058.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1059.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1061 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        returnType1060 = $tmp1061;
        if (((panda$core$Bit) { returnType1060 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) returnType1060));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1062 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1062->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1062->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1064);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1062, ((panda$core$Int64) { 138 }), $tmp1064);
        panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) $tmp1062));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1065 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1065.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1066.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1068 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
        b1067 = $tmp1068;
        if (((panda$core$Bit) { b1067 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) b1067));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1069 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1069->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1069->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1071);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1069, ((panda$core$Int64) { 138 }), $tmp1071);
        panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) $tmp1069));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1073 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1072 = $tmp1073;
    panda$core$String* $tmp1075 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1072);
    tokenText1074 = $tmp1075;
    panda$core$Bit $tmp1077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1072.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1076 = $tmp1077.value;
    if (!$tmp1076) goto $l1078;
    panda$core$Bit $tmp1081 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1074, &$s1080);
    bool $tmp1079 = $tmp1081.value;
    if ($tmp1079) goto $l1082;
    panda$core$Bit $tmp1084 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1074, &$s1083);
    $tmp1079 = $tmp1084.value;
    $l1082:;
    panda$core$Bit $tmp1085 = { $tmp1079 };
    $tmp1076 = $tmp1085.value;
    $l1078:;
    panda$core$Bit $tmp1086 = { $tmp1076 };
    if ($tmp1086.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1088 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1087 = $tmp1088;
        if (((panda$core$Bit) { post1087 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) post1087));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1089 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1089->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1089->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1091);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1089, ((panda$core$Int64) { 138 }), $tmp1091);
        panda$collections$Array$add$panda$collections$Array$T(children1053, ((panda$core$Object*) $tmp1089));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1092 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1092->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1092->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1092, kind1046, ((org$pandalanguage$pandac$parser$Token) start1047.value).position, ((panda$core$Object*) name1051), ((panda$collections$ListView*) children1053));
    return $tmp1092;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1094;
    panda$collections$Array* children1097;
    org$pandalanguage$pandac$ASTNode* params1100;
    org$pandalanguage$pandac$ASTNode* b1102;
    org$pandalanguage$pandac$parser$Token token1104;
    panda$core$String* tokenText1106;
    org$pandalanguage$pandac$ASTNode* post1119;
    org$pandalanguage$pandac$Position $tmp1123;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1096 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s1095);
    start1094 = $tmp1096;
    if (((panda$core$Bit) { !start1094.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1098 = (panda$collections$Array*) malloc(40);
    $tmp1098->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1098->refCount.value = 1;
    panda$collections$Array$init($tmp1098);
    children1097 = $tmp1098;
    panda$collections$Array$add$panda$collections$Array$T(children1097, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1097, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1101 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1100 = $tmp1101;
    if (((panda$core$Bit) { params1100 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1097, ((panda$core$Object*) params1100));
    org$pandalanguage$pandac$ASTNode* $tmp1103 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    b1102 = $tmp1103;
    if (((panda$core$Bit) { b1102 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1097, ((panda$core$Object*) b1102));
    org$pandalanguage$pandac$parser$Token $tmp1105 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1104 = $tmp1105;
    panda$core$String* $tmp1107 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1104);
    tokenText1106 = $tmp1107;
    panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1104.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1108 = $tmp1109.value;
    if (!$tmp1108) goto $l1110;
    panda$core$Bit $tmp1113 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1106, &$s1112);
    bool $tmp1111 = $tmp1113.value;
    if ($tmp1111) goto $l1114;
    panda$core$Bit $tmp1116 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1106, &$s1115);
    $tmp1111 = $tmp1116.value;
    $l1114:;
    panda$core$Bit $tmp1117 = { $tmp1111 };
    $tmp1108 = $tmp1117.value;
    $l1110:;
    panda$core$Bit $tmp1118 = { $tmp1108 };
    if ($tmp1118.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1120 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1119 = $tmp1120;
        if (((panda$core$Bit) { post1119 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1097, ((panda$core$Object*) post1119));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1121 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1121->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1121->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1123);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1121, ((panda$core$Int64) { 138 }), $tmp1123);
        panda$collections$Array$add$panda$collections$Array$T(children1097, ((panda$core$Object*) $tmp1121));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1124 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1124->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1124->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1124, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1094.value).position, ((panda$collections$ListView*) children1097));
    return $tmp1124;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1126;
    panda$collections$Array* children1128;
    org$pandalanguage$pandac$ASTNode* $tmp1127 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1126 = $tmp1127;
    if (((panda$core$Bit) { decl1126 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1129 = (panda$collections$Array*) malloc(40);
    $tmp1129->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1129->refCount.value = 1;
    panda$collections$Array$init($tmp1129);
    children1128 = $tmp1129;
    panda$collections$Array$add$panda$collections$Array$T(children1128, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1128, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1128, ((panda$core$Object*) decl1126));
    org$pandalanguage$pandac$ASTNode* $tmp1131 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1131->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1131->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1131, ((panda$core$Int64) { 148 }), decl1126->position, ((panda$collections$ListView*) children1128));
    return $tmp1131;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1133;
    panda$collections$Array* types1136;
    org$pandalanguage$pandac$ASTNode* t1142;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1135 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1134);
    name1133 = $tmp1135;
    if (((panda$core$Bit) { !name1133.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1137 = (panda$collections$Array*) malloc(40);
    $tmp1137->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1137->refCount.value = 1;
    panda$collections$Array$init($tmp1137);
    types1136 = $tmp1137;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1139 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }));
    if (((panda$core$Bit) { $tmp1139.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1140 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1141 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1140.kind, ((panda$core$Int64) { 104 }));
        if ($tmp1141.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1143 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1142 = $tmp1143;
            if (((panda$core$Bit) { t1142 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(types1136, ((panda$core$Object*) t1142));
            $l1144:;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1146 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
            if (!((panda$core$Bit) { $tmp1146.nonnull }).value) goto $l1145;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1147 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t1142 = $tmp1147;
                if (((panda$core$Bit) { t1142 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(types1136, ((panda$core$Object*) t1142));
            }
            goto $l1144;
            $l1145:;
        }
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1149 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1148);
    if (((panda$core$Bit) { !$tmp1149.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1150 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1150->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1150->refCount.value = 1;
    panda$core$String* $tmp1152 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1133.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1150, ((panda$core$Int64) { 156 }), ((org$pandalanguage$pandac$parser$Token) name1133.value).position, ((panda$core$Object*) $tmp1152), ((panda$collections$ListView*) types1136));
    return $tmp1150;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, org$pandalanguage$pandac$ASTNode* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1153;
    org$pandalanguage$pandac$parser$Token$nullable name1156;
    panda$collections$Array* members1161;
    org$pandalanguage$pandac$ASTNode* dc1164;
    org$pandalanguage$pandac$Position $tmp1167;
    org$pandalanguage$pandac$parser$Token next1170;
    org$pandalanguage$pandac$ASTNode* c1179;
    org$pandalanguage$pandac$Position $tmp1183;
    org$pandalanguage$pandac$ASTNode* a1184;
    org$pandalanguage$pandac$Position $tmp1187;
    org$pandalanguage$pandac$parser$Token next1190;
    org$pandalanguage$pandac$ASTNode* decl1210;
    org$pandalanguage$pandac$Position $tmp1214;
    org$pandalanguage$pandac$Position $tmp1217;
    org$pandalanguage$pandac$ASTNode* decl1218;
    org$pandalanguage$pandac$Position $tmp1222;
    org$pandalanguage$pandac$Position $tmp1225;
    org$pandalanguage$pandac$ASTNode* decl1226;
    org$pandalanguage$pandac$Position $tmp1230;
    org$pandalanguage$pandac$Position $tmp1233;
    org$pandalanguage$pandac$ASTNode* decl1234;
    org$pandalanguage$pandac$Position $tmp1238;
    org$pandalanguage$pandac$Position $tmp1241;
    org$pandalanguage$pandac$ASTNode* decl1242;
    org$pandalanguage$pandac$Position $tmp1246;
    org$pandalanguage$pandac$Position $tmp1249;
    panda$collections$Array* children1251;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1155 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 19 }), &$s1154);
    start1153 = $tmp1155;
    if (((panda$core$Bit) { !start1153.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1158 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1157);
    name1156 = $tmp1158;
    if (((panda$core$Bit) { !name1156.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1160 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1159);
    if (((panda$core$Bit) { !$tmp1160.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1162 = (panda$collections$Array*) malloc(40);
    $tmp1162->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1162->refCount.value = 1;
    panda$collections$Array$init($tmp1162);
    members1161 = $tmp1162;
    org$pandalanguage$pandac$ASTNode* $tmp1165 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1165->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1165->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1167);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1165, ((panda$core$Int64) { 138 }), $tmp1167);
    dc1164 = $tmp1165;
    $l1168:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1171 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1170 = $tmp1171;
        switch (next1170.kind.value) {
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
                goto $l1169;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1172 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1164->kind, ((panda$core$Int64) { 138 }));
                if ($tmp1172.value) {
                {
                    panda$core$String* $tmp1174 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1170);
                    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1173, $tmp1174);
                    panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1170, $tmp1177);
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1178 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1164 = $tmp1178;
            }
            break;
            case 48:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1180 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1164);
                c1179 = $tmp1180;
                if (((panda$core$Bit) { c1179 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1161, ((panda$core$Object*) c1179));
                org$pandalanguage$pandac$ASTNode* $tmp1181 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1181->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1181->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1183);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1181, ((panda$core$Int64) { 138 }), $tmp1183);
                dc1164 = $tmp1181;
            }
            break;
        }
    }
    }
    $l1169:;
    org$pandalanguage$pandac$ASTNode* $tmp1185 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1185->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1185->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1187);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1185, ((panda$core$Int64) { 138 }), $tmp1187);
    a1184 = $tmp1185;
    $l1188:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1191 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1190 = $tmp1191;
        switch (next1190.kind.value) {
            case 13:
            {
                panda$core$Bit $tmp1192 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(a1184->kind, ((panda$core$Int64) { 138 }));
                if ($tmp1192.value) {
                {
                    panda$core$String* $tmp1194 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1190);
                    panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1193, $tmp1194);
                    panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1195, &$s1196);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1190, $tmp1197);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1198 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
                a1184 = $tmp1198;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1200 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1164->kind, ((panda$core$Int64) { 138 }));
                bool $tmp1199 = $tmp1200.value;
                if ($tmp1199) goto $l1201;
                panda$core$Bit $tmp1202 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(a1184->kind, ((panda$core$Int64) { 138 }));
                $tmp1199 = $tmp1202.value;
                $l1201:;
                panda$core$Bit $tmp1203 = { $tmp1199 };
                if ($tmp1203.value) {
                {
                    panda$core$String* $tmp1205 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1190);
                    panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1204, $tmp1205);
                    panda$core$String* $tmp1208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1206, &$s1207);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1190, $tmp1208);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1209 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1164 = $tmp1209;
            }
            break;
            case 17:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1211 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1164, a1184);
                decl1210 = $tmp1211;
                if (((panda$core$Bit) { decl1210 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1161, ((panda$core$Object*) decl1210));
                org$pandalanguage$pandac$ASTNode* $tmp1212 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1212->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1212->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1214);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1212, ((panda$core$Int64) { 138 }), $tmp1214);
                dc1164 = $tmp1212;
                org$pandalanguage$pandac$ASTNode* $tmp1215 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1215->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1215->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1217);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1215, ((panda$core$Int64) { 138 }), $tmp1217);
                a1184 = $tmp1215;
            }
            break;
            case 18:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1219 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1164, a1184);
                decl1218 = $tmp1219;
                if (((panda$core$Bit) { decl1218 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1161, ((panda$core$Object*) decl1218));
                org$pandalanguage$pandac$ASTNode* $tmp1220 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1220->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1220->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1222);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1220, ((panda$core$Int64) { 138 }), $tmp1222);
                dc1164 = $tmp1220;
                org$pandalanguage$pandac$ASTNode* $tmp1223 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1223->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1223->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1225);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1223, ((panda$core$Int64) { 138 }), $tmp1225);
                a1184 = $tmp1223;
            }
            break;
            case 19:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1227 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1164, a1184);
                decl1226 = $tmp1227;
                if (((panda$core$Bit) { decl1226 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1161, ((panda$core$Object*) decl1226));
                org$pandalanguage$pandac$ASTNode* $tmp1228 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1228->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1228->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1230);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1228, ((panda$core$Int64) { 138 }), $tmp1230);
                dc1164 = $tmp1228;
                org$pandalanguage$pandac$ASTNode* $tmp1231 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1231->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1231->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1233);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1231, ((panda$core$Int64) { 138 }), $tmp1233);
                a1184 = $tmp1231;
            }
            break;
            case 21:
            case 20:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1235 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1164, a1184);
                decl1234 = $tmp1235;
                if (((panda$core$Bit) { decl1234 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1161, ((panda$core$Object*) decl1234));
                org$pandalanguage$pandac$ASTNode* $tmp1236 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1236->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1236->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1238);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1236, ((panda$core$Int64) { 138 }), $tmp1238);
                dc1164 = $tmp1236;
                org$pandalanguage$pandac$ASTNode* $tmp1239 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1239->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1239->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1241);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1239, ((panda$core$Int64) { 138 }), $tmp1241);
                a1184 = $tmp1239;
            }
            break;
            case 23:
            case 24:
            case 25:
            case 26:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1243 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1164, a1184);
                decl1242 = $tmp1243;
                if (((panda$core$Bit) { decl1242 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1161, ((panda$core$Object*) decl1242));
                org$pandalanguage$pandac$ASTNode* $tmp1244 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1244->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1244->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1246);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1244, ((panda$core$Int64) { 138 }), $tmp1246);
                dc1164 = $tmp1244;
                org$pandalanguage$pandac$ASTNode* $tmp1247 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1247->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1247->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1249);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1247, ((panda$core$Int64) { 138 }), $tmp1249);
                a1184 = $tmp1247;
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s1250);
                goto $l1189;
            }
            break;
        }
    }
    }
    $l1189:;
    panda$collections$Array* $tmp1252 = (panda$collections$Array*) malloc(40);
    $tmp1252->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1252->refCount.value = 1;
    panda$collections$Array$init($tmp1252);
    children1251 = $tmp1252;
    panda$collections$Array$add$panda$collections$Array$T(children1251, ((panda$core$Object*) p_choiceDoccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1251, ((panda$core$Object*) p_choiceAnnotations));
    org$pandalanguage$pandac$ASTNode* $tmp1254 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1254->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1254->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1254, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1153.value).position, ((panda$collections$ListView*) members1161));
    panda$collections$Array$add$panda$collections$Array$T(children1251, ((panda$core$Object*) $tmp1254));
    org$pandalanguage$pandac$ASTNode* $tmp1256 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1256->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1256->refCount.value = 1;
    panda$core$String* $tmp1258 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1156.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1256, ((panda$core$Int64) { 155 }), ((org$pandalanguage$pandac$parser$Token) start1153.value).position, ((panda$core$Object*) $tmp1258), ((panda$collections$ListView*) children1251));
    return $tmp1256;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1259;
    org$pandalanguage$pandac$ASTNode* dc1261;
    org$pandalanguage$pandac$Position $tmp1266;
    org$pandalanguage$pandac$ASTNode* a1267;
    org$pandalanguage$pandac$parser$Token $tmp1260 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start1259 = $tmp1260;
    panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1259.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1262.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1263 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
        dc1261 = $tmp1263;
        if (((panda$core$Bit) { dc1261 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1264 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1264->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1264->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1266);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1264, ((panda$core$Int64) { 138 }), $tmp1266);
        dc1261 = $tmp1264;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1268 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
    a1267 = $tmp1268;
    if (((panda$core$Bit) { a1267 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1269 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1269.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1270 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1261, a1267);
            return $tmp1270;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1271 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1261, a1267);
            return $tmp1271;
        }
        break;
        case 19:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1272 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1261, a1267);
            return $tmp1272;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1273 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1261, a1267);
            return $tmp1273;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1274 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1261, a1267);
            return $tmp1274;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1275 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1261, a1267);
            return $tmp1275;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1276);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1277;
    org$pandalanguage$pandac$parser$Token$nullable start1280;
    org$pandalanguage$pandac$parser$Token$nullable name1283;
    org$pandalanguage$pandac$ASTNode* generics1288;
    org$pandalanguage$pandac$Position $tmp1292;
    org$pandalanguage$pandac$ASTNode* stypes1295;
    org$pandalanguage$pandac$Position $tmp1299;
    panda$collections$Array* members1302;
    org$pandalanguage$pandac$ASTNode* member1308;
    panda$collections$Array* $tmp1278 = (panda$collections$Array*) malloc(40);
    $tmp1278->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1278->refCount.value = 1;
    panda$collections$Array$init($tmp1278);
    children1277 = $tmp1278;
    panda$collections$Array$add$panda$collections$Array$T(children1277, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1277, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1282 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1281);
    start1280 = $tmp1282;
    if (((panda$core$Bit) { !start1280.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1285 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1284);
    name1283 = $tmp1285;
    if (((panda$core$Bit) { !name1283.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1286 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1286.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1287.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1289 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1288 = $tmp1289;
        if (((panda$core$Bit) { generics1288 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1277, ((panda$core$Object*) generics1288));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1290 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1290->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1290->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1292);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1290, ((panda$core$Int64) { 138 }), $tmp1292);
        panda$collections$Array$add$panda$collections$Array$T(children1277, ((panda$core$Object*) $tmp1290));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1293 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1293.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1294.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1296 = org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(self);
        stypes1295 = $tmp1296;
        if (((panda$core$Bit) { stypes1295 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1277, ((panda$core$Object*) stypes1295));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1297 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1297->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1297->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1299);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1297, ((panda$core$Int64) { 139 }), $tmp1299);
        panda$collections$Array$add$panda$collections$Array$T(children1277, ((panda$core$Object*) $tmp1297));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1301 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1300);
    if (((panda$core$Bit) { !$tmp1301.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1303 = (panda$collections$Array*) malloc(40);
    $tmp1303->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1303->refCount.value = 1;
    panda$collections$Array$init($tmp1303);
    members1302 = $tmp1303;
    $l1305:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1307 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1307.nonnull }).value) goto $l1306;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1309 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1308 = $tmp1309;
        if (((panda$core$Bit) { member1308 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1302, ((panda$core$Object*) member1308));
    }
    goto $l1305;
    $l1306:;
    org$pandalanguage$pandac$ASTNode* $tmp1310 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1310->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1310->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1310, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1280.value).position, ((panda$collections$ListView*) members1302));
    panda$collections$Array$add$panda$collections$Array$T(children1277, ((panda$core$Object*) $tmp1310));
    org$pandalanguage$pandac$ASTNode* $tmp1312 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1312->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1312->refCount.value = 1;
    panda$core$String* $tmp1314 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1283.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1312, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1280.value).position, ((panda$core$Object*) $tmp1314), ((panda$collections$ListView*) children1277));
    return $tmp1312;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1315;
    org$pandalanguage$pandac$parser$Token$nullable start1318;
    org$pandalanguage$pandac$parser$Token$nullable name1321;
    org$pandalanguage$pandac$ASTNode* generics1326;
    org$pandalanguage$pandac$Position $tmp1330;
    panda$collections$Array* intfs1331;
    org$pandalanguage$pandac$ASTNode* t1335;
    panda$collections$Array* members1345;
    org$pandalanguage$pandac$ASTNode* member1351;
    panda$collections$Array* $tmp1316 = (panda$collections$Array*) malloc(40);
    $tmp1316->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1316->refCount.value = 1;
    panda$collections$Array$init($tmp1316);
    children1315 = $tmp1316;
    panda$collections$Array$add$panda$collections$Array$T(children1315, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1315, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1320 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 18 }), &$s1319);
    start1318 = $tmp1320;
    if (((panda$core$Bit) { !start1318.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1323 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1322);
    name1321 = $tmp1323;
    if (((panda$core$Bit) { !name1321.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1324 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1324.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1325.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1327 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1326 = $tmp1327;
        if (((panda$core$Bit) { generics1326 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1315, ((panda$core$Object*) generics1326));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1328 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1328->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1328->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1330);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1328, ((panda$core$Int64) { 138 }), $tmp1330);
        panda$collections$Array$add$panda$collections$Array$T(children1315, ((panda$core$Object*) $tmp1328));
    }
    }
    panda$collections$Array* $tmp1332 = (panda$collections$Array*) malloc(40);
    $tmp1332->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1332->refCount.value = 1;
    panda$collections$Array$init($tmp1332);
    intfs1331 = $tmp1332;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1334 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1334.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1336 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1335 = $tmp1336;
        if (((panda$core$Bit) { t1335 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1331, ((panda$core$Object*) t1335));
        $l1337:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1339 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1339.nonnull }).value) goto $l1338;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1340 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1335 = $tmp1340;
            if (((panda$core$Bit) { t1335 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1331, ((panda$core$Object*) t1335));
        }
        goto $l1337;
        $l1338:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1341 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1341->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1341->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1341, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1318.value).position, ((panda$collections$ListView*) intfs1331));
    panda$collections$Array$add$panda$collections$Array$T(children1315, ((panda$core$Object*) $tmp1341));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1344 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1343);
    if (((panda$core$Bit) { !$tmp1344.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1346 = (panda$collections$Array*) malloc(40);
    $tmp1346->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1346->refCount.value = 1;
    panda$collections$Array$init($tmp1346);
    members1345 = $tmp1346;
    $l1348:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1350 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1350.nonnull }).value) goto $l1349;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1352 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1351 = $tmp1352;
        if (((panda$core$Bit) { member1351 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1345, ((panda$core$Object*) member1351));
    }
    goto $l1348;
    $l1349:;
    org$pandalanguage$pandac$ASTNode* $tmp1353 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1353->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1353->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1353, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1318.value).position, ((panda$collections$ListView*) members1345));
    panda$collections$Array$add$panda$collections$Array$T(children1315, ((panda$core$Object*) $tmp1353));
    org$pandalanguage$pandac$ASTNode* $tmp1355 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1355->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1355->refCount.value = 1;
    panda$core$String* $tmp1357 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1321.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1355, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1318.value).position, ((panda$core$Object*) $tmp1357), ((panda$collections$ListView*) children1315));
    return $tmp1355;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1358 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1358.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1359 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1359;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1360 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1360;
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
            org$pandalanguage$pandac$ASTNode* $tmp1361 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1361;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1362 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1362;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1363;
    org$pandalanguage$pandac$ASTNode* entry1370;
    org$pandalanguage$pandac$Position $tmp1375;
    panda$collections$Array* $tmp1364 = (panda$collections$Array*) malloc(40);
    $tmp1364->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1364->refCount.value = 1;
    panda$collections$Array$init($tmp1364);
    entries1363 = $tmp1364;
    $l1366:;
    org$pandalanguage$pandac$parser$Token $tmp1368 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1369 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1368.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1369.value) goto $l1367;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1371 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry1370 = $tmp1371;
        if (((panda$core$Bit) { entry1370 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1372 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1372.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1363, ((panda$core$Object*) entry1370));
    }
    goto $l1366;
    $l1367:;
    org$pandalanguage$pandac$ASTNode* $tmp1373 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1373->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1373->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1375, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1373, ((panda$core$Int64) { 152 }), $tmp1375, ((panda$collections$ListView*) entries1363));
    return $tmp1373;
}

