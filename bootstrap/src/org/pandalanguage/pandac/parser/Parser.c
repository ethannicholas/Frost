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
#include "panda/core/MutableString.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Array.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn68)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn107)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn137)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn196)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn236)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn242)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn249)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn254)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn298)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn334)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn340)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn346)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn356)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn366)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn372)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn382)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn706)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn739)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1253)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1264)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1279)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1696)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1323;
    org$pandalanguage$pandac$parser$Token next28;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2530;
    panda$core$Char8 $tmp33;
    org$pandalanguage$pandac$parser$Token next39;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2541;
    $l19:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp22 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result21 = $tmp22;
        {
            $match$57_1323 = result21.kind;
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1323.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp24.value) {
            {
                goto $l19;
            }
            }
            else {
            panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1323.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp25.value) {
            {
                $l26:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp29 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next28 = $tmp29;
                    {
                        $match$63_2530 = next28.kind;
                        panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2530.$rawValue, ((panda$core$Int64) { 12 }));
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
                        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2530.$rawValue, ((panda$core$Int64) { 0 }));
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
            panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1323.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp36.value) {
            {
                $l37:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp40 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next39 = $tmp40;
                    {
                        $match$75_2541 = next39.kind;
                        panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2541.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp42.value) {
                        {
                            goto $l19;
                        }
                        }
                        else {
                        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2541.$rawValue, ((panda$core$Int64) { 0 }));
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
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result51;
    org$pandalanguage$pandac$parser$Token $tmp52 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result51 = $tmp52;
    panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result51.kind.$rawValue, p_kind.$rawValue);
    if ($tmp53.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result51, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result51);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result54;
    org$pandalanguage$pandac$parser$Token $tmp55 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result54 = $tmp55;
    panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result54.kind.$rawValue, p_kind.$rawValue);
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
    org$pandalanguage$pandac$parser$Token$Kind $tmp109;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp105 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp105->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp105->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp108 = (($fn107) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp109, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp105, ((panda$core$Int64) { 2 }), $tmp108, p_string, $tmp109, p_chunk);
    return $tmp105;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result110;
    org$pandalanguage$pandac$parser$Token token115;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13117;
    panda$core$String* str119;
    panda$core$Char8 $tmp121;
    org$pandalanguage$pandac$parser$Token escape127;
    panda$core$String* escapeText131;
    panda$core$Char8 c133;
    panda$core$Char8 $match$176_21139;
    panda$core$Char8 $tmp140;
    panda$core$Char8 $tmp142;
    panda$core$Char8 $tmp143;
    panda$core$Char8 $tmp145;
    panda$core$Char8 $tmp146;
    panda$core$Char8 $tmp148;
    panda$core$Char8 $tmp149;
    panda$core$Char8 $tmp151;
    panda$core$Char8 $tmp152;
    panda$core$Char8 $tmp154;
    panda$core$Char8 $tmp155;
    panda$core$Char8 $tmp157;
    panda$core$Char8 $tmp158;
    panda$core$Char8 $tmp160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp162;
    panda$core$MutableString* $tmp111 = (panda$core$MutableString*) malloc(48);
    $tmp111->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp111->refCount.value = 1;
    panda$core$MutableString$init($tmp111);
    result110 = $tmp111;
    $l113:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp116 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token115 = $tmp116;
        {
            $match$157_13117 = token115.kind;
            panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp118.value) {
            {
                panda$core$String* $tmp120 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token115);
                str119 = $tmp120;
                panda$core$Char8$init$panda$core$UInt8(&$tmp121, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp122 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str119, $tmp121);
                if ($tmp122.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s123);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result110, str119);
            }
            }
            else {
            panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp124.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s125);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp126.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp128 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape127 = $tmp128;
                panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape127.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp129.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s130);
                    return NULL;
                }
                }
                panda$core$String* $tmp132 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape127);
                escapeText131 = $tmp132;
                panda$collections$ListView* $tmp134 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText131);
                ITable* $tmp135 = $tmp134->$class->itable;
                while ($tmp135->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp135 = $tmp135->next;
                }
                $fn137 $tmp136 = $tmp135->methods[0];
                panda$core$Object* $tmp138 = $tmp136($tmp134, ((panda$core$Int64) { 0 }));
                c133 = ((panda$core$Char8$wrapper*) $tmp138)->value;
                {
                    $match$176_21139 = c133;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp140, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp141 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21139, $tmp140);
                    if ($tmp141.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp142);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp143, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp144 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21139, $tmp143);
                    if ($tmp144.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp145, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp145);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp146, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp147 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21139, $tmp146);
                    if ($tmp147.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp148, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp148);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp150 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21139, $tmp149);
                    if ($tmp150.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp151);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp152, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp153 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21139, $tmp152);
                    if ($tmp153.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp154, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp154);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp155, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp156 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21139, $tmp155);
                    if ($tmp156.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp157, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp157);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp158, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp159 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21139, $tmp158);
                    if ($tmp159.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp160, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp160);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s161);
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
                panda$core$String$Index $tmp163 = panda$core$String$start$R$panda$core$String$Index(escapeText131);
                panda$core$String$Index $tmp164 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText131, $tmp163);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp162, ((panda$core$String$Index$nullable) { $tmp164, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp165 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText131, $tmp162);
                panda$core$MutableString$append$panda$core$String(result110, $tmp165);
            }
            }
            else {
            panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp166.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token115);
                panda$core$String* $tmp167 = panda$core$MutableString$finish$R$panda$core$String(result110);
                return $tmp167;
            }
            }
            else {
            {
                panda$core$String* $tmp168 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token115);
                panda$core$MutableString$append$panda$core$String(result110, $tmp168);
            }
            }
            }
            }
            }
        }
    }
    }
    $l114:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result169;
    org$pandalanguage$pandac$parser$Token token174;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13176;
    panda$core$String* str178;
    panda$core$Char8 $tmp180;
    org$pandalanguage$pandac$parser$Token escape186;
    panda$core$String* escapeText190;
    panda$core$Char8 c192;
    panda$core$Char8 $match$221_21198;
    panda$core$Char8 $tmp199;
    panda$core$Char8 $tmp201;
    panda$core$Char8 $tmp202;
    panda$core$Char8 $tmp204;
    panda$core$Char8 $tmp205;
    panda$core$Char8 $tmp207;
    panda$core$Char8 $tmp208;
    panda$core$Char8 $tmp210;
    panda$core$Char8 $tmp211;
    panda$core$Char8 $tmp213;
    panda$core$Char8 $tmp214;
    panda$core$Char8 $tmp216;
    panda$core$Char8 $tmp217;
    panda$core$Char8 $tmp219;
    panda$core$Char8 $tmp220;
    panda$core$Char8 $tmp222;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp224;
    panda$core$MutableString* $tmp170 = (panda$core$MutableString*) malloc(48);
    $tmp170->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp170->refCount.value = 1;
    panda$core$MutableString$init($tmp170);
    result169 = $tmp170;
    $l172:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp175 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token174 = $tmp175;
        {
            $match$202_13176 = token174.kind;
            panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13176.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp177.value) {
            {
                panda$core$String* $tmp179 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token174);
                str178 = $tmp179;
                panda$core$Char8$init$panda$core$UInt8(&$tmp180, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp181 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str178, $tmp180);
                if ($tmp181.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token174, &$s182);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result169, str178);
            }
            }
            else {
            panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13176.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp183.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token174, &$s184);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13176.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp185.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp187 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape186 = $tmp187;
                panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape186.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp188.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token174, &$s189);
                    return NULL;
                }
                }
                panda$core$String* $tmp191 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape186);
                escapeText190 = $tmp191;
                panda$collections$ListView* $tmp193 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText190);
                ITable* $tmp194 = $tmp193->$class->itable;
                while ($tmp194->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp194 = $tmp194->next;
                }
                $fn196 $tmp195 = $tmp194->methods[0];
                panda$core$Object* $tmp197 = $tmp195($tmp193, ((panda$core$Int64) { 0 }));
                c192 = ((panda$core$Char8$wrapper*) $tmp197)->value;
                {
                    $match$221_21198 = c192;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp199, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp200 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp199);
                    if ($tmp200.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp201, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp201);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp202, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp203 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp202);
                    if ($tmp203.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp204, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp204);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp205, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp206 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp205);
                    if ($tmp206.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp207, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp207);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp208, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp209 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp208);
                    if ($tmp209.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp210);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp211, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp212 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp211);
                    if ($tmp212.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp213);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp214, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp215 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp214);
                    if ($tmp215.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp216);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp217, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp218 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp217);
                    if ($tmp218.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp219);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp220, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp221 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21198, $tmp220);
                    if ($tmp221.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp222);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token174, &$s223);
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
                panda$core$String$Index $tmp225 = panda$core$String$start$R$panda$core$String$Index(escapeText190);
                panda$core$String$Index $tmp226 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText190, $tmp225);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp224, ((panda$core$String$Index$nullable) { $tmp226, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp227 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText190, $tmp224);
                panda$core$MutableString$append$panda$core$String(result169, $tmp227);
            }
            }
            else {
            panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13176.$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp228.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token174);
                panda$core$String* $tmp229 = panda$core$MutableString$finish$R$panda$core$String(result169);
                return $tmp229;
            }
            }
            else {
            panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13176.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp230.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token174);
                panda$core$String* $tmp231 = panda$core$MutableString$finish$R$panda$core$String(result169);
                return $tmp231;
            }
            }
            else {
            {
                panda$core$String* $tmp232 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token174);
                panda$core$MutableString$append$panda$core$String(result169, $tmp232);
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l173:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot233;
    org$pandalanguage$pandac$ASTNode* call239;
    org$pandalanguage$pandac$ASTNode* stringType246;
    org$pandalanguage$pandac$parser$Token$Kind $tmp256;
    org$pandalanguage$pandac$ASTNode* $tmp234 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp234->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp234->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp237 = (($fn236) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp234, ((panda$core$Int64) { 13 }), $tmp237, p_expr, &$s238);
    dot233 = $tmp234;
    org$pandalanguage$pandac$ASTNode* $tmp240 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp240->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp240->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp243 = (($fn242) p_expr->$class->vtable[2])(p_expr);
    panda$collections$ImmutableArray* $tmp244 = (panda$collections$ImmutableArray*) malloc(40);
    $tmp244->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp244->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp244);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp240, ((panda$core$Int64) { 6 }), $tmp243, dot233, $tmp244);
    call239 = $tmp240;
    org$pandalanguage$pandac$ASTNode* $tmp247 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp247->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp247->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp250 = (($fn249) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp247, ((panda$core$Int64) { 35 }), $tmp250, &$s251);
    stringType246 = $tmp247;
    org$pandalanguage$pandac$ASTNode* $tmp252 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp252->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp252->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp255 = (($fn254) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp256, ((panda$core$Int64) { 89 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp252, ((panda$core$Int64) { 2 }), $tmp255, call239, $tmp256, stringType246);
    return $tmp252;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start257;
    org$pandalanguage$pandac$ASTNode* result269;
    panda$core$MutableString* chunk270;
    org$pandalanguage$pandac$parser$Token token275;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13278;
    panda$core$String* str280;
    panda$core$Char8 $tmp282;
    org$pandalanguage$pandac$parser$Token escape288;
    panda$core$String* escapeText292;
    panda$core$Char8 c294;
    panda$core$Char8 $match$287_21300;
    panda$core$Char8 $tmp301;
    panda$core$Char8 $tmp303;
    panda$core$Char8 $tmp304;
    panda$core$Char8 $tmp306;
    panda$core$Char8 $tmp307;
    panda$core$Char8 $tmp309;
    panda$core$Char8 $tmp310;
    panda$core$Char8 $tmp312;
    panda$core$Char8 $tmp313;
    panda$core$Char8 $tmp315;
    panda$core$Char8 $tmp316;
    panda$core$Char8 $tmp318;
    panda$core$Char8 $tmp319;
    org$pandalanguage$pandac$ASTNode* expr321;
    panda$core$String* align323;
    panda$core$String* format324;
    org$pandalanguage$pandac$parser$Token$Kind $tmp325;
    org$pandalanguage$pandac$parser$Token$Kind $tmp328;
    org$pandalanguage$pandac$ASTNode* formattable331;
    org$pandalanguage$pandac$ASTNode* cast337;
    org$pandalanguage$pandac$parser$Token$Kind $tmp342;
    org$pandalanguage$pandac$ASTNode* dot343;
    panda$collections$Array* callArgs349;
    org$pandalanguage$pandac$parser$Token$Kind $tmp359;
    org$pandalanguage$pandac$ASTNode* pandaType363;
    org$pandalanguage$pandac$ASTNode* callTarget369;
    panda$collections$Array* callArgs375;
    panda$core$String* text385;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp400;
    org$pandalanguage$pandac$parser$Token $tmp258 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start257 = $tmp258;
    panda$core$Bit $tmp260 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start257.kind.$rawValue, ((panda$core$Int64) { 7 }));
    bool $tmp259 = $tmp260.value;
    if (!$tmp259) goto $l261;
    panda$core$Bit $tmp262 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start257.kind.$rawValue, ((panda$core$Int64) { 6 }));
    $tmp259 = $tmp262.value;
    $l261:;
    panda$core$Bit $tmp263 = { $tmp259 };
    if ($tmp263.value) {
    {
        panda$core$String* $tmp265 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start257);
        panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s264, $tmp265);
        panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s267);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start257, $tmp268);
        return NULL;
    }
    }
    result269 = NULL;
    panda$core$MutableString* $tmp271 = (panda$core$MutableString*) malloc(48);
    $tmp271->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp271->refCount.value = 1;
    panda$core$MutableString$init($tmp271);
    chunk270 = $tmp271;
    $l273:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp276 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token275 = $tmp276;
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token275.kind.$rawValue, start257.kind.$rawValue);
        if ($tmp277.value) {
        {
            goto $l274;
        }
        }
        {
            $match$268_13278 = token275.kind;
            panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13278.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp279.value) {
            {
                panda$core$String* $tmp281 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token275);
                str280 = $tmp281;
                panda$core$Char8$init$panda$core$UInt8(&$tmp282, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp283 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str280, $tmp282);
                if ($tmp283.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start257, &$s284);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk270, str280);
            }
            }
            else {
            panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13278.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp285.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start257, &$s286);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13278.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp287.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp289 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape288 = $tmp289;
                panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape288.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp290.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start257, &$s291);
                    return NULL;
                }
                }
                panda$core$String* $tmp293 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape288);
                escapeText292 = $tmp293;
                panda$collections$ListView* $tmp295 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText292);
                ITable* $tmp296 = $tmp295->$class->itable;
                while ($tmp296->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp296 = $tmp296->next;
                }
                $fn298 $tmp297 = $tmp296->methods[0];
                panda$core$Object* $tmp299 = $tmp297($tmp295, ((panda$core$Int64) { 0 }));
                c294 = ((panda$core$Char8$wrapper*) $tmp299)->value;
                {
                    $match$287_21300 = c294;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp301, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp302 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21300, $tmp301);
                    if ($tmp302.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp303, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk270, $tmp303);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp304, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp305 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21300, $tmp304);
                    if ($tmp305.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp306, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk270, $tmp306);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp307, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp308 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21300, $tmp307);
                    if ($tmp308.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp309, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk270, $tmp309);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp310, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp311 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21300, $tmp310);
                    if ($tmp311.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp312, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk270, $tmp312);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp313, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp314 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21300, $tmp313);
                    if ($tmp314.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk270, $tmp315);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp316, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp317 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21300, $tmp316);
                    if ($tmp317.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp318, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk270, $tmp318);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp320 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21300, $tmp319);
                    if ($tmp320.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp322 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr321 = $tmp322;
                            if (((panda$core$Bit) { expr321 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            align323 = NULL;
                            format324 = NULL;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp325, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp326 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp325);
                            if (((panda$core$Bit) { $tmp326.nonnull }).value) {
                            {
                                panda$core$String* $tmp327 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start257);
                                align323 = $tmp327;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp328, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp329 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp328);
                            if (((panda$core$Bit) { $tmp329.nonnull }).value) {
                            {
                                panda$core$String* $tmp330 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start257);
                                format324 = $tmp330;
                                if (((panda$core$Bit) { format324 == NULL }).value) {
                                {
                                    return NULL;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp332 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp332->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp332->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp335 = (($fn334) expr321->$class->vtable[2])(expr321);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp332, ((panda$core$Int64) { 35 }), $tmp335, &$s336);
                                formattable331 = $tmp332;
                                org$pandalanguage$pandac$ASTNode* $tmp338 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp338->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp338->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp341 = (($fn340) expr321->$class->vtable[2])(expr321);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp342, ((panda$core$Int64) { 89 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp338, ((panda$core$Int64) { 2 }), $tmp341, expr321, $tmp342, formattable331);
                                cast337 = $tmp338;
                                org$pandalanguage$pandac$ASTNode* $tmp344 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp344->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp344->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp347 = (($fn346) expr321->$class->vtable[2])(expr321);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp344, ((panda$core$Int64) { 13 }), $tmp347, cast337, &$s348);
                                dot343 = $tmp344;
                                panda$collections$Array* $tmp350 = (panda$collections$Array*) malloc(40);
                                $tmp350->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp350->refCount.value = 1;
                                panda$collections$Array$init($tmp350);
                                callArgs349 = $tmp350;
                                org$pandalanguage$pandac$ASTNode* $tmp352 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp352->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp352->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp352, ((panda$core$Int64) { 33 }), start257.position, format324);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs349, ((panda$core$Object*) $tmp352));
                                org$pandalanguage$pandac$ASTNode* $tmp354 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp354->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp354->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp357 = (($fn356) expr321->$class->vtable[2])(expr321);
                                panda$collections$ImmutableArray* $tmp358 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs349);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp354, ((panda$core$Int64) { 6 }), $tmp357, dot343, $tmp358);
                                expr321 = $tmp354;
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp359, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp361 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp359, &$s360);
                            if (((panda$core$Bit) { !$tmp361.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            if (((panda$core$Bit) { align323 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format324 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp362 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr321);
                                    expr321 = $tmp362;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp364 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp364->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp364->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp367 = (($fn366) expr321->$class->vtable[2])(expr321);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp364, ((panda$core$Int64) { 35 }), $tmp367, &$s368);
                                pandaType363 = $tmp364;
                                org$pandalanguage$pandac$ASTNode* $tmp370 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp370->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp370->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp373 = (($fn372) expr321->$class->vtable[2])(expr321);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp370, ((panda$core$Int64) { 13 }), $tmp373, pandaType363, &$s374);
                                callTarget369 = $tmp370;
                                panda$collections$Array* $tmp376 = (panda$collections$Array*) malloc(40);
                                $tmp376->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp376->refCount.value = 1;
                                panda$collections$Array$init($tmp376);
                                callArgs375 = $tmp376;
                                panda$collections$Array$add$panda$collections$Array$T(callArgs375, ((panda$core$Object*) expr321));
                                org$pandalanguage$pandac$ASTNode* $tmp378 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp378->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp378->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp378, ((panda$core$Int64) { 33 }), start257.position, align323);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs375, ((panda$core$Object*) $tmp378));
                                org$pandalanguage$pandac$ASTNode* $tmp380 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp380->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp380->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp383 = (($fn382) expr321->$class->vtable[2])(expr321);
                                panda$collections$ImmutableArray* $tmp384 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs375);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp380, ((panda$core$Int64) { 6 }), $tmp383, callTarget369, $tmp384);
                                expr321 = $tmp380;
                            }
                            }
                            panda$core$String* $tmp386 = panda$core$MutableString$finish$R$panda$core$String(chunk270);
                            text385 = $tmp386;
                            panda$core$MutableString* $tmp387 = (panda$core$MutableString*) malloc(48);
                            $tmp387->$class = (panda$core$Class*) &panda$core$MutableString$class;
                            $tmp387->refCount.value = 1;
                            panda$core$MutableString$init($tmp387);
                            chunk270 = $tmp387;
                            panda$core$Bit $tmp391 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text385, &$s390);
                            bool $tmp389 = $tmp391.value;
                            if ($tmp389) goto $l392;
                            $tmp389 = ((panda$core$Bit) { result269 != NULL }).value;
                            $l392:;
                            panda$core$Bit $tmp393 = { $tmp389 };
                            if ($tmp393.value) {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp394 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                                $tmp394->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp394->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp394, ((panda$core$Int64) { 33 }), start257.position, text385);
                                org$pandalanguage$pandac$ASTNode* $tmp396 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result269, $tmp394);
                                result269 = $tmp396;
                                org$pandalanguage$pandac$ASTNode* $tmp397 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result269, expr321);
                                result269 = $tmp397;
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp398 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr321);
                                result269 = $tmp398;
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token275, &$s399);
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
                panda$core$String$Index $tmp401 = panda$core$String$start$R$panda$core$String$Index(escapeText292);
                panda$core$String$Index $tmp402 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText292, $tmp401);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp400, ((panda$core$String$Index$nullable) { $tmp402, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp403 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText292, $tmp400);
                panda$core$MutableString$append$panda$core$String(chunk270, $tmp403);
            }
            }
            else {
            {
                panda$core$String* $tmp404 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token275);
                panda$core$MutableString$append$panda$core$String(chunk270, $tmp404);
            }
            }
            }
            }
        }
    }
    }
    $l274:;
    org$pandalanguage$pandac$ASTNode* $tmp405 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp405->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp405->refCount.value = 1;
    panda$core$String* $tmp407 = panda$core$MutableString$finish$R$panda$core$String(chunk270);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp405, ((panda$core$Int64) { 33 }), start257.position, $tmp407);
    org$pandalanguage$pandac$ASTNode* $tmp408 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result269, $tmp405);
    return $tmp408;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t409;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9411;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp425;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp432;
    org$pandalanguage$pandac$ASTNode* result462;
    org$pandalanguage$pandac$parser$Token$Kind $tmp464;
    org$pandalanguage$pandac$parser$Token $tmp410 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t409 = $tmp410;
    {
        $match$362_9411 = t409.kind;
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp413 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp413->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp413->refCount.value = 1;
            panda$core$String* $tmp415 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t409);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp413, ((panda$core$Int64) { 18 }), t409.position, $tmp415);
            return $tmp413;
        }
        }
        else {
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp416.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp417 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp417->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp417->refCount.value = 1;
            panda$core$String* $tmp419 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t409);
            panda$core$UInt64$nullable $tmp420 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp419);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp417, ((panda$core$Int64) { 20 }), t409.position, ((panda$core$UInt64) $tmp420.value));
            return $tmp417;
        }
        }
        else {
        panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp421.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp422 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp422->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp422->refCount.value = 1;
            panda$core$String* $tmp424 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t409);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp425, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp426 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp424, $tmp425);
            panda$core$UInt64$nullable $tmp427 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp426, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp422, ((panda$core$Int64) { 20 }), t409.position, ((panda$core$UInt64) $tmp427.value));
            return $tmp422;
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp429 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp429->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp429->refCount.value = 1;
            panda$core$String* $tmp431 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t409);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp432, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp433 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp431, $tmp432);
            panda$core$UInt64$nullable $tmp434 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp433, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp429, ((panda$core$Int64) { 20 }), t409.position, ((panda$core$UInt64) $tmp434.value));
            return $tmp429;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp435.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp436 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp436->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp436->refCount.value = 1;
            panda$core$String* $tmp438 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t409);
            panda$core$Real64$nullable $tmp439 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp438);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp436, ((panda$core$Int64) { 30 }), t409.position, ((panda$core$Real64) $tmp439.value));
            return $tmp436;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp441 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp441->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp441->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp441, ((panda$core$Int64) { 32 }), t409.position);
            return $tmp441;
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp444 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp444->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp444->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp444, ((panda$core$Int64) { 34 }), t409.position);
            return $tmp444;
        }
        }
        else {
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp446.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp447 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp447->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp447->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp447, ((panda$core$Int64) { 24 }), t409.position);
            return $tmp447;
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp449.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp450 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp450->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp450->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp450, ((panda$core$Int64) { 3 }), t409.position, ((panda$core$Bit) { true }));
            return $tmp450;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp452.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp453 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp453->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp453->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp453, ((panda$core$Int64) { 3 }), t409.position, ((panda$core$Bit) { false }));
            return $tmp453;
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp455 = $tmp456.value;
        if ($tmp455) goto $l457;
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp455 = $tmp458.value;
        $l457:;
        panda$core$Bit $tmp459 = { $tmp455 };
        if ($tmp459.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t409);
            org$pandalanguage$pandac$ASTNode* $tmp460 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp460;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9411.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp461.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp463 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result462 = $tmp463;
            if (((panda$core$Bit) { result462 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp464, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp466 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp464, &$s465);
            if (((panda$core$Bit) { !$tmp466.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result462;
        }
        }
        else {
        {
            panda$core$String* $tmp468 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t409);
            panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s467, $tmp468);
            panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, &$s470);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t409, $tmp471);
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
    org$pandalanguage$pandac$ASTNode* $match$403_9472;
    org$pandalanguage$pandac$Position _474;
    panda$core$String* text476;
    org$pandalanguage$pandac$Position _479;
    org$pandalanguage$pandac$ASTNode* base481;
    panda$core$String* field483;
    panda$core$String* result485;
    {
        $match$403_9472 = p_expr;
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9472->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$Position* $tmp475 = ((org$pandalanguage$pandac$Position*) ((char*) $match$403_9472->$data + 0));
            _474 = *$tmp475;
            panda$core$String** $tmp477 = ((panda$core$String**) ((char*) $match$403_9472->$data + 16));
            text476 = *$tmp477;
            return text476;
        }
        }
        else {
        panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9472->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp478.value) {
        {
            org$pandalanguage$pandac$Position* $tmp480 = ((org$pandalanguage$pandac$Position*) ((char*) $match$403_9472->$data + 0));
            _479 = *$tmp480;
            org$pandalanguage$pandac$ASTNode** $tmp482 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9472->$data + 16));
            base481 = *$tmp482;
            panda$core$String** $tmp484 = ((panda$core$String**) ((char*) $match$403_9472->$data + 24));
            field483 = *$tmp484;
            panda$core$String* $tmp486 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base481);
            result485 = $tmp486;
            if (((panda$core$Bit) { result485 != NULL }).value) {
            {
                panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s487, field483);
                panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result485, $tmp488);
                result485 = $tmp489;
            }
            }
            return result485;
        }
        }
        else {
        {
            return NULL;
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name490;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9492;
    org$pandalanguage$pandac$parser$Token token580;
    org$pandalanguage$pandac$parser$Token$Kind $tmp586;
    org$pandalanguage$pandac$parser$Token$Kind $tmp589;
    org$pandalanguage$pandac$parser$Token $tmp491 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name490 = $tmp491;
    {
        $match$423_9492 = name490.kind;
        panda$core$Bit $tmp514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp513 = $tmp514.value;
        if ($tmp513) goto $l515;
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp513 = $tmp516.value;
        $l515:;
        panda$core$Bit $tmp517 = { $tmp513 };
        bool $tmp512 = $tmp517.value;
        if ($tmp512) goto $l518;
        panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp512 = $tmp519.value;
        $l518:;
        panda$core$Bit $tmp520 = { $tmp512 };
        bool $tmp511 = $tmp520.value;
        if ($tmp511) goto $l521;
        panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp511 = $tmp522.value;
        $l521:;
        panda$core$Bit $tmp523 = { $tmp511 };
        bool $tmp510 = $tmp523.value;
        if ($tmp510) goto $l524;
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp510 = $tmp525.value;
        $l524:;
        panda$core$Bit $tmp526 = { $tmp510 };
        bool $tmp509 = $tmp526.value;
        if ($tmp509) goto $l527;
        panda$core$Bit $tmp528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp509 = $tmp528.value;
        $l527:;
        panda$core$Bit $tmp529 = { $tmp509 };
        bool $tmp508 = $tmp529.value;
        if ($tmp508) goto $l530;
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp508 = $tmp531.value;
        $l530:;
        panda$core$Bit $tmp532 = { $tmp508 };
        bool $tmp507 = $tmp532.value;
        if ($tmp507) goto $l533;
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp507 = $tmp534.value;
        $l533:;
        panda$core$Bit $tmp535 = { $tmp507 };
        bool $tmp506 = $tmp535.value;
        if ($tmp506) goto $l536;
        panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp506 = $tmp537.value;
        $l536:;
        panda$core$Bit $tmp538 = { $tmp506 };
        bool $tmp505 = $tmp538.value;
        if ($tmp505) goto $l539;
        panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp505 = $tmp540.value;
        $l539:;
        panda$core$Bit $tmp541 = { $tmp505 };
        bool $tmp504 = $tmp541.value;
        if ($tmp504) goto $l542;
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp504 = $tmp543.value;
        $l542:;
        panda$core$Bit $tmp544 = { $tmp504 };
        bool $tmp503 = $tmp544.value;
        if ($tmp503) goto $l545;
        panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp503 = $tmp546.value;
        $l545:;
        panda$core$Bit $tmp547 = { $tmp503 };
        bool $tmp502 = $tmp547.value;
        if ($tmp502) goto $l548;
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp502 = $tmp549.value;
        $l548:;
        panda$core$Bit $tmp550 = { $tmp502 };
        bool $tmp501 = $tmp550.value;
        if ($tmp501) goto $l551;
        panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp501 = $tmp552.value;
        $l551:;
        panda$core$Bit $tmp553 = { $tmp501 };
        bool $tmp500 = $tmp553.value;
        if ($tmp500) goto $l554;
        panda$core$Bit $tmp555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp500 = $tmp555.value;
        $l554:;
        panda$core$Bit $tmp556 = { $tmp500 };
        bool $tmp499 = $tmp556.value;
        if ($tmp499) goto $l557;
        panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp499 = $tmp558.value;
        $l557:;
        panda$core$Bit $tmp559 = { $tmp499 };
        bool $tmp498 = $tmp559.value;
        if ($tmp498) goto $l560;
        panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp498 = $tmp561.value;
        $l560:;
        panda$core$Bit $tmp562 = { $tmp498 };
        bool $tmp497 = $tmp562.value;
        if ($tmp497) goto $l563;
        panda$core$Bit $tmp564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp497 = $tmp564.value;
        $l563:;
        panda$core$Bit $tmp565 = { $tmp497 };
        bool $tmp496 = $tmp565.value;
        if ($tmp496) goto $l566;
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp496 = $tmp567.value;
        $l566:;
        panda$core$Bit $tmp568 = { $tmp496 };
        bool $tmp495 = $tmp568.value;
        if ($tmp495) goto $l569;
        panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp495 = $tmp570.value;
        $l569:;
        panda$core$Bit $tmp571 = { $tmp495 };
        bool $tmp494 = $tmp571.value;
        if ($tmp494) goto $l572;
        panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp494 = $tmp573.value;
        $l572:;
        panda$core$Bit $tmp574 = { $tmp494 };
        bool $tmp493 = $tmp574.value;
        if ($tmp493) goto $l575;
        panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp493 = $tmp576.value;
        $l575:;
        panda$core$Bit $tmp577 = { $tmp493 };
        if ($tmp577.value) {
        {
            panda$core$String* $tmp578 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name490);
            return $tmp578;
        }
        }
        else {
        panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp579.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp581 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token580 = $tmp581;
            panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token580.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp582.value) {
            {
                return &$s583;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token580);
                return &$s584;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9492.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp585.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp586, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp588 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp586, &$s587);
            if (((panda$core$Bit) { !$tmp588.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp589, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp590 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp589);
            if (((panda$core$Bit) { $tmp590.nonnull }).value) {
            {
                return &$s591;
            }
            }
            return &$s592;
        }
        }
        else {
        {
            panda$core$String* $tmp594 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name490);
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s593, $tmp594);
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s596);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name490, $tmp597);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp598 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp598;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start599;
    org$pandalanguage$pandac$parser$Token$Kind $tmp600;
    panda$core$MutableString* name603;
    org$pandalanguage$pandac$parser$Token$Kind $tmp609;
    org$pandalanguage$pandac$parser$Token$nullable id611;
    org$pandalanguage$pandac$parser$Token$Kind $tmp612;
    panda$core$Char8 $tmp615;
    panda$core$String* finalName617;
    org$pandalanguage$pandac$ASTNode* result619;
    panda$collections$Array* children624;
    org$pandalanguage$pandac$ASTNode* t627;
    org$pandalanguage$pandac$parser$Token$Kind $tmp631;
    org$pandalanguage$pandac$parser$Token$Kind $tmp634;
    org$pandalanguage$pandac$parser$Token$Kind $tmp640;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp600, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp602 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp600, &$s601);
    start599 = $tmp602;
    if (((panda$core$Bit) { !start599.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp604 = (panda$core$MutableString*) malloc(48);
    $tmp604->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp604->refCount.value = 1;
    panda$core$String* $tmp606 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start599.value));
    panda$core$MutableString$init$panda$core$String($tmp604, $tmp606);
    name603 = $tmp604;
    $l607:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp609, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp610 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp609);
    if (!((panda$core$Bit) { $tmp610.nonnull }).value) goto $l608;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp612, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp614 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp612, &$s613);
        id611 = $tmp614;
        if (((panda$core$Bit) { !id611.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp615, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name603, $tmp615);
        panda$core$String* $tmp616 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id611.value));
        panda$core$MutableString$append$panda$core$String(name603, $tmp616);
    }
    goto $l607;
    $l608:;
    panda$core$String* $tmp618 = panda$core$MutableString$finish$R$panda$core$String(name603);
    finalName617 = $tmp618;
    org$pandalanguage$pandac$ASTNode* $tmp620 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp620->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp620->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp620, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start599.value).position, finalName617);
    result619 = $tmp620;
    org$pandalanguage$pandac$parser$Token $tmp622 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp622.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp623.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp625 = (panda$collections$Array*) malloc(40);
        $tmp625->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp625->refCount.value = 1;
        panda$collections$Array$init($tmp625);
        children624 = $tmp625;
        panda$collections$Array$add$panda$collections$Array$T(children624, ((panda$core$Object*) result619));
        org$pandalanguage$pandac$ASTNode* $tmp628 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t627 = $tmp628;
        if (((panda$core$Bit) { t627 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result619;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children624, ((panda$core$Object*) t627));
        $l629:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp631, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp632 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp631);
        if (!((panda$core$Bit) { $tmp632.nonnull }).value) goto $l630;
        {
            org$pandalanguage$pandac$ASTNode* $tmp633 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
            t627 = $tmp633;
            if (((panda$core$Bit) { t627 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result619;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children624, ((panda$core$Object*) t627));
        }
        goto $l629;
        $l630:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp634, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp636 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp634, &$s635);
        if (((panda$core$Bit) { !$tmp636.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result619;
            }
            }
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp637 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp637->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp637->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp639 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children624);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp637, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start599.value).position, finalName617, $tmp639);
        result619 = $tmp637;
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp640, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp641 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp640);
    if (((panda$core$Bit) { $tmp641.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp642 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp642->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp642->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp642, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start599.value).position, result619);
        result619 = $tmp642;
    }
    }
    return result619;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result644;
    org$pandalanguage$pandac$parser$Token token648;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13650;
    panda$collections$Array* args653;
    org$pandalanguage$pandac$parser$Token$Kind $tmp656;
    org$pandalanguage$pandac$ASTNode* expr658;
    org$pandalanguage$pandac$parser$Token$Kind $tmp662;
    org$pandalanguage$pandac$parser$Token$Kind $tmp665;
    org$pandalanguage$pandac$ASTNode* arg672;
    org$pandalanguage$pandac$parser$Token$Kind $tmp674;
    org$pandalanguage$pandac$parser$Token$Kind $tmp679;
    panda$core$String* name681;
    org$pandalanguage$pandac$parser$Token$Kind $tmp682;
    org$pandalanguage$pandac$ASTNode* target689;
    org$pandalanguage$pandac$parser$Token$Kind $tmp693;
    panda$core$String* name695;
    panda$core$MutableString* finalName697;
    panda$core$Char8 $tmp700;
    panda$collections$Array* types701;
    org$pandalanguage$pandac$ASTNode* t708;
    org$pandalanguage$pandac$parser$Token$Kind $tmp712;
    org$pandalanguage$pandac$parser$Token$Kind $tmp716;
    panda$core$Char8 $tmp719;
    panda$core$Bit shouldAccept720;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29722;
    org$pandalanguage$pandac$ASTNode* $tmp645 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result644 = $tmp645;
    if (((panda$core$Bit) { result644 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l646:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp649 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token648 = $tmp649;
        {
            $match$540_13650 = token648.kind;
            panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13650.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp651.value) {
            {
                panda$core$Bit$wrapper* $tmp652;
                $tmp652 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp652->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp652->refCount = 1;
                $tmp652->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp652));
                panda$collections$Array* $tmp654 = (panda$collections$Array*) malloc(40);
                $tmp654->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp654->refCount.value = 1;
                panda$collections$Array$init($tmp654);
                args653 = $tmp654;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp656, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp657 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp656);
                if (((panda$core$Bit) { !$tmp657.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp659 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr658 = $tmp659;
                    if (((panda$core$Bit) { expr658 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args653, ((panda$core$Object*) expr658));
                    $l660:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp662, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp663 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp662);
                    if (!((panda$core$Bit) { $tmp663.nonnull }).value) goto $l661;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp664 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        expr658 = $tmp664;
                        if (((panda$core$Bit) { expr658 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args653, ((panda$core$Object*) expr658));
                    }
                    goto $l660;
                    $l661:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp665, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp667 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp665, &$s666);
                    if (((panda$core$Bit) { !$tmp667.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp668 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp668->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp668->refCount.value = 1;
                panda$collections$ImmutableArray* $tmp670 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args653);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp668, ((panda$core$Int64) { 6 }), token648.position, result644, $tmp670);
                result644 = $tmp668;
            }
            }
            else {
            panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13650.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp671.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp673 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                arg672 = $tmp673;
                if (((panda$core$Bit) { arg672 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp674, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp676 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp674, &$s675);
                if (((panda$core$Bit) { !$tmp676.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp677 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp677->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp677->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp679, ((panda$core$Int64) { 101 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp677, ((panda$core$Int64) { 2 }), token648.position, result644, $tmp679, arg672);
                result644 = $tmp677;
            }
            }
            else {
            panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13650.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp680.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp682, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp683 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp682);
                if (((panda$core$Bit) { $tmp683.nonnull }).value) {
                {
                    name681 = &$s684;
                }
                }
                else {
                {
                    panda$core$String* $tmp685 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                    name681 = $tmp685;
                    if (((panda$core$Bit) { name681 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp686 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp686->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp686->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp686, ((panda$core$Int64) { 13 }), token648.position, result644, name681);
                result644 = $tmp686;
            }
            }
            else {
            panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13650.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp688.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp690 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target689 = $tmp690;
                if (((panda$core$Bit) { target689 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp691 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp691->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp691->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp693, ((panda$core$Int64) { 89 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp691, ((panda$core$Int64) { 2 }), token648.position, result644, $tmp693, target689);
                result644 = $tmp691;
            }
            }
            else {
            panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13650.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp694.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token648);
                panda$core$String* $tmp696 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result644);
                name695 = $tmp696;
                if (((panda$core$Bit) { name695 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp698 = (panda$core$MutableString*) malloc(48);
                    $tmp698->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp698->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp698, name695);
                    finalName697 = $tmp698;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp700, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName697, $tmp700);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp702 = (panda$collections$Array*) malloc(40);
                    $tmp702->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp702->refCount.value = 1;
                    panda$collections$Array$init($tmp702);
                    types701 = $tmp702;
                    org$pandalanguage$pandac$ASTNode* $tmp704 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                    $tmp704->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp704->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp707 = (($fn706) result644->$class->vtable[2])(result644);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp704, ((panda$core$Int64) { 35 }), $tmp707, name695);
                    panda$collections$Array$add$panda$collections$Array$T(types701, ((panda$core$Object*) $tmp704));
                    org$pandalanguage$pandac$ASTNode* $tmp709 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t708 = $tmp709;
                    if (((panda$core$Bit) { t708 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result644;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types701, ((panda$core$Object*) t708));
                    panda$core$MutableString$append$panda$core$Object(finalName697, ((panda$core$Object*) t708));
                    $l710:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp712, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp713 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp712);
                    if (!((panda$core$Bit) { $tmp713.nonnull }).value) goto $l711;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp714 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        t708 = $tmp714;
                        if (((panda$core$Bit) { t708 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result644;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types701, ((panda$core$Object*) t708));
                        panda$core$MutableString$append$panda$core$String(finalName697, &$s715);
                        panda$core$MutableString$append$panda$core$Object(finalName697, ((panda$core$Object*) t708));
                    }
                    goto $l710;
                    $l711:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp716, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp718 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp716, &$s717);
                    if (((panda$core$Bit) { !$tmp718.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result644;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp719, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName697, $tmp719);
                    panda$core$Object* $tmp721 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp721)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp723 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29722 = $tmp723.kind;
                            panda$core$Bit $tmp727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29722.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp726 = $tmp727.value;
                            if ($tmp726) goto $l728;
                            panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29722.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp726 = $tmp729.value;
                            $l728:;
                            panda$core$Bit $tmp730 = { $tmp726 };
                            bool $tmp725 = $tmp730.value;
                            if ($tmp725) goto $l731;
                            panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29722.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp725 = $tmp732.value;
                            $l731:;
                            panda$core$Bit $tmp733 = { $tmp725 };
                            bool $tmp724 = $tmp733.value;
                            if ($tmp724) goto $l734;
                            panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29722.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp724 = $tmp735.value;
                            $l734:;
                            panda$core$Bit $tmp736 = { $tmp724 };
                            if ($tmp736.value) {
                            {
                                shouldAccept720 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept720 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept720 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept720.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        org$pandalanguage$pandac$ASTNode* $tmp737 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                        $tmp737->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp737->refCount.value = 1;
                        org$pandalanguage$pandac$Position $tmp740 = (($fn739) result644->$class->vtable[2])(result644);
                        panda$core$String* $tmp741 = panda$core$MutableString$finish$R$panda$core$String(finalName697);
                        panda$collections$ImmutableArray* $tmp742 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types701);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp737, ((panda$core$Int64) { 17 }), $tmp740, $tmp741, $tmp742);
                        result644 = $tmp737;
                        goto $l646;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result644;
                    }
                    }
                }
                }
                return result644;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token648);
                return result644;
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l647:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result743;
    org$pandalanguage$pandac$parser$Token$nullable op747;
    org$pandalanguage$pandac$parser$Token$Kind $tmp748;
    org$pandalanguage$pandac$ASTNode* next750;
    org$pandalanguage$pandac$ASTNode* $tmp744 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result743 = $tmp744;
    if (((panda$core$Bit) { result743 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l745:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp748, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp749 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp748);
        op747 = $tmp749;
        if (((panda$core$Bit) { !op747.nonnull }).value) {
        {
            goto $l746;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp751 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next750 = $tmp751;
        if (((panda$core$Bit) { next750 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp752 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp752->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp752->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp752, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op747.value).position, result743, ((org$pandalanguage$pandac$parser$Token) op747.value).kind, next750);
        result743 = $tmp752;
    }
    }
    $l746:;
    return result743;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op754;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9756;
    org$pandalanguage$pandac$ASTNode* base766;
    org$pandalanguage$pandac$parser$Token $tmp755 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op754 = $tmp755;
    {
        $match$709_9756 = op754.kind;
        panda$core$Bit $tmp759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9756.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp758 = $tmp759.value;
        if ($tmp758) goto $l760;
        panda$core$Bit $tmp761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9756.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp758 = $tmp761.value;
        $l760:;
        panda$core$Bit $tmp762 = { $tmp758 };
        bool $tmp757 = $tmp762.value;
        if ($tmp757) goto $l763;
        panda$core$Bit $tmp764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9756.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp757 = $tmp764.value;
        $l763:;
        panda$core$Bit $tmp765 = { $tmp757 };
        if ($tmp765.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp767 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base766 = $tmp767;
            if (((panda$core$Bit) { base766 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp768 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp768->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp768->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp768, ((panda$core$Int64) { 28 }), op754.position, op754.kind, base766);
            return $tmp768;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op754);
            org$pandalanguage$pandac$ASTNode* $tmp770 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp770;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result771;
    org$pandalanguage$pandac$parser$Token op775;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13777;
    org$pandalanguage$pandac$ASTNode* next803;
    org$pandalanguage$pandac$parser$Token nextToken808;
    org$pandalanguage$pandac$ASTNode* next811;
    org$pandalanguage$pandac$parser$Token$Kind $tmp815;
    org$pandalanguage$pandac$ASTNode* $tmp772 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result771 = $tmp772;
    if (((panda$core$Bit) { result771 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l773:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp776 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op775 = $tmp776;
        {
            $match$735_13777 = op775.kind;
            panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp783 = $tmp784.value;
            if ($tmp783) goto $l785;
            panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp783 = $tmp786.value;
            $l785:;
            panda$core$Bit $tmp787 = { $tmp783 };
            bool $tmp782 = $tmp787.value;
            if ($tmp782) goto $l788;
            panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp782 = $tmp789.value;
            $l788:;
            panda$core$Bit $tmp790 = { $tmp782 };
            bool $tmp781 = $tmp790.value;
            if ($tmp781) goto $l791;
            panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp781 = $tmp792.value;
            $l791:;
            panda$core$Bit $tmp793 = { $tmp781 };
            bool $tmp780 = $tmp793.value;
            if ($tmp780) goto $l794;
            panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp780 = $tmp795.value;
            $l794:;
            panda$core$Bit $tmp796 = { $tmp780 };
            bool $tmp779 = $tmp796.value;
            if ($tmp779) goto $l797;
            panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp779 = $tmp798.value;
            $l797:;
            panda$core$Bit $tmp799 = { $tmp779 };
            bool $tmp778 = $tmp799.value;
            if ($tmp778) goto $l800;
            panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp778 = $tmp801.value;
            $l800:;
            panda$core$Bit $tmp802 = { $tmp778 };
            if ($tmp802.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp804 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next803 = $tmp804;
                if (((panda$core$Bit) { next803 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp805 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp805->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp805->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp805, ((panda$core$Int64) { 2 }), op775.position, result771, op775.kind, next803);
                result771 = $tmp805;
            }
            }
            else {
            panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13777.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp807.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp809 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken808 = $tmp809;
                panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken808.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp810.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp812 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next811 = $tmp812;
                    if (((panda$core$Bit) { next811 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp813 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                    $tmp813->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp813->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp815, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp813, ((panda$core$Int64) { 2 }), op775.position, result771, $tmp815, next811);
                    result771 = $tmp813;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken808);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op775);
                    return result771;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op775);
                return result771;
            }
            }
            }
        }
    }
    }
    $l774:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result816;
    org$pandalanguage$pandac$parser$Token op820;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13822;
    org$pandalanguage$pandac$ASTNode* next832;
    org$pandalanguage$pandac$ASTNode* $tmp817 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result816 = $tmp817;
    if (((panda$core$Bit) { result816 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l818:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp821 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op820 = $tmp821;
        {
            $match$776_13822 = op820.kind;
            panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13822.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp824 = $tmp825.value;
            if ($tmp824) goto $l826;
            panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13822.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp824 = $tmp827.value;
            $l826:;
            panda$core$Bit $tmp828 = { $tmp824 };
            bool $tmp823 = $tmp828.value;
            if ($tmp823) goto $l829;
            panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13822.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp823 = $tmp830.value;
            $l829:;
            panda$core$Bit $tmp831 = { $tmp823 };
            if ($tmp831.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp833 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next832 = $tmp833;
                if (((panda$core$Bit) { next832 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp834 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp834->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp834->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp834, ((panda$core$Int64) { 2 }), op820.position, result816, op820.kind, next832);
                result816 = $tmp834;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op820);
                return result816;
            }
            }
        }
    }
    }
    $l819:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result836;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9837;
    org$pandalanguage$pandac$parser$Token op845;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9847;
    org$pandalanguage$pandac$parser$Token next853;
    org$pandalanguage$pandac$ASTNode* right855;
    org$pandalanguage$pandac$ASTNode* step866;
    org$pandalanguage$pandac$parser$Token$Kind $tmp867;
    {
        org$pandalanguage$pandac$parser$Token $tmp838 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9837 = $tmp838.kind;
        panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9837.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp839 = $tmp840.value;
        if ($tmp839) goto $l841;
        panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9837.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp839 = $tmp842.value;
        $l841:;
        panda$core$Bit $tmp843 = { $tmp839 };
        if ($tmp843.value) {
        {
            result836 = NULL;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp844 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result836 = $tmp844;
            if (((panda$core$Bit) { result836 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp846 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op845 = $tmp846;
    {
        $match$806_9847 = op845.kind;
        panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9847.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp848 = $tmp849.value;
        if ($tmp848) goto $l850;
        panda$core$Bit $tmp851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9847.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp848 = $tmp851.value;
        $l850:;
        panda$core$Bit $tmp852 = { $tmp848 };
        if ($tmp852.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp854 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next853 = $tmp854;
            panda$core$Bit $tmp858 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next853.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp857 = $tmp858.value;
            if (!$tmp857) goto $l859;
            panda$core$Bit $tmp860 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next853.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp857 = $tmp860.value;
            $l859:;
            panda$core$Bit $tmp861 = { $tmp857 };
            bool $tmp856 = $tmp861.value;
            if (!$tmp856) goto $l862;
            panda$core$Bit $tmp863 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next853.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp856 = $tmp863.value;
            $l862:;
            panda$core$Bit $tmp864 = { $tmp856 };
            if ($tmp864.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp865 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                right855 = $tmp865;
                if (((panda$core$Bit) { right855 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                right855 = NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp867, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp868 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp867);
            if (((panda$core$Bit) { $tmp868.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp869 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                step866 = $tmp869;
                if (((panda$core$Bit) { step866 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                step866 = NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp870 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp870->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp870->refCount.value = 1;
            panda$core$Bit $tmp872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op845.kind.$rawValue, ((panda$core$Int64) { 96 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp870, ((panda$core$Int64) { 29 }), op845.position, result836, right855, $tmp872, step866);
            return $tmp870;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op845);
            return result836;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result873;
    org$pandalanguage$pandac$parser$Token op877;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13879;
    org$pandalanguage$pandac$ASTNode* next909;
    org$pandalanguage$pandac$ASTNode* $tmp874 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result873 = $tmp874;
    if (((panda$core$Bit) { result873 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l875:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp878 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op877 = $tmp878;
        {
            $match$849_13879 = op877.kind;
            panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp886 = $tmp887.value;
            if ($tmp886) goto $l888;
            panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp886 = $tmp889.value;
            $l888:;
            panda$core$Bit $tmp890 = { $tmp886 };
            bool $tmp885 = $tmp890.value;
            if ($tmp885) goto $l891;
            panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp885 = $tmp892.value;
            $l891:;
            panda$core$Bit $tmp893 = { $tmp885 };
            bool $tmp884 = $tmp893.value;
            if ($tmp884) goto $l894;
            panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp884 = $tmp895.value;
            $l894:;
            panda$core$Bit $tmp896 = { $tmp884 };
            bool $tmp883 = $tmp896.value;
            if ($tmp883) goto $l897;
            panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp883 = $tmp898.value;
            $l897:;
            panda$core$Bit $tmp899 = { $tmp883 };
            bool $tmp882 = $tmp899.value;
            if ($tmp882) goto $l900;
            panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp882 = $tmp901.value;
            $l900:;
            panda$core$Bit $tmp902 = { $tmp882 };
            bool $tmp881 = $tmp902.value;
            if ($tmp881) goto $l903;
            panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp881 = $tmp904.value;
            $l903:;
            panda$core$Bit $tmp905 = { $tmp881 };
            bool $tmp880 = $tmp905.value;
            if ($tmp880) goto $l906;
            panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13879.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp880 = $tmp907.value;
            $l906:;
            panda$core$Bit $tmp908 = { $tmp880 };
            if ($tmp908.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp910 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next909 = $tmp910;
                if (((panda$core$Bit) { next909 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp911 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp911->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp911->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp911, ((panda$core$Int64) { 2 }), op877.position, result873, op877.kind, next909);
                result873 = $tmp911;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op877);
                return result873;
            }
            }
        }
    }
    }
    $l876:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result913;
    org$pandalanguage$pandac$parser$Token op917;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_13919;
    org$pandalanguage$pandac$ASTNode* next925;
    org$pandalanguage$pandac$ASTNode* $tmp914 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result913 = $tmp914;
    if (((panda$core$Bit) { result913 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l915:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp918 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op917 = $tmp918;
        {
            $match$880_13919 = op917.kind;
            panda$core$Bit $tmp921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13919.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp920 = $tmp921.value;
            if ($tmp920) goto $l922;
            panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13919.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp920 = $tmp923.value;
            $l922:;
            panda$core$Bit $tmp924 = { $tmp920 };
            if ($tmp924.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp926 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next925 = $tmp926;
                if (((panda$core$Bit) { next925 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp927 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp927->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp927->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp927, ((panda$core$Int64) { 2 }), op917.position, result913, op917.kind, next925);
                result913 = $tmp927;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op917);
                return result913;
            }
            }
        }
    }
    }
    $l916:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result929;
    org$pandalanguage$pandac$parser$Token$nullable op933;
    org$pandalanguage$pandac$parser$Token$Kind $tmp934;
    org$pandalanguage$pandac$ASTNode* next936;
    org$pandalanguage$pandac$ASTNode* $tmp930 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result929 = $tmp930;
    if (((panda$core$Bit) { result929 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l931:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp934, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp935 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp934);
        op933 = $tmp935;
        if (((panda$core$Bit) { !op933.nonnull }).value) {
        {
            goto $l932;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp937 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next936 = $tmp937;
        if (((panda$core$Bit) { next936 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp938 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp938->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp938->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp938, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op933.value).position, result929, ((org$pandalanguage$pandac$parser$Token) op933.value).kind, next936);
        result929 = $tmp938;
    }
    }
    $l932:;
    return result929;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start940;
    org$pandalanguage$pandac$parser$Token$Kind $tmp941;
    org$pandalanguage$pandac$ASTNode* test944;
    panda$collections$ImmutableArray* ifTrue946;
    org$pandalanguage$pandac$ASTNode* ifFalse948;
    org$pandalanguage$pandac$parser$Token$Kind $tmp949;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp941, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp943 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp941, &$s942);
    start940 = $tmp943;
    if (((panda$core$Bit) { !start940.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp945 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test944 = $tmp945;
    if (((panda$core$Bit) { test944 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp947 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    ifTrue946 = $tmp947;
    if (((panda$core$Bit) { ifTrue946 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp949, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp950 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp949);
    if (((panda$core$Bit) { $tmp950.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp951 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp951.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp952.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp953 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse948 = $tmp953;
            if (((panda$core$Bit) { ifFalse948 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp954 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse948 = $tmp954;
            if (((panda$core$Bit) { ifFalse948 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    }
    else {
    {
        ifFalse948 = NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp955 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp955->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp955->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp955, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start940.value).position, test944, ifTrue946, ifFalse948);
    return $tmp955;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp957;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp957, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp959 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp957, &$s958);
    if (((panda$core$Bit) { !$tmp959.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp960 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp960;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id961;
    org$pandalanguage$pandac$parser$Token$Kind $tmp962;
    org$pandalanguage$pandac$ASTNode* type967;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp962, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp964 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp962, &$s963);
    id961 = $tmp964;
    if (((panda$core$Bit) { !id961.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp965 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp965.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp966.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp968 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type967 = $tmp968;
        if (((panda$core$Bit) { type967 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp969 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp969->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp969->refCount.value = 1;
        panda$core$String* $tmp971 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id961.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp969, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id961.value).position, $tmp971, type967);
        return $tmp969;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp972 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp972->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp972->refCount.value = 1;
    panda$core$String* $tmp974 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id961.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp972, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id961.value).position, $tmp974);
    return $tmp972;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start975;
    org$pandalanguage$pandac$parser$Token$Kind $tmp976;
    org$pandalanguage$pandac$ASTNode* t979;
    org$pandalanguage$pandac$parser$Token$Kind $tmp981;
    org$pandalanguage$pandac$ASTNode* list984;
    panda$collections$ImmutableArray* block986;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp976, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp978 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp976, &$s977);
    start975 = $tmp978;
    if (((panda$core$Bit) { !start975.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp980 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t979 = $tmp980;
    if (((panda$core$Bit) { t979 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp981, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp983 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp981, &$s982);
    if (((panda$core$Bit) { !$tmp983.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp985 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list984 = $tmp985;
    if (((panda$core$Bit) { list984 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp987 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    block986 = $tmp987;
    if (((panda$core$Bit) { block986 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp988 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp988->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp988->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp988, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start975.value).position, p_label, t979, list984, block986);
    return $tmp988;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start990;
    org$pandalanguage$pandac$parser$Token$Kind $tmp991;
    org$pandalanguage$pandac$ASTNode* test994;
    panda$collections$ImmutableArray* body996;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp991, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp993 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp991, &$s992);
    start990 = $tmp993;
    if (((panda$core$Bit) { !start990.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp995 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test994 = $tmp995;
    if (((panda$core$Bit) { test994 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp997 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body996 = $tmp997;
    if (((panda$core$Bit) { body996 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp998 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp998->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp998->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp998, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start990.value).position, p_label, test994, body996);
    return $tmp998;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1000;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1001;
    panda$collections$ImmutableArray* body1004;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1006;
    org$pandalanguage$pandac$ASTNode* test1009;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1001, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1003 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1001, &$s1002);
    start1000 = $tmp1003;
    if (((panda$core$Bit) { !start1000.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1005 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1004 = $tmp1005;
    if (((panda$core$Bit) { body1004 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1006, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1008 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1006, &$s1007);
    if (((panda$core$Bit) { !$tmp1008.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1010 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1009 = $tmp1010;
    if (((panda$core$Bit) { test1009 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1011 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1011->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1011->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1011, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1000.value).position, p_label, body1004, test1009);
    return $tmp1011;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1013;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1014;
    panda$collections$ImmutableArray* body1017;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1014, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1016 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1014, &$s1015);
    start1013 = $tmp1016;
    if (((panda$core$Bit) { !start1013.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1018 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1017 = $tmp1018;
    if (((panda$core$Bit) { body1017 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1019 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1019->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1019->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1019, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1013.value).position, p_label, body1017);
    return $tmp1019;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1021;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1022;
    org$pandalanguage$pandac$ASTNode* expr1025;
    org$pandalanguage$pandac$ASTNode* message1027;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1028;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1022, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1024 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1022, &$s1023);
    start1021 = $tmp1024;
    if (((panda$core$Bit) { !start1021.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1026 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1025 = $tmp1026;
    if (((panda$core$Bit) { expr1025 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1028, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1029 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1028);
    if (((panda$core$Bit) { $tmp1029.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1030 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        message1027 = $tmp1030;
        if (((panda$core$Bit) { message1027 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        message1027 = NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1031 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1031->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1031->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1031, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1021.value).position, expr1025, message1027);
    return $tmp1031;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1033;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1034;
    panda$collections$Array* expressions1037;
    org$pandalanguage$pandac$ASTNode* expr1040;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1044;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1047;
    panda$collections$Array* statements1050;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131055;
    org$pandalanguage$pandac$ASTNode* stmt1075;
    org$pandalanguage$pandac$ASTNode* stmt1077;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1034, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1036 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1034, &$s1035);
    start1033 = $tmp1036;
    if (((panda$core$Bit) { !start1033.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1038 = (panda$collections$Array*) malloc(40);
    $tmp1038->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1038->refCount.value = 1;
    panda$collections$Array$init($tmp1038);
    expressions1037 = $tmp1038;
    org$pandalanguage$pandac$ASTNode* $tmp1041 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1040 = $tmp1041;
    if (((panda$core$Bit) { expr1040 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1037, ((panda$core$Object*) expr1040));
    $l1042:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1044, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1045 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1044);
    if (!((panda$core$Bit) { $tmp1045.nonnull }).value) goto $l1043;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1046 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1040 = $tmp1046;
        if (((panda$core$Bit) { expr1040 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1037, ((panda$core$Object*) expr1040));
    }
    goto $l1042;
    $l1043:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1047, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1049 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1047, &$s1048);
    if (((panda$core$Bit) { !$tmp1049.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1051 = (panda$collections$Array*) malloc(40);
    $tmp1051->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1051->refCount.value = 1;
    panda$collections$Array$init($tmp1051);
    statements1050 = $tmp1051;
    $l1053:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1056 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131055 = $tmp1056.kind;
            panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131055.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1058 = $tmp1059.value;
            if ($tmp1058) goto $l1060;
            panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131055.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1058 = $tmp1061.value;
            $l1060:;
            panda$core$Bit $tmp1062 = { $tmp1058 };
            bool $tmp1057 = $tmp1062.value;
            if ($tmp1057) goto $l1063;
            panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131055.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1057 = $tmp1064.value;
            $l1063:;
            panda$core$Bit $tmp1065 = { $tmp1057 };
            if ($tmp1065.value) {
            {
                goto $l1054;
            }
            }
            else {
            panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131055.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1067 = $tmp1068.value;
            if ($tmp1067) goto $l1069;
            panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131055.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1067 = $tmp1070.value;
            $l1069:;
            panda$core$Bit $tmp1071 = { $tmp1067 };
            bool $tmp1066 = $tmp1071.value;
            if ($tmp1066) goto $l1072;
            panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131055.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1066 = $tmp1073.value;
            $l1072:;
            panda$core$Bit $tmp1074 = { $tmp1066 };
            if ($tmp1074.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1076 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1075 = $tmp1076;
                if (((panda$core$Bit) { stmt1075 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1050, ((panda$core$Object*) stmt1075));
                goto $l1054;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1078 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1077 = $tmp1078;
                    if (((panda$core$Bit) { stmt1077 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1050, ((panda$core$Object*) stmt1077));
                }
            }
            }
            }
        }
    }
    }
    $l1054:;
    org$pandalanguage$pandac$ASTNode* $tmp1079 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1079->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1079->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1081 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1037);
    panda$collections$ImmutableArray* $tmp1082 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1050);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1079, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1033.value).position, $tmp1081, $tmp1082);
    return $tmp1079;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1083;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1084;
    org$pandalanguage$pandac$ASTNode* expr1087;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1089;
    panda$collections$Array* whens1092;
    panda$collections$Array* other1095;
    org$pandalanguage$pandac$parser$Token token1098;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131100;
    org$pandalanguage$pandac$ASTNode* w1103;
    org$pandalanguage$pandac$parser$Token o1106;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1108;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251115;
    org$pandalanguage$pandac$ASTNode* stmt1127;
    org$pandalanguage$pandac$ASTNode* stmt1129;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1138;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1084, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1086 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1084, &$s1085);
    start1083 = $tmp1086;
    if (((panda$core$Bit) { !start1083.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1088 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1087 = $tmp1088;
    if (((panda$core$Bit) { expr1087 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1089, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1091 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1089, &$s1090);
    if (((panda$core$Bit) { !$tmp1091.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1093 = (panda$collections$Array*) malloc(40);
    $tmp1093->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1093->refCount.value = 1;
    panda$collections$Array$init($tmp1093);
    whens1092 = $tmp1093;
    other1095 = NULL;
    $l1096:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1099 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1098 = $tmp1099;
        {
            $match$1155_131100 = token1098.kind;
            panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131100.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1101.value) {
            {
                goto $l1097;
            }
            }
            else {
            panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131100.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1102.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1104 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1103 = $tmp1104;
                if (((panda$core$Bit) { w1103 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1092, ((panda$core$Object*) w1103));
            }
            }
            else {
            panda$core$Bit $tmp1105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131100.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1105.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1107 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1106 = $tmp1107;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1108, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1110 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1108, &$s1109);
                if (((panda$core$Bit) { !$tmp1110.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1111 = (panda$collections$Array*) malloc(40);
                $tmp1111->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1111->refCount.value = 1;
                panda$collections$Array$init($tmp1111);
                other1095 = $tmp1111;
                $l1113:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1116 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251115 = $tmp1116.kind;
                        panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251115.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1117.value) {
                        {
                            goto $l1114;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251115.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1119 = $tmp1120.value;
                        if ($tmp1119) goto $l1121;
                        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251115.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1119 = $tmp1122.value;
                        $l1121:;
                        panda$core$Bit $tmp1123 = { $tmp1119 };
                        bool $tmp1118 = $tmp1123.value;
                        if ($tmp1118) goto $l1124;
                        panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251115.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1118 = $tmp1125.value;
                        $l1124:;
                        panda$core$Bit $tmp1126 = { $tmp1118 };
                        if ($tmp1126.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1128 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1127 = $tmp1128;
                            if (((panda$core$Bit) { stmt1127 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1095, ((panda$core$Object*) stmt1127));
                            goto $l1114;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1130 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1129 = $tmp1130;
                            if (((panda$core$Bit) { stmt1129 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1095, ((panda$core$Object*) stmt1129));
                        }
                        }
                        }
                    }
                }
                }
                $l1114:;
                goto $l1097;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1133 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1098);
                panda$core$String* $tmp1134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1132, $tmp1133);
                panda$core$String* $tmp1136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1134, &$s1135);
                panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1131, $tmp1136);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1098, $tmp1137);
            }
            }
            }
            }
        }
    }
    }
    $l1097:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1138, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1140 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1138, &$s1139);
    if (((panda$core$Bit) { !$tmp1140.nonnull }).value) {
    {
        return NULL;
    }
    }
    if (((panda$core$Bit) { other1095 != NULL }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1141 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1141->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1141->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1143 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1092);
        panda$collections$ImmutableArray* $tmp1144 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1095);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1141, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1083.value).position, expr1087, $tmp1143, $tmp1144);
        return $tmp1141;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1145 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1145->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1145->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1147 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1092);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1145, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1083.value).position, expr1087, $tmp1147, NULL);
    return $tmp1145;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1149;
    panda$collections$Array* result1152;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131157;
    org$pandalanguage$pandac$ASTNode* stmt1169;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1171;
    org$pandalanguage$pandac$ASTNode* stmt1174;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1149, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1151 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1149, &$s1150);
    start1148 = $tmp1151;
    if (((panda$core$Bit) { !start1148.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1153 = (panda$collections$Array*) malloc(40);
    $tmp1153->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1153->refCount.value = 1;
    panda$collections$Array$init($tmp1153);
    result1152 = $tmp1153;
    $l1155:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1158 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131157 = $tmp1158.kind;
            panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131157.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1159.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1156;
            }
            }
            else {
            panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131157.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1161 = $tmp1162.value;
            if ($tmp1161) goto $l1163;
            panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131157.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1161 = $tmp1164.value;
            $l1163:;
            panda$core$Bit $tmp1165 = { $tmp1161 };
            bool $tmp1160 = $tmp1165.value;
            if ($tmp1160) goto $l1166;
            panda$core$Bit $tmp1167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131157.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1160 = $tmp1167.value;
            $l1166:;
            panda$core$Bit $tmp1168 = { $tmp1160 };
            if ($tmp1168.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1170 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1169 = $tmp1170;
                if (((panda$core$Bit) { stmt1169 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1171, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1173 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1171, &$s1172);
                if (((panda$core$Bit) { !$tmp1173.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1152, ((panda$core$Object*) stmt1169));
                goto $l1156;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1175 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1174 = $tmp1175;
                if (((panda$core$Bit) { stmt1174 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1152, ((panda$core$Object*) stmt1174));
            }
            }
            }
        }
    }
    }
    $l1156:;
    panda$collections$ImmutableArray* $tmp1176 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1152);
    return $tmp1176;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1177;
    org$pandalanguage$pandac$Position $tmp1181;
    panda$collections$ImmutableArray* $tmp1178 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    statements1177 = $tmp1178;
    if (((panda$core$Bit) { statements1177 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1179 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1179->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1179->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1181);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1179, ((panda$core$Int64) { 4 }), $tmp1181, statements1177);
    return $tmp1179;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1182;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91184;
    org$pandalanguage$pandac$parser$Token op1247;
    org$pandalanguage$pandac$ASTNode* rvalue1249;
    org$pandalanguage$pandac$parser$Token op1258;
    org$pandalanguage$pandac$ASTNode* rvalue1260;
    org$pandalanguage$pandac$ASTNode* $tmp1183 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1182 = $tmp1183;
    if (((panda$core$Bit) { start1182 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1185 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91184 = $tmp1185.kind;
        panda$core$Bit $tmp1201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1200 = $tmp1201.value;
        if ($tmp1200) goto $l1202;
        panda$core$Bit $tmp1203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1200 = $tmp1203.value;
        $l1202:;
        panda$core$Bit $tmp1204 = { $tmp1200 };
        bool $tmp1199 = $tmp1204.value;
        if ($tmp1199) goto $l1205;
        panda$core$Bit $tmp1206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1199 = $tmp1206.value;
        $l1205:;
        panda$core$Bit $tmp1207 = { $tmp1199 };
        bool $tmp1198 = $tmp1207.value;
        if ($tmp1198) goto $l1208;
        panda$core$Bit $tmp1209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1198 = $tmp1209.value;
        $l1208:;
        panda$core$Bit $tmp1210 = { $tmp1198 };
        bool $tmp1197 = $tmp1210.value;
        if ($tmp1197) goto $l1211;
        panda$core$Bit $tmp1212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1197 = $tmp1212.value;
        $l1211:;
        panda$core$Bit $tmp1213 = { $tmp1197 };
        bool $tmp1196 = $tmp1213.value;
        if ($tmp1196) goto $l1214;
        panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1196 = $tmp1215.value;
        $l1214:;
        panda$core$Bit $tmp1216 = { $tmp1196 };
        bool $tmp1195 = $tmp1216.value;
        if ($tmp1195) goto $l1217;
        panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1195 = $tmp1218.value;
        $l1217:;
        panda$core$Bit $tmp1219 = { $tmp1195 };
        bool $tmp1194 = $tmp1219.value;
        if ($tmp1194) goto $l1220;
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1194 = $tmp1221.value;
        $l1220:;
        panda$core$Bit $tmp1222 = { $tmp1194 };
        bool $tmp1193 = $tmp1222.value;
        if ($tmp1193) goto $l1223;
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1193 = $tmp1224.value;
        $l1223:;
        panda$core$Bit $tmp1225 = { $tmp1193 };
        bool $tmp1192 = $tmp1225.value;
        if ($tmp1192) goto $l1226;
        panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1192 = $tmp1227.value;
        $l1226:;
        panda$core$Bit $tmp1228 = { $tmp1192 };
        bool $tmp1191 = $tmp1228.value;
        if ($tmp1191) goto $l1229;
        panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1191 = $tmp1230.value;
        $l1229:;
        panda$core$Bit $tmp1231 = { $tmp1191 };
        bool $tmp1190 = $tmp1231.value;
        if ($tmp1190) goto $l1232;
        panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1190 = $tmp1233.value;
        $l1232:;
        panda$core$Bit $tmp1234 = { $tmp1190 };
        bool $tmp1189 = $tmp1234.value;
        if ($tmp1189) goto $l1235;
        panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1189 = $tmp1236.value;
        $l1235:;
        panda$core$Bit $tmp1237 = { $tmp1189 };
        bool $tmp1188 = $tmp1237.value;
        if ($tmp1188) goto $l1238;
        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1188 = $tmp1239.value;
        $l1238:;
        panda$core$Bit $tmp1240 = { $tmp1188 };
        bool $tmp1187 = $tmp1240.value;
        if ($tmp1187) goto $l1241;
        panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1187 = $tmp1242.value;
        $l1241:;
        panda$core$Bit $tmp1243 = { $tmp1187 };
        bool $tmp1186 = $tmp1243.value;
        if ($tmp1186) goto $l1244;
        panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1186 = $tmp1245.value;
        $l1244:;
        panda$core$Bit $tmp1246 = { $tmp1186 };
        if ($tmp1246.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1248 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1247 = $tmp1248;
            org$pandalanguage$pandac$ASTNode* $tmp1250 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1249 = $tmp1250;
            if (((panda$core$Bit) { rvalue1249 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1251 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1251->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1251->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp1254 = (($fn1253) start1182->$class->vtable[2])(start1182);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1251, ((panda$core$Int64) { 2 }), $tmp1254, start1182, op1247.kind, rvalue1249);
            return $tmp1251;
        }
        }
        else {
        panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91184.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1255.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1256 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1256, &$s1257);
            org$pandalanguage$pandac$parser$Token $tmp1259 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1258 = $tmp1259;
            org$pandalanguage$pandac$ASTNode* $tmp1261 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1260 = $tmp1261;
            if (((panda$core$Bit) { rvalue1260 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1262 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1262->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1262->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp1265 = (($fn1264) start1182->$class->vtable[2])(start1182);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1262, ((panda$core$Int64) { 2 }), $tmp1265, start1182, op1258.kind, rvalue1260);
            return $tmp1262;
        }
        }
        else {
        {
            return start1182;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1266;
    org$pandalanguage$pandac$ASTNode* value1268;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1269;
    org$pandalanguage$pandac$ASTNode* $tmp1267 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1266 = $tmp1267;
    if (((panda$core$Bit) { t1266 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1269, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1270 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1269);
    if (((panda$core$Bit) { $tmp1270.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1271 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value1268 = $tmp1271;
        if (((panda$core$Bit) { value1268 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1272 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1272.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1273.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1274 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1274, &$s1275);
        org$pandalanguage$pandac$ASTNode* $tmp1276 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value1268 = $tmp1276;
        if (((panda$core$Bit) { value1268 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value1268 = NULL;
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1277 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1277->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1277->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp1280 = (($fn1279) t1266->$class->vtable[2])(t1266);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1277, ((panda$core$Int64) { 11 }), $tmp1280, t1266, value1268);
    return $tmp1277;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1281;
    org$pandalanguage$pandac$Variable$Kind kind1283;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91284;
    org$pandalanguage$pandac$Variable$Kind $tmp1286;
    org$pandalanguage$pandac$Variable$Kind $tmp1288;
    org$pandalanguage$pandac$Variable$Kind $tmp1290;
    org$pandalanguage$pandac$Variable$Kind $tmp1292;
    panda$collections$Array* declarations1294;
    org$pandalanguage$pandac$ASTNode* decl1297;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1301;
    org$pandalanguage$pandac$ASTNode* decl1303;
    org$pandalanguage$pandac$parser$Token $tmp1282 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1281 = $tmp1282;
    {
        $match$1318_91284 = start1281.kind;
        panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91284.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1285.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1286, ((panda$core$Int64) { 0 }));
            kind1283 = $tmp1286;
        }
        }
        else {
        panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91284.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1287.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1288, ((panda$core$Int64) { 1 }));
            kind1283 = $tmp1288;
        }
        }
        else {
        panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91284.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1289.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1290, ((panda$core$Int64) { 3 }));
            kind1283 = $tmp1290;
        }
        }
        else {
        panda$core$Bit $tmp1291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91284.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1291.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1292, ((panda$core$Int64) { 2 }));
            kind1283 = $tmp1292;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1281, &$s1293);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1295 = (panda$collections$Array*) malloc(40);
    $tmp1295->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1295->refCount.value = 1;
    panda$collections$Array$init($tmp1295);
    declarations1294 = $tmp1295;
    org$pandalanguage$pandac$ASTNode* $tmp1298 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1297 = $tmp1298;
    if (((panda$core$Bit) { decl1297 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1294, ((panda$core$Object*) decl1297));
    $l1299:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1301, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1302 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1301);
    if (!((panda$core$Bit) { $tmp1302.nonnull }).value) goto $l1300;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1304 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        decl1303 = $tmp1304;
        if (((panda$core$Bit) { decl1303 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1294, ((panda$core$Object*) decl1303));
    }
    goto $l1299;
    $l1300:;
    org$pandalanguage$pandac$ASTNode* $tmp1305 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1305->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1305->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1307 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1294);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1305, ((panda$core$Int64) { 38 }), start1281.position, kind1283, $tmp1307);
    return $tmp1305;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1308;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1309;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1312;
    org$pandalanguage$pandac$ASTNode* target1316;
    panda$collections$Array* args1320;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1323;
    org$pandalanguage$pandac$ASTNode* expr1325;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1329;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1332;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1309, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1311 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1309, &$s1310);
    start1308 = $tmp1311;
    if (((panda$core$Bit) { !start1308.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1312, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1314 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1312, &$s1313);
    if (((panda$core$Bit) { !$tmp1314.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1315;
    $tmp1315 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp1315->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp1315->refCount = 1;
    $tmp1315->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1315));
    org$pandalanguage$pandac$ASTNode* $tmp1317 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1317->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1317->refCount.value = 1;
    panda$core$String* $tmp1319 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1308.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1317, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1308.value).position, $tmp1319);
    target1316 = $tmp1317;
    panda$collections$Array* $tmp1321 = (panda$collections$Array*) malloc(40);
    $tmp1321->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1321->refCount.value = 1;
    panda$collections$Array$init($tmp1321);
    args1320 = $tmp1321;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1323, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1324 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1323);
    if (((panda$core$Bit) { !$tmp1324.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1326 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1325 = $tmp1326;
        if (((panda$core$Bit) { expr1325 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1320, ((panda$core$Object*) expr1325));
        $l1327:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1329, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1330 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1329);
        if (!((panda$core$Bit) { $tmp1330.nonnull }).value) goto $l1328;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1331 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1325 = $tmp1331;
            if (((panda$core$Bit) { expr1325 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1320, ((panda$core$Object*) expr1325));
        }
        goto $l1327;
        $l1328:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1332, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1334 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1332, &$s1333);
        if (((panda$core$Bit) { !$tmp1334.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1335 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1335->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1335->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1337 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1320);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1335, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1308.value).position, target1316, $tmp1337);
    return $tmp1335;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1338;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1339;
    org$pandalanguage$pandac$parser$Token$nullable label1342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1343;
    panda$core$String* s1348;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1339, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1341 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1339, &$s1340);
    start1338 = $tmp1341;
    if (((panda$core$Bit) { !start1338.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1343, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1344 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1343);
    label1342 = $tmp1344;
    if (((panda$core$Bit) { label1342.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1345 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1345->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1345->refCount.value = 1;
        panda$core$String* $tmp1347 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1342.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1345, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1338.value).position, $tmp1347);
        return $tmp1345;
    }
    }
    s1348 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1349 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1349->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1349->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1349, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1338.value).position, s1348);
    return $tmp1349;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1351;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1352;
    org$pandalanguage$pandac$parser$Token$nullable label1355;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1356;
    panda$core$String* s1361;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1352, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1354 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1352, &$s1353);
    start1351 = $tmp1354;
    if (((panda$core$Bit) { !start1351.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1356, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1357 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1356);
    label1355 = $tmp1357;
    if (((panda$core$Bit) { label1355.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1358 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1358->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1358->refCount.value = 1;
        panda$core$String* $tmp1360 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1355.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1358, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1351.value).position, $tmp1360);
        return $tmp1358;
    }
    }
    s1361 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1362 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1362->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1362->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1362, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1351.value).position, s1361);
    return $tmp1362;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1364;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1365;
    org$pandalanguage$pandac$parser$Token$Kind $match$1424_91368;
    org$pandalanguage$pandac$ASTNode* v1379;
    panda$collections$Array* children1382;
    org$pandalanguage$pandac$ASTNode* expr1385;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1365, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1367 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1365, &$s1366);
    start1364 = $tmp1367;
    if (((panda$core$Bit) { !start1364.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1369 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1424_91368 = $tmp1369.kind;
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1424_91368.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1371 = $tmp1372.value;
        if ($tmp1371) goto $l1373;
        panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1424_91368.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1371 = $tmp1374.value;
        $l1373:;
        panda$core$Bit $tmp1375 = { $tmp1371 };
        bool $tmp1370 = $tmp1375.value;
        if ($tmp1370) goto $l1376;
        panda$core$Bit $tmp1377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1424_91368.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1370 = $tmp1377.value;
        $l1376:;
        panda$core$Bit $tmp1378 = { $tmp1370 };
        if ($tmp1378.value) {
        {
            v1379 = NULL;
            org$pandalanguage$pandac$ASTNode* $tmp1380 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1380->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1380->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1380, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1364.value).position, v1379);
            return $tmp1380;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1383 = (panda$collections$Array*) malloc(40);
            $tmp1383->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1383->refCount.value = 1;
            panda$collections$Array$init($tmp1383);
            children1382 = $tmp1383;
            org$pandalanguage$pandac$ASTNode* $tmp1386 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1385 = $tmp1386;
            if (((panda$core$Bit) { expr1385 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1382, ((panda$core$Object*) expr1385));
            org$pandalanguage$pandac$ASTNode* $tmp1387 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1387->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1387->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1387, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1364.value).position, expr1385);
            return $tmp1387;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1443_91389;
    {
        org$pandalanguage$pandac$parser$Token $tmp1390 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1443_91389 = $tmp1390.kind;
        panda$core$Bit $tmp1391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1443_91389.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1391.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1392 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1392;
        }
        }
        else {
        panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1443_91389.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1393.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1394 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1394;
        }
        }
        else {
        panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1443_91389.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1395.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1396 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1396;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1452_91397;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1407;
    {
        org$pandalanguage$pandac$parser$Token $tmp1398 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1452_91397 = $tmp1398.kind;
        panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1452_91397.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1399.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1400 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1400;
        }
        }
        else {
        panda$core$Bit $tmp1401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1452_91397.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1401.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1402 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1402;
        }
        }
        else {
        panda$core$Bit $tmp1403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1452_91397.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1403.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1404 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1404;
        }
        }
        else {
        panda$core$Bit $tmp1405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1452_91397.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1405.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1406 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1406;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1407, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1407, &$s1408);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1469_91409;
    org$pandalanguage$pandac$parser$Token id1428;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1430;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1457;
    {
        org$pandalanguage$pandac$parser$Token $tmp1410 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1469_91409 = $tmp1410.kind;
        panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1411.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1412 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1412;
        }
        }
        else {
        panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1413.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1414 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1414;
        }
        }
        else {
        panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1415.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1416 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1416;
        }
        }
        else {
        panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1417.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1418 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1418;
        }
        }
        else {
        panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1419.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1420 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1420;
        }
        }
        else {
        panda$core$Bit $tmp1421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1421.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1422 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1422;
        }
        }
        else {
        panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1423.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1424 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1424;
        }
        }
        else {
        panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1425.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1426 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1426;
        }
        }
        else {
        panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1427.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1429 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1428 = $tmp1429;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1430, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1431 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1430);
            if (((panda$core$Bit) { $tmp1431.nonnull }).value) {
            {
                panda$core$String* $tmp1432 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1428);
                org$pandalanguage$pandac$ASTNode* $tmp1433 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1432);
                return $tmp1433;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1428);
            org$pandalanguage$pandac$ASTNode* $tmp1434 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1434;
        }
        }
        else {
        panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1435 = $tmp1436.value;
        if ($tmp1435) goto $l1437;
        panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1435 = $tmp1438.value;
        $l1437:;
        panda$core$Bit $tmp1439 = { $tmp1435 };
        if ($tmp1439.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1440 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1440;
        }
        }
        else {
        panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1443 = $tmp1444.value;
        if ($tmp1443) goto $l1445;
        panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1443 = $tmp1446.value;
        $l1445:;
        panda$core$Bit $tmp1447 = { $tmp1443 };
        bool $tmp1442 = $tmp1447.value;
        if ($tmp1442) goto $l1448;
        panda$core$Bit $tmp1449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1442 = $tmp1449.value;
        $l1448:;
        panda$core$Bit $tmp1450 = { $tmp1442 };
        bool $tmp1441 = $tmp1450.value;
        if ($tmp1441) goto $l1451;
        panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1441 = $tmp1452.value;
        $l1451:;
        panda$core$Bit $tmp1453 = { $tmp1441 };
        if ($tmp1453.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1454 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1454;
        }
        }
        else {
        panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1469_91409.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1455.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1456 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1456;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1457, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1457, &$s1458);
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
    org$pandalanguage$pandac$parser$Token$nullable start1459;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1460;
    org$pandalanguage$pandac$parser$Token$nullable next1463;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1464;
    panda$core$MutableString* name1467;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1473;
    panda$core$Char8 $tmp1475;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1476;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1460, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1462 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1460, &$s1461);
    start1459 = $tmp1462;
    if (((panda$core$Bit) { !start1459.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1464, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1466 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1464, &$s1465);
    next1463 = $tmp1466;
    if (((panda$core$Bit) { !next1463.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1468 = (panda$core$MutableString*) malloc(48);
    $tmp1468->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1468->refCount.value = 1;
    panda$core$String* $tmp1470 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1463.value));
    panda$core$MutableString$init$panda$core$String($tmp1468, $tmp1470);
    name1467 = $tmp1468;
    $l1471:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1473, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1474 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1473);
        next1463 = $tmp1474;
        if (((panda$core$Bit) { !next1463.nonnull }).value) {
        {
            goto $l1472;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1475, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1467, $tmp1475);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1476, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1478 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1476, &$s1477);
        next1463 = $tmp1478;
        if (((panda$core$Bit) { !next1463.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1479 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1463.value));
        panda$core$MutableString$append$panda$core$String(name1467, $tmp1479);
    }
    }
    $l1472:;
    org$pandalanguage$pandac$ASTNode* $tmp1480 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1480->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1480->refCount.value = 1;
    panda$core$String* $tmp1482 = panda$core$MutableString$finish$R$panda$core$String(name1467);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1480, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start1459.value).position, $tmp1482);
    return $tmp1480;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1483;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1484;
    org$pandalanguage$pandac$parser$Token$nullable next1487;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1488;
    panda$core$MutableString* name1491;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1497;
    panda$core$Char8 $tmp1499;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1500;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1484, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1486 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1484, &$s1485);
    start1483 = $tmp1486;
    if (((panda$core$Bit) { !start1483.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1488, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1490 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1488, &$s1489);
    next1487 = $tmp1490;
    if (((panda$core$Bit) { !next1487.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1492 = (panda$core$MutableString*) malloc(48);
    $tmp1492->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1492->refCount.value = 1;
    panda$core$String* $tmp1494 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1487.value));
    panda$core$MutableString$init$panda$core$String($tmp1492, $tmp1494);
    name1491 = $tmp1492;
    $l1495:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1497, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1498 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1497);
        next1487 = $tmp1498;
        if (((panda$core$Bit) { !next1487.nonnull }).value) {
        {
            goto $l1496;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1499, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1491, $tmp1499);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1500, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1502 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1500, &$s1501);
        next1487 = $tmp1502;
        if (((panda$core$Bit) { !next1487.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1503 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1487.value));
        panda$core$MutableString$append$panda$core$String(name1491, $tmp1503);
    }
    }
    $l1496:;
    org$pandalanguage$pandac$ASTNode* $tmp1504 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1504->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1504->refCount.value = 1;
    panda$core$String* $tmp1506 = panda$core$MutableString$finish$R$panda$core$String(name1491);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1504, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start1483.value).position, $tmp1506);
    return $tmp1504;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1507;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1508;
    org$pandalanguage$pandac$parser$Token$nullable id1511;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1512;
    panda$collections$Array* parameters1515;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1518;
    org$pandalanguage$pandac$ASTNode* t1520;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1530;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1532;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1535;
    org$pandalanguage$pandac$ASTNode* t1537;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1545;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1508, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1510 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1508, &$s1509);
    start1507 = $tmp1510;
    if (((panda$core$Bit) { !start1507.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1512, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1514 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1512, &$s1513);
    id1511 = $tmp1514;
    if (((panda$core$Bit) { !id1511.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1516 = (panda$collections$Array*) malloc(40);
    $tmp1516->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1516->refCount.value = 1;
    panda$collections$Array$init($tmp1516);
    parameters1515 = $tmp1516;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1518, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1519 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1518);
    if (((panda$core$Bit) { $tmp1519.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1521 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1520 = $tmp1521;
        if (((panda$core$Bit) { t1520 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1522 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1522->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1522->refCount.value = 1;
        panda$core$String* $tmp1524 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1511.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1522, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1511.value).position, $tmp1524, t1520);
        panda$collections$Array$add$panda$collections$Array$T(parameters1515, ((panda$core$Object*) $tmp1522));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1525 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1525->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1525->refCount.value = 1;
        panda$core$String* $tmp1527 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1511.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1525, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1511.value).position, $tmp1527);
        panda$collections$Array$add$panda$collections$Array$T(parameters1515, ((panda$core$Object*) $tmp1525));
    }
    }
    $l1528:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1530, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1531 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1530);
    if (!((panda$core$Bit) { $tmp1531.nonnull }).value) goto $l1529;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1532, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1534 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1532, &$s1533);
        id1511 = $tmp1534;
        if (((panda$core$Bit) { !id1511.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1535, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1536 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1535);
        if (((panda$core$Bit) { $tmp1536.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1538 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1537 = $tmp1538;
            if (((panda$core$Bit) { t1537 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1539 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1539->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1539->refCount.value = 1;
            panda$core$String* $tmp1541 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1511.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1539, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1511.value).position, $tmp1541, t1537);
            panda$collections$Array$add$panda$collections$Array$T(parameters1515, ((panda$core$Object*) $tmp1539));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1542 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1542->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1542->refCount.value = 1;
            panda$core$String* $tmp1544 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1511.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1542, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1511.value).position, $tmp1544);
            panda$collections$Array$add$panda$collections$Array$T(parameters1515, ((panda$core$Object*) $tmp1542));
        }
        }
    }
    goto $l1528;
    $l1529:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1545, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1547 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1545, &$s1546);
    if (((panda$core$Bit) { !$tmp1547.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1548 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1515);
    return $tmp1548;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1549;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1550;
    panda$collections$Array* result1553;
    org$pandalanguage$pandac$ASTNode* t1556;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1560;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1550, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1552 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1550, &$s1551);
    start1549 = $tmp1552;
    if (((panda$core$Bit) { !start1549.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1554 = (panda$collections$Array*) malloc(40);
    $tmp1554->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1554->refCount.value = 1;
    panda$collections$Array$init($tmp1554);
    result1553 = $tmp1554;
    org$pandalanguage$pandac$ASTNode* $tmp1557 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1556 = $tmp1557;
    if (((panda$core$Bit) { t1556 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1553, ((panda$core$Object*) t1556));
    $l1558:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1560, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1561 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1560);
    if (!((panda$core$Bit) { $tmp1561.nonnull }).value) goto $l1559;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1562 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1556 = $tmp1562;
        if (((panda$core$Bit) { t1556 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1553, ((panda$core$Object*) t1556));
    }
    goto $l1558;
    $l1559:;
    panda$collections$ImmutableArray* $tmp1563 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1553);
    return $tmp1563;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1564;
    org$pandalanguage$pandac$parser$Token$nullable next1569;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1570;
    panda$collections$Array* $tmp1565 = (panda$collections$Array*) malloc(40);
    $tmp1565->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1565->refCount.value = 1;
    panda$collections$Array$init($tmp1565);
    result1564 = $tmp1565;
    $l1567:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1570, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1571 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1570);
        next1569 = $tmp1571;
        if (((panda$core$Bit) { !next1569.nonnull }).value) {
        {
            goto $l1568;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1572 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1572->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1572->refCount.value = 1;
        panda$core$String* $tmp1574 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1569.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1572, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1569.value).position, $tmp1574);
        panda$collections$Array$add$panda$collections$Array$T(result1564, ((panda$core$Object*) $tmp1572));
    }
    }
    $l1568:;
    panda$collections$ImmutableArray* $tmp1575 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1564);
    return $tmp1575;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1576;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1577;
    panda$core$MutableString* result1580;
    org$pandalanguage$pandac$parser$Token next1585;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1577, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1579 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1577, &$s1578);
    start1576 = $tmp1579;
    if (((panda$core$Bit) { !start1576.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1581 = (panda$core$MutableString*) malloc(48);
    $tmp1581->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1581->refCount.value = 1;
    panda$core$MutableString$init($tmp1581);
    result1580 = $tmp1581;
    $l1583:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1586 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1585 = $tmp1586;
        panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1585.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1587.value) {
        {
            goto $l1584;
        }
        }
        panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1585.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1588.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1576.value), &$s1589);
            return NULL;
        }
        }
        panda$core$String* $tmp1590 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1585);
        panda$core$MutableString$append$panda$core$String(result1580, $tmp1590);
    }
    }
    $l1584:;
    org$pandalanguage$pandac$ASTNode* $tmp1591 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1591->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1591->refCount.value = 1;
    panda$core$String* $tmp1593 = panda$core$MutableString$finish$R$panda$core$String(result1580);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1591, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$parser$Token) start1576.value).position, $tmp1593);
    return $tmp1591;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1594;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1595;
    org$pandalanguage$pandac$ASTNode* t1598;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1595, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1597 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1595, &$s1596);
    id1594 = $tmp1597;
    if (((panda$core$Bit) { !id1594.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1599 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1598 = $tmp1599;
    if (((panda$core$Bit) { t1598 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1600 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1600->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1600->refCount.value = 1;
    panda$core$String* $tmp1602 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1594.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1600, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) id1594.value).position, $tmp1602, t1598);
    return $tmp1600;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1603;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1604;
    panda$collections$Array* result1607;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1610;
    org$pandalanguage$pandac$ASTNode* param1612;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1616;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1619;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1604, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1606 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1604, &$s1605);
    start1603 = $tmp1606;
    if (((panda$core$Bit) { !start1603.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1608 = (panda$collections$Array*) malloc(40);
    $tmp1608->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1608->refCount.value = 1;
    panda$collections$Array$init($tmp1608);
    result1607 = $tmp1608;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1610, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1611 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1610);
    if (((panda$core$Bit) { !$tmp1611.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1613 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1612 = $tmp1613;
        if (((panda$core$Bit) { param1612 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1607, ((panda$core$Object*) param1612));
        $l1614:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1616, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1617 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1616);
        if (!((panda$core$Bit) { $tmp1617.nonnull }).value) goto $l1615;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1618 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
            param1612 = $tmp1618;
            if (((panda$core$Bit) { param1612 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1607, ((panda$core$Object*) param1612));
        }
        goto $l1614;
        $l1615:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1619, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1621 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1619, &$s1620);
        if (((panda$core$Bit) { !$tmp1621.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1622 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1607);
    return $tmp1622;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1623;
    org$pandalanguage$pandac$parser$Token$nullable start1624;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1625;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1627;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1630;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1631;
    panda$core$String* name1632;
    panda$collections$ImmutableArray* params1634;
    org$pandalanguage$pandac$ASTNode* returnType1636;
    panda$collections$ImmutableArray* body1640;
    org$pandalanguage$pandac$parser$Token token1644;
    panda$core$String* tokenText1646;
    org$pandalanguage$pandac$ASTNode* post1659;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1625, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1626 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1625);
    start1624 = $tmp1626;
    if (((panda$core$Bit) { !start1624.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1627, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1629 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1627, &$s1628);
        start1624 = $tmp1629;
        if (((panda$core$Bit) { !start1624.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1630, ((panda$core$Int64) { 0 }));
        kind1623 = $tmp1630;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1631, ((panda$core$Int64) { 1 }));
        kind1623 = $tmp1631;
    }
    }
    panda$core$String* $tmp1633 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1632 = $tmp1633;
    if (((panda$core$Bit) { name1632 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1635 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1634 = $tmp1635;
    if (((panda$core$Bit) { params1634 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1637 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1637.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1638.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1639 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        returnType1636 = $tmp1639;
        if (((panda$core$Bit) { returnType1636 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        returnType1636 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1641 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1641.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1642.value) {
    {
        panda$collections$ImmutableArray* $tmp1643 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        body1640 = $tmp1643;
        if (((panda$core$Bit) { body1640 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        body1640 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1645 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1644 = $tmp1645;
    panda$core$String* $tmp1647 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1644);
    tokenText1646 = $tmp1647;
    panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1644.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1648 = $tmp1649.value;
    if (!$tmp1648) goto $l1650;
    panda$core$Bit $tmp1653 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1646, &$s1652);
    bool $tmp1651 = $tmp1653.value;
    if ($tmp1651) goto $l1654;
    panda$core$Bit $tmp1656 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1646, &$s1655);
    $tmp1651 = $tmp1656.value;
    $l1654:;
    panda$core$Bit $tmp1657 = { $tmp1651 };
    $tmp1648 = $tmp1657.value;
    $l1650:;
    panda$core$Bit $tmp1658 = { $tmp1648 };
    if ($tmp1658.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1660 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1659 = $tmp1660;
        if (((panda$core$Bit) { post1659 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1661 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1661->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1661->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1661, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1624.value).position, p_doccomment, p_annotations, kind1623, name1632, params1634, returnType1636, body1640);
    return $tmp1661;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1663;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1664;
    panda$collections$ImmutableArray* params1667;
    panda$collections$ImmutableArray* b1669;
    org$pandalanguage$pandac$parser$Token token1671;
    panda$core$String* tokenText1673;
    org$pandalanguage$pandac$ASTNode* post1686;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1690;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1664, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1666 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1664, &$s1665);
    start1663 = $tmp1666;
    if (((panda$core$Bit) { !start1663.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1668 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1667 = $tmp1668;
    if (((panda$core$Bit) { params1667 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1670 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    b1669 = $tmp1670;
    if (((panda$core$Bit) { b1669 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1672 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1671 = $tmp1672;
    panda$core$String* $tmp1674 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1671);
    tokenText1673 = $tmp1674;
    panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1671.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1675 = $tmp1676.value;
    if (!$tmp1675) goto $l1677;
    panda$core$Bit $tmp1680 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1673, &$s1679);
    bool $tmp1678 = $tmp1680.value;
    if ($tmp1678) goto $l1681;
    panda$core$Bit $tmp1683 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1673, &$s1682);
    $tmp1678 = $tmp1683.value;
    $l1681:;
    panda$core$Bit $tmp1684 = { $tmp1678 };
    $tmp1675 = $tmp1684.value;
    $l1677:;
    panda$core$Bit $tmp1685 = { $tmp1675 };
    if ($tmp1685.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1687 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1686 = $tmp1687;
        if (((panda$core$Bit) { post1686 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1688 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1688->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1688->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1690, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1688, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1663.value).position, p_doccomment, p_annotations, $tmp1690, &$s1691, params1667, NULL, b1669);
    return $tmp1688;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1692;
    org$pandalanguage$pandac$ASTNode* $tmp1693 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1692 = $tmp1693;
    if (((panda$core$Bit) { decl1692 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1694 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1694->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1694->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp1697 = (($fn1696) decl1692->$class->vtable[2])(decl1692);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1694, ((panda$core$Int64) { 14 }), $tmp1697, p_doccomment, p_annotations, decl1692);
    return $tmp1694;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1698;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1699;
    panda$collections$Array* fields1702;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1705;
    org$pandalanguage$pandac$ASTNode* field1709;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1713;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1716;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1699, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1701 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1699, &$s1700);
    name1698 = $tmp1701;
    if (((panda$core$Bit) { !name1698.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1703 = (panda$collections$Array*) malloc(40);
    $tmp1703->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1703->refCount.value = 1;
    panda$collections$Array$init($tmp1703);
    fields1702 = $tmp1703;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1705, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1706 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1705);
    if (((panda$core$Bit) { $tmp1706.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1707 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1708 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1707.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1708.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1710 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1709 = $tmp1710;
            if (((panda$core$Bit) { field1709 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1702, ((panda$core$Object*) field1709));
            $l1711:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1713, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1714 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1713);
            if (!((panda$core$Bit) { $tmp1714.nonnull }).value) goto $l1712;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1715 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                field1709 = $tmp1715;
                if (((panda$core$Bit) { field1709 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1702, ((panda$core$Object*) field1709));
            }
            goto $l1711;
            $l1712:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1716, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1718 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1716, &$s1717);
        if (((panda$core$Bit) { !$tmp1718.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1719 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1719->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1719->refCount.value = 1;
    panda$core$String* $tmp1721 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1698.value));
    panda$collections$ImmutableArray* $tmp1722 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1702);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1719, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1698.value).position, p_doccomment, $tmp1721, $tmp1722);
    return $tmp1719;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1723;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1724;
    org$pandalanguage$pandac$parser$Token$nullable name1727;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1728;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1731;
    panda$collections$Array* members1734;
    org$pandalanguage$pandac$ASTNode* dc1737;
    org$pandalanguage$pandac$parser$Token next1740;
    org$pandalanguage$pandac$parser$Token$Kind $match$1857_131742;
    org$pandalanguage$pandac$ASTNode* c1788;
    panda$collections$ImmutableArray* a1790;
    org$pandalanguage$pandac$parser$Token next1795;
    org$pandalanguage$pandac$parser$Token$Kind $match$1881_131797;
    org$pandalanguage$pandac$ASTNode* decl1820;
    org$pandalanguage$pandac$ASTNode* decl1825;
    org$pandalanguage$pandac$ASTNode* decl1830;
    org$pandalanguage$pandac$ASTNode* decl1839;
    org$pandalanguage$pandac$ASTNode* decl1856;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1861;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1870;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1724, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1726 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1724, &$s1725);
    start1723 = $tmp1726;
    if (((panda$core$Bit) { !start1723.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1728, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1730 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1728, &$s1729);
    name1727 = $tmp1730;
    if (((panda$core$Bit) { !name1727.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1731, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1733 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1731, &$s1732);
    if (((panda$core$Bit) { !$tmp1733.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1735 = (panda$collections$Array*) malloc(40);
    $tmp1735->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1735->refCount.value = 1;
    panda$collections$Array$init($tmp1735);
    members1734 = $tmp1735;
    dc1737 = NULL;
    $l1738:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1741 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1740 = $tmp1741;
        {
            $match$1857_131742 = next1740.kind;
            panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1751 = $tmp1752.value;
            if ($tmp1751) goto $l1753;
            panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1751 = $tmp1754.value;
            $l1753:;
            panda$core$Bit $tmp1755 = { $tmp1751 };
            bool $tmp1750 = $tmp1755.value;
            if ($tmp1750) goto $l1756;
            panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1750 = $tmp1757.value;
            $l1756:;
            panda$core$Bit $tmp1758 = { $tmp1750 };
            bool $tmp1749 = $tmp1758.value;
            if ($tmp1749) goto $l1759;
            panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1749 = $tmp1760.value;
            $l1759:;
            panda$core$Bit $tmp1761 = { $tmp1749 };
            bool $tmp1748 = $tmp1761.value;
            if ($tmp1748) goto $l1762;
            panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1748 = $tmp1763.value;
            $l1762:;
            panda$core$Bit $tmp1764 = { $tmp1748 };
            bool $tmp1747 = $tmp1764.value;
            if ($tmp1747) goto $l1765;
            panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1747 = $tmp1766.value;
            $l1765:;
            panda$core$Bit $tmp1767 = { $tmp1747 };
            bool $tmp1746 = $tmp1767.value;
            if ($tmp1746) goto $l1768;
            panda$core$Bit $tmp1769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1746 = $tmp1769.value;
            $l1768:;
            panda$core$Bit $tmp1770 = { $tmp1746 };
            bool $tmp1745 = $tmp1770.value;
            if ($tmp1745) goto $l1771;
            panda$core$Bit $tmp1772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1745 = $tmp1772.value;
            $l1771:;
            panda$core$Bit $tmp1773 = { $tmp1745 };
            bool $tmp1744 = $tmp1773.value;
            if ($tmp1744) goto $l1774;
            panda$core$Bit $tmp1775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1744 = $tmp1775.value;
            $l1774:;
            panda$core$Bit $tmp1776 = { $tmp1744 };
            bool $tmp1743 = $tmp1776.value;
            if ($tmp1743) goto $l1777;
            panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1743 = $tmp1778.value;
            $l1777:;
            panda$core$Bit $tmp1779 = { $tmp1743 };
            if ($tmp1779.value) {
            {
                goto $l1739;
            }
            }
            else {
            panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1780.value) {
            {
                if (((panda$core$Bit) { dc1737 != NULL }).value) {
                {
                    panda$core$String* $tmp1782 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1740);
                    panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1781, $tmp1782);
                    panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, &$s1784);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1740, $tmp1785);
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1786 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1737 = $tmp1786;
            }
            }
            else {
            panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1857_131742.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1787.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1789 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1737);
                c1788 = $tmp1789;
                if (((panda$core$Bit) { c1788 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1734, ((panda$core$Object*) c1788));
                dc1737 = NULL;
            }
            }
            else {
            {
                goto $l1739;
            }
            }
            }
            }
        }
    }
    }
    $l1739:;
    panda$collections$ImmutableArray* $tmp1791 = (panda$collections$ImmutableArray*) malloc(40);
    $tmp1791->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1791->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp1791);
    a1790 = $tmp1791;
    $l1793:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1796 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1795 = $tmp1796;
        {
            $match$1881_131797 = next1795.kind;
            panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1798.value) {
            {
                panda$core$Int64 $tmp1799 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1790);
                panda$core$Bit $tmp1800 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1799, ((panda$core$Int64) { 0 }));
                if ($tmp1800.value) {
                {
                    panda$core$String* $tmp1802 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1795);
                    panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1801, $tmp1802);
                    panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, &$s1804);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1795, $tmp1805);
                    return NULL;
                }
                }
                panda$collections$ImmutableArray* $tmp1806 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                a1790 = $tmp1806;
            }
            }
            else {
            panda$core$Bit $tmp1807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1807.value) {
            {
                bool $tmp1808 = ((panda$core$Bit) { dc1737 != NULL }).value;
                if ($tmp1808) goto $l1809;
                panda$core$Int64 $tmp1810 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1790);
                panda$core$Bit $tmp1811 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1810, ((panda$core$Int64) { 0 }));
                $tmp1808 = $tmp1811.value;
                $l1809:;
                panda$core$Bit $tmp1812 = { $tmp1808 };
                if ($tmp1812.value) {
                {
                    panda$core$String* $tmp1814 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1795);
                    panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1813, $tmp1814);
                    panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, &$s1816);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1795, $tmp1817);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1818 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1737 = $tmp1818;
            }
            }
            else {
            panda$core$Bit $tmp1819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1819.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1821 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1737, a1790);
                decl1820 = $tmp1821;
                if (((panda$core$Bit) { decl1820 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1734, ((panda$core$Object*) decl1820));
                dc1737 = NULL;
                panda$collections$ImmutableArray* $tmp1822 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1822->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1822->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1822);
                a1790 = $tmp1822;
            }
            }
            else {
            panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1824.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1826 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1737, a1790);
                decl1825 = $tmp1826;
                if (((panda$core$Bit) { decl1825 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1734, ((panda$core$Object*) decl1825));
                dc1737 = NULL;
                panda$collections$ImmutableArray* $tmp1827 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1827->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1827->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1827);
                a1790 = $tmp1827;
            }
            }
            else {
            panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1829.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1831 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1737, a1790);
                decl1830 = $tmp1831;
                if (((panda$core$Bit) { decl1830 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1734, ((panda$core$Object*) decl1830));
                dc1737 = NULL;
                panda$collections$ImmutableArray* $tmp1832 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1832->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1832->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1832);
                a1790 = $tmp1832;
            }
            }
            else {
            panda$core$Bit $tmp1835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp1834 = $tmp1835.value;
            if ($tmp1834) goto $l1836;
            panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1834 = $tmp1837.value;
            $l1836:;
            panda$core$Bit $tmp1838 = { $tmp1834 };
            if ($tmp1838.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1840 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1737, a1790);
                decl1839 = $tmp1840;
                if (((panda$core$Bit) { decl1839 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1734, ((panda$core$Object*) decl1839));
                dc1737 = NULL;
                panda$collections$ImmutableArray* $tmp1841 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1841->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1841->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1841);
                a1790 = $tmp1841;
            }
            }
            else {
            panda$core$Bit $tmp1846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp1845 = $tmp1846.value;
            if ($tmp1845) goto $l1847;
            panda$core$Bit $tmp1848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1845 = $tmp1848.value;
            $l1847:;
            panda$core$Bit $tmp1849 = { $tmp1845 };
            bool $tmp1844 = $tmp1849.value;
            if ($tmp1844) goto $l1850;
            panda$core$Bit $tmp1851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1844 = $tmp1851.value;
            $l1850:;
            panda$core$Bit $tmp1852 = { $tmp1844 };
            bool $tmp1843 = $tmp1852.value;
            if ($tmp1843) goto $l1853;
            panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1843 = $tmp1854.value;
            $l1853:;
            panda$core$Bit $tmp1855 = { $tmp1843 };
            if ($tmp1855.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1857 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1737, a1790);
                decl1856 = $tmp1857;
                if (((panda$core$Bit) { decl1856 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1734, ((panda$core$Object*) decl1856));
                dc1737 = NULL;
                panda$collections$ImmutableArray* $tmp1858 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1858->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1858->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1858);
                a1790 = $tmp1858;
            }
            }
            else {
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1881_131797.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1860.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1861, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1861, &$s1862);
                goto $l1794;
            }
            }
            else {
            {
                panda$core$String* $tmp1864 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1795);
                panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1863, $tmp1864);
                panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1866);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1795, $tmp1867);
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
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
    $l1794:;
    org$pandalanguage$pandac$ASTNode* $tmp1868 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1868->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1868->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1870, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp1871 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1727.value));
    panda$collections$ImmutableArray* $tmp1872 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1734);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1868, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1723.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp1870, $tmp1871, NULL, NULL, $tmp1872);
    return $tmp1868;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1873;
    org$pandalanguage$pandac$ASTNode* dc1875;
    panda$collections$ImmutableArray* a1878;
    org$pandalanguage$pandac$parser$Token$Kind $match$1967_91880;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1910;
    org$pandalanguage$pandac$parser$Token $tmp1874 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start1873 = $tmp1874;
    panda$core$Bit $tmp1876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1873.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp1876.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1877 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
        dc1875 = $tmp1877;
        if (((panda$core$Bit) { dc1875 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        dc1875 = NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1879 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    a1878 = $tmp1879;
    if (((panda$core$Bit) { a1878 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1881 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1967_91880 = $tmp1881.kind;
        panda$core$Bit $tmp1882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1882.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1883 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1875, a1878);
            return $tmp1883;
        }
        }
        else {
        panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1884.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1885 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1875, a1878);
            return $tmp1885;
        }
        }
        else {
        panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1886.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1887 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1875, a1878);
            return $tmp1887;
        }
        }
        else {
        panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp1888 = $tmp1889.value;
        if ($tmp1888) goto $l1890;
        panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp1888 = $tmp1891.value;
        $l1890:;
        panda$core$Bit $tmp1892 = { $tmp1888 };
        if ($tmp1892.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1893 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1875, a1878);
            return $tmp1893;
        }
        }
        else {
        panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1894.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1895 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1875, a1878);
            return $tmp1895;
        }
        }
        else {
        panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1898 = $tmp1899.value;
        if ($tmp1898) goto $l1900;
        panda$core$Bit $tmp1901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1898 = $tmp1901.value;
        $l1900:;
        panda$core$Bit $tmp1902 = { $tmp1898 };
        bool $tmp1897 = $tmp1902.value;
        if ($tmp1897) goto $l1903;
        panda$core$Bit $tmp1904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1897 = $tmp1904.value;
        $l1903:;
        panda$core$Bit $tmp1905 = { $tmp1897 };
        bool $tmp1896 = $tmp1905.value;
        if ($tmp1896) goto $l1906;
        panda$core$Bit $tmp1907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1967_91880.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1896 = $tmp1907.value;
        $l1906:;
        panda$core$Bit $tmp1908 = { $tmp1896 };
        if ($tmp1908.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1909 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1875, a1878);
            return $tmp1909;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1910, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1910, &$s1911);
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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1912;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1913;
    org$pandalanguage$pandac$parser$Token$nullable name1916;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1917;
    panda$collections$ImmutableArray* generics1920;
    panda$collections$ImmutableArray* stypes1924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1928;
    panda$collections$Array* members1931;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1936;
    org$pandalanguage$pandac$ASTNode* member1938;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1942;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1913, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1915 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1913, &$s1914);
    start1912 = $tmp1915;
    if (((panda$core$Bit) { !start1912.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1917, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1919 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1917, &$s1918);
    name1916 = $tmp1919;
    if (((panda$core$Bit) { !name1916.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1921 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1921.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp1922.value) {
    {
        panda$collections$ImmutableArray* $tmp1923 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        generics1920 = $tmp1923;
        if (((panda$core$Bit) { generics1920 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        generics1920 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1925 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1925.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1926.value) {
    {
        panda$collections$ImmutableArray* $tmp1927 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        stypes1924 = $tmp1927;
        if (((panda$core$Bit) { stypes1924 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        stypes1924 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1928, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1930 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1928, &$s1929);
    if (((panda$core$Bit) { !$tmp1930.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1932 = (panda$collections$Array*) malloc(40);
    $tmp1932->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1932->refCount.value = 1;
    panda$collections$Array$init($tmp1932);
    members1931 = $tmp1932;
    $l1934:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1936, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1937 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1936);
    if (!((panda$core$Bit) { !$tmp1937.nonnull }).value) goto $l1935;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1939 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1938 = $tmp1939;
        if (((panda$core$Bit) { member1938 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1931, ((panda$core$Object*) member1938));
    }
    goto $l1934;
    $l1935:;
    org$pandalanguage$pandac$ASTNode* $tmp1940 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1940->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1940->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1942, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1943 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1916.value));
    panda$collections$ImmutableArray* $tmp1944 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1931);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1940, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1912.value).position, p_doccomment, p_annotations, $tmp1942, $tmp1943, generics1920, stypes1924, $tmp1944);
    return $tmp1940;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1945;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1946;
    org$pandalanguage$pandac$parser$Token$nullable name1949;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1950;
    panda$collections$ImmutableArray* generics1953;
    panda$collections$Array* intfs1959;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1962;
    org$pandalanguage$pandac$ASTNode* t1964;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1968;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1971;
    panda$collections$Array* members1974;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1979;
    org$pandalanguage$pandac$ASTNode* member1981;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1985;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1946, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1948 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1946, &$s1947);
    start1945 = $tmp1948;
    if (((panda$core$Bit) { !start1945.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1950, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1952 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1950, &$s1951);
    name1949 = $tmp1952;
    if (((panda$core$Bit) { !name1949.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1954 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1954.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp1955.value) {
    {
        panda$collections$ImmutableArray* $tmp1956 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        generics1953 = $tmp1956;
        if (((panda$core$Bit) { generics1953 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        panda$collections$ImmutableArray* $tmp1957 = (panda$collections$ImmutableArray*) malloc(40);
        $tmp1957->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1957->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1957);
        generics1953 = $tmp1957;
    }
    }
    panda$collections$Array* $tmp1960 = (panda$collections$Array*) malloc(40);
    $tmp1960->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1960->refCount.value = 1;
    panda$collections$Array$init($tmp1960);
    intfs1959 = $tmp1960;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1962, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1963 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1962);
    if (((panda$core$Bit) { $tmp1963.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1965 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1964 = $tmp1965;
        if (((panda$core$Bit) { t1964 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1959, ((panda$core$Object*) t1964));
        $l1966:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1968, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1969 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1968);
        if (!((panda$core$Bit) { $tmp1969.nonnull }).value) goto $l1967;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1970 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1964 = $tmp1970;
            if (((panda$core$Bit) { t1964 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1959, ((panda$core$Object*) t1964));
        }
        goto $l1966;
        $l1967:;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1971, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1973 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1971, &$s1972);
    if (((panda$core$Bit) { !$tmp1973.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1975 = (panda$collections$Array*) malloc(40);
    $tmp1975->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1975->refCount.value = 1;
    panda$collections$Array$init($tmp1975);
    members1974 = $tmp1975;
    $l1977:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1979, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1980 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1979);
    if (!((panda$core$Bit) { !$tmp1980.nonnull }).value) goto $l1978;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1982 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1981 = $tmp1982;
        if (((panda$core$Bit) { member1981 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1974, ((panda$core$Object*) member1981));
    }
    goto $l1977;
    $l1978:;
    org$pandalanguage$pandac$ASTNode* $tmp1983 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1983->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1983->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1985, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1986 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1949.value));
    panda$collections$ImmutableArray* $tmp1987 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs1959);
    panda$collections$ImmutableArray* $tmp1988 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1974);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1983, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1945.value).position, p_doccomment, p_annotations, $tmp1985, $tmp1986, generics1953, $tmp1987, $tmp1988);
    return $tmp1983;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2091_91989;
    {
        org$pandalanguage$pandac$parser$Token $tmp1990 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2091_91989 = $tmp1990.kind;
        panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1991.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1992 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1992;
        }
        }
        else {
        panda$core$Bit $tmp1993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1993.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1994 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1994;
        }
        }
        else {
        panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2000 = $tmp2001.value;
        if ($tmp2000) goto $l2002;
        panda$core$Bit $tmp2003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2000 = $tmp2003.value;
        $l2002:;
        panda$core$Bit $tmp2004 = { $tmp2000 };
        bool $tmp1999 = $tmp2004.value;
        if ($tmp1999) goto $l2005;
        panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp1999 = $tmp2006.value;
        $l2005:;
        panda$core$Bit $tmp2007 = { $tmp1999 };
        bool $tmp1998 = $tmp2007.value;
        if ($tmp1998) goto $l2008;
        panda$core$Bit $tmp2009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp1998 = $tmp2009.value;
        $l2008:;
        panda$core$Bit $tmp2010 = { $tmp1998 };
        bool $tmp1997 = $tmp2010.value;
        if ($tmp1997) goto $l2011;
        panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp1997 = $tmp2012.value;
        $l2011:;
        panda$core$Bit $tmp2013 = { $tmp1997 };
        bool $tmp1996 = $tmp2013.value;
        if ($tmp1996) goto $l2014;
        panda$core$Bit $tmp2015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp1996 = $tmp2015.value;
        $l2014:;
        panda$core$Bit $tmp2016 = { $tmp1996 };
        bool $tmp1995 = $tmp2016.value;
        if ($tmp1995) goto $l2017;
        panda$core$Bit $tmp2018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2091_91989.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp1995 = $tmp2018.value;
        $l2017:;
        panda$core$Bit $tmp2019 = { $tmp1995 };
        if ($tmp2019.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2020 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2020;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2021 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2021;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2022;
    org$pandalanguage$pandac$ASTNode* entry2029;
    panda$collections$Array* $tmp2023 = (panda$collections$Array*) malloc(40);
    $tmp2023->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2023->refCount.value = 1;
    panda$collections$Array$init($tmp2023);
    entries2022 = $tmp2023;
    $l2025:;
    org$pandalanguage$pandac$parser$Token $tmp2027 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2028 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2027.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2028.value) goto $l2026;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2030 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2029 = $tmp2030;
        if (((panda$core$Bit) { entry2029 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2031 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2031.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2022, ((panda$core$Object*) entry2029));
    }
    goto $l2025;
    $l2026:;
    org$pandalanguage$pandac$ASTNode* $tmp2032 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp2032->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2032->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp2034 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2022);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2032, ((panda$core$Int64) { 15 }), $tmp2034);
    return $tmp2032;
}

