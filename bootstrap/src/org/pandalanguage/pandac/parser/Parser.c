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
typedef org$pandalanguage$pandac$Position (*$fn702)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn735)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1249)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1260)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1275)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1689)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    panda$core$String* text474;
    org$pandalanguage$pandac$ASTNode* base477;
    panda$core$String* field479;
    panda$core$String* result481;
    {
        $match$403_9472 = p_expr;
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9472->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp473.value) {
        {
            panda$core$String** $tmp475 = ((panda$core$String**) ((char*) $match$403_9472->$data + 16));
            text474 = *$tmp475;
            return text474;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9472->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp478 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9472->$data + 16));
            base477 = *$tmp478;
            panda$core$String** $tmp480 = ((panda$core$String**) ((char*) $match$403_9472->$data + 24));
            field479 = *$tmp480;
            panda$core$String* $tmp482 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base477);
            result481 = $tmp482;
            if (((panda$core$Bit) { result481 != NULL }).value) {
            {
                panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s483, field479);
                panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result481, $tmp484);
                result481 = $tmp485;
            }
            }
            return result481;
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
    org$pandalanguage$pandac$parser$Token name486;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9488;
    org$pandalanguage$pandac$parser$Token token576;
    org$pandalanguage$pandac$parser$Token$Kind $tmp582;
    org$pandalanguage$pandac$parser$Token$Kind $tmp585;
    org$pandalanguage$pandac$parser$Token $tmp487 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name486 = $tmp487;
    {
        $match$423_9488 = name486.kind;
        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp509 = $tmp510.value;
        if ($tmp509) goto $l511;
        panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp509 = $tmp512.value;
        $l511:;
        panda$core$Bit $tmp513 = { $tmp509 };
        bool $tmp508 = $tmp513.value;
        if ($tmp508) goto $l514;
        panda$core$Bit $tmp515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp508 = $tmp515.value;
        $l514:;
        panda$core$Bit $tmp516 = { $tmp508 };
        bool $tmp507 = $tmp516.value;
        if ($tmp507) goto $l517;
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp507 = $tmp518.value;
        $l517:;
        panda$core$Bit $tmp519 = { $tmp507 };
        bool $tmp506 = $tmp519.value;
        if ($tmp506) goto $l520;
        panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp506 = $tmp521.value;
        $l520:;
        panda$core$Bit $tmp522 = { $tmp506 };
        bool $tmp505 = $tmp522.value;
        if ($tmp505) goto $l523;
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp505 = $tmp524.value;
        $l523:;
        panda$core$Bit $tmp525 = { $tmp505 };
        bool $tmp504 = $tmp525.value;
        if ($tmp504) goto $l526;
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp504 = $tmp527.value;
        $l526:;
        panda$core$Bit $tmp528 = { $tmp504 };
        bool $tmp503 = $tmp528.value;
        if ($tmp503) goto $l529;
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp503 = $tmp530.value;
        $l529:;
        panda$core$Bit $tmp531 = { $tmp503 };
        bool $tmp502 = $tmp531.value;
        if ($tmp502) goto $l532;
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp502 = $tmp533.value;
        $l532:;
        panda$core$Bit $tmp534 = { $tmp502 };
        bool $tmp501 = $tmp534.value;
        if ($tmp501) goto $l535;
        panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp501 = $tmp536.value;
        $l535:;
        panda$core$Bit $tmp537 = { $tmp501 };
        bool $tmp500 = $tmp537.value;
        if ($tmp500) goto $l538;
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp500 = $tmp539.value;
        $l538:;
        panda$core$Bit $tmp540 = { $tmp500 };
        bool $tmp499 = $tmp540.value;
        if ($tmp499) goto $l541;
        panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp499 = $tmp542.value;
        $l541:;
        panda$core$Bit $tmp543 = { $tmp499 };
        bool $tmp498 = $tmp543.value;
        if ($tmp498) goto $l544;
        panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp498 = $tmp545.value;
        $l544:;
        panda$core$Bit $tmp546 = { $tmp498 };
        bool $tmp497 = $tmp546.value;
        if ($tmp497) goto $l547;
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp497 = $tmp548.value;
        $l547:;
        panda$core$Bit $tmp549 = { $tmp497 };
        bool $tmp496 = $tmp549.value;
        if ($tmp496) goto $l550;
        panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp496 = $tmp551.value;
        $l550:;
        panda$core$Bit $tmp552 = { $tmp496 };
        bool $tmp495 = $tmp552.value;
        if ($tmp495) goto $l553;
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp495 = $tmp554.value;
        $l553:;
        panda$core$Bit $tmp555 = { $tmp495 };
        bool $tmp494 = $tmp555.value;
        if ($tmp494) goto $l556;
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp494 = $tmp557.value;
        $l556:;
        panda$core$Bit $tmp558 = { $tmp494 };
        bool $tmp493 = $tmp558.value;
        if ($tmp493) goto $l559;
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp493 = $tmp560.value;
        $l559:;
        panda$core$Bit $tmp561 = { $tmp493 };
        bool $tmp492 = $tmp561.value;
        if ($tmp492) goto $l562;
        panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp492 = $tmp563.value;
        $l562:;
        panda$core$Bit $tmp564 = { $tmp492 };
        bool $tmp491 = $tmp564.value;
        if ($tmp491) goto $l565;
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp491 = $tmp566.value;
        $l565:;
        panda$core$Bit $tmp567 = { $tmp491 };
        bool $tmp490 = $tmp567.value;
        if ($tmp490) goto $l568;
        panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp490 = $tmp569.value;
        $l568:;
        panda$core$Bit $tmp570 = { $tmp490 };
        bool $tmp489 = $tmp570.value;
        if ($tmp489) goto $l571;
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp489 = $tmp572.value;
        $l571:;
        panda$core$Bit $tmp573 = { $tmp489 };
        if ($tmp573.value) {
        {
            panda$core$String* $tmp574 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name486);
            return $tmp574;
        }
        }
        else {
        panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp575.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp577 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token576 = $tmp577;
            panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token576.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp578.value) {
            {
                return &$s579;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token576);
                return &$s580;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9488.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp581.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp582, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp584 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp582, &$s583);
            if (((panda$core$Bit) { !$tmp584.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp585, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp586 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp585);
            if (((panda$core$Bit) { $tmp586.nonnull }).value) {
            {
                return &$s587;
            }
            }
            return &$s588;
        }
        }
        else {
        {
            panda$core$String* $tmp590 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name486);
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s589, $tmp590);
            panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s592);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name486, $tmp593);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp594 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp594;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start595;
    org$pandalanguage$pandac$parser$Token$Kind $tmp596;
    panda$core$MutableString* name599;
    org$pandalanguage$pandac$parser$Token$Kind $tmp605;
    org$pandalanguage$pandac$parser$Token$nullable id607;
    org$pandalanguage$pandac$parser$Token$Kind $tmp608;
    panda$core$Char8 $tmp611;
    panda$core$String* finalName613;
    org$pandalanguage$pandac$ASTNode* result615;
    panda$collections$Array* children620;
    org$pandalanguage$pandac$ASTNode* t623;
    org$pandalanguage$pandac$parser$Token$Kind $tmp627;
    org$pandalanguage$pandac$parser$Token$Kind $tmp630;
    org$pandalanguage$pandac$parser$Token$Kind $tmp636;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp596, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp598 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp596, &$s597);
    start595 = $tmp598;
    if (((panda$core$Bit) { !start595.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp600 = (panda$core$MutableString*) malloc(48);
    $tmp600->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp600->refCount.value = 1;
    panda$core$String* $tmp602 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start595.value));
    panda$core$MutableString$init$panda$core$String($tmp600, $tmp602);
    name599 = $tmp600;
    $l603:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp605, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp606 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp605);
    if (!((panda$core$Bit) { $tmp606.nonnull }).value) goto $l604;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp608, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp610 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp608, &$s609);
        id607 = $tmp610;
        if (((panda$core$Bit) { !id607.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp611, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name599, $tmp611);
        panda$core$String* $tmp612 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id607.value));
        panda$core$MutableString$append$panda$core$String(name599, $tmp612);
    }
    goto $l603;
    $l604:;
    panda$core$String* $tmp614 = panda$core$MutableString$finish$R$panda$core$String(name599);
    finalName613 = $tmp614;
    org$pandalanguage$pandac$ASTNode* $tmp616 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp616->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp616->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp616, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start595.value).position, finalName613);
    result615 = $tmp616;
    org$pandalanguage$pandac$parser$Token $tmp618 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp618.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp619.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp621 = (panda$collections$Array*) malloc(40);
        $tmp621->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp621->refCount.value = 1;
        panda$collections$Array$init($tmp621);
        children620 = $tmp621;
        panda$collections$Array$add$panda$collections$Array$T(children620, ((panda$core$Object*) result615));
        org$pandalanguage$pandac$ASTNode* $tmp624 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t623 = $tmp624;
        if (((panda$core$Bit) { t623 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result615;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children620, ((panda$core$Object*) t623));
        $l625:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp627, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp628 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp627);
        if (!((panda$core$Bit) { $tmp628.nonnull }).value) goto $l626;
        {
            org$pandalanguage$pandac$ASTNode* $tmp629 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
            t623 = $tmp629;
            if (((panda$core$Bit) { t623 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result615;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children620, ((panda$core$Object*) t623));
        }
        goto $l625;
        $l626:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp630, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp632 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp630, &$s631);
        if (((panda$core$Bit) { !$tmp632.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result615;
            }
            }
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp633 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp633->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp633->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp635 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children620);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp633, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start595.value).position, finalName613, $tmp635);
        result615 = $tmp633;
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp636, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp637 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp636);
    if (((panda$core$Bit) { $tmp637.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp638 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp638->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp638->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp638, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start595.value).position, result615);
        result615 = $tmp638;
    }
    }
    return result615;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result640;
    org$pandalanguage$pandac$parser$Token token644;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13646;
    panda$collections$Array* args649;
    org$pandalanguage$pandac$parser$Token$Kind $tmp652;
    org$pandalanguage$pandac$ASTNode* expr654;
    org$pandalanguage$pandac$parser$Token$Kind $tmp658;
    org$pandalanguage$pandac$parser$Token$Kind $tmp661;
    org$pandalanguage$pandac$ASTNode* arg668;
    org$pandalanguage$pandac$parser$Token$Kind $tmp670;
    org$pandalanguage$pandac$parser$Token$Kind $tmp675;
    panda$core$String* name677;
    org$pandalanguage$pandac$parser$Token$Kind $tmp678;
    org$pandalanguage$pandac$ASTNode* target685;
    org$pandalanguage$pandac$parser$Token$Kind $tmp689;
    panda$core$String* name691;
    panda$core$MutableString* finalName693;
    panda$core$Char8 $tmp696;
    panda$collections$Array* types697;
    org$pandalanguage$pandac$ASTNode* t704;
    org$pandalanguage$pandac$parser$Token$Kind $tmp708;
    org$pandalanguage$pandac$parser$Token$Kind $tmp712;
    panda$core$Char8 $tmp715;
    panda$core$Bit shouldAccept716;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29718;
    org$pandalanguage$pandac$ASTNode* $tmp641 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result640 = $tmp641;
    if (((panda$core$Bit) { result640 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l642:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp645 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token644 = $tmp645;
        {
            $match$540_13646 = token644.kind;
            panda$core$Bit $tmp647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13646.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp647.value) {
            {
                panda$core$Bit$wrapper* $tmp648;
                $tmp648 = (panda$core$Bit$wrapper*) malloc(13);
                $tmp648->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp648->refCount = 1;
                $tmp648->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp648));
                panda$collections$Array* $tmp650 = (panda$collections$Array*) malloc(40);
                $tmp650->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp650->refCount.value = 1;
                panda$collections$Array$init($tmp650);
                args649 = $tmp650;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp652, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp653 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp652);
                if (((panda$core$Bit) { !$tmp653.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp655 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr654 = $tmp655;
                    if (((panda$core$Bit) { expr654 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args649, ((panda$core$Object*) expr654));
                    $l656:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp658, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp659 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp658);
                    if (!((panda$core$Bit) { $tmp659.nonnull }).value) goto $l657;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp660 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        expr654 = $tmp660;
                        if (((panda$core$Bit) { expr654 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args649, ((panda$core$Object*) expr654));
                    }
                    goto $l656;
                    $l657:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp661, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp663 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp661, &$s662);
                    if (((panda$core$Bit) { !$tmp663.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                org$pandalanguage$pandac$ASTNode* $tmp664 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp664->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp664->refCount.value = 1;
                panda$collections$ImmutableArray* $tmp666 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args649);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp664, ((panda$core$Int64) { 6 }), token644.position, result640, $tmp666);
                result640 = $tmp664;
            }
            }
            else {
            panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13646.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp667.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp669 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                arg668 = $tmp669;
                if (((panda$core$Bit) { arg668 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp670, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp672 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp670, &$s671);
                if (((panda$core$Bit) { !$tmp672.nonnull }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp673 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp673->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp673->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp675, ((panda$core$Int64) { 101 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp673, ((panda$core$Int64) { 2 }), token644.position, result640, $tmp675, arg668);
                result640 = $tmp673;
            }
            }
            else {
            panda$core$Bit $tmp676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13646.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp676.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp678, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp679 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp678);
                if (((panda$core$Bit) { $tmp679.nonnull }).value) {
                {
                    name677 = &$s680;
                }
                }
                else {
                {
                    panda$core$String* $tmp681 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                    name677 = $tmp681;
                    if (((panda$core$Bit) { name677 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp682 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp682->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp682->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp682, ((panda$core$Int64) { 13 }), token644.position, result640, name677);
                result640 = $tmp682;
            }
            }
            else {
            panda$core$Bit $tmp684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13646.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp684.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp686 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target685 = $tmp686;
                if (((panda$core$Bit) { target685 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp687 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp687->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp687->refCount.value = 1;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp689, ((panda$core$Int64) { 89 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp687, ((panda$core$Int64) { 2 }), token644.position, result640, $tmp689, target685);
                result640 = $tmp687;
            }
            }
            else {
            panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13646.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp690.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token644);
                panda$core$String* $tmp692 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result640);
                name691 = $tmp692;
                if (((panda$core$Bit) { name691 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp694 = (panda$core$MutableString*) malloc(48);
                    $tmp694->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp694->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp694, name691);
                    finalName693 = $tmp694;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp696, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName693, $tmp696);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp698 = (panda$collections$Array*) malloc(40);
                    $tmp698->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp698->refCount.value = 1;
                    panda$collections$Array$init($tmp698);
                    types697 = $tmp698;
                    org$pandalanguage$pandac$ASTNode* $tmp700 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                    $tmp700->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp700->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp703 = (($fn702) result640->$class->vtable[2])(result640);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp700, ((panda$core$Int64) { 35 }), $tmp703, name691);
                    panda$collections$Array$add$panda$collections$Array$T(types697, ((panda$core$Object*) $tmp700));
                    org$pandalanguage$pandac$ASTNode* $tmp705 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t704 = $tmp705;
                    if (((panda$core$Bit) { t704 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result640;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types697, ((panda$core$Object*) t704));
                    panda$core$MutableString$append$panda$core$Object(finalName693, ((panda$core$Object*) t704));
                    $l706:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp708, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp709 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp708);
                    if (!((panda$core$Bit) { $tmp709.nonnull }).value) goto $l707;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp710 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        t704 = $tmp710;
                        if (((panda$core$Bit) { t704 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result640;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types697, ((panda$core$Object*) t704));
                        panda$core$MutableString$append$panda$core$String(finalName693, &$s711);
                        panda$core$MutableString$append$panda$core$Object(finalName693, ((panda$core$Object*) t704));
                    }
                    goto $l706;
                    $l707:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp712, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp714 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp712, &$s713);
                    if (((panda$core$Bit) { !$tmp714.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result640;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp715, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName693, $tmp715);
                    panda$core$Object* $tmp717 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp717)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp719 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29718 = $tmp719.kind;
                            panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29718.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp722 = $tmp723.value;
                            if ($tmp722) goto $l724;
                            panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29718.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp722 = $tmp725.value;
                            $l724:;
                            panda$core$Bit $tmp726 = { $tmp722 };
                            bool $tmp721 = $tmp726.value;
                            if ($tmp721) goto $l727;
                            panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29718.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp721 = $tmp728.value;
                            $l727:;
                            panda$core$Bit $tmp729 = { $tmp721 };
                            bool $tmp720 = $tmp729.value;
                            if ($tmp720) goto $l730;
                            panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29718.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp720 = $tmp731.value;
                            $l730:;
                            panda$core$Bit $tmp732 = { $tmp720 };
                            if ($tmp732.value) {
                            {
                                shouldAccept716 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept716 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept716 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept716.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        org$pandalanguage$pandac$ASTNode* $tmp733 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                        $tmp733->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp733->refCount.value = 1;
                        org$pandalanguage$pandac$Position $tmp736 = (($fn735) result640->$class->vtable[2])(result640);
                        panda$core$String* $tmp737 = panda$core$MutableString$finish$R$panda$core$String(finalName693);
                        panda$collections$ImmutableArray* $tmp738 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types697);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp733, ((panda$core$Int64) { 17 }), $tmp736, $tmp737, $tmp738);
                        result640 = $tmp733;
                        goto $l642;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result640;
                    }
                    }
                }
                }
                return result640;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token644);
                return result640;
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l643:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result739;
    org$pandalanguage$pandac$parser$Token$nullable op743;
    org$pandalanguage$pandac$parser$Token$Kind $tmp744;
    org$pandalanguage$pandac$ASTNode* next746;
    org$pandalanguage$pandac$ASTNode* $tmp740 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result739 = $tmp740;
    if (((panda$core$Bit) { result739 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l741:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp744, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp745 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp744);
        op743 = $tmp745;
        if (((panda$core$Bit) { !op743.nonnull }).value) {
        {
            goto $l742;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp747 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next746 = $tmp747;
        if (((panda$core$Bit) { next746 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp748 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp748->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp748->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp748, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op743.value).position, result739, ((org$pandalanguage$pandac$parser$Token) op743.value).kind, next746);
        result739 = $tmp748;
    }
    }
    $l742:;
    return result739;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op750;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9752;
    org$pandalanguage$pandac$ASTNode* base762;
    org$pandalanguage$pandac$parser$Token $tmp751 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op750 = $tmp751;
    {
        $match$709_9752 = op750.kind;
        panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9752.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp754 = $tmp755.value;
        if ($tmp754) goto $l756;
        panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9752.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp754 = $tmp757.value;
        $l756:;
        panda$core$Bit $tmp758 = { $tmp754 };
        bool $tmp753 = $tmp758.value;
        if ($tmp753) goto $l759;
        panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9752.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp753 = $tmp760.value;
        $l759:;
        panda$core$Bit $tmp761 = { $tmp753 };
        if ($tmp761.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp763 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base762 = $tmp763;
            if (((panda$core$Bit) { base762 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp764 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp764->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp764->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp764, ((panda$core$Int64) { 28 }), op750.position, op750.kind, base762);
            return $tmp764;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op750);
            org$pandalanguage$pandac$ASTNode* $tmp766 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp766;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result767;
    org$pandalanguage$pandac$parser$Token op771;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13773;
    org$pandalanguage$pandac$ASTNode* next799;
    org$pandalanguage$pandac$parser$Token nextToken804;
    org$pandalanguage$pandac$ASTNode* next807;
    org$pandalanguage$pandac$parser$Token$Kind $tmp811;
    org$pandalanguage$pandac$ASTNode* $tmp768 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result767 = $tmp768;
    if (((panda$core$Bit) { result767 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l769:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp772 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op771 = $tmp772;
        {
            $match$735_13773 = op771.kind;
            panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp779 = $tmp780.value;
            if ($tmp779) goto $l781;
            panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp779 = $tmp782.value;
            $l781:;
            panda$core$Bit $tmp783 = { $tmp779 };
            bool $tmp778 = $tmp783.value;
            if ($tmp778) goto $l784;
            panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp778 = $tmp785.value;
            $l784:;
            panda$core$Bit $tmp786 = { $tmp778 };
            bool $tmp777 = $tmp786.value;
            if ($tmp777) goto $l787;
            panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp777 = $tmp788.value;
            $l787:;
            panda$core$Bit $tmp789 = { $tmp777 };
            bool $tmp776 = $tmp789.value;
            if ($tmp776) goto $l790;
            panda$core$Bit $tmp791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp776 = $tmp791.value;
            $l790:;
            panda$core$Bit $tmp792 = { $tmp776 };
            bool $tmp775 = $tmp792.value;
            if ($tmp775) goto $l793;
            panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp775 = $tmp794.value;
            $l793:;
            panda$core$Bit $tmp795 = { $tmp775 };
            bool $tmp774 = $tmp795.value;
            if ($tmp774) goto $l796;
            panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp774 = $tmp797.value;
            $l796:;
            panda$core$Bit $tmp798 = { $tmp774 };
            if ($tmp798.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp800 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next799 = $tmp800;
                if (((panda$core$Bit) { next799 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp801 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp801->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp801->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp801, ((panda$core$Int64) { 2 }), op771.position, result767, op771.kind, next799);
                result767 = $tmp801;
            }
            }
            else {
            panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13773.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp803.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp805 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken804 = $tmp805;
                panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken804.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp806.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp808 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next807 = $tmp808;
                    if (((panda$core$Bit) { next807 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp809 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                    $tmp809->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp809->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp811, ((panda$core$Int64) { 1 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp809, ((panda$core$Int64) { 2 }), op771.position, result767, $tmp811, next807);
                    result767 = $tmp809;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken804);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op771);
                    return result767;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op771);
                return result767;
            }
            }
            }
        }
    }
    }
    $l770:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result812;
    org$pandalanguage$pandac$parser$Token op816;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13818;
    org$pandalanguage$pandac$ASTNode* next828;
    org$pandalanguage$pandac$ASTNode* $tmp813 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result812 = $tmp813;
    if (((panda$core$Bit) { result812 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l814:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp817 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op816 = $tmp817;
        {
            $match$776_13818 = op816.kind;
            panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13818.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp820 = $tmp821.value;
            if ($tmp820) goto $l822;
            panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13818.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp820 = $tmp823.value;
            $l822:;
            panda$core$Bit $tmp824 = { $tmp820 };
            bool $tmp819 = $tmp824.value;
            if ($tmp819) goto $l825;
            panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13818.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp819 = $tmp826.value;
            $l825:;
            panda$core$Bit $tmp827 = { $tmp819 };
            if ($tmp827.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp829 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next828 = $tmp829;
                if (((panda$core$Bit) { next828 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp830 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp830->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp830->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp830, ((panda$core$Int64) { 2 }), op816.position, result812, op816.kind, next828);
                result812 = $tmp830;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op816);
                return result812;
            }
            }
        }
    }
    }
    $l815:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result832;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9833;
    org$pandalanguage$pandac$parser$Token op841;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9843;
    org$pandalanguage$pandac$parser$Token next849;
    org$pandalanguage$pandac$ASTNode* right851;
    org$pandalanguage$pandac$ASTNode* step862;
    org$pandalanguage$pandac$parser$Token$Kind $tmp863;
    {
        org$pandalanguage$pandac$parser$Token $tmp834 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9833 = $tmp834.kind;
        panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9833.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp835 = $tmp836.value;
        if ($tmp835) goto $l837;
        panda$core$Bit $tmp838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9833.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp835 = $tmp838.value;
        $l837:;
        panda$core$Bit $tmp839 = { $tmp835 };
        if ($tmp839.value) {
        {
            result832 = NULL;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp840 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result832 = $tmp840;
            if (((panda$core$Bit) { result832 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp842 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op841 = $tmp842;
    {
        $match$806_9843 = op841.kind;
        panda$core$Bit $tmp845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9843.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp844 = $tmp845.value;
        if ($tmp844) goto $l846;
        panda$core$Bit $tmp847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9843.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp844 = $tmp847.value;
        $l846:;
        panda$core$Bit $tmp848 = { $tmp844 };
        if ($tmp848.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp850 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next849 = $tmp850;
            panda$core$Bit $tmp854 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next849.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp853 = $tmp854.value;
            if (!$tmp853) goto $l855;
            panda$core$Bit $tmp856 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next849.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp853 = $tmp856.value;
            $l855:;
            panda$core$Bit $tmp857 = { $tmp853 };
            bool $tmp852 = $tmp857.value;
            if (!$tmp852) goto $l858;
            panda$core$Bit $tmp859 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next849.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp852 = $tmp859.value;
            $l858:;
            panda$core$Bit $tmp860 = { $tmp852 };
            if ($tmp860.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp861 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                right851 = $tmp861;
                if (((panda$core$Bit) { right851 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                right851 = NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp863, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp864 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp863);
            if (((panda$core$Bit) { $tmp864.nonnull }).value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp865 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                step862 = $tmp865;
                if (((panda$core$Bit) { step862 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                step862 = NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp866 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp866->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp866->refCount.value = 1;
            panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op841.kind.$rawValue, ((panda$core$Int64) { 96 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp866, ((panda$core$Int64) { 29 }), op841.position, result832, right851, $tmp868, step862);
            return $tmp866;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op841);
            return result832;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result869;
    org$pandalanguage$pandac$parser$Token op873;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13875;
    org$pandalanguage$pandac$ASTNode* next905;
    org$pandalanguage$pandac$ASTNode* $tmp870 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result869 = $tmp870;
    if (((panda$core$Bit) { result869 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l871:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp874 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op873 = $tmp874;
        {
            $match$849_13875 = op873.kind;
            panda$core$Bit $tmp883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp882 = $tmp883.value;
            if ($tmp882) goto $l884;
            panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp882 = $tmp885.value;
            $l884:;
            panda$core$Bit $tmp886 = { $tmp882 };
            bool $tmp881 = $tmp886.value;
            if ($tmp881) goto $l887;
            panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp881 = $tmp888.value;
            $l887:;
            panda$core$Bit $tmp889 = { $tmp881 };
            bool $tmp880 = $tmp889.value;
            if ($tmp880) goto $l890;
            panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp880 = $tmp891.value;
            $l890:;
            panda$core$Bit $tmp892 = { $tmp880 };
            bool $tmp879 = $tmp892.value;
            if ($tmp879) goto $l893;
            panda$core$Bit $tmp894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp879 = $tmp894.value;
            $l893:;
            panda$core$Bit $tmp895 = { $tmp879 };
            bool $tmp878 = $tmp895.value;
            if ($tmp878) goto $l896;
            panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp878 = $tmp897.value;
            $l896:;
            panda$core$Bit $tmp898 = { $tmp878 };
            bool $tmp877 = $tmp898.value;
            if ($tmp877) goto $l899;
            panda$core$Bit $tmp900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp877 = $tmp900.value;
            $l899:;
            panda$core$Bit $tmp901 = { $tmp877 };
            bool $tmp876 = $tmp901.value;
            if ($tmp876) goto $l902;
            panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13875.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp876 = $tmp903.value;
            $l902:;
            panda$core$Bit $tmp904 = { $tmp876 };
            if ($tmp904.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp906 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next905 = $tmp906;
                if (((panda$core$Bit) { next905 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp907 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp907->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp907->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp907, ((panda$core$Int64) { 2 }), op873.position, result869, op873.kind, next905);
                result869 = $tmp907;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op873);
                return result869;
            }
            }
        }
    }
    }
    $l872:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result909;
    org$pandalanguage$pandac$parser$Token op913;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_13915;
    org$pandalanguage$pandac$ASTNode* next921;
    org$pandalanguage$pandac$ASTNode* $tmp910 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result909 = $tmp910;
    if (((panda$core$Bit) { result909 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l911:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp914 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op913 = $tmp914;
        {
            $match$880_13915 = op913.kind;
            panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13915.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp916 = $tmp917.value;
            if ($tmp916) goto $l918;
            panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13915.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp916 = $tmp919.value;
            $l918:;
            panda$core$Bit $tmp920 = { $tmp916 };
            if ($tmp920.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp922 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next921 = $tmp922;
                if (((panda$core$Bit) { next921 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp923 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
                $tmp923->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp923->refCount.value = 1;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp923, ((panda$core$Int64) { 2 }), op913.position, result909, op913.kind, next921);
                result909 = $tmp923;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op913);
                return result909;
            }
            }
        }
    }
    }
    $l912:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result925;
    org$pandalanguage$pandac$parser$Token$nullable op929;
    org$pandalanguage$pandac$parser$Token$Kind $tmp930;
    org$pandalanguage$pandac$ASTNode* next932;
    org$pandalanguage$pandac$ASTNode* $tmp926 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result925 = $tmp926;
    if (((panda$core$Bit) { result925 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l927:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp930, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp931 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp930);
        op929 = $tmp931;
        if (((panda$core$Bit) { !op929.nonnull }).value) {
        {
            goto $l928;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp933 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next932 = $tmp933;
        if (((panda$core$Bit) { next932 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp934 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp934->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp934->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp934, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op929.value).position, result925, ((org$pandalanguage$pandac$parser$Token) op929.value).kind, next932);
        result925 = $tmp934;
    }
    }
    $l928:;
    return result925;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start936;
    org$pandalanguage$pandac$parser$Token$Kind $tmp937;
    org$pandalanguage$pandac$ASTNode* test940;
    panda$collections$ImmutableArray* ifTrue942;
    org$pandalanguage$pandac$ASTNode* ifFalse944;
    org$pandalanguage$pandac$parser$Token$Kind $tmp945;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp937, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp939 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp937, &$s938);
    start936 = $tmp939;
    if (((panda$core$Bit) { !start936.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp941 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test940 = $tmp941;
    if (((panda$core$Bit) { test940 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp943 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    ifTrue942 = $tmp943;
    if (((panda$core$Bit) { ifTrue942 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp945, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp946 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp945);
    if (((panda$core$Bit) { $tmp946.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp947 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp947.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp948.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp949 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse944 = $tmp949;
            if (((panda$core$Bit) { ifFalse944 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp950 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            ifFalse944 = $tmp950;
            if (((panda$core$Bit) { ifFalse944 == NULL }).value) {
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
        ifFalse944 = NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp951 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp951->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp951->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp951, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start936.value).position, test940, ifTrue942, ifFalse944);
    return $tmp951;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp953;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp953, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp955 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp953, &$s954);
    if (((panda$core$Bit) { !$tmp955.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp956 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp956;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id957;
    org$pandalanguage$pandac$parser$Token$Kind $tmp958;
    org$pandalanguage$pandac$ASTNode* type963;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp958, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp960 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp958, &$s959);
    id957 = $tmp960;
    if (((panda$core$Bit) { !id957.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp961 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp961.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp962.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp964 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type963 = $tmp964;
        if (((panda$core$Bit) { type963 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp965 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp965->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp965->refCount.value = 1;
        panda$core$String* $tmp967 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id957.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp965, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id957.value).position, $tmp967, type963);
        return $tmp965;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp968 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp968->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp968->refCount.value = 1;
    panda$core$String* $tmp970 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id957.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp968, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id957.value).position, $tmp970);
    return $tmp968;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start971;
    org$pandalanguage$pandac$parser$Token$Kind $tmp972;
    org$pandalanguage$pandac$ASTNode* t975;
    org$pandalanguage$pandac$parser$Token$Kind $tmp977;
    org$pandalanguage$pandac$ASTNode* list980;
    panda$collections$ImmutableArray* block982;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp972, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp974 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp972, &$s973);
    start971 = $tmp974;
    if (((panda$core$Bit) { !start971.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp976 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t975 = $tmp976;
    if (((panda$core$Bit) { t975 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp977, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp979 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp977, &$s978);
    if (((panda$core$Bit) { !$tmp979.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp981 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list980 = $tmp981;
    if (((panda$core$Bit) { list980 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp983 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    block982 = $tmp983;
    if (((panda$core$Bit) { block982 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp984 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp984->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp984->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp984, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start971.value).position, p_label, t975, list980, block982);
    return $tmp984;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start986;
    org$pandalanguage$pandac$parser$Token$Kind $tmp987;
    org$pandalanguage$pandac$ASTNode* test990;
    panda$collections$ImmutableArray* body992;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp987, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp989 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp987, &$s988);
    start986 = $tmp989;
    if (((panda$core$Bit) { !start986.nonnull }).value) {
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
    panda$collections$ImmutableArray* $tmp993 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body992 = $tmp993;
    if (((panda$core$Bit) { body992 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp994 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp994->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp994->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp994, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start986.value).position, p_label, test990, body992);
    return $tmp994;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start996;
    org$pandalanguage$pandac$parser$Token$Kind $tmp997;
    panda$collections$ImmutableArray* body1000;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1002;
    org$pandalanguage$pandac$ASTNode* test1005;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp997, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp999 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp997, &$s998);
    start996 = $tmp999;
    if (((panda$core$Bit) { !start996.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1001 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1000 = $tmp1001;
    if (((panda$core$Bit) { body1000 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1002, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1002, &$s1003);
    if (((panda$core$Bit) { !$tmp1004.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1006 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1005 = $tmp1006;
    if (((panda$core$Bit) { test1005 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1007 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1007->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1007->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1007, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start996.value).position, p_label, body1000, test1005);
    return $tmp1007;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1009;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1010;
    panda$collections$ImmutableArray* body1013;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1010, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1012 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1010, &$s1011);
    start1009 = $tmp1012;
    if (((panda$core$Bit) { !start1009.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1014 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1013 = $tmp1014;
    if (((panda$core$Bit) { body1013 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1015 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1015->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1015, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1009.value).position, p_label, body1013);
    return $tmp1015;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1017;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1018;
    org$pandalanguage$pandac$ASTNode* expr1021;
    org$pandalanguage$pandac$ASTNode* message1023;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1024;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1018, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1020 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1018, &$s1019);
    start1017 = $tmp1020;
    if (((panda$core$Bit) { !start1017.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1022 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1021 = $tmp1022;
    if (((panda$core$Bit) { expr1021 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1024, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1025 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1024);
    if (((panda$core$Bit) { $tmp1025.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1026 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        message1023 = $tmp1026;
        if (((panda$core$Bit) { message1023 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        message1023 = NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1027 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1027->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1027->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1027, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1017.value).position, expr1021, message1023);
    return $tmp1027;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1029;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1030;
    panda$collections$Array* expressions1033;
    org$pandalanguage$pandac$ASTNode* expr1036;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1040;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1043;
    panda$collections$Array* statements1046;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131051;
    org$pandalanguage$pandac$ASTNode* stmt1071;
    org$pandalanguage$pandac$ASTNode* stmt1073;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1030, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1032 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1030, &$s1031);
    start1029 = $tmp1032;
    if (((panda$core$Bit) { !start1029.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1034 = (panda$collections$Array*) malloc(40);
    $tmp1034->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1034->refCount.value = 1;
    panda$collections$Array$init($tmp1034);
    expressions1033 = $tmp1034;
    org$pandalanguage$pandac$ASTNode* $tmp1037 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1036 = $tmp1037;
    if (((panda$core$Bit) { expr1036 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1033, ((panda$core$Object*) expr1036));
    $l1038:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1040, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1041 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1040);
    if (!((panda$core$Bit) { $tmp1041.nonnull }).value) goto $l1039;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1042 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1036 = $tmp1042;
        if (((panda$core$Bit) { expr1036 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1033, ((panda$core$Object*) expr1036));
    }
    goto $l1038;
    $l1039:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1043, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1045 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1043, &$s1044);
    if (((panda$core$Bit) { !$tmp1045.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1047 = (panda$collections$Array*) malloc(40);
    $tmp1047->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1047->refCount.value = 1;
    panda$collections$Array$init($tmp1047);
    statements1046 = $tmp1047;
    $l1049:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1052 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131051 = $tmp1052.kind;
            panda$core$Bit $tmp1055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131051.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1054 = $tmp1055.value;
            if ($tmp1054) goto $l1056;
            panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131051.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1054 = $tmp1057.value;
            $l1056:;
            panda$core$Bit $tmp1058 = { $tmp1054 };
            bool $tmp1053 = $tmp1058.value;
            if ($tmp1053) goto $l1059;
            panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131051.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1053 = $tmp1060.value;
            $l1059:;
            panda$core$Bit $tmp1061 = { $tmp1053 };
            if ($tmp1061.value) {
            {
                goto $l1050;
            }
            }
            else {
            panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131051.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1063 = $tmp1064.value;
            if ($tmp1063) goto $l1065;
            panda$core$Bit $tmp1066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131051.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1063 = $tmp1066.value;
            $l1065:;
            panda$core$Bit $tmp1067 = { $tmp1063 };
            bool $tmp1062 = $tmp1067.value;
            if ($tmp1062) goto $l1068;
            panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131051.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1062 = $tmp1069.value;
            $l1068:;
            panda$core$Bit $tmp1070 = { $tmp1062 };
            if ($tmp1070.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1072 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1071 = $tmp1072;
                if (((panda$core$Bit) { stmt1071 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1046, ((panda$core$Object*) stmt1071));
                goto $l1050;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1074 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1073 = $tmp1074;
                    if (((panda$core$Bit) { stmt1073 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1046, ((panda$core$Object*) stmt1073));
                }
            }
            }
            }
        }
    }
    }
    $l1050:;
    org$pandalanguage$pandac$ASTNode* $tmp1075 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1075->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1075->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1077 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1033);
    panda$collections$ImmutableArray* $tmp1078 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1046);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1075, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1029.value).position, $tmp1077, $tmp1078);
    return $tmp1075;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1079;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1080;
    org$pandalanguage$pandac$ASTNode* expr1083;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1085;
    panda$collections$Array* whens1088;
    panda$collections$Array* other1091;
    org$pandalanguage$pandac$parser$Token token1094;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131096;
    org$pandalanguage$pandac$ASTNode* w1099;
    org$pandalanguage$pandac$parser$Token o1102;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1104;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251111;
    org$pandalanguage$pandac$ASTNode* stmt1123;
    org$pandalanguage$pandac$ASTNode* stmt1125;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1134;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1080, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1082 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1080, &$s1081);
    start1079 = $tmp1082;
    if (((panda$core$Bit) { !start1079.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1084 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1083 = $tmp1084;
    if (((panda$core$Bit) { expr1083 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1085, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1087 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1085, &$s1086);
    if (((panda$core$Bit) { !$tmp1087.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1089 = (panda$collections$Array*) malloc(40);
    $tmp1089->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1089->refCount.value = 1;
    panda$collections$Array$init($tmp1089);
    whens1088 = $tmp1089;
    other1091 = NULL;
    $l1092:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1095 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1094 = $tmp1095;
        {
            $match$1155_131096 = token1094.kind;
            panda$core$Bit $tmp1097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131096.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1097.value) {
            {
                goto $l1093;
            }
            }
            else {
            panda$core$Bit $tmp1098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131096.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1098.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1100 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1099 = $tmp1100;
                if (((panda$core$Bit) { w1099 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1088, ((panda$core$Object*) w1099));
            }
            }
            else {
            panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131096.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1101.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1103 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1102 = $tmp1103;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1104, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1106 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1104, &$s1105);
                if (((panda$core$Bit) { !$tmp1106.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array* $tmp1107 = (panda$collections$Array*) malloc(40);
                $tmp1107->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp1107->refCount.value = 1;
                panda$collections$Array$init($tmp1107);
                other1091 = $tmp1107;
                $l1109:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1112 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251111 = $tmp1112.kind;
                        panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251111.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1113.value) {
                        {
                            goto $l1110;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251111.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1115 = $tmp1116.value;
                        if ($tmp1115) goto $l1117;
                        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251111.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1115 = $tmp1118.value;
                        $l1117:;
                        panda$core$Bit $tmp1119 = { $tmp1115 };
                        bool $tmp1114 = $tmp1119.value;
                        if ($tmp1114) goto $l1120;
                        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251111.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1114 = $tmp1121.value;
                        $l1120:;
                        panda$core$Bit $tmp1122 = { $tmp1114 };
                        if ($tmp1122.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1124 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1123 = $tmp1124;
                            if (((panda$core$Bit) { stmt1123 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1091, ((panda$core$Object*) stmt1123));
                            goto $l1110;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1126 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1125 = $tmp1126;
                            if (((panda$core$Bit) { stmt1125 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1091, ((panda$core$Object*) stmt1125));
                        }
                        }
                        }
                    }
                }
                }
                $l1110:;
                goto $l1093;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1129 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1094);
                panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1128, $tmp1129);
                panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
                panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1127, $tmp1132);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1094, $tmp1133);
            }
            }
            }
            }
        }
    }
    }
    $l1093:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1134, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1136 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1134, &$s1135);
    if (((panda$core$Bit) { !$tmp1136.nonnull }).value) {
    {
        return NULL;
    }
    }
    if (((panda$core$Bit) { other1091 != NULL }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1137 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1137->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1137->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1139 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1088);
        panda$collections$ImmutableArray* $tmp1140 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1091);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1137, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1079.value).position, expr1083, $tmp1139, $tmp1140);
        return $tmp1137;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1141 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1141->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1141->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1143 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1088);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1141, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1079.value).position, expr1083, $tmp1143, NULL);
    return $tmp1141;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1144;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1145;
    panda$collections$Array* result1148;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131153;
    org$pandalanguage$pandac$ASTNode* stmt1165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1167;
    org$pandalanguage$pandac$ASTNode* stmt1170;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1145, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1147 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1145, &$s1146);
    start1144 = $tmp1147;
    if (((panda$core$Bit) { !start1144.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1149 = (panda$collections$Array*) malloc(40);
    $tmp1149->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1149->refCount.value = 1;
    panda$collections$Array$init($tmp1149);
    result1148 = $tmp1149;
    $l1151:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1154 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131153 = $tmp1154.kind;
            panda$core$Bit $tmp1155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131153.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1155.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1152;
            }
            }
            else {
            panda$core$Bit $tmp1158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131153.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1157 = $tmp1158.value;
            if ($tmp1157) goto $l1159;
            panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131153.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1157 = $tmp1160.value;
            $l1159:;
            panda$core$Bit $tmp1161 = { $tmp1157 };
            bool $tmp1156 = $tmp1161.value;
            if ($tmp1156) goto $l1162;
            panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131153.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1156 = $tmp1163.value;
            $l1162:;
            panda$core$Bit $tmp1164 = { $tmp1156 };
            if ($tmp1164.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1166 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1165 = $tmp1166;
                if (((panda$core$Bit) { stmt1165 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1167, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1169 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1167, &$s1168);
                if (((panda$core$Bit) { !$tmp1169.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1148, ((panda$core$Object*) stmt1165));
                goto $l1152;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1171 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1170 = $tmp1171;
                if (((panda$core$Bit) { stmt1170 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1148, ((panda$core$Object*) stmt1170));
            }
            }
            }
        }
    }
    }
    $l1152:;
    panda$collections$ImmutableArray* $tmp1172 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1148);
    return $tmp1172;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1173;
    org$pandalanguage$pandac$Position $tmp1177;
    panda$collections$ImmutableArray* $tmp1174 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    statements1173 = $tmp1174;
    if (((panda$core$Bit) { statements1173 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1175 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1175->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1175->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1177);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1175, ((panda$core$Int64) { 4 }), $tmp1177, statements1173);
    return $tmp1175;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1178;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91180;
    org$pandalanguage$pandac$parser$Token op1243;
    org$pandalanguage$pandac$ASTNode* rvalue1245;
    org$pandalanguage$pandac$parser$Token op1254;
    org$pandalanguage$pandac$ASTNode* rvalue1256;
    org$pandalanguage$pandac$ASTNode* $tmp1179 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1178 = $tmp1179;
    if (((panda$core$Bit) { start1178 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1181 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91180 = $tmp1181.kind;
        panda$core$Bit $tmp1197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1196 = $tmp1197.value;
        if ($tmp1196) goto $l1198;
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1196 = $tmp1199.value;
        $l1198:;
        panda$core$Bit $tmp1200 = { $tmp1196 };
        bool $tmp1195 = $tmp1200.value;
        if ($tmp1195) goto $l1201;
        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1195 = $tmp1202.value;
        $l1201:;
        panda$core$Bit $tmp1203 = { $tmp1195 };
        bool $tmp1194 = $tmp1203.value;
        if ($tmp1194) goto $l1204;
        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1194 = $tmp1205.value;
        $l1204:;
        panda$core$Bit $tmp1206 = { $tmp1194 };
        bool $tmp1193 = $tmp1206.value;
        if ($tmp1193) goto $l1207;
        panda$core$Bit $tmp1208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1193 = $tmp1208.value;
        $l1207:;
        panda$core$Bit $tmp1209 = { $tmp1193 };
        bool $tmp1192 = $tmp1209.value;
        if ($tmp1192) goto $l1210;
        panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1192 = $tmp1211.value;
        $l1210:;
        panda$core$Bit $tmp1212 = { $tmp1192 };
        bool $tmp1191 = $tmp1212.value;
        if ($tmp1191) goto $l1213;
        panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1191 = $tmp1214.value;
        $l1213:;
        panda$core$Bit $tmp1215 = { $tmp1191 };
        bool $tmp1190 = $tmp1215.value;
        if ($tmp1190) goto $l1216;
        panda$core$Bit $tmp1217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1190 = $tmp1217.value;
        $l1216:;
        panda$core$Bit $tmp1218 = { $tmp1190 };
        bool $tmp1189 = $tmp1218.value;
        if ($tmp1189) goto $l1219;
        panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1189 = $tmp1220.value;
        $l1219:;
        panda$core$Bit $tmp1221 = { $tmp1189 };
        bool $tmp1188 = $tmp1221.value;
        if ($tmp1188) goto $l1222;
        panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1188 = $tmp1223.value;
        $l1222:;
        panda$core$Bit $tmp1224 = { $tmp1188 };
        bool $tmp1187 = $tmp1224.value;
        if ($tmp1187) goto $l1225;
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1187 = $tmp1226.value;
        $l1225:;
        panda$core$Bit $tmp1227 = { $tmp1187 };
        bool $tmp1186 = $tmp1227.value;
        if ($tmp1186) goto $l1228;
        panda$core$Bit $tmp1229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1186 = $tmp1229.value;
        $l1228:;
        panda$core$Bit $tmp1230 = { $tmp1186 };
        bool $tmp1185 = $tmp1230.value;
        if ($tmp1185) goto $l1231;
        panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1185 = $tmp1232.value;
        $l1231:;
        panda$core$Bit $tmp1233 = { $tmp1185 };
        bool $tmp1184 = $tmp1233.value;
        if ($tmp1184) goto $l1234;
        panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1184 = $tmp1235.value;
        $l1234:;
        panda$core$Bit $tmp1236 = { $tmp1184 };
        bool $tmp1183 = $tmp1236.value;
        if ($tmp1183) goto $l1237;
        panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1183 = $tmp1238.value;
        $l1237:;
        panda$core$Bit $tmp1239 = { $tmp1183 };
        bool $tmp1182 = $tmp1239.value;
        if ($tmp1182) goto $l1240;
        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1182 = $tmp1241.value;
        $l1240:;
        panda$core$Bit $tmp1242 = { $tmp1182 };
        if ($tmp1242.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1244 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1243 = $tmp1244;
            org$pandalanguage$pandac$ASTNode* $tmp1246 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1245 = $tmp1246;
            if (((panda$core$Bit) { rvalue1245 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1247 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1247->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1247->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp1250 = (($fn1249) start1178->$class->vtable[2])(start1178);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1247, ((panda$core$Int64) { 2 }), $tmp1250, start1178, op1243.kind, rvalue1245);
            return $tmp1247;
        }
        }
        else {
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91180.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1251.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1252 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1252, &$s1253);
            org$pandalanguage$pandac$parser$Token $tmp1255 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1254 = $tmp1255;
            org$pandalanguage$pandac$ASTNode* $tmp1257 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1256 = $tmp1257;
            if (((panda$core$Bit) { rvalue1256 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1258 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1258->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1258->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp1261 = (($fn1260) start1178->$class->vtable[2])(start1178);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1258, ((panda$core$Int64) { 2 }), $tmp1261, start1178, op1254.kind, rvalue1256);
            return $tmp1258;
        }
        }
        else {
        {
            return start1178;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1262;
    org$pandalanguage$pandac$ASTNode* value1264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1265;
    org$pandalanguage$pandac$ASTNode* $tmp1263 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1262 = $tmp1263;
    if (((panda$core$Bit) { t1262 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1265, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1266 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1265);
    if (((panda$core$Bit) { $tmp1266.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1267 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value1264 = $tmp1267;
        if (((panda$core$Bit) { value1264 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1268 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1268.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1269.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1270 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1270, &$s1271);
        org$pandalanguage$pandac$ASTNode* $tmp1272 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        value1264 = $tmp1272;
        if (((panda$core$Bit) { value1264 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        value1264 = NULL;
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1273 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1273->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1273->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp1276 = (($fn1275) t1262->$class->vtable[2])(t1262);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1273, ((panda$core$Int64) { 11 }), $tmp1276, t1262, value1264);
    return $tmp1273;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1277;
    org$pandalanguage$pandac$Variable$Kind kind1279;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91280;
    org$pandalanguage$pandac$Variable$Kind $tmp1282;
    org$pandalanguage$pandac$Variable$Kind $tmp1284;
    org$pandalanguage$pandac$Variable$Kind $tmp1286;
    org$pandalanguage$pandac$Variable$Kind $tmp1288;
    panda$collections$Array* declarations1290;
    org$pandalanguage$pandac$ASTNode* decl1293;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1297;
    org$pandalanguage$pandac$ASTNode* decl1299;
    org$pandalanguage$pandac$parser$Token $tmp1278 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1277 = $tmp1278;
    {
        $match$1318_91280 = start1277.kind;
        panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91280.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1281.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1282, ((panda$core$Int64) { 0 }));
            kind1279 = $tmp1282;
        }
        }
        else {
        panda$core$Bit $tmp1283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91280.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1283.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1284, ((panda$core$Int64) { 1 }));
            kind1279 = $tmp1284;
        }
        }
        else {
        panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91280.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1285.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1286, ((panda$core$Int64) { 3 }));
            kind1279 = $tmp1286;
        }
        }
        else {
        panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91280.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1287.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1288, ((panda$core$Int64) { 2 }));
            kind1279 = $tmp1288;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1277, &$s1289);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1291 = (panda$collections$Array*) malloc(40);
    $tmp1291->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1291->refCount.value = 1;
    panda$collections$Array$init($tmp1291);
    declarations1290 = $tmp1291;
    org$pandalanguage$pandac$ASTNode* $tmp1294 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1293 = $tmp1294;
    if (((panda$core$Bit) { decl1293 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1290, ((panda$core$Object*) decl1293));
    $l1295:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1297, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1298 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1297);
    if (!((panda$core$Bit) { $tmp1298.nonnull }).value) goto $l1296;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1300 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        decl1299 = $tmp1300;
        if (((panda$core$Bit) { decl1299 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1290, ((panda$core$Object*) decl1299));
    }
    goto $l1295;
    $l1296:;
    org$pandalanguage$pandac$ASTNode* $tmp1301 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1301->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1301->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1303 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1290);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1301, ((panda$core$Int64) { 38 }), start1277.position, kind1279, $tmp1303);
    return $tmp1301;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1304;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1305;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1308;
    org$pandalanguage$pandac$ASTNode* target1312;
    panda$collections$Array* args1316;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1319;
    org$pandalanguage$pandac$ASTNode* expr1321;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1325;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1328;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1305, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1307 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1305, &$s1306);
    start1304 = $tmp1307;
    if (((panda$core$Bit) { !start1304.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1308, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1310 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1308, &$s1309);
    if (((panda$core$Bit) { !$tmp1310.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1311;
    $tmp1311 = (panda$core$Bit$wrapper*) malloc(13);
    $tmp1311->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp1311->refCount = 1;
    $tmp1311->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1311));
    org$pandalanguage$pandac$ASTNode* $tmp1313 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1313->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1313->refCount.value = 1;
    panda$core$String* $tmp1315 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1304.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1313, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1304.value).position, $tmp1315);
    target1312 = $tmp1313;
    panda$collections$Array* $tmp1317 = (panda$collections$Array*) malloc(40);
    $tmp1317->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1317->refCount.value = 1;
    panda$collections$Array$init($tmp1317);
    args1316 = $tmp1317;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1319, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1320 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1319);
    if (((panda$core$Bit) { !$tmp1320.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1322 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1321 = $tmp1322;
        if (((panda$core$Bit) { expr1321 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1316, ((panda$core$Object*) expr1321));
        $l1323:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1325, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1326 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1325);
        if (!((panda$core$Bit) { $tmp1326.nonnull }).value) goto $l1324;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1327 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1321 = $tmp1327;
            if (((panda$core$Bit) { expr1321 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1316, ((panda$core$Object*) expr1321));
        }
        goto $l1323;
        $l1324:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1328, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1330 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1328, &$s1329);
        if (((panda$core$Bit) { !$tmp1330.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1331 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1331->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1331->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1333 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1316);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1331, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1304.value).position, target1312, $tmp1333);
    return $tmp1331;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1334;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1335;
    org$pandalanguage$pandac$parser$Token$nullable label1338;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1339;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1335, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1337 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1335, &$s1336);
    start1334 = $tmp1337;
    if (((panda$core$Bit) { !start1334.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1339, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1340 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1339);
    label1338 = $tmp1340;
    if (((panda$core$Bit) { label1338.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1341 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1341->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1341->refCount.value = 1;
        panda$core$String* $tmp1343 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1338.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1341, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1334.value).position, $tmp1343);
        return $tmp1341;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1344 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1344->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1344->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1344, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1334.value).position, NULL);
    return $tmp1344;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1346;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1347;
    org$pandalanguage$pandac$parser$Token$nullable label1350;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1351;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1347, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1349 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1347, &$s1348);
    start1346 = $tmp1349;
    if (((panda$core$Bit) { !start1346.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1351, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1352 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1351);
    label1350 = $tmp1352;
    if (((panda$core$Bit) { label1350.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1353 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1353->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1353->refCount.value = 1;
        panda$core$String* $tmp1355 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1350.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1353, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1346.value).position, $tmp1355);
        return $tmp1353;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1356 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1356->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1356->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1356, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1346.value).position, NULL);
    return $tmp1356;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1358;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1359;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_91362;
    panda$collections$Array* children1375;
    org$pandalanguage$pandac$ASTNode* expr1378;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1359, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1361 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1359, &$s1360);
    start1358 = $tmp1361;
    if (((panda$core$Bit) { !start1358.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1363 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_91362 = $tmp1363.kind;
        panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91362.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1365 = $tmp1366.value;
        if ($tmp1365) goto $l1367;
        panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91362.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1365 = $tmp1368.value;
        $l1367:;
        panda$core$Bit $tmp1369 = { $tmp1365 };
        bool $tmp1364 = $tmp1369.value;
        if ($tmp1364) goto $l1370;
        panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91362.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1364 = $tmp1371.value;
        $l1370:;
        panda$core$Bit $tmp1372 = { $tmp1364 };
        if ($tmp1372.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1373 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1373->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1373->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1373, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1358.value).position, NULL);
            return $tmp1373;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1376 = (panda$collections$Array*) malloc(40);
            $tmp1376->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1376->refCount.value = 1;
            panda$collections$Array$init($tmp1376);
            children1375 = $tmp1376;
            org$pandalanguage$pandac$ASTNode* $tmp1379 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1378 = $tmp1379;
            if (((panda$core$Bit) { expr1378 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1375, ((panda$core$Object*) expr1378));
            org$pandalanguage$pandac$ASTNode* $tmp1380 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1380->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1380->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1380, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1358.value).position, expr1378);
            return $tmp1380;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_91382;
    {
        org$pandalanguage$pandac$parser$Token $tmp1383 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_91382 = $tmp1383.kind;
        panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91382.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1384.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1385 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1385;
        }
        }
        else {
        panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91382.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1386.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1387 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1387;
        }
        }
        else {
        panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91382.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1388.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1389 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1389;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_91390;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1400;
    {
        org$pandalanguage$pandac$parser$Token $tmp1391 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_91390 = $tmp1391.kind;
        panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91390.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1392.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1393 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1393;
        }
        }
        else {
        panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91390.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1394.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1395 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1395;
        }
        }
        else {
        panda$core$Bit $tmp1396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91390.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1396.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1397 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1397;
        }
        }
        else {
        panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91390.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1398.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1399 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1399;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1400, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1400, &$s1401);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_91402;
    org$pandalanguage$pandac$parser$Token id1421;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1423;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1450;
    {
        org$pandalanguage$pandac$parser$Token $tmp1403 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_91402 = $tmp1403.kind;
        panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1404.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1405 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1405;
        }
        }
        else {
        panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1406.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1407 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1407;
        }
        }
        else {
        panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1408.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1409 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1409;
        }
        }
        else {
        panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1410.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1411 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1411;
        }
        }
        else {
        panda$core$Bit $tmp1412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1412.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1413 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1413;
        }
        }
        else {
        panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1414.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1415 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1415;
        }
        }
        else {
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1416.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1417 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1417;
        }
        }
        else {
        panda$core$Bit $tmp1418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1418.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1419 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1419;
        }
        }
        else {
        panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1420.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1422 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1421 = $tmp1422;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1423, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1424 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1423);
            if (((panda$core$Bit) { $tmp1424.nonnull }).value) {
            {
                panda$core$String* $tmp1425 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1421);
                org$pandalanguage$pandac$ASTNode* $tmp1426 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1425);
                return $tmp1426;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1421);
            org$pandalanguage$pandac$ASTNode* $tmp1427 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1427;
        }
        }
        else {
        panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1428 = $tmp1429.value;
        if ($tmp1428) goto $l1430;
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1428 = $tmp1431.value;
        $l1430:;
        panda$core$Bit $tmp1432 = { $tmp1428 };
        if ($tmp1432.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1433 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1433;
        }
        }
        else {
        panda$core$Bit $tmp1437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1436 = $tmp1437.value;
        if ($tmp1436) goto $l1438;
        panda$core$Bit $tmp1439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1436 = $tmp1439.value;
        $l1438:;
        panda$core$Bit $tmp1440 = { $tmp1436 };
        bool $tmp1435 = $tmp1440.value;
        if ($tmp1435) goto $l1441;
        panda$core$Bit $tmp1442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1435 = $tmp1442.value;
        $l1441:;
        panda$core$Bit $tmp1443 = { $tmp1435 };
        bool $tmp1434 = $tmp1443.value;
        if ($tmp1434) goto $l1444;
        panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1434 = $tmp1445.value;
        $l1444:;
        panda$core$Bit $tmp1446 = { $tmp1434 };
        if ($tmp1446.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1447 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1447;
        }
        }
        else {
        panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91402.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1448.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1449 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1449;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1450, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1450, &$s1451);
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
    org$pandalanguage$pandac$parser$Token$nullable start1452;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1453;
    org$pandalanguage$pandac$parser$Token$nullable next1456;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1457;
    panda$core$MutableString* name1460;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1466;
    panda$core$Char8 $tmp1468;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1469;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1453, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1455 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1453, &$s1454);
    start1452 = $tmp1455;
    if (((panda$core$Bit) { !start1452.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1457, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1459 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1457, &$s1458);
    next1456 = $tmp1459;
    if (((panda$core$Bit) { !next1456.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1461 = (panda$core$MutableString*) malloc(48);
    $tmp1461->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1461->refCount.value = 1;
    panda$core$String* $tmp1463 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1456.value));
    panda$core$MutableString$init$panda$core$String($tmp1461, $tmp1463);
    name1460 = $tmp1461;
    $l1464:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1466, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1467 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1466);
        next1456 = $tmp1467;
        if (((panda$core$Bit) { !next1456.nonnull }).value) {
        {
            goto $l1465;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1468, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1460, $tmp1468);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1469, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1471 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1469, &$s1470);
        next1456 = $tmp1471;
        if (((panda$core$Bit) { !next1456.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1472 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1456.value));
        panda$core$MutableString$append$panda$core$String(name1460, $tmp1472);
    }
    }
    $l1465:;
    org$pandalanguage$pandac$ASTNode* $tmp1473 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1473->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1473->refCount.value = 1;
    panda$core$String* $tmp1475 = panda$core$MutableString$finish$R$panda$core$String(name1460);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1473, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start1452.value).position, $tmp1475);
    return $tmp1473;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1476;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1477;
    org$pandalanguage$pandac$parser$Token$nullable next1480;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1481;
    panda$core$MutableString* name1484;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1490;
    panda$core$Char8 $tmp1492;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1493;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1477, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1479 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1477, &$s1478);
    start1476 = $tmp1479;
    if (((panda$core$Bit) { !start1476.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1481, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1483 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1481, &$s1482);
    next1480 = $tmp1483;
    if (((panda$core$Bit) { !next1480.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1485 = (panda$core$MutableString*) malloc(48);
    $tmp1485->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1485->refCount.value = 1;
    panda$core$String* $tmp1487 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1480.value));
    panda$core$MutableString$init$panda$core$String($tmp1485, $tmp1487);
    name1484 = $tmp1485;
    $l1488:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1490, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1491 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1490);
        next1480 = $tmp1491;
        if (((panda$core$Bit) { !next1480.nonnull }).value) {
        {
            goto $l1489;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1492, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1484, $tmp1492);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1493, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1495 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1493, &$s1494);
        next1480 = $tmp1495;
        if (((panda$core$Bit) { !next1480.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1496 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1480.value));
        panda$core$MutableString$append$panda$core$String(name1484, $tmp1496);
    }
    }
    $l1489:;
    org$pandalanguage$pandac$ASTNode* $tmp1497 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1497->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1497->refCount.value = 1;
    panda$core$String* $tmp1499 = panda$core$MutableString$finish$R$panda$core$String(name1484);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1497, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start1476.value).position, $tmp1499);
    return $tmp1497;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1500;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1501;
    org$pandalanguage$pandac$parser$Token$nullable id1504;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1505;
    panda$collections$Array* parameters1508;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1511;
    org$pandalanguage$pandac$ASTNode* t1513;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1523;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1525;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1528;
    org$pandalanguage$pandac$ASTNode* t1530;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1538;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1501, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1503 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1501, &$s1502);
    start1500 = $tmp1503;
    if (((panda$core$Bit) { !start1500.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1505, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1507 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1505, &$s1506);
    id1504 = $tmp1507;
    if (((panda$core$Bit) { !id1504.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1509 = (panda$collections$Array*) malloc(40);
    $tmp1509->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1509->refCount.value = 1;
    panda$collections$Array$init($tmp1509);
    parameters1508 = $tmp1509;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1511, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1512 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1511);
    if (((panda$core$Bit) { $tmp1512.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1514 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1513 = $tmp1514;
        if (((panda$core$Bit) { t1513 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1515 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1515->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1515->refCount.value = 1;
        panda$core$String* $tmp1517 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1504.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1515, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1504.value).position, $tmp1517, t1513);
        panda$collections$Array$add$panda$collections$Array$T(parameters1508, ((panda$core$Object*) $tmp1515));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1518 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1518->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1518->refCount.value = 1;
        panda$core$String* $tmp1520 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1504.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1518, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1504.value).position, $tmp1520);
        panda$collections$Array$add$panda$collections$Array$T(parameters1508, ((panda$core$Object*) $tmp1518));
    }
    }
    $l1521:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1523, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1524 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1523);
    if (!((panda$core$Bit) { $tmp1524.nonnull }).value) goto $l1522;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1525, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1527 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1525, &$s1526);
        id1504 = $tmp1527;
        if (((panda$core$Bit) { !id1504.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1528, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1529 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1528);
        if (((panda$core$Bit) { $tmp1529.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1531 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1530 = $tmp1531;
            if (((panda$core$Bit) { t1530 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1532 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1532->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1532->refCount.value = 1;
            panda$core$String* $tmp1534 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1504.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1532, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1504.value).position, $tmp1534, t1530);
            panda$collections$Array$add$panda$collections$Array$T(parameters1508, ((panda$core$Object*) $tmp1532));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1535 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
            $tmp1535->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1535->refCount.value = 1;
            panda$core$String* $tmp1537 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1504.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1535, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1504.value).position, $tmp1537);
            panda$collections$Array$add$panda$collections$Array$T(parameters1508, ((panda$core$Object*) $tmp1535));
        }
        }
    }
    goto $l1521;
    $l1522:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1538, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1540 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1538, &$s1539);
    if (((panda$core$Bit) { !$tmp1540.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1541 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1508);
    return $tmp1541;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1542;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1543;
    panda$collections$Array* result1546;
    org$pandalanguage$pandac$ASTNode* t1549;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1553;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1543, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1545 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1543, &$s1544);
    start1542 = $tmp1545;
    if (((panda$core$Bit) { !start1542.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1547 = (panda$collections$Array*) malloc(40);
    $tmp1547->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1547->refCount.value = 1;
    panda$collections$Array$init($tmp1547);
    result1546 = $tmp1547;
    org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1549 = $tmp1550;
    if (((panda$core$Bit) { t1549 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1546, ((panda$core$Object*) t1549));
    $l1551:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1553, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1554 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1553);
    if (!((panda$core$Bit) { $tmp1554.nonnull }).value) goto $l1552;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1555 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1549 = $tmp1555;
        if (((panda$core$Bit) { t1549 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1546, ((panda$core$Object*) t1549));
    }
    goto $l1551;
    $l1552:;
    panda$collections$ImmutableArray* $tmp1556 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1546);
    return $tmp1556;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1557;
    org$pandalanguage$pandac$parser$Token$nullable next1562;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1563;
    panda$collections$Array* $tmp1558 = (panda$collections$Array*) malloc(40);
    $tmp1558->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1558->refCount.value = 1;
    panda$collections$Array$init($tmp1558);
    result1557 = $tmp1558;
    $l1560:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1563, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1564 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1563);
        next1562 = $tmp1564;
        if (((panda$core$Bit) { !next1562.nonnull }).value) {
        {
            goto $l1561;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1565 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
        $tmp1565->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1565->refCount.value = 1;
        panda$core$String* $tmp1567 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1562.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1565, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1562.value).position, $tmp1567);
        panda$collections$Array$add$panda$collections$Array$T(result1557, ((panda$core$Object*) $tmp1565));
    }
    }
    $l1561:;
    panda$collections$ImmutableArray* $tmp1568 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1557);
    return $tmp1568;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1569;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1570;
    panda$core$MutableString* result1573;
    org$pandalanguage$pandac$parser$Token next1578;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1570, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1572 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1570, &$s1571);
    start1569 = $tmp1572;
    if (((panda$core$Bit) { !start1569.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1574 = (panda$core$MutableString*) malloc(48);
    $tmp1574->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1574->refCount.value = 1;
    panda$core$MutableString$init($tmp1574);
    result1573 = $tmp1574;
    $l1576:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1579 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1578 = $tmp1579;
        panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1578.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1580.value) {
        {
            goto $l1577;
        }
        }
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1578.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1581.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1569.value), &$s1582);
            return NULL;
        }
        }
        panda$core$String* $tmp1583 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1578);
        panda$core$MutableString$append$panda$core$String(result1573, $tmp1583);
    }
    }
    $l1577:;
    org$pandalanguage$pandac$ASTNode* $tmp1584 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1584->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1584->refCount.value = 1;
    panda$core$String* $tmp1586 = panda$core$MutableString$finish$R$panda$core$String(result1573);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1584, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$parser$Token) start1569.value).position, $tmp1586);
    return $tmp1584;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1587;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1588;
    org$pandalanguage$pandac$ASTNode* t1591;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1588, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1590 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1588, &$s1589);
    id1587 = $tmp1590;
    if (((panda$core$Bit) { !id1587.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1592 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1591 = $tmp1592;
    if (((panda$core$Bit) { t1591 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1593 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1593->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1593->refCount.value = 1;
    panda$core$String* $tmp1595 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1587.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1593, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) id1587.value).position, $tmp1595, t1591);
    return $tmp1593;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1596;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1597;
    panda$collections$Array* result1600;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1603;
    org$pandalanguage$pandac$ASTNode* param1605;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1609;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1612;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1597, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1599 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1597, &$s1598);
    start1596 = $tmp1599;
    if (((panda$core$Bit) { !start1596.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1601 = (panda$collections$Array*) malloc(40);
    $tmp1601->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1601->refCount.value = 1;
    panda$collections$Array$init($tmp1601);
    result1600 = $tmp1601;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1603, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1604 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1603);
    if (((panda$core$Bit) { !$tmp1604.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1606 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1605 = $tmp1606;
        if (((panda$core$Bit) { param1605 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1600, ((panda$core$Object*) param1605));
        $l1607:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1609, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1610 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1609);
        if (!((panda$core$Bit) { $tmp1610.nonnull }).value) goto $l1608;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1611 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
            param1605 = $tmp1611;
            if (((panda$core$Bit) { param1605 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1600, ((panda$core$Object*) param1605));
        }
        goto $l1607;
        $l1608:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1612, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1614 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1612, &$s1613);
        if (((panda$core$Bit) { !$tmp1614.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1615 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1600);
    return $tmp1615;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1616;
    org$pandalanguage$pandac$parser$Token$nullable start1617;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1618;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1620;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1623;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1624;
    panda$core$String* name1625;
    panda$collections$ImmutableArray* params1627;
    org$pandalanguage$pandac$ASTNode* returnType1629;
    panda$collections$ImmutableArray* body1633;
    org$pandalanguage$pandac$parser$Token token1637;
    panda$core$String* tokenText1639;
    org$pandalanguage$pandac$ASTNode* post1652;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1618, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1619 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1618);
    start1617 = $tmp1619;
    if (((panda$core$Bit) { !start1617.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1620, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1622 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1620, &$s1621);
        start1617 = $tmp1622;
        if (((panda$core$Bit) { !start1617.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1623, ((panda$core$Int64) { 0 }));
        kind1616 = $tmp1623;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1624, ((panda$core$Int64) { 1 }));
        kind1616 = $tmp1624;
    }
    }
    panda$core$String* $tmp1626 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1625 = $tmp1626;
    if (((panda$core$Bit) { name1625 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1628 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1627 = $tmp1628;
    if (((panda$core$Bit) { params1627 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1630 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1630.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1631.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1632 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        returnType1629 = $tmp1632;
        if (((panda$core$Bit) { returnType1629 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        returnType1629 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1634 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1634.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1635.value) {
    {
        panda$collections$ImmutableArray* $tmp1636 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        body1633 = $tmp1636;
        if (((panda$core$Bit) { body1633 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        body1633 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1638 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1637 = $tmp1638;
    panda$core$String* $tmp1640 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1637);
    tokenText1639 = $tmp1640;
    panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1637.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1641 = $tmp1642.value;
    if (!$tmp1641) goto $l1643;
    panda$core$Bit $tmp1646 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1639, &$s1645);
    bool $tmp1644 = $tmp1646.value;
    if ($tmp1644) goto $l1647;
    panda$core$Bit $tmp1649 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1639, &$s1648);
    $tmp1644 = $tmp1649.value;
    $l1647:;
    panda$core$Bit $tmp1650 = { $tmp1644 };
    $tmp1641 = $tmp1650.value;
    $l1643:;
    panda$core$Bit $tmp1651 = { $tmp1641 };
    if ($tmp1651.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1653 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1652 = $tmp1653;
        if (((panda$core$Bit) { post1652 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1654 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1654->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1654->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1654, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1617.value).position, p_doccomment, p_annotations, kind1616, name1625, params1627, returnType1629, body1633);
    return $tmp1654;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1656;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1657;
    panda$collections$ImmutableArray* params1660;
    panda$collections$ImmutableArray* b1662;
    org$pandalanguage$pandac$parser$Token token1664;
    panda$core$String* tokenText1666;
    org$pandalanguage$pandac$ASTNode* post1679;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1683;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1657, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1659 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1657, &$s1658);
    start1656 = $tmp1659;
    if (((panda$core$Bit) { !start1656.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1661 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1660 = $tmp1661;
    if (((panda$core$Bit) { params1660 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1663 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    b1662 = $tmp1663;
    if (((panda$core$Bit) { b1662 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1665 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1664 = $tmp1665;
    panda$core$String* $tmp1667 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1664);
    tokenText1666 = $tmp1667;
    panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1664.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1668 = $tmp1669.value;
    if (!$tmp1668) goto $l1670;
    panda$core$Bit $tmp1673 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1666, &$s1672);
    bool $tmp1671 = $tmp1673.value;
    if ($tmp1671) goto $l1674;
    panda$core$Bit $tmp1676 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1666, &$s1675);
    $tmp1671 = $tmp1676.value;
    $l1674:;
    panda$core$Bit $tmp1677 = { $tmp1671 };
    $tmp1668 = $tmp1677.value;
    $l1670:;
    panda$core$Bit $tmp1678 = { $tmp1668 };
    if ($tmp1678.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1680 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1679 = $tmp1680;
        if (((panda$core$Bit) { post1679 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1681 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1681->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1681->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1683, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1681, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1656.value).position, p_doccomment, p_annotations, $tmp1683, &$s1684, params1660, NULL, b1662);
    return $tmp1681;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1685;
    org$pandalanguage$pandac$ASTNode* $tmp1686 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1685 = $tmp1686;
    if (((panda$core$Bit) { decl1685 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1687 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1687->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1687->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp1690 = (($fn1689) decl1685->$class->vtable[2])(decl1685);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1687, ((panda$core$Int64) { 14 }), $tmp1690, p_doccomment, p_annotations, decl1685);
    return $tmp1687;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1691;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1692;
    panda$collections$Array* fields1695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1698;
    org$pandalanguage$pandac$ASTNode* field1702;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1706;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1709;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1692, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1694 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1692, &$s1693);
    name1691 = $tmp1694;
    if (((panda$core$Bit) { !name1691.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1696 = (panda$collections$Array*) malloc(40);
    $tmp1696->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1696->refCount.value = 1;
    panda$collections$Array$init($tmp1696);
    fields1695 = $tmp1696;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1698, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1699 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1698);
    if (((panda$core$Bit) { $tmp1699.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1700 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1701 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1700.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1701.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1703 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1702 = $tmp1703;
            if (((panda$core$Bit) { field1702 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1695, ((panda$core$Object*) field1702));
            $l1704:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1706, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1707 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1706);
            if (!((panda$core$Bit) { $tmp1707.nonnull }).value) goto $l1705;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1708 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                field1702 = $tmp1708;
                if (((panda$core$Bit) { field1702 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1695, ((panda$core$Object*) field1702));
            }
            goto $l1704;
            $l1705:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1709, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1711 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1709, &$s1710);
        if (((panda$core$Bit) { !$tmp1711.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1712 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1712->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1712->refCount.value = 1;
    panda$core$String* $tmp1714 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1691.value));
    panda$collections$ImmutableArray* $tmp1715 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1695);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1712, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1691.value).position, p_doccomment, $tmp1714, $tmp1715);
    return $tmp1712;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1716;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1717;
    org$pandalanguage$pandac$parser$Token$nullable name1720;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1721;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1724;
    panda$collections$Array* members1727;
    org$pandalanguage$pandac$ASTNode* dc1730;
    org$pandalanguage$pandac$parser$Token next1733;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_131735;
    org$pandalanguage$pandac$ASTNode* c1781;
    panda$collections$ImmutableArray* a1783;
    org$pandalanguage$pandac$parser$Token next1788;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_131790;
    org$pandalanguage$pandac$ASTNode* decl1813;
    org$pandalanguage$pandac$ASTNode* decl1818;
    org$pandalanguage$pandac$ASTNode* decl1823;
    org$pandalanguage$pandac$ASTNode* decl1832;
    org$pandalanguage$pandac$ASTNode* decl1849;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1854;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1863;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1717, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1719 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1717, &$s1718);
    start1716 = $tmp1719;
    if (((panda$core$Bit) { !start1716.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1721, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1723 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1721, &$s1722);
    name1720 = $tmp1723;
    if (((panda$core$Bit) { !name1720.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1724, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1726 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1724, &$s1725);
    if (((panda$core$Bit) { !$tmp1726.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1728 = (panda$collections$Array*) malloc(40);
    $tmp1728->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1728->refCount.value = 1;
    panda$collections$Array$init($tmp1728);
    members1727 = $tmp1728;
    dc1730 = NULL;
    $l1731:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1734 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1733 = $tmp1734;
        {
            $match$1854_131735 = next1733.kind;
            panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1744 = $tmp1745.value;
            if ($tmp1744) goto $l1746;
            panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1744 = $tmp1747.value;
            $l1746:;
            panda$core$Bit $tmp1748 = { $tmp1744 };
            bool $tmp1743 = $tmp1748.value;
            if ($tmp1743) goto $l1749;
            panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1743 = $tmp1750.value;
            $l1749:;
            panda$core$Bit $tmp1751 = { $tmp1743 };
            bool $tmp1742 = $tmp1751.value;
            if ($tmp1742) goto $l1752;
            panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1742 = $tmp1753.value;
            $l1752:;
            panda$core$Bit $tmp1754 = { $tmp1742 };
            bool $tmp1741 = $tmp1754.value;
            if ($tmp1741) goto $l1755;
            panda$core$Bit $tmp1756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1741 = $tmp1756.value;
            $l1755:;
            panda$core$Bit $tmp1757 = { $tmp1741 };
            bool $tmp1740 = $tmp1757.value;
            if ($tmp1740) goto $l1758;
            panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1740 = $tmp1759.value;
            $l1758:;
            panda$core$Bit $tmp1760 = { $tmp1740 };
            bool $tmp1739 = $tmp1760.value;
            if ($tmp1739) goto $l1761;
            panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1739 = $tmp1762.value;
            $l1761:;
            panda$core$Bit $tmp1763 = { $tmp1739 };
            bool $tmp1738 = $tmp1763.value;
            if ($tmp1738) goto $l1764;
            panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1738 = $tmp1765.value;
            $l1764:;
            panda$core$Bit $tmp1766 = { $tmp1738 };
            bool $tmp1737 = $tmp1766.value;
            if ($tmp1737) goto $l1767;
            panda$core$Bit $tmp1768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1737 = $tmp1768.value;
            $l1767:;
            panda$core$Bit $tmp1769 = { $tmp1737 };
            bool $tmp1736 = $tmp1769.value;
            if ($tmp1736) goto $l1770;
            panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1736 = $tmp1771.value;
            $l1770:;
            panda$core$Bit $tmp1772 = { $tmp1736 };
            if ($tmp1772.value) {
            {
                goto $l1732;
            }
            }
            else {
            panda$core$Bit $tmp1773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1773.value) {
            {
                if (((panda$core$Bit) { dc1730 != NULL }).value) {
                {
                    panda$core$String* $tmp1775 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1733);
                    panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1774, $tmp1775);
                    panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, &$s1777);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1733, $tmp1778);
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1779 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1730 = $tmp1779;
            }
            }
            else {
            panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131735.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1780.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1782 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1730);
                c1781 = $tmp1782;
                if (((panda$core$Bit) { c1781 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1727, ((panda$core$Object*) c1781));
                dc1730 = NULL;
            }
            }
            else {
            {
                goto $l1732;
            }
            }
            }
            }
        }
    }
    }
    $l1732:;
    panda$collections$ImmutableArray* $tmp1784 = (panda$collections$ImmutableArray*) malloc(40);
    $tmp1784->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1784->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp1784);
    a1783 = $tmp1784;
    $l1786:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1789 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1788 = $tmp1789;
        {
            $match$1878_131790 = next1788.kind;
            panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1791.value) {
            {
                panda$core$Int64 $tmp1792 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1783);
                panda$core$Bit $tmp1793 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1792, ((panda$core$Int64) { 0 }));
                if ($tmp1793.value) {
                {
                    panda$core$String* $tmp1795 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1788);
                    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1794, $tmp1795);
                    panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1796, &$s1797);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1788, $tmp1798);
                    return NULL;
                }
                }
                panda$collections$ImmutableArray* $tmp1799 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                a1783 = $tmp1799;
            }
            }
            else {
            panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1800.value) {
            {
                bool $tmp1801 = ((panda$core$Bit) { dc1730 != NULL }).value;
                if ($tmp1801) goto $l1802;
                panda$core$Int64 $tmp1803 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1783);
                panda$core$Bit $tmp1804 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1803, ((panda$core$Int64) { 0 }));
                $tmp1801 = $tmp1804.value;
                $l1802:;
                panda$core$Bit $tmp1805 = { $tmp1801 };
                if ($tmp1805.value) {
                {
                    panda$core$String* $tmp1807 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1788);
                    panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1806, $tmp1807);
                    panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, &$s1809);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1788, $tmp1810);
                    return NULL;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1811 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                dc1730 = $tmp1811;
            }
            }
            else {
            panda$core$Bit $tmp1812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1812.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1814 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1730, a1783);
                decl1813 = $tmp1814;
                if (((panda$core$Bit) { decl1813 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1727, ((panda$core$Object*) decl1813));
                dc1730 = NULL;
                panda$collections$ImmutableArray* $tmp1815 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1815->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1815->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1815);
                a1783 = $tmp1815;
            }
            }
            else {
            panda$core$Bit $tmp1817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1817.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1819 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1730, a1783);
                decl1818 = $tmp1819;
                if (((panda$core$Bit) { decl1818 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1727, ((panda$core$Object*) decl1818));
                dc1730 = NULL;
                panda$collections$ImmutableArray* $tmp1820 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1820->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1820->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1820);
                a1783 = $tmp1820;
            }
            }
            else {
            panda$core$Bit $tmp1822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1822.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1824 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1730, a1783);
                decl1823 = $tmp1824;
                if (((panda$core$Bit) { decl1823 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1727, ((panda$core$Object*) decl1823));
                dc1730 = NULL;
                panda$collections$ImmutableArray* $tmp1825 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1825->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1825->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1825);
                a1783 = $tmp1825;
            }
            }
            else {
            panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp1827 = $tmp1828.value;
            if ($tmp1827) goto $l1829;
            panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1827 = $tmp1830.value;
            $l1829:;
            panda$core$Bit $tmp1831 = { $tmp1827 };
            if ($tmp1831.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1833 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1730, a1783);
                decl1832 = $tmp1833;
                if (((panda$core$Bit) { decl1832 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1727, ((panda$core$Object*) decl1832));
                dc1730 = NULL;
                panda$collections$ImmutableArray* $tmp1834 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1834->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1834->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1834);
                a1783 = $tmp1834;
            }
            }
            else {
            panda$core$Bit $tmp1839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp1838 = $tmp1839.value;
            if ($tmp1838) goto $l1840;
            panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1838 = $tmp1841.value;
            $l1840:;
            panda$core$Bit $tmp1842 = { $tmp1838 };
            bool $tmp1837 = $tmp1842.value;
            if ($tmp1837) goto $l1843;
            panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1837 = $tmp1844.value;
            $l1843:;
            panda$core$Bit $tmp1845 = { $tmp1837 };
            bool $tmp1836 = $tmp1845.value;
            if ($tmp1836) goto $l1846;
            panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1836 = $tmp1847.value;
            $l1846:;
            panda$core$Bit $tmp1848 = { $tmp1836 };
            if ($tmp1848.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1850 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1730, a1783);
                decl1849 = $tmp1850;
                if (((panda$core$Bit) { decl1849 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1727, ((panda$core$Object*) decl1849));
                dc1730 = NULL;
                panda$collections$ImmutableArray* $tmp1851 = (panda$collections$ImmutableArray*) malloc(40);
                $tmp1851->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                $tmp1851->refCount.value = 1;
                panda$collections$ImmutableArray$init($tmp1851);
                a1783 = $tmp1851;
            }
            }
            else {
            panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131790.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1853.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1854, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1854, &$s1855);
                goto $l1787;
            }
            }
            else {
            {
                panda$core$String* $tmp1857 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1788);
                panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1856, $tmp1857);
                panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1788, $tmp1860);
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
    $l1787:;
    org$pandalanguage$pandac$ASTNode* $tmp1861 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1861->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1861->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1863, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp1864 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1720.value));
    panda$collections$ImmutableArray* $tmp1865 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1727);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1861, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1716.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp1863, $tmp1864, NULL, NULL, $tmp1865);
    return $tmp1861;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1866;
    org$pandalanguage$pandac$ASTNode* dc1868;
    panda$collections$ImmutableArray* a1871;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_91873;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1903;
    org$pandalanguage$pandac$parser$Token $tmp1867 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start1866 = $tmp1867;
    panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1866.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp1869.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1870 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
        dc1868 = $tmp1870;
        if (((panda$core$Bit) { dc1868 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        dc1868 = NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1872 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    a1871 = $tmp1872;
    if (((panda$core$Bit) { a1871 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1874 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_91873 = $tmp1874.kind;
        panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1875.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1876 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1868, a1871);
            return $tmp1876;
        }
        }
        else {
        panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1877.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1878 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1868, a1871);
            return $tmp1878;
        }
        }
        else {
        panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1879.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1880 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1868, a1871);
            return $tmp1880;
        }
        }
        else {
        panda$core$Bit $tmp1882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp1881 = $tmp1882.value;
        if ($tmp1881) goto $l1883;
        panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp1881 = $tmp1884.value;
        $l1883:;
        panda$core$Bit $tmp1885 = { $tmp1881 };
        if ($tmp1885.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1886 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1868, a1871);
            return $tmp1886;
        }
        }
        else {
        panda$core$Bit $tmp1887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1887.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1888 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1868, a1871);
            return $tmp1888;
        }
        }
        else {
        panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1891 = $tmp1892.value;
        if ($tmp1891) goto $l1893;
        panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1891 = $tmp1894.value;
        $l1893:;
        panda$core$Bit $tmp1895 = { $tmp1891 };
        bool $tmp1890 = $tmp1895.value;
        if ($tmp1890) goto $l1896;
        panda$core$Bit $tmp1897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1890 = $tmp1897.value;
        $l1896:;
        panda$core$Bit $tmp1898 = { $tmp1890 };
        bool $tmp1889 = $tmp1898.value;
        if ($tmp1889) goto $l1899;
        panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91873.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1889 = $tmp1900.value;
        $l1899:;
        panda$core$Bit $tmp1901 = { $tmp1889 };
        if ($tmp1901.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1902 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1868, a1871);
            return $tmp1902;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1903, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1903, &$s1904);
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
    org$pandalanguage$pandac$parser$Token$nullable start1905;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1906;
    org$pandalanguage$pandac$parser$Token$nullable name1909;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1910;
    panda$collections$ImmutableArray* generics1913;
    panda$collections$ImmutableArray* stypes1917;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1921;
    panda$collections$Array* members1924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1929;
    org$pandalanguage$pandac$ASTNode* member1931;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1935;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1906, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1908 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1906, &$s1907);
    start1905 = $tmp1908;
    if (((panda$core$Bit) { !start1905.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1910, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1912 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1910, &$s1911);
    name1909 = $tmp1912;
    if (((panda$core$Bit) { !name1909.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1914 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1914.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp1915.value) {
    {
        panda$collections$ImmutableArray* $tmp1916 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        generics1913 = $tmp1916;
        if (((panda$core$Bit) { generics1913 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        generics1913 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1918 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1918.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1919.value) {
    {
        panda$collections$ImmutableArray* $tmp1920 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        stypes1917 = $tmp1920;
        if (((panda$core$Bit) { stypes1917 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        stypes1917 = NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1921, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1923 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1921, &$s1922);
    if (((panda$core$Bit) { !$tmp1923.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1925 = (panda$collections$Array*) malloc(40);
    $tmp1925->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1925->refCount.value = 1;
    panda$collections$Array$init($tmp1925);
    members1924 = $tmp1925;
    $l1927:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1929, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1930 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1929);
    if (!((panda$core$Bit) { !$tmp1930.nonnull }).value) goto $l1928;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1932 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1931 = $tmp1932;
        if (((panda$core$Bit) { member1931 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1924, ((panda$core$Object*) member1931));
    }
    goto $l1927;
    $l1928:;
    org$pandalanguage$pandac$ASTNode* $tmp1933 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1933->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1933->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1935, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1936 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1909.value));
    panda$collections$ImmutableArray* $tmp1937 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1924);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1933, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1905.value).position, p_doccomment, p_annotations, $tmp1935, $tmp1936, generics1913, stypes1917, $tmp1937);
    return $tmp1933;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1938;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1939;
    org$pandalanguage$pandac$parser$Token$nullable name1942;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1943;
    panda$collections$ImmutableArray* generics1946;
    panda$collections$Array* intfs1952;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1955;
    org$pandalanguage$pandac$ASTNode* t1957;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1961;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1964;
    panda$collections$Array* members1967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1972;
    org$pandalanguage$pandac$ASTNode* member1974;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1978;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1939, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1941 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1939, &$s1940);
    start1938 = $tmp1941;
    if (((panda$core$Bit) { !start1938.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1943, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1945 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1943, &$s1944);
    name1942 = $tmp1945;
    if (((panda$core$Bit) { !name1942.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1947 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1947.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp1948.value) {
    {
        panda$collections$ImmutableArray* $tmp1949 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        generics1946 = $tmp1949;
        if (((panda$core$Bit) { generics1946 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        panda$collections$ImmutableArray* $tmp1950 = (panda$collections$ImmutableArray*) malloc(40);
        $tmp1950->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp1950->refCount.value = 1;
        panda$collections$ImmutableArray$init($tmp1950);
        generics1946 = $tmp1950;
    }
    }
    panda$collections$Array* $tmp1953 = (panda$collections$Array*) malloc(40);
    $tmp1953->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1953->refCount.value = 1;
    panda$collections$Array$init($tmp1953);
    intfs1952 = $tmp1953;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1955, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1956 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1955);
    if (((panda$core$Bit) { $tmp1956.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1958 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1957 = $tmp1958;
        if (((panda$core$Bit) { t1957 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs1952, ((panda$core$Object*) t1957));
        $l1959:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1961, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1962 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1961);
        if (!((panda$core$Bit) { $tmp1962.nonnull }).value) goto $l1960;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1963 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1957 = $tmp1963;
            if (((panda$core$Bit) { t1957 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs1952, ((panda$core$Object*) t1957));
        }
        goto $l1959;
        $l1960:;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1964, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1966 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1964, &$s1965);
    if (((panda$core$Bit) { !$tmp1966.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1968 = (panda$collections$Array*) malloc(40);
    $tmp1968->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1968->refCount.value = 1;
    panda$collections$Array$init($tmp1968);
    members1967 = $tmp1968;
    $l1970:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1972, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1973 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1972);
    if (!((panda$core$Bit) { !$tmp1973.nonnull }).value) goto $l1971;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1975 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member1974 = $tmp1975;
        if (((panda$core$Bit) { member1974 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members1967, ((panda$core$Object*) member1974));
    }
    goto $l1970;
    $l1971:;
    org$pandalanguage$pandac$ASTNode* $tmp1976 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp1976->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1976->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1978, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1979 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1942.value));
    panda$collections$ImmutableArray* $tmp1980 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs1952);
    panda$collections$ImmutableArray* $tmp1981 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1967);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1976, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1938.value).position, p_doccomment, p_annotations, $tmp1978, $tmp1979, generics1946, $tmp1980, $tmp1981);
    return $tmp1976;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_91982;
    {
        org$pandalanguage$pandac$parser$Token $tmp1983 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_91982 = $tmp1983.kind;
        panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1984.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1985 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1985;
        }
        }
        else {
        panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1986.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1987 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1987;
        }
        }
        else {
        panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp1993 = $tmp1994.value;
        if ($tmp1993) goto $l1995;
        panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp1993 = $tmp1996.value;
        $l1995:;
        panda$core$Bit $tmp1997 = { $tmp1993 };
        bool $tmp1992 = $tmp1997.value;
        if ($tmp1992) goto $l1998;
        panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp1992 = $tmp1999.value;
        $l1998:;
        panda$core$Bit $tmp2000 = { $tmp1992 };
        bool $tmp1991 = $tmp2000.value;
        if ($tmp1991) goto $l2001;
        panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp1991 = $tmp2002.value;
        $l2001:;
        panda$core$Bit $tmp2003 = { $tmp1991 };
        bool $tmp1990 = $tmp2003.value;
        if ($tmp1990) goto $l2004;
        panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp1990 = $tmp2005.value;
        $l2004:;
        panda$core$Bit $tmp2006 = { $tmp1990 };
        bool $tmp1989 = $tmp2006.value;
        if ($tmp1989) goto $l2007;
        panda$core$Bit $tmp2008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp1989 = $tmp2008.value;
        $l2007:;
        panda$core$Bit $tmp2009 = { $tmp1989 };
        bool $tmp1988 = $tmp2009.value;
        if ($tmp1988) goto $l2010;
        panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_91982.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp1988 = $tmp2011.value;
        $l2010:;
        panda$core$Bit $tmp2012 = { $tmp1988 };
        if ($tmp2012.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2013 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2013;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2014 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2014;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2015;
    org$pandalanguage$pandac$ASTNode* entry2022;
    panda$collections$Array* $tmp2016 = (panda$collections$Array*) malloc(40);
    $tmp2016->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2016->refCount.value = 1;
    panda$collections$Array$init($tmp2016);
    entries2015 = $tmp2016;
    $l2018:;
    org$pandalanguage$pandac$parser$Token $tmp2020 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2021 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2020.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2021.value) goto $l2019;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2023 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2022 = $tmp2023;
        if (((panda$core$Bit) { entry2022 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2024 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2024.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2015, ((panda$core$Object*) entry2022));
    }
    goto $l2018;
    $l2019:;
    org$pandalanguage$pandac$ASTNode* $tmp2025 = (org$pandalanguage$pandac$ASTNode*) malloc(96);
    $tmp2025->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2025->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp2027 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2015);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2025, ((panda$core$Int64) { 15 }), $tmp2027);
    return $tmp2025;
}

