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

typedef void (*$fn58)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef panda$core$Object* (*$fn124)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn178)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn271)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    panda$core$Bit$wrapper* $tmp9;
    $tmp9 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp9->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp9->refCount = 1;
    $tmp9->value = ((panda$core$Bit) { false });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp9));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    self->path = p_path;
    self->source = p_source;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx12;
    org$pandalanguage$pandac$parser$Token result15;
    org$pandalanguage$pandac$parser$Token result17;
    panda$core$Int64 $tmp10 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp11 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp10, ((panda$core$Int64) { 0 }));
    if ($tmp11.value) {
    {
        panda$core$Int64 $tmp13 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp14 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp13, ((panda$core$Int64) { 1 }));
        idx12 = $tmp14;
        org$pandalanguage$pandac$parser$Token $tmp16 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx12);
        result15 = $tmp16;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx12);
        return result15;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp18 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result17 = $tmp18;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result17);
    }
    }
    return result17;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result21;
    org$pandalanguage$pandac$parser$Token next25;
    panda$core$Char8 $tmp28;
    org$pandalanguage$pandac$parser$Token next32;
    $l19:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp22 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result21 = $tmp22;
        switch (result21.kind.value) {
            case 12:
            {
                goto $l19;
            }
            break;
            case 8:
            {
                $l23:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp26 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next25 = $tmp26;
                    switch (next25.kind.value) {
                        case 12:
                        {
                            panda$core$String* $tmp27 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next25);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp28, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp29 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp27, $tmp28);
                            if ($tmp29.value) {
                            {
                                goto $l19;
                            }
                            }
                        }
                        break;
                        case 0:
                        {
                            return next25;
                        }
                        break;
                    }
                }
                }
                $l24:;
            }
            break;
            case 9:
            {
                $l30:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp33 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next32 = $tmp33;
                    switch (next32.kind.value) {
                        case 10:
                        {
                            goto $l19;
                        }
                        break;
                        case 0:
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result21, &$s34);
                            return next32;
                        }
                        break;
                    }
                }
                }
                $l31:;
            }
            break;
            default:
            {
                return result21;
            }
        }
    }
    }
    $l20:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp35 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp35, ((panda$core$Int64) { 0 }));
    if ($tmp36.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp37 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp37);
    }
    }
    panda$core$Int64 $tmp38 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp39 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp38, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp40 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp39);
    return $tmp40;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind) {
    org$pandalanguage$pandac$parser$Token result41;
    org$pandalanguage$pandac$parser$Token $tmp42 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result41 = $tmp42;
    panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result41.kind, p_kind);
    if ($tmp43.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result41, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result41);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Int64 p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result44;
    org$pandalanguage$pandac$parser$Token $tmp45 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result44 = $tmp45;
    panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result44.kind, p_kind);
    if ($tmp46.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result44, true });
    }
    }
    panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s47, p_expected);
    panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s49);
    panda$core$String* $tmp51 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result44);
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, $tmp51);
    panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s53);
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result44, $tmp54);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp55.value) {
    {
        ITable* $tmp56 = self->errors->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        $tmp57(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp59 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp59.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp60;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp61 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp62 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp61, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp60, $tmp62, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp64 = $tmp60.start.value;
    panda$core$Int64 i63 = { $tmp64 };
    int64_t $tmp66 = $tmp60.end.value;
    int64_t $tmp67 = $tmp60.step.value;
    bool $tmp68 = $tmp60.inclusive.value;
    bool $tmp75 = $tmp67 > 0;
    if ($tmp75) goto $l73; else goto $l74;
    $l73:;
    if ($tmp68) goto $l76; else goto $l77;
    $l76:;
    if ($tmp64 <= $tmp66) goto $l69; else goto $l71;
    $l77:;
    if ($tmp64 < $tmp66) goto $l69; else goto $l71;
    $l74:;
    if ($tmp68) goto $l78; else goto $l79;
    $l78:;
    if ($tmp64 >= $tmp66) goto $l69; else goto $l71;
    $l79:;
    if ($tmp64 > $tmp66) goto $l69; else goto $l71;
    $l69:;
    {
        org$pandalanguage$pandac$parser$Token $tmp81 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i63);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp81);
    }
    $l72:;
    if ($tmp75) goto $l83; else goto $l84;
    $l83:;
    int64_t $tmp85 = $tmp66 - i63.value;
    if ($tmp68) goto $l86; else goto $l87;
    $l86:;
    if ((uint64_t) $tmp85 >= $tmp67) goto $l82; else goto $l71;
    $l87:;
    if ((uint64_t) $tmp85 > $tmp67) goto $l82; else goto $l71;
    $l84:;
    int64_t $tmp89 = i63.value - $tmp66;
    if ($tmp68) goto $l90; else goto $l91;
    $l90:;
    if ((uint64_t) $tmp89 >= -$tmp67) goto $l82; else goto $l71;
    $l91:;
    if ((uint64_t) $tmp89 > -$tmp67) goto $l82; else goto $l71;
    $l82:;
    i63.value += $tmp67;
    goto $l69;
    $l71:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp93;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp93, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp94 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp93);
    return $tmp94;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children95;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp96 = (panda$collections$Array*) malloc(40);
    $tmp96->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp96->refCount.value = 1;
    panda$collections$Array$init($tmp96);
    children95 = $tmp96;
    panda$collections$Array$add$panda$collections$Array$T(children95, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children95, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp98 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp98->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp98->refCount.value = 1;
    panda$core$Int64$wrapper* $tmp100;
    $tmp100 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp100->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp100->refCount = 1;
    $tmp100->value = ((panda$core$Int64) { 51 });
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp98, ((panda$core$Int64) { 103 }), p_string->position, ((panda$core$Object*) $tmp100), ((panda$collections$ListView*) children95));
    return $tmp98;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result101;
    org$pandalanguage$pandac$parser$Token token106;
    panda$core$String* str108;
    panda$core$Char8 $tmp110;
    org$pandalanguage$pandac$parser$Token escape114;
    panda$core$String* escapeText118;
    panda$core$Char8 c120;
    panda$core$Char8 $match$176_21126;
    panda$core$Char8 $tmp127;
    panda$core$Char8 $tmp129;
    panda$core$Char8 $tmp130;
    panda$core$Char8 $tmp132;
    panda$core$Char8 $tmp133;
    panda$core$Char8 $tmp135;
    panda$core$Char8 $tmp136;
    panda$core$Char8 $tmp138;
    panda$core$Char8 $tmp139;
    panda$core$Char8 $tmp141;
    panda$core$Char8 $tmp142;
    panda$core$Char8 $tmp144;
    panda$core$Char8 $tmp145;
    panda$core$Char8 $tmp147;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp149;
    panda$core$MutableString* $tmp102 = (panda$core$MutableString*) malloc(48);
    $tmp102->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp102->refCount.value = 1;
    panda$core$MutableString$init($tmp102);
    result101 = $tmp102;
    $l104:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp107 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token106 = $tmp107;
        switch (token106.kind.value) {
            case 12:
            {
                panda$core$String* $tmp109 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token106);
                str108 = $tmp109;
                panda$core$Char8$init$panda$core$UInt8(&$tmp110, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp111 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str108, $tmp110);
                if ($tmp111.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token106, &$s112);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result101, str108);
            }
            break;
            case 0:
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token106, &$s113);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp115 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape114 = $tmp115;
                panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape114.kind, ((panda$core$Int64) { 0 }));
                if ($tmp116.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token106, &$s117);
                    return NULL;
                }
                }
                panda$core$String* $tmp119 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape114);
                escapeText118 = $tmp119;
                panda$collections$ListView* $tmp121 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText118);
                ITable* $tmp122 = $tmp121->$class->itable;
                while ($tmp122->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp122 = $tmp122->next;
                }
                $fn124 $tmp123 = $tmp122->methods[0];
                panda$core$Object* $tmp125 = $tmp123($tmp121, ((panda$core$Int64) { 0 }));
                c120 = ((panda$core$Char8$wrapper*) $tmp125)->value;
                {
                    $match$176_21126 = c120;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp127, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp128 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21126, $tmp127);
                    if ($tmp128.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp129, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result101, $tmp129);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp130, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp131 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21126, $tmp130);
                    if ($tmp131.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp132, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result101, $tmp132);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp133, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp134 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21126, $tmp133);
                    if ($tmp134.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp135, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result101, $tmp135);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp136, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp137 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21126, $tmp136);
                    if ($tmp137.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp138, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result101, $tmp138);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp139, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp140 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21126, $tmp139);
                    if ($tmp140.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp141, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result101, $tmp141);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp143 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21126, $tmp142);
                    if ($tmp143.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp144, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result101, $tmp144);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp145, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp146 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21126, $tmp145);
                    if ($tmp146.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result101, $tmp147);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token106, &$s148);
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
                panda$core$String$Index $tmp150 = panda$core$String$start$R$panda$core$String$Index(escapeText118);
                panda$core$String$Index $tmp151 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText118, $tmp150);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp149, ((panda$core$String$Index$nullable) { $tmp151, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp152 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText118, $tmp149);
                panda$core$MutableString$append$panda$core$String(result101, $tmp152);
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token106);
                panda$core$String* $tmp153 = panda$core$MutableString$finish$R$panda$core$String(result101);
                return $tmp153;
            }
            break;
            default:
            {
                panda$core$String* $tmp154 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token106);
                panda$core$MutableString$append$panda$core$String(result101, $tmp154);
            }
        }
    }
    }
    $l105:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result155;
    org$pandalanguage$pandac$parser$Token token160;
    panda$core$String* str162;
    panda$core$Char8 $tmp164;
    org$pandalanguage$pandac$parser$Token escape168;
    panda$core$String* escapeText172;
    panda$core$Char8 c174;
    panda$core$Char8 $match$221_21180;
    panda$core$Char8 $tmp181;
    panda$core$Char8 $tmp183;
    panda$core$Char8 $tmp184;
    panda$core$Char8 $tmp186;
    panda$core$Char8 $tmp187;
    panda$core$Char8 $tmp189;
    panda$core$Char8 $tmp190;
    panda$core$Char8 $tmp192;
    panda$core$Char8 $tmp193;
    panda$core$Char8 $tmp195;
    panda$core$Char8 $tmp196;
    panda$core$Char8 $tmp198;
    panda$core$Char8 $tmp199;
    panda$core$Char8 $tmp201;
    panda$core$Char8 $tmp202;
    panda$core$Char8 $tmp204;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp206;
    panda$core$MutableString* $tmp156 = (panda$core$MutableString*) malloc(48);
    $tmp156->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp156->refCount.value = 1;
    panda$core$MutableString$init($tmp156);
    result155 = $tmp156;
    $l158:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp161 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token160 = $tmp161;
        switch (token160.kind.value) {
            case 12:
            {
                panda$core$String* $tmp163 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token160);
                str162 = $tmp163;
                panda$core$Char8$init$panda$core$UInt8(&$tmp164, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp165 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str162, $tmp164);
                if ($tmp165.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s166);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result155, str162);
            }
            break;
            case 0:
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s167);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp169 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape168 = $tmp169;
                panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape168.kind, ((panda$core$Int64) { 0 }));
                if ($tmp170.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s171);
                    return NULL;
                }
                }
                panda$core$String* $tmp173 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape168);
                escapeText172 = $tmp173;
                panda$collections$ListView* $tmp175 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText172);
                ITable* $tmp176 = $tmp175->$class->itable;
                while ($tmp176->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp176 = $tmp176->next;
                }
                $fn178 $tmp177 = $tmp176->methods[0];
                panda$core$Object* $tmp179 = $tmp177($tmp175, ((panda$core$Int64) { 0 }));
                c174 = ((panda$core$Char8$wrapper*) $tmp179)->value;
                {
                    $match$221_21180 = c174;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp181, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp182 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp181);
                    if ($tmp182.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp183, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp183);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp184, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp185 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp184);
                    if ($tmp185.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp186, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp186);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp187, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp188 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp187);
                    if ($tmp188.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp189, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp189);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp190, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp191 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp190);
                    if ($tmp191.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp192, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp192);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp193, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp194 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp193);
                    if ($tmp194.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp195, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp195);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp196, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp197 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp196);
                    if ($tmp197.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp198, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp198);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp199, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp200 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp199);
                    if ($tmp200.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp201, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp201);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp202, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp203 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21180, $tmp202);
                    if ($tmp203.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp204, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result155, $tmp204);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s205);
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
                panda$core$String$Index $tmp207 = panda$core$String$start$R$panda$core$String$Index(escapeText172);
                panda$core$String$Index $tmp208 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText172, $tmp207);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp206, ((panda$core$String$Index$nullable) { $tmp208, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp209 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText172, $tmp206);
                panda$core$MutableString$append$panda$core$String(result155, $tmp209);
            }
            break;
            case 95:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token160);
                panda$core$String* $tmp210 = panda$core$MutableString$finish$R$panda$core$String(result155);
                return $tmp210;
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token160);
                panda$core$String* $tmp211 = panda$core$MutableString$finish$R$panda$core$String(result155);
                return $tmp211;
            }
            break;
            default:
            {
                panda$core$String* $tmp212 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token160);
                panda$core$MutableString$append$panda$core$String(result155, $tmp212);
            }
        }
    }
    }
    $l159:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$collections$Array* dotChildren213;
    org$pandalanguage$pandac$ASTNode* dot216;
    panda$collections$Array* callChildren220;
    org$pandalanguage$pandac$ASTNode* call223;
    panda$collections$Array* castChildren226;
    panda$collections$Array* $tmp214 = (panda$collections$Array*) malloc(40);
    $tmp214->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp214->refCount.value = 1;
    panda$collections$Array$init($tmp214);
    dotChildren213 = $tmp214;
    panda$collections$Array$add$panda$collections$Array$T(dotChildren213, ((panda$core$Object*) p_expr));
    org$pandalanguage$pandac$ASTNode* $tmp217 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp217->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp217->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp217, ((panda$core$Int64) { 108 }), p_expr->position, ((panda$core$Object*) &$s219), ((panda$collections$ListView*) dotChildren213));
    dot216 = $tmp217;
    panda$collections$Array* $tmp221 = (panda$collections$Array*) malloc(40);
    $tmp221->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp221->refCount.value = 1;
    panda$collections$Array$init($tmp221);
    callChildren220 = $tmp221;
    panda$collections$Array$add$panda$collections$Array$T(callChildren220, ((panda$core$Object*) dot216));
    org$pandalanguage$pandac$ASTNode* $tmp224 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp224->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp224->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp224, ((panda$core$Int64) { 107 }), p_expr->position, ((panda$collections$ListView*) callChildren220));
    call223 = $tmp224;
    panda$collections$Array* $tmp227 = (panda$collections$Array*) malloc(40);
    $tmp227->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp227->refCount.value = 1;
    panda$collections$Array$init($tmp227);
    castChildren226 = $tmp227;
    panda$collections$Array$add$panda$collections$Array$T(castChildren226, ((panda$core$Object*) call223));
    org$pandalanguage$pandac$ASTNode* $tmp229 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp229->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp229->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp229, ((panda$core$Int64) { 109 }), p_expr->position, &$s231);
    panda$collections$Array$add$panda$collections$Array$T(castChildren226, ((panda$core$Object*) $tmp229));
    org$pandalanguage$pandac$ASTNode* $tmp232 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp232->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp232->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp232, ((panda$core$Int64) { 111 }), p_expr->position, ((panda$collections$ListView*) castChildren226));
    return $tmp232;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start234;
    org$pandalanguage$pandac$ASTNode* result246;
    panda$core$MutableString* chunk247;
    org$pandalanguage$pandac$parser$Token token252;
    panda$core$String* str255;
    panda$core$Char8 $tmp257;
    org$pandalanguage$pandac$parser$Token escape261;
    panda$core$String* escapeText265;
    panda$core$Char8 c267;
    panda$core$Char8 $match$295_21273;
    panda$core$Char8 $tmp274;
    panda$core$Char8 $tmp276;
    panda$core$Char8 $tmp277;
    panda$core$Char8 $tmp279;
    panda$core$Char8 $tmp280;
    panda$core$Char8 $tmp282;
    panda$core$Char8 $tmp283;
    panda$core$Char8 $tmp285;
    panda$core$Char8 $tmp286;
    panda$core$Char8 $tmp288;
    panda$core$Char8 $tmp289;
    panda$core$Char8 $tmp291;
    panda$core$Char8 $tmp292;
    org$pandalanguage$pandac$ASTNode* expr294;
    panda$core$String* align296;
    panda$core$String* format297;
    panda$collections$Array* castChildren302;
    org$pandalanguage$pandac$ASTNode* cast308;
    panda$collections$Array* dotChildren311;
    org$pandalanguage$pandac$ASTNode* dot314;
    panda$collections$Array* callChildren318;
    panda$collections$Array* callTargetChildren328;
    org$pandalanguage$pandac$ASTNode* callTarget334;
    panda$collections$Array* callChildren338;
    panda$core$String* text345;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp360;
    org$pandalanguage$pandac$parser$Token $tmp235 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start234 = $tmp235;
    panda$core$Bit $tmp237 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start234.kind, ((panda$core$Int64) { 7 }));
    bool $tmp236 = $tmp237.value;
    if (!$tmp236) goto $l238;
    panda$core$Bit $tmp239 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start234.kind, ((panda$core$Int64) { 6 }));
    $tmp236 = $tmp239.value;
    $l238:;
    panda$core$Bit $tmp240 = { $tmp236 };
    if ($tmp240.value) {
    {
        panda$core$String* $tmp242 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start234);
        panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s241, $tmp242);
        panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s244);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start234, $tmp245);
        return NULL;
    }
    }
    result246 = NULL;
    panda$core$MutableString* $tmp248 = (panda$core$MutableString*) malloc(48);
    $tmp248->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp248->refCount.value = 1;
    panda$core$MutableString$init($tmp248);
    chunk247 = $tmp248;
    $l250:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp253 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token252 = $tmp253;
        panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token252.kind, start234.kind);
        if ($tmp254.value) {
        {
            goto $l251;
        }
        }
        switch (token252.kind.value) {
            case 12:
            {
                panda$core$String* $tmp256 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token252);
                str255 = $tmp256;
                panda$core$Char8$init$panda$core$UInt8(&$tmp257, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp258 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str255, $tmp257);
                if ($tmp258.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start234, &$s259);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk247, str255);
            }
            break;
            case 0:
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start234, &$s260);
                return NULL;
            }
            break;
            case 106:
            {
                org$pandalanguage$pandac$parser$Token $tmp262 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape261 = $tmp262;
                panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape261.kind, ((panda$core$Int64) { 0 }));
                if ($tmp263.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start234, &$s264);
                    return NULL;
                }
                }
                panda$core$String* $tmp266 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape261);
                escapeText265 = $tmp266;
                panda$collections$ListView* $tmp268 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText265);
                ITable* $tmp269 = $tmp268->$class->itable;
                while ($tmp269->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp269 = $tmp269->next;
                }
                $fn271 $tmp270 = $tmp269->methods[0];
                panda$core$Object* $tmp272 = $tmp270($tmp268, ((panda$core$Int64) { 0 }));
                c267 = ((panda$core$Char8$wrapper*) $tmp272)->value;
                {
                    $match$295_21273 = c267;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp274, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp275 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21273, $tmp274);
                    if ($tmp275.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp276, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk247, $tmp276);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp277, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp278 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21273, $tmp277);
                    if ($tmp278.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp279, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk247, $tmp279);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp280, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp281 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21273, $tmp280);
                    if ($tmp281.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp282, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk247, $tmp282);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp283, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp284 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21273, $tmp283);
                    if ($tmp284.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp285, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk247, $tmp285);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp286, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp287 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21273, $tmp286);
                    if ($tmp287.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp288, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk247, $tmp288);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp289, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp290 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21273, $tmp289);
                    if ($tmp290.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp291, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk247, $tmp291);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp292, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp293 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21273, $tmp292);
                    if ($tmp293.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp295 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr294 = $tmp295;
                            if (((panda$core$Bit) { expr294 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            align296 = NULL;
                            format297 = NULL;
                            org$pandalanguage$pandac$parser$Token$nullable $tmp298 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                            if (((panda$core$Bit) { $tmp298.nonnull }).value) {
                            {
                                panda$core$String* $tmp299 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start234);
                                align296 = $tmp299;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp300 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
                            if (((panda$core$Bit) { $tmp300.nonnull }).value) {
                            {
                                panda$core$String* $tmp301 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start234);
                                format297 = $tmp301;
                                if (((panda$core$Bit) { format297 == NULL }).value) {
                                {
                                    return NULL;
                                }
                                }
                                panda$collections$Array* $tmp303 = (panda$collections$Array*) malloc(40);
                                $tmp303->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp303->refCount.value = 1;
                                panda$collections$Array$init($tmp303);
                                castChildren302 = $tmp303;
                                panda$collections$Array$add$panda$collections$Array$T(castChildren302, ((panda$core$Object*) expr294));
                                org$pandalanguage$pandac$ASTNode* $tmp305 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp305->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp305->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp305, ((panda$core$Int64) { 109 }), expr294->position, &$s307);
                                panda$collections$Array$add$panda$collections$Array$T(castChildren302, ((panda$core$Object*) $tmp305));
                                org$pandalanguage$pandac$ASTNode* $tmp309 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp309->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp309->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp309, ((panda$core$Int64) { 111 }), expr294->position, ((panda$collections$ListView*) castChildren302));
                                cast308 = $tmp309;
                                panda$collections$Array* $tmp312 = (panda$collections$Array*) malloc(40);
                                $tmp312->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp312->refCount.value = 1;
                                panda$collections$Array$init($tmp312);
                                dotChildren311 = $tmp312;
                                panda$collections$Array$add$panda$collections$Array$T(dotChildren311, ((panda$core$Object*) cast308));
                                org$pandalanguage$pandac$ASTNode* $tmp315 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp315->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp315->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp315, ((panda$core$Int64) { 108 }), expr294->position, ((panda$core$Object*) &$s317), ((panda$collections$ListView*) dotChildren311));
                                dot314 = $tmp315;
                                panda$collections$Array* $tmp319 = (panda$collections$Array*) malloc(40);
                                $tmp319->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp319->refCount.value = 1;
                                panda$collections$Array$init($tmp319);
                                callChildren318 = $tmp319;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren318, ((panda$core$Object*) dot314));
                                org$pandalanguage$pandac$ASTNode* $tmp321 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp321->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp321->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp321, ((panda$core$Int64) { 113 }), start234.position, format297);
                                panda$collections$Array$add$panda$collections$Array$T(callChildren318, ((panda$core$Object*) $tmp321));
                                org$pandalanguage$pandac$ASTNode* $tmp323 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp323->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp323->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp323, ((panda$core$Int64) { 107 }), expr294->position, ((panda$collections$ListView*) callChildren318));
                                expr294 = $tmp323;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$nullable $tmp326 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s325);
                            if (((panda$core$Bit) { !$tmp326.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            if (((panda$core$Bit) { align296 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format297 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp327 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr294);
                                    expr294 = $tmp327;
                                }
                                }
                                panda$collections$Array* $tmp329 = (panda$collections$Array*) malloc(40);
                                $tmp329->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp329->refCount.value = 1;
                                panda$collections$Array$init($tmp329);
                                callTargetChildren328 = $tmp329;
                                org$pandalanguage$pandac$ASTNode* $tmp331 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp331->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp331->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp331, ((panda$core$Int64) { 109 }), expr294->position, &$s333);
                                panda$collections$Array$add$panda$collections$Array$T(callTargetChildren328, ((panda$core$Object*) $tmp331));
                                org$pandalanguage$pandac$ASTNode* $tmp335 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp335->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp335->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp335, ((panda$core$Int64) { 108 }), expr294->position, ((panda$core$Object*) &$s337), ((panda$collections$ListView*) callTargetChildren328));
                                callTarget334 = $tmp335;
                                panda$collections$Array* $tmp339 = (panda$collections$Array*) malloc(40);
                                $tmp339->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp339->refCount.value = 1;
                                panda$collections$Array$init($tmp339);
                                callChildren338 = $tmp339;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren338, ((panda$core$Object*) callTarget334));
                                panda$collections$Array$add$panda$collections$Array$T(callChildren338, ((panda$core$Object*) expr294));
                                org$pandalanguage$pandac$ASTNode* $tmp341 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp341->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp341->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp341, ((panda$core$Int64) { 113 }), start234.position, align296);
                                panda$collections$Array$add$panda$collections$Array$T(callChildren338, ((panda$core$Object*) $tmp341));
                                org$pandalanguage$pandac$ASTNode* $tmp343 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp343->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp343->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp343, ((panda$core$Int64) { 107 }), expr294->position, ((panda$collections$ListView*) callChildren338));
                                expr294 = $tmp343;
                            }
                            }
                            panda$core$String* $tmp346 = panda$core$MutableString$finish$R$panda$core$String(chunk247);
                            text345 = $tmp346;
                            panda$core$MutableString* $tmp347 = (panda$core$MutableString*) malloc(48);
                            $tmp347->$class = (panda$core$Class*) &panda$core$MutableString$class;
                            $tmp347->refCount.value = 1;
                            panda$core$MutableString$init($tmp347);
                            chunk247 = $tmp347;
                            panda$core$Bit $tmp351 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text345, &$s350);
                            bool $tmp349 = $tmp351.value;
                            if ($tmp349) goto $l352;
                            $tmp349 = ((panda$core$Bit) { result246 != NULL }).value;
                            $l352:;
                            panda$core$Bit $tmp353 = { $tmp349 };
                            if ($tmp353.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp354 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp354->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp354->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp354, ((panda$core$Int64) { 113 }), start234.position, text345);
                                org$pandalanguage$pandac$ASTNode* $tmp356 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result246, $tmp354);
                                result246 = $tmp356;
                                org$pandalanguage$pandac$ASTNode* $tmp357 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result246, expr294);
                                result246 = $tmp357;
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp358 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr294);
                                result246 = $tmp358;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token252, &$s359);
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
                panda$core$String$Index $tmp361 = panda$core$String$start$R$panda$core$String$Index(escapeText265);
                panda$core$String$Index $tmp362 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText265, $tmp361);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp360, ((panda$core$String$Index$nullable) { $tmp362, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp363 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText265, $tmp360);
                panda$core$MutableString$append$panda$core$String(chunk247, $tmp363);
            }
            break;
            default:
            {
                panda$core$String* $tmp364 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token252);
                panda$core$MutableString$append$panda$core$String(chunk247, $tmp364);
            }
        }
    }
    }
    $l251:;
    org$pandalanguage$pandac$ASTNode* $tmp365 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp365->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp365->refCount.value = 1;
    panda$core$String* $tmp367 = panda$core$MutableString$finish$R$panda$core$String(chunk247);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp365, ((panda$core$Int64) { 113 }), start234.position, $tmp367);
    org$pandalanguage$pandac$ASTNode* $tmp368 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result246, $tmp365);
    return $tmp368;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t369;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp381;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp387;
    org$pandalanguage$pandac$ASTNode* result405;
    org$pandalanguage$pandac$parser$Token $tmp370 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t369 = $tmp370;
    switch (t369.kind.value) {
        case 48:
        {
            org$pandalanguage$pandac$ASTNode* $tmp371 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp371->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp371->refCount.value = 1;
            panda$core$String* $tmp373 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t369);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp371, ((panda$core$Int64) { 106 }), t369.position, $tmp373);
            return $tmp371;
        }
        break;
        case 2:
        {
            org$pandalanguage$pandac$ASTNode* $tmp374 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp374->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp374->refCount.value = 1;
            panda$core$String* $tmp376 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t369);
            panda$core$UInt64$nullable $tmp377 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp376);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp374, ((panda$core$Int64) { 102 }), t369.position, ((panda$core$UInt64) $tmp377.value));
            return $tmp374;
        }
        break;
        case 3:
        {
            org$pandalanguage$pandac$ASTNode* $tmp378 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp378->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp378->refCount.value = 1;
            panda$core$String* $tmp380 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t369);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp381, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp382 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp380, $tmp381);
            panda$core$UInt64$nullable $tmp383 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp382, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp378, ((panda$core$Int64) { 102 }), t369.position, ((panda$core$UInt64) $tmp383.value));
            return $tmp378;
        }
        break;
        case 4:
        {
            org$pandalanguage$pandac$ASTNode* $tmp384 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp384->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp384->refCount.value = 1;
            panda$core$String* $tmp386 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t369);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp387, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp388 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp386, $tmp387);
            panda$core$UInt64$nullable $tmp389 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp388, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp384, ((panda$core$Int64) { 102 }), t369.position, ((panda$core$UInt64) $tmp389.value));
            return $tmp384;
        }
        break;
        case 5:
        {
            org$pandalanguage$pandac$ASTNode* $tmp390 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp390->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp390->refCount.value = 1;
            panda$core$String* $tmp392 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t369);
            panda$core$Real64$nullable $tmp393 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp392);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp390, ((panda$core$Int64) { 157 }), t369.position, ((panda$core$Real64) $tmp393.value));
            return $tmp390;
        }
        break;
        case 46:
        {
            org$pandalanguage$pandac$ASTNode* $tmp394 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp394->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp394->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp394, ((panda$core$Int64) { 114 }), t369.position);
            return $tmp394;
        }
        break;
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp396 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp396->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp396->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp396, ((panda$core$Int64) { 115 }), t369.position);
            return $tmp396;
        }
        break;
        case 43:
        {
            org$pandalanguage$pandac$ASTNode* $tmp398 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp398->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp398->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp398, ((panda$core$Int64) { 117 }), t369.position);
            return $tmp398;
        }
        break;
        case 41:
        {
            org$pandalanguage$pandac$ASTNode* $tmp400 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp400->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp400, ((panda$core$Int64) { 116 }), t369.position, ((panda$core$Bit) { true }));
            return $tmp400;
        }
        break;
        case 42:
        {
            org$pandalanguage$pandac$ASTNode* $tmp402 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp402->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp402->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp402, ((panda$core$Int64) { 116 }), t369.position, ((panda$core$Bit) { false }));
            return $tmp402;
        }
        break;
        case 7:
        case 6:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t369);
            org$pandalanguage$pandac$ASTNode* $tmp404 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp404;
        }
        break;
        case 103:
        {
            org$pandalanguage$pandac$ASTNode* $tmp406 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result405 = $tmp406;
            if (((panda$core$Bit) { result405 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp408 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s407);
            if (((panda$core$Bit) { !$tmp408.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result405;
        }
        break;
        default:
        {
            panda$core$String* $tmp410 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t369);
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s409, $tmp410);
            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s412);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t369, $tmp413);
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result414;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp415 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp416 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp415));
            result414 = $tmp416;
            if (((panda$core$Bit) { result414 != NULL }).value) {
            {
                panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s417, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result414, $tmp418);
                result414 = $tmp419;
            }
            }
            return result414;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name420;
    org$pandalanguage$pandac$parser$Token token423;
    org$pandalanguage$pandac$parser$Token $tmp421 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name420 = $tmp421;
    switch (name420.kind.value) {
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
            panda$core$String* $tmp422 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name420);
            return $tmp422;
        }
        break;
        case 63:
        {
            org$pandalanguage$pandac$parser$Token $tmp424 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token423 = $tmp424;
            panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token423.kind, ((panda$core$Int64) { 63 }));
            if ($tmp425.value) {
            {
                return &$s426;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token423);
                return &$s427;
            }
            }
        }
        break;
        case 101:
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp429 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s428);
            if (((panda$core$Bit) { !$tmp429.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp430 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
            if (((panda$core$Bit) { $tmp430.nonnull }).value) {
            {
                return &$s431;
            }
            }
            return &$s432;
        }
        break;
        default:
        {
            panda$core$String* $tmp434 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name420);
            panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s433, $tmp434);
            panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s436);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name420, $tmp437);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp438 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp438;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start439;
    panda$core$MutableString* name442;
    org$pandalanguage$pandac$parser$Token$nullable id449;
    panda$core$Char8 $tmp452;
    org$pandalanguage$pandac$ASTNode* result454;
    panda$core$Char8 $tmp460;
    panda$collections$Array* children461;
    org$pandalanguage$pandac$ASTNode* t464;
    panda$core$Char8 $tmp473;
    panda$collections$Array* children478;
    org$pandalanguage$pandac$parser$Token$nullable $tmp441 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s440);
    start439 = $tmp441;
    if (((panda$core$Bit) { !start439.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp443 = (panda$core$MutableString*) malloc(48);
    $tmp443->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp443->refCount.value = 1;
    panda$core$String* $tmp445 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start439.value));
    panda$core$MutableString$init$panda$core$String($tmp443, $tmp445);
    name442 = $tmp443;
    $l446:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp448 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
    if (!((panda$core$Bit) { $tmp448.nonnull }).value) goto $l447;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp451 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s450);
        id449 = $tmp451;
        if (((panda$core$Bit) { !id449.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp452, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name442, $tmp452);
        panda$core$String* $tmp453 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id449.value));
        panda$core$MutableString$append$panda$core$String(name442, $tmp453);
    }
    goto $l446;
    $l447:;
    org$pandalanguage$pandac$ASTNode* $tmp455 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp455->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp455->refCount.value = 1;
    panda$core$String* $tmp457 = panda$core$MutableString$convert$R$panda$core$String(name442);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp455, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start439.value).position, $tmp457);
    result454 = $tmp455;
    org$pandalanguage$pandac$parser$Token $tmp458 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp458.kind, ((panda$core$Int64) { 62 }));
    if ($tmp459.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp460, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name442, $tmp460);
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp462 = (panda$collections$Array*) malloc(40);
        $tmp462->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp462->refCount.value = 1;
        panda$collections$Array$init($tmp462);
        children461 = $tmp462;
        panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) result454));
        org$pandalanguage$pandac$ASTNode* $tmp465 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t464 = $tmp465;
        if (((panda$core$Bit) { t464 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result454;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) t464));
        panda$core$MutableString$append$panda$core$Object(name442, ((panda$core$Object*) t464));
        $l466:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp468 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp468.nonnull }).value) goto $l467;
        {
            org$pandalanguage$pandac$ASTNode* $tmp469 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
            t464 = $tmp469;
            if (((panda$core$Bit) { t464 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result454;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children461, ((panda$core$Object*) t464));
            panda$core$MutableString$append$panda$core$String(name442, &$s470);
            panda$core$MutableString$append$panda$core$Object(name442, ((panda$core$Object*) t464));
        }
        goto $l466;
        $l467:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp472 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s471);
        if (((panda$core$Bit) { !$tmp472.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result454;
            }
            }
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp473, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name442, $tmp473);
        org$pandalanguage$pandac$ASTNode* $tmp474 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp474->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp474->refCount.value = 1;
        panda$core$String* $tmp476 = panda$core$MutableString$finish$R$panda$core$String(name442);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp474, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start439.value).position, ((panda$core$Object*) $tmp476), ((panda$collections$ListView*) children461));
        result454 = $tmp474;
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp477 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 94 }));
    if (((panda$core$Bit) { $tmp477.nonnull }).value) {
    {
        panda$collections$Array* $tmp479 = (panda$collections$Array*) malloc(40);
        $tmp479->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp479->refCount.value = 1;
        panda$collections$Array$init($tmp479);
        children478 = $tmp479;
        panda$collections$Array$add$panda$collections$Array$T(children478, ((panda$core$Object*) result454));
        org$pandalanguage$pandac$ASTNode* $tmp481 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp481->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp481->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp481, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start439.value).position, ((panda$collections$ListView*) children478));
        result454 = $tmp481;
    }
    }
    return result454;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result483;
    org$pandalanguage$pandac$parser$Token token487;
    panda$collections$Array* children490;
    org$pandalanguage$pandac$ASTNode* expr494;
    panda$collections$Array* children504;
    org$pandalanguage$pandac$ASTNode* expr507;
    panda$core$String* name514;
    panda$collections$Array* children518;
    org$pandalanguage$pandac$ASTNode* target523;
    panda$collections$Array* children525;
    panda$core$String* name530;
    panda$core$MutableString* finalName532;
    panda$core$Char8 $tmp535;
    panda$collections$Array* types536;
    org$pandalanguage$pandac$ASTNode* t541;
    panda$core$Char8 $tmp550;
    panda$core$Bit shouldAccept551;
    org$pandalanguage$pandac$ASTNode* $tmp484 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result483 = $tmp484;
    if (((panda$core$Bit) { result483 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l485:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp488 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token487 = $tmp488;
        switch (token487.kind.value) {
            case 103:
            {
                panda$core$Bit$wrapper* $tmp489;
                $tmp489 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp489->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp489->refCount = 1;
                $tmp489->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp489));
                panda$collections$Array* $tmp491 = (panda$collections$Array*) malloc(40);
                $tmp491->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp491->refCount.value = 1;
                panda$collections$Array$init($tmp491);
                children490 = $tmp491;
                panda$collections$Array$add$panda$collections$Array$T(children490, ((panda$core$Object*) result483));
                org$pandalanguage$pandac$parser$Token$nullable $tmp493 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
                if (((panda$core$Bit) { !$tmp493.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp495 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr494 = $tmp495;
                    if (((panda$core$Bit) { expr494 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children490, ((panda$core$Object*) expr494));
                    $l496:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp498 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp498.nonnull }).value) goto $l497;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp499 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        expr494 = $tmp499;
                        if (((panda$core$Bit) { expr494 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children490, ((panda$core$Object*) expr494));
                    }
                    goto $l496;
                    $l497:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp501 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s500);
                    if (((panda$core$Bit) { !$tmp501.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp502 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp502->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp502->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp502, ((panda$core$Int64) { 107 }), token487.position, ((panda$collections$ListView*) children490));
                result483 = $tmp502;
            }
            break;
            case 101:
            {
                panda$collections$Array* $tmp505 = (panda$collections$Array*) malloc(40);
                $tmp505->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp505->refCount.value = 1;
                panda$collections$Array$init($tmp505);
                children504 = $tmp505;
                panda$collections$Array$add$panda$collections$Array$T(children504, ((panda$core$Object*) result483));
                org$pandalanguage$pandac$ASTNode* $tmp508 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr507 = $tmp508;
                if (((panda$core$Bit) { expr507 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children504, ((panda$core$Object*) expr507));
                org$pandalanguage$pandac$parser$Token$nullable $tmp510 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 102 }), &$s509);
                if (((panda$core$Bit) { !$tmp510.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp511 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp511->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp511->refCount.value = 1;
                panda$core$Int64$wrapper* $tmp513;
                $tmp513 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp513->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp513->refCount = 1;
                $tmp513->value = ((panda$core$Int64) { 101 });
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp511, ((panda$core$Int64) { 103 }), token487.position, ((panda$core$Object*) $tmp513), ((panda$collections$ListView*) children504));
                result483 = $tmp511;
            }
            break;
            case 98:
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp515 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }));
                if (((panda$core$Bit) { $tmp515.nonnull }).value) {
                {
                    name514 = &$s516;
                }
                }
                else {
                {
                    panda$core$String* $tmp517 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                    name514 = $tmp517;
                    if (((panda$core$Bit) { name514 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp519 = (panda$collections$Array*) malloc(40);
                $tmp519->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp519->refCount.value = 1;
                panda$collections$Array$init($tmp519);
                children518 = $tmp519;
                panda$collections$Array$add$panda$collections$Array$T(children518, ((panda$core$Object*) result483));
                org$pandalanguage$pandac$ASTNode* $tmp521 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp521->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp521->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp521, ((panda$core$Int64) { 108 }), token487.position, ((panda$core$Object*) name514), ((panda$collections$ListView*) children518));
                result483 = $tmp521;
            }
            break;
            case 89:
            {
                org$pandalanguage$pandac$ASTNode* $tmp524 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target523 = $tmp524;
                if (((panda$core$Bit) { target523 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp526 = (panda$collections$Array*) malloc(40);
                $tmp526->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp526->refCount.value = 1;
                panda$collections$Array$init($tmp526);
                children525 = $tmp526;
                panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) result483));
                panda$collections$Array$add$panda$collections$Array$T(children525, ((panda$core$Object*) target523));
                org$pandalanguage$pandac$ASTNode* $tmp528 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp528->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp528->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp528, ((panda$core$Int64) { 111 }), token487.position, ((panda$collections$ListView*) children525));
                result483 = $tmp528;
            }
            break;
            case 62:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token487);
                panda$core$String* $tmp531 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result483);
                name530 = $tmp531;
                if (((panda$core$Bit) { name530 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp533 = (panda$core$MutableString*) malloc(48);
                    $tmp533->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp533->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp533, name530);
                    finalName532 = $tmp533;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp535, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName532, $tmp535);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp537 = (panda$collections$Array*) malloc(40);
                    $tmp537->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp537->refCount.value = 1;
                    panda$collections$Array$init($tmp537);
                    types536 = $tmp537;
                    org$pandalanguage$pandac$ASTNode* $tmp539 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp539->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp539->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp539, ((panda$core$Int64) { 109 }), result483->position, name530);
                    panda$collections$Array$add$panda$collections$Array$T(types536, ((panda$core$Object*) $tmp539));
                    org$pandalanguage$pandac$ASTNode* $tmp542 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t541 = $tmp542;
                    if (((panda$core$Bit) { t541 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result483;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types536, ((panda$core$Object*) t541));
                    panda$core$MutableString$append$panda$core$Object(finalName532, ((panda$core$Object*) t541));
                    $l543:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp545 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
                    if (!((panda$core$Bit) { $tmp545.nonnull }).value) goto $l544;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp546 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        t541 = $tmp546;
                        if (((panda$core$Bit) { t541 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result483;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types536, ((panda$core$Object*) t541));
                        panda$core$MutableString$append$panda$core$String(finalName532, &$s547);
                        panda$core$MutableString$append$panda$core$Object(finalName532, ((panda$core$Object*) t541));
                    }
                    goto $l543;
                    $l544:;
                    org$pandalanguage$pandac$parser$Token$nullable $tmp549 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s548);
                    if (((panda$core$Bit) { !$tmp549.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result483;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp550, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName532, $tmp550);
                    panda$core$Object* $tmp552 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp552)->value.value) {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp553 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        switch ($tmp553.kind.value) {
                            case 98:
                            case 103:
                            case 105:
                            case 89:
                            {
                                shouldAccept551 = ((panda$core$Bit) { true });
                            }
                            break;
                            default:
                            {
                                shouldAccept551 = ((panda$core$Bit) { false });
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept551 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept551.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        org$pandalanguage$pandac$ASTNode* $tmp554 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp554->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp554->refCount.value = 1;
                        panda$core$String* $tmp556 = panda$core$MutableString$convert$R$panda$core$String(finalName532);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp554, ((panda$core$Int64) { 154 }), result483->position, ((panda$core$Object*) $tmp556), ((panda$collections$ListView*) types536));
                        result483 = $tmp554;
                        goto $l485;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result483;
                    }
                    }
                }
                }
                return result483;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token487);
                return result483;
            }
        }
    }
    }
    $l486:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result557;
    org$pandalanguage$pandac$parser$Token$nullable op561;
    org$pandalanguage$pandac$ASTNode* next563;
    panda$collections$Array* children565;
    org$pandalanguage$pandac$ASTNode* $tmp558 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result557 = $tmp558;
    if (((panda$core$Bit) { result557 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l559:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp562 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 57 }));
        op561 = $tmp562;
        if (((panda$core$Bit) { !op561.nonnull }).value) {
        {
            goto $l560;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp564 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next563 = $tmp564;
        if (((panda$core$Bit) { next563 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp566 = (panda$collections$Array*) malloc(40);
        $tmp566->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp566->refCount.value = 1;
        panda$collections$Array$init($tmp566);
        children565 = $tmp566;
        panda$collections$Array$add$panda$collections$Array$T(children565, ((panda$core$Object*) result557));
        panda$collections$Array$add$panda$collections$Array$T(children565, ((panda$core$Object*) next563));
        org$pandalanguage$pandac$ASTNode* $tmp568 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp568->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp568->refCount.value = 1;
        panda$core$Int64$wrapper* $tmp570;
        $tmp570 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp570->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp570->refCount = 1;
        $tmp570->value = ((org$pandalanguage$pandac$parser$Token) op561.value).kind;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp568, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op561.value).position, ((panda$core$Object*) $tmp570), ((panda$collections$ListView*) children565));
        result557 = $tmp568;
    }
    }
    $l560:;
    return result557;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op571;
    org$pandalanguage$pandac$ASTNode* base573;
    panda$collections$Array* children575;
    org$pandalanguage$pandac$parser$Token $tmp572 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op571 = $tmp572;
    switch (op571.kind.value) {
        case 52:
        case 49:
        case 50:
        {
            org$pandalanguage$pandac$ASTNode* $tmp574 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base573 = $tmp574;
            if (((panda$core$Bit) { base573 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp576 = (panda$collections$Array*) malloc(40);
            $tmp576->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp576->refCount.value = 1;
            panda$collections$Array$init($tmp576);
            children575 = $tmp576;
            panda$collections$Array$add$panda$collections$Array$T(children575, ((panda$core$Object*) base573));
            org$pandalanguage$pandac$ASTNode* $tmp578 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp578->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp578->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp580;
            $tmp580 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp580->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp580->refCount = 1;
            $tmp580->value = op571.kind;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp578, ((panda$core$Int64) { 112 }), op571.position, ((panda$core$Object*) $tmp580), ((panda$collections$ListView*) children575));
            return $tmp578;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op571);
            org$pandalanguage$pandac$ASTNode* $tmp581 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp581;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result582;
    org$pandalanguage$pandac$parser$Token op586;
    org$pandalanguage$pandac$ASTNode* next588;
    panda$collections$Array* children590;
    org$pandalanguage$pandac$parser$Token nextToken596;
    org$pandalanguage$pandac$ASTNode* next599;
    panda$collections$Array* children601;
    org$pandalanguage$pandac$ASTNode* $tmp583 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result582 = $tmp583;
    if (((panda$core$Bit) { result582 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l584:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp587 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op586 = $tmp587;
        switch (op586.kind.value) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 72:
            case 67:
            case 69:
            {
                org$pandalanguage$pandac$ASTNode* $tmp589 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next588 = $tmp589;
                if (((panda$core$Bit) { next588 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp591 = (panda$collections$Array*) malloc(40);
                $tmp591->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp591->refCount.value = 1;
                panda$collections$Array$init($tmp591);
                children590 = $tmp591;
                panda$collections$Array$add$panda$collections$Array$T(children590, ((panda$core$Object*) result582));
                panda$collections$Array$add$panda$collections$Array$T(children590, ((panda$core$Object*) next588));
                org$pandalanguage$pandac$ASTNode* $tmp593 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp593->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp593->refCount.value = 1;
                panda$core$Int64$wrapper* $tmp595;
                $tmp595 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp595->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp595->refCount = 1;
                $tmp595->value = op586.kind;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp593, ((panda$core$Int64) { 103 }), op586.position, ((panda$core$Object*) $tmp595), ((panda$collections$ListView*) children590));
                result582 = $tmp593;
            }
            break;
            case 63:
            {
                org$pandalanguage$pandac$parser$Token $tmp597 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken596 = $tmp597;
                panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken596.kind, ((panda$core$Int64) { 63 }));
                if ($tmp598.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp600 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next599 = $tmp600;
                    if (((panda$core$Bit) { next599 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp602 = (panda$collections$Array*) malloc(40);
                    $tmp602->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp602->refCount.value = 1;
                    panda$collections$Array$init($tmp602);
                    children601 = $tmp602;
                    panda$collections$Array$add$panda$collections$Array$T(children601, ((panda$core$Object*) result582));
                    panda$collections$Array$add$panda$collections$Array$T(children601, ((panda$core$Object*) next599));
                    org$pandalanguage$pandac$ASTNode* $tmp604 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp604->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp604->refCount.value = 1;
                    panda$core$Int64$wrapper* $tmp606;
                    $tmp606 = (panda$core$Int64$wrapper*) malloc(24);
                    $tmp606->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                    $tmp606->refCount = 1;
                    $tmp606->value = ((panda$core$Int64) { 1 });
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp604, ((panda$core$Int64) { 103 }), op586.position, ((panda$core$Object*) $tmp606), ((panda$collections$ListView*) children601));
                    result582 = $tmp604;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken596);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op586);
                    return result582;
                }
                }
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op586);
                return result582;
            }
        }
    }
    }
    $l585:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result607;
    org$pandalanguage$pandac$parser$Token op611;
    org$pandalanguage$pandac$ASTNode* next613;
    panda$collections$Array* children615;
    org$pandalanguage$pandac$ASTNode* $tmp608 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result607 = $tmp608;
    if (((panda$core$Bit) { result607 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l609:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp612 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op611 = $tmp612;
        switch (op611.kind.value) {
            case 51:
            case 52:
            case 71:
            {
                org$pandalanguage$pandac$ASTNode* $tmp614 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next613 = $tmp614;
                if (((panda$core$Bit) { next613 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp616 = (panda$collections$Array*) malloc(40);
                $tmp616->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp616->refCount.value = 1;
                panda$collections$Array$init($tmp616);
                children615 = $tmp616;
                panda$collections$Array$add$panda$collections$Array$T(children615, ((panda$core$Object*) result607));
                panda$collections$Array$add$panda$collections$Array$T(children615, ((panda$core$Object*) next613));
                org$pandalanguage$pandac$ASTNode* $tmp618 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp618->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp618->refCount.value = 1;
                panda$core$Int64$wrapper* $tmp620;
                $tmp620 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp620->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp620->refCount = 1;
                $tmp620->value = op611.kind;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp618, ((panda$core$Int64) { 103 }), op611.position, ((panda$core$Object*) $tmp620), ((panda$collections$ListView*) children615));
                result607 = $tmp618;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op611);
                return result607;
            }
        }
    }
    }
    $l610:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result621;
    org$pandalanguage$pandac$Position $tmp625;
    org$pandalanguage$pandac$parser$Token op627;
    org$pandalanguage$pandac$parser$Token next629;
    org$pandalanguage$pandac$ASTNode* right631;
    org$pandalanguage$pandac$Position $tmp644;
    org$pandalanguage$pandac$ASTNode* step645;
    org$pandalanguage$pandac$Position $tmp650;
    panda$collections$Array* children651;
    panda$core$Int64 kind654;
    org$pandalanguage$pandac$parser$Token $tmp622 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp622.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$ASTNode* $tmp623 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp623->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp623->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp625);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp623, ((panda$core$Int64) { 138 }), $tmp625);
            result621 = $tmp623;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp626 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result621 = $tmp626;
            if (((panda$core$Bit) { result621 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp628 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op627 = $tmp628;
    switch (op627.kind.value) {
        case 97:
        case 96:
        {
            org$pandalanguage$pandac$parser$Token $tmp630 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next629 = $tmp630;
            panda$core$Bit $tmp634 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next629.kind, ((panda$core$Int64) { 102 }));
            bool $tmp633 = $tmp634.value;
            if (!$tmp633) goto $l635;
            panda$core$Bit $tmp636 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next629.kind, ((panda$core$Int64) { 104 }));
            $tmp633 = $tmp636.value;
            $l635:;
            panda$core$Bit $tmp637 = { $tmp633 };
            bool $tmp632 = $tmp637.value;
            if (!$tmp632) goto $l638;
            panda$core$Bit $tmp639 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next629.kind, ((panda$core$Int64) { 33 }));
            $tmp632 = $tmp639.value;
            $l638:;
            panda$core$Bit $tmp640 = { $tmp632 };
            if ($tmp640.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp641 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                right631 = $tmp641;
                if (((panda$core$Bit) { right631 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp642 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp642->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp642->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp644);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp642, ((panda$core$Int64) { 138 }), $tmp644);
                right631 = $tmp642;
            }
            }
            org$pandalanguage$pandac$parser$Token$nullable $tmp646 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 33 }));
            if (((panda$core$Bit) { $tmp646.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp647 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                step645 = $tmp647;
                if (((panda$core$Bit) { step645 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp648 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp648->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp648->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp650);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp648, ((panda$core$Int64) { 138 }), $tmp650);
                step645 = $tmp648;
            }
            }
            panda$collections$Array* $tmp652 = (panda$collections$Array*) malloc(40);
            $tmp652->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp652->refCount.value = 1;
            panda$collections$Array$init($tmp652);
            children651 = $tmp652;
            panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) result621));
            panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) right631));
            panda$collections$Array$add$panda$collections$Array$T(children651, ((panda$core$Object*) step645));
            panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op627.kind, ((panda$core$Int64) { 97 }));
            if ($tmp655.value) {
            {
                kind654 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind654 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp656 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp656->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp656->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp656, kind654, op627.position, ((panda$collections$ListView*) children651));
            return $tmp656;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op627);
            return result621;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result658;
    org$pandalanguage$pandac$parser$Token op662;
    org$pandalanguage$pandac$ASTNode* next664;
    panda$collections$Array* children666;
    org$pandalanguage$pandac$ASTNode* $tmp659 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result658 = $tmp659;
    if (((panda$core$Bit) { result658 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l660:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp663 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op662 = $tmp663;
        switch (op662.kind.value) {
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            {
                org$pandalanguage$pandac$ASTNode* $tmp665 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next664 = $tmp665;
                if (((panda$core$Bit) { next664 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp667 = (panda$collections$Array*) malloc(40);
                $tmp667->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp667->refCount.value = 1;
                panda$collections$Array$init($tmp667);
                children666 = $tmp667;
                panda$collections$Array$add$panda$collections$Array$T(children666, ((panda$core$Object*) result658));
                panda$collections$Array$add$panda$collections$Array$T(children666, ((panda$core$Object*) next664));
                org$pandalanguage$pandac$ASTNode* $tmp669 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp669->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp669->refCount.value = 1;
                panda$core$Int64$wrapper* $tmp671;
                $tmp671 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp671->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp671->refCount = 1;
                $tmp671->value = op662.kind;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp669, ((panda$core$Int64) { 103 }), op662.position, ((panda$core$Object*) $tmp671), ((panda$collections$ListView*) children666));
                result658 = $tmp669;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op662);
                return result658;
            }
        }
    }
    }
    $l661:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result672;
    org$pandalanguage$pandac$parser$Token op676;
    org$pandalanguage$pandac$ASTNode* next678;
    panda$collections$Array* children680;
    org$pandalanguage$pandac$ASTNode* $tmp673 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result672 = $tmp673;
    if (((panda$core$Bit) { result672 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l674:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp677 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op676 = $tmp677;
        switch (op676.kind.value) {
            case 66:
            case 70:
            {
                org$pandalanguage$pandac$ASTNode* $tmp679 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next678 = $tmp679;
                if (((panda$core$Bit) { next678 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp681 = (panda$collections$Array*) malloc(40);
                $tmp681->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp681->refCount.value = 1;
                panda$collections$Array$init($tmp681);
                children680 = $tmp681;
                panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) result672));
                panda$collections$Array$add$panda$collections$Array$T(children680, ((panda$core$Object*) next678));
                org$pandalanguage$pandac$ASTNode* $tmp683 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp683->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp683->refCount.value = 1;
                panda$core$Int64$wrapper* $tmp685;
                $tmp685 = (panda$core$Int64$wrapper*) malloc(24);
                $tmp685->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
                $tmp685->refCount = 1;
                $tmp685->value = op676.kind;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp683, ((panda$core$Int64) { 103 }), op676.position, ((panda$core$Object*) $tmp685), ((panda$collections$ListView*) children680));
                result672 = $tmp683;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op676);
                return result672;
            }
        }
    }
    }
    $l675:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result686;
    org$pandalanguage$pandac$parser$Token$nullable op690;
    org$pandalanguage$pandac$ASTNode* next692;
    panda$collections$Array* children694;
    org$pandalanguage$pandac$ASTNode* $tmp687 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result686 = $tmp687;
    if (((panda$core$Bit) { result686 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l688:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp691 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 68 }));
        op690 = $tmp691;
        if (((panda$core$Bit) { !op690.nonnull }).value) {
        {
            goto $l689;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp693 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next692 = $tmp693;
        if (((panda$core$Bit) { next692 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp695 = (panda$collections$Array*) malloc(40);
        $tmp695->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp695->refCount.value = 1;
        panda$collections$Array$init($tmp695);
        children694 = $tmp695;
        panda$collections$Array$add$panda$collections$Array$T(children694, ((panda$core$Object*) result686));
        panda$collections$Array$add$panda$collections$Array$T(children694, ((panda$core$Object*) next692));
        org$pandalanguage$pandac$ASTNode* $tmp697 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp697->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp697->refCount.value = 1;
        panda$core$Int64$wrapper* $tmp699;
        $tmp699 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp699->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp699->refCount = 1;
        $tmp699->value = ((org$pandalanguage$pandac$parser$Token) op690.value).kind;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp697, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op690.value).position, ((panda$core$Object*) $tmp699), ((panda$collections$ListView*) children694));
        result686 = $tmp697;
    }
    }
    $l689:;
    return result686;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start700;
    org$pandalanguage$pandac$ASTNode* test703;
    panda$collections$Array* children705;
    org$pandalanguage$pandac$ASTNode* ifTrue708;
    org$pandalanguage$pandac$ASTNode* ifFalse713;
    org$pandalanguage$pandac$ASTNode* ifFalse715;
    org$pandalanguage$pandac$parser$Token$nullable $tmp702 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s701);
    start700 = $tmp702;
    if (((panda$core$Bit) { !start700.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp704 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test703 = $tmp704;
    if (((panda$core$Bit) { test703 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp706 = (panda$collections$Array*) malloc(40);
    $tmp706->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp706->refCount.value = 1;
    panda$collections$Array$init($tmp706);
    children705 = $tmp706;
    panda$collections$Array$add$panda$collections$Array$T(children705, ((panda$core$Object*) test703));
    org$pandalanguage$pandac$ASTNode* $tmp709 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    ifTrue708 = $tmp709;
    if (((panda$core$Bit) { ifTrue708 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children705, ((panda$core$Object*) ifTrue708));
    org$pandalanguage$pandac$parser$Token$nullable $tmp710 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 37 }));
    if (((panda$core$Bit) { $tmp710.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp711 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp711.kind, ((panda$core$Int64) { 36 }));
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp714 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse713 = $tmp714;
            if (((panda$core$Bit) { ifFalse713 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children705, ((panda$core$Object*) ifFalse713));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp716 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse715 = $tmp716;
            if (((panda$core$Bit) { ifFalse715 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children705, ((panda$core$Object*) ifFalse715));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp717 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp717->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp717->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp717, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start700.value).position, ((panda$collections$ListView*) children705));
    return $tmp717;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable $tmp720 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s719);
    if (((panda$core$Bit) { !$tmp720.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp721 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp721;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id722;
    org$pandalanguage$pandac$ASTNode* type727;
    panda$collections$Array* children729;
    org$pandalanguage$pandac$parser$Token$nullable $tmp724 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s723);
    id722 = $tmp724;
    if (((panda$core$Bit) { !id722.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp725 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp725.kind, ((panda$core$Int64) { 95 }));
    if ($tmp726.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp728 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type727 = $tmp728;
        if (((panda$core$Bit) { type727 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp730 = (panda$collections$Array*) malloc(40);
        $tmp730->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp730->refCount.value = 1;
        panda$collections$Array$init($tmp730);
        children729 = $tmp730;
        panda$collections$Array$add$panda$collections$Array$T(children729, ((panda$core$Object*) type727));
        org$pandalanguage$pandac$ASTNode* $tmp732 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp732->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp732->refCount.value = 1;
        panda$core$String* $tmp734 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id722.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp732, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id722.value).position, ((panda$core$Object*) $tmp734), ((panda$collections$ListView*) children729));
        return $tmp732;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp735 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp735->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp735->refCount.value = 1;
    panda$core$String* $tmp737 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id722.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp735, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id722.value).position, $tmp737);
    return $tmp735;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start738;
    org$pandalanguage$pandac$ASTNode* t741;
    org$pandalanguage$pandac$ASTNode* list745;
    org$pandalanguage$pandac$ASTNode* block747;
    panda$collections$Array* children749;
    org$pandalanguage$pandac$parser$Token$nullable $tmp740 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 32 }), &$s739);
    start738 = $tmp740;
    if (((panda$core$Bit) { !start738.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp742 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t741 = $tmp742;
    if (((panda$core$Bit) { t741 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp744 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 34 }), &$s743);
    if (((panda$core$Bit) { !$tmp744.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp746 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list745 = $tmp746;
    if (((panda$core$Bit) { list745 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp748 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    block747 = $tmp748;
    if (((panda$core$Bit) { block747 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp750 = (panda$collections$Array*) malloc(40);
    $tmp750->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp750->refCount.value = 1;
    panda$collections$Array$init($tmp750);
    children749 = $tmp750;
    panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) t741));
    panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) list745));
    panda$collections$Array$add$panda$collections$Array$T(children749, ((panda$core$Object*) block747));
    org$pandalanguage$pandac$ASTNode* $tmp752 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp752->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp752->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp752, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start738.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children749));
    return $tmp752;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start754;
    org$pandalanguage$pandac$ASTNode* test757;
    org$pandalanguage$pandac$ASTNode* body759;
    panda$collections$Array* children761;
    org$pandalanguage$pandac$parser$Token$nullable $tmp756 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s755);
    start754 = $tmp756;
    if (((panda$core$Bit) { !start754.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp758 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test757 = $tmp758;
    if (((panda$core$Bit) { test757 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp760 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body759 = $tmp760;
    if (((panda$core$Bit) { body759 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp762 = (panda$collections$Array*) malloc(40);
    $tmp762->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp762->refCount.value = 1;
    panda$collections$Array$init($tmp762);
    children761 = $tmp762;
    panda$collections$Array$add$panda$collections$Array$T(children761, ((panda$core$Object*) test757));
    panda$collections$Array$add$panda$collections$Array$T(children761, ((panda$core$Object*) body759));
    org$pandalanguage$pandac$ASTNode* $tmp764 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp764->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp764->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp764, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start754.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children761));
    return $tmp764;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start766;
    org$pandalanguage$pandac$ASTNode* body769;
    org$pandalanguage$pandac$ASTNode* test773;
    panda$collections$Array* children775;
    org$pandalanguage$pandac$parser$Token$nullable $tmp768 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s767);
    start766 = $tmp768;
    if (((panda$core$Bit) { !start766.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp770 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body769 = $tmp770;
    if (((panda$core$Bit) { body769 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp772 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 31 }), &$s771);
    if (((panda$core$Bit) { !$tmp772.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp774 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test773 = $tmp774;
    if (((panda$core$Bit) { test773 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp776 = (panda$collections$Array*) malloc(40);
    $tmp776->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp776->refCount.value = 1;
    panda$collections$Array$init($tmp776);
    children775 = $tmp776;
    panda$collections$Array$add$panda$collections$Array$T(children775, ((panda$core$Object*) body769));
    panda$collections$Array$add$panda$collections$Array$T(children775, ((panda$core$Object*) test773));
    org$pandalanguage$pandac$ASTNode* $tmp778 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp778->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp778->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp778, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start766.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children775));
    return $tmp778;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start780;
    org$pandalanguage$pandac$ASTNode* body783;
    panda$collections$Array* children785;
    org$pandalanguage$pandac$parser$Token$nullable $tmp782 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 35 }), &$s781);
    start780 = $tmp782;
    if (((panda$core$Bit) { !start780.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp784 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body783 = $tmp784;
    if (((panda$core$Bit) { body783 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp786 = (panda$collections$Array*) malloc(40);
    $tmp786->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp786->refCount.value = 1;
    panda$collections$Array$init($tmp786);
    children785 = $tmp786;
    panda$collections$Array$add$panda$collections$Array$T(children785, ((panda$core$Object*) body783));
    org$pandalanguage$pandac$ASTNode* $tmp788 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp788->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp788->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp788, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start780.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children785));
    return $tmp788;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start790;
    org$pandalanguage$pandac$ASTNode* expr793;
    panda$collections$Array* children795;
    org$pandalanguage$pandac$ASTNode* message799;
    org$pandalanguage$pandac$parser$Token$nullable $tmp792 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 44 }), &$s791);
    start790 = $tmp792;
    if (((panda$core$Bit) { !start790.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp794 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr793 = $tmp794;
    if (((panda$core$Bit) { expr793 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp796 = (panda$collections$Array*) malloc(40);
    $tmp796->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp796->refCount.value = 1;
    panda$collections$Array$init($tmp796);
    children795 = $tmp796;
    panda$collections$Array$add$panda$collections$Array$T(children795, ((panda$core$Object*) expr793));
    org$pandalanguage$pandac$parser$Token$nullable $tmp798 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (((panda$core$Bit) { $tmp798.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp800 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        message799 = $tmp800;
        if (((panda$core$Bit) { message799 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children795, ((panda$core$Object*) message799));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp801 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp801->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp801->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp801, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start790.value).position, ((panda$collections$ListView*) children795));
    return $tmp801;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start803;
    panda$collections$Array* expressions806;
    org$pandalanguage$pandac$ASTNode* expr809;
    panda$collections$Array* children815;
    org$pandalanguage$pandac$ASTNode* stmt825;
    org$pandalanguage$pandac$ASTNode* stmt827;
    org$pandalanguage$pandac$parser$Token$nullable $tmp805 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 39 }), &$s804);
    start803 = $tmp805;
    if (((panda$core$Bit) { !start803.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp807 = (panda$collections$Array*) malloc(40);
    $tmp807->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp807->refCount.value = 1;
    panda$collections$Array$init($tmp807);
    expressions806 = $tmp807;
    org$pandalanguage$pandac$ASTNode* $tmp810 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr809 = $tmp810;
    if (((panda$core$Bit) { expr809 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions806, ((panda$core$Object*) expr809));
    $l811:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp813 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp813.nonnull }).value) goto $l812;
    {
        org$pandalanguage$pandac$ASTNode* $tmp814 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr809 = $tmp814;
        if (((panda$core$Bit) { expr809 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions806, ((panda$core$Object*) expr809));
    }
    goto $l811;
    $l812:;
    panda$collections$Array* $tmp816 = (panda$collections$Array*) malloc(40);
    $tmp816->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp816->refCount.value = 1;
    panda$collections$Array$init($tmp816);
    children815 = $tmp816;
    org$pandalanguage$pandac$ASTNode* $tmp818 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp818->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp818->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp818, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start803.value).position, ((panda$collections$ListView*) expressions806));
    panda$collections$Array$add$panda$collections$Array$T(children815, ((panda$core$Object*) $tmp818));
    org$pandalanguage$pandac$parser$Token$nullable $tmp821 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s820);
    if (((panda$core$Bit) { !$tmp821.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l822:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp824 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp824.kind.value) {
            case 39:
            case 40:
            case 100:
            {
                goto $l823;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp826 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt825 = $tmp826;
                if (((panda$core$Bit) { stmt825 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children815, ((panda$core$Object*) stmt825));
                goto $l823;
            }
            break;
            default:
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp828 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt827 = $tmp828;
                    if (((panda$core$Bit) { stmt827 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children815, ((panda$core$Object*) stmt827));
                }
            }
        }
    }
    }
    $l823:;
    org$pandalanguage$pandac$ASTNode* $tmp829 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp829->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp829->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp829, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start803.value).position, ((panda$collections$ListView*) children815));
    return $tmp829;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start831;
    panda$collections$Array* children834;
    org$pandalanguage$pandac$ASTNode* expr837;
    org$pandalanguage$pandac$parser$Token token843;
    org$pandalanguage$pandac$ASTNode* w845;
    org$pandalanguage$pandac$parser$Token o847;
    panda$collections$Array* statements851;
    org$pandalanguage$pandac$ASTNode* stmt857;
    org$pandalanguage$pandac$ASTNode* stmt859;
    org$pandalanguage$pandac$parser$Token$nullable $tmp833 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 38 }), &$s832);
    start831 = $tmp833;
    if (((panda$core$Bit) { !start831.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp835 = (panda$collections$Array*) malloc(40);
    $tmp835->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp835->refCount.value = 1;
    panda$collections$Array$init($tmp835);
    children834 = $tmp835;
    org$pandalanguage$pandac$ASTNode* $tmp838 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr837 = $tmp838;
    if (((panda$core$Bit) { expr837 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children834, ((panda$core$Object*) expr837));
    org$pandalanguage$pandac$parser$Token$nullable $tmp840 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s839);
    if (((panda$core$Bit) { !$tmp840.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l841:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp844 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token843 = $tmp844;
        switch (token843.kind.value) {
            case 100:
            {
                goto $l842;
            }
            break;
            case 39:
            {
                org$pandalanguage$pandac$ASTNode* $tmp846 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w845 = $tmp846;
                if (((panda$core$Bit) { w845 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children834, ((panda$core$Object*) w845));
            }
            break;
            case 40:
            {
                org$pandalanguage$pandac$parser$Token $tmp848 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o847 = $tmp848;
                org$pandalanguage$pandac$parser$Token$nullable $tmp850 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s849);
                if (((panda$core$Bit) { !$tmp850.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp852 = (panda$collections$Array*) malloc(40);
                $tmp852->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp852->refCount.value = 1;
                panda$collections$Array$init($tmp852);
                statements851 = $tmp852;
                $l854:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp856 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    switch ($tmp856.kind.value) {
                        case 100:
                        {
                            goto $l855;
                        }
                        break;
                        case 28:
                        case 29:
                        case 27:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp858 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt857 = $tmp858;
                            if (((panda$core$Bit) { stmt857 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements851, ((panda$core$Object*) stmt857));
                            goto $l855;
                        }
                        break;
                        default:
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp860 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt859 = $tmp860;
                            if (((panda$core$Bit) { stmt859 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements851, ((panda$core$Object*) stmt859));
                        }
                    }
                }
                }
                $l855:;
                org$pandalanguage$pandac$ASTNode* $tmp861 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp861->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp861->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp861, ((panda$core$Int64) { 127 }), o847.position, ((panda$collections$ListView*) statements851));
                panda$collections$Array$add$panda$collections$Array$T(children834, ((panda$core$Object*) $tmp861));
                goto $l842;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp865 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token843);
                panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s864, $tmp865);
                panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, &$s867);
                panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s863, $tmp868);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token843, $tmp869);
            }
        }
    }
    }
    $l842:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp871 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s870);
    if (((panda$core$Bit) { !$tmp871.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp872 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp872->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp872->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp872, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start831.value).position, ((panda$collections$ListView*) children834));
    return $tmp872;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start874;
    panda$collections$Array* children877;
    org$pandalanguage$pandac$ASTNode* stmt883;
    org$pandalanguage$pandac$ASTNode* stmt887;
    org$pandalanguage$pandac$parser$Token$nullable $tmp876 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s875);
    start874 = $tmp876;
    if (((panda$core$Bit) { !start874.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp878 = (panda$collections$Array*) malloc(40);
    $tmp878->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp878->refCount.value = 1;
    panda$collections$Array$init($tmp878);
    children877 = $tmp878;
    $l880:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp882 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        switch ($tmp882.kind.value) {
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l881;
            }
            break;
            case 28:
            case 29:
            case 27:
            {
                org$pandalanguage$pandac$ASTNode* $tmp884 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt883 = $tmp884;
                if (((panda$core$Bit) { stmt883 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$nullable $tmp886 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s885);
                if (((panda$core$Bit) { !$tmp886.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) stmt883));
                goto $l881;
            }
            break;
            default:
            {
                org$pandalanguage$pandac$ASTNode* $tmp888 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt887 = $tmp888;
                if (((panda$core$Bit) { stmt887 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children877, ((panda$core$Object*) stmt887));
            }
        }
    }
    }
    $l881:;
    org$pandalanguage$pandac$ASTNode* $tmp889 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp889->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp889->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp889, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start874.value).position, ((panda$collections$ListView*) children877));
    return $tmp889;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start891;
    org$pandalanguage$pandac$parser$Token op894;
    org$pandalanguage$pandac$ASTNode* rvalue896;
    panda$collections$Array* children898;
    org$pandalanguage$pandac$parser$Token op906;
    org$pandalanguage$pandac$ASTNode* rvalue908;
    panda$collections$Array* children910;
    org$pandalanguage$pandac$ASTNode* $tmp892 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start891 = $tmp892;
    if (((panda$core$Bit) { start891 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp893 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp893.kind.value) {
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
            org$pandalanguage$pandac$parser$Token $tmp895 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op894 = $tmp895;
            org$pandalanguage$pandac$ASTNode* $tmp897 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue896 = $tmp897;
            if (((panda$core$Bit) { rvalue896 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp899 = (panda$collections$Array*) malloc(40);
            $tmp899->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp899->refCount.value = 1;
            panda$collections$Array$init($tmp899);
            children898 = $tmp899;
            panda$collections$Array$add$panda$collections$Array$T(children898, ((panda$core$Object*) start891));
            panda$collections$Array$add$panda$collections$Array$T(children898, ((panda$core$Object*) rvalue896));
            org$pandalanguage$pandac$ASTNode* $tmp901 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp901->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp901->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp903;
            $tmp903 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp903->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp903->refCount = 1;
            $tmp903->value = op894.kind;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp901, ((panda$core$Int64) { 103 }), start891->position, ((panda$core$Object*) $tmp903), ((panda$collections$ListView*) children898));
            return $tmp901;
        }
        break;
        case 58:
        {
            org$pandalanguage$pandac$parser$Token $tmp904 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp904, &$s905);
            org$pandalanguage$pandac$parser$Token $tmp907 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op906 = $tmp907;
            org$pandalanguage$pandac$ASTNode* $tmp909 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue908 = $tmp909;
            if (((panda$core$Bit) { rvalue908 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp911 = (panda$collections$Array*) malloc(40);
            $tmp911->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp911->refCount.value = 1;
            panda$collections$Array$init($tmp911);
            children910 = $tmp911;
            panda$collections$Array$add$panda$collections$Array$T(children910, ((panda$core$Object*) start891));
            panda$collections$Array$add$panda$collections$Array$T(children910, ((panda$core$Object*) rvalue908));
            org$pandalanguage$pandac$ASTNode* $tmp913 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp913->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp913->refCount.value = 1;
            panda$core$Int64$wrapper* $tmp915;
            $tmp915 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp915->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp915->refCount = 1;
            $tmp915->value = op906.kind;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp913, ((panda$core$Int64) { 103 }), start891->position, ((panda$core$Object*) $tmp915), ((panda$collections$ListView*) children910));
            return $tmp913;
        }
        break;
        default:
        {
            return start891;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children916;
    org$pandalanguage$pandac$ASTNode* t919;
    org$pandalanguage$pandac$ASTNode* value922;
    org$pandalanguage$pandac$ASTNode* value928;
    panda$collections$Array* $tmp917 = (panda$collections$Array*) malloc(40);
    $tmp917->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp917->refCount.value = 1;
    panda$collections$Array$init($tmp917);
    children916 = $tmp917;
    org$pandalanguage$pandac$ASTNode* $tmp920 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t919 = $tmp920;
    if (((panda$core$Bit) { t919 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children916, ((panda$core$Object*) t919));
    org$pandalanguage$pandac$parser$Token$nullable $tmp921 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 73 }));
    if (((panda$core$Bit) { $tmp921.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp923 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value922 = $tmp923;
        if (((panda$core$Bit) { value922 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children916, ((panda$core$Object*) value922));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp924 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp924.kind, ((panda$core$Int64) { 58 }));
    if ($tmp925.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp926 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp926, &$s927);
        org$pandalanguage$pandac$ASTNode* $tmp929 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value928 = $tmp929;
        if (((panda$core$Bit) { value928 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children916, ((panda$core$Object*) value928));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp930 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp930->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp930->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp930, ((panda$core$Int64) { 129 }), t919->position, ((panda$collections$ListView*) children916));
    return $tmp930;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start932;
    panda$core$Int64 kind934;
    panda$collections$Array* children936;
    org$pandalanguage$pandac$ASTNode* child939;
    org$pandalanguage$pandac$ASTNode* child944;
    org$pandalanguage$pandac$parser$Token $tmp933 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start932 = $tmp933;
    switch (start932.kind.value) {
        case 23:
        {
            kind934 = ((panda$core$Int64) { 130 });
        }
        break;
        case 24:
        {
            kind934 = ((panda$core$Int64) { 131 });
        }
        break;
        case 25:
        {
            kind934 = ((panda$core$Int64) { 133 });
        }
        break;
        case 26:
        {
            kind934 = ((panda$core$Int64) { 132 });
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start932, &$s935);
        }
    }
    panda$collections$Array* $tmp937 = (panda$collections$Array*) malloc(40);
    $tmp937->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp937->refCount.value = 1;
    panda$collections$Array$init($tmp937);
    children936 = $tmp937;
    org$pandalanguage$pandac$ASTNode* $tmp940 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    child939 = $tmp940;
    if (((panda$core$Bit) { child939 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children936, ((panda$core$Object*) child939));
    $l941:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp943 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp943.nonnull }).value) goto $l942;
    {
        org$pandalanguage$pandac$ASTNode* $tmp945 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        child944 = $tmp945;
        if (((panda$core$Bit) { child944 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children936, ((panda$core$Object*) child944));
    }
    goto $l941;
    $l942:;
    org$pandalanguage$pandac$ASTNode* $tmp946 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp946->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp946->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp946, kind934, start932.position, ((panda$collections$ListView*) children936));
    return $tmp946;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start948;
    panda$collections$Array* children954;
    org$pandalanguage$pandac$ASTNode* expr961;
    org$pandalanguage$pandac$parser$Token$nullable $tmp950 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s949);
    start948 = $tmp950;
    if (((panda$core$Bit) { !start948.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp952 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s951);
    if (((panda$core$Bit) { !$tmp952.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp953;
    $tmp953 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp953->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp953->refCount = 1;
    $tmp953->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp953));
    panda$collections$Array* $tmp955 = (panda$collections$Array*) malloc(40);
    $tmp955->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp955->refCount.value = 1;
    panda$collections$Array$init($tmp955);
    children954 = $tmp955;
    org$pandalanguage$pandac$ASTNode* $tmp957 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp957->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp957->refCount.value = 1;
    panda$core$String* $tmp959 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start948.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp957, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start948.value).position, $tmp959);
    panda$collections$Array$add$panda$collections$Array$T(children954, ((panda$core$Object*) $tmp957));
    org$pandalanguage$pandac$parser$Token$nullable $tmp960 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp960.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp962 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr961 = $tmp962;
        if (((panda$core$Bit) { expr961 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children954, ((panda$core$Object*) expr961));
        $l963:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp965 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp965.nonnull }).value) goto $l964;
        {
            org$pandalanguage$pandac$ASTNode* $tmp966 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr961 = $tmp966;
            if (((panda$core$Bit) { expr961 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children954, ((panda$core$Object*) expr961));
        }
        goto $l963;
        $l964:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp968 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s967);
        if (((panda$core$Bit) { !$tmp968.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp969 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp969->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp969->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp969, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start948.value).position, ((panda$collections$ListView*) children954));
    return $tmp969;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start971;
    org$pandalanguage$pandac$parser$Token$nullable label974;
    org$pandalanguage$pandac$parser$Token$nullable $tmp973 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 28 }), &$s972);
    start971 = $tmp973;
    if (((panda$core$Bit) { !start971.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp975 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label974 = $tmp975;
    if (((panda$core$Bit) { label974.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp976 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp976->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp976->refCount.value = 1;
        panda$core$String* $tmp978 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label974.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp976, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start971.value).position, $tmp978);
        return $tmp976;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp979 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp979->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp979->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp979, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start971.value).position);
    return $tmp979;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start981;
    org$pandalanguage$pandac$parser$Token$nullable label984;
    org$pandalanguage$pandac$parser$Token$nullable $tmp983 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 29 }), &$s982);
    start981 = $tmp983;
    if (((panda$core$Bit) { !start981.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp985 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }));
    label984 = $tmp985;
    if (((panda$core$Bit) { label984.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp986 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp986->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp986->refCount.value = 1;
        panda$core$String* $tmp988 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label984.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp986, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start981.value).position, $tmp988);
        return $tmp986;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp989 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp989->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp989->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp989, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start981.value).position);
    return $tmp989;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start991;
    panda$collections$Array* children997;
    org$pandalanguage$pandac$ASTNode* expr1000;
    org$pandalanguage$pandac$parser$Token$nullable $tmp993 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 27 }), &$s992);
    start991 = $tmp993;
    if (((panda$core$Bit) { !start991.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp994 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp994.kind.value) {
        case 100:
        case 39:
        case 40:
        {
            org$pandalanguage$pandac$ASTNode* $tmp995 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp995->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp995->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp995, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start991.value).position);
            return $tmp995;
        }
        break;
        default:
        {
            panda$collections$Array* $tmp998 = (panda$collections$Array*) malloc(40);
            $tmp998->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp998->refCount.value = 1;
            panda$collections$Array$init($tmp998);
            children997 = $tmp998;
            org$pandalanguage$pandac$ASTNode* $tmp1001 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1000 = $tmp1001;
            if (((panda$core$Bit) { expr1000 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children997, ((panda$core$Object*) expr1000));
            org$pandalanguage$pandac$ASTNode* $tmp1002 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1002->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1002->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1002, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start991.value).position, ((panda$collections$ListView*) children997));
            return $tmp1002;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1004 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1004.kind.value) {
        case 28:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1005 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1005;
        }
        break;
        case 29:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1006 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1006;
        }
        break;
        case 27:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1007 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1007;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token $tmp1008 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1008.kind.value) {
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1009 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1009;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1010 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1010;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1011 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1011;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1012 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1012;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 30 }), &$s1013);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token id1023;
    org$pandalanguage$pandac$parser$Token $tmp1014 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1014.kind.value) {
        case 36:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1015 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1015;
        }
        break;
        case 32:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1016 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1016;
        }
        break;
        case 31:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1017 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1017;
        }
        break;
        case 30:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1018 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1018;
        }
        break;
        case 35:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1019 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1019;
        }
        break;
        case 44:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1020 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1020;
        }
        break;
        case 38:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1021 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1021;
        }
        break;
        case 99:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1022 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1022;
        }
        break;
        case 48:
        {
            org$pandalanguage$pandac$parser$Token $tmp1024 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1023 = $tmp1024;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1025 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
            if (((panda$core$Bit) { $tmp1025.nonnull }).value) {
            {
                panda$core$String* $tmp1026 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1023);
                org$pandalanguage$pandac$ASTNode* $tmp1027 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1026);
                return $tmp1027;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1023);
            org$pandalanguage$pandac$ASTNode* $tmp1028 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1028;
        }
        break;
        case 46:
        case 47:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1029 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1029;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1030 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1030;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1031 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1031;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 36 }), &$s1032);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1033;
    org$pandalanguage$pandac$parser$Token$nullable next1036;
    panda$core$MutableString* name1039;
    panda$core$Char8 $tmp1046;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1035 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 14 }), &$s1034);
    start1033 = $tmp1035;
    if (((panda$core$Bit) { !start1033.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1038 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1037);
    next1036 = $tmp1038;
    if (((panda$core$Bit) { !next1036.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1040 = (panda$core$MutableString*) malloc(48);
    $tmp1040->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1040->refCount.value = 1;
    panda$core$String* $tmp1042 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1036.value));
    panda$core$MutableString$init$panda$core$String($tmp1040, $tmp1042);
    name1039 = $tmp1040;
    $l1043:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1045 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next1036 = $tmp1045;
        if (((panda$core$Bit) { !next1036.nonnull }).value) {
        {
            goto $l1044;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1046, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1039, $tmp1046);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1048 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1047);
        next1036 = $tmp1048;
        if (((panda$core$Bit) { !next1036.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1049 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1036.value));
        panda$core$MutableString$append$panda$core$String(name1039, $tmp1049);
    }
    }
    $l1044:;
    org$pandalanguage$pandac$ASTNode* $tmp1050 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1050->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1050->refCount.value = 1;
    panda$core$String* $tmp1052 = panda$core$MutableString$finish$R$panda$core$String(name1039);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1050, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1033.value).position, $tmp1052);
    return $tmp1050;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1053;
    org$pandalanguage$pandac$parser$Token$nullable next1056;
    panda$core$MutableString* name1059;
    panda$core$Char8 $tmp1066;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1055 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 15 }), &$s1054);
    start1053 = $tmp1055;
    if (((panda$core$Bit) { !start1053.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1058 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1057);
    next1056 = $tmp1058;
    if (((panda$core$Bit) { !next1056.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1060 = (panda$core$MutableString*) malloc(48);
    $tmp1060->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1060->refCount.value = 1;
    panda$core$String* $tmp1062 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1056.value));
    panda$core$MutableString$init$panda$core$String($tmp1060, $tmp1062);
    name1059 = $tmp1060;
    $l1063:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1065 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 98 }));
        next1056 = $tmp1065;
        if (((panda$core$Bit) { !next1056.nonnull }).value) {
        {
            goto $l1064;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1066, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1059, $tmp1066);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1068 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1067);
        next1056 = $tmp1068;
        if (((panda$core$Bit) { !next1056.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1069 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1056.value));
        panda$core$MutableString$append$panda$core$String(name1059, $tmp1069);
    }
    }
    $l1064:;
    org$pandalanguage$pandac$ASTNode* $tmp1070 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1070->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1070->refCount.value = 1;
    panda$core$String* $tmp1072 = panda$core$MutableString$finish$R$panda$core$String(name1059);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1070, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1053.value).position, $tmp1072);
    return $tmp1070;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1073;
    org$pandalanguage$pandac$parser$Token$nullable id1076;
    panda$collections$Array* children1079;
    panda$collections$Array* idChildren1082;
    org$pandalanguage$pandac$ASTNode* t1086;
    org$pandalanguage$pandac$ASTNode* t1097;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1075 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 62 }), &$s1074);
    start1073 = $tmp1075;
    if (((panda$core$Bit) { !start1073.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1078 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1077);
    id1076 = $tmp1078;
    if (((panda$core$Bit) { !id1076.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1080 = (panda$collections$Array*) malloc(40);
    $tmp1080->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1080->refCount.value = 1;
    panda$collections$Array$init($tmp1080);
    children1079 = $tmp1080;
    panda$collections$Array* $tmp1083 = (panda$collections$Array*) malloc(40);
    $tmp1083->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1083->refCount.value = 1;
    panda$collections$Array$init($tmp1083);
    idChildren1082 = $tmp1083;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1085 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1085.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1087 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1086 = $tmp1087;
        if (((panda$core$Bit) { t1086 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1082, ((panda$core$Object*) t1086));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1088 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1088->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1088->refCount.value = 1;
    panda$core$String* $tmp1090 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1076.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1088, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1076.value).position, ((panda$core$Object*) $tmp1090), ((panda$collections$ListView*) idChildren1082));
    panda$collections$Array$add$panda$collections$Array$T(children1079, ((panda$core$Object*) $tmp1088));
    $l1091:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1093 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1093.nonnull }).value) goto $l1092;
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1095 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1094);
        id1076 = $tmp1095;
        if (((panda$core$Bit) { !id1076.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1082);
        org$pandalanguage$pandac$parser$Token$nullable $tmp1096 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
        if (((panda$core$Bit) { $tmp1096.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1098 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1097 = $tmp1098;
            if (((panda$core$Bit) { t1097 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1082, ((panda$core$Object*) t1097));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1099 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1099->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1099->refCount.value = 1;
        panda$core$String* $tmp1101 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1076.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1099, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1076.value).position, ((panda$core$Object*) $tmp1101), ((panda$collections$ListView*) idChildren1082));
        panda$collections$Array$add$panda$collections$Array$T(children1079, ((panda$core$Object*) $tmp1099));
    }
    goto $l1091;
    $l1092:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1103 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 63 }), &$s1102);
    if (((panda$core$Bit) { !$tmp1103.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1104 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1104->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1104->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1104, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1073.value).position, ((panda$collections$ListView*) children1079));
    return $tmp1104;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1106;
    panda$collections$Array* children1109;
    org$pandalanguage$pandac$ASTNode* t1112;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1108 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }), &$s1107);
    start1106 = $tmp1108;
    if (((panda$core$Bit) { !start1106.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1110 = (panda$collections$Array*) malloc(40);
    $tmp1110->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1110->refCount.value = 1;
    panda$collections$Array$init($tmp1110);
    children1109 = $tmp1110;
    org$pandalanguage$pandac$ASTNode* $tmp1113 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1112 = $tmp1113;
    if (((panda$core$Bit) { t1112 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1109, ((panda$core$Object*) t1112));
    $l1114:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1116 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
    if (!((panda$core$Bit) { $tmp1116.nonnull }).value) goto $l1115;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1117 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1112 = $tmp1117;
        if (((panda$core$Bit) { t1112 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1109, ((panda$core$Object*) t1112));
    }
    goto $l1114;
    $l1115:;
    org$pandalanguage$pandac$ASTNode* $tmp1118 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1118->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1118->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1118, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1106.value).position, ((panda$collections$ListView*) children1109));
    return $tmp1118;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1120;
    org$pandalanguage$pandac$parser$Token$nullable next1125;
    org$pandalanguage$pandac$Position $tmp1132;
    panda$collections$Array* $tmp1121 = (panda$collections$Array*) malloc(40);
    $tmp1121->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1121->refCount.value = 1;
    panda$collections$Array$init($tmp1121);
    children1120 = $tmp1121;
    $l1123:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1126 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 13 }));
        next1125 = $tmp1126;
        if (((panda$core$Bit) { !next1125.nonnull }).value) {
        {
            goto $l1124;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1127 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1127->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1127->refCount.value = 1;
        panda$core$String* $tmp1129 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1125.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1127, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1125.value).position, $tmp1129);
        panda$collections$Array$add$panda$collections$Array$T(children1120, ((panda$core$Object*) $tmp1127));
    }
    }
    $l1124:;
    org$pandalanguage$pandac$ASTNode* $tmp1130 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1130->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1130->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1132);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1130, ((panda$core$Int64) { 144 }), $tmp1132, ((panda$collections$ListView*) children1120));
    return $tmp1130;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1133;
    panda$core$MutableString* result1136;
    org$pandalanguage$pandac$parser$Token next1141;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1135 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 11 }), &$s1134);
    start1133 = $tmp1135;
    if (((panda$core$Bit) { !start1133.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1137 = (panda$core$MutableString*) malloc(48);
    $tmp1137->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1137->refCount.value = 1;
    panda$core$MutableString$init($tmp1137);
    result1136 = $tmp1137;
    $l1139:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1142 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1141 = $tmp1142;
        panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1141.kind, ((panda$core$Int64) { 11 }));
        if ($tmp1143.value) {
        {
            goto $l1140;
        }
        }
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1141.kind, ((panda$core$Int64) { 0 }));
        if ($tmp1144.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1133.value), &$s1145);
            return NULL;
        }
        }
        panda$core$String* $tmp1146 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1141);
        panda$core$MutableString$append$panda$core$String(result1136, $tmp1146);
    }
    }
    $l1140:;
    org$pandalanguage$pandac$ASTNode* $tmp1147 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1147->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1147->refCount.value = 1;
    panda$core$String* $tmp1149 = panda$core$MutableString$finish$R$panda$core$String(result1136);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1147, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1133.value).position, $tmp1149);
    return $tmp1147;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1150;
    org$pandalanguage$pandac$ASTNode* t1153;
    panda$collections$Array* children1155;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1152 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1151);
    id1150 = $tmp1152;
    if (((panda$core$Bit) { !id1150.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1154 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1153 = $tmp1154;
    if (((panda$core$Bit) { t1153 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1156 = (panda$collections$Array*) malloc(40);
    $tmp1156->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1156->refCount.value = 1;
    panda$collections$Array$init($tmp1156);
    children1155 = $tmp1156;
    panda$collections$Array$add$panda$collections$Array$T(children1155, ((panda$core$Object*) t1153));
    org$pandalanguage$pandac$ASTNode* $tmp1158 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1158->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1158->refCount.value = 1;
    panda$core$String* $tmp1160 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1150.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1158, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1150.value).position, ((panda$core$Object*) $tmp1160), ((panda$collections$ListView*) children1155));
    return $tmp1158;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1161;
    panda$collections$Array* children1164;
    org$pandalanguage$pandac$ASTNode* param1168;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1163 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }), &$s1162);
    start1161 = $tmp1163;
    if (((panda$core$Bit) { !start1161.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1165 = (panda$collections$Array*) malloc(40);
    $tmp1165->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1165->refCount.value = 1;
    panda$collections$Array$init($tmp1165);
    children1164 = $tmp1165;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1167 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }));
    if (((panda$core$Bit) { !$tmp1167.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1169 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1168 = $tmp1169;
        if (((panda$core$Bit) { param1168 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1164, ((panda$core$Object*) param1168));
        $l1170:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1172 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1172.nonnull }).value) goto $l1171;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1173 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
            param1168 = $tmp1173;
            if (((panda$core$Bit) { param1168 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1164, ((panda$core$Object*) param1168));
        }
        goto $l1170;
        $l1171:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1175 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1174);
        if (((panda$core$Bit) { !$tmp1175.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1176 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1176->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1176->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1176, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1161.value).position, ((panda$collections$ListView*) children1164));
    return $tmp1176;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1178;
    org$pandalanguage$pandac$parser$Token$nullable start1179;
    panda$core$String* name1183;
    panda$collections$Array* children1185;
    org$pandalanguage$pandac$ASTNode* params1188;
    org$pandalanguage$pandac$ASTNode* returnType1192;
    org$pandalanguage$pandac$Position $tmp1196;
    org$pandalanguage$pandac$ASTNode* b1199;
    org$pandalanguage$pandac$Position $tmp1203;
    org$pandalanguage$pandac$parser$Token token1204;
    panda$core$String* tokenText1206;
    org$pandalanguage$pandac$ASTNode* post1219;
    org$pandalanguage$pandac$Position $tmp1223;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1180 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 20 }));
    start1179 = $tmp1180;
    if (((panda$core$Bit) { !start1179.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$nullable $tmp1182 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 21 }), &$s1181);
        start1179 = $tmp1182;
        if (((panda$core$Bit) { !start1179.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1178 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1178 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1184 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1183 = $tmp1184;
    if (((panda$core$Bit) { name1183 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1186 = (panda$collections$Array*) malloc(40);
    $tmp1186->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1186->refCount.value = 1;
    panda$collections$Array$init($tmp1186);
    children1185 = $tmp1186;
    panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1189 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1188 = $tmp1189;
    if (((panda$core$Bit) { params1188 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) params1188));
    org$pandalanguage$pandac$parser$Token $tmp1190 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1190.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1191.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1193 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        returnType1192 = $tmp1193;
        if (((panda$core$Bit) { returnType1192 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) returnType1192));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1194 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1194->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1194->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1196);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1194, ((panda$core$Int64) { 138 }), $tmp1196);
        panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) $tmp1194));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1197 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1197.kind, ((panda$core$Int64) { 99 }));
    if ($tmp1198.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1200 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
        b1199 = $tmp1200;
        if (((panda$core$Bit) { b1199 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) b1199));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1201 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1201->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1201->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1203);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1201, ((panda$core$Int64) { 138 }), $tmp1203);
        panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) $tmp1201));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1205 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1204 = $tmp1205;
    panda$core$String* $tmp1207 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1204);
    tokenText1206 = $tmp1207;
    panda$core$Bit $tmp1209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1204.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1208 = $tmp1209.value;
    if (!$tmp1208) goto $l1210;
    panda$core$Bit $tmp1213 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1206, &$s1212);
    bool $tmp1211 = $tmp1213.value;
    if ($tmp1211) goto $l1214;
    panda$core$Bit $tmp1216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1206, &$s1215);
    $tmp1211 = $tmp1216.value;
    $l1214:;
    panda$core$Bit $tmp1217 = { $tmp1211 };
    $tmp1208 = $tmp1217.value;
    $l1210:;
    panda$core$Bit $tmp1218 = { $tmp1208 };
    if ($tmp1218.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1220 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1219 = $tmp1220;
        if (((panda$core$Bit) { post1219 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) post1219));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1221 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1221->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1221->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1223);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1221, ((panda$core$Int64) { 138 }), $tmp1223);
        panda$collections$Array$add$panda$collections$Array$T(children1185, ((panda$core$Object*) $tmp1221));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1224 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1224->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1224->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1224, kind1178, ((org$pandalanguage$pandac$parser$Token) start1179.value).position, ((panda$core$Object*) name1183), ((panda$collections$ListView*) children1185));
    return $tmp1224;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1226;
    panda$collections$Array* children1229;
    org$pandalanguage$pandac$ASTNode* params1232;
    org$pandalanguage$pandac$ASTNode* b1234;
    org$pandalanguage$pandac$parser$Token token1236;
    panda$core$String* tokenText1238;
    org$pandalanguage$pandac$ASTNode* post1251;
    org$pandalanguage$pandac$Position $tmp1255;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1228 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 22 }), &$s1227);
    start1226 = $tmp1228;
    if (((panda$core$Bit) { !start1226.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1230 = (panda$collections$Array*) malloc(40);
    $tmp1230->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1230->refCount.value = 1;
    panda$collections$Array$init($tmp1230);
    children1229 = $tmp1230;
    panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1233 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1232 = $tmp1233;
    if (((panda$core$Bit) { params1232 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) params1232));
    org$pandalanguage$pandac$ASTNode* $tmp1235 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    b1234 = $tmp1235;
    if (((panda$core$Bit) { b1234 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) b1234));
    org$pandalanguage$pandac$parser$Token $tmp1237 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1236 = $tmp1237;
    panda$core$String* $tmp1239 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1236);
    tokenText1238 = $tmp1239;
    panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1236.kind, ((panda$core$Int64) { 13 }));
    bool $tmp1240 = $tmp1241.value;
    if (!$tmp1240) goto $l1242;
    panda$core$Bit $tmp1245 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1238, &$s1244);
    bool $tmp1243 = $tmp1245.value;
    if ($tmp1243) goto $l1246;
    panda$core$Bit $tmp1248 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1238, &$s1247);
    $tmp1243 = $tmp1248.value;
    $l1246:;
    panda$core$Bit $tmp1249 = { $tmp1243 };
    $tmp1240 = $tmp1249.value;
    $l1242:;
    panda$core$Bit $tmp1250 = { $tmp1240 };
    if ($tmp1250.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1252 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1251 = $tmp1252;
        if (((panda$core$Bit) { post1251 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) post1251));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1253 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1253->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1253->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1255);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1253, ((panda$core$Int64) { 138 }), $tmp1255);
        panda$collections$Array$add$panda$collections$Array$T(children1229, ((panda$core$Object*) $tmp1253));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1256 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1256->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1256->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1256, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1226.value).position, ((panda$collections$ListView*) children1229));
    return $tmp1256;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1258;
    panda$collections$Array* children1260;
    org$pandalanguage$pandac$ASTNode* $tmp1259 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1258 = $tmp1259;
    if (((panda$core$Bit) { decl1258 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1261 = (panda$collections$Array*) malloc(40);
    $tmp1261->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1261->refCount.value = 1;
    panda$collections$Array$init($tmp1261);
    children1260 = $tmp1261;
    panda$collections$Array$add$panda$collections$Array$T(children1260, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1260, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1260, ((panda$core$Object*) decl1258));
    org$pandalanguage$pandac$ASTNode* $tmp1263 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1263->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1263->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1263, ((panda$core$Int64) { 148 }), decl1258->position, ((panda$collections$ListView*) children1260));
    return $tmp1263;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1265;
    panda$collections$Array* fields1268;
    org$pandalanguage$pandac$parser$Token$nullable field1274;
    org$pandalanguage$pandac$ASTNode* t1277;
    panda$collections$Array* children1279;
    panda$collections$Array* children1298;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1267 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1266);
    name1265 = $tmp1267;
    if (((panda$core$Bit) { !name1265.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1269 = (panda$collections$Array*) malloc(40);
    $tmp1269->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1269->refCount.value = 1;
    panda$collections$Array$init($tmp1269);
    fields1268 = $tmp1269;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1271 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 103 }));
    if (((panda$core$Bit) { $tmp1271.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1272 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1273 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1272.kind, ((panda$core$Int64) { 104 }));
        if ($tmp1273.value) {
        {
            org$pandalanguage$pandac$parser$Token$nullable $tmp1276 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1275);
            field1274 = $tmp1276;
            if (((panda$core$Bit) { !field1274.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1278 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1277 = $tmp1278;
            if (((panda$core$Bit) { t1277 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1280 = (panda$collections$Array*) malloc(40);
            $tmp1280->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1280->refCount.value = 1;
            panda$collections$Array$init($tmp1280);
            children1279 = $tmp1280;
            panda$collections$Array$add$panda$collections$Array$T(children1279, ((panda$core$Object*) t1277));
            org$pandalanguage$pandac$ASTNode* $tmp1282 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1282->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1282->refCount.value = 1;
            panda$core$String* $tmp1284 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) field1274.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1282, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) field1274.value).position, ((panda$core$Object*) $tmp1284), ((panda$collections$ListView*) children1279));
            panda$collections$Array$add$panda$collections$Array$T(fields1268, ((panda$core$Object*) $tmp1282));
            $l1285:;
            org$pandalanguage$pandac$parser$Token$nullable $tmp1287 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
            if (!((panda$core$Bit) { $tmp1287.nonnull }).value) goto $l1286;
            {
                org$pandalanguage$pandac$parser$Token$nullable $tmp1289 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1288);
                field1274 = $tmp1289;
                if (((panda$core$Bit) { !field1274.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1290 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t1277 = $tmp1290;
                if (((panda$core$Bit) { t1277 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1291 = (panda$collections$Array*) malloc(40);
                $tmp1291->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1291->refCount.value = 1;
                panda$collections$Array$init($tmp1291);
                children1279 = $tmp1291;
                panda$collections$Array$add$panda$collections$Array$T(children1279, ((panda$core$Object*) t1277));
                org$pandalanguage$pandac$ASTNode* $tmp1293 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1293->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1293->refCount.value = 1;
                panda$core$String* $tmp1295 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) field1274.value));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1293, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) field1274.value).position, ((panda$core$Object*) $tmp1295), ((panda$collections$ListView*) children1279));
                panda$collections$Array$add$panda$collections$Array$T(fields1268, ((panda$core$Object*) $tmp1293));
            }
            goto $l1285;
            $l1286:;
        }
        }
        org$pandalanguage$pandac$parser$Token$nullable $tmp1297 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 104 }), &$s1296);
        if (((panda$core$Bit) { !$tmp1297.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp1299 = (panda$collections$Array*) malloc(40);
    $tmp1299->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1299->refCount.value = 1;
    panda$collections$Array$init($tmp1299);
    children1298 = $tmp1299;
    panda$collections$Array$add$panda$collections$Array$T(children1298, ((panda$core$Object*) p_doccomment));
    org$pandalanguage$pandac$ASTNode* $tmp1301 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1301->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1301->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1301, ((panda$core$Int64) { 159 }), ((org$pandalanguage$pandac$parser$Token) name1265.value).position, ((panda$collections$ListView*) fields1268));
    panda$collections$Array$add$panda$collections$Array$T(children1298, ((panda$core$Object*) $tmp1301));
    org$pandalanguage$pandac$ASTNode* $tmp1303 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1303->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1303->refCount.value = 1;
    panda$core$String* $tmp1305 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1265.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1303, ((panda$core$Int64) { 156 }), ((org$pandalanguage$pandac$parser$Token) name1265.value).position, ((panda$core$Object*) $tmp1305), ((panda$collections$ListView*) children1298));
    return $tmp1303;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, org$pandalanguage$pandac$ASTNode* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1306;
    org$pandalanguage$pandac$parser$Token$nullable name1309;
    panda$collections$Array* members1314;
    org$pandalanguage$pandac$ASTNode* dc1317;
    org$pandalanguage$pandac$Position $tmp1320;
    org$pandalanguage$pandac$parser$Token next1323;
    org$pandalanguage$pandac$ASTNode* c1332;
    org$pandalanguage$pandac$Position $tmp1336;
    org$pandalanguage$pandac$ASTNode* a1337;
    org$pandalanguage$pandac$Position $tmp1340;
    org$pandalanguage$pandac$parser$Token next1345;
    org$pandalanguage$pandac$ASTNode* decl1367;
    org$pandalanguage$pandac$Position $tmp1371;
    org$pandalanguage$pandac$Position $tmp1374;
    org$pandalanguage$pandac$ASTNode* decl1377;
    org$pandalanguage$pandac$Position $tmp1381;
    org$pandalanguage$pandac$Position $tmp1384;
    org$pandalanguage$pandac$ASTNode* decl1387;
    org$pandalanguage$pandac$Position $tmp1391;
    org$pandalanguage$pandac$Position $tmp1394;
    org$pandalanguage$pandac$ASTNode* decl1397;
    org$pandalanguage$pandac$Position $tmp1401;
    org$pandalanguage$pandac$Position $tmp1404;
    org$pandalanguage$pandac$ASTNode* decl1407;
    org$pandalanguage$pandac$Position $tmp1411;
    org$pandalanguage$pandac$Position $tmp1414;
    panda$collections$Array* children1418;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1308 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 19 }), &$s1307);
    start1306 = $tmp1308;
    if (((panda$core$Bit) { !start1306.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1311 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1310);
    name1309 = $tmp1311;
    if (((panda$core$Bit) { !name1309.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1313 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1312);
    if (((panda$core$Bit) { !$tmp1313.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1315 = (panda$collections$Array*) malloc(40);
    $tmp1315->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1315->refCount.value = 1;
    panda$collections$Array$init($tmp1315);
    members1314 = $tmp1315;
    org$pandalanguage$pandac$ASTNode* $tmp1318 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1318->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1318->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1320);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1318, ((panda$core$Int64) { 138 }), $tmp1320);
    dc1317 = $tmp1318;
    $l1321:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1324 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1323 = $tmp1324;
        switch (next1323.kind.value) {
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
                goto $l1322;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1325 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1317->kind, ((panda$core$Int64) { 138 }));
                if ($tmp1325.value) {
                {
                    panda$core$String* $tmp1327 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1323);
                    panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1326, $tmp1327);
                    panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, &$s1329);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1323, $tmp1330);
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1331 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1317 = $tmp1331;
            }
            break;
            case 48:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1333 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1317);
                c1332 = $tmp1333;
                if (((panda$core$Bit) { c1332 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1314, ((panda$core$Object*) c1332));
                org$pandalanguage$pandac$ASTNode* $tmp1334 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1334->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1334->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1336);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1334, ((panda$core$Int64) { 138 }), $tmp1336);
                dc1317 = $tmp1334;
            }
            break;
            default:
            {
                goto $l1322;
            }
        }
    }
    }
    $l1322:;
    org$pandalanguage$pandac$ASTNode* $tmp1338 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1338->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1338->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1340);
    panda$collections$Array* $tmp1341 = (panda$collections$Array*) malloc(40);
    $tmp1341->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1341->refCount.value = 1;
    panda$collections$Array$init($tmp1341);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1338, ((panda$core$Int64) { 144 }), $tmp1340, ((panda$collections$ListView*) $tmp1341));
    a1337 = $tmp1338;
    $l1343:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1346 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1345 = $tmp1346;
        switch (next1345.kind.value) {
            case 13:
            {
                panda$core$Int64 $tmp1347 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1337->children);
                panda$core$Bit $tmp1348 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1347, ((panda$core$Int64) { 0 }));
                if ($tmp1348.value) {
                {
                    panda$core$String* $tmp1350 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1345);
                    panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1349, $tmp1350);
                    panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1352);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1345, $tmp1353);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1354 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
                a1337 = $tmp1354;
            }
            break;
            case 11:
            {
                panda$core$Bit $tmp1356 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1317->kind, ((panda$core$Int64) { 138 }));
                bool $tmp1355 = $tmp1356.value;
                if ($tmp1355) goto $l1357;
                panda$core$Int64 $tmp1358 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1337->children);
                panda$core$Bit $tmp1359 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1358, ((panda$core$Int64) { 0 }));
                $tmp1355 = $tmp1359.value;
                $l1357:;
                panda$core$Bit $tmp1360 = { $tmp1355 };
                if ($tmp1360.value) {
                {
                    panda$core$String* $tmp1362 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1345);
                    panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1361, $tmp1362);
                    panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1364);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1345, $tmp1365);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1366 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1317 = $tmp1366;
            }
            break;
            case 17:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1368 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1317, a1337);
                decl1367 = $tmp1368;
                if (((panda$core$Bit) { decl1367 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1314, ((panda$core$Object*) decl1367));
                org$pandalanguage$pandac$ASTNode* $tmp1369 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1369->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1369->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1371);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1369, ((panda$core$Int64) { 138 }), $tmp1371);
                dc1317 = $tmp1369;
                org$pandalanguage$pandac$ASTNode* $tmp1372 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1372->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1372->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1374);
                panda$collections$Array* $tmp1375 = (panda$collections$Array*) malloc(40);
                $tmp1375->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1375->refCount.value = 1;
                panda$collections$Array$init($tmp1375);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1372, ((panda$core$Int64) { 144 }), $tmp1374, ((panda$collections$ListView*) $tmp1375));
                a1337 = $tmp1372;
            }
            break;
            case 18:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1378 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1317, a1337);
                decl1377 = $tmp1378;
                if (((panda$core$Bit) { decl1377 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1314, ((panda$core$Object*) decl1377));
                org$pandalanguage$pandac$ASTNode* $tmp1379 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1379->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1379->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1381);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1379, ((panda$core$Int64) { 138 }), $tmp1381);
                dc1317 = $tmp1379;
                org$pandalanguage$pandac$ASTNode* $tmp1382 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1382->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1382->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1384);
                panda$collections$Array* $tmp1385 = (panda$collections$Array*) malloc(40);
                $tmp1385->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1385->refCount.value = 1;
                panda$collections$Array$init($tmp1385);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1382, ((panda$core$Int64) { 144 }), $tmp1384, ((panda$collections$ListView*) $tmp1385));
                a1337 = $tmp1382;
            }
            break;
            case 19:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1388 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1317, a1337);
                decl1387 = $tmp1388;
                if (((panda$core$Bit) { decl1387 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1314, ((panda$core$Object*) decl1387));
                org$pandalanguage$pandac$ASTNode* $tmp1389 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1389->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1389->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1391);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1389, ((panda$core$Int64) { 138 }), $tmp1391);
                dc1317 = $tmp1389;
                org$pandalanguage$pandac$ASTNode* $tmp1392 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1392->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1392->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1394);
                panda$collections$Array* $tmp1395 = (panda$collections$Array*) malloc(40);
                $tmp1395->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1395->refCount.value = 1;
                panda$collections$Array$init($tmp1395);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1392, ((panda$core$Int64) { 144 }), $tmp1394, ((panda$collections$ListView*) $tmp1395));
                a1337 = $tmp1392;
            }
            break;
            case 21:
            case 20:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1398 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1317, a1337);
                decl1397 = $tmp1398;
                if (((panda$core$Bit) { decl1397 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1314, ((panda$core$Object*) decl1397));
                org$pandalanguage$pandac$ASTNode* $tmp1399 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1399->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1399->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1401);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1399, ((panda$core$Int64) { 138 }), $tmp1401);
                dc1317 = $tmp1399;
                org$pandalanguage$pandac$ASTNode* $tmp1402 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1402->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1402->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1404);
                panda$collections$Array* $tmp1405 = (panda$collections$Array*) malloc(40);
                $tmp1405->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1405->refCount.value = 1;
                panda$collections$Array$init($tmp1405);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1402, ((panda$core$Int64) { 144 }), $tmp1404, ((panda$collections$ListView*) $tmp1405));
                a1337 = $tmp1402;
            }
            break;
            case 23:
            case 24:
            case 25:
            case 26:
            {
                org$pandalanguage$pandac$ASTNode* $tmp1408 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1317, a1337);
                decl1407 = $tmp1408;
                if (((panda$core$Bit) { decl1407 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1314, ((panda$core$Object*) decl1407));
                org$pandalanguage$pandac$ASTNode* $tmp1409 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1409->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1409->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1411);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1409, ((panda$core$Int64) { 138 }), $tmp1411);
                dc1317 = $tmp1409;
                org$pandalanguage$pandac$ASTNode* $tmp1412 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1412->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1412->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1414);
                panda$collections$Array* $tmp1415 = (panda$collections$Array*) malloc(40);
                $tmp1415->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1415->refCount.value = 1;
                panda$collections$Array$init($tmp1415);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1412, ((panda$core$Int64) { 144 }), $tmp1414, ((panda$collections$ListView*) $tmp1415));
                a1337 = $tmp1412;
            }
            break;
            case 100:
            {
                org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }), &$s1417);
                goto $l1344;
            }
            break;
        }
    }
    }
    $l1344:;
    panda$collections$Array* $tmp1419 = (panda$collections$Array*) malloc(40);
    $tmp1419->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1419->refCount.value = 1;
    panda$collections$Array$init($tmp1419);
    children1418 = $tmp1419;
    panda$collections$Array$add$panda$collections$Array$T(children1418, ((panda$core$Object*) p_choiceDoccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1418, ((panda$core$Object*) p_choiceAnnotations));
    org$pandalanguage$pandac$ASTNode* $tmp1421 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1421->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1421->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1421, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1306.value).position, ((panda$collections$ListView*) members1314));
    panda$collections$Array$add$panda$collections$Array$T(children1418, ((panda$core$Object*) $tmp1421));
    org$pandalanguage$pandac$ASTNode* $tmp1423 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1423->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1423->refCount.value = 1;
    panda$core$String* $tmp1425 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1309.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1423, ((panda$core$Int64) { 155 }), ((org$pandalanguage$pandac$parser$Token) start1306.value).position, ((panda$core$Object*) $tmp1425), ((panda$collections$ListView*) children1418));
    return $tmp1423;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1426;
    org$pandalanguage$pandac$ASTNode* dc1428;
    org$pandalanguage$pandac$Position $tmp1433;
    org$pandalanguage$pandac$ASTNode* a1434;
    org$pandalanguage$pandac$parser$Token $tmp1427 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start1426 = $tmp1427;
    panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1426.kind, ((panda$core$Int64) { 11 }));
    if ($tmp1429.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1430 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
        dc1428 = $tmp1430;
        if (((panda$core$Bit) { dc1428 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1431 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1431->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1431->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1433);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1431, ((panda$core$Int64) { 138 }), $tmp1433);
        dc1428 = $tmp1431;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1435 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
    a1434 = $tmp1435;
    if (((panda$core$Bit) { a1434 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1436 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1436.kind.value) {
        case 17:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1437 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1428, a1434);
            return $tmp1437;
        }
        break;
        case 18:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1438 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1428, a1434);
            return $tmp1438;
        }
        break;
        case 19:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1439 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1428, a1434);
            return $tmp1439;
        }
        break;
        case 21:
        case 20:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1440 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1428, a1434);
            return $tmp1440;
        }
        break;
        case 22:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1441 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1428, a1434);
            return $tmp1441;
        }
        break;
        case 23:
        case 24:
        case 25:
        case 26:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1442 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1428, a1434);
            return $tmp1442;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1443);
            return NULL;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1444;
    org$pandalanguage$pandac$parser$Token$nullable start1447;
    org$pandalanguage$pandac$parser$Token$nullable name1450;
    org$pandalanguage$pandac$ASTNode* generics1455;
    org$pandalanguage$pandac$Position $tmp1459;
    org$pandalanguage$pandac$ASTNode* stypes1462;
    org$pandalanguage$pandac$Position $tmp1466;
    panda$collections$Array* members1469;
    org$pandalanguage$pandac$ASTNode* member1475;
    panda$collections$Array* $tmp1445 = (panda$collections$Array*) malloc(40);
    $tmp1445->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1445->refCount.value = 1;
    panda$collections$Array$init($tmp1445);
    children1444 = $tmp1445;
    panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1449 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 17 }), &$s1448);
    start1447 = $tmp1449;
    if (((panda$core$Bit) { !start1447.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1452 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1451);
    name1450 = $tmp1452;
    if (((panda$core$Bit) { !name1450.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1453 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1453.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1454.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1456 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1455 = $tmp1456;
        if (((panda$core$Bit) { generics1455 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) generics1455));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1457 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1457->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1457->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1459);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1457, ((panda$core$Int64) { 138 }), $tmp1459);
        panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) $tmp1457));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1460 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1460.kind, ((panda$core$Int64) { 95 }));
    if ($tmp1461.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1463 = org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(self);
        stypes1462 = $tmp1463;
        if (((panda$core$Bit) { stypes1462 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) stypes1462));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1464 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1464->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1464->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1466);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1464, ((panda$core$Int64) { 139 }), $tmp1466);
        panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) $tmp1464));
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1468 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1467);
    if (((panda$core$Bit) { !$tmp1468.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1470 = (panda$collections$Array*) malloc(40);
    $tmp1470->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1470->refCount.value = 1;
    panda$collections$Array$init($tmp1470);
    members1469 = $tmp1470;
    $l1472:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1474 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1474.nonnull }).value) goto $l1473;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1476 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1475 = $tmp1476;
        if (((panda$core$Bit) { member1475 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1469, ((panda$core$Object*) member1475));
    }
    goto $l1472;
    $l1473:;
    org$pandalanguage$pandac$ASTNode* $tmp1477 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1477->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1477, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1447.value).position, ((panda$collections$ListView*) members1469));
    panda$collections$Array$add$panda$collections$Array$T(children1444, ((panda$core$Object*) $tmp1477));
    org$pandalanguage$pandac$ASTNode* $tmp1479 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1479->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1479->refCount.value = 1;
    panda$core$String* $tmp1481 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1450.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1479, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start1447.value).position, ((panda$core$Object*) $tmp1481), ((panda$collections$ListView*) children1444));
    return $tmp1479;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children1482;
    org$pandalanguage$pandac$parser$Token$nullable start1485;
    org$pandalanguage$pandac$parser$Token$nullable name1488;
    org$pandalanguage$pandac$ASTNode* generics1493;
    org$pandalanguage$pandac$Position $tmp1497;
    panda$collections$Array* intfs1498;
    org$pandalanguage$pandac$ASTNode* t1502;
    panda$collections$Array* members1512;
    org$pandalanguage$pandac$ASTNode* member1518;
    panda$collections$Array* $tmp1483 = (panda$collections$Array*) malloc(40);
    $tmp1483->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1483->refCount.value = 1;
    panda$collections$Array$init($tmp1483);
    children1482 = $tmp1483;
    panda$collections$Array$add$panda$collections$Array$T(children1482, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1482, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1487 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 18 }), &$s1486);
    start1485 = $tmp1487;
    if (((panda$core$Bit) { !start1485.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$nullable $tmp1490 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 48 }), &$s1489);
    name1488 = $tmp1490;
    if (((panda$core$Bit) { !name1488.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1491 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1491.kind, ((panda$core$Int64) { 62 }));
    if ($tmp1492.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1494 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics1493 = $tmp1494;
        if (((panda$core$Bit) { generics1493 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1482, ((panda$core$Object*) generics1493));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1495 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1495->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1495->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1497);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1495, ((panda$core$Int64) { 138 }), $tmp1497);
        panda$collections$Array$add$panda$collections$Array$T(children1482, ((panda$core$Object*) $tmp1495));
    }
    }
    panda$collections$Array* $tmp1499 = (panda$collections$Array*) malloc(40);
    $tmp1499->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1499->refCount.value = 1;
    panda$collections$Array$init($tmp1499);
    intfs1498 = $tmp1499;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1501 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 95 }));
    if (((panda$core$Bit) { $tmp1501.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1503 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1502 = $tmp1503;
        if (((panda$core$Bit) { t1502 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1498, ((panda$core$Object*) t1502));
        $l1504:;
        org$pandalanguage$pandac$parser$Token$nullable $tmp1506 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 105 }));
        if (!((panda$core$Bit) { $tmp1506.nonnull }).value) goto $l1505;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1507 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1502 = $tmp1507;
            if (((panda$core$Bit) { t1502 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1498, ((panda$core$Object*) t1502));
        }
        goto $l1504;
        $l1505:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1508 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1508->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1508->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1508, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1485.value).position, ((panda$collections$ListView*) intfs1498));
    panda$collections$Array$add$panda$collections$Array$T(children1482, ((panda$core$Object*) $tmp1508));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1511 = org$pandalanguage$pandac$parser$Parser$expect$panda$core$Int64$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 99 }), &$s1510);
    if (((panda$core$Bit) { !$tmp1511.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1513 = (panda$collections$Array*) malloc(40);
    $tmp1513->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1513->refCount.value = 1;
    panda$collections$Array$init($tmp1513);
    members1512 = $tmp1513;
    $l1515:;
    org$pandalanguage$pandac$parser$Token$nullable $tmp1517 = org$pandalanguage$pandac$parser$Parser$checkNext$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$Q(self, ((panda$core$Int64) { 100 }));
    if (!((panda$core$Bit) { !$tmp1517.nonnull }).value) goto $l1516;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1519 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1518 = $tmp1519;
        if (((panda$core$Bit) { member1518 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1512, ((panda$core$Object*) member1518));
    }
    goto $l1515;
    $l1516:;
    org$pandalanguage$pandac$ASTNode* $tmp1520 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1520->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1520->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1520, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1485.value).position, ((panda$collections$ListView*) members1512));
    panda$collections$Array$add$panda$collections$Array$T(children1482, ((panda$core$Object*) $tmp1520));
    org$pandalanguage$pandac$ASTNode* $tmp1522 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1522->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1522->refCount.value = 1;
    panda$core$String* $tmp1524 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1488.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1522, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start1485.value).position, ((panda$core$Object*) $tmp1524), ((panda$collections$ListView*) children1482));
    return $tmp1522;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $tmp1525 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    switch ($tmp1525.kind.value) {
        case 15:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1526 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1526;
        }
        break;
        case 14:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1527 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1527;
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
            org$pandalanguage$pandac$ASTNode* $tmp1528 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1528;
        }
        break;
        default:
        {
            org$pandalanguage$pandac$ASTNode* $tmp1529 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1529;
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries1530;
    org$pandalanguage$pandac$ASTNode* entry1537;
    org$pandalanguage$pandac$Position $tmp1542;
    panda$collections$Array* $tmp1531 = (panda$collections$Array*) malloc(40);
    $tmp1531->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1531->refCount.value = 1;
    panda$collections$Array$init($tmp1531);
    entries1530 = $tmp1531;
    $l1533:;
    org$pandalanguage$pandac$parser$Token $tmp1535 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1536 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1535.kind, ((panda$core$Int64) { 0 }));
    if (!$tmp1536.value) goto $l1534;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1538 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry1537 = $tmp1538;
        if (((panda$core$Bit) { entry1537 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp1539 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp1539.value);
        panda$collections$Array$add$panda$collections$Array$T(entries1530, ((panda$core$Object*) entry1537));
    }
    goto $l1533;
    $l1534:;
    org$pandalanguage$pandac$ASTNode* $tmp1540 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1540->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1540->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp1542, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1540, ((panda$core$Int64) { 152 }), $tmp1542, ((panda$collections$ListView*) entries1530));
    return $tmp1540;
}

