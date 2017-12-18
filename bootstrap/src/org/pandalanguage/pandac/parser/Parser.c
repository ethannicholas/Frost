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
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
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


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn68)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef panda$core$Object* (*$fn139)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn198)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn297)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 39, -3936732696845588807, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    org$pandalanguage$pandac$parser$Token$Kind* $match$54_1323;
    org$pandalanguage$pandac$parser$Token next28;
    org$pandalanguage$pandac$parser$Token$Kind* $match$60_2530;
    panda$core$Char8 $tmp33;
    org$pandalanguage$pandac$parser$Token next39;
    org$pandalanguage$pandac$parser$Token$Kind* $match$72_2541;
    $l19:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp22 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result21 = $tmp22;
        {
            $match$54_1323 = result21.kind;
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$54_1323->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp24.value) {
            {
                goto $l19;
            }
            }
            else {
            panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$54_1323->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp25.value) {
            {
                $l26:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp29 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next28 = $tmp29;
                    {
                        $match$60_2530 = next28.kind;
                        panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$60_2530->$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp31.value) {
                        {
                            panda$core$String* $tmp32 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next28);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp33, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp34 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp32, $tmp33);
                            if ($tmp34.value) {
                            {
                                goto $l19;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$60_2530->$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp35.value) {
                        {
                            return next28;
                        }
                        }
                        }
                    }
                }
                }
                $l27:;
            }
            }
            else {
            panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$54_1323->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp36.value) {
            {
                $l37:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp40 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next39 = $tmp40;
                    {
                        $match$72_2541 = next39.kind;
                        panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_2541->$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp42.value) {
                        {
                            goto $l19;
                        }
                        }
                        else {
                        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_2541->$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp43.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result21, &$s44);
                            return next39;
                        }
                        }
                        }
                    }
                }
                }
                $l38:;
            }
            }
            else {
            {
                return result21;
            }
            }
            }
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
    panda$core$Int64 $tmp45 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp45, ((panda$core$Int64) { 0 }));
    if ($tmp46.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp47 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp47);
    }
    }
    panda$core$Int64 $tmp48 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp49 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp48, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp50 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp49);
    return $tmp50;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind* p_kind) {
    org$pandalanguage$pandac$parser$Token result51;
    org$pandalanguage$pandac$parser$Token $tmp52 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result51 = $tmp52;
    panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result51.kind->$rawValue, p_kind->$rawValue);
    if ($tmp53.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result51, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result51);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind* p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result54;
    org$pandalanguage$pandac$parser$Token $tmp55 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result54 = $tmp55;
    panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result54.kind->$rawValue, p_kind->$rawValue);
    if ($tmp56.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result54, true });
    }
    }
    panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s57, p_expected);
    panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
    panda$core$String* $tmp61 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result54);
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, $tmp61);
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result54, $tmp64);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp65 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp65.value) {
    {
        ITable* $tmp66 = self->errors->$class->itable;
        while ($tmp66->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp66 = $tmp66->next;
        }
        $fn68 $tmp67 = $tmp66->methods[0];
        $tmp67(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp69.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp70;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp71 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp72 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp71, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp70, $tmp72, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp74 = $tmp70.start.value;
    panda$core$Int64 i73 = { $tmp74 };
    int64_t $tmp76 = $tmp70.end.value;
    int64_t $tmp77 = $tmp70.step.value;
    bool $tmp78 = $tmp70.inclusive.value;
    bool $tmp85 = $tmp77 > 0;
    if ($tmp85) goto $l83; else goto $l84;
    $l83:;
    if ($tmp78) goto $l86; else goto $l87;
    $l86:;
    if ($tmp74 <= $tmp76) goto $l79; else goto $l81;
    $l87:;
    if ($tmp74 < $tmp76) goto $l79; else goto $l81;
    $l84:;
    if ($tmp78) goto $l88; else goto $l89;
    $l88:;
    if ($tmp74 >= $tmp76) goto $l79; else goto $l81;
    $l89:;
    if ($tmp74 > $tmp76) goto $l79; else goto $l81;
    $l79:;
    {
        org$pandalanguage$pandac$parser$Token $tmp91 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i73);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp91);
    }
    $l82:;
    if ($tmp85) goto $l93; else goto $l94;
    $l93:;
    int64_t $tmp95 = $tmp76 - i73.value;
    if ($tmp78) goto $l96; else goto $l97;
    $l96:;
    if ((uint64_t) $tmp95 >= $tmp77) goto $l92; else goto $l81;
    $l97:;
    if ((uint64_t) $tmp95 > $tmp77) goto $l92; else goto $l81;
    $l94:;
    int64_t $tmp99 = i73.value - $tmp76;
    if ($tmp78) goto $l100; else goto $l101;
    $l100:;
    if ((uint64_t) $tmp99 >= -$tmp77) goto $l92; else goto $l81;
    $l101:;
    if ((uint64_t) $tmp99 > -$tmp77) goto $l92; else goto $l81;
    $l92:;
    i73.value += $tmp77;
    goto $l79;
    $l81:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp103;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp103, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp104 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp103);
    return $tmp104;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    panda$collections$Array* children105;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    panda$collections$Array* $tmp106 = (panda$collections$Array*) malloc(40);
    $tmp106->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp106->refCount.value = 1;
    panda$collections$Array$init($tmp106);
    children105 = $tmp106;
    panda$collections$Array$add$panda$collections$Array$T(children105, ((panda$core$Object*) p_string));
    panda$collections$Array$add$panda$collections$Array$T(children105, ((panda$core$Object*) p_chunk));
    org$pandalanguage$pandac$ASTNode* $tmp108 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp108->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp110 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp110->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp110->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp110, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp108, ((panda$core$Int64) { 103 }), p_string->position, ((panda$core$Object*) $tmp110), ((panda$collections$ListView*) children105));
    return $tmp108;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result112;
    org$pandalanguage$pandac$parser$Token token117;
    org$pandalanguage$pandac$parser$Token$Kind* $match$157_13119;
    panda$core$String* str121;
    panda$core$Char8 $tmp123;
    org$pandalanguage$pandac$parser$Token escape129;
    panda$core$String* escapeText133;
    panda$core$Char8 c135;
    panda$core$Char8 $match$176_21141;
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
    panda$core$Char8 $tmp159;
    panda$core$Char8 $tmp160;
    panda$core$Char8 $tmp162;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp164;
    panda$core$MutableString* $tmp113 = (panda$core$MutableString*) malloc(48);
    $tmp113->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp113->refCount.value = 1;
    panda$core$MutableString$init($tmp113);
    result112 = $tmp113;
    $l115:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp118 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token117 = $tmp118;
        {
            $match$157_13119 = token117.kind;
            panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13119->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp120.value) {
            {
                panda$core$String* $tmp122 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token117);
                str121 = $tmp122;
                panda$core$Char8$init$panda$core$UInt8(&$tmp123, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp124 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str121, $tmp123);
                if ($tmp124.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token117, &$s125);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result112, str121);
            }
            }
            else {
            panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13119->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp126.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token117, &$s127);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13119->$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp128.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp130 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape129 = $tmp130;
                panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape129.kind->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp131.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token117, &$s132);
                    return NULL;
                }
                }
                panda$core$String* $tmp134 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape129);
                escapeText133 = $tmp134;
                panda$collections$ListView* $tmp136 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText133);
                ITable* $tmp137 = $tmp136->$class->itable;
                while ($tmp137->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp137 = $tmp137->next;
                }
                $fn139 $tmp138 = $tmp137->methods[0];
                panda$core$Object* $tmp140 = $tmp138($tmp136, ((panda$core$Int64) { 0 }));
                c135 = ((panda$core$Char8$wrapper*) $tmp140)->value;
                {
                    $match$176_21141 = c135;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp143 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21141, $tmp142);
                    if ($tmp143.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp144, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result112, $tmp144);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp145, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp146 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21141, $tmp145);
                    if ($tmp146.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result112, $tmp147);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp148, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp149 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21141, $tmp148);
                    if ($tmp149.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp150, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result112, $tmp150);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp152 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21141, $tmp151);
                    if ($tmp152.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp153, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result112, $tmp153);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp154, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp155 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21141, $tmp154);
                    if ($tmp155.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp156, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result112, $tmp156);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp157, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp158 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21141, $tmp157);
                    if ($tmp158.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp159, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result112, $tmp159);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp160, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp161 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21141, $tmp160);
                    if ($tmp161.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp162, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result112, $tmp162);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token117, &$s163);
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
                panda$core$String$Index $tmp165 = panda$core$String$start$R$panda$core$String$Index(escapeText133);
                panda$core$String$Index $tmp166 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText133, $tmp165);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp164, ((panda$core$String$Index$nullable) { $tmp166, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp167 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText133, $tmp164);
                panda$core$MutableString$append$panda$core$String(result112, $tmp167);
            }
            }
            else {
            panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13119->$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp168.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token117);
                panda$core$String* $tmp169 = panda$core$MutableString$finish$R$panda$core$String(result112);
                return $tmp169;
            }
            }
            else {
            {
                panda$core$String* $tmp170 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token117);
                panda$core$MutableString$append$panda$core$String(result112, $tmp170);
            }
            }
            }
            }
            }
        }
    }
    }
    $l116:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result171;
    org$pandalanguage$pandac$parser$Token token176;
    org$pandalanguage$pandac$parser$Token$Kind* $match$202_13178;
    panda$core$String* str180;
    panda$core$Char8 $tmp182;
    org$pandalanguage$pandac$parser$Token escape188;
    panda$core$String* escapeText192;
    panda$core$Char8 c194;
    panda$core$Char8 $match$221_21200;
    panda$core$Char8 $tmp201;
    panda$core$Char8 $tmp203;
    panda$core$Char8 $tmp204;
    panda$core$Char8 $tmp206;
    panda$core$Char8 $tmp207;
    panda$core$Char8 $tmp209;
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
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp226;
    panda$core$MutableString* $tmp172 = (panda$core$MutableString*) malloc(48);
    $tmp172->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp172->refCount.value = 1;
    panda$core$MutableString$init($tmp172);
    result171 = $tmp172;
    $l174:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp177 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token176 = $tmp177;
        {
            $match$202_13178 = token176.kind;
            panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13178->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp179.value) {
            {
                panda$core$String* $tmp181 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token176);
                str180 = $tmp181;
                panda$core$Char8$init$panda$core$UInt8(&$tmp182, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp183 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str180, $tmp182);
                if ($tmp183.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token176, &$s184);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result171, str180);
            }
            }
            else {
            panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13178->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp185.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token176, &$s186);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13178->$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp187.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp189 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape188 = $tmp189;
                panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape188.kind->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp190.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token176, &$s191);
                    return NULL;
                }
                }
                panda$core$String* $tmp193 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape188);
                escapeText192 = $tmp193;
                panda$collections$ListView* $tmp195 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText192);
                ITable* $tmp196 = $tmp195->$class->itable;
                while ($tmp196->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp196 = $tmp196->next;
                }
                $fn198 $tmp197 = $tmp196->methods[0];
                panda$core$Object* $tmp199 = $tmp197($tmp195, ((panda$core$Int64) { 0 }));
                c194 = ((panda$core$Char8$wrapper*) $tmp199)->value;
                {
                    $match$221_21200 = c194;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp201, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp202 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp201);
                    if ($tmp202.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp203, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp203);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp204, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp205 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp204);
                    if ($tmp205.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp206, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp206);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp207, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp208 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp207);
                    if ($tmp208.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp209, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp209);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp211 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp210);
                    if ($tmp211.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp212, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp212);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp214 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp213);
                    if ($tmp214.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp215, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp215);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp217 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp216);
                    if ($tmp217.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp218);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp220 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp219);
                    if ($tmp220.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp221);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp223 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp222);
                    if ($tmp223.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp224);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token176, &$s225);
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
                panda$core$String$Index $tmp227 = panda$core$String$start$R$panda$core$String$Index(escapeText192);
                panda$core$String$Index $tmp228 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText192, $tmp227);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp226, ((panda$core$String$Index$nullable) { $tmp228, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp229 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText192, $tmp226);
                panda$core$MutableString$append$panda$core$String(result171, $tmp229);
            }
            }
            else {
            panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13178->$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp230.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token176);
                panda$core$String* $tmp231 = panda$core$MutableString$finish$R$panda$core$String(result171);
                return $tmp231;
            }
            }
            else {
            panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13178->$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp232.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token176);
                panda$core$String* $tmp233 = panda$core$MutableString$finish$R$panda$core$String(result171);
                return $tmp233;
            }
            }
            else {
            {
                panda$core$String* $tmp234 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token176);
                panda$core$MutableString$append$panda$core$String(result171, $tmp234);
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l175:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$collections$Array* dotChildren235;
    org$pandalanguage$pandac$ASTNode* dot238;
    panda$collections$Array* callChildren242;
    org$pandalanguage$pandac$ASTNode* call245;
    panda$collections$Array* castChildren248;
    panda$collections$Array* $tmp236 = (panda$collections$Array*) malloc(40);
    $tmp236->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp236->refCount.value = 1;
    panda$collections$Array$init($tmp236);
    dotChildren235 = $tmp236;
    panda$collections$Array$add$panda$collections$Array$T(dotChildren235, ((panda$core$Object*) p_expr));
    org$pandalanguage$pandac$ASTNode* $tmp239 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp239->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp239->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp239, ((panda$core$Int64) { 108 }), p_expr->position, ((panda$core$Object*) &$s241), ((panda$collections$ListView*) dotChildren235));
    dot238 = $tmp239;
    panda$collections$Array* $tmp243 = (panda$collections$Array*) malloc(40);
    $tmp243->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp243->refCount.value = 1;
    panda$collections$Array$init($tmp243);
    callChildren242 = $tmp243;
    panda$collections$Array$add$panda$collections$Array$T(callChildren242, ((panda$core$Object*) dot238));
    org$pandalanguage$pandac$ASTNode* $tmp246 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp246->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp246->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp246, ((panda$core$Int64) { 107 }), p_expr->position, ((panda$collections$ListView*) callChildren242));
    call245 = $tmp246;
    panda$collections$Array* $tmp249 = (panda$collections$Array*) malloc(40);
    $tmp249->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp249->refCount.value = 1;
    panda$collections$Array$init($tmp249);
    castChildren248 = $tmp249;
    panda$collections$Array$add$panda$collections$Array$T(castChildren248, ((panda$core$Object*) call245));
    org$pandalanguage$pandac$ASTNode* $tmp251 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp251->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp251->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp251, ((panda$core$Int64) { 109 }), p_expr->position, &$s253);
    panda$collections$Array$add$panda$collections$Array$T(castChildren248, ((panda$core$Object*) $tmp251));
    org$pandalanguage$pandac$ASTNode* $tmp254 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp254->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp254->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp254, ((panda$core$Int64) { 111 }), p_expr->position, ((panda$collections$ListView*) castChildren248));
    return $tmp254;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start256;
    org$pandalanguage$pandac$ASTNode* result268;
    panda$core$MutableString* chunk269;
    org$pandalanguage$pandac$parser$Token token274;
    org$pandalanguage$pandac$parser$Token$Kind* $match$276_13277;
    panda$core$String* str279;
    panda$core$Char8 $tmp281;
    org$pandalanguage$pandac$parser$Token escape287;
    panda$core$String* escapeText291;
    panda$core$Char8 c293;
    panda$core$Char8 $match$295_21299;
    panda$core$Char8 $tmp300;
    panda$core$Char8 $tmp302;
    panda$core$Char8 $tmp303;
    panda$core$Char8 $tmp305;
    panda$core$Char8 $tmp306;
    panda$core$Char8 $tmp308;
    panda$core$Char8 $tmp309;
    panda$core$Char8 $tmp311;
    panda$core$Char8 $tmp312;
    panda$core$Char8 $tmp314;
    panda$core$Char8 $tmp315;
    panda$core$Char8 $tmp317;
    panda$core$Char8 $tmp318;
    org$pandalanguage$pandac$ASTNode* expr320;
    panda$core$String* align322;
    panda$core$String* format323;
    panda$collections$Array* castChildren332;
    org$pandalanguage$pandac$ASTNode* cast338;
    panda$collections$Array* dotChildren341;
    org$pandalanguage$pandac$ASTNode* dot344;
    panda$collections$Array* callChildren348;
    panda$collections$Array* callTargetChildren360;
    org$pandalanguage$pandac$ASTNode* callTarget366;
    panda$collections$Array* callChildren370;
    panda$core$String* text377;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp392;
    org$pandalanguage$pandac$parser$Token $tmp257 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start256 = $tmp257;
    panda$core$Bit $tmp259 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start256.kind->$rawValue, ((panda$core$Int64) { 7 }));
    bool $tmp258 = $tmp259.value;
    if (!$tmp258) goto $l260;
    panda$core$Bit $tmp261 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start256.kind->$rawValue, ((panda$core$Int64) { 6 }));
    $tmp258 = $tmp261.value;
    $l260:;
    panda$core$Bit $tmp262 = { $tmp258 };
    if ($tmp262.value) {
    {
        panda$core$String* $tmp264 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start256);
        panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s263, $tmp264);
        panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s266);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start256, $tmp267);
        return NULL;
    }
    }
    result268 = NULL;
    panda$core$MutableString* $tmp270 = (panda$core$MutableString*) malloc(48);
    $tmp270->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp270->refCount.value = 1;
    panda$core$MutableString$init($tmp270);
    chunk269 = $tmp270;
    $l272:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp275 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token274 = $tmp275;
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token274.kind->$rawValue, start256.kind->$rawValue);
        if ($tmp276.value) {
        {
            goto $l273;
        }
        }
        {
            $match$276_13277 = token274.kind;
            panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13277->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp278.value) {
            {
                panda$core$String* $tmp280 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token274);
                str279 = $tmp280;
                panda$core$Char8$init$panda$core$UInt8(&$tmp281, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp282 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str279, $tmp281);
                if ($tmp282.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start256, &$s283);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk269, str279);
            }
            }
            else {
            panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13277->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp284.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start256, &$s285);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$276_13277->$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp286.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp288 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape287 = $tmp288;
                panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape287.kind->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp289.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start256, &$s290);
                    return NULL;
                }
                }
                panda$core$String* $tmp292 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape287);
                escapeText291 = $tmp292;
                panda$collections$ListView* $tmp294 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText291);
                ITable* $tmp295 = $tmp294->$class->itable;
                while ($tmp295->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp295 = $tmp295->next;
                }
                $fn297 $tmp296 = $tmp295->methods[0];
                panda$core$Object* $tmp298 = $tmp296($tmp294, ((panda$core$Int64) { 0 }));
                c293 = ((panda$core$Char8$wrapper*) $tmp298)->value;
                {
                    $match$295_21299 = c293;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp300, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp301 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21299, $tmp300);
                    if ($tmp301.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp302, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk269, $tmp302);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp303, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp304 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21299, $tmp303);
                    if ($tmp304.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp305, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk269, $tmp305);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp306, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp307 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21299, $tmp306);
                    if ($tmp307.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp308, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk269, $tmp308);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp309, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp310 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21299, $tmp309);
                    if ($tmp310.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp311, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk269, $tmp311);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp312, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp313 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21299, $tmp312);
                    if ($tmp313.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp314, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk269, $tmp314);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp316 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21299, $tmp315);
                    if ($tmp316.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk269, $tmp317);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp318, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp319 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$295_21299, $tmp318);
                    if ($tmp319.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp321 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr320 = $tmp321;
                            if (((panda$core$Bit) { expr320 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            align322 = NULL;
                            format323 = NULL;
                            org$pandalanguage$pandac$parser$Token$Kind* $tmp324 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                            $tmp324->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                            $tmp324->refCount.value = 1;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp324, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp326 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp324);
                            if (((panda$core$Bit) { $tmp326.nonnull }).value) {
                            {
                                panda$core$String* $tmp327 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start256);
                                align322 = $tmp327;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind* $tmp328 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                            $tmp328->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                            $tmp328->refCount.value = 1;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp328, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp330 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp328);
                            if (((panda$core$Bit) { $tmp330.nonnull }).value) {
                            {
                                panda$core$String* $tmp331 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start256);
                                format323 = $tmp331;
                                if (((panda$core$Bit) { format323 == NULL }).value) {
                                {
                                    return NULL;
                                }
                                }
                                panda$collections$Array* $tmp333 = (panda$collections$Array*) malloc(40);
                                $tmp333->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp333->refCount.value = 1;
                                panda$collections$Array$init($tmp333);
                                castChildren332 = $tmp333;
                                panda$collections$Array$add$panda$collections$Array$T(castChildren332, ((panda$core$Object*) expr320));
                                org$pandalanguage$pandac$ASTNode* $tmp335 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp335->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp335->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp335, ((panda$core$Int64) { 109 }), expr320->position, &$s337);
                                panda$collections$Array$add$panda$collections$Array$T(castChildren332, ((panda$core$Object*) $tmp335));
                                org$pandalanguage$pandac$ASTNode* $tmp339 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp339->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp339->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp339, ((panda$core$Int64) { 111 }), expr320->position, ((panda$collections$ListView*) castChildren332));
                                cast338 = $tmp339;
                                panda$collections$Array* $tmp342 = (panda$collections$Array*) malloc(40);
                                $tmp342->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp342->refCount.value = 1;
                                panda$collections$Array$init($tmp342);
                                dotChildren341 = $tmp342;
                                panda$collections$Array$add$panda$collections$Array$T(dotChildren341, ((panda$core$Object*) cast338));
                                org$pandalanguage$pandac$ASTNode* $tmp345 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp345->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp345->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp345, ((panda$core$Int64) { 108 }), expr320->position, ((panda$core$Object*) &$s347), ((panda$collections$ListView*) dotChildren341));
                                dot344 = $tmp345;
                                panda$collections$Array* $tmp349 = (panda$collections$Array*) malloc(40);
                                $tmp349->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp349->refCount.value = 1;
                                panda$collections$Array$init($tmp349);
                                callChildren348 = $tmp349;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren348, ((panda$core$Object*) dot344));
                                org$pandalanguage$pandac$ASTNode* $tmp351 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp351->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp351->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp351, ((panda$core$Int64) { 113 }), start256.position, format323);
                                panda$collections$Array$add$panda$collections$Array$T(callChildren348, ((panda$core$Object*) $tmp351));
                                org$pandalanguage$pandac$ASTNode* $tmp353 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp353->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp353->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp353, ((panda$core$Int64) { 107 }), expr320->position, ((panda$collections$ListView*) callChildren348));
                                expr320 = $tmp353;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind* $tmp355 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                            $tmp355->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                            $tmp355->refCount.value = 1;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp355, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp358 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp355, &$s357);
                            if (((panda$core$Bit) { !$tmp358.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            if (((panda$core$Bit) { align322 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format323 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp359 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr320);
                                    expr320 = $tmp359;
                                }
                                }
                                panda$collections$Array* $tmp361 = (panda$collections$Array*) malloc(40);
                                $tmp361->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp361->refCount.value = 1;
                                panda$collections$Array$init($tmp361);
                                callTargetChildren360 = $tmp361;
                                org$pandalanguage$pandac$ASTNode* $tmp363 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp363->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp363->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp363, ((panda$core$Int64) { 109 }), expr320->position, &$s365);
                                panda$collections$Array$add$panda$collections$Array$T(callTargetChildren360, ((panda$core$Object*) $tmp363));
                                org$pandalanguage$pandac$ASTNode* $tmp367 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp367->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp367->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp367, ((panda$core$Int64) { 108 }), expr320->position, ((panda$core$Object*) &$s369), ((panda$collections$ListView*) callTargetChildren360));
                                callTarget366 = $tmp367;
                                panda$collections$Array* $tmp371 = (panda$collections$Array*) malloc(40);
                                $tmp371->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp371->refCount.value = 1;
                                panda$collections$Array$init($tmp371);
                                callChildren370 = $tmp371;
                                panda$collections$Array$add$panda$collections$Array$T(callChildren370, ((panda$core$Object*) callTarget366));
                                panda$collections$Array$add$panda$collections$Array$T(callChildren370, ((panda$core$Object*) expr320));
                                org$pandalanguage$pandac$ASTNode* $tmp373 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp373->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp373->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp373, ((panda$core$Int64) { 113 }), start256.position, align322);
                                panda$collections$Array$add$panda$collections$Array$T(callChildren370, ((panda$core$Object*) $tmp373));
                                org$pandalanguage$pandac$ASTNode* $tmp375 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp375->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp375->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp375, ((panda$core$Int64) { 107 }), expr320->position, ((panda$collections$ListView*) callChildren370));
                                expr320 = $tmp375;
                            }
                            }
                            panda$core$String* $tmp378 = panda$core$MutableString$finish$R$panda$core$String(chunk269);
                            text377 = $tmp378;
                            panda$core$MutableString* $tmp379 = (panda$core$MutableString*) malloc(48);
                            $tmp379->$class = (panda$core$Class*) &panda$core$MutableString$class;
                            $tmp379->refCount.value = 1;
                            panda$core$MutableString$init($tmp379);
                            chunk269 = $tmp379;
                            panda$core$Bit $tmp383 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text377, &$s382);
                            bool $tmp381 = $tmp383.value;
                            if ($tmp381) goto $l384;
                            $tmp381 = ((panda$core$Bit) { result268 != NULL }).value;
                            $l384:;
                            panda$core$Bit $tmp385 = { $tmp381 };
                            if ($tmp385.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp386 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                                $tmp386->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp386->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp386, ((panda$core$Int64) { 113 }), start256.position, text377);
                                org$pandalanguage$pandac$ASTNode* $tmp388 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result268, $tmp386);
                                result268 = $tmp388;
                                org$pandalanguage$pandac$ASTNode* $tmp389 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result268, expr320);
                                result268 = $tmp389;
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp390 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr320);
                                result268 = $tmp390;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token274, &$s391);
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
                panda$core$String$Index $tmp393 = panda$core$String$start$R$panda$core$String$Index(escapeText291);
                panda$core$String$Index $tmp394 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText291, $tmp393);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp392, ((panda$core$String$Index$nullable) { $tmp394, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp395 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText291, $tmp392);
                panda$core$MutableString$append$panda$core$String(chunk269, $tmp395);
            }
            }
            else {
            {
                panda$core$String* $tmp396 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token274);
                panda$core$MutableString$append$panda$core$String(chunk269, $tmp396);
            }
            }
            }
            }
        }
    }
    }
    $l273:;
    org$pandalanguage$pandac$ASTNode* $tmp397 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp397->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp397->refCount.value = 1;
    panda$core$String* $tmp399 = panda$core$MutableString$finish$R$panda$core$String(chunk269);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp397, ((panda$core$Int64) { 113 }), start256.position, $tmp399);
    org$pandalanguage$pandac$ASTNode* $tmp400 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result268, $tmp397);
    return $tmp400;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t401;
    org$pandalanguage$pandac$parser$Token$Kind* $match$382_9403;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp417;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp424;
    org$pandalanguage$pandac$ASTNode* result454;
    org$pandalanguage$pandac$parser$Token $tmp402 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t401 = $tmp402;
    {
        $match$382_9403 = t401.kind;
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp404.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp405 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp405->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp405->refCount.value = 1;
            panda$core$String* $tmp407 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t401);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp405, ((panda$core$Int64) { 106 }), t401.position, $tmp407);
            return $tmp405;
        }
        }
        else {
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp408.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp409 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp409->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp409->refCount.value = 1;
            panda$core$String* $tmp411 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t401);
            panda$core$UInt64$nullable $tmp412 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp411);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp409, ((panda$core$Int64) { 102 }), t401.position, ((panda$core$UInt64) $tmp412.value));
            return $tmp409;
        }
        }
        else {
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp413.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp414 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp414->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp414->refCount.value = 1;
            panda$core$String* $tmp416 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t401);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp417, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp418 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp416, $tmp417);
            panda$core$UInt64$nullable $tmp419 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp418, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp414, ((panda$core$Int64) { 102 }), t401.position, ((panda$core$UInt64) $tmp419.value));
            return $tmp414;
        }
        }
        else {
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp420.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp421 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp421->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp421->refCount.value = 1;
            panda$core$String* $tmp423 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t401);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp424, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp425 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp423, $tmp424);
            panda$core$UInt64$nullable $tmp426 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp425, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp421, ((panda$core$Int64) { 102 }), t401.position, ((panda$core$UInt64) $tmp426.value));
            return $tmp421;
        }
        }
        else {
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp427.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp428 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp428->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp428->refCount.value = 1;
            panda$core$String* $tmp430 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t401);
            panda$core$Real64$nullable $tmp431 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp430);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp428, ((panda$core$Int64) { 157 }), t401.position, ((panda$core$Real64) $tmp431.value));
            return $tmp428;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp432.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp433 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp433->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp433->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp433, ((panda$core$Int64) { 114 }), t401.position);
            return $tmp433;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp435.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp436 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp436->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp436->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp436, ((panda$core$Int64) { 115 }), t401.position);
            return $tmp436;
        }
        }
        else {
        panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp438.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp439 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp439->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp439->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp439, ((panda$core$Int64) { 117 }), t401.position);
            return $tmp439;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp442 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp442->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp442->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp442, ((panda$core$Int64) { 116 }), t401.position, ((panda$core$Bit) { true }));
            return $tmp442;
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp444.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp445 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp445->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp445->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp445, ((panda$core$Int64) { 116 }), t401.position, ((panda$core$Bit) { false }));
            return $tmp445;
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp447 = $tmp448.value;
        if ($tmp447) goto $l449;
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 6 }));
        $tmp447 = $tmp450.value;
        $l449:;
        panda$core$Bit $tmp451 = { $tmp447 };
        if ($tmp451.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t401);
            org$pandalanguage$pandac$ASTNode* $tmp452 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp452;
        }
        }
        else {
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$382_9403->$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp453.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp455 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result454 = $tmp455;
            if (((panda$core$Bit) { result454 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind* $tmp456 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp456->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp456->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp456, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp459 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp456, &$s458);
            if (((panda$core$Bit) { !$tmp459.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result454;
        }
        }
        else {
        {
            panda$core$String* $tmp461 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t401);
            panda$core$String* $tmp462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s460, $tmp461);
            panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp462, &$s463);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t401, $tmp464);
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
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    panda$core$String* result465;
    switch (p_expr->kind.value) {
        case 106:
        {
            return ((panda$core$String*) p_expr->payload);
        }
        break;
        case 108:
        {
            panda$core$Object* $tmp466 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp467 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(((org$pandalanguage$pandac$ASTNode*) $tmp466));
            result465 = $tmp467;
            if (((panda$core$Bit) { result465 != NULL }).value) {
            {
                panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s468, ((panda$core$String*) p_expr->payload));
                panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result465, $tmp469);
                result465 = $tmp470;
            }
            }
            return result465;
        }
        break;
        default:
        {
            return NULL;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name471;
    org$pandalanguage$pandac$parser$Token$Kind* $match$444_9473;
    org$pandalanguage$pandac$parser$Token token561;
    org$pandalanguage$pandac$parser$Token $tmp472 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name471 = $tmp472;
    {
        $match$444_9473 = name471.kind;
        panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp494 = $tmp495.value;
        if ($tmp494) goto $l496;
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 51 }));
        $tmp494 = $tmp497.value;
        $l496:;
        panda$core$Bit $tmp498 = { $tmp494 };
        bool $tmp493 = $tmp498.value;
        if ($tmp493) goto $l499;
        panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 52 }));
        $tmp493 = $tmp500.value;
        $l499:;
        panda$core$Bit $tmp501 = { $tmp493 };
        bool $tmp492 = $tmp501.value;
        if ($tmp492) goto $l502;
        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 53 }));
        $tmp492 = $tmp503.value;
        $l502:;
        panda$core$Bit $tmp504 = { $tmp492 };
        bool $tmp491 = $tmp504.value;
        if ($tmp491) goto $l505;
        panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 54 }));
        $tmp491 = $tmp506.value;
        $l505:;
        panda$core$Bit $tmp507 = { $tmp491 };
        bool $tmp490 = $tmp507.value;
        if ($tmp490) goto $l508;
        panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 55 }));
        $tmp490 = $tmp509.value;
        $l508:;
        panda$core$Bit $tmp510 = { $tmp490 };
        bool $tmp489 = $tmp510.value;
        if ($tmp489) goto $l511;
        panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 57 }));
        $tmp489 = $tmp512.value;
        $l511:;
        panda$core$Bit $tmp513 = { $tmp489 };
        bool $tmp488 = $tmp513.value;
        if ($tmp488) goto $l514;
        panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 58 }));
        $tmp488 = $tmp515.value;
        $l514:;
        panda$core$Bit $tmp516 = { $tmp488 };
        bool $tmp487 = $tmp516.value;
        if ($tmp487) goto $l517;
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 59 }));
        $tmp487 = $tmp518.value;
        $l517:;
        panda$core$Bit $tmp519 = { $tmp487 };
        bool $tmp486 = $tmp519.value;
        if ($tmp486) goto $l520;
        panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 62 }));
        $tmp486 = $tmp521.value;
        $l520:;
        panda$core$Bit $tmp522 = { $tmp486 };
        bool $tmp485 = $tmp522.value;
        if ($tmp485) goto $l523;
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 65 }));
        $tmp485 = $tmp524.value;
        $l523:;
        panda$core$Bit $tmp525 = { $tmp485 };
        bool $tmp484 = $tmp525.value;
        if ($tmp484) goto $l526;
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 64 }));
        $tmp484 = $tmp527.value;
        $l526:;
        panda$core$Bit $tmp528 = { $tmp484 };
        bool $tmp483 = $tmp528.value;
        if ($tmp483) goto $l529;
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 56 }));
        $tmp483 = $tmp530.value;
        $l529:;
        panda$core$Bit $tmp531 = { $tmp483 };
        bool $tmp482 = $tmp531.value;
        if ($tmp482) goto $l532;
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 66 }));
        $tmp482 = $tmp533.value;
        $l532:;
        panda$core$Bit $tmp534 = { $tmp482 };
        bool $tmp481 = $tmp534.value;
        if ($tmp481) goto $l535;
        panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 67 }));
        $tmp481 = $tmp536.value;
        $l535:;
        panda$core$Bit $tmp537 = { $tmp481 };
        bool $tmp480 = $tmp537.value;
        if ($tmp480) goto $l538;
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 68 }));
        $tmp480 = $tmp539.value;
        $l538:;
        panda$core$Bit $tmp540 = { $tmp480 };
        bool $tmp479 = $tmp540.value;
        if ($tmp479) goto $l541;
        panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 69 }));
        $tmp479 = $tmp542.value;
        $l541:;
        panda$core$Bit $tmp543 = { $tmp479 };
        bool $tmp478 = $tmp543.value;
        if ($tmp478) goto $l544;
        panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 70 }));
        $tmp478 = $tmp545.value;
        $l544:;
        panda$core$Bit $tmp546 = { $tmp478 };
        bool $tmp477 = $tmp546.value;
        if ($tmp477) goto $l547;
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 71 }));
        $tmp477 = $tmp548.value;
        $l547:;
        panda$core$Bit $tmp549 = { $tmp477 };
        bool $tmp476 = $tmp549.value;
        if ($tmp476) goto $l550;
        panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 49 }));
        $tmp476 = $tmp551.value;
        $l550:;
        panda$core$Bit $tmp552 = { $tmp476 };
        bool $tmp475 = $tmp552.value;
        if ($tmp475) goto $l553;
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 50 }));
        $tmp475 = $tmp554.value;
        $l553:;
        panda$core$Bit $tmp555 = { $tmp475 };
        bool $tmp474 = $tmp555.value;
        if ($tmp474) goto $l556;
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 72 }));
        $tmp474 = $tmp557.value;
        $l556:;
        panda$core$Bit $tmp558 = { $tmp474 };
        if ($tmp558.value) {
        {
            panda$core$String* $tmp559 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name471);
            return $tmp559;
        }
        }
        else {
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp560.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp562 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token561 = $tmp562;
            panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token561.kind->$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp563.value) {
            {
                return &$s564;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token561);
                return &$s565;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_9473->$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp566.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp567 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp567->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp567->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp567, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp570 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp567, &$s569);
            if (((panda$core$Bit) { !$tmp570.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind* $tmp571 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp571->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp571->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp571, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp573 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp571);
            if (((panda$core$Bit) { $tmp573.nonnull }).value) {
            {
                return &$s574;
            }
            }
            return &$s575;
        }
        }
        else {
        {
            panda$core$String* $tmp577 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name471);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s576, $tmp577);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name471, $tmp580);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp581 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp581;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start582;
    panda$core$MutableString* name587;
    org$pandalanguage$pandac$parser$Token$nullable id596;
    panda$core$Char8 $tmp601;
    org$pandalanguage$pandac$ASTNode* result603;
    panda$core$Char8 $tmp609;
    panda$collections$Array* children610;
    org$pandalanguage$pandac$ASTNode* t613;
    panda$core$Char8 $tmp626;
    panda$collections$Array* children633;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp583 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp583->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp583->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp583, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp586 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp583, &$s585);
    start582 = $tmp586;
    if (((panda$core$Bit) { !start582.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp588 = (panda$core$MutableString*) malloc(48);
    $tmp588->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp588->refCount.value = 1;
    panda$core$String* $tmp590 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start582.value));
    panda$core$MutableString$init$panda$core$String($tmp588, $tmp590);
    name587 = $tmp588;
    $l591:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp593 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp593->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp593->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp593, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp595 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp593);
    if (!((panda$core$Bit) { $tmp595.nonnull }).value) goto $l592;
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp597 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp597->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp597->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp597, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp600 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp597, &$s599);
        id596 = $tmp600;
        if (((panda$core$Bit) { !id596.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp601, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name587, $tmp601);
        panda$core$String* $tmp602 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id596.value));
        panda$core$MutableString$append$panda$core$String(name587, $tmp602);
    }
    goto $l591;
    $l592:;
    org$pandalanguage$pandac$ASTNode* $tmp604 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp604->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp604->refCount.value = 1;
    panda$core$String* $tmp606 = panda$core$MutableString$convert$R$panda$core$String(name587);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp604, ((panda$core$Int64) { 109 }), ((org$pandalanguage$pandac$parser$Token) start582.value).position, $tmp606);
    result603 = $tmp604;
    org$pandalanguage$pandac$parser$Token $tmp607 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp607.kind->$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp608.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp609, ((panda$core$UInt8) { 60 }));
        panda$core$MutableString$append$panda$core$Char8(name587, $tmp609);
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp611 = (panda$collections$Array*) malloc(40);
        $tmp611->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp611->refCount.value = 1;
        panda$collections$Array$init($tmp611);
        children610 = $tmp611;
        panda$collections$Array$add$panda$collections$Array$T(children610, ((panda$core$Object*) result603));
        org$pandalanguage$pandac$ASTNode* $tmp614 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t613 = $tmp614;
        if (((panda$core$Bit) { t613 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result603;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children610, ((panda$core$Object*) t613));
        panda$core$MutableString$append$panda$core$Object(name587, ((panda$core$Object*) t613));
        $l615:;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp617 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp617->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp617->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp617, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp619 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp617);
        if (!((panda$core$Bit) { $tmp619.nonnull }).value) goto $l616;
        {
            org$pandalanguage$pandac$ASTNode* $tmp620 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
            t613 = $tmp620;
            if (((panda$core$Bit) { t613 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result603;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children610, ((panda$core$Object*) t613));
            panda$core$MutableString$append$panda$core$String(name587, &$s621);
            panda$core$MutableString$append$panda$core$Object(name587, ((panda$core$Object*) t613));
        }
        goto $l615;
        $l616:;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp622 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp622->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp622->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp622, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp625 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp622, &$s624);
        if (((panda$core$Bit) { !$tmp625.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result603;
            }
            }
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp626, ((panda$core$UInt8) { 62 }));
        panda$core$MutableString$append$panda$core$Char8(name587, $tmp626);
        org$pandalanguage$pandac$ASTNode* $tmp627 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp627->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp627->refCount.value = 1;
        panda$core$String* $tmp629 = panda$core$MutableString$finish$R$panda$core$String(name587);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp627, ((panda$core$Int64) { 154 }), ((org$pandalanguage$pandac$parser$Token) start582.value).position, ((panda$core$Object*) $tmp629), ((panda$collections$ListView*) children610));
        result603 = $tmp627;
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp630 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp630->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp630->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp630, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp632 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp630);
    if (((panda$core$Bit) { $tmp632.nonnull }).value) {
    {
        panda$collections$Array* $tmp634 = (panda$collections$Array*) malloc(40);
        $tmp634->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp634->refCount.value = 1;
        panda$collections$Array$init($tmp634);
        children633 = $tmp634;
        panda$collections$Array$add$panda$collections$Array$T(children633, ((panda$core$Object*) result603));
        org$pandalanguage$pandac$ASTNode* $tmp636 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp636->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp636->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp636, ((panda$core$Int64) { 110 }), ((org$pandalanguage$pandac$parser$Token) start582.value).position, ((panda$collections$ListView*) children633));
        result603 = $tmp636;
    }
    }
    return result603;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result638;
    org$pandalanguage$pandac$parser$Token token642;
    org$pandalanguage$pandac$parser$Token$Kind* $match$568_13644;
    panda$collections$Array* children647;
    org$pandalanguage$pandac$ASTNode* expr653;
    panda$collections$Array* children668;
    org$pandalanguage$pandac$ASTNode* expr671;
    panda$core$String* name682;
    panda$collections$Array* children688;
    org$pandalanguage$pandac$ASTNode* target694;
    panda$collections$Array* children696;
    panda$core$String* name702;
    panda$core$MutableString* finalName704;
    panda$core$Char8 $tmp707;
    panda$collections$Array* types708;
    org$pandalanguage$pandac$ASTNode* t713;
    panda$core$Char8 $tmp726;
    panda$core$Bit shouldAccept727;
    org$pandalanguage$pandac$parser$Token$Kind* $match$690_29729;
    org$pandalanguage$pandac$ASTNode* $tmp639 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result638 = $tmp639;
    if (((panda$core$Bit) { result638 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l640:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp643 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token642 = $tmp643;
        {
            $match$568_13644 = token642.kind;
            panda$core$Bit $tmp645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_13644->$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp645.value) {
            {
                panda$core$Bit$wrapper* $tmp646;
                $tmp646 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp646->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp646->refCount = 1;
                $tmp646->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp646));
                panda$collections$Array* $tmp648 = (panda$collections$Array*) malloc(40);
                $tmp648->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp648->refCount.value = 1;
                panda$collections$Array$init($tmp648);
                children647 = $tmp648;
                panda$collections$Array$add$panda$collections$Array$T(children647, ((panda$core$Object*) result638));
                org$pandalanguage$pandac$parser$Token$Kind* $tmp650 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp650->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp650->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp650, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp652 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp650);
                if (((panda$core$Bit) { !$tmp652.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp654 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr653 = $tmp654;
                    if (((panda$core$Bit) { expr653 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children647, ((panda$core$Object*) expr653));
                    $l655:;
                    org$pandalanguage$pandac$parser$Token$Kind* $tmp657 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                    $tmp657->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                    $tmp657->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp657, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp659 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp657);
                    if (!((panda$core$Bit) { $tmp659.nonnull }).value) goto $l656;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp660 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        expr653 = $tmp660;
                        if (((panda$core$Bit) { expr653 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(children647, ((panda$core$Object*) expr653));
                    }
                    goto $l655;
                    $l656:;
                    org$pandalanguage$pandac$parser$Token$Kind* $tmp661 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                    $tmp661->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                    $tmp661->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp661, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp664 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp661, &$s663);
                    if (((panda$core$Bit) { !$tmp664.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp665 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp665->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp665->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp665, ((panda$core$Int64) { 107 }), token642.position, ((panda$collections$ListView*) children647));
                result638 = $tmp665;
            }
            }
            else {
            panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_13644->$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp667.value) {
            {
                panda$collections$Array* $tmp669 = (panda$collections$Array*) malloc(40);
                $tmp669->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp669->refCount.value = 1;
                panda$collections$Array$init($tmp669);
                children668 = $tmp669;
                panda$collections$Array$add$panda$collections$Array$T(children668, ((panda$core$Object*) result638));
                org$pandalanguage$pandac$ASTNode* $tmp672 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr671 = $tmp672;
                if (((panda$core$Bit) { expr671 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children668, ((panda$core$Object*) expr671));
                org$pandalanguage$pandac$parser$Token$Kind* $tmp673 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp673->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp673->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp673, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp676 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp673, &$s675);
                if (((panda$core$Bit) { !$tmp676.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp677 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp677->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp677->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp679 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp679->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp679->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp679, ((panda$core$Int64) { 101 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp677, ((panda$core$Int64) { 103 }), token642.position, ((panda$core$Object*) $tmp679), ((panda$collections$ListView*) children668));
                result638 = $tmp677;
            }
            }
            else {
            panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_13644->$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp681.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind* $tmp683 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp683->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp683->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp683, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp685 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp683);
                if (((panda$core$Bit) { $tmp685.nonnull }).value) {
                {
                    name682 = &$s686;
                }
                }
                else {
                {
                    panda$core$String* $tmp687 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                    name682 = $tmp687;
                    if (((panda$core$Bit) { name682 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Array* $tmp689 = (panda$collections$Array*) malloc(40);
                $tmp689->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp689->refCount.value = 1;
                panda$collections$Array$init($tmp689);
                children688 = $tmp689;
                panda$collections$Array$add$panda$collections$Array$T(children688, ((panda$core$Object*) result638));
                org$pandalanguage$pandac$ASTNode* $tmp691 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp691->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp691->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp691, ((panda$core$Int64) { 108 }), token642.position, ((panda$core$Object*) name682), ((panda$collections$ListView*) children688));
                result638 = $tmp691;
            }
            }
            else {
            panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_13644->$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp693.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp695 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target694 = $tmp695;
                if (((panda$core$Bit) { target694 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp697 = (panda$collections$Array*) malloc(40);
                $tmp697->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp697->refCount.value = 1;
                panda$collections$Array$init($tmp697);
                children696 = $tmp697;
                panda$collections$Array$add$panda$collections$Array$T(children696, ((panda$core$Object*) result638));
                panda$collections$Array$add$panda$collections$Array$T(children696, ((panda$core$Object*) target694));
                org$pandalanguage$pandac$ASTNode* $tmp699 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp699->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp699->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp699, ((panda$core$Int64) { 111 }), token642.position, ((panda$collections$ListView*) children696));
                result638 = $tmp699;
            }
            }
            else {
            panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_13644->$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp701.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token642);
                panda$core$String* $tmp703 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result638);
                name702 = $tmp703;
                if (((panda$core$Bit) { name702 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp705 = (panda$core$MutableString*) malloc(48);
                    $tmp705->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp705->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp705, name702);
                    finalName704 = $tmp705;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp707, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName704, $tmp707);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp709 = (panda$collections$Array*) malloc(40);
                    $tmp709->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp709->refCount.value = 1;
                    panda$collections$Array$init($tmp709);
                    types708 = $tmp709;
                    org$pandalanguage$pandac$ASTNode* $tmp711 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp711->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp711->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp711, ((panda$core$Int64) { 109 }), result638->position, name702);
                    panda$collections$Array$add$panda$collections$Array$T(types708, ((panda$core$Object*) $tmp711));
                    org$pandalanguage$pandac$ASTNode* $tmp714 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t713 = $tmp714;
                    if (((panda$core$Bit) { t713 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result638;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types708, ((panda$core$Object*) t713));
                    panda$core$MutableString$append$panda$core$Object(finalName704, ((panda$core$Object*) t713));
                    $l715:;
                    org$pandalanguage$pandac$parser$Token$Kind* $tmp717 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                    $tmp717->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                    $tmp717->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp717, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp719 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp717);
                    if (!((panda$core$Bit) { $tmp719.nonnull }).value) goto $l716;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp720 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        t713 = $tmp720;
                        if (((panda$core$Bit) { t713 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result638;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types708, ((panda$core$Object*) t713));
                        panda$core$MutableString$append$panda$core$String(finalName704, &$s721);
                        panda$core$MutableString$append$panda$core$Object(finalName704, ((panda$core$Object*) t713));
                    }
                    goto $l715;
                    $l716:;
                    org$pandalanguage$pandac$parser$Token$Kind* $tmp722 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                    $tmp722->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                    $tmp722->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp722, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp725 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp722, &$s724);
                    if (((panda$core$Bit) { !$tmp725.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result638;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp726, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName704, $tmp726);
                    panda$core$Object* $tmp728 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp728)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp730 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$690_29729 = $tmp730.kind;
                            panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$690_29729->$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp733 = $tmp734.value;
                            if ($tmp733) goto $l735;
                            panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$690_29729->$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp733 = $tmp736.value;
                            $l735:;
                            panda$core$Bit $tmp737 = { $tmp733 };
                            bool $tmp732 = $tmp737.value;
                            if ($tmp732) goto $l738;
                            panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$690_29729->$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp732 = $tmp739.value;
                            $l738:;
                            panda$core$Bit $tmp740 = { $tmp732 };
                            bool $tmp731 = $tmp740.value;
                            if ($tmp731) goto $l741;
                            panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$690_29729->$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp731 = $tmp742.value;
                            $l741:;
                            panda$core$Bit $tmp743 = { $tmp731 };
                            if ($tmp743.value) {
                            {
                                shouldAccept727 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept727 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept727 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept727.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        org$pandalanguage$pandac$ASTNode* $tmp744 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                        $tmp744->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp744->refCount.value = 1;
                        panda$core$String* $tmp746 = panda$core$MutableString$convert$R$panda$core$String(finalName704);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp744, ((panda$core$Int64) { 154 }), result638->position, ((panda$core$Object*) $tmp746), ((panda$collections$ListView*) types708));
                        result638 = $tmp744;
                        goto $l640;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result638;
                    }
                    }
                }
                }
                return result638;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token642);
                return result638;
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l641:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result747;
    org$pandalanguage$pandac$parser$Token$nullable op751;
    org$pandalanguage$pandac$ASTNode* next755;
    panda$collections$Array* children757;
    org$pandalanguage$pandac$ASTNode* $tmp748 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result747 = $tmp748;
    if (((panda$core$Bit) { result747 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l749:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp752 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp752->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp752->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp752, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp754 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp752);
        op751 = $tmp754;
        if (((panda$core$Bit) { !op751.nonnull }).value) {
        {
            goto $l750;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp756 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next755 = $tmp756;
        if (((panda$core$Bit) { next755 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp758 = (panda$collections$Array*) malloc(40);
        $tmp758->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp758->refCount.value = 1;
        panda$collections$Array$init($tmp758);
        children757 = $tmp758;
        panda$collections$Array$add$panda$collections$Array$T(children757, ((panda$core$Object*) result747));
        panda$collections$Array$add$panda$collections$Array$T(children757, ((panda$core$Object*) next755));
        org$pandalanguage$pandac$ASTNode* $tmp760 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp760->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp760->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp760, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op751.value).position, ((panda$core$Object*) ((org$pandalanguage$pandac$parser$Token) op751.value).kind), ((panda$collections$ListView*) children757));
        result747 = $tmp760;
    }
    }
    $l750:;
    return result747;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op762;
    org$pandalanguage$pandac$parser$Token$Kind* $match$751_9764;
    org$pandalanguage$pandac$ASTNode* base774;
    panda$collections$Array* children776;
    org$pandalanguage$pandac$parser$Token $tmp763 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op762 = $tmp763;
    {
        $match$751_9764 = op762.kind;
        panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$751_9764->$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp766 = $tmp767.value;
        if ($tmp766) goto $l768;
        panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$751_9764->$rawValue, ((panda$core$Int64) { 49 }));
        $tmp766 = $tmp769.value;
        $l768:;
        panda$core$Bit $tmp770 = { $tmp766 };
        bool $tmp765 = $tmp770.value;
        if ($tmp765) goto $l771;
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$751_9764->$rawValue, ((panda$core$Int64) { 50 }));
        $tmp765 = $tmp772.value;
        $l771:;
        panda$core$Bit $tmp773 = { $tmp765 };
        if ($tmp773.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp775 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base774 = $tmp775;
            if (((panda$core$Bit) { base774 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp777 = (panda$collections$Array*) malloc(40);
            $tmp777->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp777->refCount.value = 1;
            panda$collections$Array$init($tmp777);
            children776 = $tmp777;
            panda$collections$Array$add$panda$collections$Array$T(children776, ((panda$core$Object*) base774));
            org$pandalanguage$pandac$ASTNode* $tmp779 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp779->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp779->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp779, ((panda$core$Int64) { 112 }), op762.position, ((panda$core$Object*) op762.kind), ((panda$collections$ListView*) children776));
            return $tmp779;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op762);
            org$pandalanguage$pandac$ASTNode* $tmp781 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp781;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result782;
    org$pandalanguage$pandac$parser$Token op786;
    org$pandalanguage$pandac$parser$Token$Kind* $match$779_13788;
    org$pandalanguage$pandac$ASTNode* next814;
    panda$collections$Array* children816;
    org$pandalanguage$pandac$parser$Token nextToken822;
    org$pandalanguage$pandac$ASTNode* next825;
    panda$collections$Array* children827;
    org$pandalanguage$pandac$ASTNode* $tmp783 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result782 = $tmp783;
    if (((panda$core$Bit) { result782 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l784:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp787 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op786 = $tmp787;
        {
            $match$779_13788 = op786.kind;
            panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp794 = $tmp795.value;
            if ($tmp794) goto $l796;
            panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 54 }));
            $tmp794 = $tmp797.value;
            $l796:;
            panda$core$Bit $tmp798 = { $tmp794 };
            bool $tmp793 = $tmp798.value;
            if ($tmp793) goto $l799;
            panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 55 }));
            $tmp793 = $tmp800.value;
            $l799:;
            panda$core$Bit $tmp801 = { $tmp793 };
            bool $tmp792 = $tmp801.value;
            if ($tmp792) goto $l802;
            panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 56 }));
            $tmp792 = $tmp803.value;
            $l802:;
            panda$core$Bit $tmp804 = { $tmp792 };
            bool $tmp791 = $tmp804.value;
            if ($tmp791) goto $l805;
            panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 72 }));
            $tmp791 = $tmp806.value;
            $l805:;
            panda$core$Bit $tmp807 = { $tmp791 };
            bool $tmp790 = $tmp807.value;
            if ($tmp790) goto $l808;
            panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 67 }));
            $tmp790 = $tmp809.value;
            $l808:;
            panda$core$Bit $tmp810 = { $tmp790 };
            bool $tmp789 = $tmp810.value;
            if ($tmp789) goto $l811;
            panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 69 }));
            $tmp789 = $tmp812.value;
            $l811:;
            panda$core$Bit $tmp813 = { $tmp789 };
            if ($tmp813.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp815 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next814 = $tmp815;
                if (((panda$core$Bit) { next814 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp817 = (panda$collections$Array*) malloc(40);
                $tmp817->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp817->refCount.value = 1;
                panda$collections$Array$init($tmp817);
                children816 = $tmp817;
                panda$collections$Array$add$panda$collections$Array$T(children816, ((panda$core$Object*) result782));
                panda$collections$Array$add$panda$collections$Array$T(children816, ((panda$core$Object*) next814));
                org$pandalanguage$pandac$ASTNode* $tmp819 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp819->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp819->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp819, ((panda$core$Int64) { 103 }), op786.position, ((panda$core$Object*) op786.kind), ((panda$collections$ListView*) children816));
                result782 = $tmp819;
            }
            }
            else {
            panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$779_13788->$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp821.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp823 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken822 = $tmp823;
                panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken822.kind->$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp824.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp826 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next825 = $tmp826;
                    if (((panda$core$Bit) { next825 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array* $tmp828 = (panda$collections$Array*) malloc(40);
                    $tmp828->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp828->refCount.value = 1;
                    panda$collections$Array$init($tmp828);
                    children827 = $tmp828;
                    panda$collections$Array$add$panda$collections$Array$T(children827, ((panda$core$Object*) result782));
                    panda$collections$Array$add$panda$collections$Array$T(children827, ((panda$core$Object*) next825));
                    org$pandalanguage$pandac$ASTNode* $tmp830 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                    $tmp830->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp830->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind* $tmp832 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                    $tmp832->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                    $tmp832->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp832, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp830, ((panda$core$Int64) { 103 }), op786.position, ((panda$core$Object*) $tmp832), ((panda$collections$ListView*) children827));
                    result782 = $tmp830;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken822);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op786);
                    return result782;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op786);
                return result782;
            }
            }
            }
        }
    }
    }
    $l785:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result834;
    org$pandalanguage$pandac$parser$Token op838;
    org$pandalanguage$pandac$parser$Token$Kind* $match$827_13840;
    org$pandalanguage$pandac$ASTNode* next850;
    panda$collections$Array* children852;
    org$pandalanguage$pandac$ASTNode* $tmp835 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result834 = $tmp835;
    if (((panda$core$Bit) { result834 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l836:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp839 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op838 = $tmp839;
        {
            $match$827_13840 = op838.kind;
            panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$827_13840->$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp842 = $tmp843.value;
            if ($tmp842) goto $l844;
            panda$core$Bit $tmp845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$827_13840->$rawValue, ((panda$core$Int64) { 52 }));
            $tmp842 = $tmp845.value;
            $l844:;
            panda$core$Bit $tmp846 = { $tmp842 };
            bool $tmp841 = $tmp846.value;
            if ($tmp841) goto $l847;
            panda$core$Bit $tmp848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$827_13840->$rawValue, ((panda$core$Int64) { 71 }));
            $tmp841 = $tmp848.value;
            $l847:;
            panda$core$Bit $tmp849 = { $tmp841 };
            if ($tmp849.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp851 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next850 = $tmp851;
                if (((panda$core$Bit) { next850 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp853 = (panda$collections$Array*) malloc(40);
                $tmp853->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp853->refCount.value = 1;
                panda$collections$Array$init($tmp853);
                children852 = $tmp853;
                panda$collections$Array$add$panda$collections$Array$T(children852, ((panda$core$Object*) result834));
                panda$collections$Array$add$panda$collections$Array$T(children852, ((panda$core$Object*) next850));
                org$pandalanguage$pandac$ASTNode* $tmp855 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp855->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp855->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp855, ((panda$core$Int64) { 103 }), op838.position, ((panda$core$Object*) op838.kind), ((panda$collections$ListView*) children852));
                result834 = $tmp855;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op838);
                return result834;
            }
            }
        }
    }
    }
    $l837:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result857;
    org$pandalanguage$pandac$parser$Token$Kind* $match$850_9858;
    org$pandalanguage$pandac$Position $tmp867;
    org$pandalanguage$pandac$parser$Token op869;
    org$pandalanguage$pandac$parser$Token$Kind* $match$860_9871;
    org$pandalanguage$pandac$parser$Token next877;
    org$pandalanguage$pandac$ASTNode* right879;
    org$pandalanguage$pandac$Position $tmp892;
    org$pandalanguage$pandac$ASTNode* step893;
    org$pandalanguage$pandac$Position $tmp900;
    panda$collections$Array* children901;
    panda$core$Int64 kind904;
    {
        org$pandalanguage$pandac$parser$Token $tmp859 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$850_9858 = $tmp859.kind;
        panda$core$Bit $tmp861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$850_9858->$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp860 = $tmp861.value;
        if ($tmp860) goto $l862;
        panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$850_9858->$rawValue, ((panda$core$Int64) { 96 }));
        $tmp860 = $tmp863.value;
        $l862:;
        panda$core$Bit $tmp864 = { $tmp860 };
        if ($tmp864.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp865 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp865->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp865->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp867);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp865, ((panda$core$Int64) { 138 }), $tmp867);
            result857 = $tmp865;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp868 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result857 = $tmp868;
            if (((panda$core$Bit) { result857 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp870 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op869 = $tmp870;
    {
        $match$860_9871 = op869.kind;
        panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$860_9871->$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp872 = $tmp873.value;
        if ($tmp872) goto $l874;
        panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$860_9871->$rawValue, ((panda$core$Int64) { 96 }));
        $tmp872 = $tmp875.value;
        $l874:;
        panda$core$Bit $tmp876 = { $tmp872 };
        if ($tmp876.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp878 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next877 = $tmp878;
            panda$core$Bit $tmp882 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next877.kind->$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp881 = $tmp882.value;
            if (!$tmp881) goto $l883;
            panda$core$Bit $tmp884 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next877.kind->$rawValue, ((panda$core$Int64) { 104 }));
            $tmp881 = $tmp884.value;
            $l883:;
            panda$core$Bit $tmp885 = { $tmp881 };
            bool $tmp880 = $tmp885.value;
            if (!$tmp880) goto $l886;
            panda$core$Bit $tmp887 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next877.kind->$rawValue, ((panda$core$Int64) { 33 }));
            $tmp880 = $tmp887.value;
            $l886:;
            panda$core$Bit $tmp888 = { $tmp880 };
            if ($tmp888.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp889 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                right879 = $tmp889;
                if (((panda$core$Bit) { right879 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp890 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp890->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp890->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp892);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp890, ((panda$core$Int64) { 138 }), $tmp892);
                right879 = $tmp890;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind* $tmp894 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp894->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp894->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp894, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp896 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp894);
            if (((panda$core$Bit) { $tmp896.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp897 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                step893 = $tmp897;
                if (((panda$core$Bit) { step893 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp898 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp898->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp898->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp900);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp898, ((panda$core$Int64) { 138 }), $tmp900);
                step893 = $tmp898;
            }
            }
            panda$collections$Array* $tmp902 = (panda$collections$Array*) malloc(40);
            $tmp902->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp902->refCount.value = 1;
            panda$collections$Array$init($tmp902);
            children901 = $tmp902;
            panda$collections$Array$add$panda$collections$Array$T(children901, ((panda$core$Object*) result857));
            panda$collections$Array$add$panda$collections$Array$T(children901, ((panda$core$Object*) right879));
            panda$collections$Array$add$panda$collections$Array$T(children901, ((panda$core$Object*) step893));
            panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op869.kind->$rawValue, ((panda$core$Int64) { 97 }));
            if ($tmp905.value) {
            {
                kind904 = ((panda$core$Int64) { 105 });
            }
            }
            else {
            {
                kind904 = ((panda$core$Int64) { 104 });
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp906 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp906->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp906->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp906, kind904, op869.position, ((panda$collections$ListView*) children901));
            return $tmp906;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op869);
            return result857;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result908;
    org$pandalanguage$pandac$parser$Token op912;
    org$pandalanguage$pandac$parser$Token$Kind* $match$913_13914;
    org$pandalanguage$pandac$ASTNode* next944;
    panda$collections$Array* children946;
    org$pandalanguage$pandac$ASTNode* $tmp909 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result908 = $tmp909;
    if (((panda$core$Bit) { result908 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l910:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp913 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op912 = $tmp913;
        {
            $match$913_13914 = op912.kind;
            panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp921 = $tmp922.value;
            if ($tmp921) goto $l923;
            panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 59 }));
            $tmp921 = $tmp924.value;
            $l923:;
            panda$core$Bit $tmp925 = { $tmp921 };
            bool $tmp920 = $tmp925.value;
            if ($tmp920) goto $l926;
            panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 60 }));
            $tmp920 = $tmp927.value;
            $l926:;
            panda$core$Bit $tmp928 = { $tmp920 };
            bool $tmp919 = $tmp928.value;
            if ($tmp919) goto $l929;
            panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 61 }));
            $tmp919 = $tmp930.value;
            $l929:;
            panda$core$Bit $tmp931 = { $tmp919 };
            bool $tmp918 = $tmp931.value;
            if ($tmp918) goto $l932;
            panda$core$Bit $tmp933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 62 }));
            $tmp918 = $tmp933.value;
            $l932:;
            panda$core$Bit $tmp934 = { $tmp918 };
            bool $tmp917 = $tmp934.value;
            if ($tmp917) goto $l935;
            panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 63 }));
            $tmp917 = $tmp936.value;
            $l935:;
            panda$core$Bit $tmp937 = { $tmp917 };
            bool $tmp916 = $tmp937.value;
            if ($tmp916) goto $l938;
            panda$core$Bit $tmp939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 64 }));
            $tmp916 = $tmp939.value;
            $l938:;
            panda$core$Bit $tmp940 = { $tmp916 };
            bool $tmp915 = $tmp940.value;
            if ($tmp915) goto $l941;
            panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$913_13914->$rawValue, ((panda$core$Int64) { 65 }));
            $tmp915 = $tmp942.value;
            $l941:;
            panda$core$Bit $tmp943 = { $tmp915 };
            if ($tmp943.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp945 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next944 = $tmp945;
                if (((panda$core$Bit) { next944 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp947 = (panda$collections$Array*) malloc(40);
                $tmp947->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp947->refCount.value = 1;
                panda$collections$Array$init($tmp947);
                children946 = $tmp947;
                panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) result908));
                panda$collections$Array$add$panda$collections$Array$T(children946, ((panda$core$Object*) next944));
                org$pandalanguage$pandac$ASTNode* $tmp949 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp949->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp949->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp949, ((panda$core$Int64) { 103 }), op912.position, ((panda$core$Object*) op912.kind), ((panda$collections$ListView*) children946));
                result908 = $tmp949;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op912);
                return result908;
            }
            }
        }
    }
    }
    $l911:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result951;
    org$pandalanguage$pandac$parser$Token op955;
    org$pandalanguage$pandac$parser$Token$Kind* $match$947_13957;
    org$pandalanguage$pandac$ASTNode* next963;
    panda$collections$Array* children965;
    org$pandalanguage$pandac$ASTNode* $tmp952 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result951 = $tmp952;
    if (((panda$core$Bit) { result951 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l953:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp956 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op955 = $tmp956;
        {
            $match$947_13957 = op955.kind;
            panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$947_13957->$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp958 = $tmp959.value;
            if ($tmp958) goto $l960;
            panda$core$Bit $tmp961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$947_13957->$rawValue, ((panda$core$Int64) { 70 }));
            $tmp958 = $tmp961.value;
            $l960:;
            panda$core$Bit $tmp962 = { $tmp958 };
            if ($tmp962.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp964 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next963 = $tmp964;
                if (((panda$core$Bit) { next963 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp966 = (panda$collections$Array*) malloc(40);
                $tmp966->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp966->refCount.value = 1;
                panda$collections$Array$init($tmp966);
                children965 = $tmp966;
                panda$collections$Array$add$panda$collections$Array$T(children965, ((panda$core$Object*) result951));
                panda$collections$Array$add$panda$collections$Array$T(children965, ((panda$core$Object*) next963));
                org$pandalanguage$pandac$ASTNode* $tmp968 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp968->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp968->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp968, ((panda$core$Int64) { 103 }), op955.position, ((panda$core$Object*) op955.kind), ((panda$collections$ListView*) children965));
                result951 = $tmp968;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op955);
                return result951;
            }
            }
        }
    }
    }
    $l954:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result970;
    org$pandalanguage$pandac$parser$Token$nullable op974;
    org$pandalanguage$pandac$ASTNode* next978;
    panda$collections$Array* children980;
    org$pandalanguage$pandac$ASTNode* $tmp971 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result970 = $tmp971;
    if (((panda$core$Bit) { result970 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l972:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp975 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp975->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp975->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp975, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp977 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp975);
        op974 = $tmp977;
        if (((panda$core$Bit) { !op974.nonnull }).value) {
        {
            goto $l973;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp979 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next978 = $tmp979;
        if (((panda$core$Bit) { next978 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp981 = (panda$collections$Array*) malloc(40);
        $tmp981->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp981->refCount.value = 1;
        panda$collections$Array$init($tmp981);
        children980 = $tmp981;
        panda$collections$Array$add$panda$collections$Array$T(children980, ((panda$core$Object*) result970));
        panda$collections$Array$add$panda$collections$Array$T(children980, ((panda$core$Object*) next978));
        org$pandalanguage$pandac$ASTNode* $tmp983 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp983->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp983->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp983, ((panda$core$Int64) { 103 }), ((org$pandalanguage$pandac$parser$Token) op974.value).position, ((panda$core$Object*) ((org$pandalanguage$pandac$parser$Token) op974.value).kind), ((panda$collections$ListView*) children980));
        result970 = $tmp983;
    }
    }
    $l973:;
    return result970;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start985;
    org$pandalanguage$pandac$ASTNode* test990;
    panda$collections$Array* children992;
    org$pandalanguage$pandac$ASTNode* ifTrue995;
    org$pandalanguage$pandac$ASTNode* ifFalse1002;
    org$pandalanguage$pandac$ASTNode* ifFalse1004;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp986 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp986->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp986->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp986, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp989 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp986, &$s988);
    start985 = $tmp989;
    if (((panda$core$Bit) { !start985.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp991 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test990 = $tmp991;
    if (((panda$core$Bit) { test990 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp993 = (panda$collections$Array*) malloc(40);
    $tmp993->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp993->refCount.value = 1;
    panda$collections$Array$init($tmp993);
    children992 = $tmp993;
    panda$collections$Array$add$panda$collections$Array$T(children992, ((panda$core$Object*) test990));
    org$pandalanguage$pandac$ASTNode* $tmp996 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    ifTrue995 = $tmp996;
    if (((panda$core$Bit) { ifTrue995 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children992, ((panda$core$Object*) ifTrue995));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp997 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp997->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp997->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp997, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp999 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp997);
    if (((panda$core$Bit) { $tmp999.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1000 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1000.kind->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1001.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1003 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse1002 = $tmp1003;
            if (((panda$core$Bit) { ifFalse1002 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children992, ((panda$core$Object*) ifFalse1002));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1005 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse1004 = $tmp1005;
            if (((panda$core$Bit) { ifFalse1004 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children992, ((panda$core$Object*) ifFalse1004));
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1006 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1006->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1006->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1006, ((panda$core$Int64) { 118 }), ((org$pandalanguage$pandac$parser$Token) start985.value).position, ((panda$collections$ListView*) children992));
    return $tmp1006;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1008 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1008->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1008->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1008, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1011 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1008, &$s1010);
    if (((panda$core$Bit) { !$tmp1011.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1012 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp1012;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1013;
    org$pandalanguage$pandac$ASTNode* type1020;
    panda$collections$Array* children1022;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1014 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1014->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1014->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1014, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1017 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1014, &$s1016);
    id1013 = $tmp1017;
    if (((panda$core$Bit) { !id1013.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1018 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1018.kind->$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1019.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1021 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type1020 = $tmp1021;
        if (((panda$core$Bit) { type1020 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array* $tmp1023 = (panda$collections$Array*) malloc(40);
        $tmp1023->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp1023->refCount.value = 1;
        panda$collections$Array$init($tmp1023);
        children1022 = $tmp1023;
        panda$collections$Array$add$panda$collections$Array$T(children1022, ((panda$core$Object*) type1020));
        org$pandalanguage$pandac$ASTNode* $tmp1025 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1025->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1025->refCount.value = 1;
        panda$core$String* $tmp1027 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1013.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1025, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1013.value).position, ((panda$core$Object*) $tmp1027), ((panda$collections$ListView*) children1022));
        return $tmp1025;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1028 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1028->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1028->refCount.value = 1;
    panda$core$String* $tmp1030 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1013.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1028, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1013.value).position, $tmp1030);
    return $tmp1028;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1031;
    org$pandalanguage$pandac$ASTNode* t1036;
    org$pandalanguage$pandac$ASTNode* list1042;
    org$pandalanguage$pandac$ASTNode* block1044;
    panda$collections$Array* children1046;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1032 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1032->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1032->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1032, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1035 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1032, &$s1034);
    start1031 = $tmp1035;
    if (((panda$core$Bit) { !start1031.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1037 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1036 = $tmp1037;
    if (((panda$core$Bit) { t1036 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1038 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1038->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1038->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1038, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1041 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1038, &$s1040);
    if (((panda$core$Bit) { !$tmp1041.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1043 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list1042 = $tmp1043;
    if (((panda$core$Bit) { list1042 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1045 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    block1044 = $tmp1045;
    if (((panda$core$Bit) { block1044 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1047 = (panda$collections$Array*) malloc(40);
    $tmp1047->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1047->refCount.value = 1;
    panda$collections$Array$init($tmp1047);
    children1046 = $tmp1047;
    panda$collections$Array$add$panda$collections$Array$T(children1046, ((panda$core$Object*) t1036));
    panda$collections$Array$add$panda$collections$Array$T(children1046, ((panda$core$Object*) list1042));
    panda$collections$Array$add$panda$collections$Array$T(children1046, ((panda$core$Object*) block1044));
    org$pandalanguage$pandac$ASTNode* $tmp1049 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1049->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1049->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1049, ((panda$core$Int64) { 119 }), ((org$pandalanguage$pandac$parser$Token) start1031.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1046));
    return $tmp1049;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1051;
    org$pandalanguage$pandac$ASTNode* test1056;
    org$pandalanguage$pandac$ASTNode* body1058;
    panda$collections$Array* children1060;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1052 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1052->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1052->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1052, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1055 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1052, &$s1054);
    start1051 = $tmp1055;
    if (((panda$core$Bit) { !start1051.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1057 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1056 = $tmp1057;
    if (((panda$core$Bit) { test1056 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1059 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body1058 = $tmp1059;
    if (((panda$core$Bit) { body1058 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1061 = (panda$collections$Array*) malloc(40);
    $tmp1061->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1061->refCount.value = 1;
    panda$collections$Array$init($tmp1061);
    children1060 = $tmp1061;
    panda$collections$Array$add$panda$collections$Array$T(children1060, ((panda$core$Object*) test1056));
    panda$collections$Array$add$panda$collections$Array$T(children1060, ((panda$core$Object*) body1058));
    org$pandalanguage$pandac$ASTNode* $tmp1063 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1063->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1063->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1063, ((panda$core$Int64) { 121 }), ((org$pandalanguage$pandac$parser$Token) start1051.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1060));
    return $tmp1063;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1065;
    org$pandalanguage$pandac$ASTNode* body1070;
    org$pandalanguage$pandac$ASTNode* test1076;
    panda$collections$Array* children1078;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1066 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1066->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1066->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1066, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1069 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1066, &$s1068);
    start1065 = $tmp1069;
    if (((panda$core$Bit) { !start1065.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1071 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body1070 = $tmp1071;
    if (((panda$core$Bit) { body1070 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1072 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1072->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1072->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1072, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1075 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1072, &$s1074);
    if (((panda$core$Bit) { !$tmp1075.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1077 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1076 = $tmp1077;
    if (((panda$core$Bit) { test1076 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1079 = (panda$collections$Array*) malloc(40);
    $tmp1079->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1079->refCount.value = 1;
    panda$collections$Array$init($tmp1079);
    children1078 = $tmp1079;
    panda$collections$Array$add$panda$collections$Array$T(children1078, ((panda$core$Object*) body1070));
    panda$collections$Array$add$panda$collections$Array$T(children1078, ((panda$core$Object*) test1076));
    org$pandalanguage$pandac$ASTNode* $tmp1081 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1081->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1081->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1081, ((panda$core$Int64) { 120 }), ((org$pandalanguage$pandac$parser$Token) start1065.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1078));
    return $tmp1081;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1083;
    org$pandalanguage$pandac$ASTNode* body1088;
    panda$collections$Array* children1090;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1084 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1084->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1084->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1084, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1087 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1084, &$s1086);
    start1083 = $tmp1087;
    if (((panda$core$Bit) { !start1083.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1089 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    body1088 = $tmp1089;
    if (((panda$core$Bit) { body1088 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1091 = (panda$collections$Array*) malloc(40);
    $tmp1091->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1091->refCount.value = 1;
    panda$collections$Array$init($tmp1091);
    children1090 = $tmp1091;
    panda$collections$Array$add$panda$collections$Array$T(children1090, ((panda$core$Object*) body1088));
    org$pandalanguage$pandac$ASTNode* $tmp1093 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1093->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1093->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1093, ((panda$core$Int64) { 122 }), ((org$pandalanguage$pandac$parser$Token) start1083.value).position, ((panda$core$Object*) p_label), ((panda$collections$ListView*) children1090));
    return $tmp1093;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1095;
    org$pandalanguage$pandac$ASTNode* expr1100;
    panda$collections$Array* children1102;
    org$pandalanguage$pandac$ASTNode* message1108;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1096 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1096->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1096->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1096, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1099 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1096, &$s1098);
    start1095 = $tmp1099;
    if (((panda$core$Bit) { !start1095.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1101 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1100 = $tmp1101;
    if (((panda$core$Bit) { expr1100 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1103 = (panda$collections$Array*) malloc(40);
    $tmp1103->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1103->refCount.value = 1;
    panda$collections$Array$init($tmp1103);
    children1102 = $tmp1103;
    panda$collections$Array$add$panda$collections$Array$T(children1102, ((panda$core$Object*) expr1100));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1105 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1105->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1105->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1105, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1107 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1105);
    if (((panda$core$Bit) { $tmp1107.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1109 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        message1108 = $tmp1109;
        if (((panda$core$Bit) { message1108 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1102, ((panda$core$Object*) message1108));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1110 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1110->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1110->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1110, ((panda$core$Int64) { 123 }), ((org$pandalanguage$pandac$parser$Token) start1095.value).position, ((panda$collections$ListView*) children1102));
    return $tmp1110;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1112;
    panda$collections$Array* expressions1117;
    org$pandalanguage$pandac$ASTNode* expr1120;
    panda$collections$Array* children1128;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1203_131139;
    org$pandalanguage$pandac$ASTNode* stmt1159;
    org$pandalanguage$pandac$ASTNode* stmt1161;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1113 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1113->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1113->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1113, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1116 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1113, &$s1115);
    start1112 = $tmp1116;
    if (((panda$core$Bit) { !start1112.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1118 = (panda$collections$Array*) malloc(40);
    $tmp1118->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1118->refCount.value = 1;
    panda$collections$Array$init($tmp1118);
    expressions1117 = $tmp1118;
    org$pandalanguage$pandac$ASTNode* $tmp1121 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1120 = $tmp1121;
    if (((panda$core$Bit) { expr1120 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1117, ((panda$core$Object*) expr1120));
    $l1122:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1124 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1124->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1124->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1124, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1126 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1124);
    if (!((panda$core$Bit) { $tmp1126.nonnull }).value) goto $l1123;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1127 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1120 = $tmp1127;
        if (((panda$core$Bit) { expr1120 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1117, ((panda$core$Object*) expr1120));
    }
    goto $l1122;
    $l1123:;
    panda$collections$Array* $tmp1129 = (panda$collections$Array*) malloc(40);
    $tmp1129->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1129->refCount.value = 1;
    panda$collections$Array$init($tmp1129);
    children1128 = $tmp1129;
    org$pandalanguage$pandac$ASTNode* $tmp1131 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1131->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1131->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1131, ((panda$core$Int64) { 128 }), ((org$pandalanguage$pandac$parser$Token) start1112.value).position, ((panda$collections$ListView*) expressions1117));
    panda$collections$Array$add$panda$collections$Array$T(children1128, ((panda$core$Object*) $tmp1131));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1133 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1133->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1133->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1133, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1136 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1133, &$s1135);
    if (((panda$core$Bit) { !$tmp1136.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1137:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1140 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1203_131139 = $tmp1140.kind;
            panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1203_131139->$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1142 = $tmp1143.value;
            if ($tmp1142) goto $l1144;
            panda$core$Bit $tmp1145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1203_131139->$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1142 = $tmp1145.value;
            $l1144:;
            panda$core$Bit $tmp1146 = { $tmp1142 };
            bool $tmp1141 = $tmp1146.value;
            if ($tmp1141) goto $l1147;
            panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1203_131139->$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1141 = $tmp1148.value;
            $l1147:;
            panda$core$Bit $tmp1149 = { $tmp1141 };
            if ($tmp1149.value) {
            {
                goto $l1138;
            }
            }
            else {
            panda$core$Bit $tmp1152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1203_131139->$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1151 = $tmp1152.value;
            if ($tmp1151) goto $l1153;
            panda$core$Bit $tmp1154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1203_131139->$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1151 = $tmp1154.value;
            $l1153:;
            panda$core$Bit $tmp1155 = { $tmp1151 };
            bool $tmp1150 = $tmp1155.value;
            if ($tmp1150) goto $l1156;
            panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1203_131139->$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1150 = $tmp1157.value;
            $l1156:;
            panda$core$Bit $tmp1158 = { $tmp1150 };
            if ($tmp1158.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1160 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1159 = $tmp1160;
                if (((panda$core$Bit) { stmt1159 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1128, ((panda$core$Object*) stmt1159));
                goto $l1138;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1162 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1161 = $tmp1162;
                    if (((panda$core$Bit) { stmt1161 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1128, ((panda$core$Object*) stmt1161));
                }
            }
            }
            }
        }
    }
    }
    $l1138:;
    org$pandalanguage$pandac$ASTNode* $tmp1163 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1163->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1163->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1163, ((panda$core$Int64) { 124 }), ((org$pandalanguage$pandac$parser$Token) start1112.value).position, ((panda$collections$ListView*) children1128));
    return $tmp1163;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1165;
    panda$collections$Array* children1170;
    org$pandalanguage$pandac$ASTNode* expr1173;
    org$pandalanguage$pandac$parser$Token token1181;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1244_131183;
    org$pandalanguage$pandac$ASTNode* w1186;
    org$pandalanguage$pandac$parser$Token o1189;
    panda$collections$Array* statements1195;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1260_251200;
    org$pandalanguage$pandac$ASTNode* stmt1212;
    org$pandalanguage$pandac$ASTNode* stmt1214;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1166 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1166->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1166->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1166, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1169 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1166, &$s1168);
    start1165 = $tmp1169;
    if (((panda$core$Bit) { !start1165.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1171 = (panda$collections$Array*) malloc(40);
    $tmp1171->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1171->refCount.value = 1;
    panda$collections$Array$init($tmp1171);
    children1170 = $tmp1171;
    org$pandalanguage$pandac$ASTNode* $tmp1174 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1173 = $tmp1174;
    if (((panda$core$Bit) { expr1173 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) expr1173));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1175 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1175->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1175->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1175, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1178 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1175, &$s1177);
    if (((panda$core$Bit) { !$tmp1178.nonnull }).value) {
    {
        return NULL;
    }
    }
    $l1179:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1182 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1181 = $tmp1182;
        {
            $match$1244_131183 = token1181.kind;
            panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1244_131183->$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1184.value) {
            {
                goto $l1180;
            }
            }
            else {
            panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1244_131183->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1185.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1187 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1186 = $tmp1187;
                if (((panda$core$Bit) { w1186 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) w1186));
            }
            }
            else {
            panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1244_131183->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1188.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1190 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1189 = $tmp1190;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1191 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp1191->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp1191->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1191, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1194 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1191, &$s1193);
                if (((panda$core$Bit) { !$tmp1194.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1196 = (panda$collections$Array*) malloc(40);
                $tmp1196->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1196->refCount.value = 1;
                panda$collections$Array$init($tmp1196);
                statements1195 = $tmp1196;
                $l1198:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1201 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1260_251200 = $tmp1201.kind;
                        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1260_251200->$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1202.value) {
                        {
                            goto $l1199;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1260_251200->$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1204 = $tmp1205.value;
                        if ($tmp1204) goto $l1206;
                        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1260_251200->$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1204 = $tmp1207.value;
                        $l1206:;
                        panda$core$Bit $tmp1208 = { $tmp1204 };
                        bool $tmp1203 = $tmp1208.value;
                        if ($tmp1203) goto $l1209;
                        panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1260_251200->$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1203 = $tmp1210.value;
                        $l1209:;
                        panda$core$Bit $tmp1211 = { $tmp1203 };
                        if ($tmp1211.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1213 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1212 = $tmp1213;
                            if (((panda$core$Bit) { stmt1212 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1195, ((panda$core$Object*) stmt1212));
                            goto $l1199;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1215 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1214 = $tmp1215;
                            if (((panda$core$Bit) { stmt1214 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements1195, ((panda$core$Object*) stmt1214));
                        }
                        }
                        }
                    }
                }
                }
                $l1199:;
                org$pandalanguage$pandac$ASTNode* $tmp1216 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1216->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1216->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1216, ((panda$core$Int64) { 127 }), o1189.position, ((panda$collections$ListView*) statements1195));
                panda$collections$Array$add$panda$collections$Array$T(children1170, ((panda$core$Object*) $tmp1216));
                goto $l1180;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1220 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1181);
                panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1219, $tmp1220);
                panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1221, &$s1222);
                panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1218, $tmp1223);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1181, $tmp1224);
            }
            }
            }
            }
        }
    }
    }
    $l1180:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1225 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1225->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1225->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1225, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1228 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1225, &$s1227);
    if (((panda$core$Bit) { !$tmp1228.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1229 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1229->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1229->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1229, ((panda$core$Int64) { 125 }), ((org$pandalanguage$pandac$parser$Token) start1165.value).position, ((panda$collections$ListView*) children1170));
    return $tmp1229;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1231;
    panda$collections$Array* children1236;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1302_131241;
    org$pandalanguage$pandac$ASTNode* stmt1253;
    org$pandalanguage$pandac$ASTNode* stmt1259;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1232 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1232->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1232->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1232, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1235 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1232, &$s1234);
    start1231 = $tmp1235;
    if (((panda$core$Bit) { !start1231.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1237 = (panda$collections$Array*) malloc(40);
    $tmp1237->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1237->refCount.value = 1;
    panda$collections$Array$init($tmp1237);
    children1236 = $tmp1237;
    $l1239:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1242 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1302_131241 = $tmp1242.kind;
            panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1302_131241->$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1243.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1240;
            }
            }
            else {
            panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1302_131241->$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1245 = $tmp1246.value;
            if ($tmp1245) goto $l1247;
            panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1302_131241->$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1245 = $tmp1248.value;
            $l1247:;
            panda$core$Bit $tmp1249 = { $tmp1245 };
            bool $tmp1244 = $tmp1249.value;
            if ($tmp1244) goto $l1250;
            panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1302_131241->$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1244 = $tmp1251.value;
            $l1250:;
            panda$core$Bit $tmp1252 = { $tmp1244 };
            if ($tmp1252.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1254 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1253 = $tmp1254;
                if (((panda$core$Bit) { stmt1253 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1255 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp1255->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp1255->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1255, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1258 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1255, &$s1257);
                if (((panda$core$Bit) { !$tmp1258.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1236, ((panda$core$Object*) stmt1253));
                goto $l1240;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1260 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1259 = $tmp1260;
                if (((panda$core$Bit) { stmt1259 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1236, ((panda$core$Object*) stmt1259));
            }
            }
            }
        }
    }
    }
    $l1240:;
    org$pandalanguage$pandac$ASTNode* $tmp1261 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1261->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1261->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1261, ((panda$core$Int64) { 126 }), ((org$pandalanguage$pandac$parser$Token) start1231.value).position, ((panda$collections$ListView*) children1236));
    return $tmp1261;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1263;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1335_91265;
    org$pandalanguage$pandac$parser$Token op1328;
    org$pandalanguage$pandac$ASTNode* rvalue1330;
    panda$collections$Array* children1332;
    org$pandalanguage$pandac$parser$Token op1340;
    org$pandalanguage$pandac$ASTNode* rvalue1342;
    panda$collections$Array* children1344;
    org$pandalanguage$pandac$ASTNode* $tmp1264 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1263 = $tmp1264;
    if (((panda$core$Bit) { start1263 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1266 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1335_91265 = $tmp1266.kind;
        panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1281 = $tmp1282.value;
        if ($tmp1281) goto $l1283;
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1281 = $tmp1284.value;
        $l1283:;
        panda$core$Bit $tmp1285 = { $tmp1281 };
        bool $tmp1280 = $tmp1285.value;
        if ($tmp1280) goto $l1286;
        panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1280 = $tmp1287.value;
        $l1286:;
        panda$core$Bit $tmp1288 = { $tmp1280 };
        bool $tmp1279 = $tmp1288.value;
        if ($tmp1279) goto $l1289;
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1279 = $tmp1290.value;
        $l1289:;
        panda$core$Bit $tmp1291 = { $tmp1279 };
        bool $tmp1278 = $tmp1291.value;
        if ($tmp1278) goto $l1292;
        panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1278 = $tmp1293.value;
        $l1292:;
        panda$core$Bit $tmp1294 = { $tmp1278 };
        bool $tmp1277 = $tmp1294.value;
        if ($tmp1277) goto $l1295;
        panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1277 = $tmp1296.value;
        $l1295:;
        panda$core$Bit $tmp1297 = { $tmp1277 };
        bool $tmp1276 = $tmp1297.value;
        if ($tmp1276) goto $l1298;
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1276 = $tmp1299.value;
        $l1298:;
        panda$core$Bit $tmp1300 = { $tmp1276 };
        bool $tmp1275 = $tmp1300.value;
        if ($tmp1275) goto $l1301;
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1275 = $tmp1302.value;
        $l1301:;
        panda$core$Bit $tmp1303 = { $tmp1275 };
        bool $tmp1274 = $tmp1303.value;
        if ($tmp1274) goto $l1304;
        panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1274 = $tmp1305.value;
        $l1304:;
        panda$core$Bit $tmp1306 = { $tmp1274 };
        bool $tmp1273 = $tmp1306.value;
        if ($tmp1273) goto $l1307;
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1273 = $tmp1308.value;
        $l1307:;
        panda$core$Bit $tmp1309 = { $tmp1273 };
        bool $tmp1272 = $tmp1309.value;
        if ($tmp1272) goto $l1310;
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1272 = $tmp1311.value;
        $l1310:;
        panda$core$Bit $tmp1312 = { $tmp1272 };
        bool $tmp1271 = $tmp1312.value;
        if ($tmp1271) goto $l1313;
        panda$core$Bit $tmp1314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1271 = $tmp1314.value;
        $l1313:;
        panda$core$Bit $tmp1315 = { $tmp1271 };
        bool $tmp1270 = $tmp1315.value;
        if ($tmp1270) goto $l1316;
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1270 = $tmp1317.value;
        $l1316:;
        panda$core$Bit $tmp1318 = { $tmp1270 };
        bool $tmp1269 = $tmp1318.value;
        if ($tmp1269) goto $l1319;
        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1269 = $tmp1320.value;
        $l1319:;
        panda$core$Bit $tmp1321 = { $tmp1269 };
        bool $tmp1268 = $tmp1321.value;
        if ($tmp1268) goto $l1322;
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1268 = $tmp1323.value;
        $l1322:;
        panda$core$Bit $tmp1324 = { $tmp1268 };
        bool $tmp1267 = $tmp1324.value;
        if ($tmp1267) goto $l1325;
        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1267 = $tmp1326.value;
        $l1325:;
        panda$core$Bit $tmp1327 = { $tmp1267 };
        if ($tmp1327.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1329 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1328 = $tmp1329;
            org$pandalanguage$pandac$ASTNode* $tmp1331 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1330 = $tmp1331;
            if (((panda$core$Bit) { rvalue1330 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1333 = (panda$collections$Array*) malloc(40);
            $tmp1333->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1333->refCount.value = 1;
            panda$collections$Array$init($tmp1333);
            children1332 = $tmp1333;
            panda$collections$Array$add$panda$collections$Array$T(children1332, ((panda$core$Object*) start1263));
            panda$collections$Array$add$panda$collections$Array$T(children1332, ((panda$core$Object*) rvalue1330));
            org$pandalanguage$pandac$ASTNode* $tmp1335 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1335->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1335->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1335, ((panda$core$Int64) { 103 }), start1263->position, ((panda$core$Object*) op1328.kind), ((panda$collections$ListView*) children1332));
            return $tmp1335;
        }
        }
        else {
        panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1335_91265->$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1337.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1338 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1338, &$s1339);
            org$pandalanguage$pandac$parser$Token $tmp1341 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1340 = $tmp1341;
            org$pandalanguage$pandac$ASTNode* $tmp1343 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1342 = $tmp1343;
            if (((panda$core$Bit) { rvalue1342 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array* $tmp1345 = (panda$collections$Array*) malloc(40);
            $tmp1345->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1345->refCount.value = 1;
            panda$collections$Array$init($tmp1345);
            children1344 = $tmp1345;
            panda$collections$Array$add$panda$collections$Array$T(children1344, ((panda$core$Object*) start1263));
            panda$collections$Array$add$panda$collections$Array$T(children1344, ((panda$core$Object*) rvalue1342));
            org$pandalanguage$pandac$ASTNode* $tmp1347 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1347->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1347->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1347, ((panda$core$Int64) { 103 }), start1263->position, ((panda$core$Object*) op1340.kind), ((panda$collections$ListView*) children1344));
            return $tmp1347;
        }
        }
        else {
        {
            return start1263;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1349;
    org$pandalanguage$pandac$ASTNode* t1352;
    org$pandalanguage$pandac$ASTNode* value1357;
    org$pandalanguage$pandac$ASTNode* value1363;
    panda$collections$Array* $tmp1350 = (panda$collections$Array*) malloc(40);
    $tmp1350->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1350->refCount.value = 1;
    panda$collections$Array$init($tmp1350);
    children1349 = $tmp1350;
    org$pandalanguage$pandac$ASTNode* $tmp1353 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1352 = $tmp1353;
    if (((panda$core$Bit) { t1352 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1349, ((panda$core$Object*) t1352));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1354 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1354->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1354->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1354, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1356 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1354);
    if (((panda$core$Bit) { $tmp1356.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1358 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value1357 = $tmp1358;
        if (((panda$core$Bit) { value1357 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1349, ((panda$core$Object*) value1357));
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1359 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1359.kind->$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1360.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1361 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1361, &$s1362);
        org$pandalanguage$pandac$ASTNode* $tmp1364 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value1363 = $tmp1364;
        if (((panda$core$Bit) { value1363 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1349, ((panda$core$Object*) value1363));
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1365 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1365->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1365->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1365, ((panda$core$Int64) { 129 }), t1352->position, ((panda$collections$ListView*) children1349));
    return $tmp1365;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1367;
    panda$core$Int64 kind1369;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1400_91370;
    panda$collections$Array* children1376;
    org$pandalanguage$pandac$ASTNode* child1379;
    org$pandalanguage$pandac$ASTNode* child1386;
    org$pandalanguage$pandac$parser$Token $tmp1368 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1367 = $tmp1368;
    {
        $match$1400_91370 = start1367.kind;
        panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1400_91370->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1371.value) {
        {
            kind1369 = ((panda$core$Int64) { 130 });
        }
        }
        else {
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1400_91370->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1372.value) {
        {
            kind1369 = ((panda$core$Int64) { 131 });
        }
        }
        else {
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1400_91370->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1373.value) {
        {
            kind1369 = ((panda$core$Int64) { 133 });
        }
        }
        else {
        panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1400_91370->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1374.value) {
        {
            kind1369 = ((panda$core$Int64) { 132 });
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1367, &$s1375);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1377 = (panda$collections$Array*) malloc(40);
    $tmp1377->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1377->refCount.value = 1;
    panda$collections$Array$init($tmp1377);
    children1376 = $tmp1377;
    org$pandalanguage$pandac$ASTNode* $tmp1380 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    child1379 = $tmp1380;
    if (((panda$core$Bit) { child1379 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1376, ((panda$core$Object*) child1379));
    $l1381:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1383 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1383->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1383->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1383, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1385 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1383);
    if (!((panda$core$Bit) { $tmp1385.nonnull }).value) goto $l1382;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1387 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        child1386 = $tmp1387;
        if (((panda$core$Bit) { child1386 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1376, ((panda$core$Object*) child1386));
    }
    goto $l1381;
    $l1382:;
    org$pandalanguage$pandac$ASTNode* $tmp1388 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1388->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1388->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1388, kind1369, start1367.position, ((panda$collections$ListView*) children1376));
    return $tmp1388;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1390;
    panda$collections$Array* children1400;
    org$pandalanguage$pandac$ASTNode* expr1409;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1391 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1391->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1391->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1391, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1394 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1391, &$s1393);
    start1390 = $tmp1394;
    if (((panda$core$Bit) { !start1390.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1395 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1395->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1395->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1395, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1398 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1395, &$s1397);
    if (((panda$core$Bit) { !$tmp1398.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1399;
    $tmp1399 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp1399->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp1399->refCount = 1;
    $tmp1399->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1399));
    panda$collections$Array* $tmp1401 = (panda$collections$Array*) malloc(40);
    $tmp1401->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1401->refCount.value = 1;
    panda$collections$Array$init($tmp1401);
    children1400 = $tmp1401;
    org$pandalanguage$pandac$ASTNode* $tmp1403 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1403->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1403->refCount.value = 1;
    panda$core$String* $tmp1405 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1390.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1403, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) start1390.value).position, $tmp1405);
    panda$collections$Array$add$panda$collections$Array$T(children1400, ((panda$core$Object*) $tmp1403));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1406 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1406->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1406->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1406, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1408 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1406);
    if (((panda$core$Bit) { !$tmp1408.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1410 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1409 = $tmp1410;
        if (((panda$core$Bit) { expr1409 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1400, ((panda$core$Object*) expr1409));
        $l1411:;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1413 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1413->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1413->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1413, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1415 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1413);
        if (!((panda$core$Bit) { $tmp1415.nonnull }).value) goto $l1412;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1416 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1409 = $tmp1416;
            if (((panda$core$Bit) { expr1409 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1400, ((panda$core$Object*) expr1409));
        }
        goto $l1411;
        $l1412:;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1417 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1417->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1417->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1417, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1420 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1417, &$s1419);
        if (((panda$core$Bit) { !$tmp1420.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1421 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1421->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1421->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1421, ((panda$core$Int64) { 107 }), ((org$pandalanguage$pandac$parser$Token) start1390.value).position, ((panda$collections$ListView*) children1400));
    return $tmp1421;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1423;
    org$pandalanguage$pandac$parser$Token$nullable label1428;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1424 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1424->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1424->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1424, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1427 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1424, &$s1426);
    start1423 = $tmp1427;
    if (((panda$core$Bit) { !start1423.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1429 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1429->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1429->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1429, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1431 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1429);
    label1428 = $tmp1431;
    if (((panda$core$Bit) { label1428.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1432 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1432->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1432->refCount.value = 1;
        panda$core$String* $tmp1434 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1428.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1432, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1423.value).position, $tmp1434);
        return $tmp1432;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1435 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1435->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1435->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1435, ((panda$core$Int64) { 134 }), ((org$pandalanguage$pandac$parser$Token) start1423.value).position);
    return $tmp1435;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1437;
    org$pandalanguage$pandac$parser$Token$nullable label1442;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1438 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1438->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1438->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1438, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1441 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1438, &$s1440);
    start1437 = $tmp1441;
    if (((panda$core$Bit) { !start1437.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1443 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1443->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1443->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1443, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1445 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1443);
    label1442 = $tmp1445;
    if (((panda$core$Bit) { label1442.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1446 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1446->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1446->refCount.value = 1;
        panda$core$String* $tmp1448 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1442.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1446, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1437.value).position, $tmp1448);
        return $tmp1446;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1449 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1449->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1449->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1449, ((panda$core$Int64) { 135 }), ((org$pandalanguage$pandac$parser$Token) start1437.value).position);
    return $tmp1449;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1451;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1503_91456;
    panda$collections$Array* children1469;
    org$pandalanguage$pandac$ASTNode* expr1472;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1452 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1452->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1452->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1452, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1455 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1452, &$s1454);
    start1451 = $tmp1455;
    if (((panda$core$Bit) { !start1451.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1457 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1503_91456 = $tmp1457.kind;
        panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1503_91456->$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1459 = $tmp1460.value;
        if ($tmp1459) goto $l1461;
        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1503_91456->$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1459 = $tmp1462.value;
        $l1461:;
        panda$core$Bit $tmp1463 = { $tmp1459 };
        bool $tmp1458 = $tmp1463.value;
        if ($tmp1458) goto $l1464;
        panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1503_91456->$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1458 = $tmp1465.value;
        $l1464:;
        panda$core$Bit $tmp1466 = { $tmp1458 };
        if ($tmp1466.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1467 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1467->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1467->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1467, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1451.value).position);
            return $tmp1467;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1470 = (panda$collections$Array*) malloc(40);
            $tmp1470->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1470->refCount.value = 1;
            panda$collections$Array$init($tmp1470);
            children1469 = $tmp1470;
            org$pandalanguage$pandac$ASTNode* $tmp1473 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1472 = $tmp1473;
            if (((panda$core$Bit) { expr1472 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1469, ((panda$core$Object*) expr1472));
            org$pandalanguage$pandac$ASTNode* $tmp1474 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
            $tmp1474->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1474->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1474, ((panda$core$Int64) { 136 }), ((org$pandalanguage$pandac$parser$Token) start1451.value).position, ((panda$collections$ListView*) children1469));
            return $tmp1474;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind* $match$1521_91476;
    {
        org$pandalanguage$pandac$parser$Token $tmp1477 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1521_91476 = $tmp1477.kind;
        panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1521_91476->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1478.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1479 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1479;
        }
        }
        else {
        panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1521_91476->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1480.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1481 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1481;
        }
        }
        else {
        panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1521_91476->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1482.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1483 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1483;
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
    org$pandalanguage$pandac$parser$Token$Kind* $match$1530_91484;
    {
        org$pandalanguage$pandac$parser$Token $tmp1485 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1530_91484 = $tmp1485.kind;
        panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1530_91484->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1486.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1487 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1487;
        }
        }
        else {
        panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1530_91484->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1488.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1489 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1489;
        }
        }
        else {
        panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1530_91484->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1490.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1491 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1491;
        }
        }
        else {
        panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1530_91484->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1492.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1493 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1493;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1494 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp1494->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp1494->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1494, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1494, &$s1496);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind* $match$1547_91497;
    org$pandalanguage$pandac$parser$Token id1516;
    {
        org$pandalanguage$pandac$parser$Token $tmp1498 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1547_91497 = $tmp1498.kind;
        panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1499.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1500 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1500;
        }
        }
        else {
        panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1501.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1502 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1502;
        }
        }
        else {
        panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1503.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1504 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1504;
        }
        }
        else {
        panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1505.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1506 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1506;
        }
        }
        else {
        panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1507.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1508 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1508;
        }
        }
        else {
        panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1509.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1510 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1510;
        }
        }
        else {
        panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1511.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1512 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1512;
        }
        }
        else {
        panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1513.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1514 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1514;
        }
        }
        else {
        panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1515.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1517 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1516 = $tmp1517;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1518 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp1518->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp1518->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1518, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1520 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1518);
            if (((panda$core$Bit) { $tmp1520.nonnull }).value) {
            {
                panda$core$String* $tmp1521 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1516);
                org$pandalanguage$pandac$ASTNode* $tmp1522 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1521);
                return $tmp1522;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1516);
            org$pandalanguage$pandac$ASTNode* $tmp1523 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1523;
        }
        }
        else {
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1524 = $tmp1525.value;
        if ($tmp1524) goto $l1526;
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1524 = $tmp1527.value;
        $l1526:;
        panda$core$Bit $tmp1528 = { $tmp1524 };
        if ($tmp1528.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1529 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1529;
        }
        }
        else {
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1532 = $tmp1533.value;
        if ($tmp1532) goto $l1534;
        panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1532 = $tmp1535.value;
        $l1534:;
        panda$core$Bit $tmp1536 = { $tmp1532 };
        bool $tmp1531 = $tmp1536.value;
        if ($tmp1531) goto $l1537;
        panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1531 = $tmp1538.value;
        $l1537:;
        panda$core$Bit $tmp1539 = { $tmp1531 };
        bool $tmp1530 = $tmp1539.value;
        if ($tmp1530) goto $l1540;
        panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1530 = $tmp1541.value;
        $l1540:;
        panda$core$Bit $tmp1542 = { $tmp1530 };
        if ($tmp1542.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1543 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1543;
        }
        }
        else {
        panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1547_91497->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1544.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1545 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1545;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1546 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp1546->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp1546->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1546, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1546, &$s1548);
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
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1549;
    org$pandalanguage$pandac$parser$Token$nullable next1554;
    panda$core$MutableString* name1559;
    panda$core$Char8 $tmp1568;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1550 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1550->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1550->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1550, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1553 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1550, &$s1552);
    start1549 = $tmp1553;
    if (((panda$core$Bit) { !start1549.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1555 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1555->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1555->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1555, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1558 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1555, &$s1557);
    next1554 = $tmp1558;
    if (((panda$core$Bit) { !next1554.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1560 = (panda$core$MutableString*) malloc(48);
    $tmp1560->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1560->refCount.value = 1;
    panda$core$String* $tmp1562 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1554.value));
    panda$core$MutableString$init$panda$core$String($tmp1560, $tmp1562);
    name1559 = $tmp1560;
    $l1563:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1565 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1565->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1565->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1565, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1567 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1565);
        next1554 = $tmp1567;
        if (((panda$core$Bit) { !next1554.nonnull }).value) {
        {
            goto $l1564;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1568, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1559, $tmp1568);
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1569 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1569->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1569->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1569, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1572 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1569, &$s1571);
        next1554 = $tmp1572;
        if (((panda$core$Bit) { !next1554.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1573 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1554.value));
        panda$core$MutableString$append$panda$core$String(name1559, $tmp1573);
    }
    }
    $l1564:;
    org$pandalanguage$pandac$ASTNode* $tmp1574 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1574->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1574->refCount.value = 1;
    panda$core$String* $tmp1576 = panda$core$MutableString$finish$R$panda$core$String(name1559);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1574, ((panda$core$Int64) { 100 }), ((org$pandalanguage$pandac$parser$Token) start1549.value).position, $tmp1576);
    return $tmp1574;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1577;
    org$pandalanguage$pandac$parser$Token$nullable next1582;
    panda$core$MutableString* name1587;
    panda$core$Char8 $tmp1596;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1578 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1578->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1578->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1578, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1581 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1578, &$s1580);
    start1577 = $tmp1581;
    if (((panda$core$Bit) { !start1577.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1583 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1583->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1583->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1583, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1586 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1583, &$s1585);
    next1582 = $tmp1586;
    if (((panda$core$Bit) { !next1582.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1588 = (panda$core$MutableString*) malloc(48);
    $tmp1588->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1588->refCount.value = 1;
    panda$core$String* $tmp1590 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1582.value));
    panda$core$MutableString$init$panda$core$String($tmp1588, $tmp1590);
    name1587 = $tmp1588;
    $l1591:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1593 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1593->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1593->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1593, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1595 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1593);
        next1582 = $tmp1595;
        if (((panda$core$Bit) { !next1582.nonnull }).value) {
        {
            goto $l1592;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1596, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1587, $tmp1596);
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1597 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1597->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1597->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1597, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1600 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1597, &$s1599);
        next1582 = $tmp1600;
        if (((panda$core$Bit) { !next1582.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1601 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1582.value));
        panda$core$MutableString$append$panda$core$String(name1587, $tmp1601);
    }
    }
    $l1592:;
    org$pandalanguage$pandac$ASTNode* $tmp1602 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1602->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1602->refCount.value = 1;
    panda$core$String* $tmp1604 = panda$core$MutableString$finish$R$panda$core$String(name1587);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1602, ((panda$core$Int64) { 101 }), ((org$pandalanguage$pandac$parser$Token) start1577.value).position, $tmp1604);
    return $tmp1602;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1605;
    org$pandalanguage$pandac$parser$Token$nullable id1610;
    panda$collections$Array* children1615;
    panda$collections$Array* idChildren1618;
    org$pandalanguage$pandac$ASTNode* t1624;
    org$pandalanguage$pandac$ASTNode* t1641;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1606 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1606->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1606->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1606, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1609 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1606, &$s1608);
    start1605 = $tmp1609;
    if (((panda$core$Bit) { !start1605.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1611 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1611->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1611->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1611, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1614 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1611, &$s1613);
    id1610 = $tmp1614;
    if (((panda$core$Bit) { !id1610.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1616 = (panda$collections$Array*) malloc(40);
    $tmp1616->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1616->refCount.value = 1;
    panda$collections$Array$init($tmp1616);
    children1615 = $tmp1616;
    panda$collections$Array* $tmp1619 = (panda$collections$Array*) malloc(40);
    $tmp1619->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1619->refCount.value = 1;
    panda$collections$Array$init($tmp1619);
    idChildren1618 = $tmp1619;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1621 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1621->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1621->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1621, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1623 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1621);
    if (((panda$core$Bit) { $tmp1623.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1625 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1624 = $tmp1625;
        if (((panda$core$Bit) { t1624 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(idChildren1618, ((panda$core$Object*) t1624));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1626 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1626->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1626->refCount.value = 1;
    panda$core$String* $tmp1628 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1610.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1626, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1610.value).position, ((panda$core$Object*) $tmp1628), ((panda$collections$ListView*) idChildren1618));
    panda$collections$Array$add$panda$collections$Array$T(children1615, ((panda$core$Object*) $tmp1626));
    $l1629:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1631 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1631->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1631->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1631, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1633 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1631);
    if (!((panda$core$Bit) { $tmp1633.nonnull }).value) goto $l1630;
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1634 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1634->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1634->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1634, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1637 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1634, &$s1636);
        id1610 = $tmp1637;
        if (((panda$core$Bit) { !id1610.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$clear(idChildren1618);
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1638 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1638->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1638->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1638, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1640 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1638);
        if (((panda$core$Bit) { $tmp1640.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1642 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1641 = $tmp1642;
            if (((panda$core$Bit) { t1641 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(idChildren1618, ((panda$core$Object*) t1641));
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1643 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1643->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1643->refCount.value = 1;
        panda$core$String* $tmp1645 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1610.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1643, ((panda$core$Int64) { 106 }), ((org$pandalanguage$pandac$parser$Token) id1610.value).position, ((panda$core$Object*) $tmp1645), ((panda$collections$ListView*) idChildren1618));
        panda$collections$Array$add$panda$collections$Array$T(children1615, ((panda$core$Object*) $tmp1643));
    }
    goto $l1629;
    $l1630:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1646 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1646->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1646->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1646, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1649 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1646, &$s1648);
    if (((panda$core$Bit) { !$tmp1649.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1650 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1650->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1650->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1650, ((panda$core$Int64) { 137 }), ((org$pandalanguage$pandac$parser$Token) start1605.value).position, ((panda$collections$ListView*) children1615));
    return $tmp1650;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1652;
    panda$collections$Array* children1657;
    org$pandalanguage$pandac$ASTNode* t1660;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1653 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1653->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1653->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1653, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1656 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1653, &$s1655);
    start1652 = $tmp1656;
    if (((panda$core$Bit) { !start1652.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1658 = (panda$collections$Array*) malloc(40);
    $tmp1658->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1658->refCount.value = 1;
    panda$collections$Array$init($tmp1658);
    children1657 = $tmp1658;
    org$pandalanguage$pandac$ASTNode* $tmp1661 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1660 = $tmp1661;
    if (((panda$core$Bit) { t1660 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1657, ((panda$core$Object*) t1660));
    $l1662:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1664 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1664->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1664->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1664, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1666 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1664);
    if (!((panda$core$Bit) { $tmp1666.nonnull }).value) goto $l1663;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1667 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1660 = $tmp1667;
        if (((panda$core$Bit) { t1660 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1657, ((panda$core$Object*) t1660));
    }
    goto $l1662;
    $l1663:;
    org$pandalanguage$pandac$ASTNode* $tmp1668 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1668->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1668->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1668, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start1652.value).position, ((panda$collections$ListView*) children1657));
    return $tmp1668;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* children1670;
    org$pandalanguage$pandac$parser$Token$nullable next1675;
    org$pandalanguage$pandac$Position $tmp1684;
    panda$collections$Array* $tmp1671 = (panda$collections$Array*) malloc(40);
    $tmp1671->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1671->refCount.value = 1;
    panda$collections$Array$init($tmp1671);
    children1670 = $tmp1671;
    $l1673:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1676 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1676->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1676->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1676, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1678 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1676);
        next1675 = $tmp1678;
        if (((panda$core$Bit) { !next1675.nonnull }).value) {
        {
            goto $l1674;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1679 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1679->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1679->refCount.value = 1;
        panda$core$String* $tmp1681 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1675.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1679, ((panda$core$Int64) { 143 }), ((org$pandalanguage$pandac$parser$Token) next1675.value).position, $tmp1681);
        panda$collections$Array$add$panda$collections$Array$T(children1670, ((panda$core$Object*) $tmp1679));
    }
    }
    $l1674:;
    org$pandalanguage$pandac$ASTNode* $tmp1682 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1682->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1682->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1684);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1682, ((panda$core$Int64) { 144 }), $tmp1684, ((panda$collections$ListView*) children1670));
    return $tmp1682;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1685;
    panda$core$MutableString* result1690;
    org$pandalanguage$pandac$parser$Token next1695;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1686 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1686->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1686->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1686, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1689 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1686, &$s1688);
    start1685 = $tmp1689;
    if (((panda$core$Bit) { !start1685.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1691 = (panda$core$MutableString*) malloc(48);
    $tmp1691->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1691->refCount.value = 1;
    panda$core$MutableString$init($tmp1691);
    result1690 = $tmp1691;
    $l1693:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1696 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1695 = $tmp1696;
        panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1695.kind->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1697.value) {
        {
            goto $l1694;
        }
        }
        panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1695.kind->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1698.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1685.value), &$s1699);
            return NULL;
        }
        }
        panda$core$String* $tmp1700 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1695);
        panda$core$MutableString$append$panda$core$String(result1690, $tmp1700);
    }
    }
    $l1694:;
    org$pandalanguage$pandac$ASTNode* $tmp1701 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1701->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1701->refCount.value = 1;
    panda$core$String* $tmp1703 = panda$core$MutableString$finish$R$panda$core$String(result1690);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1701, ((panda$core$Int64) { 141 }), ((org$pandalanguage$pandac$parser$Token) start1685.value).position, $tmp1703);
    return $tmp1701;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1704;
    org$pandalanguage$pandac$ASTNode* t1709;
    panda$collections$Array* children1711;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1705 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1705->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1705->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1705, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1705, &$s1707);
    id1704 = $tmp1708;
    if (((panda$core$Bit) { !id1704.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1710 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1709 = $tmp1710;
    if (((panda$core$Bit) { t1709 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1712 = (panda$collections$Array*) malloc(40);
    $tmp1712->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1712->refCount.value = 1;
    panda$collections$Array$init($tmp1712);
    children1711 = $tmp1712;
    panda$collections$Array$add$panda$collections$Array$T(children1711, ((panda$core$Object*) t1709));
    org$pandalanguage$pandac$ASTNode* $tmp1714 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1714->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1714->refCount.value = 1;
    panda$core$String* $tmp1716 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1704.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1714, ((panda$core$Int64) { 149 }), ((org$pandalanguage$pandac$parser$Token) id1704.value).position, ((panda$core$Object*) $tmp1716), ((panda$collections$ListView*) children1711));
    return $tmp1714;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1717;
    panda$collections$Array* children1722;
    org$pandalanguage$pandac$ASTNode* param1728;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1718 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1718->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1718->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1718, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1721 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1718, &$s1720);
    start1717 = $tmp1721;
    if (((panda$core$Bit) { !start1717.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1723 = (panda$collections$Array*) malloc(40);
    $tmp1723->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1723->refCount.value = 1;
    panda$collections$Array$init($tmp1723);
    children1722 = $tmp1723;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1725 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1725->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1725->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1725, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1727 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1725);
    if (((panda$core$Bit) { !$tmp1727.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1729 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1728 = $tmp1729;
        if (((panda$core$Bit) { param1728 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1722, ((panda$core$Object*) param1728));
        $l1730:;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1732 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1732->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1732->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1732, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1734 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1732);
        if (!((panda$core$Bit) { $tmp1734.nonnull }).value) goto $l1731;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1735 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
            param1728 = $tmp1735;
            if (((panda$core$Bit) { param1728 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1722, ((panda$core$Object*) param1728));
        }
        goto $l1730;
        $l1731:;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1736 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1736->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1736->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1736, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1739 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1736, &$s1738);
        if (((panda$core$Bit) { !$tmp1739.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1740 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1740->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1740->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1740, ((panda$core$Int64) { 150 }), ((org$pandalanguage$pandac$parser$Token) start1717.value).position, ((panda$collections$ListView*) children1722));
    return $tmp1740;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$core$Int64 kind1742;
    org$pandalanguage$pandac$parser$Token$nullable start1743;
    panda$core$String* name1751;
    panda$collections$Array* children1753;
    org$pandalanguage$pandac$ASTNode* params1756;
    org$pandalanguage$pandac$ASTNode* returnType1760;
    org$pandalanguage$pandac$Position $tmp1764;
    org$pandalanguage$pandac$ASTNode* b1767;
    org$pandalanguage$pandac$Position $tmp1771;
    org$pandalanguage$pandac$parser$Token token1772;
    panda$core$String* tokenText1774;
    org$pandalanguage$pandac$ASTNode* post1787;
    org$pandalanguage$pandac$Position $tmp1791;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1744 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1744->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1744->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1744, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1746 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1744);
    start1743 = $tmp1746;
    if (((panda$core$Bit) { !start1743.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1747 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1747->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1747->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1747, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1750 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1747, &$s1749);
        start1743 = $tmp1750;
        if (((panda$core$Bit) { !start1743.nonnull }).value) {
        {
            return NULL;
        }
        }
        kind1742 = ((panda$core$Int64) { 145 });
    }
    }
    else {
    {
        kind1742 = ((panda$core$Int64) { 146 });
    }
    }
    panda$core$String* $tmp1752 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1751 = $tmp1752;
    if (((panda$core$Bit) { name1751 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1754 = (panda$collections$Array*) malloc(40);
    $tmp1754->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1754->refCount.value = 1;
    panda$collections$Array$init($tmp1754);
    children1753 = $tmp1754;
    panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1757 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1756 = $tmp1757;
    if (((panda$core$Bit) { params1756 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) params1756));
    org$pandalanguage$pandac$parser$Token $tmp1758 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1758.kind->$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1759.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1761 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        returnType1760 = $tmp1761;
        if (((panda$core$Bit) { returnType1760 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) returnType1760));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1762 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1762->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1762->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1764);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1762, ((panda$core$Int64) { 138 }), $tmp1764);
        panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) $tmp1762));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1765 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1765.kind->$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1766.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1768 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
        b1767 = $tmp1768;
        if (((panda$core$Bit) { b1767 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) b1767));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1769 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1769->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1769->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1771);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1769, ((panda$core$Int64) { 138 }), $tmp1771);
        panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) $tmp1769));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1773 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1772 = $tmp1773;
    panda$core$String* $tmp1775 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1772);
    tokenText1774 = $tmp1775;
    panda$core$Bit $tmp1777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1772.kind->$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1776 = $tmp1777.value;
    if (!$tmp1776) goto $l1778;
    panda$core$Bit $tmp1781 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1774, &$s1780);
    bool $tmp1779 = $tmp1781.value;
    if ($tmp1779) goto $l1782;
    panda$core$Bit $tmp1784 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1774, &$s1783);
    $tmp1779 = $tmp1784.value;
    $l1782:;
    panda$core$Bit $tmp1785 = { $tmp1779 };
    $tmp1776 = $tmp1785.value;
    $l1778:;
    panda$core$Bit $tmp1786 = { $tmp1776 };
    if ($tmp1786.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1788 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1787 = $tmp1788;
        if (((panda$core$Bit) { post1787 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) post1787));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1789 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1789->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1789->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1791);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1789, ((panda$core$Int64) { 138 }), $tmp1791);
        panda$collections$Array$add$panda$collections$Array$T(children1753, ((panda$core$Object*) $tmp1789));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1792 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1792->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1792->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1792, kind1742, ((org$pandalanguage$pandac$parser$Token) start1743.value).position, ((panda$core$Object*) name1751), ((panda$collections$ListView*) children1753));
    return $tmp1792;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1794;
    panda$collections$Array* children1799;
    org$pandalanguage$pandac$ASTNode* params1802;
    org$pandalanguage$pandac$ASTNode* b1804;
    org$pandalanguage$pandac$parser$Token token1806;
    panda$core$String* tokenText1808;
    org$pandalanguage$pandac$ASTNode* post1821;
    org$pandalanguage$pandac$Position $tmp1825;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1795 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1795->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1795->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1795, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1798 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1795, &$s1797);
    start1794 = $tmp1798;
    if (((panda$core$Bit) { !start1794.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1800 = (panda$collections$Array*) malloc(40);
    $tmp1800->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1800->refCount.value = 1;
    panda$collections$Array$init($tmp1800);
    children1799 = $tmp1800;
    panda$collections$Array$add$panda$collections$Array$T(children1799, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1799, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$ASTNode* $tmp1803 = org$pandalanguage$pandac$parser$Parser$parameters$R$org$pandalanguage$pandac$ASTNode$Q(self);
    params1802 = $tmp1803;
    if (((panda$core$Bit) { params1802 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1799, ((panda$core$Object*) params1802));
    org$pandalanguage$pandac$ASTNode* $tmp1805 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
    b1804 = $tmp1805;
    if (((panda$core$Bit) { b1804 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(children1799, ((panda$core$Object*) b1804));
    org$pandalanguage$pandac$parser$Token $tmp1807 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1806 = $tmp1807;
    panda$core$String* $tmp1809 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1806);
    tokenText1808 = $tmp1809;
    panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1806.kind->$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1810 = $tmp1811.value;
    if (!$tmp1810) goto $l1812;
    panda$core$Bit $tmp1815 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1808, &$s1814);
    bool $tmp1813 = $tmp1815.value;
    if ($tmp1813) goto $l1816;
    panda$core$Bit $tmp1818 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1808, &$s1817);
    $tmp1813 = $tmp1818.value;
    $l1816:;
    panda$core$Bit $tmp1819 = { $tmp1813 };
    $tmp1810 = $tmp1819.value;
    $l1812:;
    panda$core$Bit $tmp1820 = { $tmp1810 };
    if ($tmp1820.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1822 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1821 = $tmp1822;
        if (((panda$core$Bit) { post1821 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children1799, ((panda$core$Object*) post1821));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1823 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp1823->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1823->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1825);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1823, ((panda$core$Int64) { 138 }), $tmp1825);
        panda$collections$Array$add$panda$collections$Array$T(children1799, ((panda$core$Object*) $tmp1823));
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1826 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1826->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1826->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1826, ((panda$core$Int64) { 147 }), ((org$pandalanguage$pandac$parser$Token) start1794.value).position, ((panda$collections$ListView*) children1799));
    return $tmp1826;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1828;
    panda$collections$Array* children1830;
    org$pandalanguage$pandac$ASTNode* $tmp1829 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1828 = $tmp1829;
    if (((panda$core$Bit) { decl1828 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1831 = (panda$collections$Array*) malloc(40);
    $tmp1831->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1831->refCount.value = 1;
    panda$collections$Array$init($tmp1831);
    children1830 = $tmp1831;
    panda$collections$Array$add$panda$collections$Array$T(children1830, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children1830, ((panda$core$Object*) p_annotations));
    panda$collections$Array$add$panda$collections$Array$T(children1830, ((panda$core$Object*) decl1828));
    org$pandalanguage$pandac$ASTNode* $tmp1833 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1833->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1833->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1833, ((panda$core$Int64) { 148 }), decl1828->position, ((panda$collections$ListView*) children1830));
    return $tmp1833;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1835;
    panda$collections$Array* fields1840;
    org$pandalanguage$pandac$ASTNode* field1848;
    panda$collections$Array* children1860;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1836 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1836->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1836->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1836, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1839 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1836, &$s1838);
    name1835 = $tmp1839;
    if (((panda$core$Bit) { !name1835.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1841 = (panda$collections$Array*) malloc(40);
    $tmp1841->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1841->refCount.value = 1;
    panda$collections$Array$init($tmp1841);
    fields1840 = $tmp1841;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1843 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1843->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1843->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1843, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1845 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1843);
    if (((panda$core$Bit) { $tmp1845.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1846 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1847 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1846.kind->$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1847.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1849 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1848 = $tmp1849;
            if (((panda$core$Bit) { field1848 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1840, ((panda$core$Object*) field1848));
            $l1850:;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1852 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp1852->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp1852->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1852, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1854 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1852);
            if (!((panda$core$Bit) { $tmp1854.nonnull }).value) goto $l1851;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1855 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                field1848 = $tmp1855;
                if (((panda$core$Bit) { field1848 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1840, ((panda$core$Object*) field1848));
            }
            goto $l1850;
            $l1851:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind* $tmp1856 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp1856->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp1856->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1856, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1859 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1856, &$s1858);
        if (((panda$core$Bit) { !$tmp1859.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$Array* $tmp1861 = (panda$collections$Array*) malloc(40);
    $tmp1861->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1861->refCount.value = 1;
    panda$collections$Array$init($tmp1861);
    children1860 = $tmp1861;
    panda$collections$Array$add$panda$collections$Array$T(children1860, ((panda$core$Object*) p_doccomment));
    org$pandalanguage$pandac$ASTNode* $tmp1863 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1863->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1863->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1863, ((panda$core$Int64) { 159 }), ((org$pandalanguage$pandac$parser$Token) name1835.value).position, ((panda$collections$ListView*) fields1840));
    panda$collections$Array$add$panda$collections$Array$T(children1860, ((panda$core$Object*) $tmp1863));
    org$pandalanguage$pandac$ASTNode* $tmp1865 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1865->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1865->refCount.value = 1;
    panda$core$String* $tmp1867 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1835.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1865, ((panda$core$Int64) { 156 }), ((org$pandalanguage$pandac$parser$Token) name1835.value).position, ((panda$core$Object*) $tmp1867), ((panda$collections$ListView*) children1860));
    return $tmp1865;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, org$pandalanguage$pandac$ASTNode* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1868;
    org$pandalanguage$pandac$parser$Token$nullable name1873;
    panda$collections$Array* members1882;
    org$pandalanguage$pandac$ASTNode* dc1885;
    org$pandalanguage$pandac$Position $tmp1888;
    org$pandalanguage$pandac$parser$Token next1891;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1957_131893;
    org$pandalanguage$pandac$ASTNode* c1940;
    org$pandalanguage$pandac$Position $tmp1944;
    org$pandalanguage$pandac$ASTNode* a1945;
    org$pandalanguage$pandac$Position $tmp1948;
    org$pandalanguage$pandac$parser$Token next1953;
    org$pandalanguage$pandac$parser$Token$Kind* $match$1981_131955;
    org$pandalanguage$pandac$ASTNode* decl1979;
    org$pandalanguage$pandac$Position $tmp1983;
    org$pandalanguage$pandac$Position $tmp1986;
    org$pandalanguage$pandac$ASTNode* decl1990;
    org$pandalanguage$pandac$Position $tmp1994;
    org$pandalanguage$pandac$Position $tmp1997;
    org$pandalanguage$pandac$ASTNode* decl2001;
    org$pandalanguage$pandac$Position $tmp2005;
    org$pandalanguage$pandac$Position $tmp2008;
    org$pandalanguage$pandac$ASTNode* decl2016;
    org$pandalanguage$pandac$Position $tmp2020;
    org$pandalanguage$pandac$Position $tmp2023;
    org$pandalanguage$pandac$ASTNode* decl2039;
    org$pandalanguage$pandac$Position $tmp2043;
    org$pandalanguage$pandac$Position $tmp2046;
    panda$collections$Array* children2053;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1869 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1869->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1869->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1869, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1872 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1869, &$s1871);
    start1868 = $tmp1872;
    if (((panda$core$Bit) { !start1868.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1874 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1874->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1874->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1874, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1877 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1874, &$s1876);
    name1873 = $tmp1877;
    if (((panda$core$Bit) { !name1873.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1878 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp1878->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp1878->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp1878, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1881 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1878, &$s1880);
    if (((panda$core$Bit) { !$tmp1881.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1883 = (panda$collections$Array*) malloc(40);
    $tmp1883->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1883->refCount.value = 1;
    panda$collections$Array$init($tmp1883);
    members1882 = $tmp1883;
    org$pandalanguage$pandac$ASTNode* $tmp1886 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1886->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1886->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1888);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1886, ((panda$core$Int64) { 138 }), $tmp1888);
    dc1885 = $tmp1886;
    $l1889:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1892 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1891 = $tmp1892;
        {
            $match$1957_131893 = next1891.kind;
            panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1902 = $tmp1903.value;
            if ($tmp1902) goto $l1904;
            panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1902 = $tmp1905.value;
            $l1904:;
            panda$core$Bit $tmp1906 = { $tmp1902 };
            bool $tmp1901 = $tmp1906.value;
            if ($tmp1901) goto $l1907;
            panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1901 = $tmp1908.value;
            $l1907:;
            panda$core$Bit $tmp1909 = { $tmp1901 };
            bool $tmp1900 = $tmp1909.value;
            if ($tmp1900) goto $l1910;
            panda$core$Bit $tmp1911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1900 = $tmp1911.value;
            $l1910:;
            panda$core$Bit $tmp1912 = { $tmp1900 };
            bool $tmp1899 = $tmp1912.value;
            if ($tmp1899) goto $l1913;
            panda$core$Bit $tmp1914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1899 = $tmp1914.value;
            $l1913:;
            panda$core$Bit $tmp1915 = { $tmp1899 };
            bool $tmp1898 = $tmp1915.value;
            if ($tmp1898) goto $l1916;
            panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1898 = $tmp1917.value;
            $l1916:;
            panda$core$Bit $tmp1918 = { $tmp1898 };
            bool $tmp1897 = $tmp1918.value;
            if ($tmp1897) goto $l1919;
            panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1897 = $tmp1920.value;
            $l1919:;
            panda$core$Bit $tmp1921 = { $tmp1897 };
            bool $tmp1896 = $tmp1921.value;
            if ($tmp1896) goto $l1922;
            panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1896 = $tmp1923.value;
            $l1922:;
            panda$core$Bit $tmp1924 = { $tmp1896 };
            bool $tmp1895 = $tmp1924.value;
            if ($tmp1895) goto $l1925;
            panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1895 = $tmp1926.value;
            $l1925:;
            panda$core$Bit $tmp1927 = { $tmp1895 };
            bool $tmp1894 = $tmp1927.value;
            if ($tmp1894) goto $l1928;
            panda$core$Bit $tmp1929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1894 = $tmp1929.value;
            $l1928:;
            panda$core$Bit $tmp1930 = { $tmp1894 };
            if ($tmp1930.value) {
            {
                goto $l1890;
            }
            }
            else {
            panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1931.value) {
            {
                panda$core$Bit $tmp1932 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1885->kind, ((panda$core$Int64) { 138 }));
                if ($tmp1932.value) {
                {
                    panda$core$String* $tmp1934 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1891);
                    panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1933, $tmp1934);
                    panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1935, &$s1936);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1891, $tmp1937);
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1938 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1885 = $tmp1938;
            }
            }
            else {
            panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1957_131893->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1939.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1941 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1885);
                c1940 = $tmp1941;
                if (((panda$core$Bit) { c1940 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1882, ((panda$core$Object*) c1940));
                org$pandalanguage$pandac$ASTNode* $tmp1942 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1942->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1942->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1944);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1942, ((panda$core$Int64) { 138 }), $tmp1944);
                dc1885 = $tmp1942;
            }
            }
            else {
            {
                goto $l1890;
            }
            }
            }
            }
        }
    }
    }
    $l1890:;
    org$pandalanguage$pandac$ASTNode* $tmp1946 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp1946->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1946->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1948);
    panda$collections$Array* $tmp1949 = (panda$collections$Array*) malloc(40);
    $tmp1949->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1949->refCount.value = 1;
    panda$collections$Array$init($tmp1949);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1946, ((panda$core$Int64) { 144 }), $tmp1948, ((panda$collections$ListView*) $tmp1949));
    a1945 = $tmp1946;
    $l1951:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1954 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1953 = $tmp1954;
        {
            $match$1981_131955 = next1953.kind;
            panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1956.value) {
            {
                panda$core$Int64 $tmp1957 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1945->children);
                panda$core$Bit $tmp1958 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1957, ((panda$core$Int64) { 0 }));
                if ($tmp1958.value) {
                {
                    panda$core$String* $tmp1960 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1953);
                    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1959, $tmp1960);
                    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, &$s1962);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1953, $tmp1963);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1964 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
                a1945 = $tmp1964;
            }
            }
            else {
            panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1965.value) {
            {
                panda$core$Bit $tmp1967 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(dc1885->kind, ((panda$core$Int64) { 138 }));
                bool $tmp1966 = $tmp1967.value;
                if ($tmp1966) goto $l1968;
                panda$core$Int64 $tmp1969 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1945->children);
                panda$core$Bit $tmp1970 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1969, ((panda$core$Int64) { 0 }));
                $tmp1966 = $tmp1970.value;
                $l1968:;
                panda$core$Bit $tmp1971 = { $tmp1966 };
                if ($tmp1971.value) {
                {
                    panda$core$String* $tmp1973 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1953);
                    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1972, $tmp1973);
                    panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1953, $tmp1976);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1977 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1885 = $tmp1977;
            }
            }
            else {
            panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1978.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1980 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1885, a1945);
                decl1979 = $tmp1980;
                if (((panda$core$Bit) { decl1979 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1882, ((panda$core$Object*) decl1979));
                org$pandalanguage$pandac$ASTNode* $tmp1981 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1981->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1981->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1983);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1981, ((panda$core$Int64) { 138 }), $tmp1983);
                dc1885 = $tmp1981;
                org$pandalanguage$pandac$ASTNode* $tmp1984 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1984->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1984->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1986);
                panda$collections$Array* $tmp1987 = (panda$collections$Array*) malloc(40);
                $tmp1987->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1987->refCount.value = 1;
                panda$collections$Array$init($tmp1987);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1984, ((panda$core$Int64) { 144 }), $tmp1986, ((panda$collections$ListView*) $tmp1987));
                a1945 = $tmp1984;
            }
            }
            else {
            panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1989.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1991 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1885, a1945);
                decl1990 = $tmp1991;
                if (((panda$core$Bit) { decl1990 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1882, ((panda$core$Object*) decl1990));
                org$pandalanguage$pandac$ASTNode* $tmp1992 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1992->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1992->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1994);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1992, ((panda$core$Int64) { 138 }), $tmp1994);
                dc1885 = $tmp1992;
                org$pandalanguage$pandac$ASTNode* $tmp1995 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp1995->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1995->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp1997);
                panda$collections$Array* $tmp1998 = (panda$collections$Array*) malloc(40);
                $tmp1998->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1998->refCount.value = 1;
                panda$collections$Array$init($tmp1998);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1995, ((panda$core$Int64) { 144 }), $tmp1997, ((panda$collections$ListView*) $tmp1998));
                a1945 = $tmp1995;
            }
            }
            else {
            panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2000.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2002 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1885, a1945);
                decl2001 = $tmp2002;
                if (((panda$core$Bit) { decl2001 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1882, ((panda$core$Object*) decl2001));
                org$pandalanguage$pandac$ASTNode* $tmp2003 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp2003->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp2003->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2005);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2003, ((panda$core$Int64) { 138 }), $tmp2005);
                dc1885 = $tmp2003;
                org$pandalanguage$pandac$ASTNode* $tmp2006 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp2006->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp2006->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2008);
                panda$collections$Array* $tmp2009 = (panda$collections$Array*) malloc(40);
                $tmp2009->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2009->refCount.value = 1;
                panda$collections$Array$init($tmp2009);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2006, ((panda$core$Int64) { 144 }), $tmp2008, ((panda$collections$ListView*) $tmp2009));
                a1945 = $tmp2006;
            }
            }
            else {
            panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp2011 = $tmp2012.value;
            if ($tmp2011) goto $l2013;
            panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 20 }));
            $tmp2011 = $tmp2014.value;
            $l2013:;
            panda$core$Bit $tmp2015 = { $tmp2011 };
            if ($tmp2015.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2017 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1885, a1945);
                decl2016 = $tmp2017;
                if (((panda$core$Bit) { decl2016 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1882, ((panda$core$Object*) decl2016));
                org$pandalanguage$pandac$ASTNode* $tmp2018 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp2018->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp2018->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2020);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2018, ((panda$core$Int64) { 138 }), $tmp2020);
                dc1885 = $tmp2018;
                org$pandalanguage$pandac$ASTNode* $tmp2021 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp2021->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp2021->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2023);
                panda$collections$Array* $tmp2024 = (panda$collections$Array*) malloc(40);
                $tmp2024->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2024->refCount.value = 1;
                panda$collections$Array$init($tmp2024);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2021, ((panda$core$Int64) { 144 }), $tmp2023, ((panda$collections$ListView*) $tmp2024));
                a1945 = $tmp2021;
            }
            }
            else {
            panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp2028 = $tmp2029.value;
            if ($tmp2028) goto $l2030;
            panda$core$Bit $tmp2031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp2028 = $tmp2031.value;
            $l2030:;
            panda$core$Bit $tmp2032 = { $tmp2028 };
            bool $tmp2027 = $tmp2032.value;
            if ($tmp2027) goto $l2033;
            panda$core$Bit $tmp2034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp2027 = $tmp2034.value;
            $l2033:;
            panda$core$Bit $tmp2035 = { $tmp2027 };
            bool $tmp2026 = $tmp2035.value;
            if ($tmp2026) goto $l2036;
            panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 26 }));
            $tmp2026 = $tmp2037.value;
            $l2036:;
            panda$core$Bit $tmp2038 = { $tmp2026 };
            if ($tmp2038.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2040 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1885, a1945);
                decl2039 = $tmp2040;
                if (((panda$core$Bit) { decl2039 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1882, ((panda$core$Object*) decl2039));
                org$pandalanguage$pandac$ASTNode* $tmp2041 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp2041->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp2041->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2043);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2041, ((panda$core$Int64) { 138 }), $tmp2043);
                dc1885 = $tmp2041;
                org$pandalanguage$pandac$ASTNode* $tmp2044 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
                $tmp2044->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp2044->refCount.value = 1;
                org$pandalanguage$pandac$Position$init(&$tmp2046);
                panda$collections$Array* $tmp2047 = (panda$collections$Array*) malloc(40);
                $tmp2047->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp2047->refCount.value = 1;
                panda$collections$Array$init($tmp2047);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2044, ((panda$core$Int64) { 144 }), $tmp2046, ((panda$collections$ListView*) $tmp2047));
                a1945 = $tmp2044;
            }
            }
            else {
            panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1981_131955->$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp2049.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2050 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
                $tmp2050->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
                $tmp2050->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2050, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2050, &$s2052);
                goto $l1952;
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
    $l1952:;
    panda$collections$Array* $tmp2054 = (panda$collections$Array*) malloc(40);
    $tmp2054->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2054->refCount.value = 1;
    panda$collections$Array$init($tmp2054);
    children2053 = $tmp2054;
    panda$collections$Array$add$panda$collections$Array$T(children2053, ((panda$core$Object*) p_choiceDoccomment));
    panda$collections$Array$add$panda$collections$Array$T(children2053, ((panda$core$Object*) p_choiceAnnotations));
    org$pandalanguage$pandac$ASTNode* $tmp2056 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2056->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2056->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2056, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start1868.value).position, ((panda$collections$ListView*) members1882));
    panda$collections$Array$add$panda$collections$Array$T(children2053, ((panda$core$Object*) $tmp2056));
    org$pandalanguage$pandac$ASTNode* $tmp2058 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2058->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2058->refCount.value = 1;
    panda$core$String* $tmp2060 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1873.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2058, ((panda$core$Int64) { 155 }), ((org$pandalanguage$pandac$parser$Token) start1868.value).position, ((panda$core$Object*) $tmp2060), ((panda$collections$ListView*) children2053));
    return $tmp2058;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2061;
    org$pandalanguage$pandac$ASTNode* dc2063;
    org$pandalanguage$pandac$Position $tmp2068;
    org$pandalanguage$pandac$ASTNode* a2069;
    org$pandalanguage$pandac$parser$Token$Kind* $match$2067_92071;
    org$pandalanguage$pandac$parser$Token $tmp2062 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start2061 = $tmp2062;
    panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start2061.kind->$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp2064.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2065 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
        dc2063 = $tmp2065;
        if (((panda$core$Bit) { dc2063 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2066 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp2066->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2066->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp2068);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2066, ((panda$core$Int64) { 138 }), $tmp2068);
        dc2063 = $tmp2066;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2070 = org$pandalanguage$pandac$parser$Parser$annotations$R$org$pandalanguage$pandac$ASTNode$Q(self);
    a2069 = $tmp2070;
    if (((panda$core$Bit) { a2069 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2072 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2067_92071 = $tmp2072.kind;
        panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2073.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2074 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2069);
            return $tmp2074;
        }
        }
        else {
        panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2075.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2076 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2069);
            return $tmp2076;
        }
        }
        else {
        panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2077.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2078 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2069);
            return $tmp2078;
        }
        }
        else {
        panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp2079 = $tmp2080.value;
        if ($tmp2079) goto $l2081;
        panda$core$Bit $tmp2082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2079 = $tmp2082.value;
        $l2081:;
        panda$core$Bit $tmp2083 = { $tmp2079 };
        if ($tmp2083.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2084 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2069);
            return $tmp2084;
        }
        }
        else {
        panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2085.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2086 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2069);
            return $tmp2086;
        }
        }
        else {
        panda$core$Bit $tmp2090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2089 = $tmp2090.value;
        if ($tmp2089) goto $l2091;
        panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2089 = $tmp2092.value;
        $l2091:;
        panda$core$Bit $tmp2093 = { $tmp2089 };
        bool $tmp2088 = $tmp2093.value;
        if ($tmp2088) goto $l2094;
        panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2088 = $tmp2095.value;
        $l2094:;
        panda$core$Bit $tmp2096 = { $tmp2088 };
        bool $tmp2087 = $tmp2096.value;
        if ($tmp2087) goto $l2097;
        panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2067_92071->$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2087 = $tmp2098.value;
        $l2097:;
        panda$core$Bit $tmp2099 = { $tmp2087 };
        if ($tmp2099.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2100 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2069);
            return $tmp2100;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2101 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
            $tmp2101->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
            $tmp2101->refCount.value = 1;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2101, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2101, &$s2103);
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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children2104;
    org$pandalanguage$pandac$parser$Token$nullable start2107;
    org$pandalanguage$pandac$parser$Token$nullable name2112;
    org$pandalanguage$pandac$ASTNode* generics2119;
    org$pandalanguage$pandac$Position $tmp2123;
    org$pandalanguage$pandac$ASTNode* stypes2126;
    org$pandalanguage$pandac$Position $tmp2130;
    panda$collections$Array* members2135;
    org$pandalanguage$pandac$ASTNode* member2143;
    panda$collections$Array* $tmp2105 = (panda$collections$Array*) malloc(40);
    $tmp2105->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2105->refCount.value = 1;
    panda$collections$Array$init($tmp2105);
    children2104 = $tmp2105;
    panda$collections$Array$add$panda$collections$Array$T(children2104, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children2104, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2108 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2108->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2108->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2108, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2111 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2108, &$s2110);
    start2107 = $tmp2111;
    if (((panda$core$Bit) { !start2107.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2113 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2113->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2113->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2113, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2116 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2113, &$s2115);
    name2112 = $tmp2116;
    if (((panda$core$Bit) { !name2112.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2117 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2117.kind->$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2118.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2120 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics2119 = $tmp2120;
        if (((panda$core$Bit) { generics2119 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children2104, ((panda$core$Object*) generics2119));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2121 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp2121->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2121->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp2123);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2121, ((panda$core$Int64) { 138 }), $tmp2123);
        panda$collections$Array$add$panda$collections$Array$T(children2104, ((panda$core$Object*) $tmp2121));
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2124 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2124.kind->$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2125.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2127 = org$pandalanguage$pandac$parser$Parser$supertypes$R$org$pandalanguage$pandac$ASTNode$Q(self);
        stypes2126 = $tmp2127;
        if (((panda$core$Bit) { stypes2126 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children2104, ((panda$core$Object*) stypes2126));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2128 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp2128->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2128->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp2130);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2128, ((panda$core$Int64) { 139 }), $tmp2130);
        panda$collections$Array$add$panda$collections$Array$T(children2104, ((panda$core$Object*) $tmp2128));
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2131 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2131->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2131->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2131, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2134 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2131, &$s2133);
    if (((panda$core$Bit) { !$tmp2134.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2136 = (panda$collections$Array*) malloc(40);
    $tmp2136->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2136->refCount.value = 1;
    panda$collections$Array$init($tmp2136);
    members2135 = $tmp2136;
    $l2138:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2140 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2140->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2140->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2140, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2142 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2140);
    if (!((panda$core$Bit) { !$tmp2142.nonnull }).value) goto $l2139;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2144 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2143 = $tmp2144;
        if (((panda$core$Bit) { member2143 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2135, ((panda$core$Object*) member2143));
    }
    goto $l2138;
    $l2139:;
    org$pandalanguage$pandac$ASTNode* $tmp2145 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2145->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2145->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2145, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start2107.value).position, ((panda$collections$ListView*) members2135));
    panda$collections$Array$add$panda$collections$Array$T(children2104, ((panda$core$Object*) $tmp2145));
    org$pandalanguage$pandac$ASTNode* $tmp2147 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2147->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2147->refCount.value = 1;
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2112.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2147, ((panda$core$Int64) { 142 }), ((org$pandalanguage$pandac$parser$Token) start2107.value).position, ((panda$core$Object*) $tmp2149), ((panda$collections$ListView*) children2104));
    return $tmp2147;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, org$pandalanguage$pandac$ASTNode* p_annotations) {
    panda$collections$Array* children2150;
    org$pandalanguage$pandac$parser$Token$nullable start2153;
    org$pandalanguage$pandac$parser$Token$nullable name2158;
    org$pandalanguage$pandac$ASTNode* generics2165;
    org$pandalanguage$pandac$Position $tmp2169;
    panda$collections$Array* intfs2170;
    org$pandalanguage$pandac$ASTNode* t2176;
    panda$collections$Array* members2190;
    org$pandalanguage$pandac$ASTNode* member2198;
    panda$collections$Array* $tmp2151 = (panda$collections$Array*) malloc(40);
    $tmp2151->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2151->refCount.value = 1;
    panda$collections$Array$init($tmp2151);
    children2150 = $tmp2151;
    panda$collections$Array$add$panda$collections$Array$T(children2150, ((panda$core$Object*) p_doccomment));
    panda$collections$Array$add$panda$collections$Array$T(children2150, ((panda$core$Object*) p_annotations));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2154 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2154->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2154->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2154, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2157 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2154, &$s2156);
    start2153 = $tmp2157;
    if (((panda$core$Bit) { !start2153.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2159 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2159->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2159->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2159, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2162 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2159, &$s2161);
    name2158 = $tmp2162;
    if (((panda$core$Bit) { !name2158.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp2163 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2163.kind->$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2164.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2166 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        generics2165 = $tmp2166;
        if (((panda$core$Bit) { generics2165 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children2150, ((panda$core$Object*) generics2165));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2167 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
        $tmp2167->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2167->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp2169);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp2167, ((panda$core$Int64) { 138 }), $tmp2169);
        panda$collections$Array$add$panda$collections$Array$T(children2150, ((panda$core$Object*) $tmp2167));
    }
    }
    panda$collections$Array* $tmp2171 = (panda$collections$Array*) malloc(40);
    $tmp2171->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2171->refCount.value = 1;
    panda$collections$Array$init($tmp2171);
    intfs2170 = $tmp2171;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2173 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2173->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2173->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2173, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2175 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2173);
    if (((panda$core$Bit) { $tmp2175.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2177 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t2176 = $tmp2177;
        if (((panda$core$Bit) { t2176 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2170, ((panda$core$Object*) t2176));
        $l2178:;
        org$pandalanguage$pandac$parser$Token$Kind* $tmp2180 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
        $tmp2180->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
        $tmp2180->refCount.value = 1;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2180, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2182 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2180);
        if (!((panda$core$Bit) { $tmp2182.nonnull }).value) goto $l2179;
        {
            org$pandalanguage$pandac$ASTNode* $tmp2183 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t2176 = $tmp2183;
            if (((panda$core$Bit) { t2176 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2170, ((panda$core$Object*) t2176));
        }
        goto $l2178;
        $l2179:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2184 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2184->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2184->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2184, ((panda$core$Int64) { 139 }), ((org$pandalanguage$pandac$parser$Token) start2153.value).position, ((panda$collections$ListView*) intfs2170));
    panda$collections$Array$add$panda$collections$Array$T(children2150, ((panda$core$Object*) $tmp2184));
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2186 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2186->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2186->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2186, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2189 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2186, &$s2188);
    if (((panda$core$Bit) { !$tmp2189.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2191 = (panda$collections$Array*) malloc(40);
    $tmp2191->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2191->refCount.value = 1;
    panda$collections$Array$init($tmp2191);
    members2190 = $tmp2191;
    $l2193:;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2195 = (org$pandalanguage$pandac$parser$Token$Kind*) malloc(24);
    $tmp2195->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$class;
    $tmp2195->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp2195, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2197 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2195);
    if (!((panda$core$Bit) { !$tmp2197.nonnull }).value) goto $l2194;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2199 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2198 = $tmp2199;
        if (((panda$core$Bit) { member2198 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2190, ((panda$core$Object*) member2198));
    }
    goto $l2193;
    $l2194:;
    org$pandalanguage$pandac$ASTNode* $tmp2200 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2200->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2200->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2200, ((panda$core$Int64) { 140 }), ((org$pandalanguage$pandac$parser$Token) start2153.value).position, ((panda$collections$ListView*) members2190));
    panda$collections$Array$add$panda$collections$Array$T(children2150, ((panda$core$Object*) $tmp2200));
    org$pandalanguage$pandac$ASTNode* $tmp2202 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2202->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2202->refCount.value = 1;
    panda$core$String* $tmp2204 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2158.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2202, ((panda$core$Int64) { 151 }), ((org$pandalanguage$pandac$parser$Token) start2153.value).position, ((panda$core$Object*) $tmp2204), ((panda$collections$ListView*) children2150));
    return $tmp2202;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind* $match$2198_92205;
    {
        org$pandalanguage$pandac$parser$Token $tmp2206 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2198_92205 = $tmp2206.kind;
        panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2207.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2208 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2208;
        }
        }
        else {
        panda$core$Bit $tmp2209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2209.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2210 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2210;
        }
        }
        else {
        panda$core$Bit $tmp2217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2216 = $tmp2217.value;
        if ($tmp2216) goto $l2218;
        panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2216 = $tmp2219.value;
        $l2218:;
        panda$core$Bit $tmp2220 = { $tmp2216 };
        bool $tmp2215 = $tmp2220.value;
        if ($tmp2215) goto $l2221;
        panda$core$Bit $tmp2222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 19 }));
        $tmp2215 = $tmp2222.value;
        $l2221:;
        panda$core$Bit $tmp2223 = { $tmp2215 };
        bool $tmp2214 = $tmp2223.value;
        if ($tmp2214) goto $l2224;
        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 21 }));
        $tmp2214 = $tmp2225.value;
        $l2224:;
        panda$core$Bit $tmp2226 = { $tmp2214 };
        bool $tmp2213 = $tmp2226.value;
        if ($tmp2213) goto $l2227;
        panda$core$Bit $tmp2228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2213 = $tmp2228.value;
        $l2227:;
        panda$core$Bit $tmp2229 = { $tmp2213 };
        bool $tmp2212 = $tmp2229.value;
        if ($tmp2212) goto $l2230;
        panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 13 }));
        $tmp2212 = $tmp2231.value;
        $l2230:;
        panda$core$Bit $tmp2232 = { $tmp2212 };
        bool $tmp2211 = $tmp2232.value;
        if ($tmp2211) goto $l2233;
        panda$core$Bit $tmp2234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2198_92205->$rawValue, ((panda$core$Int64) { 11 }));
        $tmp2211 = $tmp2234.value;
        $l2233:;
        panda$core$Bit $tmp2235 = { $tmp2211 };
        if ($tmp2235.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2236 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2236;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2237 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2237;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2238;
    org$pandalanguage$pandac$ASTNode* entry2245;
    org$pandalanguage$pandac$Position $tmp2250;
    panda$collections$Array* $tmp2239 = (panda$collections$Array*) malloc(40);
    $tmp2239->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2239->refCount.value = 1;
    panda$collections$Array$init($tmp2239);
    entries2238 = $tmp2239;
    $l2241:;
    org$pandalanguage$pandac$parser$Token $tmp2243 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2244 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2243.kind->$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2244.value) goto $l2242;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2246 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2245 = $tmp2246;
        if (((panda$core$Bit) { entry2245 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2247 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2247.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2238, ((panda$core$Object*) entry2245));
    }
    goto $l2241;
    $l2242:;
    org$pandalanguage$pandac$ASTNode* $tmp2248 = (org$pandalanguage$pandac$ASTNode*) malloc(64);
    $tmp2248->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2248->refCount.value = 1;
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp2250, ((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2248, ((panda$core$Int64) { 152 }), $tmp2250, ((panda$collections$ListView*) entries2238));
    return $tmp2248;
}

