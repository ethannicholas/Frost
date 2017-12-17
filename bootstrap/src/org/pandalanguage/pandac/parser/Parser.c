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
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "panda/collections/ImmutableArray.h"


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn57)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef panda$core$Object* (*$fn122)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn176)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn269)(panda$collections$ListView*, panda$core$Int64);

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
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t367;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp379;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp385;
    org$pandalanguage$pandac$ASTNode* result403;
    org$pandalanguage$pandac$parser$Token $tmp368 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t367 = $tmp368;
    switch (t367.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp369 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp369->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp369->refCount.value = 1;
            panda$core$String* $tmp371 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t367);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp369, ((panda$core$Int64) { 106 }), t367.position, $tmp371);
            return $tmp369;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp372 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp372->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp372->refCount.value = 1;
            panda$core$String* $tmp374 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t367);
            panda$core$UInt64$nullable $tmp375 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp374);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp372, ((panda$core$Int64) { 102 }), t367.position, ((panda$core$UInt64) $tmp375.value));
            return $tmp372;
        }
        break;
        case 3:
        {
            org$pandalanguage$pandac$ASTNode* $tmp376 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp376->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp376->refCount.value = 1;
            panda$core$String* $tmp378 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t367);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp379, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp380 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp378, $tmp379);
            panda$core$UInt64$nullable $tmp381 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp380, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp376, ((panda$core$Int64) { 102 }), t367.position, ((panda$core$UInt64) $tmp381.value));
            return $tmp376;
        }
        break;
        case 4:
        {
            org$pandalanguage$pandac$ASTNode* $tmp382 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp382->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp382->refCount.value = 1;
            panda$core$String* $tmp384 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t367);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp385, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp386 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp384, $tmp385);
            panda$core$UInt64$nullable $tmp387 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp386, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp382, ((panda$core$Int64) { 102 }), t367.position, ((panda$core$UInt64) $tmp387.value));
            return $tmp382;
        }
        break;
        case 5:
        {
            org$pandalanguage$pandac$ASTNode* $tmp388 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp388->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp388->refCount.value = 1;
            panda$core$String* $tmp390 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t367);
            panda$core$Real64$nullable $tmp391 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp390);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp388, ((panda$core$Int64) { 157 }), t367.position, ((panda$core$Real64) $tmp391.value));
            return $tmp388;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp392 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp392->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp392->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp392, ((panda$core$Int64) { 114 }), t367.position);
            return $tmp392;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp394 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp394->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp394->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp394, ((panda$core$Int64) { 115 }), t367.position);
            return $tmp394;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp396 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp396->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp396->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp396, ((panda$core$Int64) { 117 }), t367.position);
            return $tmp396;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp398 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp398->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp398->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp398, ((panda$core$Int64) { 116 }), t367.position, ((panda$core$Bit) { true }));
            return $tmp398;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp400 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp400->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp400, ((panda$core$Int64) { 116 }), t367.position, ((panda$core$Bit) { false }));
            return $tmp400;
        }
        break;
        case 7:
        case 6:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t367);
            org$pandalanguage$pandac$ASTNode* $tmp402 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp402;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp404 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result403 = $tmp404;
            if (((panda$core$Bit) { result403 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp406 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s405);
            if (((panda$core$Bit) { !$tmp406.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result403;
        }
        break;
        default:
        {
            panda$core$String* $tmp408 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t367);
            panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s407, $tmp408);
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, &$s410);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t367, $tmp411);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result412;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp414 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp413));
            result412 = $tmp414;
            if (((panda$core$Bit) { result412 != NULL }).value) {
            {
                panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result412, $tmp416);
                result412 = $tmp417;
            }
            }
            return result412;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name418;
    org$pandalanguage$pandac$parser$Token token421;
    org$pandalanguage$pandac$parser$Token $tmp419 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name418 = $tmp419;
    switch (name418.kind.value) {
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
            panda$core$String* $tmp420 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name418);
            return $tmp420;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp422 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token421 = $tmp422;
            panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token421.kind, ((panda$core$Int64) { 63 }));
            if ($tmp423.value) {
            {
                return &$s424;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token421);
                return &$s425;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp427 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s426);
            if (((panda$core$Bit) { !$tmp427.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp428 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp428.nonnull }).value) {
            {
                return &$s429;
            }
            }
            return &$s430;
        }
        break;
        default:
        {
            panda$core$String* $tmp432 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name418);
            panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s431, $tmp432);
            panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp433, &$s434);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name418, $tmp435);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp436 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp436;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start437;
    panda$core$MutableString* name440;
    org$pandalanguage$pandac$parser$Token$nullable id447;
    panda$core$Char8 $tmp450;
    org$pandalanguage$pandac$ASTNode* result452;
    panda$core$Char8 $tmp458;
    panda$collections$Array* children459;
    org$pandalanguage$pandac$ASTNode* t462;
    panda$core$Char8 $tmp471;
    panda$collections$Array* children476;
    org$pandalanguage$pandac$parser$Token$nullable $tmp439 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s438);
    start437 = $tmp439;
    if (((panda$core$Bit) { !start437.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp441 = (panda$core$MutableString*) malloc(48);
    $tmp441->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp441->refCount.value = 1;
    panda$core$String* $tmp443 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start437.value));
    panda$core$MutableString$init$panda$core$String($tmp441, $tmp443);
    name440 = $tmp441;
    $l444:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp446 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp446.nonnull }).value) goto $l445;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp449 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s448);
        id447 = $tmp449;
        if (((panda$core$Bit) { !id447.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp450, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name440, $tmp450);
        panda$core$String* $tmp451 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id447.value));
        panda$core$MutableString$append$panda$core$String(name440, $tmp451);
    }
    goto $l444;
    $l445:;
    org$pandalanguage$pandac$ASTNode* $tmp453 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp453->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp453->refCount.value = 1;
    panda$core$String* $tmp455 = panda$core$MutableString$convert$R$panda$core$String(name440);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp453, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start437.value).position, $tmp455);
    result452 = $tmp453;
    org$pandalanguage$pandac$parser$Token $tmp456 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp456.kind, ((panda$core$Int64) { 62 }));
    if ($tmp457.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp458, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name440, $tmp458);
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp460 = (panda$collections$Array*) malloc(40);
        $tmp460->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp460->refCount.value = 1;
        panda$collections$Array$init($tmp460);
        children459 = $tmp460;
        panda$collections$Array$add$panda$collections$Array$T(children459, ((panda$core$Object*) result452));
        org$pandalanguage$pandac$ASTNode* $tmp463 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t462 = $tmp463;
        if (((panda$core$Bit) { t462 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result452;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children459, ((panda$core$Object*) t462));
        panda$core$MutableString$append$panda$core$Object(name440, ((panda$core$Object*) t462));
        $l464:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp466 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp466.nonnull }).value) goto $l465;
        {
            org$pandalanguage$pandac$ASTNode* $tmp467 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
            t462 = $tmp467;
            if (((panda$core$Bit) { t462 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result452;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children459, ((panda$core$Object*) t462));
            panda$core$MutableString$append$panda$core$String(name440, &$s468);
            panda$core$MutableString$append$panda$core$Object(name440, ((panda$core$Object*) t462));
        }
        goto $l464;
        $l465:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp470 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s469);
        if (((panda$core$Bit) { !$tmp470.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result452;
            }
            }
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp471, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name440, $tmp471);
        org$pandalanguage$pandac$ASTNode* $tmp472 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp472->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp472->refCount.value = 1;
        panda$core$String* $tmp474 = panda$core$MutableString$finish$R$panda$core$String(name440);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp472, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start437.value).position, ((panda$core$Object*) $tmp474), ((panda$collections$ListView*) children459));
        result452 = $tmp472;
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp475 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp475.nonnull }).value) {
    {
        panda$collections$Array* $tmp477 = (panda$collections$Array*) malloc(40);
        $tmp477->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp477->refCount.value = 1;
        panda$collections$Array$init($tmp477);
        children476 = $tmp477;
        panda$collections$Array$add$panda$collections$Array$T(children476, ((panda$core$Object*) result452));
        org$pandalanguage$pandac$ASTNode* $tmp479 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp479->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp479->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp479, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start437.value).position, ((panda$collections$ListView*) children476));
        result452 = $tmp479;
    }
    }
    return result452;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result481;
    org$pandalanguage$pandac$parser$Token token485;
    panda$collections$Array* children487;
    org$pandalanguage$pandac$ASTNode* expr491;
    panda$collections$Array* children501;
    org$pandalanguage$pandac$ASTNode* expr504;
    panda$core$String* name510;
    panda$collections$Array* children514;
    org$pandalanguage$pandac$ASTNode* target519;
    panda$collections$Array* children521;
    panda$core$String* name526;
    panda$core$MutableString* finalName528;
    panda$core$Char8 $tmp531;
    panda$collections$Array* types532;
    org$pandalanguage$pandac$ASTNode* t537;
    panda$core$Char8 $tmp546;
    panda$core$Bit shouldAccept547;
    org$pandalanguage$pandac$ASTNode* $tmp482 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result481 = $tmp482;
    if (((panda$core$Bit) { result481 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l483:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp486 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token485 = $tmp486;
        switch (token485.kind.value) {
            case 103:
            {
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
                panda$collections$Array* $tmp488 = (panda$collections$Array*) malloc(40);
                $tmp488->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp488->refCount.value = 1;
                panda$collections$Array$init($tmp488);
                children487 = $tmp488;
                panda$collections$Array$add$panda$collections$Array$T(children487, ((panda$core$Object*) result481));
                org$pandalanguage$pandac$parser$Token$nullable $tmp490 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp490.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp492 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr491 = $tmp492;
                    if (((panda$core$Bit) { expr491 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children487, ((panda$core$Object*) expr491));
                    $l493:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp495 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp495.nonnull }).value) goto $l494;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp496 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        expr491 = $tmp496;
                        if (((panda$core$Bit) { expr491 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children487, ((panda$core$Object*) expr491));
                    }
                    goto $l493;
                    $l494:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp498 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s497);
                    if (((panda$core$Bit) { !$tmp498.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp499 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp499->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp499->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp499, ((panda$core$Int64) { 107 }), token485.position, ((panda$collections$ListView*) children487));
                result481 = $tmp499;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp502 = (panda$collections$Array*) malloc(40);
                $tmp502->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp502->refCount.value = 1;
                panda$collections$Array$init($tmp502);
                children501 = $tmp502;
                panda$collections$Array$add$panda$collections$Array$T(children501, ((panda$core$Object*) result481));
                org$pandalanguage$pandac$ASTNode* $tmp505 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr504 = $tmp505;
                if (((panda$core$Bit) { expr504 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children501, ((panda$core$Object*) expr504));
                org$pandalanguage$pandac$parser$Token$nullable $tmp507 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s506);
                if (((panda$core$Bit) { !$tmp507.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp508 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp508->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp508->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp508, ((panda$core$Int64) { 103 }), token485.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 101 }))), ((panda$collections$ListView*) children501));
                result481 = $tmp508;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp511 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp511.nonnull }).value) {
                {
                    name510 = &$s512;
                }
                }
                else {
                {
                    panda$core$String* $tmp513 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                    name510 = $tmp513;
                    if (((panda$core$Bit) { name510 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp515 = (panda$collections$Array*) malloc(40);
                $tmp515->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp515->refCount.value = 1;
                panda$collections$Array$init($tmp515);
                children514 = $tmp515;
                panda$collections$Array$add$panda$collections$Array$T(children514, ((panda$core$Object*) result481));
                org$pandalanguage$pandac$ASTNode* $tmp517 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp517->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp517->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp517, ((panda$core$Int64) { 108 }), token485.position, ((panda$core$Object*) name510), ((panda$collections$ListView*) children514));
                result481 = $tmp517;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp520 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target519 = $tmp520;
                if (((panda$core$Bit) { target519 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp522 = (panda$collections$Array*) malloc(40);
                $tmp522->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp522->refCount.value = 1;
                panda$collections$Array$init($tmp522);
                children521 = $tmp522;
                panda$collections$Array$add$panda$collections$Array$T(children521, ((panda$core$Object*) result481));
                panda$collections$Array$add$panda$collections$Array$T(children521, ((panda$core$Object*) target519));
                org$pandalanguage$pandac$ASTNode* $tmp524 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp524->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp524->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp524, ((panda$core$Int64) { 111 }), token485.position, ((panda$collections$ListView*) children521));
                result481 = $tmp524;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token485);
                panda$core$String* $tmp527 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result481);
                name526 = $tmp527;
                if (((panda$core$Bit) { name526 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp529 = (panda$core$MutableString*) malloc(48);
                    $tmp529->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp529->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp529, name526);
                    finalName528 = $tmp529;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp531, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName528, $tmp531);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp533 = (panda$collections$Array*) malloc(40);
                    $tmp533->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp533->refCount.value = 1;
                    panda$collections$Array$init($tmp533);
                    types532 = $tmp533;
                    org$pandalanguage$pandac$ASTNode* $tmp535 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp535->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp535->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp535, ((panda$core$Int64) { 109 }), result481->position, name526);
                    panda$collections$Array$add$panda$collections$Array$T(types532, ((panda$core$Object*) $tmp535));
                    org$pandalanguage$pandac$ASTNode* $tmp538 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t537 = $tmp538;
                    if (((panda$core$Bit) { t537 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result481;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types532, ((panda$core$Object*) t537));
                    panda$core$MutableString$append$panda$core$Object(finalName528, ((panda$core$Object*) t537));
                    $l539:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp541 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp541.nonnull }).value) goto $l540;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp542 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        t537 = $tmp542;
                        if (((panda$core$Bit) { t537 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result481;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types532, ((panda$core$Object*) t537));
                        panda$core$MutableString$append$panda$core$String(finalName528, &$s543);
                        panda$core$MutableString$append$panda$core$Object(finalName528, ((panda$core$Object*) t537));
                    }
                    goto $l539;
                    $l540:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp545 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s544);
                    if (((panda$core$Bit) { !$tmp545.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result481;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp546, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName528, $tmp546);
                    panda$core$Object* $tmp548 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp548)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp549 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        switch ($tmp549.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept547 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept547 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept547 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept547.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        org$pandalanguage$pandac$ASTNode* $tmp550 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp550->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp550->refCount.value = 1;
                        panda$core$String* $tmp552 = panda$core$MutableString$convert$R$panda$core$String(finalName528);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp550, ((panda$core$Int64) { 154 }), result481->position, ((panda$core$Object*) $tmp552), ((panda$collections$ListView*) types532));
                        result481 = $tmp550;
                        goto $l483;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result481;
                    }
                    }
                }
                }
                return result481;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token485);
                return result481;
            }
        }
    }
    }
    $l484:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result553;
    org$pandalanguage$pandac$parser$Token$nullable op557;
    org$pandalanguage$pandac$ASTNode* next559;
    panda$collections$Array* children561;
    org$pandalanguage$pandac$ASTNode* $tmp554 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result553 = $tmp554;
    if (((panda$core$Bit) { result553 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l555:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp558 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 57 }));
        op557 = $tmp558;
        if (((panda$core$Bit) { !op557.nonnull }).value) {
        {
            goto $l556;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp560 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next559 = $tmp560;
        if (((panda$core$Bit) { next559 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp562 = (panda$collections$Array*) malloc(40);
        $tmp562->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp562->refCount.value = 1;
        panda$collections$Array$init($tmp562);
        children561 = $tmp562;
        panda$collections$Array$add$panda$collections$Array$T(children561, ((panda$core$Object*) result553));
        panda$collections$Array$add$panda$collections$Array$T(children561, ((panda$core$Object*) next559));
        org$pandalanguage$pandac$ASTNode* $tmp564 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp564->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp564->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp564, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op557.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op557.value).kind)), ((panda$collections$ListView*) children561));
        result553 = $tmp564;
    }
    }
    $l556:;
    return result553;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op566;
    org$pandalanguage$pandac$ASTNode* base568;
    panda$collections$Array* children570;
    org$pandalanguage$pandac$parser$Token $tmp567 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op566 = $tmp567;
    switch (op566.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp569 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base568 = $tmp569;
            if (((panda$core$Bit) { base568 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp571 = (panda$collections$Array*) malloc(40);
            $tmp571->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp571->refCount.value = 1;
            panda$collections$Array$init($tmp571);
            children570 = $tmp571;
            panda$collections$Array$add$panda$collections$Array$T(children570, ((panda$core$Object*) base568));
            org$pandalanguage$pandac$ASTNode* $tmp573 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp573->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp573->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp573, ((panda$core$Int64) { 112 }), op566.position, ((panda$core$Object*) wrap_panda$core$Int64(op566.kind)), ((panda$collections$ListView*) children570));
            return $tmp573;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op566);
            org$pandalanguage$pandac$ASTNode* $tmp575 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp575;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result576;
    org$pandalanguage$pandac$parser$Token op580;
    org$pandalanguage$pandac$ASTNode* next582;
    panda$collections$Array* children584;
    org$pandalanguage$pandac$parser$Token nextToken589;
    org$pandalanguage$pandac$ASTNode* next592;
    panda$collections$Array* children594;
    org$pandalanguage$pandac$ASTNode* $tmp577 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result576 = $tmp577;
    if (((panda$core$Bit) { result576 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l578:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp581 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op580 = $tmp581;
        switch (op580.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp583 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next582 = $tmp583;
                if (((panda$core$Bit) { next582 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp585 = (panda$collections$Array*) malloc(40);
                $tmp585->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp585->refCount.value = 1;
                panda$collections$Array$init($tmp585);
                children584 = $tmp585;
                panda$collections$Array$add$panda$collections$Array$T(children584, ((panda$core$Object*) result576));
                panda$collections$Array$add$panda$collections$Array$T(children584, ((panda$core$Object*) next582));
                org$pandalanguage$pandac$ASTNode* $tmp587 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp587->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp587->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp587, ((panda$core$Int64) { 103 }), op580.position, ((panda$core$Object*) wrap_panda$core$Int64(op580.kind)), ((panda$collections$ListView*) children584));
                result576 = $tmp587;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp590 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken589 = $tmp590;
                panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken589.kind, ((panda$core$Int64) { 63 }));
                if ($tmp591.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp593 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next592 = $tmp593;
                    if (((panda$core$Bit) { next592 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp595 = (panda$collections$Array*) malloc(40);
                    $tmp595->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp595->refCount.value = 1;
                    panda$collections$Array$init($tmp595);
                    children594 = $tmp595;
                    panda$collections$Array$add$panda$collections$Array$T(children594, ((panda$core$Object*) result576));
                    panda$collections$Array$add$panda$collections$Array$T(children594, ((panda$core$Object*) next592));
                    org$pandalanguage$pandac$ASTNode* $tmp597 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp597->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp597->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp597, ((panda$core$Int64) { 103 }), op580.position, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 1 }))), ((panda$collections$ListView*) children594));
                    result576 = $tmp597;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken589);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op580);
                    return result576;
                }
                }
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op580);
                return result576;
            }
        }
    }
    }
    $l579:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result599;
    org$pandalanguage$pandac$parser$Token op603;
    org$pandalanguage$pandac$ASTNode* next605;
    panda$collections$Array* children607;
    org$pandalanguage$pandac$ASTNode* $tmp600 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result599 = $tmp600;
    if (((panda$core$Bit) { result599 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l601:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp604 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op603 = $tmp604;
        switch (op603.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp606 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next605 = $tmp606;
                if (((panda$core$Bit) { next605 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp608 = (panda$collections$Array*) malloc(40);
                $tmp608->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp608->refCount.value = 1;
                panda$collections$Array$init($tmp608);
                children607 = $tmp608;
                panda$collections$Array$add$panda$collections$Array$T(children607, ((panda$core$Object*) result599));
                panda$collections$Array$add$panda$collections$Array$T(children607, ((panda$core$Object*) next605));
                org$pandalanguage$pandac$ASTNode* $tmp610 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp610->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp610->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp610, ((panda$core$Int64) { 103 }), op603.position, ((panda$core$Object*) wrap_panda$core$Int64(op603.kind)), ((panda$collections$ListView*) children607));
                result599 = $tmp610;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op603);
                return result599;
            }
        }
    }
    }
    $l602:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result612;
    org$pandalanguage$pandac$Position $tmp616;
    org$pandalanguage$pandac$parser$Token op618;
    org$pandalanguage$pandac$parser$Token next620;
    org$pandalanguage$pandac$ASTNode* right622;
    org$pandalanguage$pandac$Position $tmp635;
    org$pandalanguage$pandac$ASTNode* step636;
    org$pandalanguage$pandac$Position $tmp641;
    panda$collections$Array* children642;
    panda$core$Int64 kind645;
    org$pandalanguage$pandac$parser$Token $tmp613 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp613.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp614 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp614->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp614->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp616);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp614, ((panda$core$Int64) { 138 }), $tmp616);
            result612 = $tmp614;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp617 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result612 = $tmp617;
            if (((panda$core$Bit) { result612 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp619 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op618 = $tmp619;
    switch (op618.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp621 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next620 = $tmp621;
            panda$core$Bit $tmp625 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next620.kind, ((panda$core$Int64) { 102 }));
            bool $tmp624 = $tmp625.value;
            if (!$tmp624) goto $l626;
            panda$core$Bit $tmp627 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next620.kind, ((panda$core$Int64) { 104 }));
            $tmp624 = $tmp627.value;
            $l626:;
            panda$core$Bit $tmp628 = { $tmp624 };
            bool $tmp623 = $tmp628.value;
            if (!$tmp623) goto $l629;
            panda$core$Bit $tmp630 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next620.kind, ((panda$core$Int64) { 33 }));
            $tmp623 = $tmp630.value;
            $l629:;
            panda$core$Bit $tmp631 = { $tmp623 };
            if ($tmp631.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp632 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                right622 = $tmp632;
                if (((panda$core$Bit) { right622 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp633 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp633->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp633->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp635);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp633, ((panda$core$Int64) { 138 }), $tmp635);
                right622 = $tmp633;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp637 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp637.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp638 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                step636 = $tmp638;
                if (((panda$core$Bit) { step636 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp639 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp639->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp639->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp641);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp639, ((panda$core$Int64) { 138 }), $tmp641);
                step636 = $tmp639;
            }
            }
            panda$collections$Array* $tmp643 = (panda$collections$Array*) malloc(40);
            $tmp643->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp643->refCount.value = 1;
            panda$collections$Array$init($tmp643);
            children642 = $tmp643;
            panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) result612));
            panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) right622));
            panda$collections$Array$add$panda$collections$Array$T(children642, ((panda$core$Object*) step636));
            panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op618.kind, ((panda$core$Int64) { 97 }));
            if ($tmp646.value) {
            {
                kind645 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind645 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp647 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp647->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp647->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp647, kind645, op618.position, ((panda$collections$ListView*) children642));
            return $tmp647;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op618);
            return result612;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result649;
    org$pandalanguage$pandac$parser$Token op653;
    org$pandalanguage$pandac$ASTNode* next655;
    panda$collections$Array* children657;
    org$pandalanguage$pandac$ASTNode* $tmp650 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result649 = $tmp650;
    if (((panda$core$Bit) { result649 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l651:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp654 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op653 = $tmp654;
        switch (op653.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp656 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next655 = $tmp656;
                if (((panda$core$Bit) { next655 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp658 = (panda$collections$Array*) malloc(40);
                $tmp658->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp658->refCount.value = 1;
                panda$collections$Array$init($tmp658);
                children657 = $tmp658;
                panda$collections$Array$add$panda$collections$Array$T(children657, ((panda$core$Object*) result649));
                panda$collections$Array$add$panda$collections$Array$T(children657, ((panda$core$Object*) next655));
                org$pandalanguage$pandac$ASTNode* $tmp660 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp660->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp660->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp660, ((panda$core$Int64) { 103 }), op653.position, ((panda$core$Object*) wrap_panda$core$Int64(op653.kind)), ((panda$collections$ListView*) children657));
                result649 = $tmp660;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op653);
                return result649;
            }
        }
    }
    }
    $l652:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result662;
    org$pandalanguage$pandac$parser$Token op666;
    org$pandalanguage$pandac$ASTNode* next668;
    panda$collections$Array* children670;
    org$pandalanguage$pandac$ASTNode* $tmp663 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result662 = $tmp663;
    if (((panda$core$Bit) { result662 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l664:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp667 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op666 = $tmp667;
        switch (op666.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp669 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next668 = $tmp669;
                if (((panda$core$Bit) { next668 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp671 = (panda$collections$Array*) malloc(40);
                $tmp671->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp671->refCount.value = 1;
                panda$collections$Array$init($tmp671);
                children670 = $tmp671;
                panda$collections$Array$add$panda$collections$Array$T(children670, ((panda$core$Object*) result662));
                panda$collections$Array$add$panda$collections$Array$T(children670, ((panda$core$Object*) next668));
                org$pandalanguage$pandac$ASTNode* $tmp673 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp673->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp673->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp673, ((panda$core$Int64) { 103 }), op666.position, ((panda$core$Object*) wrap_panda$core$Int64(op666.kind)), ((panda$collections$ListView*) children670));
                result662 = $tmp673;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op666);
                return result662;
            }
        }
    }
    }
    $l665:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result675;
    org$pandalanguage$pandac$parser$Token$nullable op679;
    org$pandalanguage$pandac$ASTNode* next681;
    panda$collections$Array* children683;
    org$pandalanguage$pandac$ASTNode* $tmp676 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result675 = $tmp676;
    if (((panda$core$Bit) { result675 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l677:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp680 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 68 }));
        op679 = $tmp680;
        if (((panda$core$Bit) { !op679.nonnull }).value) {
        {
            goto $l678;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp682 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next681 = $tmp682;
        if (((panda$core$Bit) { next681 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp684 = (panda$collections$Array*) malloc(40);
        $tmp684->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp684->refCount.value = 1;
        panda$collections$Array$init($tmp684);
        children683 = $tmp684;
        panda$collections$Array$add$panda$collections$Array$T(children683, ((panda$core$Object*) result675));
        panda$collections$Array$add$panda$collections$Array$T(children683, ((panda$core$Object*) next681));
        org$pandalanguage$pandac$ASTNode* $tmp686 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp686->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp686->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp686, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op679.value).position, ((panda$core$Object*) wrap_panda$core$Int64(((org$pandalanguage$pandac$parser$Token) op679.value).kind)), ((panda$collections$ListView*) children683));
        result675 = $tmp686;
    }
    }
    $l678:;
    return result675;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start688;
    org$pandalanguage$pandac$ASTNode* test691;
    panda$collections$Array* children693;
    org$pandalanguage$pandac$ASTNode* ifTrue696;
    org$pandalanguage$pandac$ASTNode* ifFalse701;
    org$pandalanguage$pandac$ASTNode* ifFalse703;
    org$pandalanguage$pandac$parser$Token$nullable $tmp690 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s689);
    start688 = $tmp690;
    if (((panda$core$Bit) { !start688.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp692 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test691 = $tmp692;
    if (((panda$core$Bit) { test691 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp694 = (panda$collections$Array*) malloc(40);
    $tmp694->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp694->refCount.value = 1;
    panda$collections$Array$init($tmp694);
    children693 = $tmp694;
    panda$collections$Array$add$panda$collections$Array$T(children693, ((panda$core$Object*) test691));
    org$pandalanguage$pandac$ASTNode* $tmp697 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    ifTrue696 = $tmp697;
    if (((panda$core$Bit) { ifTrue696 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children693, ((panda$core$Object*) ifTrue696));
    org$pandalanguage$pandac$parser$Token$nullable $tmp698 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp698.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp699 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp699.kind, ((panda$core$Int64) { 36 }));
        if ($tmp700.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp702 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse701 = $tmp702;
            if (((panda$core$Bit) { ifFalse701 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children693, ((panda$core$Object*) ifFalse701));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp704 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse703 = $tmp704;
            if (((panda$core$Bit) { ifFalse703 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children693, ((panda$core$Object*) ifFalse703));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp705 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp705->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp705->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp705, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start688.value).position, ((panda$collections$ListView*) children693));
    return $tmp705;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp708 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s707);
    if (((panda$core$Bit) { !$tmp708.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp709 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp709;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id710;
    org$pandalanguage$pandac$ASTNode* type715;
    panda$collections$Array* children717;
    org$pandalanguage$pandac$parser$Token$nullable $tmp712 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s711);
    id710 = $tmp712;
    if (((panda$core$Bit) { !id710.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp713 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp713.kind, ((panda$core$Int64) { 95 }));
    if ($tmp714.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp716 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type715 = $tmp716;
        if (((panda$core$Bit) { type715 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp718 = (panda$collections$Array*) malloc(40);
        $tmp718->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp718->refCount.value = 1;
        panda$collections$Array$init($tmp718);
        children717 = $tmp718;
        panda$collections$Array$add$panda$collections$Array$T(children717, ((panda$core$Object*) type715));
        org$pandalanguage$pandac$ASTNode* $tmp720 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp720->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp720->refCount.value = 1;
        panda$core$String* $tmp722 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id710.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp720, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id710.value).position, ((panda$core$Object*) $tmp722), ((panda$collections$ListView*) children717));
        return $tmp720;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp723 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp723->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp723->refCount.value = 1;
    panda$core$String* $tmp725 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id710.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp723, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id710.value).position, $tmp725);
    return $tmp723;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start726;
    org$pandalanguage$pandac$ASTNode* t729;
    org$pandalanguage$pandac$ASTNode* list733;
    org$pandalanguage$pandac$ASTNode* block735;
    panda$collections$Array* children737;
    org$pandalanguage$pandac$parser$Token$nullable $tmp728 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 32 }), &$s727);
    start726 = $tmp728;
    if (((panda$core$Bit) { !start726.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp730 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t729 = $tmp730;
    if (((panda$core$Bit) { t729 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp732 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 34 }), &$s731);
    if (((panda$core$Bit) { !$tmp732.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp734 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list733 = $tmp734;
    if (((panda$core$Bit) { list733 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp736 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    block735 = $tmp736;
    if (((panda$core$Bit) { block735 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp738 = (panda$collections$Array*) malloc(40);
    $tmp738->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp738->refCount.value = 1;
    panda$collections$Array$init($tmp738);
    children737 = $tmp738;
    panda$collections$Array$add$panda$collections$Array$T(children737, ((panda$core$Object*) t729));
    panda$collections$Array$add$panda$collections$Array$T(children737, ((panda$core$Object*) list733));
    panda$collections$Array$add$panda$collections$Array$T(children737, ((panda$core$Object*) block735));
    org$pandalanguage$pandac$ASTNode* $tmp740 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp740->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp740->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp740, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start726.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children737));
    return $tmp740;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start742;
    org$pandalanguage$pandac$ASTNode* test745;
    org$pandalanguage$pandac$ASTNode* body747;
    panda$collections$Array* children749;
    org$pandalanguage$pandac$parser$Token$nullable $tmp744 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s743);
    start742 = $tmp744;
    if (((panda$core$Bit) { !start742.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp746 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test745 = $tmp746;
    if (((panda$core$Bit) { test745 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp748 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body747 = $tmp748;
    if (((panda$core$Bit) { body747 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp750 = (panda$collections$Array*) malloc(40);
    $tmp750->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp750->refCount.value = 1;
    panda$collections$Array$init($tmp750);
    children749 = $tmp750;
    panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) test745));
    panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) body747));
    org$pandalanguage$pandac$ASTNode* $tmp752 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp752->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp752->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp752, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start742.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children749));
    return $tmp752;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start754;
    org$pandalanguage$pandac$ASTNode* body757;
    org$pandalanguage$pandac$ASTNode* test761;
    panda$collections$Array* children763;
    org$pandalanguage$pandac$parser$Token$nullable $tmp756 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s755);
    start754 = $tmp756;
    if (((panda$core$Bit) { !start754.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp758 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body757 = $tmp758;
    if (((panda$core$Bit) { body757 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp760 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s759);
    if (((panda$core$Bit) { !$tmp760.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp762 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test761 = $tmp762;
    if (((panda$core$Bit) { test761 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp764 = (panda$collections$Array*) malloc(40);
    $tmp764->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp764->refCount.value = 1;
    panda$collections$Array$init($tmp764);
    children763 = $tmp764;
    panda$collections$Array$add$panda$collections$Array$T(children763, ((panda$core$Object*) body757));
    panda$collections$Array$add$panda$collections$Array$T(children763, ((panda$core$Object*) test761));
    org$pandalanguage$pandac$ASTNode* $tmp766 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp766->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp766->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp766, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start754.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children763));
    return $tmp766;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start768;
    org$pandalanguage$pandac$ASTNode* body771;
    panda$collections$Array* children773;
    org$pandalanguage$pandac$parser$Token$nullable $tmp770 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 35 }), &$s769);
    start768 = $tmp770;
    if (((panda$core$Bit) { !start768.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp772 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body771 = $tmp772;
    if (((panda$core$Bit) { body771 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp774 = (panda$collections$Array*) malloc(40);
    $tmp774->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp774->refCount.value = 1;
    panda$collections$Array$init($tmp774);
    children773 = $tmp774;
    panda$collections$Array$add$panda$collections$Array$T(children773, ((panda$core$Object*) body771));
    org$pandalanguage$pandac$ASTNode* $tmp776 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp776->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp776->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp776, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start768.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children773));
    return $tmp776;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start778;
    org$pandalanguage$pandac$ASTNode* expr781;
    panda$collections$Array* children783;
    org$pandalanguage$pandac$ASTNode* message787;
    org$pandalanguage$pandac$parser$Token$nullable $tmp780 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 44 }), &$s779);
    start778 = $tmp780;
    if (((panda$core$Bit) { !start778.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp782 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr781 = $tmp782;
    if (((panda$core$Bit) { expr781 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp784 = (panda$collections$Array*) malloc(40);
    $tmp784->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp784->refCount.value = 1;
    panda$collections$Array$init($tmp784);
    children783 = $tmp784;
    panda$collections$Array$add$panda$collections$Array$T(children783, ((panda$core$Object*) expr781));
    org$pandalanguage$pandac$parser$Token$nullable $tmp786 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp786.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp788 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        message787 = $tmp788;
        if (((panda$core$Bit) { message787 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children783, ((panda$core$Object*) message787));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp789 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp789->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp789->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp789, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start778.value).position, ((panda$collections$ListView*) children783));
    return $tmp789;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start791;
    panda$collections$Array* expressions794;
    org$pandalanguage$pandac$ASTNode* expr797;
    panda$collections$Array* children803;
    org$pandalanguage$pandac$ASTNode* stmt813;
    org$pandalanguage$pandac$ASTNode* stmt815;
    org$pandalanguage$pandac$parser$Token$nullable $tmp793 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 39 }), &$s792);
    start791 = $tmp793;
    if (((panda$core$Bit) { !start791.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp795 = (panda$collections$Array*) malloc(40);
    $tmp795->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp795->refCount.value = 1;
    panda$collections$Array$init($tmp795);
    expressions794 = $tmp795;
    org$pandalanguage$pandac$ASTNode* $tmp798 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr797 = $tmp798;
    if (((panda$core$Bit) { expr797 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions794, ((panda$core$Object*) expr797));
    $l799:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp801 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp801.nonnull }).value) goto $l800;
    {
        org$pandalanguage$pandac$ASTNode* $tmp802 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr797 = $tmp802;
        if (((panda$core$Bit) { expr797 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions794, ((panda$core$Object*) expr797));
    }
    goto $l799;
    $l800:;
    panda$collections$Array* $tmp804 = (panda$collections$Array*) malloc(40);
    $tmp804->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp804->refCount.value = 1;
    panda$collections$Array$init($tmp804);
    children803 = $tmp804;
    org$pandalanguage$pandac$ASTNode* $tmp806 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp806->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp806->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp806, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start791.value).position, ((panda$collections$ListView*) expressions794));
    panda$collections$Array$add$panda$collections$Array$T(children803, ((panda$core$Object*) $tmp806));
    org$pandalanguage$pandac$parser$Token$nullable $tmp809 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s808);
    if (((panda$core$Bit) { !$tmp809.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l810:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp812 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp812.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l811;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp814 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt813 = $tmp814;
                if (((panda$core$Bit) { stmt813 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children803, ((panda$core$Object*) stmt813));
                goto $l811;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp816 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt815 = $tmp816;
                    if (((panda$core$Bit) { stmt815 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children803, ((panda$core$Object*) stmt815));
                }
            }
        }
    }
    }
    $l811:;
    org$pandalanguage$pandac$ASTNode* $tmp817 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp817->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp817->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp817, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start791.value).position, ((panda$collections$ListView*) children803));
    return $tmp817;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start819;
    panda$collections$Array* children822;
    org$pandalanguage$pandac$ASTNode* expr825;
    org$pandalanguage$pandac$parser$Token token831;
    org$pandalanguage$pandac$ASTNode* w833;
    org$pandalanguage$pandac$parser$Token o835;
    panda$collections$Array* statements839;
    org$pandalanguage$pandac$ASTNode* stmt845;
    org$pandalanguage$pandac$ASTNode* stmt847;
    org$pandalanguage$pandac$parser$Token$nullable $tmp821 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 38 }), &$s820);
    start819 = $tmp821;
    if (((panda$core$Bit) { !start819.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp823 = (panda$collections$Array*) malloc(40);
    $tmp823->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp823->refCount.value = 1;
    panda$collections$Array$init($tmp823);
    children822 = $tmp823;
    org$pandalanguage$pandac$ASTNode* $tmp826 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr825 = $tmp826;
    if (((panda$core$Bit) { expr825 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children822, ((panda$core$Object*) expr825));
    org$pandalanguage$pandac$parser$Token$nullable $tmp828 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s827);
    if (((panda$core$Bit) { !$tmp828.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l829:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp832 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token831 = $tmp832;
        switch (token831.kind.value) {
            case 100:
            {
                goto $l830;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp834 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w833 = $tmp834;
                if (((panda$core$Bit) { w833 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children822, ((panda$core$Object*) w833));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp836 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o835 = $tmp836;
                org$pandalanguage$pandac$parser$Token$nullable $tmp838 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s837);
                if (((panda$core$Bit) { !$tmp838.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp840 = (panda$collections$Array*) malloc(40);
                $tmp840->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp840->refCount.value = 1;
                panda$collections$Array$init($tmp840);
                statements839 = $tmp840;
                $l842:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp844 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    switch ($tmp844.kind.value) {
                        case 100:
                        {
                            goto $l843;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp846 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt845 = $tmp846;
                            if (((panda$core$Bit) { stmt845 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements839, ((panda$core$Object*) stmt845));
                            goto $l843;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp848 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt847 = $tmp848;
                            if (((panda$core$Bit) { stmt847 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements839, ((panda$core$Object*) stmt847));
                        }
                    }
                }
                }
                $l843:;
                org$pandalanguage$pandac$ASTNode* $tmp849 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp849->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp849->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp849, ((panda$core$Int64) { 127 }), o835.position, ((panda$collections$ListView*) statements839));
                panda$collections$Array$add$panda$collections$Array$T(children822, ((panda$core$Object*) $tmp849));
                goto $l830;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp853 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token831);
                panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s852, $tmp853);
                panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp854, &$s855);
                panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s851, $tmp856);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token831, $tmp857);
            }
        }
    }
    }
    $l830:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp859 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s858);
    if (((panda$core$Bit) { !$tmp859.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp860 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp860->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp860->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp860, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start819.value).position, ((panda$collections$ListView*) children822));
    return $tmp860;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start862;
    panda$collections$Array* children865;
    org$pandalanguage$pandac$ASTNode* stmt871;
    org$pandalanguage$pandac$ASTNode* stmt875;
    org$pandalanguage$pandac$parser$Token$nullable $tmp864 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s863);
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
    $l868:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp870 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp870.kind.value) {
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l869;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp872 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt871 = $tmp872;
                if (((panda$core$Bit) { stmt871 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp874 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s873);
                if (((panda$core$Bit) { !$tmp874.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) stmt871));
                goto $l869;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp876 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt875 = $tmp876;
                if (((panda$core$Bit) { stmt875 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children865, ((panda$core$Object*) stmt875));
            }
        }
    }
    }
    $l869:;
    org$pandalanguage$pandac$ASTNode* $tmp877 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp877->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp877->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp877, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start862.value).position, ((panda$collections$ListView*) children865));
    return $tmp877;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start879;
    org$pandalanguage$pandac$parser$Token op882;
    org$pandalanguage$pandac$ASTNode* rvalue884;
    panda$collections$Array* children886;
    org$pandalanguage$pandac$parser$Token op893;
    org$pandalanguage$pandac$ASTNode* rvalue895;
    panda$collections$Array* children897;
    org$pandalanguage$pandac$ASTNode* $tmp880 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start879 = $tmp880;
    if (((panda$core$Bit) { start879 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp881 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp881.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp883 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op882 = $tmp883;
            org$pandalanguage$pandac$ASTNode* $tmp885 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue884 = $tmp885;
            if (((panda$core$Bit) { rvalue884 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp887 = (panda$collections$Array*) malloc(40);
            $tmp887->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp887->refCount.value = 1;
            panda$collections$Array$init($tmp887);
            children886 = $tmp887;
            panda$collections$Array$add$panda$collections$Array$T(children886, ((panda$core$Object*) start879));
            panda$collections$Array$add$panda$collections$Array$T(children886, ((panda$core$Object*) rvalue884));
            org$pandalanguage$pandac$ASTNode* $tmp889 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp889->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp889->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp889, ((panda$core$Int64) { 103 }), start879->position, ((panda$core$Object*) wrap_panda$core$Int64(op882.kind)), ((panda$collections$ListView*) children886));
            return $tmp889;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp891 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp891, &$s892);
            org$pandalanguage$pandac$parser$Token $tmp894 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op893 = $tmp894;
            org$pandalanguage$pandac$ASTNode* $tmp896 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue895 = $tmp896;
            if (((panda$core$Bit) { rvalue895 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp898 = (panda$collections$Array*) malloc(40);
            $tmp898->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp898->refCount.value = 1;
            panda$collections$Array$init($tmp898);
            children897 = $tmp898;
            panda$collections$Array$add$panda$collections$Array$T(children897, ((panda$core$Object*) start879));
            panda$collections$Array$add$panda$collections$Array$T(children897, ((panda$core$Object*) rvalue895));
            org$pandalanguage$pandac$ASTNode* $tmp900 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp900->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp900->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp900, ((panda$core$Int64) { 103 }), start879->position, ((panda$core$Object*) wrap_panda$core$Int64(op893.kind)), ((panda$collections$ListView*) children897));
            return $tmp900;
        }
        break;
        default:
        {
            return start879;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children902;
    org$pandalanguage$pandac$ASTNode* t905;
    org$pandalanguage$pandac$ASTNode* value908;
    org$pandalanguage$pandac$ASTNode* value914;
    panda$collections$Array* $tmp903 = (panda$collections$Array*) malloc(40);
    $tmp903->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp903->refCount.value = 1;
    panda$collections$Array$init($tmp903);
    children902 = $tmp903;
    org$pandalanguage$pandac$ASTNode* $tmp906 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t905 = $tmp906;
    if (((panda$core$Bit) { t905 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children902, ((panda$core$Object*) t905));
    org$pandalanguage$pandac$parser$Token$nullable $tmp907 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp907.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp909 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value908 = $tmp909;
        if (((panda$core$Bit) { value908 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children902, ((panda$core$Object*) value908));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp910 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp910.kind, ((panda$core$Int64) { 58 }));
    if ($tmp911.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp912 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp912, &$s913);
        org$pandalanguage$pandac$ASTNode* $tmp915 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value914 = $tmp915;
        if (((panda$core$Bit) { value914 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children902, ((panda$core$Object*) value914));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp916 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp916->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp916->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp916, ((panda$core$Int64) { 129 }), t905->position, ((panda$collections$ListView*) children902));
    return $tmp916;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start918;
    panda$core$Int64 kind920;
    panda$collections$Array* children922;
    org$pandalanguage$pandac$ASTNode* child925;
    org$pandalanguage$pandac$ASTNode* child930;
    org$pandalanguage$pandac$parser$Token $tmp919 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start918 = $tmp919;
    switch (start918.kind.value) {
        case 23:
        {
            kind920 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind920 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind920 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind920 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start918, &$s921);
        }
    }
    panda$collections$Array* $tmp923 = (panda$collections$Array*) malloc(40);
    $tmp923->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp923->refCount.value = 1;
    panda$collections$Array$init($tmp923);
    children922 = $tmp923;
    org$pandalanguage$pandac$ASTNode* $tmp926 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    child925 = $tmp926;
    if (((panda$core$Bit) { child925 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children922, ((panda$core$Object*) child925));
    $l927:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp929 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp929.nonnull }).value) goto $l928;
    {
        org$pandalanguage$pandac$ASTNode* $tmp931 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        child930 = $tmp931;
        if (((panda$core$Bit) { child930 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children922, ((panda$core$Object*) child930));
    }
    goto $l927;
    $l928:;
    org$pandalanguage$pandac$ASTNode* $tmp932 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp932->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp932->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp932, kind920, start918.position, ((panda$collections$ListView*) children922));
    return $tmp932;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start934;
    panda$collections$Array* children939;
    org$pandalanguage$pandac$ASTNode* expr946;
    org$pandalanguage$pandac$parser$Token$nullable $tmp936 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s935);
    start934 = $tmp936;
    if (((panda$core$Bit) { !start934.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp938 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s937);
    if (((panda$core$Bit) { !$tmp938.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) wrap_panda$core$Bit(((panda$core$Bit) { true }))));
    panda$collections$Array* $tmp940 = (panda$collections$Array*) malloc(40);
    $tmp940->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp940->refCount.value = 1;
    panda$collections$Array$init($tmp940);
    children939 = $tmp940;
    org$pandalanguage$pandac$ASTNode* $tmp942 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp942->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp942->refCount.value = 1;
    panda$core$String* $tmp944 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start934.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp942, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start934.value).position, $tmp944);
    panda$collections$Array$add$panda$collections$Array$T(children939, ((panda$core$Object*) $tmp942));
    org$pandalanguage$pandac$parser$Token$nullable $tmp945 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp945.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp947 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr946 = $tmp947;
        if (((panda$core$Bit) { expr946 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children939, ((panda$core$Object*) expr946));
        $l948:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp950 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp950.nonnull }).value) goto $l949;
        {
            org$pandalanguage$pandac$ASTNode* $tmp951 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr946 = $tmp951;
            if (((panda$core$Bit) { expr946 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children939, ((panda$core$Object*) expr946));
        }
        goto $l948;
        $l949:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp953 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s952);
        if (((panda$core$Bit) { !$tmp953.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp954 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp954->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp954->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp954, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start934.value).position, ((panda$collections$ListView*) children939));
    return $tmp954;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start956;
    org$pandalanguage$pandac$parser$Token$nullable label959;
    org$pandalanguage$pandac$parser$Token$nullable $tmp958 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 28 }), &$s957);
    start956 = $tmp958;
    if (((panda$core$Bit) { !start956.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp960 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label959 = $tmp960;
    if (((panda$core$Bit) { label959.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp961 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp961->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp961->refCount.value = 1;
        panda$core$String* $tmp963 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label959.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp961, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start956.value).position, $tmp963);
        return $tmp961;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp964 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp964->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp964->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp964, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start956.value).position);
    return $tmp964;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start966;
    org$pandalanguage$pandac$parser$Token$nullable label969;
    org$pandalanguage$pandac$parser$Token$nullable $tmp968 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 29 }), &$s967);
    start966 = $tmp968;
    if (((panda$core$Bit) { !start966.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp970 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label969 = $tmp970;
    if (((panda$core$Bit) { label969.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp971 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp971->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp971->refCount.value = 1;
        panda$core$String* $tmp973 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label969.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp971, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start966.value).position, $tmp973);
        return $tmp971;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp974 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp974->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp974->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp974, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start966.value).position);
    return $tmp974;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start976;
    panda$collections$Array* children982;
    org$pandalanguage$pandac$ASTNode* expr985;
    org$pandalanguage$pandac$parser$Token$nullable $tmp978 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 27 }), &$s977);
    start976 = $tmp978;
    if (((panda$core$Bit) { !start976.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp979 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp979.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp980 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp980->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp980->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp980, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start976.value).position);
            return $tmp980;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp983 = (panda$collections$Array*) malloc(40);
            $tmp983->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp983->refCount.value = 1;
            panda$collections$Array$init($tmp983);
            children982 = $tmp983;
            org$pandalanguage$pandac$ASTNode* $tmp986 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr985 = $tmp986;
            if (((panda$core$Bit) { expr985 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children982, ((panda$core$Object*) expr985));
            org$pandalanguage$pandac$ASTNode* $tmp987 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp987->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp987->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp987, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start976.value).position, ((panda$collections$ListView*) children982));
            return $tmp987;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp989 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp989.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp990 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp990;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp991 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp991;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp992 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp992;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp993 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp993.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp994 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp994;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp995 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp995;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp996 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp996;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp997 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp997;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s998);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1008;
    org$pandalanguage$pandac$parser$Token $tmp999 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp999.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1000 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1000;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1001 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1001;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1002 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1002;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1003 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1003;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1004 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1004;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1005 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1005;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1006 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1006;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1007 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1007;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1009 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1008 = $tmp1009;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1010 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1010.nonnull }).value) {
            {
                panda$core$String* $tmp1011 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1008);
                org$pandalanguage$pandac$ASTNode* $tmp1012 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1011);
                return $tmp1012;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1008);
            org$pandalanguage$pandac$ASTNode* $tmp1013 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1013;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1014 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1014;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1015 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1015;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1016 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1016;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s1017);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1018;
    org$pandalanguage$pandac$parser$Token$nullable next1021;
    panda$core$MutableString* name1024;
    panda$core$Char8 $tmp1031;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1020 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 14 }), &$s1019);
    start1018 = $tmp1020;
    if (((panda$core$Bit) { !start1018.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1023 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1022);
    next1021 = $tmp1023;
    if (((panda$core$Bit) { !next1021.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1025 = (panda$core$MutableString*) malloc(48);
    $tmp1025->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1025->refCount.value = 1;
    panda$core$String* $tmp1027 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1021.value));
    panda$core$MutableString$init$panda$core$String($tmp1025, $tmp1027);
    name1024 = $tmp1025;
    $l1028:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1030 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next1021 = $tmp1030;
        if (((panda$core$Bit) { !next1021.nonnull }).value) {
        {
            goto $l1029;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1031, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1024, $tmp1031);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1033 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1032);
        next1021 = $tmp1033;
        if (((panda$core$Bit) { !next1021.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1034 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1021.value));
        panda$core$MutableString$append$panda$core$String(name1024, $tmp1034);
    }
    }
    $l1029:;
    org$pandalanguage$pandac$ASTNode* $tmp1035 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1035->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1035->refCount.value = 1;
    panda$core$String* $tmp1037 = panda$core$MutableString$finish$R$panda$core$String(name1024);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1035, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1018.value).position, $tmp1037);
    return $tmp1035;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1038;
    org$pandalanguage$pandac$parser$Token$nullable next1041;
    panda$core$MutableString* name1044;
    panda$core$Char8 $tmp1051;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1040 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 15 }), &$s1039);
    start1038 = $tmp1040;
    if (((panda$core$Bit) { !start1038.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1043 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1042);
    next1041 = $tmp1043;
    if (((panda$core$Bit) { !next1041.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1045 = (panda$core$MutableString*) malloc(48);
    $tmp1045->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1045->refCount.value = 1;
    panda$core$String* $tmp1047 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1041.value));
    panda$core$MutableString$init$panda$core$String($tmp1045, $tmp1047);
    name1044 = $tmp1045;
    $l1048:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1050 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next1041 = $tmp1050;
        if (((panda$core$Bit) { !next1041.nonnull }).value) {
        {
            goto $l1049;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1051, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1044, $tmp1051);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1053 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1052);
        next1041 = $tmp1053;
        if (((panda$core$Bit) { !next1041.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1054 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1041.value));
        panda$core$MutableString$append$panda$core$String(name1044, $tmp1054);
    }
    }
    $l1049:;
    org$pandalanguage$pandac$ASTNode* $tmp1055 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1055->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1055->refCount.value = 1;
    panda$core$String* $tmp1057 = panda$core$MutableString$finish$R$panda$core$String(name1044);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1055, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1038.value).position, $tmp1057);
    return $tmp1055;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1058;
    org$pandalanguage$pandac$parser$Token$nullable id1061;
    panda$collections$Array* children1064;
    panda$collections$Array* idChildren1067;
    org$pandalanguage$pandac$ASTNode* t1071;
    org$pandalanguage$pandac$ASTNode* t1082;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1060 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 62 }), &$s1059);
    start1058 = $tmp1060;
    if (((panda$core$Bit) { !start1058.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1063 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1062);
    id1061 = $tmp1063;
    if (((panda$core$Bit) { !id1061.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1065 = (panda$collections$Array*) malloc(40);
    $tmp1065->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1065->refCount.value = 1;
    panda$collections$Array$init($tmp1065);
    children1064 = $tmp1065;
    panda$collections$Array* $tmp1068 = (panda$collections$Array*) malloc(40);
    $tmp1068->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1068->refCount.value = 1;
    panda$collections$Array$init($tmp1068);
    idChildren1067 = $tmp1068;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1070 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1070.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1072 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1071 = $tmp1072;
        if (((panda$core$Bit) { t1071 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1067, ((panda$core$Object*) t1071));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1073 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1073->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1073->refCount.value = 1;
    panda$core$String* $tmp1075 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1061.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1073, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1061.value).position, ((panda$core$Object*) $tmp1075), ((panda$collections$ListView*) idChildren1067));
    panda$collections$Array$add$panda$collections$Array$T(children1064, ((panda$core$Object*) $tmp1073));
    $l1076:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1078 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1078.nonnull }).value) goto $l1077;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1080 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1079);
        id1061 = $tmp1080;
        if (((panda$core$Bit) { !id1061.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1067);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1081 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1081.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1083 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1082 = $tmp1083;
            if (((panda$core$Bit) { t1082 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1067, ((panda$core$Object*) t1082));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1084 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1084->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1084->refCount.value = 1;
        panda$core$String* $tmp1086 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1061.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1084, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1061.value).position, ((panda$core$Object*) $tmp1086), ((panda$collections$ListView*) idChildren1067));
        panda$collections$Array$add$panda$collections$Array$T(children1064, ((panda$core$Object*) $tmp1084));
    }
    goto $l1076;
    $l1077:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1088 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s1087);
    if (((panda$core$Bit) { !$tmp1088.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1089 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1089->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1089->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1089, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1058.value).position, ((panda$collections$ListView*) children1064));
    return $tmp1089;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1091;
    panda$collections$Array* children1094;
    org$pandalanguage$pandac$ASTNode* t1097;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1093 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s1092);
    start1091 = $tmp1093;
    if (((panda$core$Bit) { !start1091.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1095 = (panda$collections$Array*) malloc(40);
    $tmp1095->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1095->refCount.value = 1;
    panda$collections$Array$init($tmp1095);
    children1094 = $tmp1095;
    org$pandalanguage$pandac$ASTNode* $tmp1098 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1097 = $tmp1098;
    if (((panda$core$Bit) { t1097 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1094, ((panda$core$Object*) t1097));
    $l1099:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1101 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1101.nonnull }).value) goto $l1100;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1102 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1097 = $tmp1102;
        if (((panda$core$Bit) { t1097 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1094, ((panda$core$Object*) t1097));
    }
    goto $l1099;
    $l1100:;
    org$pandalanguage$pandac$ASTNode* $tmp1103 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1103->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1103->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1103, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1091.value).position, ((panda$collections$ListView*) children1094));
    return $tmp1103;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1105;
    org$pandalanguage$pandac$parser$Token$nullable next1110;
    org$pandalanguage$pandac$Position $tmp1117;
    panda$collections$Array* $tmp1106 = (panda$collections$Array*) malloc(40);
    $tmp1106->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1106->refCount.value = 1;
    panda$collections$Array$init($tmp1106);
    children1105 = $tmp1106;
    $l1108:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1111 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 13 }));
        next1110 = $tmp1111;
        if (((panda$core$Bit) { !next1110.nonnull }).value) {
        {
            goto $l1109;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1112 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1112->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1112->refCount.value = 1;
        panda$core$String* $tmp1114 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1110.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1112, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1110.value).position, $tmp1114);
        panda$collections$Array$add$panda$collections$Array$T(children1105, ((panda$core$Object*) $tmp1112));
    }
    }
    $l1109:;
    org$pandalanguage$pandac$ASTNode* $tmp1115 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1115->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1115->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1117);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1115, ((panda$core$Int64) { 144 }), $tmp1117, ((panda$collections$ListView*) children1105));
    return $tmp1115;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1118;
    panda$core$MutableString* result1121;
    org$pandalanguage$pandac$parser$Token next1126;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1120 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 11 }), &$s1119);
    start1118 = $tmp1120;
    if (((panda$core$Bit) { !start1118.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1122 = (panda$core$MutableString*) malloc(48);
    $tmp1122->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1122->refCount.value = 1;
    panda$core$MutableString$init($tmp1122);
    result1121 = $tmp1122;
    $l1124:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1127 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1126 = $tmp1127;
        panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1126.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1128.value) {
        {
            goto $l1125;
        }
        }
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1126.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1129.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1118.value), &$s1130);
            return NULL;
        }
        }
        panda$core$String* $tmp1131 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1126);
        panda$core$MutableString$append$panda$core$String(result1121, $tmp1131);
    }
    }
    $l1125:;
    org$pandalanguage$pandac$ASTNode* $tmp1132 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1132->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1132->refCount.value = 1;
    panda$core$String* $tmp1134 = panda$core$MutableString$finish$R$panda$core$String(result1121);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1132, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1118.value).position, $tmp1134);
    return $tmp1132;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1135;
    org$pandalanguage$pandac$ASTNode* t1138;
    panda$collections$Array* children1140;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1137 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1136);
    id1135 = $tmp1137;
    if (((panda$core$Bit) { !id1135.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1139 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1138 = $tmp1139;
    if (((panda$core$Bit) { t1138 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1141 = (panda$collections$Array*) malloc(40);
    $tmp1141->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1141->refCount.value = 1;
    panda$collections$Array$init($tmp1141);
    children1140 = $tmp1141;
    panda$collections$Array$add$panda$collections$Array$T(children1140, ((panda$core$Object*) t1138));
    org$pandalanguage$pandac$ASTNode* $tmp1143 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1143->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1143->refCount.value = 1;
    panda$core$String* $tmp1145 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1135.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1143, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1135.value).position, ((panda$core$Object*) $tmp1145), ((panda$collections$ListView*) children1140));
    return $tmp1143;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1146;
    panda$collections$Array* children1149;
    org$pandalanguage$pandac$ASTNode* param1153;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1148 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s1147);
    start1146 = $tmp1148;
    if (((panda$core$Bit) { !start1146.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1150 = (panda$collections$Array*) malloc(40);
    $tmp1150->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1150->refCount.value = 1;
    panda$collections$Array$init($tmp1150);
    children1149 = $tmp1150;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1152 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1152.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1154 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1153 = $tmp1154;
        if (((panda$core$Bit) { param1153 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1149, ((panda$core$Object*) param1153));
        $l1155:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1157 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1157.nonnull }).value) goto $l1156;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1158 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
            param1153 = $tmp1158;
            if (((panda$core$Bit) { param1153 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1149, ((panda$core$Object*) param1153));
        }
        goto $l1155;
        $l1156:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1160 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1159);
        if (((panda$core$Bit) { !$tmp1160.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1161 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1161->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1161->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1161, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1146.value).position, ((panda$collections$ListView*) children1149));
    return $tmp1161;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1163;
    org$pandalanguage$pandac$parser$Token$nullable start1164;
    panda$core$String* name1168;
    panda$collections$Array* children1170;
    org$pandalanguage$pandac$ASTNode* params1173;
    org$pandalanguage$pandac$ASTNode* returnType1177;
    org$pandalanguage$pandac$Position $tmp1181;
    org$pandalanguage$pandac$ASTNode* b1184;
    org$pandalanguage$pandac$Position $tmp1188;
    org$pandalanguage$pandac$parser$Token token1189;
    panda$core$String* tokenText1191;
    org$pandalanguage$pandac$ASTNode* post1204;
    org$pandalanguage$pandac$Position $tmp1208;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1165 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 20 }));
    start1164 = $tmp1165;
    if (((panda$core$Bit) { !start1164.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1167 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 21 }), &$s1166);
        start1164 = $tmp1167;
        if (((panda$core$Bit) { !start1164.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1163 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1163 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1169 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1168 = $tmp1169;
    if (((panda$core$Bit) { name1168 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1171 = (panda$collections$Array*) malloc(40);
    $tmp1171->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1171->refCount.value = 1;
    panda$collections$Array$init($tmp1171);
    children1170 = $tmp1171;
    panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1174 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1173 = $tmp1174;
    if (((panda$core$Bit) { params1173 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) params1173));
    org$pandalanguage$pandac$parser$Token $tmp1175 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1175.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1176.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1178 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        returnType1177 = $tmp1178;
        if (((panda$core$Bit) { returnType1177 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) returnType1177));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1179 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1179->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1179->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1181);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1179, ((panda$core$Int64) { 138 }), $tmp1181);
        panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) $tmp1179));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1182 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1182.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1183.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1185 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
        b1184 = $tmp1185;
        if (((panda$core$Bit) { b1184 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) b1184));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1186 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1186->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1186->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1188);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1186, ((panda$core$Int64) { 138 }), $tmp1188);
        panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) $tmp1186));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1190 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1189 = $tmp1190;
    panda$core$String* $tmp1192 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1189);
    tokenText1191 = $tmp1192;
    panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1189.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1193 = $tmp1194.value;
    if (!$tmp1193) goto $l1195;
    panda$core$Bit $tmp1198 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1191, &$s1197);
    bool $tmp1196 = $tmp1198.value;
    if ($tmp1196) goto $l1199;
    panda$core$Bit $tmp1201 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1191, &$s1200);
    $tmp1196 = $tmp1201.value;
    $l1199:;
    panda$core$Bit $tmp1202 = { $tmp1196 };
    $tmp1193 = $tmp1202.value;
    $l1195:;
    panda$core$Bit $tmp1203 = { $tmp1193 };
    if ($tmp1203.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1205 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1204 = $tmp1205;
        if (((panda$core$Bit) { post1204 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) post1204));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1206 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1206->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1206->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1208);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1206, ((panda$core$Int64) { 138 }), $tmp1208);
        panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) $tmp1206));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1209 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1209->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1209->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1209, kind1163, ((org$pandalanguage$pandac$parser$Token) start1164.value).position, ((panda$core$Object*) name1168), ((panda$collections$ListView*) children1170));
    return $tmp1209;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1211;
    panda$collections$Array* children1214;
    org$pandalanguage$pandac$ASTNode* params1217;
    org$pandalanguage$pandac$ASTNode* b1219;
    org$pandalanguage$pandac$parser$Token token1221;
    panda$core$String* tokenText1223;
    org$pandalanguage$pandac$ASTNode* post1236;
    org$pandalanguage$pandac$Position $tmp1240;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1213 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s1212);
    start1211 = $tmp1213;
    if (((panda$core$Bit) { !start1211.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1215 = (panda$collections$Array*) malloc(40);
    $tmp1215->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1215->refCount.value = 1;
    panda$collections$Array$init($tmp1215);
    children1214 = $tmp1215;
    panda$collections$Array$add$panda$collections$Array$T(children1214, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1214, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1218 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1217 = $tmp1218;
    if (((panda$core$Bit) { params1217 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1214, ((panda$core$Object*) params1217));
    org$pandalanguage$pandac$ASTNode* $tmp1220 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    b1219 = $tmp1220;
    if (((panda$core$Bit) { b1219 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1214, ((panda$core$Object*) b1219));
    org$pandalanguage$pandac$parser$Token $tmp1222 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1221 = $tmp1222;
    panda$core$String* $tmp1224 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1221);
    tokenText1223 = $tmp1224;
    panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1221.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1225 = $tmp1226.value;
    if (!$tmp1225) goto $l1227;
    panda$core$Bit $tmp1230 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1223, &$s1229);
    bool $tmp1228 = $tmp1230.value;
    if ($tmp1228) goto $l1231;
    panda$core$Bit $tmp1233 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1223, &$s1232);
    $tmp1228 = $tmp1233.value;
    $l1231:;
    panda$core$Bit $tmp1234 = { $tmp1228 };
    $tmp1225 = $tmp1234.value;
    $l1227:;
    panda$core$Bit $tmp1235 = { $tmp1225 };
    if ($tmp1235.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1237 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1236 = $tmp1237;
        if (((panda$core$Bit) { post1236 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1214, ((panda$core$Object*) post1236));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1238 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1238->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1238->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1240);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1238, ((panda$core$Int64) { 138 }), $tmp1240);
        panda$collections$Array$add$panda$collections$Array$T(children1214, ((panda$core$Object*) $tmp1238));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1241 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1241->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1241->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1241, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1211.value).position, ((panda$collections$ListView*) children1214));
    return $tmp1241;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1243;
    panda$collections$Array* children1245;
    org$pandalanguage$pandac$ASTNode* $tmp1244 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1243 = $tmp1244;
    if (((panda$core$Bit) { decl1243 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1246 = (panda$collections$Array*) malloc(40);
    $tmp1246->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1246->refCount.value = 1;
    panda$collections$Array$init($tmp1246);
    children1245 = $tmp1246;
    panda$collections$Array$add$panda$collections$Array$T(children1245, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1245, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1245, ((panda$core$Object*) decl1243));
    org$pandalanguage$pandac$ASTNode* $tmp1248 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1248->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1248->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1248, ((panda$core$Int64) { 148 }), decl1243->position, ((panda$collections$ListView*) children1245));
    return $tmp1248;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1250;
    panda$collections$Array* types1253;
    org$pandalanguage$pandac$ASTNode* t1259;
    panda$collections$Array* children1267;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1252 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1251);
    name1250 = $tmp1252;
    if (((panda$core$Bit) { !name1250.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1254 = (panda$collections$Array*) malloc(40);
    $tmp1254->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1254->refCount.value = 1;
    panda$collections$Array$init($tmp1254);
    types1253 = $tmp1254;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1256 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }));
    if (((panda$core$Bit) { $tmp1256.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1257 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1258 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1257.kind, ((panda$core$Int64) { 104 }));
        if ($tmp1258.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1260 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1259 = $tmp1260;
            if (((panda$core$Bit) { t1259 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(types1253, ((panda$core$Object*) t1259));
            $l1261:;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1263 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
            if (!((panda$core$Bit) { $tmp1263.nonnull }).value) goto $l1262;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1264 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t1259 = $tmp1264;
                if (((panda$core$Bit) { t1259 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(types1253, ((panda$core$Object*) t1259));
            }
            goto $l1261;
            $l1262:;
        }
        }
        org$pandalanguage$pandac$parser$Token$nullable $tmp1266 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1265);
        if (((panda$core$Bit) { !$tmp1266.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp1268 = (panda$collections$Array*) malloc(40);
    $tmp1268->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1268->refCount.value = 1;
    panda$collections$Array$init($tmp1268);
    children1267 = $tmp1268;
    panda$collections$Array$add$panda$collections$Array$T(children1267, ((panda$core$Object*) p_doccomment));
    org$pandalanguage$pandac$ASTNode* $tmp1270 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1270->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1270->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1270, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) name1250.value).position, ((panda$collections$ListView*) types1253));
    panda$collections$Array$add$panda$collections$Array$T(children1267, ((panda$core$Object*) $tmp1270));
    org$pandalanguage$pandac$ASTNode* $tmp1272 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1272->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1272->refCount.value = 1;
    panda$core$String* $tmp1274 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1250.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1272, ((panda$core$Int64) { 156 }), ((org$pandalanguage$pandac$parser$Token) name1250.value).position, ((panda$core$Object*) $tmp1274), ((panda$collections$ListView*) children1267));
    return $tmp1272;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, org$pandalanguage$pandac$ASTNode* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1275;
    org$pandalanguage$pandac$parser$Token$nullable name1278;
    panda$collections$Array* members1283;
    org$pandalanguage$pandac$ASTNode* dc1286;
    org$pandalanguage$pandac$Position $tmp1289;
    org$pandalanguage$pandac$parser$Token next1292;
    org$pandalanguage$pandac$ASTNode* c1301;
    org$pandalanguage$pandac$Position $tmp1305;
    org$pandalanguage$pandac$ASTNode* a1306;
    org$pandalanguage$pandac$Position $tmp1309;
    org$pandalanguage$pandac$parser$Token next1314;
    org$pandalanguage$pandac$ASTNode* decl1336;
    org$pandalanguage$pandac$Position $tmp1340;
    org$pandalanguage$pandac$Position $tmp1343;
    org$pandalanguage$pandac$ASTNode* decl1346;
    org$pandalanguage$pandac$Position $tmp1350;
    org$pandalanguage$pandac$Position $tmp1353;
    org$pandalanguage$pandac$ASTNode* decl1356;
    org$pandalanguage$pandac$Position $tmp1360;
    org$pandalanguage$pandac$Position $tmp1363;
    org$pandalanguage$pandac$ASTNode* decl1366;
    org$pandalanguage$pandac$Position $tmp1370;
    org$pandalanguage$pandac$Position $tmp1373;
    org$pandalanguage$pandac$ASTNode* decl1376;
    org$pandalanguage$pandac$Position $tmp1380;
    org$pandalanguage$pandac$Position $tmp1383;
    panda$collections$Array* children1387;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1277 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 19 }), &$s1276);
    start1275 = $tmp1277;
    if (((panda$core$Bit) { !start1275.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1280 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1279);
    name1278 = $tmp1280;
    if (((panda$core$Bit) { !name1278.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1282 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1281);
    if (((panda$core$Bit) { !$tmp1282.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1284 = (panda$collections$Array*) malloc(40);
    $tmp1284->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1284->refCount.value = 1;
    panda$collections$Array$init($tmp1284);
    members1283 = $tmp1284;
    org$pandalanguage$pandac$ASTNode* $tmp1287 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1287->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1287->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1289);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1287, ((panda$core$Int64) { 138 }), $tmp1289);
    dc1286 = $tmp1287;
    $l1290:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1293 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1292 = $tmp1293;
        switch (next1292.kind.value) {
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
                goto $l1291;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1294 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1286->kind, ((panda$core$Int64) { 138 }));
                if ($tmp1294.value) {
                {
                    panda$core$String* $tmp1296 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1292);
                    panda$core$String* $tmp1297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1295, $tmp1296);
                    panda$core$String* $tmp1299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1297, &$s1298);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1292, $tmp1299);
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1300 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1286 = $tmp1300;
            }
            break;
            case 48:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1302 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1286);
                c1301 = $tmp1302;
                if (((panda$core$Bit) { c1301 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1283, ((panda$core$Object*) c1301));
                org$pandalanguage$pandac$ASTNode* $tmp1303 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1303->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1303->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1305);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1303, ((panda$core$Int64) { 138 }), $tmp1305);
                dc1286 = $tmp1303;
            }
            break;
            default:
            {
                goto $l1291;
            }
        }
    }
    }
    $l1291:;
    org$pandalanguage$pandac$ASTNode* $tmp1307 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1307->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1307->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1309);
    panda$collections$Array* $tmp1310 = (panda$collections$Array*) malloc(40);
    $tmp1310->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1310->refCount.value = 1;
    panda$collections$Array$init($tmp1310);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1307, ((panda$core$Int64) { 144 }), $tmp1309, ((panda$collections$ListView*) $tmp1310));
    a1306 = $tmp1307;
    $l1312:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1315 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1314 = $tmp1315;
        switch (next1314.kind.value) {
            case 13:
            {
                panda$core$Int64 $tmp1316 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1306->children);
                panda$core$Bit $tmp1317 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1316, ((panda$core$Int64) { 0 }));
                if ($tmp1317.value) {
                {
                    panda$core$String* $tmp1319 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1314);
                    panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1318, $tmp1319);
                    panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1314, $tmp1322);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1323 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
                a1306 = $tmp1323;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1325 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1286->kind, ((panda$core$Int64) { 138 }));
                bool $tmp1324 = $tmp1325.value;
                if ($tmp1324) goto $l1326;
                panda$core$Int64 $tmp1327 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1306->children);
                panda$core$Bit $tmp1328 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1327, ((panda$core$Int64) { 0 }));
                $tmp1324 = $tmp1328.value;
                $l1326:;
                panda$core$Bit $tmp1329 = { $tmp1324 };
                if ($tmp1329.value) {
                {
                    panda$core$String* $tmp1331 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1314);
                    panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1330, $tmp1331);
                    panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1333);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1314, $tmp1334);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1335 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1286 = $tmp1335;
            }
            break;
            case 17:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1337 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1286, a1306);
                decl1336 = $tmp1337;
                if (((panda$core$Bit) { decl1336 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1283, ((panda$core$Object*) decl1336));
                org$pandalanguage$pandac$ASTNode* $tmp1338 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1338->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1338->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1340);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1338, ((panda$core$Int64) { 138 }), $tmp1340);
                dc1286 = $tmp1338;
                org$pandalanguage$pandac$ASTNode* $tmp1341 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1341->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1341->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1343);
                panda$collections$Array* $tmp1344 = (panda$collections$Array*) malloc(40);
                $tmp1344->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1344->refCount.value = 1;
                panda$collections$Array$init($tmp1344);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1341, ((panda$core$Int64) { 144 }), $tmp1343, ((panda$collections$ListView*) $tmp1344));
                a1306 = $tmp1341;
            }
            break;
            case 18:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1347 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1286, a1306);
                decl1346 = $tmp1347;
                if (((panda$core$Bit) { decl1346 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1283, ((panda$core$Object*) decl1346));
                org$pandalanguage$pandac$ASTNode* $tmp1348 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1348->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1348->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1350);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1348, ((panda$core$Int64) { 138 }), $tmp1350);
                dc1286 = $tmp1348;
                org$pandalanguage$pandac$ASTNode* $tmp1351 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1351->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1351->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1353);
                panda$collections$Array* $tmp1354 = (panda$collections$Array*) malloc(40);
                $tmp1354->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1354->refCount.value = 1;
                panda$collections$Array$init($tmp1354);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1351, ((panda$core$Int64) { 144 }), $tmp1353, ((panda$collections$ListView*) $tmp1354));
                a1306 = $tmp1351;
            }
            break;
            case 19:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1357 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1286, a1306);
                decl1356 = $tmp1357;
                if (((panda$core$Bit) { decl1356 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1283, ((panda$core$Object*) decl1356));
                org$pandalanguage$pandac$ASTNode* $tmp1358 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1358->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1358->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1360);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1358, ((panda$core$Int64) { 138 }), $tmp1360);
                dc1286 = $tmp1358;
                org$pandalanguage$pandac$ASTNode* $tmp1361 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1361->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1361->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1363);
                panda$collections$Array* $tmp1364 = (panda$collections$Array*) malloc(40);
                $tmp1364->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1364->refCount.value = 1;
                panda$collections$Array$init($tmp1364);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1361, ((panda$core$Int64) { 144 }), $tmp1363, ((panda$collections$ListView*) $tmp1364));
                a1306 = $tmp1361;
            }
            break;
            case 21:
            case 20:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1367 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1286, a1306);
                decl1366 = $tmp1367;
                if (((panda$core$Bit) { decl1366 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1283, ((panda$core$Object*) decl1366));
                org$pandalanguage$pandac$ASTNode* $tmp1368 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1368->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1368->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1370);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1368, ((panda$core$Int64) { 138 }), $tmp1370);
                dc1286 = $tmp1368;
                org$pandalanguage$pandac$ASTNode* $tmp1371 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1371->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1371->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1373);
                panda$collections$Array* $tmp1374 = (panda$collections$Array*) malloc(40);
                $tmp1374->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1374->refCount.value = 1;
                panda$collections$Array$init($tmp1374);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1371, ((panda$core$Int64) { 144 }), $tmp1373, ((panda$collections$ListView*) $tmp1374));
                a1306 = $tmp1371;
            }
            break;
            case 23:
            case 24:
            case 25:
            case 26:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1377 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1286, a1306);
                decl1376 = $tmp1377;
                if (((panda$core$Bit) { decl1376 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1283, ((panda$core$Object*) decl1376));
                org$pandalanguage$pandac$ASTNode* $tmp1378 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1378->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1378->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1380);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1378, ((panda$core$Int64) { 138 }), $tmp1380);
                dc1286 = $tmp1378;
                org$pandalanguage$pandac$ASTNode* $tmp1381 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1381->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1381->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1383);
                panda$collections$Array* $tmp1384 = (panda$collections$Array*) malloc(40);
                $tmp1384->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1384->refCount.value = 1;
                panda$collections$Array$init($tmp1384);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1381, ((panda$core$Int64) { 144 }), $tmp1383, ((panda$collections$ListView*) $tmp1384));
                a1306 = $tmp1381;
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s1386);
                goto $l1313;
            }
            break;
        }
    }
    }
    $l1313:;
    panda$collections$Array* $tmp1388 = (panda$collections$Array*) malloc(40);
    $tmp1388->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1388->refCount.value = 1;
    panda$collections$Array$init($tmp1388);
    children1387 = $tmp1388;
    panda$collections$Array$add$panda$collections$Array$T(children1387, ((panda$core$Object*) p_choiceDoccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1387, ((panda$core$Object*) p_choiceAnnotations));
    org$pandalanguage$pandac$ASTNode* $tmp1390 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1390->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1390->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1390, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1275.value).position, ((panda$collections$ListView*) members1283));
    panda$collections$Array$add$panda$collections$Array$T(children1387, ((panda$core$Object*) $tmp1390));
    org$pandalanguage$pandac$ASTNode* $tmp1392 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1392->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1392->refCount.value = 1;
    panda$core$String* $tmp1394 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1278.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1392, ((panda$core$Int64) { 155 }), ((org$pandalanguage$pandac$parser$Token) start1275.value).position, ((panda$core$Object*) $tmp1394), ((panda$collections$ListView*) children1387));
    return $tmp1392;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1395;
    org$pandalanguage$pandac$ASTNode* dc1397;
    org$pandalanguage$pandac$Position $tmp1402;
    org$pandalanguage$pandac$ASTNode* a1403;
    org$pandalanguage$pandac$parser$Token $tmp1396 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start1395 = $tmp1396;
    panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1395.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1398.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1399 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
        dc1397 = $tmp1399;
        if (((panda$core$Bit) { dc1397 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1400 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1400->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1402);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1400, ((panda$core$Int64) { 138 }), $tmp1402);
        dc1397 = $tmp1400;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1404 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
    a1403 = $tmp1404;
    if (((panda$core$Bit) { a1403 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1405 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1405.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1406 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1397, a1403);
            return $tmp1406;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1407 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1397, a1403);
            return $tmp1407;
        }
        break;
        case 19:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1408 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1397, a1403);
            return $tmp1408;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1409 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1397, a1403);
            return $tmp1409;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1410 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1397, a1403);
            return $tmp1410;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1411 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1397, a1403);
            return $tmp1411;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1412);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1413;
    org$pandalanguage$pandac$parser$Token$nullable start1416;
    org$pandalanguage$pandac$parser$Token$nullable name1419;
    org$pandalanguage$pandac$ASTNode* generics1424;
    org$pandalanguage$pandac$Position $tmp1428;
    org$pandalanguage$pandac$ASTNode* stypes1431;
    org$pandalanguage$pandac$Position $tmp1435;
    panda$collections$Array* members1438;
    org$pandalanguage$pandac$ASTNode* member1444;
    panda$collections$Array* $tmp1414 = (panda$collections$Array*) malloc(40);
    $tmp1414->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1414->refCount.value = 1;
    panda$collections$Array$init($tmp1414);
    children1413 = $tmp1414;
    panda$collections$Array$add$panda$collections$Array$T(children1413, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1413, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1418 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1417);
    start1416 = $tmp1418;
    if (((panda$core$Bit) { !start1416.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1421 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1420);
    name1419 = $tmp1421;
    if (((panda$core$Bit) { !name1419.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1422 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1422.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1423.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1425 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1424 = $tmp1425;
        if (((panda$core$Bit) { generics1424 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1413, ((panda$core$Object*) generics1424));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1426 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1426->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1426->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1428);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1426, ((panda$core$Int64) { 138 }), $tmp1428);
        panda$collections$Array$add$panda$collections$Array$T(children1413, ((panda$core$Object*) $tmp1426));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1429 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1429.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1430.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1432 = org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(self);
        stypes1431 = $tmp1432;
        if (((panda$core$Bit) { stypes1431 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1413, ((panda$core$Object*) stypes1431));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1433 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1433->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1433->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1435);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1433, ((panda$core$Int64) { 139 }), $tmp1435);
        panda$collections$Array$add$panda$collections$Array$T(children1413, ((panda$core$Object*) $tmp1433));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1437 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1436);
    if (((panda$core$Bit) { !$tmp1437.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1439 = (panda$collections$Array*) malloc(40);
    $tmp1439->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1439->refCount.value = 1;
    panda$collections$Array$init($tmp1439);
    members1438 = $tmp1439;
    $l1441:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1443 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1443.nonnull }).value) goto $l1442;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1445 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1444 = $tmp1445;
        if (((panda$core$Bit) { member1444 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1438, ((panda$core$Object*) member1444));
    }
    goto $l1441;
    $l1442:;
    org$pandalanguage$pandac$ASTNode* $tmp1446 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1446->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1446->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1446, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1416.value).position, ((panda$collections$ListView*) members1438));
    panda$collections$Array$add$panda$collections$Array$T(children1413, ((panda$core$Object*) $tmp1446));
    org$pandalanguage$pandac$ASTNode* $tmp1448 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1448->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1448->refCount.value = 1;
    panda$core$String* $tmp1450 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1419.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1448, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1416.value).position, ((panda$core$Object*) $tmp1450), ((panda$collections$ListView*) children1413));
    return $tmp1448;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1451;
    org$pandalanguage$pandac$parser$Token$nullable start1454;
    org$pandalanguage$pandac$parser$Token$nullable name1457;
    org$pandalanguage$pandac$ASTNode* generics1462;
    org$pandalanguage$pandac$Position $tmp1466;
    panda$collections$Array* intfs1467;
    org$pandalanguage$pandac$ASTNode* t1471;
    panda$collections$Array* members1481;
    org$pandalanguage$pandac$ASTNode* member1487;
    panda$collections$Array* $tmp1452 = (panda$collections$Array*) malloc(40);
    $tmp1452->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1452->refCount.value = 1;
    panda$collections$Array$init($tmp1452);
    children1451 = $tmp1452;
    panda$collections$Array$add$panda$collections$Array$T(children1451, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1451, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1456 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 18 }), &$s1455);
    start1454 = $tmp1456;
    if (((panda$core$Bit) { !start1454.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1459 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1458);
    name1457 = $tmp1459;
    if (((panda$core$Bit) { !name1457.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1460 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1460.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1461.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1463 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1462 = $tmp1463;
        if (((panda$core$Bit) { generics1462 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1451, ((panda$core$Object*) generics1462));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1464 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1464->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1464->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1466);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1464, ((panda$core$Int64) { 138 }), $tmp1466);
        panda$collections$Array$add$panda$collections$Array$T(children1451, ((panda$core$Object*) $tmp1464));
    }
    }
    panda$collections$Array* $tmp1468 = (panda$collections$Array*) malloc(40);
    $tmp1468->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1468->refCount.value = 1;
    panda$collections$Array$init($tmp1468);
    intfs1467 = $tmp1468;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1470 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1470.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1472 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1471 = $tmp1472;
        if (((panda$core$Bit) { t1471 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1467, ((panda$core$Object*) t1471));
        $l1473:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1475 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1475.nonnull }).value) goto $l1474;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1476 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1471 = $tmp1476;
            if (((panda$core$Bit) { t1471 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1467, ((panda$core$Object*) t1471));
        }
        goto $l1473;
        $l1474:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1477 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1477->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1477, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1454.value).position, ((panda$collections$ListView*) intfs1467));
    panda$collections$Array$add$panda$collections$Array$T(children1451, ((panda$core$Object*) $tmp1477));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1480 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1479);
    if (((panda$core$Bit) { !$tmp1480.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1482 = (panda$collections$Array*) malloc(40);
    $tmp1482->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1482->refCount.value = 1;
    panda$collections$Array$init($tmp1482);
    members1481 = $tmp1482;
    $l1484:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1486 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1486.nonnull }).value) goto $l1485;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1488 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1487 = $tmp1488;
        if (((panda$core$Bit) { member1487 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1481, ((panda$core$Object*) member1487));
    }
    goto $l1484;
    $l1485:;
    org$pandalanguage$pandac$ASTNode* $tmp1489 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1489->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1489->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1489, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1454.value).position, ((panda$collections$ListView*) members1481));
    panda$collections$Array$add$panda$collections$Array$T(children1451, ((panda$core$Object*) $tmp1489));
    org$pandalanguage$pandac$ASTNode* $tmp1491 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1491->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1491->refCount.value = 1;
    panda$core$String* $tmp1493 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1457.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1491, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1454.value).position, ((panda$core$Object*) $tmp1493), ((panda$collections$ListView*) children1451));
    return $tmp1491;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1494 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1494.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1495 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1495;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1496 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1496;
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
            org$pandalanguage$pandac$ASTNode* $tmp1497 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1497;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1498 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1498;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1499;
    org$pandalanguage$pandac$ASTNode* entry1506;
    org$pandalanguage$pandac$Position $tmp1511;
    panda$collections$Array* $tmp1500 = (panda$collections$Array*) malloc(40);
    $tmp1500->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1500->refCount.value = 1;
    panda$collections$Array$init($tmp1500);
    entries1499 = $tmp1500;
    $l1502:;
    org$pandalanguage$pandac$parser$Token $tmp1504 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1505 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1504.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1505.value) goto $l1503;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1507 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry1506 = $tmp1507;
        if (((panda$core$Bit) { entry1506 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1508 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1508.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1499, ((panda$core$Object*) entry1506));
    }
    goto $l1502;
    $l1503:;
    org$pandalanguage$pandac$ASTNode* $tmp1509 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1509->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1509->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1511, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1509, ((panda$core$Int64) { 152 }), $tmp1511, ((panda$collections$ListView*) entries1499));
    return $tmp1509;
}

