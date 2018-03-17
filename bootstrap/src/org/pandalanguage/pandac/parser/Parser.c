#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "panda/io/File.h"
#include "panda/core/Panda.h"
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


static panda$core$String $s1;
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn65)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn103)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn136)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn201)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn244)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn249)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn254)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn259)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn306)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn347)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn352)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn357)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn364)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn376)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn381)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn388)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn725)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn766)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1353)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1367)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1387)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1827)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    self->path = NULL;
    self->source = NULL;
    org$pandalanguage$pandac$parser$Lexer* $tmp2 = (org$pandalanguage$pandac$parser$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class);
    org$pandalanguage$pandac$parser$Lexer$init($tmp2);
    self->lexer = $tmp2;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp3 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp3);
    self->pushbackBuffer = $tmp3;
    panda$collections$Stack* $tmp4 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp4);
    self->commaSeparatedExpressionContext = $tmp4;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp5);
    self->speculativeBuffer = $tmp5;
    {
        self->errors = p_errors;
    }
    panda$core$Bit$wrapper* $tmp6;
    $tmp6 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp6->value = ((panda$core$Bit) { false });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp6));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
        self->path = p_path;
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
        self->source = p_source;
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx9;
    org$pandalanguage$pandac$parser$Token result12;
    org$pandalanguage$pandac$parser$Token result14;
    panda$core$Int64 $tmp7 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp8 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp7, ((panda$core$Int64) { 0 }));
    if ($tmp8.value) {
    {
        panda$core$Int64 $tmp10 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp11 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp10, ((panda$core$Int64) { 1 }));
        idx9 = $tmp11;
        org$pandalanguage$pandac$parser$Token $tmp13 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx9);
        result12 = $tmp13;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx9);
        return result12;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp15 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result14 = $tmp15;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result14);
    }
    }
    return result14;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result18;
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1320;
    org$pandalanguage$pandac$parser$Token next25;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2527;
    panda$core$Char8 $tmp30;
    org$pandalanguage$pandac$parser$Token next36;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2538;
    $l16:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp19 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result18 = $tmp19;
        {
            $match$57_1320 = result18.kind;
            panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1320.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp21.value) {
            {
                goto $l16;
            }
            }
            else {
            panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1320.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp22.value) {
            {
                $l23:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp26 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next25 = $tmp26;
                    {
                        $match$63_2527 = next25.kind;
                        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2527.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp28.value) {
                        {
                            panda$core$String* $tmp29 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next25);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp30, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp31 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp29, $tmp30);
                            if ($tmp31.value) {
                            {
                                goto $l16;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2527.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp32.value) {
                        {
                            return next25;
                        }
                        }
                        }
                    }
                }
                }
                $l24:;
            }
            }
            else {
            panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1320.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp33.value) {
            {
                $l34:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp37 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next36 = $tmp37;
                    {
                        $match$75_2538 = next36.kind;
                        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2538.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp39.value) {
                        {
                            goto $l16;
                        }
                        }
                        else {
                        panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2538.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp40.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result18, &$s41);
                            return next36;
                        }
                        }
                        }
                    }
                }
                }
                $l35:;
            }
            }
            else {
            {
                return result18;
            }
            }
            }
            }
        }
    }
    }
    $l17:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp42 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp42, ((panda$core$Int64) { 0 }));
    if ($tmp43.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp44 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp44);
    }
    }
    panda$core$Int64 $tmp45 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp46 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp45, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp47 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp46);
    return $tmp47;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result48;
    org$pandalanguage$pandac$parser$Token $tmp49 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result48 = $tmp49;
    panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result48.kind.$rawValue, p_kind.$rawValue);
    if ($tmp50.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result48, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result48);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result51;
    org$pandalanguage$pandac$parser$Token $tmp52 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result51 = $tmp52;
    panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result51.kind.$rawValue, p_kind.$rawValue);
    if ($tmp53.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result51, true });
    }
    }
    panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s54, p_expected);
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s56);
    panda$core$String* $tmp58 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result51);
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, $tmp58);
    panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, &$s60);
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result51, $tmp61);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp62 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp62.value) {
    {
        ITable* $tmp63 = self->errors->$class->itable;
        while ($tmp63->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp63 = $tmp63->next;
        }
        $fn65 $tmp64 = $tmp63->methods[0];
        $tmp64(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp66.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp67;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp68 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp69 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp68, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp67, $tmp69, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp71 = $tmp67.start.value;
    panda$core$Int64 i70 = { $tmp71 };
    int64_t $tmp73 = $tmp67.end.value;
    int64_t $tmp74 = $tmp67.step.value;
    bool $tmp75 = $tmp67.inclusive.value;
    bool $tmp82 = $tmp74 > 0;
    if ($tmp82) goto $l80; else goto $l81;
    $l80:;
    if ($tmp75) goto $l83; else goto $l84;
    $l83:;
    if ($tmp71 <= $tmp73) goto $l76; else goto $l78;
    $l84:;
    if ($tmp71 < $tmp73) goto $l76; else goto $l78;
    $l81:;
    if ($tmp75) goto $l85; else goto $l86;
    $l85:;
    if ($tmp71 >= $tmp73) goto $l76; else goto $l78;
    $l86:;
    if ($tmp71 > $tmp73) goto $l76; else goto $l78;
    $l76:;
    {
        org$pandalanguage$pandac$parser$Token $tmp88 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i70);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp88);
    }
    $l79:;
    if ($tmp82) goto $l90; else goto $l91;
    $l90:;
    int64_t $tmp92 = $tmp73 - i70.value;
    if ($tmp75) goto $l93; else goto $l94;
    $l93:;
    if ((uint64_t) $tmp92 >= $tmp74) goto $l89; else goto $l78;
    $l94:;
    if ((uint64_t) $tmp92 > $tmp74) goto $l89; else goto $l78;
    $l91:;
    int64_t $tmp96 = i70.value - $tmp73;
    if ($tmp75) goto $l97; else goto $l98;
    $l97:;
    if ((uint64_t) $tmp96 >= -$tmp74) goto $l89; else goto $l78;
    $l98:;
    if ((uint64_t) $tmp96 > -$tmp74) goto $l89; else goto $l78;
    $l89:;
    i70.value += $tmp74;
    goto $l76;
    $l78:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp100;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp100, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp101 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp100);
    return $tmp101;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp105;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp102 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp104 = (($fn103) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp105, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp102, ((panda$core$Int64) { 2 }), $tmp104, p_string, $tmp105, p_chunk);
    return $tmp102;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result106;
    org$pandalanguage$pandac$parser$Token token110;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13112;
    panda$core$String* str114;
    panda$core$Char8 $tmp116;
    panda$core$String* tmp1119;
    panda$core$String* tmp3120;
    panda$core$String* tmp4123;
    org$pandalanguage$pandac$parser$Token escape125;
    panda$core$String* tmp5129;
    panda$core$String* escapeText130;
    panda$core$Char8 c132;
    panda$core$Char8 $match$176_21138;
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
    panda$core$Char8 $tmp159;
    panda$core$String* tmp2161;
    panda$core$String* tmp6162;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp163;
    panda$core$String* tmp7168;
    panda$core$MutableString* $tmp107 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp107);
    result106 = $tmp107;
    $l108:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp111 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token110 = $tmp111;
        {
            $match$157_13112 = token110.kind;
            panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13112.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp113.value) {
            {
                panda$core$String* $tmp115 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token110);
                str114 = $tmp115;
                panda$core$Char8$init$panda$core$UInt8(&$tmp116, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp117 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str114, $tmp116);
                if ($tmp117.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token110, &$s118);
                    {
                        tmp1119 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str114));
                        {
                            tmp3120 = tmp1119;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                            return tmp3120;
                        }
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result106, str114);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str114));
            }
            }
            else {
            panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13112.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp121.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token110, &$s122);
                {
                    tmp4123 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                    return tmp4123;
                }
            }
            }
            else {
            panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13112.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp124.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp126 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape125 = $tmp126;
                panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape125.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp127.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token110, &$s128);
                    {
                        tmp5129 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                        return tmp5129;
                    }
                }
                }
                panda$core$String* $tmp131 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape125);
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
                    $match$176_21138 = c132;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp139, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp140 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21138, $tmp139);
                    if ($tmp140.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp141, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp141);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp143 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21138, $tmp142);
                    if ($tmp143.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp144, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp144);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp145, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp146 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21138, $tmp145);
                    if ($tmp146.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp147);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp148, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp149 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21138, $tmp148);
                    if ($tmp149.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp150, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp150);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp152 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21138, $tmp151);
                    if ($tmp152.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp153, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp153);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp154, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp155 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21138, $tmp154);
                    if ($tmp155.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp156, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp156);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp157, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp158 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21138, $tmp157);
                    if ($tmp158.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp159, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp159);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token110, &$s160);
                        {
                            tmp2161 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText130));
                            {
                                tmp6162 = tmp2161;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                                return tmp6162;
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
                panda$core$String$Index $tmp164 = panda$core$String$start$R$panda$core$String$Index(escapeText130);
                panda$core$String$Index $tmp165 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText130, $tmp164);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp163, ((panda$core$String$Index$nullable) { $tmp165, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp166 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText130, $tmp163);
                panda$core$MutableString$append$panda$core$String(result106, $tmp166);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText130));
            }
            }
            else {
            panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13112.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp167.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token110);
                {
                    panda$core$String* $tmp169 = panda$core$MutableString$finish$R$panda$core$String(result106);
                    tmp7168 = $tmp169;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                    return tmp7168;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp170 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token110);
                panda$core$MutableString$append$panda$core$String(result106, $tmp170);
            }
            }
            }
            }
            }
        }
    }
    }
    $l109:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result171;
    org$pandalanguage$pandac$parser$Token token175;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13177;
    panda$core$String* str179;
    panda$core$Char8 $tmp181;
    panda$core$String* tmp8184;
    panda$core$String* tmp10185;
    panda$core$String* tmp11188;
    org$pandalanguage$pandac$parser$Token escape190;
    panda$core$String* tmp12194;
    panda$core$String* escapeText195;
    panda$core$Char8 c197;
    panda$core$Char8 $match$221_21203;
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
    panda$core$Char8 $tmp225;
    panda$core$Char8 $tmp227;
    panda$core$String* tmp9229;
    panda$core$String* tmp13230;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp231;
    panda$core$String* tmp14236;
    panda$core$String* tmp15239;
    panda$core$MutableString* $tmp172 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp172);
    result171 = $tmp172;
    $l173:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp176 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token175 = $tmp176;
        {
            $match$202_13177 = token175.kind;
            panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13177.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp178.value) {
            {
                panda$core$String* $tmp180 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token175);
                str179 = $tmp180;
                panda$core$Char8$init$panda$core$UInt8(&$tmp181, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp182 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str179, $tmp181);
                if ($tmp182.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token175, &$s183);
                    {
                        tmp8184 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str179));
                        {
                            tmp10185 = tmp8184;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
                            return tmp10185;
                        }
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result171, str179);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str179));
            }
            }
            else {
            panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13177.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp186.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token175, &$s187);
                {
                    tmp11188 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
                    return tmp11188;
                }
            }
            }
            else {
            panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13177.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp189.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp191 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape190 = $tmp191;
                panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape190.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp192.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token175, &$s193);
                    {
                        tmp12194 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
                        return tmp12194;
                    }
                }
                }
                panda$core$String* $tmp196 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape190);
                escapeText195 = $tmp196;
                panda$collections$ListView* $tmp198 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText195);
                ITable* $tmp199 = $tmp198->$class->itable;
                while ($tmp199->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp199 = $tmp199->next;
                }
                $fn201 $tmp200 = $tmp199->methods[0];
                panda$core$Object* $tmp202 = $tmp200($tmp198, ((panda$core$Int64) { 0 }));
                c197 = ((panda$core$Char8$wrapper*) $tmp202)->value;
                {
                    $match$221_21203 = c197;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp204, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp205 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp204);
                    if ($tmp205.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp206, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp206);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp207, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp208 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp207);
                    if ($tmp208.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp209, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp209);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp211 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp210);
                    if ($tmp211.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp212, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp212);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp214 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp213);
                    if ($tmp214.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp215, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp215);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp217 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp216);
                    if ($tmp217.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp218);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp220 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp219);
                    if ($tmp220.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp221);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp223 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp222);
                    if ($tmp223.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp224);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp226 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21203, $tmp225);
                    if ($tmp226.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result171, $tmp227);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token175, &$s228);
                        {
                            tmp9229 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText195));
                            {
                                tmp13230 = tmp9229;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
                                return tmp13230;
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
                panda$core$String$Index $tmp232 = panda$core$String$start$R$panda$core$String$Index(escapeText195);
                panda$core$String$Index $tmp233 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText195, $tmp232);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp231, ((panda$core$String$Index$nullable) { $tmp233, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp234 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText195, $tmp231);
                panda$core$MutableString$append$panda$core$String(result171, $tmp234);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText195));
            }
            }
            else {
            panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13177.$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp235.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token175);
                {
                    panda$core$String* $tmp237 = panda$core$MutableString$finish$R$panda$core$String(result171);
                    tmp14236 = $tmp237;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
                    return tmp14236;
                }
            }
            }
            else {
            panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13177.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp238.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token175);
                {
                    panda$core$String* $tmp240 = panda$core$MutableString$finish$R$panda$core$String(result171);
                    tmp15239 = $tmp240;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
                    return tmp15239;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp241 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token175);
                panda$core$MutableString$append$panda$core$String(result171, $tmp241);
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l174:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result171));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot242;
    org$pandalanguage$pandac$ASTNode* call247;
    org$pandalanguage$pandac$ASTNode* stringType252;
    org$pandalanguage$pandac$ASTNode* tmp16257;
    org$pandalanguage$pandac$parser$Token$Kind $tmp261;
    org$pandalanguage$pandac$ASTNode* $tmp243 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp245 = (($fn244) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp243, ((panda$core$Int64) { 13 }), $tmp245, p_expr, &$s246);
    dot242 = $tmp243;
    org$pandalanguage$pandac$ASTNode* $tmp248 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp250 = (($fn249) p_expr->$class->vtable[2])(p_expr);
    panda$collections$ImmutableArray* $tmp251 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init($tmp251);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp248, ((panda$core$Int64) { 6 }), $tmp250, dot242, $tmp251);
    call247 = $tmp248;
    org$pandalanguage$pandac$ASTNode* $tmp253 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp255 = (($fn254) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp253, ((panda$core$Int64) { 36 }), $tmp255, &$s256);
    stringType252 = $tmp253;
    {
        org$pandalanguage$pandac$ASTNode* $tmp258 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp260 = (($fn259) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp261, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp258, ((panda$core$Int64) { 2 }), $tmp260, call247, $tmp261, stringType252);
        tmp16257 = $tmp258;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot242));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType252));
        }
        return tmp16257;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start262;
    org$pandalanguage$pandac$ASTNode* result274;
    panda$core$MutableString* chunk275;
    org$pandalanguage$pandac$parser$Token token279;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13282;
    panda$core$String* str284;
    panda$core$Char8 $tmp286;
    org$pandalanguage$pandac$ASTNode* tmp17289;
    org$pandalanguage$pandac$ASTNode* tmp25290;
    org$pandalanguage$pandac$ASTNode* tmp26293;
    org$pandalanguage$pandac$parser$Token escape295;
    org$pandalanguage$pandac$ASTNode* tmp27299;
    panda$core$String* escapeText300;
    panda$core$Char8 c302;
    panda$core$Char8 $match$287_21308;
    panda$core$Char8 $tmp309;
    panda$core$Char8 $tmp311;
    panda$core$Char8 $tmp312;
    panda$core$Char8 $tmp314;
    panda$core$Char8 $tmp315;
    panda$core$Char8 $tmp317;
    panda$core$Char8 $tmp318;
    panda$core$Char8 $tmp320;
    panda$core$Char8 $tmp321;
    panda$core$Char8 $tmp323;
    panda$core$Char8 $tmp324;
    panda$core$Char8 $tmp326;
    panda$core$Char8 $tmp327;
    org$pandalanguage$pandac$ASTNode* expr329;
    org$pandalanguage$pandac$ASTNode* tmp18331;
    org$pandalanguage$pandac$ASTNode* tmp21332;
    org$pandalanguage$pandac$ASTNode* tmp28333;
    panda$core$String* align334;
    panda$core$String* format335;
    org$pandalanguage$pandac$parser$Token$Kind $tmp336;
    org$pandalanguage$pandac$parser$Token$Kind $tmp339;
    org$pandalanguage$pandac$ASTNode* tmp19342;
    org$pandalanguage$pandac$ASTNode* tmp22343;
    org$pandalanguage$pandac$ASTNode* tmp29344;
    org$pandalanguage$pandac$ASTNode* formattable345;
    org$pandalanguage$pandac$ASTNode* cast350;
    org$pandalanguage$pandac$parser$Token$Kind $tmp354;
    org$pandalanguage$pandac$ASTNode* dot355;
    panda$collections$Array* callArgs360;
    org$pandalanguage$pandac$parser$Token$Kind $tmp367;
    org$pandalanguage$pandac$ASTNode* tmp20370;
    org$pandalanguage$pandac$ASTNode* tmp23371;
    org$pandalanguage$pandac$ASTNode* tmp30372;
    org$pandalanguage$pandac$ASTNode* pandaType374;
    org$pandalanguage$pandac$ASTNode* callTarget379;
    panda$collections$Array* callArgs384;
    panda$core$String* text391;
    org$pandalanguage$pandac$ASTNode* tmp24404;
    org$pandalanguage$pandac$ASTNode* tmp31405;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp406;
    org$pandalanguage$pandac$ASTNode* tmp32411;
    org$pandalanguage$pandac$parser$Token $tmp263 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start262 = $tmp263;
    panda$core$Bit $tmp265 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start262.kind.$rawValue, ((panda$core$Int64) { 7 }));
    bool $tmp264 = $tmp265.value;
    if (!$tmp264) goto $l266;
    panda$core$Bit $tmp267 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start262.kind.$rawValue, ((panda$core$Int64) { 6 }));
    $tmp264 = $tmp267.value;
    $l266:;
    panda$core$Bit $tmp268 = { $tmp264 };
    if ($tmp268.value) {
    {
        panda$core$String* $tmp270 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start262);
        panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s269, $tmp270);
        panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, &$s272);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start262, $tmp273);
        return NULL;
    }
    }
    result274 = NULL;
    panda$core$MutableString* $tmp276 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp276);
    chunk275 = $tmp276;
    $l277:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp280 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token279 = $tmp280;
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token279.kind.$rawValue, start262.kind.$rawValue);
        if ($tmp281.value) {
        {
            goto $l278;
        }
        }
        {
            $match$268_13282 = token279.kind;
            panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13282.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp283.value) {
            {
                panda$core$String* $tmp285 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token279);
                str284 = $tmp285;
                panda$core$Char8$init$panda$core$UInt8(&$tmp286, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp287 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str284, $tmp286);
                if ($tmp287.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start262, &$s288);
                    {
                        tmp17289 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str284));
                        {
                            tmp25290 = tmp17289;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
                            }
                            return tmp25290;
                        }
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk275, str284);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str284));
            }
            }
            else {
            panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13282.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp291.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start262, &$s292);
                {
                    tmp26293 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
                    }
                    return tmp26293;
                }
            }
            }
            else {
            panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13282.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp294.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp296 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape295 = $tmp296;
                panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape295.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp297.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start262, &$s298);
                    {
                        tmp27299 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
                        }
                        return tmp27299;
                    }
                }
                }
                panda$core$String* $tmp301 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape295);
                escapeText300 = $tmp301;
                panda$collections$ListView* $tmp303 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText300);
                ITable* $tmp304 = $tmp303->$class->itable;
                while ($tmp304->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp304 = $tmp304->next;
                }
                $fn306 $tmp305 = $tmp304->methods[0];
                panda$core$Object* $tmp307 = $tmp305($tmp303, ((panda$core$Int64) { 0 }));
                c302 = ((panda$core$Char8$wrapper*) $tmp307)->value;
                {
                    $match$287_21308 = c302;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp309, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp310 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21308, $tmp309);
                    if ($tmp310.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp311, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk275, $tmp311);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp312, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp313 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21308, $tmp312);
                    if ($tmp313.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp314, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk275, $tmp314);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp316 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21308, $tmp315);
                    if ($tmp316.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk275, $tmp317);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp318, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp319 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21308, $tmp318);
                    if ($tmp319.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk275, $tmp320);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp321, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp322 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21308, $tmp321);
                    if ($tmp322.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp323, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk275, $tmp323);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp324, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp325 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21308, $tmp324);
                    if ($tmp325.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp326, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk275, $tmp326);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp327, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp328 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21308, $tmp327);
                    if ($tmp328.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp330 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr329 = $tmp330;
                            if (((panda$core$Bit) { expr329 == NULL }).value) {
                            {
                                {
                                    tmp18331 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr329));
                                    {
                                        tmp21332 = tmp18331;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText300));
                                        {
                                            tmp28333 = tmp21332;
                                            {
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
                                            }
                                            return tmp28333;
                                        }
                                    }
                                }
                            }
                            }
                            align334 = NULL;
                            format335 = NULL;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp336, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp337 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp336);
                            if (((panda$core$Bit) { $tmp337.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp338 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start262);
                                    align334 = $tmp338;
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp339, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp340 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp339);
                            if (((panda$core$Bit) { $tmp340.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp341 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start262);
                                    format335 = $tmp341;
                                }
                                if (((panda$core$Bit) { format335 == NULL }).value) {
                                {
                                    {
                                        tmp19342 = NULL;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format335));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align334));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr329));
                                        }
                                        {
                                            tmp22343 = tmp19342;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText300));
                                            {
                                                tmp29344 = tmp22343;
                                                {
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
                                                }
                                                return tmp29344;
                                            }
                                        }
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp346 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp348 = (($fn347) expr329->$class->vtable[2])(expr329);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp346, ((panda$core$Int64) { 36 }), $tmp348, &$s349);
                                formattable345 = $tmp346;
                                org$pandalanguage$pandac$ASTNode* $tmp351 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp353 = (($fn352) expr329->$class->vtable[2])(expr329);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp354, ((panda$core$Int64) { 89 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp351, ((panda$core$Int64) { 2 }), $tmp353, expr329, $tmp354, formattable345);
                                cast350 = $tmp351;
                                org$pandalanguage$pandac$ASTNode* $tmp356 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp358 = (($fn357) expr329->$class->vtable[2])(expr329);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp356, ((panda$core$Int64) { 13 }), $tmp358, cast350, &$s359);
                                dot355 = $tmp356;
                                panda$collections$Array* $tmp361 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp361);
                                callArgs360 = $tmp361;
                                org$pandalanguage$pandac$ASTNode* $tmp362 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp362, ((panda$core$Int64) { 34 }), start262.position, format335);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs360, ((panda$core$Object*) $tmp362));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr329));
                                    org$pandalanguage$pandac$ASTNode* $tmp363 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$Position $tmp365 = (($fn364) expr329->$class->vtable[2])(expr329);
                                    panda$collections$ImmutableArray* $tmp366 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs360);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp363, ((panda$core$Int64) { 6 }), $tmp365, dot355, $tmp366);
                                    expr329 = $tmp363;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast350));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot355));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs360));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable345));
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp367, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp369 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp367, &$s368);
                            if (((panda$core$Bit) { !$tmp369.nonnull }).value) {
                            {
                                {
                                    tmp20370 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format335));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align334));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr329));
                                    }
                                    {
                                        tmp23371 = tmp20370;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText300));
                                        {
                                            tmp30372 = tmp23371;
                                            {
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
                                            }
                                            return tmp30372;
                                        }
                                    }
                                }
                            }
                            }
                            if (((panda$core$Bit) { align334 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format335 == NULL }).value) {
                                {
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr329));
                                        org$pandalanguage$pandac$ASTNode* $tmp373 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr329);
                                        expr329 = $tmp373;
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp375 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp377 = (($fn376) expr329->$class->vtable[2])(expr329);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp375, ((panda$core$Int64) { 36 }), $tmp377, &$s378);
                                pandaType374 = $tmp375;
                                org$pandalanguage$pandac$ASTNode* $tmp380 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp382 = (($fn381) expr329->$class->vtable[2])(expr329);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp380, ((panda$core$Int64) { 13 }), $tmp382, pandaType374, &$s383);
                                callTarget379 = $tmp380;
                                panda$collections$Array* $tmp385 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp385);
                                callArgs384 = $tmp385;
                                panda$collections$Array$add$panda$collections$Array$T(callArgs384, ((panda$core$Object*) expr329));
                                org$pandalanguage$pandac$ASTNode* $tmp386 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp386, ((panda$core$Int64) { 34 }), start262.position, align334);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs384, ((panda$core$Object*) $tmp386));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr329));
                                    org$pandalanguage$pandac$ASTNode* $tmp387 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$Position $tmp389 = (($fn388) expr329->$class->vtable[2])(expr329);
                                    panda$collections$ImmutableArray* $tmp390 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs384);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp387, ((panda$core$Int64) { 6 }), $tmp389, callTarget379, $tmp390);
                                    expr329 = $tmp387;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget379));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType374));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs384));
                                }
                            }
                            }
                            panda$core$String* $tmp392 = panda$core$MutableString$finish$R$panda$core$String(chunk275);
                            text391 = $tmp392;
                            {
                                panda$core$MutableString* $tmp393 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                panda$core$MutableString$init($tmp393);
                                chunk275 = $tmp393;
                            }
                            panda$core$Bit $tmp396 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text391, &$s395);
                            bool $tmp394 = $tmp396.value;
                            if ($tmp394) goto $l397;
                            $tmp394 = ((panda$core$Bit) { result274 != NULL }).value;
                            $l397:;
                            panda$core$Bit $tmp398 = { $tmp394 };
                            if ($tmp398.value) {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                    org$pandalanguage$pandac$ASTNode* $tmp399 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp399, ((panda$core$Int64) { 34 }), start262.position, text391);
                                    org$pandalanguage$pandac$ASTNode* $tmp400 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result274, $tmp399);
                                    result274 = $tmp400;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                    org$pandalanguage$pandac$ASTNode* $tmp401 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result274, expr329);
                                    result274 = $tmp401;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                    org$pandalanguage$pandac$ASTNode* $tmp402 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr329);
                                    result274 = $tmp402;
                                }
                            }
                            }
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text391));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format335));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align334));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr329));
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token279, &$s403);
                        {
                            tmp24404 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText300));
                            {
                                tmp31405 = tmp24404;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
                                }
                                return tmp31405;
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
                panda$core$String$Index $tmp407 = panda$core$String$start$R$panda$core$String$Index(escapeText300);
                panda$core$String$Index $tmp408 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText300, $tmp407);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp406, ((panda$core$String$Index$nullable) { $tmp408, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp409 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText300, $tmp406);
                panda$core$MutableString$append$panda$core$String(chunk275, $tmp409);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText300));
            }
            }
            else {
            {
                panda$core$String* $tmp410 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token279);
                panda$core$MutableString$append$panda$core$String(chunk275, $tmp410);
            }
            }
            }
            }
        }
    }
    }
    $l278:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp412 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp413 = panda$core$MutableString$finish$R$panda$core$String(chunk275);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp412, ((panda$core$Int64) { 34 }), start262.position, $tmp413);
        org$pandalanguage$pandac$ASTNode* $tmp414 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result274, $tmp412);
        tmp32411 = $tmp414;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk275));
        }
        return tmp32411;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t415;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9417;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp428;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp434;
    org$pandalanguage$pandac$ASTNode* result458;
    org$pandalanguage$pandac$ASTNode* tmp33460;
    org$pandalanguage$pandac$parser$Token$Kind $tmp461;
    org$pandalanguage$pandac$ASTNode* tmp34464;
    org$pandalanguage$pandac$ASTNode* tmp35465;
    org$pandalanguage$pandac$parser$Token $tmp416 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t415 = $tmp416;
    {
        $match$362_9417 = t415.kind;
        panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp418.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp419 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp420 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t415);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp419, ((panda$core$Int64) { 18 }), t415.position, $tmp420);
            return $tmp419;
        }
        }
        else {
        panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp421.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp422 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp423 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t415);
            panda$core$UInt64$nullable $tmp424 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp423);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp422, ((panda$core$Int64) { 20 }), t415.position, ((panda$core$UInt64) $tmp424.value));
            return $tmp422;
        }
        }
        else {
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp425.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp426 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp427 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t415);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp428, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp429 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp427, $tmp428);
            panda$core$UInt64$nullable $tmp430 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp429, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp426, ((panda$core$Int64) { 20 }), t415.position, ((panda$core$UInt64) $tmp430.value));
            return $tmp426;
        }
        }
        else {
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp431.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp432 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp433 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t415);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp434, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp435 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp433, $tmp434);
            panda$core$UInt64$nullable $tmp436 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp435, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp432, ((panda$core$Int64) { 20 }), t415.position, ((panda$core$UInt64) $tmp436.value));
            return $tmp432;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp438 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp439 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t415);
            panda$core$Real64$nullable $tmp440 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp439);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp438, ((panda$core$Int64) { 31 }), t415.position, ((panda$core$Real64) $tmp440.value));
            return $tmp438;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp442 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp442, ((panda$core$Int64) { 33 }), t415.position);
            return $tmp442;
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp444 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp444, ((panda$core$Int64) { 35 }), t415.position);
            return $tmp444;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp446 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp446, ((panda$core$Int64) { 25 }), t415.position);
            return $tmp446;
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp447.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp448 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp448, ((panda$core$Int64) { 3 }), t415.position, ((panda$core$Bit) { true }));
            return $tmp448;
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp449.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp450 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp450, ((panda$core$Int64) { 3 }), t415.position, ((panda$core$Bit) { false }));
            return $tmp450;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp451 = $tmp452.value;
        if ($tmp451) goto $l453;
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp451 = $tmp454.value;
        $l453:;
        panda$core$Bit $tmp455 = { $tmp451 };
        if ($tmp455.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t415);
            org$pandalanguage$pandac$ASTNode* $tmp456 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp456;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9417.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp459 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result458 = $tmp459;
            if (((panda$core$Bit) { result458 == NULL }).value) {
            {
                {
                    tmp33460 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result458));
                    return tmp33460;
                }
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp461, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp463 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp461, &$s462);
            if (((panda$core$Bit) { !$tmp463.nonnull }).value) {
            {
                {
                    tmp34464 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result458));
                    return tmp34464;
                }
            }
            }
            {
                tmp35465 = result458;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result458));
                return tmp35465;
            }
        }
        }
        else {
        {
            panda$core$String* $tmp467 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t415);
            panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s466, $tmp467);
            panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, &$s469);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t415, $tmp470);
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
    org$pandalanguage$pandac$ASTNode* $match$403_9471;
    panda$core$String* text473;
    org$pandalanguage$pandac$ASTNode* base476;
    panda$core$String* field478;
    panda$core$String* result480;
    panda$core$String* tmp36485;
    {
        $match$403_9471 = p_expr;
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9471->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp472.value) {
        {
            panda$core$String** $tmp474 = ((panda$core$String**) ((char*) $match$403_9471->$data + 16));
            text473 = *$tmp474;
            return text473;
        }
        }
        else {
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9471->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp475.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp477 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9471->$data + 16));
            base476 = *$tmp477;
            panda$core$String** $tmp479 = ((panda$core$String**) ((char*) $match$403_9471->$data + 24));
            field478 = *$tmp479;
            panda$core$String* $tmp481 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base476);
            result480 = $tmp481;
            if (((panda$core$Bit) { result480 != NULL }).value) {
            {
                {
                    panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s482, field478);
                    panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result480, $tmp483);
                    result480 = $tmp484;
                }
            }
            }
            {
                tmp36485 = result480;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result480));
                return tmp36485;
            }
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
    org$pandalanguage$pandac$parser$Token$Kind $tmp604;
    org$pandalanguage$pandac$parser$Token$nullable id606;
    org$pandalanguage$pandac$parser$Token$Kind $tmp607;
    org$pandalanguage$pandac$ASTNode* tmp37610;
    panda$core$Char8 $tmp611;
    panda$core$String* finalName613;
    org$pandalanguage$pandac$ASTNode* result615;
    panda$collections$Array* children619;
    org$pandalanguage$pandac$ASTNode* t621;
    org$pandalanguage$pandac$ASTNode* tmp38623;
    org$pandalanguage$pandac$ASTNode* tmp44624;
    org$pandalanguage$pandac$ASTNode* tmp39625;
    org$pandalanguage$pandac$ASTNode* tmp45626;
    org$pandalanguage$pandac$parser$Token$Kind $tmp629;
    org$pandalanguage$pandac$ASTNode* tmp40632;
    org$pandalanguage$pandac$ASTNode* tmp46633;
    org$pandalanguage$pandac$ASTNode* tmp41634;
    org$pandalanguage$pandac$ASTNode* tmp47635;
    org$pandalanguage$pandac$parser$Token$Kind $tmp636;
    org$pandalanguage$pandac$ASTNode* tmp42639;
    org$pandalanguage$pandac$ASTNode* tmp48640;
    org$pandalanguage$pandac$ASTNode* tmp43641;
    org$pandalanguage$pandac$ASTNode* tmp49642;
    org$pandalanguage$pandac$parser$Token$Kind $tmp645;
    org$pandalanguage$pandac$ASTNode* tmp50648;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp596, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp598 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp596, &$s597);
    start595 = $tmp598;
    if (((panda$core$Bit) { !start595.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp600 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp601 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start595.value));
    panda$core$MutableString$init$panda$core$String($tmp600, $tmp601);
    name599 = $tmp600;
    $l602:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp604, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp605 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp604);
    if (!((panda$core$Bit) { $tmp605.nonnull }).value) goto $l603;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp607, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp609 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp607, &$s608);
        id606 = $tmp609;
        if (((panda$core$Bit) { !id606.nonnull }).value) {
        {
            {
                tmp37610 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
                return tmp37610;
            }
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp611, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name599, $tmp611);
        panda$core$String* $tmp612 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id606.value));
        panda$core$MutableString$append$panda$core$String(name599, $tmp612);
    }
    goto $l602;
    $l603:;
    panda$core$String* $tmp614 = panda$core$MutableString$finish$R$panda$core$String(name599);
    finalName613 = $tmp614;
    org$pandalanguage$pandac$ASTNode* $tmp616 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp616, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start595.value).position, finalName613);
    result615 = $tmp616;
    org$pandalanguage$pandac$parser$Token $tmp617 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp617.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp618.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp620 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp620);
        children619 = $tmp620;
        panda$collections$Array$add$panda$collections$Array$T(children619, ((panda$core$Object*) result615));
        org$pandalanguage$pandac$ASTNode* $tmp622 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t621 = $tmp622;
        if (((panda$core$Bit) { t621 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp38623 = result615;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children619));
                    }
                    {
                        tmp44624 = tmp38623;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName613));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
                        }
                        return tmp44624;
                    }
                }
            }
            }
            {
                tmp39625 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children619));
                }
                {
                    tmp45626 = tmp39625;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName613));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
                    }
                    return tmp45626;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children619, ((panda$core$Object*) t621));
        $l627:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp629, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp630 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp629);
        if (!((panda$core$Bit) { $tmp630.nonnull }).value) goto $l628;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
                org$pandalanguage$pandac$ASTNode* $tmp631 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                t621 = $tmp631;
            }
            if (((panda$core$Bit) { t621 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    {
                        tmp40632 = result615;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children619));
                        }
                        {
                            tmp46633 = tmp40632;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName613));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
                            }
                            return tmp46633;
                        }
                    }
                }
                }
                {
                    tmp41634 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children619));
                    }
                    {
                        tmp47635 = tmp41634;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName613));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
                        }
                        return tmp47635;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children619, ((panda$core$Object*) t621));
        }
        goto $l627;
        $l628:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp636, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp638 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp636, &$s637);
        if (((panda$core$Bit) { !$tmp638.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp42639 = result615;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children619));
                    }
                    {
                        tmp48640 = tmp42639;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName613));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
                        }
                        return tmp48640;
                    }
                }
            }
            }
            {
                tmp43641 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children619));
                }
                {
                    tmp49642 = tmp43641;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName613));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
                    }
                    return tmp49642;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
            org$pandalanguage$pandac$ASTNode* $tmp643 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp644 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children619);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp643, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start595.value).position, finalName613, $tmp644);
            result615 = $tmp643;
        }
        org$pandalanguage$pandac$parser$Parser$accept(self);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t621));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children619));
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp645, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp646 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp645);
    if (((panda$core$Bit) { $tmp646.nonnull }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
            org$pandalanguage$pandac$ASTNode* $tmp647 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp647, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start595.value).position, result615);
            result615 = $tmp647;
        }
    }
    }
    {
        tmp50648 = result615;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result615));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name599));
        }
        return tmp50648;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result649;
    org$pandalanguage$pandac$ASTNode* tmp51651;
    org$pandalanguage$pandac$parser$Token token654;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13656;
    panda$collections$Array* args659;
    org$pandalanguage$pandac$parser$Token$Kind $tmp661;
    org$pandalanguage$pandac$ASTNode* expr663;
    org$pandalanguage$pandac$ASTNode* tmp52666;
    org$pandalanguage$pandac$ASTNode* tmp55667;
    org$pandalanguage$pandac$ASTNode* tmp71668;
    org$pandalanguage$pandac$parser$Token$Kind $tmp671;
    org$pandalanguage$pandac$ASTNode* tmp53675;
    org$pandalanguage$pandac$ASTNode* tmp56676;
    org$pandalanguage$pandac$ASTNode* tmp72677;
    org$pandalanguage$pandac$parser$Token$Kind $tmp678;
    org$pandalanguage$pandac$ASTNode* tmp54682;
    org$pandalanguage$pandac$ASTNode* tmp57683;
    org$pandalanguage$pandac$ASTNode* tmp73684;
    org$pandalanguage$pandac$ASTNode* arg689;
    org$pandalanguage$pandac$ASTNode* tmp58691;
    org$pandalanguage$pandac$ASTNode* tmp74692;
    org$pandalanguage$pandac$parser$Token$Kind $tmp693;
    org$pandalanguage$pandac$ASTNode* tmp59696;
    org$pandalanguage$pandac$ASTNode* tmp75697;
    org$pandalanguage$pandac$parser$Token$Kind $tmp699;
    panda$core$String* name701;
    org$pandalanguage$pandac$parser$Token$Kind $tmp702;
    org$pandalanguage$pandac$ASTNode* tmp60706;
    org$pandalanguage$pandac$ASTNode* tmp76707;
    org$pandalanguage$pandac$ASTNode* target710;
    org$pandalanguage$pandac$ASTNode* tmp61712;
    org$pandalanguage$pandac$ASTNode* tmp77713;
    org$pandalanguage$pandac$parser$Token$Kind $tmp715;
    panda$core$String* name717;
    panda$core$MutableString* finalName719;
    panda$core$Char8 $tmp721;
    panda$collections$Array* types722;
    org$pandalanguage$pandac$ASTNode* t727;
    org$pandalanguage$pandac$ASTNode* tmp62729;
    org$pandalanguage$pandac$ASTNode* tmp66730;
    org$pandalanguage$pandac$ASTNode* tmp78731;
    org$pandalanguage$pandac$parser$Token$Kind $tmp734;
    org$pandalanguage$pandac$ASTNode* tmp63737;
    org$pandalanguage$pandac$ASTNode* tmp67738;
    org$pandalanguage$pandac$ASTNode* tmp79739;
    org$pandalanguage$pandac$parser$Token$Kind $tmp741;
    org$pandalanguage$pandac$ASTNode* tmp64744;
    org$pandalanguage$pandac$ASTNode* tmp68745;
    org$pandalanguage$pandac$ASTNode* tmp80746;
    panda$core$Char8 $tmp747;
    panda$core$Bit shouldAccept748;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29750;
    org$pandalanguage$pandac$ASTNode* tmp65770;
    org$pandalanguage$pandac$ASTNode* tmp69771;
    org$pandalanguage$pandac$ASTNode* tmp81772;
    org$pandalanguage$pandac$ASTNode* tmp70773;
    org$pandalanguage$pandac$ASTNode* tmp82774;
    org$pandalanguage$pandac$ASTNode* tmp83775;
    org$pandalanguage$pandac$ASTNode* $tmp650 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result649 = $tmp650;
    if (((panda$core$Bit) { result649 == NULL }).value) {
    {
        {
            tmp51651 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
            return tmp51651;
        }
    }
    }
    $l652:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp655 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token654 = $tmp655;
        {
            $match$540_13656 = token654.kind;
            panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13656.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp657.value) {
            {
                panda$core$Bit$wrapper* $tmp658;
                $tmp658 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                $tmp658->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp658));
                panda$collections$Array* $tmp660 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp660);
                args659 = $tmp660;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp661, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp662 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp661);
                if (((panda$core$Bit) { !$tmp662.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp664 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr663 = $tmp664;
                    if (((panda$core$Bit) { expr663 == NULL }).value) {
                    {
                        panda$core$Object* $tmp665 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp52666 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr663));
                            {
                                tmp55667 = tmp52666;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args659));
                                {
                                    tmp71668 = tmp55667;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                    return tmp71668;
                                }
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args659, ((panda$core$Object*) expr663));
                    $l669:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp671, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp672 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp671);
                    if (!((panda$core$Bit) { $tmp672.nonnull }).value) goto $l670;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr663));
                            org$pandalanguage$pandac$ASTNode* $tmp673 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr663 = $tmp673;
                        }
                        if (((panda$core$Bit) { expr663 == NULL }).value) {
                        {
                            panda$core$Object* $tmp674 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            {
                                tmp53675 = NULL;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr663));
                                {
                                    tmp56676 = tmp53675;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args659));
                                    {
                                        tmp72677 = tmp56676;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                        return tmp72677;
                                    }
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args659, ((panda$core$Object*) expr663));
                    }
                    goto $l669;
                    $l670:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp678, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp680 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp678, &$s679);
                    if (((panda$core$Bit) { !$tmp680.nonnull }).value) {
                    {
                        panda$core$Object* $tmp681 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp54682 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr663));
                            {
                                tmp57683 = tmp54682;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args659));
                                {
                                    tmp73684 = tmp57683;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                    return tmp73684;
                                }
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr663));
                }
                }
                panda$core$Object* $tmp685 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                    org$pandalanguage$pandac$ASTNode* $tmp686 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp687 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args659);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp686, ((panda$core$Int64) { 6 }), token654.position, result649, $tmp687);
                    result649 = $tmp686;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args659));
            }
            }
            else {
            panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13656.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp688.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp690 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                arg689 = $tmp690;
                if (((panda$core$Bit) { arg689 == NULL }).value) {
                {
                    {
                        tmp58691 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg689));
                        {
                            tmp74692 = tmp58691;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                            return tmp74692;
                        }
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp693, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp695 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp693, &$s694);
                if (((panda$core$Bit) { !$tmp695.nonnull }).value) {
                {
                    {
                        tmp59696 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg689));
                        {
                            tmp75697 = tmp59696;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                            return tmp75697;
                        }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                    org$pandalanguage$pandac$ASTNode* $tmp698 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp699, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp698, ((panda$core$Int64) { 2 }), token654.position, result649, $tmp699, arg689);
                    result649 = $tmp698;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg689));
            }
            }
            else {
            panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13656.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp700.value) {
            {
                memset(&name701, 0, sizeof(name701));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp702, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp703 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp702);
                if (((panda$core$Bit) { $tmp703.nonnull }).value) {
                {
                    {
                        name701 = &$s704;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp705 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                        name701 = $tmp705;
                    }
                    if (((panda$core$Bit) { name701 == NULL }).value) {
                    {
                        {
                            tmp60706 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name701));
                            {
                                tmp76707 = tmp60706;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                return tmp76707;
                            }
                        }
                    }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                    org$pandalanguage$pandac$ASTNode* $tmp708 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp708, ((panda$core$Int64) { 13 }), token654.position, result649, name701);
                    result649 = $tmp708;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name701));
            }
            }
            else {
            panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13656.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp709.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp711 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target710 = $tmp711;
                if (((panda$core$Bit) { target710 == NULL }).value) {
                {
                    {
                        tmp61712 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target710));
                        {
                            tmp77713 = tmp61712;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                            return tmp77713;
                        }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                    org$pandalanguage$pandac$ASTNode* $tmp714 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp715, ((panda$core$Int64) { 89 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp714, ((panda$core$Int64) { 2 }), token654.position, result649, $tmp715, target710);
                    result649 = $tmp714;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target710));
            }
            }
            else {
            panda$core$Bit $tmp716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13656.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp716.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token654);
                panda$core$String* $tmp718 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result649);
                name717 = $tmp718;
                if (((panda$core$Bit) { name717 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp720 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                    panda$core$MutableString$init$panda$core$String($tmp720, name717);
                    finalName719 = $tmp720;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp721, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName719, $tmp721);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp723 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp723);
                    types722 = $tmp723;
                    org$pandalanguage$pandac$ASTNode* $tmp724 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp726 = (($fn725) result649->$class->vtable[2])(result649);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp724, ((panda$core$Int64) { 36 }), $tmp726, name717);
                    panda$collections$Array$add$panda$collections$Array$T(types722, ((panda$core$Object*) $tmp724));
                    org$pandalanguage$pandac$ASTNode* $tmp728 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t727 = $tmp728;
                    if (((panda$core$Bit) { t727 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp62729 = result649;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types722));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t727));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName719));
                            }
                            {
                                tmp66730 = tmp62729;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name717));
                                {
                                    tmp78731 = tmp66730;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                    return tmp78731;
                                }
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types722, ((panda$core$Object*) t727));
                    panda$core$MutableString$append$panda$core$Object(finalName719, ((panda$core$Object*) t727));
                    $l732:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp734, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp735 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp734);
                    if (!((panda$core$Bit) { $tmp735.nonnull }).value) goto $l733;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t727));
                            org$pandalanguage$pandac$ASTNode* $tmp736 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                            t727 = $tmp736;
                        }
                        if (((panda$core$Bit) { t727 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            {
                                tmp63737 = result649;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types722));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t727));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName719));
                                }
                                {
                                    tmp67738 = tmp63737;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name717));
                                    {
                                        tmp79739 = tmp67738;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                        return tmp79739;
                                    }
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types722, ((panda$core$Object*) t727));
                        panda$core$MutableString$append$panda$core$String(finalName719, &$s740);
                        panda$core$MutableString$append$panda$core$Object(finalName719, ((panda$core$Object*) t727));
                    }
                    goto $l732;
                    $l733:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp741, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp743 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp741, &$s742);
                    if (((panda$core$Bit) { !$tmp743.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp64744 = result649;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types722));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t727));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName719));
                            }
                            {
                                tmp68745 = tmp64744;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name717));
                                {
                                    tmp80746 = tmp68745;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                    return tmp80746;
                                }
                            }
                        }
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp747, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName719, $tmp747);
                    memset(&shouldAccept748, 0, sizeof(shouldAccept748));
                    panda$core$Object* $tmp749 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp749)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp751 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29750 = $tmp751.kind;
                            panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29750.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp754 = $tmp755.value;
                            if ($tmp754) goto $l756;
                            panda$core$Bit $tmp757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29750.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp754 = $tmp757.value;
                            $l756:;
                            panda$core$Bit $tmp758 = { $tmp754 };
                            bool $tmp753 = $tmp758.value;
                            if ($tmp753) goto $l759;
                            panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29750.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp753 = $tmp760.value;
                            $l759:;
                            panda$core$Bit $tmp761 = { $tmp753 };
                            bool $tmp752 = $tmp761.value;
                            if ($tmp752) goto $l762;
                            panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29750.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp752 = $tmp763.value;
                            $l762:;
                            panda$core$Bit $tmp764 = { $tmp752 };
                            if ($tmp764.value) {
                            {
                                shouldAccept748 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept748 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept748 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept748.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                            org$pandalanguage$pandac$ASTNode* $tmp765 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$Position $tmp767 = (($fn766) result649->$class->vtable[2])(result649);
                            panda$core$String* $tmp768 = panda$core$MutableString$finish$R$panda$core$String(finalName719);
                            panda$collections$ImmutableArray* $tmp769 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types722);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp765, ((panda$core$Int64) { 17 }), $tmp767, $tmp768, $tmp769);
                            result649 = $tmp765;
                        }
                        {
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types722));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t727));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName719));
                            }
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name717));
                                goto $l652;
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp65770 = result649;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types722));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t727));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName719));
                            }
                            {
                                tmp69771 = tmp65770;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name717));
                                {
                                    tmp81772 = tmp69771;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                                    return tmp81772;
                                }
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types722));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t727));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName719));
                    }
                }
                }
                {
                    tmp70773 = result649;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name717));
                    {
                        tmp82774 = tmp70773;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                        return tmp82774;
                    }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token654);
                {
                    tmp83775 = result649;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                    return tmp83775;
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
    $l653:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result776;
    org$pandalanguage$pandac$ASTNode* tmp84778;
    org$pandalanguage$pandac$parser$Token$nullable op781;
    org$pandalanguage$pandac$parser$Token$Kind $tmp782;
    org$pandalanguage$pandac$ASTNode* next784;
    org$pandalanguage$pandac$ASTNode* tmp85786;
    org$pandalanguage$pandac$ASTNode* tmp86787;
    org$pandalanguage$pandac$ASTNode* tmp87789;
    org$pandalanguage$pandac$ASTNode* $tmp777 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result776 = $tmp777;
    if (((panda$core$Bit) { result776 == NULL }).value) {
    {
        {
            tmp84778 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result776));
            return tmp84778;
        }
    }
    }
    $l779:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp782, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp783 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp782);
        op781 = $tmp783;
        if (((panda$core$Bit) { !op781.nonnull }).value) {
        {
            goto $l780;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp785 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next784 = $tmp785;
        if (((panda$core$Bit) { next784 == NULL }).value) {
        {
            {
                tmp85786 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next784));
                {
                    tmp86787 = tmp85786;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result776));
                    return tmp86787;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result776));
            org$pandalanguage$pandac$ASTNode* $tmp788 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp788, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op781.value).position, result776, ((org$pandalanguage$pandac$parser$Token) op781.value).kind, next784);
            result776 = $tmp788;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next784));
    }
    }
    $l780:;
    {
        tmp87789 = result776;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result776));
        return tmp87789;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op790;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9792;
    org$pandalanguage$pandac$ASTNode* base802;
    org$pandalanguage$pandac$ASTNode* tmp88804;
    org$pandalanguage$pandac$ASTNode* tmp89805;
    org$pandalanguage$pandac$parser$Token $tmp791 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op790 = $tmp791;
    {
        $match$709_9792 = op790.kind;
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9792.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp794 = $tmp795.value;
        if ($tmp794) goto $l796;
        panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9792.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp794 = $tmp797.value;
        $l796:;
        panda$core$Bit $tmp798 = { $tmp794 };
        bool $tmp793 = $tmp798.value;
        if ($tmp793) goto $l799;
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9792.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp793 = $tmp800.value;
        $l799:;
        panda$core$Bit $tmp801 = { $tmp793 };
        if ($tmp801.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp803 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base802 = $tmp803;
            if (((panda$core$Bit) { base802 == NULL }).value) {
            {
                {
                    tmp88804 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base802));
                    return tmp88804;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp806 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp806, ((panda$core$Int64) { 29 }), op790.position, op790.kind, base802);
                tmp89805 = $tmp806;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base802));
                return tmp89805;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op790);
            org$pandalanguage$pandac$ASTNode* $tmp807 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp807;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result808;
    org$pandalanguage$pandac$ASTNode* tmp90810;
    org$pandalanguage$pandac$parser$Token op813;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13815;
    org$pandalanguage$pandac$ASTNode* next841;
    org$pandalanguage$pandac$ASTNode* tmp91843;
    org$pandalanguage$pandac$ASTNode* tmp93844;
    org$pandalanguage$pandac$parser$Token nextToken847;
    org$pandalanguage$pandac$ASTNode* next850;
    org$pandalanguage$pandac$ASTNode* tmp92852;
    org$pandalanguage$pandac$ASTNode* tmp94853;
    org$pandalanguage$pandac$parser$Token$Kind $tmp855;
    org$pandalanguage$pandac$ASTNode* tmp95856;
    org$pandalanguage$pandac$ASTNode* tmp96857;
    org$pandalanguage$pandac$ASTNode* $tmp809 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result808 = $tmp809;
    if (((panda$core$Bit) { result808 == NULL }).value) {
    {
        {
            tmp90810 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
            return tmp90810;
        }
    }
    }
    $l811:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp814 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op813 = $tmp814;
        {
            $match$735_13815 = op813.kind;
            panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp821 = $tmp822.value;
            if ($tmp821) goto $l823;
            panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp821 = $tmp824.value;
            $l823:;
            panda$core$Bit $tmp825 = { $tmp821 };
            bool $tmp820 = $tmp825.value;
            if ($tmp820) goto $l826;
            panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp820 = $tmp827.value;
            $l826:;
            panda$core$Bit $tmp828 = { $tmp820 };
            bool $tmp819 = $tmp828.value;
            if ($tmp819) goto $l829;
            panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp819 = $tmp830.value;
            $l829:;
            panda$core$Bit $tmp831 = { $tmp819 };
            bool $tmp818 = $tmp831.value;
            if ($tmp818) goto $l832;
            panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp818 = $tmp833.value;
            $l832:;
            panda$core$Bit $tmp834 = { $tmp818 };
            bool $tmp817 = $tmp834.value;
            if ($tmp817) goto $l835;
            panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp817 = $tmp836.value;
            $l835:;
            panda$core$Bit $tmp837 = { $tmp817 };
            bool $tmp816 = $tmp837.value;
            if ($tmp816) goto $l838;
            panda$core$Bit $tmp839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp816 = $tmp839.value;
            $l838:;
            panda$core$Bit $tmp840 = { $tmp816 };
            if ($tmp840.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp842 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next841 = $tmp842;
                if (((panda$core$Bit) { next841 == NULL }).value) {
                {
                    {
                        tmp91843 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next841));
                        {
                            tmp93844 = tmp91843;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
                            return tmp93844;
                        }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
                    org$pandalanguage$pandac$ASTNode* $tmp845 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp845, ((panda$core$Int64) { 2 }), op813.position, result808, op813.kind, next841);
                    result808 = $tmp845;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next841));
            }
            }
            else {
            panda$core$Bit $tmp846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13815.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp846.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp848 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken847 = $tmp848;
                panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken847.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp849.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp851 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next850 = $tmp851;
                    if (((panda$core$Bit) { next850 == NULL }).value) {
                    {
                        {
                            tmp92852 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next850));
                            {
                                tmp94853 = tmp92852;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
                                return tmp94853;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
                        org$pandalanguage$pandac$ASTNode* $tmp854 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp855, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp854, ((panda$core$Int64) { 2 }), op813.position, result808, $tmp855, next850);
                        result808 = $tmp854;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next850));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken847);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op813);
                    {
                        tmp95856 = result808;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
                        return tmp95856;
                    }
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op813);
                {
                    tmp96857 = result808;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
                    return tmp96857;
                }
            }
            }
            }
        }
    }
    }
    $l812:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result808));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result858;
    org$pandalanguage$pandac$ASTNode* tmp97860;
    org$pandalanguage$pandac$parser$Token op863;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13865;
    org$pandalanguage$pandac$ASTNode* next875;
    org$pandalanguage$pandac$ASTNode* tmp98877;
    org$pandalanguage$pandac$ASTNode* tmp99878;
    org$pandalanguage$pandac$ASTNode* tmp100880;
    org$pandalanguage$pandac$ASTNode* $tmp859 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result858 = $tmp859;
    if (((panda$core$Bit) { result858 == NULL }).value) {
    {
        {
            tmp97860 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result858));
            return tmp97860;
        }
    }
    }
    $l861:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp864 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op863 = $tmp864;
        {
            $match$776_13865 = op863.kind;
            panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13865.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp867 = $tmp868.value;
            if ($tmp867) goto $l869;
            panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13865.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp867 = $tmp870.value;
            $l869:;
            panda$core$Bit $tmp871 = { $tmp867 };
            bool $tmp866 = $tmp871.value;
            if ($tmp866) goto $l872;
            panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13865.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp866 = $tmp873.value;
            $l872:;
            panda$core$Bit $tmp874 = { $tmp866 };
            if ($tmp874.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp876 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next875 = $tmp876;
                if (((panda$core$Bit) { next875 == NULL }).value) {
                {
                    {
                        tmp98877 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next875));
                        {
                            tmp99878 = tmp98877;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result858));
                            return tmp99878;
                        }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result858));
                    org$pandalanguage$pandac$ASTNode* $tmp879 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp879, ((panda$core$Int64) { 2 }), op863.position, result858, op863.kind, next875);
                    result858 = $tmp879;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next875));
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op863);
                {
                    tmp100880 = result858;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result858));
                    return tmp100880;
                }
            }
            }
        }
    }
    }
    $l862:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result858));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result881;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9882;
    org$pandalanguage$pandac$ASTNode* tmp101890;
    org$pandalanguage$pandac$parser$Token op891;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9893;
    org$pandalanguage$pandac$parser$Token next899;
    org$pandalanguage$pandac$ASTNode* right901;
    org$pandalanguage$pandac$ASTNode* tmp102912;
    org$pandalanguage$pandac$ASTNode* tmp105913;
    org$pandalanguage$pandac$ASTNode* step914;
    org$pandalanguage$pandac$parser$Token$Kind $tmp915;
    org$pandalanguage$pandac$ASTNode* tmp103918;
    org$pandalanguage$pandac$ASTNode* tmp106919;
    org$pandalanguage$pandac$ASTNode* tmp104920;
    org$pandalanguage$pandac$ASTNode* tmp107923;
    org$pandalanguage$pandac$ASTNode* tmp108924;
    memset(&result881, 0, sizeof(result881));
    {
        org$pandalanguage$pandac$parser$Token $tmp883 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9882 = $tmp883.kind;
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9882.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp884 = $tmp885.value;
        if ($tmp884) goto $l886;
        panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9882.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp884 = $tmp887.value;
        $l886:;
        panda$core$Bit $tmp888 = { $tmp884 };
        if ($tmp888.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
                result881 = NULL;
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
                org$pandalanguage$pandac$ASTNode* $tmp889 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                result881 = $tmp889;
            }
            if (((panda$core$Bit) { result881 == NULL }).value) {
            {
                {
                    tmp101890 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
                    return tmp101890;
                }
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp892 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op891 = $tmp892;
    {
        $match$806_9893 = op891.kind;
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9893.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp894 = $tmp895.value;
        if ($tmp894) goto $l896;
        panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9893.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp894 = $tmp897.value;
        $l896:;
        panda$core$Bit $tmp898 = { $tmp894 };
        if ($tmp898.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp900 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next899 = $tmp900;
            memset(&right901, 0, sizeof(right901));
            panda$core$Bit $tmp904 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next899.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp903 = $tmp904.value;
            if (!$tmp903) goto $l905;
            panda$core$Bit $tmp906 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next899.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp903 = $tmp906.value;
            $l905:;
            panda$core$Bit $tmp907 = { $tmp903 };
            bool $tmp902 = $tmp907.value;
            if (!$tmp902) goto $l908;
            panda$core$Bit $tmp909 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next899.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp902 = $tmp909.value;
            $l908:;
            panda$core$Bit $tmp910 = { $tmp902 };
            if ($tmp910.value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp911 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    right901 = $tmp911;
                }
                if (((panda$core$Bit) { right901 == NULL }).value) {
                {
                    {
                        tmp102912 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right901));
                        {
                            tmp105913 = tmp102912;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
                            return tmp105913;
                        }
                    }
                }
                }
            }
            }
            else {
            {
                {
                    right901 = NULL;
                }
            }
            }
            memset(&step914, 0, sizeof(step914));
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp915, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp916 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp915);
            if (((panda$core$Bit) { $tmp916.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp917 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    step914 = $tmp917;
                }
                if (((panda$core$Bit) { step914 == NULL }).value) {
                {
                    {
                        tmp103918 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step914));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right901));
                        }
                        {
                            tmp106919 = tmp103918;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
                            return tmp106919;
                        }
                    }
                }
                }
            }
            }
            else {
            {
                {
                    step914 = NULL;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp921 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op891.kind.$rawValue, ((panda$core$Int64) { 96 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp921, ((panda$core$Int64) { 30 }), op891.position, result881, right901, $tmp922, step914);
                tmp104920 = $tmp921;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step914));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right901));
                }
                {
                    tmp107923 = tmp104920;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
                    return tmp107923;
                }
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op891);
            {
                tmp108924 = result881;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
                return tmp108924;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result925;
    org$pandalanguage$pandac$ASTNode* tmp109927;
    org$pandalanguage$pandac$parser$Token op930;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13932;
    org$pandalanguage$pandac$ASTNode* next962;
    org$pandalanguage$pandac$ASTNode* tmp110964;
    org$pandalanguage$pandac$ASTNode* tmp111965;
    org$pandalanguage$pandac$ASTNode* tmp112967;
    org$pandalanguage$pandac$ASTNode* $tmp926 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result925 = $tmp926;
    if (((panda$core$Bit) { result925 == NULL }).value) {
    {
        {
            tmp109927 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result925));
            return tmp109927;
        }
    }
    }
    $l928:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp931 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op930 = $tmp931;
        {
            $match$849_13932 = op930.kind;
            panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp939 = $tmp940.value;
            if ($tmp939) goto $l941;
            panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp939 = $tmp942.value;
            $l941:;
            panda$core$Bit $tmp943 = { $tmp939 };
            bool $tmp938 = $tmp943.value;
            if ($tmp938) goto $l944;
            panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp938 = $tmp945.value;
            $l944:;
            panda$core$Bit $tmp946 = { $tmp938 };
            bool $tmp937 = $tmp946.value;
            if ($tmp937) goto $l947;
            panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp937 = $tmp948.value;
            $l947:;
            panda$core$Bit $tmp949 = { $tmp937 };
            bool $tmp936 = $tmp949.value;
            if ($tmp936) goto $l950;
            panda$core$Bit $tmp951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp936 = $tmp951.value;
            $l950:;
            panda$core$Bit $tmp952 = { $tmp936 };
            bool $tmp935 = $tmp952.value;
            if ($tmp935) goto $l953;
            panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp935 = $tmp954.value;
            $l953:;
            panda$core$Bit $tmp955 = { $tmp935 };
            bool $tmp934 = $tmp955.value;
            if ($tmp934) goto $l956;
            panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp934 = $tmp957.value;
            $l956:;
            panda$core$Bit $tmp958 = { $tmp934 };
            bool $tmp933 = $tmp958.value;
            if ($tmp933) goto $l959;
            panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13932.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp933 = $tmp960.value;
            $l959:;
            panda$core$Bit $tmp961 = { $tmp933 };
            if ($tmp961.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp963 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next962 = $tmp963;
                if (((panda$core$Bit) { next962 == NULL }).value) {
                {
                    {
                        tmp110964 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next962));
                        {
                            tmp111965 = tmp110964;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result925));
                            return tmp111965;
                        }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result925));
                    org$pandalanguage$pandac$ASTNode* $tmp966 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp966, ((panda$core$Int64) { 2 }), op930.position, result925, op930.kind, next962);
                    result925 = $tmp966;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next962));
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op930);
                {
                    tmp112967 = result925;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result925));
                    return tmp112967;
                }
            }
            }
        }
    }
    }
    $l929:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result925));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result968;
    org$pandalanguage$pandac$ASTNode* tmp113970;
    org$pandalanguage$pandac$parser$Token op973;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_13975;
    org$pandalanguage$pandac$ASTNode* next981;
    org$pandalanguage$pandac$ASTNode* tmp114983;
    org$pandalanguage$pandac$ASTNode* tmp115984;
    org$pandalanguage$pandac$ASTNode* tmp116986;
    org$pandalanguage$pandac$ASTNode* $tmp969 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result968 = $tmp969;
    if (((panda$core$Bit) { result968 == NULL }).value) {
    {
        {
            tmp113970 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
            return tmp113970;
        }
    }
    }
    $l971:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp974 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op973 = $tmp974;
        {
            $match$880_13975 = op973.kind;
            panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13975.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp976 = $tmp977.value;
            if ($tmp976) goto $l978;
            panda$core$Bit $tmp979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13975.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp976 = $tmp979.value;
            $l978:;
            panda$core$Bit $tmp980 = { $tmp976 };
            if ($tmp980.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp982 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next981 = $tmp982;
                if (((panda$core$Bit) { next981 == NULL }).value) {
                {
                    {
                        tmp114983 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next981));
                        {
                            tmp115984 = tmp114983;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
                            return tmp115984;
                        }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
                    org$pandalanguage$pandac$ASTNode* $tmp985 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp985, ((panda$core$Int64) { 2 }), op973.position, result968, op973.kind, next981);
                    result968 = $tmp985;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next981));
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op973);
                {
                    tmp116986 = result968;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
                    return tmp116986;
                }
            }
            }
        }
    }
    }
    $l972:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result968));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result987;
    org$pandalanguage$pandac$ASTNode* tmp117989;
    org$pandalanguage$pandac$parser$Token$nullable op992;
    org$pandalanguage$pandac$parser$Token$Kind $tmp993;
    org$pandalanguage$pandac$ASTNode* next995;
    org$pandalanguage$pandac$ASTNode* tmp118997;
    org$pandalanguage$pandac$ASTNode* tmp119998;
    org$pandalanguage$pandac$ASTNode* tmp1201000;
    org$pandalanguage$pandac$ASTNode* $tmp988 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result987 = $tmp988;
    if (((panda$core$Bit) { result987 == NULL }).value) {
    {
        {
            tmp117989 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result987));
            return tmp117989;
        }
    }
    }
    $l990:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp993, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp994 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp993);
        op992 = $tmp994;
        if (((panda$core$Bit) { !op992.nonnull }).value) {
        {
            goto $l991;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp996 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next995 = $tmp996;
        if (((panda$core$Bit) { next995 == NULL }).value) {
        {
            {
                tmp118997 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next995));
                {
                    tmp119998 = tmp118997;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result987));
                    return tmp119998;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result987));
            org$pandalanguage$pandac$ASTNode* $tmp999 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp999, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op992.value).position, result987, ((org$pandalanguage$pandac$parser$Token) op992.value).kind, next995);
            result987 = $tmp999;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next995));
    }
    }
    $l991:;
    {
        tmp1201000 = result987;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result987));
        return tmp1201000;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1001;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1002;
    org$pandalanguage$pandac$ASTNode* test1005;
    org$pandalanguage$pandac$ASTNode* tmp1211007;
    panda$collections$ImmutableArray* ifTrue1008;
    org$pandalanguage$pandac$ASTNode* tmp1221010;
    org$pandalanguage$pandac$ASTNode* ifFalse1011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1012;
    org$pandalanguage$pandac$ASTNode* tmp1231017;
    org$pandalanguage$pandac$ASTNode* tmp1241019;
    org$pandalanguage$pandac$ASTNode* tmp1251020;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1002, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1002, &$s1003);
    start1001 = $tmp1004;
    if (((panda$core$Bit) { !start1001.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1006 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1005 = $tmp1006;
    if (((panda$core$Bit) { test1005 == NULL }).value) {
    {
        {
            tmp1211007 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1005));
            return tmp1211007;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1009 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    ifTrue1008 = $tmp1009;
    if (((panda$core$Bit) { ifTrue1008 == NULL }).value) {
    {
        {
            tmp1221010 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1008));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1005));
            }
            return tmp1221010;
        }
    }
    }
    memset(&ifFalse1011, 0, sizeof(ifFalse1011));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1012, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1013 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1012);
    if (((panda$core$Bit) { $tmp1013.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1014 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1014.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1015.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1011));
                org$pandalanguage$pandac$ASTNode* $tmp1016 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1011 = $tmp1016;
            }
            if (((panda$core$Bit) { ifFalse1011 == NULL }).value) {
            {
                {
                    tmp1231017 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1008));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1005));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1011));
                    }
                    return tmp1231017;
                }
            }
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1011));
                org$pandalanguage$pandac$ASTNode* $tmp1018 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1011 = $tmp1018;
            }
            if (((panda$core$Bit) { ifFalse1011 == NULL }).value) {
            {
                {
                    tmp1241019 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1008));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1005));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1011));
                    }
                    return tmp1241019;
                }
            }
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1011));
            ifFalse1011 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1021 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1021, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1001.value).position, test1005, ifTrue1008, ifFalse1011);
        tmp1251020 = $tmp1021;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1008));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1005));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1011));
        }
        return tmp1251020;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1022;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1022, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1024 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1022, &$s1023);
    if (((panda$core$Bit) { !$tmp1024.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1025 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp1025;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1026;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1027;
    org$pandalanguage$pandac$ASTNode* type1032;
    org$pandalanguage$pandac$ASTNode* tmp1261034;
    org$pandalanguage$pandac$ASTNode* tmp1271035;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1027, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1029 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1027, &$s1028);
    id1026 = $tmp1029;
    if (((panda$core$Bit) { !id1026.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1030 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1030.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1031.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1033 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type1032 = $tmp1033;
        if (((panda$core$Bit) { type1032 == NULL }).value) {
        {
            {
                tmp1261034 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1032));
                return tmp1261034;
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1036 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1037 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1026.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1036, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id1026.value).position, $tmp1037, type1032);
            tmp1271035 = $tmp1036;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1032));
            return tmp1271035;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1038 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1039 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1026.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1038, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1026.value).position, $tmp1039);
    return $tmp1038;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1040;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1041;
    org$pandalanguage$pandac$ASTNode* t1044;
    org$pandalanguage$pandac$ASTNode* tmp1281046;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1047;
    org$pandalanguage$pandac$ASTNode* tmp1291050;
    org$pandalanguage$pandac$ASTNode* list1051;
    org$pandalanguage$pandac$ASTNode* tmp1301053;
    panda$collections$ImmutableArray* block1054;
    org$pandalanguage$pandac$ASTNode* tmp1311056;
    org$pandalanguage$pandac$ASTNode* tmp1321057;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1041, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1043 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1041, &$s1042);
    start1040 = $tmp1043;
    if (((panda$core$Bit) { !start1040.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1045 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1044 = $tmp1045;
    if (((panda$core$Bit) { t1044 == NULL }).value) {
    {
        {
            tmp1281046 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1044));
            return tmp1281046;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1047, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1049 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1047, &$s1048);
    if (((panda$core$Bit) { !$tmp1049.nonnull }).value) {
    {
        {
            tmp1291050 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1044));
            return tmp1291050;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1052 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list1051 = $tmp1052;
    if (((panda$core$Bit) { list1051 == NULL }).value) {
    {
        {
            tmp1301053 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1051));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1044));
            }
            return tmp1301053;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1055 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    block1054 = $tmp1055;
    if (((panda$core$Bit) { block1054 == NULL }).value) {
    {
        {
            tmp1311056 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1051));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1054));
            }
            return tmp1311056;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1058 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1058, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1040.value).position, p_label, t1044, list1051, block1054);
        tmp1321057 = $tmp1058;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1051));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1044));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1054));
        }
        return tmp1321057;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1059;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1060;
    org$pandalanguage$pandac$ASTNode* test1063;
    org$pandalanguage$pandac$ASTNode* tmp1331065;
    panda$collections$ImmutableArray* body1066;
    org$pandalanguage$pandac$ASTNode* tmp1341068;
    org$pandalanguage$pandac$ASTNode* tmp1351069;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1060, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1062 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1060, &$s1061);
    start1059 = $tmp1062;
    if (((panda$core$Bit) { !start1059.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1064 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1063 = $tmp1064;
    if (((panda$core$Bit) { test1063 == NULL }).value) {
    {
        {
            tmp1331065 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1063));
            return tmp1331065;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1067 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1066 = $tmp1067;
    if (((panda$core$Bit) { body1066 == NULL }).value) {
    {
        {
            tmp1341068 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1063));
            }
            return tmp1341068;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1070 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1070, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1059.value).position, p_label, test1063, body1066);
        tmp1351069 = $tmp1070;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1066));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1063));
        }
        return tmp1351069;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1071;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1072;
    panda$collections$ImmutableArray* body1075;
    org$pandalanguage$pandac$ASTNode* tmp1361077;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1078;
    org$pandalanguage$pandac$ASTNode* tmp1371081;
    org$pandalanguage$pandac$ASTNode* test1082;
    org$pandalanguage$pandac$ASTNode* tmp1381084;
    org$pandalanguage$pandac$ASTNode* tmp1391085;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1072, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1074 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1072, &$s1073);
    start1071 = $tmp1074;
    if (((panda$core$Bit) { !start1071.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1076 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1075 = $tmp1076;
    if (((panda$core$Bit) { body1075 == NULL }).value) {
    {
        {
            tmp1361077 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1075));
            return tmp1361077;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1078, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1080 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1078, &$s1079);
    if (((panda$core$Bit) { !$tmp1080.nonnull }).value) {
    {
        {
            tmp1371081 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1075));
            return tmp1371081;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1083 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1082 = $tmp1083;
    if (((panda$core$Bit) { test1082 == NULL }).value) {
    {
        {
            tmp1381084 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1082));
            }
            return tmp1381084;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1086 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1086, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1071.value).position, p_label, body1075, test1082);
        tmp1391085 = $tmp1086;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1082));
        }
        return tmp1391085;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1087;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1088;
    panda$collections$ImmutableArray* body1091;
    org$pandalanguage$pandac$ASTNode* tmp1401093;
    org$pandalanguage$pandac$ASTNode* tmp1411094;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1088, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1090 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1088, &$s1089);
    start1087 = $tmp1090;
    if (((panda$core$Bit) { !start1087.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1092 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1091 = $tmp1092;
    if (((panda$core$Bit) { body1091 == NULL }).value) {
    {
        {
            tmp1401093 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1091));
            return tmp1401093;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1095 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1095, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1087.value).position, p_label, body1091);
        tmp1411094 = $tmp1095;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1091));
        return tmp1411094;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1096;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1097;
    org$pandalanguage$pandac$ASTNode* expr1100;
    org$pandalanguage$pandac$ASTNode* tmp1421102;
    org$pandalanguage$pandac$ASTNode* message1103;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1104;
    org$pandalanguage$pandac$ASTNode* tmp1431107;
    org$pandalanguage$pandac$ASTNode* tmp1441108;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1097, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1099 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1097, &$s1098);
    start1096 = $tmp1099;
    if (((panda$core$Bit) { !start1096.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1101 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1100 = $tmp1101;
    if (((panda$core$Bit) { expr1100 == NULL }).value) {
    {
        {
            tmp1421102 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1100));
            return tmp1421102;
        }
    }
    }
    memset(&message1103, 0, sizeof(message1103));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1104, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1105 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1104);
    if (((panda$core$Bit) { $tmp1105.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1106 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            message1103 = $tmp1106;
        }
        if (((panda$core$Bit) { message1103 == NULL }).value) {
        {
            {
                tmp1431107 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1103));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1100));
                }
                return tmp1431107;
            }
        }
        }
    }
    }
    else {
    {
        {
            message1103 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1109 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1109, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1096.value).position, expr1100, message1103);
        tmp1441108 = $tmp1109;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1100));
        }
        return tmp1441108;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1110;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1111;
    panda$collections$Array* expressions1114;
    org$pandalanguage$pandac$ASTNode* expr1116;
    org$pandalanguage$pandac$ASTNode* tmp1451118;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1121;
    org$pandalanguage$pandac$ASTNode* tmp1461124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1125;
    org$pandalanguage$pandac$ASTNode* tmp1471128;
    panda$collections$Array* statements1129;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131133;
    org$pandalanguage$pandac$ASTNode* stmt1153;
    org$pandalanguage$pandac$ASTNode* tmp1481155;
    org$pandalanguage$pandac$ASTNode* tmp1501156;
    org$pandalanguage$pandac$ASTNode* stmt1157;
    org$pandalanguage$pandac$ASTNode* tmp1491159;
    org$pandalanguage$pandac$ASTNode* tmp1511160;
    org$pandalanguage$pandac$ASTNode* tmp1521161;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1111, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1113 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1111, &$s1112);
    start1110 = $tmp1113;
    if (((panda$core$Bit) { !start1110.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1115 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1115);
    expressions1114 = $tmp1115;
    org$pandalanguage$pandac$ASTNode* $tmp1117 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1116 = $tmp1117;
    if (((panda$core$Bit) { expr1116 == NULL }).value) {
    {
        {
            tmp1451118 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1116));
            }
            return tmp1451118;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1114, ((panda$core$Object*) expr1116));
    $l1119:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1121, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1122 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1121);
    if (!((panda$core$Bit) { $tmp1122.nonnull }).value) goto $l1120;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1116));
            org$pandalanguage$pandac$ASTNode* $tmp1123 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1116 = $tmp1123;
        }
        if (((panda$core$Bit) { expr1116 == NULL }).value) {
        {
            {
                tmp1461124 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1114));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1116));
                }
                return tmp1461124;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1114, ((panda$core$Object*) expr1116));
    }
    goto $l1119;
    $l1120:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1125, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1127 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1125, &$s1126);
    if (((panda$core$Bit) { !$tmp1127.nonnull }).value) {
    {
        {
            tmp1471128 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1116));
            }
            return tmp1471128;
        }
    }
    }
    panda$collections$Array* $tmp1130 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1130);
    statements1129 = $tmp1130;
    $l1131:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1134 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131133 = $tmp1134.kind;
            panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131133.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1136 = $tmp1137.value;
            if ($tmp1136) goto $l1138;
            panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131133.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1136 = $tmp1139.value;
            $l1138:;
            panda$core$Bit $tmp1140 = { $tmp1136 };
            bool $tmp1135 = $tmp1140.value;
            if ($tmp1135) goto $l1141;
            panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131133.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1135 = $tmp1142.value;
            $l1141:;
            panda$core$Bit $tmp1143 = { $tmp1135 };
            if ($tmp1143.value) {
            {
                goto $l1132;
            }
            }
            else {
            panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131133.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1145 = $tmp1146.value;
            if ($tmp1145) goto $l1147;
            panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131133.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1145 = $tmp1148.value;
            $l1147:;
            panda$core$Bit $tmp1149 = { $tmp1145 };
            bool $tmp1144 = $tmp1149.value;
            if ($tmp1144) goto $l1150;
            panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131133.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1144 = $tmp1151.value;
            $l1150:;
            panda$core$Bit $tmp1152 = { $tmp1144 };
            if ($tmp1152.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1154 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1153 = $tmp1154;
                if (((panda$core$Bit) { stmt1153 == NULL }).value) {
                {
                    {
                        tmp1481155 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1153));
                        {
                            tmp1501156 = tmp1481155;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1114));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1129));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1116));
                            }
                            return tmp1501156;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1129, ((panda$core$Object*) stmt1153));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1153));
                    goto $l1132;
                }
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1158 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1157 = $tmp1158;
                    if (((panda$core$Bit) { stmt1157 == NULL }).value) {
                    {
                        {
                            tmp1491159 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1157));
                            {
                                tmp1511160 = tmp1491159;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1114));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1129));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1116));
                                }
                                return tmp1511160;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1129, ((panda$core$Object*) stmt1157));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1157));
                }
            }
            }
            }
        }
    }
    }
    $l1132:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1162 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1163 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1114);
        panda$collections$ImmutableArray* $tmp1164 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1129);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1162, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1110.value).position, $tmp1163, $tmp1164);
        tmp1521161 = $tmp1162;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1116));
        }
        return tmp1521161;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1166;
    org$pandalanguage$pandac$ASTNode* expr1169;
    org$pandalanguage$pandac$ASTNode* tmp1531171;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1172;
    org$pandalanguage$pandac$ASTNode* tmp1541175;
    panda$collections$Array* whens1176;
    panda$collections$Array* other1178;
    org$pandalanguage$pandac$parser$Token token1181;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131183;
    org$pandalanguage$pandac$ASTNode* w1186;
    org$pandalanguage$pandac$ASTNode* tmp1551188;
    org$pandalanguage$pandac$ASTNode* tmp1581189;
    org$pandalanguage$pandac$parser$Token o1191;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1193;
    org$pandalanguage$pandac$ASTNode* tmp1591196;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251200;
    org$pandalanguage$pandac$ASTNode* stmt1212;
    org$pandalanguage$pandac$ASTNode* tmp1561214;
    org$pandalanguage$pandac$ASTNode* tmp1601215;
    org$pandalanguage$pandac$ASTNode* stmt1216;
    org$pandalanguage$pandac$ASTNode* tmp1571218;
    org$pandalanguage$pandac$ASTNode* tmp1611219;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1227;
    org$pandalanguage$pandac$ASTNode* tmp1621230;
    org$pandalanguage$pandac$ASTNode* tmp1631231;
    org$pandalanguage$pandac$ASTNode* tmp1641235;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1166, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1168 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1166, &$s1167);
    start1165 = $tmp1168;
    if (((panda$core$Bit) { !start1165.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1170 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1169 = $tmp1170;
    if (((panda$core$Bit) { expr1169 == NULL }).value) {
    {
        {
            tmp1531171 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
            return tmp1531171;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1172, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1174 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1172, &$s1173);
    if (((panda$core$Bit) { !$tmp1174.nonnull }).value) {
    {
        {
            tmp1541175 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
            return tmp1541175;
        }
    }
    }
    panda$collections$Array* $tmp1177 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1177);
    whens1176 = $tmp1177;
    other1178 = NULL;
    $l1179:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1182 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1181 = $tmp1182;
        {
            $match$1155_131183 = token1181.kind;
            panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131183.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1184.value) {
            {
                goto $l1180;
            }
            }
            else {
            panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131183.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1185.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1187 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1186 = $tmp1187;
                if (((panda$core$Bit) { w1186 == NULL }).value) {
                {
                    {
                        tmp1551188 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1186));
                        {
                            tmp1581189 = tmp1551188;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1176));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
                            }
                            return tmp1581189;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1176, ((panda$core$Object*) w1186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1186));
            }
            }
            else {
            panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131183.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1190.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1192 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1191 = $tmp1192;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1193, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1193, &$s1194);
                if (((panda$core$Bit) { !$tmp1195.nonnull }).value) {
                {
                    {
                        tmp1591196 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1176));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
                        }
                        return tmp1591196;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
                    panda$collections$Array* $tmp1197 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1197);
                    other1178 = $tmp1197;
                }
                $l1198:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1201 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251200 = $tmp1201.kind;
                        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251200.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1202.value) {
                        {
                            goto $l1199;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251200.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1204 = $tmp1205.value;
                        if ($tmp1204) goto $l1206;
                        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251200.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1204 = $tmp1207.value;
                        $l1206:;
                        panda$core$Bit $tmp1208 = { $tmp1204 };
                        bool $tmp1203 = $tmp1208.value;
                        if ($tmp1203) goto $l1209;
                        panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251200.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1203 = $tmp1210.value;
                        $l1209:;
                        panda$core$Bit $tmp1211 = { $tmp1203 };
                        if ($tmp1211.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1213 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1212 = $tmp1213;
                            if (((panda$core$Bit) { stmt1212 == NULL }).value) {
                            {
                                {
                                    tmp1561214 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1212));
                                    {
                                        tmp1601215 = tmp1561214;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1176));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
                                        }
                                        return tmp1601215;
                                    }
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1178, ((panda$core$Object*) stmt1212));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1212));
                                goto $l1199;
                            }
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1217 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1216 = $tmp1217;
                            if (((panda$core$Bit) { stmt1216 == NULL }).value) {
                            {
                                {
                                    tmp1571218 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1216));
                                    {
                                        tmp1611219 = tmp1571218;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1176));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
                                        }
                                        return tmp1611219;
                                    }
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1178, ((panda$core$Object*) stmt1216));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1216));
                        }
                        }
                        }
                    }
                }
                }
                $l1199:;
                goto $l1180;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1222 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1181);
                panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1221, $tmp1222);
                panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1223, &$s1224);
                panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1220, $tmp1225);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1181, $tmp1226);
            }
            }
            }
            }
        }
    }
    }
    $l1180:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1227, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1229 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1227, &$s1228);
    if (((panda$core$Bit) { !$tmp1229.nonnull }).value) {
    {
        {
            tmp1621230 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
            }
            return tmp1621230;
        }
    }
    }
    if (((panda$core$Bit) { other1178 != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1232 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp1233 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1176);
            panda$collections$ImmutableArray* $tmp1234 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1178);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1232, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1165.value).position, expr1169, $tmp1233, $tmp1234);
            tmp1631231 = $tmp1232;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
            }
            return tmp1631231;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1236 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1237 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1176);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1236, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1165.value).position, expr1169, $tmp1237, NULL);
        tmp1641235 = $tmp1236;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1176));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1169));
        }
        return tmp1641235;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1238;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1239;
    panda$collections$Array* result1242;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131246;
    org$pandalanguage$pandac$ASTNode* stmt1258;
    panda$collections$ImmutableArray* tmp1651260;
    panda$collections$ImmutableArray* tmp1681261;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1262;
    panda$collections$ImmutableArray* tmp1661265;
    panda$collections$ImmutableArray* tmp1691266;
    org$pandalanguage$pandac$ASTNode* stmt1267;
    panda$collections$ImmutableArray* tmp1671269;
    panda$collections$ImmutableArray* tmp1701270;
    panda$collections$ImmutableArray* tmp1711271;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1239, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1241 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1239, &$s1240);
    start1238 = $tmp1241;
    if (((panda$core$Bit) { !start1238.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1243 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1243);
    result1242 = $tmp1243;
    $l1244:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1247 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131246 = $tmp1247.kind;
            panda$core$Bit $tmp1248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131246.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1248.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1245;
            }
            }
            else {
            panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131246.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1250 = $tmp1251.value;
            if ($tmp1250) goto $l1252;
            panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131246.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1250 = $tmp1253.value;
            $l1252:;
            panda$core$Bit $tmp1254 = { $tmp1250 };
            bool $tmp1249 = $tmp1254.value;
            if ($tmp1249) goto $l1255;
            panda$core$Bit $tmp1256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131246.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1249 = $tmp1256.value;
            $l1255:;
            panda$core$Bit $tmp1257 = { $tmp1249 };
            if ($tmp1257.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1259 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1258 = $tmp1259;
                if (((panda$core$Bit) { stmt1258 == NULL }).value) {
                {
                    {
                        tmp1651260 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1258));
                        {
                            tmp1681261 = tmp1651260;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1242));
                            return tmp1681261;
                        }
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1262, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1264 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1262, &$s1263);
                if (((panda$core$Bit) { !$tmp1264.nonnull }).value) {
                {
                    {
                        tmp1661265 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1258));
                        {
                            tmp1691266 = tmp1661265;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1242));
                            return tmp1691266;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1242, ((panda$core$Object*) stmt1258));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1258));
                    goto $l1245;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1268 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1267 = $tmp1268;
                if (((panda$core$Bit) { stmt1267 == NULL }).value) {
                {
                    {
                        tmp1671269 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1267));
                        {
                            tmp1701270 = tmp1671269;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1242));
                            return tmp1701270;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1242, ((panda$core$Object*) stmt1267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1267));
            }
            }
            }
        }
    }
    }
    $l1245:;
    {
        panda$collections$ImmutableArray* $tmp1272 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1242);
        tmp1711271 = $tmp1272;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1242));
        return tmp1711271;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1273;
    org$pandalanguage$pandac$ASTNode* tmp1721275;
    org$pandalanguage$pandac$ASTNode* tmp1731276;
    org$pandalanguage$pandac$Position $tmp1278;
    panda$collections$ImmutableArray* $tmp1274 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    statements1273 = $tmp1274;
    if (((panda$core$Bit) { statements1273 == NULL }).value) {
    {
        {
            tmp1721275 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1273));
            return tmp1721275;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1277 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp1278);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1277, ((panda$core$Int64) { 4 }), $tmp1278, statements1273);
        tmp1731276 = $tmp1277;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1273));
        return tmp1731276;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1279;
    org$pandalanguage$pandac$ASTNode* tmp1741281;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91282;
    org$pandalanguage$pandac$parser$Token op1345;
    org$pandalanguage$pandac$ASTNode* rvalue1347;
    org$pandalanguage$pandac$ASTNode* tmp1751349;
    org$pandalanguage$pandac$ASTNode* tmp1791350;
    org$pandalanguage$pandac$ASTNode* tmp1761351;
    org$pandalanguage$pandac$ASTNode* tmp1801355;
    org$pandalanguage$pandac$parser$Token op1359;
    org$pandalanguage$pandac$ASTNode* rvalue1361;
    org$pandalanguage$pandac$ASTNode* tmp1771363;
    org$pandalanguage$pandac$ASTNode* tmp1811364;
    org$pandalanguage$pandac$ASTNode* tmp1781365;
    org$pandalanguage$pandac$ASTNode* tmp1821369;
    org$pandalanguage$pandac$ASTNode* tmp1831370;
    org$pandalanguage$pandac$ASTNode* $tmp1280 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1279 = $tmp1280;
    if (((panda$core$Bit) { start1279 == NULL }).value) {
    {
        {
            tmp1741281 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1279));
            return tmp1741281;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1283 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91282 = $tmp1283.kind;
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1298 = $tmp1299.value;
        if ($tmp1298) goto $l1300;
        panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1298 = $tmp1301.value;
        $l1300:;
        panda$core$Bit $tmp1302 = { $tmp1298 };
        bool $tmp1297 = $tmp1302.value;
        if ($tmp1297) goto $l1303;
        panda$core$Bit $tmp1304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1297 = $tmp1304.value;
        $l1303:;
        panda$core$Bit $tmp1305 = { $tmp1297 };
        bool $tmp1296 = $tmp1305.value;
        if ($tmp1296) goto $l1306;
        panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1296 = $tmp1307.value;
        $l1306:;
        panda$core$Bit $tmp1308 = { $tmp1296 };
        bool $tmp1295 = $tmp1308.value;
        if ($tmp1295) goto $l1309;
        panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1295 = $tmp1310.value;
        $l1309:;
        panda$core$Bit $tmp1311 = { $tmp1295 };
        bool $tmp1294 = $tmp1311.value;
        if ($tmp1294) goto $l1312;
        panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1294 = $tmp1313.value;
        $l1312:;
        panda$core$Bit $tmp1314 = { $tmp1294 };
        bool $tmp1293 = $tmp1314.value;
        if ($tmp1293) goto $l1315;
        panda$core$Bit $tmp1316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1293 = $tmp1316.value;
        $l1315:;
        panda$core$Bit $tmp1317 = { $tmp1293 };
        bool $tmp1292 = $tmp1317.value;
        if ($tmp1292) goto $l1318;
        panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1292 = $tmp1319.value;
        $l1318:;
        panda$core$Bit $tmp1320 = { $tmp1292 };
        bool $tmp1291 = $tmp1320.value;
        if ($tmp1291) goto $l1321;
        panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1291 = $tmp1322.value;
        $l1321:;
        panda$core$Bit $tmp1323 = { $tmp1291 };
        bool $tmp1290 = $tmp1323.value;
        if ($tmp1290) goto $l1324;
        panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1290 = $tmp1325.value;
        $l1324:;
        panda$core$Bit $tmp1326 = { $tmp1290 };
        bool $tmp1289 = $tmp1326.value;
        if ($tmp1289) goto $l1327;
        panda$core$Bit $tmp1328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1289 = $tmp1328.value;
        $l1327:;
        panda$core$Bit $tmp1329 = { $tmp1289 };
        bool $tmp1288 = $tmp1329.value;
        if ($tmp1288) goto $l1330;
        panda$core$Bit $tmp1331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1288 = $tmp1331.value;
        $l1330:;
        panda$core$Bit $tmp1332 = { $tmp1288 };
        bool $tmp1287 = $tmp1332.value;
        if ($tmp1287) goto $l1333;
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1287 = $tmp1334.value;
        $l1333:;
        panda$core$Bit $tmp1335 = { $tmp1287 };
        bool $tmp1286 = $tmp1335.value;
        if ($tmp1286) goto $l1336;
        panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1286 = $tmp1337.value;
        $l1336:;
        panda$core$Bit $tmp1338 = { $tmp1286 };
        bool $tmp1285 = $tmp1338.value;
        if ($tmp1285) goto $l1339;
        panda$core$Bit $tmp1340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1285 = $tmp1340.value;
        $l1339:;
        panda$core$Bit $tmp1341 = { $tmp1285 };
        bool $tmp1284 = $tmp1341.value;
        if ($tmp1284) goto $l1342;
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1284 = $tmp1343.value;
        $l1342:;
        panda$core$Bit $tmp1344 = { $tmp1284 };
        if ($tmp1344.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1346 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1345 = $tmp1346;
            org$pandalanguage$pandac$ASTNode* $tmp1348 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1347 = $tmp1348;
            if (((panda$core$Bit) { rvalue1347 == NULL }).value) {
            {
                {
                    tmp1751349 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue1347));
                    {
                        tmp1791350 = tmp1751349;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1279));
                        return tmp1791350;
                    }
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1352 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$Position $tmp1354 = (($fn1353) start1279->$class->vtable[2])(start1279);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1352, ((panda$core$Int64) { 2 }), $tmp1354, start1279, op1345.kind, rvalue1347);
                tmp1761351 = $tmp1352;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue1347));
                {
                    tmp1801355 = tmp1761351;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1279));
                    return tmp1801355;
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91282.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1356.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1357 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1357, &$s1358);
            org$pandalanguage$pandac$parser$Token $tmp1360 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1359 = $tmp1360;
            org$pandalanguage$pandac$ASTNode* $tmp1362 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1361 = $tmp1362;
            if (((panda$core$Bit) { rvalue1361 == NULL }).value) {
            {
                {
                    tmp1771363 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue1361));
                    {
                        tmp1811364 = tmp1771363;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1279));
                        return tmp1811364;
                    }
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1366 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$Position $tmp1368 = (($fn1367) start1279->$class->vtable[2])(start1279);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1366, ((panda$core$Int64) { 2 }), $tmp1368, start1279, op1359.kind, rvalue1361);
                tmp1781365 = $tmp1366;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue1361));
                {
                    tmp1821369 = tmp1781365;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1279));
                    return tmp1821369;
                }
            }
        }
        }
        else {
        {
            {
                tmp1831370 = start1279;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1279));
                return tmp1831370;
            }
        }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1279));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1371;
    org$pandalanguage$pandac$ASTNode* tmp1841373;
    org$pandalanguage$pandac$ASTNode* value1374;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1375;
    org$pandalanguage$pandac$ASTNode* tmp1851378;
    org$pandalanguage$pandac$ASTNode* tmp1861384;
    org$pandalanguage$pandac$ASTNode* tmp1871385;
    org$pandalanguage$pandac$ASTNode* $tmp1372 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1371 = $tmp1372;
    if (((panda$core$Bit) { t1371 == NULL }).value) {
    {
        {
            tmp1841373 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1371));
            return tmp1841373;
        }
    }
    }
    memset(&value1374, 0, sizeof(value1374));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1375, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1376 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1375);
    if (((panda$core$Bit) { $tmp1376.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1377 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1374 = $tmp1377;
        }
        if (((panda$core$Bit) { value1374 == NULL }).value) {
        {
            {
                tmp1851378 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1374));
                }
                return tmp1851378;
            }
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1379 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1379.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1380.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1381 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1381, &$s1382);
        {
            org$pandalanguage$pandac$ASTNode* $tmp1383 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1374 = $tmp1383;
        }
        if (((panda$core$Bit) { value1374 == NULL }).value) {
        {
            {
                tmp1861384 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1374));
                }
                return tmp1861384;
            }
        }
        }
    }
    }
    else {
    {
        {
            value1374 = NULL;
        }
    }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1386 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp1388 = (($fn1387) t1371->$class->vtable[2])(t1371);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1386, ((panda$core$Int64) { 11 }), $tmp1388, t1371, value1374);
        tmp1871385 = $tmp1386;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1371));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1374));
        }
        return tmp1871385;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1389;
    org$pandalanguage$pandac$Variable$Kind kind1391;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91392;
    org$pandalanguage$pandac$Variable$Kind $tmp1394;
    org$pandalanguage$pandac$Variable$Kind $tmp1396;
    org$pandalanguage$pandac$Variable$Kind $tmp1398;
    org$pandalanguage$pandac$Variable$Kind $tmp1400;
    panda$collections$Array* declarations1402;
    org$pandalanguage$pandac$ASTNode* decl1404;
    org$pandalanguage$pandac$ASTNode* tmp1881406;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1409;
    org$pandalanguage$pandac$ASTNode* decl1411;
    org$pandalanguage$pandac$ASTNode* tmp1891413;
    org$pandalanguage$pandac$ASTNode* tmp1901414;
    org$pandalanguage$pandac$ASTNode* tmp1911415;
    org$pandalanguage$pandac$parser$Token $tmp1390 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1389 = $tmp1390;
    memset(&kind1391, 0, sizeof(kind1391));
    {
        $match$1318_91392 = start1389.kind;
        panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91392.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1393.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1394, ((panda$core$Int64) { 0 }));
            kind1391 = $tmp1394;
        }
        }
        else {
        panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91392.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1395.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1396, ((panda$core$Int64) { 1 }));
            kind1391 = $tmp1396;
        }
        }
        else {
        panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91392.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1397.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1398, ((panda$core$Int64) { 3 }));
            kind1391 = $tmp1398;
        }
        }
        else {
        panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91392.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1399.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1400, ((panda$core$Int64) { 2 }));
            kind1391 = $tmp1400;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1389, &$s1401);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1403 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1403);
    declarations1402 = $tmp1403;
    org$pandalanguage$pandac$ASTNode* $tmp1405 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1404 = $tmp1405;
    if (((panda$core$Bit) { decl1404 == NULL }).value) {
    {
        {
            tmp1881406 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1402));
            }
            return tmp1881406;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1402, ((panda$core$Object*) decl1404));
    $l1407:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1409, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1410 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1409);
    if (!((panda$core$Bit) { $tmp1410.nonnull }).value) goto $l1408;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1412 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        decl1411 = $tmp1412;
        if (((panda$core$Bit) { decl1411 == NULL }).value) {
        {
            {
                tmp1891413 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1411));
                {
                    tmp1901414 = tmp1891413;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1404));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1402));
                    }
                    return tmp1901414;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1402, ((panda$core$Object*) decl1411));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1411));
    }
    goto $l1407;
    $l1408:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1416 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1417 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1402);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1416, ((panda$core$Int64) { 39 }), start1389.position, kind1391, $tmp1417);
        tmp1911415 = $tmp1416;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1402));
        }
        return tmp1911415;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1418;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1419;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1422;
    org$pandalanguage$pandac$ASTNode* target1426;
    panda$collections$Array* args1429;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1431;
    org$pandalanguage$pandac$ASTNode* expr1433;
    org$pandalanguage$pandac$ASTNode* tmp1921436;
    org$pandalanguage$pandac$ASTNode* tmp1951437;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1440;
    org$pandalanguage$pandac$ASTNode* tmp1931444;
    org$pandalanguage$pandac$ASTNode* tmp1961445;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1446;
    org$pandalanguage$pandac$ASTNode* tmp1941450;
    org$pandalanguage$pandac$ASTNode* tmp1971451;
    org$pandalanguage$pandac$ASTNode* tmp1981453;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1419, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1421 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1419, &$s1420);
    start1418 = $tmp1421;
    if (((panda$core$Bit) { !start1418.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1422, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1424 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1422, &$s1423);
    if (((panda$core$Bit) { !$tmp1424.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1425;
    $tmp1425 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp1425->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1425));
    org$pandalanguage$pandac$ASTNode* $tmp1427 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1428 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1418.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1427, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1418.value).position, $tmp1428);
    target1426 = $tmp1427;
    panda$collections$Array* $tmp1430 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1430);
    args1429 = $tmp1430;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1431, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1432 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1431);
    if (((panda$core$Bit) { !$tmp1432.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1434 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1433 = $tmp1434;
        if (((panda$core$Bit) { expr1433 == NULL }).value) {
        {
            panda$core$Object* $tmp1435 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1921436 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1433));
                {
                    tmp1951437 = tmp1921436;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1426));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1429));
                    }
                    return tmp1951437;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1429, ((panda$core$Object*) expr1433));
        $l1438:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1440, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1441 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1440);
        if (!((panda$core$Bit) { $tmp1441.nonnull }).value) goto $l1439;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1433));
                org$pandalanguage$pandac$ASTNode* $tmp1442 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr1433 = $tmp1442;
            }
            if (((panda$core$Bit) { expr1433 == NULL }).value) {
            {
                panda$core$Object* $tmp1443 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    tmp1931444 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1433));
                    {
                        tmp1961445 = tmp1931444;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1426));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1429));
                        }
                        return tmp1961445;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1429, ((panda$core$Object*) expr1433));
        }
        goto $l1438;
        $l1439:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1446, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1448 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1446, &$s1447);
        if (((panda$core$Bit) { !$tmp1448.nonnull }).value) {
        {
            panda$core$Object* $tmp1449 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1941450 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1433));
                {
                    tmp1971451 = tmp1941450;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1426));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1429));
                    }
                    return tmp1971451;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1433));
    }
    }
    panda$core$Object* $tmp1452 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    {
        org$pandalanguage$pandac$ASTNode* $tmp1454 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1455 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1429);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1454, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1418.value).position, target1426, $tmp1455);
        tmp1981453 = $tmp1454;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1429));
        }
        return tmp1981453;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1456;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1457;
    org$pandalanguage$pandac$parser$Token$nullable label1460;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1461;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1457, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1459 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1457, &$s1458);
    start1456 = $tmp1459;
    if (((panda$core$Bit) { !start1456.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1461, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1462 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1461);
    label1460 = $tmp1462;
    if (((panda$core$Bit) { label1460.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1463 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1464 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1460.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1463, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1456.value).position, $tmp1464);
        return $tmp1463;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1465 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1465, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1456.value).position, NULL);
    return $tmp1465;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1466;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1467;
    org$pandalanguage$pandac$parser$Token$nullable label1470;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1471;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1467, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1469 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1467, &$s1468);
    start1466 = $tmp1469;
    if (((panda$core$Bit) { !start1466.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1471, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1472 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1471);
    label1470 = $tmp1472;
    if (((panda$core$Bit) { label1470.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1473 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1474 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1470.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1473, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1466.value).position, $tmp1474);
        return $tmp1473;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1475 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1475, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1466.value).position, NULL);
    return $tmp1475;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1476;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1477;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_91480;
    panda$collections$Array* children1492;
    org$pandalanguage$pandac$ASTNode* expr1494;
    org$pandalanguage$pandac$ASTNode* tmp1991496;
    org$pandalanguage$pandac$ASTNode* tmp2001497;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1477, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1479 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1477, &$s1478);
    start1476 = $tmp1479;
    if (((panda$core$Bit) { !start1476.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1481 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_91480 = $tmp1481.kind;
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91480.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1483 = $tmp1484.value;
        if ($tmp1483) goto $l1485;
        panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91480.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1483 = $tmp1486.value;
        $l1485:;
        panda$core$Bit $tmp1487 = { $tmp1483 };
        bool $tmp1482 = $tmp1487.value;
        if ($tmp1482) goto $l1488;
        panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91480.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1482 = $tmp1489.value;
        $l1488:;
        panda$core$Bit $tmp1490 = { $tmp1482 };
        if ($tmp1490.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1491 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1491, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start1476.value).position, NULL);
            return $tmp1491;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1493 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1493);
            children1492 = $tmp1493;
            org$pandalanguage$pandac$ASTNode* $tmp1495 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1494 = $tmp1495;
            if (((panda$core$Bit) { expr1494 == NULL }).value) {
            {
                {
                    tmp1991496 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1494));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1492));
                    }
                    return tmp1991496;
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1492, ((panda$core$Object*) expr1494));
            {
                org$pandalanguage$pandac$ASTNode* $tmp1498 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1498, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start1476.value).position, expr1494);
                tmp2001497 = $tmp1498;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1494));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1492));
                }
                return tmp2001497;
            }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_91499;
    {
        org$pandalanguage$pandac$parser$Token $tmp1500 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_91499 = $tmp1500.kind;
        panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91499.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1501.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1502 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1502;
        }
        }
        else {
        panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91499.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1503.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1504 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1504;
        }
        }
        else {
        panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91499.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1505.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1506 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1506;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_91507;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1517;
    {
        org$pandalanguage$pandac$parser$Token $tmp1508 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_91507 = $tmp1508.kind;
        panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91507.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1509.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1510 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1510;
        }
        }
        else {
        panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91507.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1511.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1512 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1512;
        }
        }
        else {
        panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91507.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1513.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1514 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1514;
        }
        }
        else {
        panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91507.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1515.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1516 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1516;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1517, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1517, &$s1518);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_91519;
    org$pandalanguage$pandac$parser$Token id1538;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1540;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1567;
    {
        org$pandalanguage$pandac$parser$Token $tmp1520 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_91519 = $tmp1520.kind;
        panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1521.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1522 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1522;
        }
        }
        else {
        panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1523.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1524 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1524;
        }
        }
        else {
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1525.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1526 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1526;
        }
        }
        else {
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1527.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1528 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1528;
        }
        }
        else {
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1529.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1530 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1530;
        }
        }
        else {
        panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1531.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1532 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1532;
        }
        }
        else {
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1533.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1534 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1534;
        }
        }
        else {
        panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1535.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1536 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1536;
        }
        }
        else {
        panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1537.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1539 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1538 = $tmp1539;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1540, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1541 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1540);
            if (((panda$core$Bit) { $tmp1541.nonnull }).value) {
            {
                panda$core$String* $tmp1542 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1538);
                org$pandalanguage$pandac$ASTNode* $tmp1543 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1542);
                return $tmp1543;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1538);
            org$pandalanguage$pandac$ASTNode* $tmp1544 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1544;
        }
        }
        else {
        panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1545 = $tmp1546.value;
        if ($tmp1545) goto $l1547;
        panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1545 = $tmp1548.value;
        $l1547:;
        panda$core$Bit $tmp1549 = { $tmp1545 };
        if ($tmp1549.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1550;
        }
        }
        else {
        panda$core$Bit $tmp1554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1553 = $tmp1554.value;
        if ($tmp1553) goto $l1555;
        panda$core$Bit $tmp1556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1553 = $tmp1556.value;
        $l1555:;
        panda$core$Bit $tmp1557 = { $tmp1553 };
        bool $tmp1552 = $tmp1557.value;
        if ($tmp1552) goto $l1558;
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1552 = $tmp1559.value;
        $l1558:;
        panda$core$Bit $tmp1560 = { $tmp1552 };
        bool $tmp1551 = $tmp1560.value;
        if ($tmp1551) goto $l1561;
        panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1551 = $tmp1562.value;
        $l1561:;
        panda$core$Bit $tmp1563 = { $tmp1551 };
        if ($tmp1563.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1564 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1564;
        }
        }
        else {
        panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91519.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1565.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1566 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1566;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1567, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1567, &$s1568);
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
    org$pandalanguage$pandac$parser$Token$nullable start1569;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1570;
    org$pandalanguage$pandac$parser$Token$nullable next1573;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1574;
    panda$core$MutableString* name1577;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1582;
    panda$core$Char8 $tmp1584;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1585;
    org$pandalanguage$pandac$ASTNode* tmp2011588;
    org$pandalanguage$pandac$ASTNode* tmp2021590;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1570, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1572 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1570, &$s1571);
    start1569 = $tmp1572;
    if (((panda$core$Bit) { !start1569.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1574, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1576 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1574, &$s1575);
    next1573 = $tmp1576;
    if (((panda$core$Bit) { !next1573.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1578 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp1579 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1573.value));
    panda$core$MutableString$init$panda$core$String($tmp1578, $tmp1579);
    name1577 = $tmp1578;
    $l1580:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1582, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1583 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1582);
        next1573 = $tmp1583;
        if (((panda$core$Bit) { !next1573.nonnull }).value) {
        {
            goto $l1581;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1584, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1577, $tmp1584);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1585, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1587 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1585, &$s1586);
        next1573 = $tmp1587;
        if (((panda$core$Bit) { !next1573.nonnull }).value) {
        {
            {
                tmp2011588 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1577));
                return tmp2011588;
            }
        }
        }
        panda$core$String* $tmp1589 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1573.value));
        panda$core$MutableString$append$panda$core$String(name1577, $tmp1589);
    }
    }
    $l1581:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1591 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1592 = panda$core$MutableString$finish$R$panda$core$String(name1577);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1591, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start1569.value).position, $tmp1592);
        tmp2021590 = $tmp1591;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1577));
        return tmp2021590;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1593;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1594;
    org$pandalanguage$pandac$parser$Token$nullable next1597;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1598;
    panda$core$MutableString* name1601;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1606;
    panda$core$Char8 $tmp1608;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1609;
    org$pandalanguage$pandac$ASTNode* tmp2031612;
    org$pandalanguage$pandac$ASTNode* tmp2041614;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1594, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1596 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1594, &$s1595);
    start1593 = $tmp1596;
    if (((panda$core$Bit) { !start1593.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1598, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1600 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1598, &$s1599);
    next1597 = $tmp1600;
    if (((panda$core$Bit) { !next1597.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1602 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp1603 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1597.value));
    panda$core$MutableString$init$panda$core$String($tmp1602, $tmp1603);
    name1601 = $tmp1602;
    $l1604:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1606, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1607 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1606);
        next1597 = $tmp1607;
        if (((panda$core$Bit) { !next1597.nonnull }).value) {
        {
            goto $l1605;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1608, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1601, $tmp1608);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1609, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1611 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1609, &$s1610);
        next1597 = $tmp1611;
        if (((panda$core$Bit) { !next1597.nonnull }).value) {
        {
            {
                tmp2031612 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1601));
                return tmp2031612;
            }
        }
        }
        panda$core$String* $tmp1613 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1597.value));
        panda$core$MutableString$append$panda$core$String(name1601, $tmp1613);
    }
    }
    $l1605:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1615 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1616 = panda$core$MutableString$finish$R$panda$core$String(name1601);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1615, ((panda$core$Int64) { 38 }), ((org$pandalanguage$pandac$parser$Token) start1593.value).position, $tmp1616);
        tmp2041614 = $tmp1615;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1601));
        return tmp2041614;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1617;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1618;
    org$pandalanguage$pandac$parser$Token$nullable id1621;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1622;
    panda$collections$Array* parameters1625;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1627;
    org$pandalanguage$pandac$ASTNode* t1629;
    panda$collections$ImmutableArray* tmp2051631;
    panda$collections$ImmutableArray* tmp2061632;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1639;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1641;
    panda$collections$ImmutableArray* tmp2081644;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1645;
    org$pandalanguage$pandac$ASTNode* t1647;
    panda$collections$ImmutableArray* tmp2071649;
    panda$collections$ImmutableArray* tmp2091650;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1655;
    panda$collections$ImmutableArray* tmp2101658;
    panda$collections$ImmutableArray* tmp2111659;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1618, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1620 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1618, &$s1619);
    start1617 = $tmp1620;
    if (((panda$core$Bit) { !start1617.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1622, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1624 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1622, &$s1623);
    id1621 = $tmp1624;
    if (((panda$core$Bit) { !id1621.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1626 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1626);
    parameters1625 = $tmp1626;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1627, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1628 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1627);
    if (((panda$core$Bit) { $tmp1628.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1630 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1629 = $tmp1630;
        if (((panda$core$Bit) { t1629 == NULL }).value) {
        {
            {
                tmp2051631 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1629));
                {
                    tmp2061632 = tmp2051631;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1625));
                    return tmp2061632;
                }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1633 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1634 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1621.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1633, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id1621.value).position, $tmp1634, t1629);
        panda$collections$Array$add$panda$collections$Array$T(parameters1625, ((panda$core$Object*) $tmp1633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1629));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1635 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1636 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1621.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1635, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1621.value).position, $tmp1636);
        panda$collections$Array$add$panda$collections$Array$T(parameters1625, ((panda$core$Object*) $tmp1635));
    }
    }
    $l1637:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1639, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1640 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1639);
    if (!((panda$core$Bit) { $tmp1640.nonnull }).value) goto $l1638;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1641, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1643 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1641, &$s1642);
        id1621 = $tmp1643;
        if (((panda$core$Bit) { !id1621.nonnull }).value) {
        {
            {
                tmp2081644 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1625));
                return tmp2081644;
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1645, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1646 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1645);
        if (((panda$core$Bit) { $tmp1646.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1648 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1647 = $tmp1648;
            if (((panda$core$Bit) { t1647 == NULL }).value) {
            {
                {
                    tmp2071649 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1647));
                    {
                        tmp2091650 = tmp2071649;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1625));
                        return tmp2091650;
                    }
                }
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1651 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1652 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1621.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1651, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id1621.value).position, $tmp1652, t1647);
            panda$collections$Array$add$panda$collections$Array$T(parameters1625, ((panda$core$Object*) $tmp1651));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1647));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1653 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1654 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1621.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1653, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1621.value).position, $tmp1654);
            panda$collections$Array$add$panda$collections$Array$T(parameters1625, ((panda$core$Object*) $tmp1653));
        }
        }
    }
    goto $l1637;
    $l1638:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1655, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1657 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1655, &$s1656);
    if (((panda$core$Bit) { !$tmp1657.nonnull }).value) {
    {
        {
            tmp2101658 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1625));
            return tmp2101658;
        }
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1660 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1625);
        tmp2111659 = $tmp1660;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1625));
        return tmp2111659;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1661;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1662;
    panda$collections$Array* result1665;
    org$pandalanguage$pandac$ASTNode* t1667;
    panda$collections$ImmutableArray* tmp2121669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1672;
    panda$collections$ImmutableArray* tmp2131675;
    panda$collections$ImmutableArray* tmp2141676;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1662, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1664 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1662, &$s1663);
    start1661 = $tmp1664;
    if (((panda$core$Bit) { !start1661.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1666 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1666);
    result1665 = $tmp1666;
    org$pandalanguage$pandac$ASTNode* $tmp1668 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1667 = $tmp1668;
    if (((panda$core$Bit) { t1667 == NULL }).value) {
    {
        {
            tmp2121669 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1667));
            }
            return tmp2121669;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1665, ((panda$core$Object*) t1667));
    $l1670:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1672, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1673 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1672);
    if (!((panda$core$Bit) { $tmp1673.nonnull }).value) goto $l1671;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1667));
            org$pandalanguage$pandac$ASTNode* $tmp1674 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1667 = $tmp1674;
        }
        if (((panda$core$Bit) { t1667 == NULL }).value) {
        {
            {
                tmp2131675 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1665));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1667));
                }
                return tmp2131675;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1665, ((panda$core$Object*) t1667));
    }
    goto $l1670;
    $l1671:;
    {
        panda$collections$ImmutableArray* $tmp1677 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1665);
        tmp2141676 = $tmp1677;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1665));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1667));
        }
        return tmp2141676;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1678;
    org$pandalanguage$pandac$parser$Token$nullable next1682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1683;
    panda$collections$ImmutableArray* tmp2151687;
    panda$collections$Array* $tmp1679 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1679);
    result1678 = $tmp1679;
    $l1680:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1683, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1684 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1683);
        next1682 = $tmp1684;
        if (((panda$core$Bit) { !next1682.nonnull }).value) {
        {
            goto $l1681;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1685 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1686 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1682.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1685, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1682.value).position, $tmp1686);
        panda$collections$Array$add$panda$collections$Array$T(result1678, ((panda$core$Object*) $tmp1685));
    }
    }
    $l1681:;
    {
        panda$collections$ImmutableArray* $tmp1688 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1678);
        tmp2151687 = $tmp1688;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1678));
        return tmp2151687;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1689;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1690;
    panda$core$MutableString* result1693;
    org$pandalanguage$pandac$parser$Token next1697;
    org$pandalanguage$pandac$ASTNode* tmp2161702;
    org$pandalanguage$pandac$ASTNode* tmp2171704;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1690, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1692 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1690, &$s1691);
    start1689 = $tmp1692;
    if (((panda$core$Bit) { !start1689.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1694 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp1694);
    result1693 = $tmp1694;
    $l1695:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1698 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1697 = $tmp1698;
        panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1697.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1699.value) {
        {
            goto $l1696;
        }
        }
        panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1697.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1700.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1689.value), &$s1701);
            {
                tmp2161702 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1693));
                return tmp2161702;
            }
        }
        }
        panda$core$String* $tmp1703 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1697);
        panda$core$MutableString$append$panda$core$String(result1693, $tmp1703);
    }
    }
    $l1696:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1705 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1706 = panda$core$MutableString$finish$R$panda$core$String(result1693);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1705, ((panda$core$Int64) { 34 }), ((org$pandalanguage$pandac$parser$Token) start1689.value).position, $tmp1706);
        tmp2171704 = $tmp1705;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1693));
        return tmp2171704;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1707;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1708;
    org$pandalanguage$pandac$ASTNode* t1711;
    org$pandalanguage$pandac$ASTNode* tmp2181713;
    org$pandalanguage$pandac$ASTNode* tmp2191714;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1708, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1710 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1708, &$s1709);
    id1707 = $tmp1710;
    if (((panda$core$Bit) { !id1707.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1712 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1711 = $tmp1712;
    if (((panda$core$Bit) { t1711 == NULL }).value) {
    {
        {
            tmp2181713 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1711));
            return tmp2181713;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1715 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1716 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1707.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1715, ((panda$core$Int64) { 28 }), ((org$pandalanguage$pandac$parser$Token) id1707.value).position, $tmp1716, t1711);
        tmp2191714 = $tmp1715;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1711));
        return tmp2191714;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1717;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1718;
    panda$collections$Array* result1721;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1723;
    org$pandalanguage$pandac$ASTNode* param1725;
    panda$collections$ImmutableArray* tmp2201727;
    panda$collections$ImmutableArray* tmp2231728;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1731;
    panda$collections$ImmutableArray* tmp2211734;
    panda$collections$ImmutableArray* tmp2241735;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1736;
    panda$collections$ImmutableArray* tmp2221739;
    panda$collections$ImmutableArray* tmp2251740;
    panda$collections$ImmutableArray* tmp2261741;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1718, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1720 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1718, &$s1719);
    start1717 = $tmp1720;
    if (((panda$core$Bit) { !start1717.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1722 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1722);
    result1721 = $tmp1722;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1723, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1724 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1723);
    if (((panda$core$Bit) { !$tmp1724.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1726 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1725 = $tmp1726;
        if (((panda$core$Bit) { param1725 == NULL }).value) {
        {
            {
                tmp2201727 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1725));
                {
                    tmp2231728 = tmp2201727;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1721));
                    return tmp2231728;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1721, ((panda$core$Object*) param1725));
        $l1729:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1731, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1732 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1731);
        if (!((panda$core$Bit) { $tmp1732.nonnull }).value) goto $l1730;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1733 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                param1725 = $tmp1733;
            }
            if (((panda$core$Bit) { param1725 == NULL }).value) {
            {
                {
                    tmp2211734 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1725));
                    {
                        tmp2241735 = tmp2211734;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1721));
                        return tmp2241735;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1721, ((panda$core$Object*) param1725));
        }
        goto $l1729;
        $l1730:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1736, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1738 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1736, &$s1737);
        if (((panda$core$Bit) { !$tmp1738.nonnull }).value) {
        {
            {
                tmp2221739 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1725));
                {
                    tmp2251740 = tmp2221739;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1721));
                    return tmp2251740;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1725));
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1742 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1721);
        tmp2261741 = $tmp1742;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1721));
        return tmp2261741;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1743;
    org$pandalanguage$pandac$parser$Token$nullable start1744;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1745;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1747;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1750;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1751;
    panda$core$String* name1752;
    org$pandalanguage$pandac$ASTNode* tmp2271754;
    panda$collections$ImmutableArray* params1755;
    org$pandalanguage$pandac$ASTNode* tmp2281757;
    org$pandalanguage$pandac$ASTNode* returnType1758;
    org$pandalanguage$pandac$ASTNode* tmp2291762;
    panda$collections$ImmutableArray* body1763;
    org$pandalanguage$pandac$ASTNode* tmp2301767;
    org$pandalanguage$pandac$parser$Token token1768;
    panda$core$String* tokenText1770;
    org$pandalanguage$pandac$ASTNode* post1783;
    org$pandalanguage$pandac$ASTNode* tmp2311785;
    org$pandalanguage$pandac$ASTNode* tmp2321786;
    org$pandalanguage$pandac$ASTNode* tmp2331787;
    memset(&kind1743, 0, sizeof(kind1743));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1745, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1746 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1745);
    start1744 = $tmp1746;
    if (((panda$core$Bit) { !start1744.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1747, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1749 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1747, &$s1748);
        start1744 = $tmp1749;
        if (((panda$core$Bit) { !start1744.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1750, ((panda$core$Int64) { 0 }));
        kind1743 = $tmp1750;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1751, ((panda$core$Int64) { 1 }));
        kind1743 = $tmp1751;
    }
    }
    panda$core$String* $tmp1753 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1752 = $tmp1753;
    if (((panda$core$Bit) { name1752 == NULL }).value) {
    {
        {
            tmp2271754 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1752));
            return tmp2271754;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1756 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1755 = $tmp1756;
    if (((panda$core$Bit) { params1755 == NULL }).value) {
    {
        {
            tmp2281757 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1755));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1752));
            }
            return tmp2281757;
        }
    }
    }
    memset(&returnType1758, 0, sizeof(returnType1758));
    org$pandalanguage$pandac$parser$Token $tmp1759 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1759.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1760.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1761 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            returnType1758 = $tmp1761;
        }
        if (((panda$core$Bit) { returnType1758 == NULL }).value) {
        {
            {
                tmp2291762 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1755));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1758));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1752));
                }
                return tmp2291762;
            }
        }
        }
    }
    }
    else {
    {
        {
            returnType1758 = NULL;
        }
    }
    }
    memset(&body1763, 0, sizeof(body1763));
    org$pandalanguage$pandac$parser$Token $tmp1764 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1764.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1765.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp1766 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            body1763 = $tmp1766;
        }
        if (((panda$core$Bit) { body1763 == NULL }).value) {
        {
            {
                tmp2301767 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1763));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1755));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1758));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1752));
                }
                return tmp2301767;
            }
        }
        }
    }
    }
    else {
    {
        {
            body1763 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1769 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1768 = $tmp1769;
    panda$core$String* $tmp1771 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1768);
    tokenText1770 = $tmp1771;
    panda$core$Bit $tmp1773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1768.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1772 = $tmp1773.value;
    if (!$tmp1772) goto $l1774;
    panda$core$Bit $tmp1777 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1770, &$s1776);
    bool $tmp1775 = $tmp1777.value;
    if ($tmp1775) goto $l1778;
    panda$core$Bit $tmp1780 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1770, &$s1779);
    $tmp1775 = $tmp1780.value;
    $l1778:;
    panda$core$Bit $tmp1781 = { $tmp1775 };
    $tmp1772 = $tmp1781.value;
    $l1774:;
    panda$core$Bit $tmp1782 = { $tmp1772 };
    if ($tmp1782.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1784 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1783 = $tmp1784;
        if (((panda$core$Bit) { post1783 == NULL }).value) {
        {
            {
                tmp2311785 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1783));
                {
                    tmp2321786 = tmp2311785;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1763));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1755));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1770));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1758));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1752));
                    }
                    return tmp2321786;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1783));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1788 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1788, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start1744.value).position, p_doccomment, p_annotations, kind1743, name1752, params1755, returnType1758, body1763);
        tmp2331787 = $tmp1788;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1763));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1755));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1770));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1758));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1752));
        }
        return tmp2331787;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1789;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1790;
    panda$collections$ImmutableArray* params1793;
    org$pandalanguage$pandac$ASTNode* tmp2341795;
    panda$collections$ImmutableArray* b1796;
    org$pandalanguage$pandac$ASTNode* tmp2351798;
    org$pandalanguage$pandac$parser$Token token1799;
    panda$core$String* tokenText1801;
    org$pandalanguage$pandac$ASTNode* post1814;
    org$pandalanguage$pandac$ASTNode* tmp2361816;
    org$pandalanguage$pandac$ASTNode* tmp2371817;
    org$pandalanguage$pandac$ASTNode* tmp2381818;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1820;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1790, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1792 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1790, &$s1791);
    start1789 = $tmp1792;
    if (((panda$core$Bit) { !start1789.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1794 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1793 = $tmp1794;
    if (((panda$core$Bit) { params1793 == NULL }).value) {
    {
        {
            tmp2341795 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1793));
            return tmp2341795;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1797 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    b1796 = $tmp1797;
    if (((panda$core$Bit) { b1796 == NULL }).value) {
    {
        {
            tmp2351798 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1796));
            }
            return tmp2351798;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1800 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1799 = $tmp1800;
    panda$core$String* $tmp1802 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1799);
    tokenText1801 = $tmp1802;
    panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1799.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1803 = $tmp1804.value;
    if (!$tmp1803) goto $l1805;
    panda$core$Bit $tmp1808 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1801, &$s1807);
    bool $tmp1806 = $tmp1808.value;
    if ($tmp1806) goto $l1809;
    panda$core$Bit $tmp1811 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1801, &$s1810);
    $tmp1806 = $tmp1811.value;
    $l1809:;
    panda$core$Bit $tmp1812 = { $tmp1806 };
    $tmp1803 = $tmp1812.value;
    $l1805:;
    panda$core$Bit $tmp1813 = { $tmp1803 };
    if ($tmp1813.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1815 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1814 = $tmp1815;
        if (((panda$core$Bit) { post1814 == NULL }).value) {
        {
            {
                tmp2361816 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1814));
                {
                    tmp2371817 = tmp2361816;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1793));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1801));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1796));
                    }
                    return tmp2371817;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1814));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1819 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1820, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1819, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start1789.value).position, p_doccomment, p_annotations, $tmp1820, &$s1821, params1793, NULL, b1796);
        tmp2381818 = $tmp1819;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1793));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1801));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1796));
        }
        return tmp2381818;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1822;
    org$pandalanguage$pandac$ASTNode* tmp2391824;
    org$pandalanguage$pandac$ASTNode* tmp2401825;
    org$pandalanguage$pandac$ASTNode* $tmp1823 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1822 = $tmp1823;
    if (((panda$core$Bit) { decl1822 == NULL }).value) {
    {
        {
            tmp2391824 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1822));
            return tmp2391824;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp1828 = (($fn1827) decl1822->$class->vtable[2])(decl1822);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1826, ((panda$core$Int64) { 14 }), $tmp1828, p_doccomment, p_annotations, decl1822);
        tmp2401825 = $tmp1826;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1822));
        return tmp2401825;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1829;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1830;
    panda$collections$Array* fields1833;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1835;
    org$pandalanguage$pandac$ASTNode* field1839;
    org$pandalanguage$pandac$ASTNode* tmp2411841;
    org$pandalanguage$pandac$ASTNode* tmp2431842;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1845;
    org$pandalanguage$pandac$ASTNode* tmp2421848;
    org$pandalanguage$pandac$ASTNode* tmp2441849;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1850;
    org$pandalanguage$pandac$ASTNode* tmp2451853;
    org$pandalanguage$pandac$ASTNode* tmp2461854;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1830, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1832 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1830, &$s1831);
    name1829 = $tmp1832;
    if (((panda$core$Bit) { !name1829.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1834 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1834);
    fields1833 = $tmp1834;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1835, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1836 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1835);
    if (((panda$core$Bit) { $tmp1836.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1837 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1838 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1837.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1838.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1840 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1839 = $tmp1840;
            if (((panda$core$Bit) { field1839 == NULL }).value) {
            {
                {
                    tmp2411841 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1839));
                    {
                        tmp2431842 = tmp2411841;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1833));
                        return tmp2431842;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1833, ((panda$core$Object*) field1839));
            $l1843:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1845, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1846 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1845);
            if (!((panda$core$Bit) { $tmp1846.nonnull }).value) goto $l1844;
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1839));
                    org$pandalanguage$pandac$ASTNode* $tmp1847 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    field1839 = $tmp1847;
                }
                if (((panda$core$Bit) { field1839 == NULL }).value) {
                {
                    {
                        tmp2421848 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1839));
                        {
                            tmp2441849 = tmp2421848;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1833));
                            return tmp2441849;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1833, ((panda$core$Object*) field1839));
            }
            goto $l1843;
            $l1844:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1839));
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1850, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1852 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1850, &$s1851);
        if (((panda$core$Bit) { !$tmp1852.nonnull }).value) {
        {
            {
                tmp2451853 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1833));
                return tmp2451853;
            }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1855 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1856 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1829.value));
        panda$collections$ImmutableArray* $tmp1857 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1833);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1855, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1829.value).position, p_doccomment, $tmp1856, $tmp1857);
        tmp2461854 = $tmp1855;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1833));
        return tmp2461854;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1858;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1859;
    org$pandalanguage$pandac$parser$Token$nullable name1862;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1863;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1866;
    panda$collections$Array* members1869;
    org$pandalanguage$pandac$ASTNode* dc1871;
    org$pandalanguage$pandac$parser$Token next1874;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_131876;
    org$pandalanguage$pandac$ASTNode* c1922;
    org$pandalanguage$pandac$ASTNode* tmp2471924;
    org$pandalanguage$pandac$ASTNode* tmp2481925;
    panda$collections$ImmutableArray* a1926;
    org$pandalanguage$pandac$parser$Token next1930;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_131932;
    org$pandalanguage$pandac$ASTNode* tmp2541941;
    org$pandalanguage$pandac$ASTNode* tmp2551954;
    org$pandalanguage$pandac$ASTNode* decl1957;
    org$pandalanguage$pandac$ASTNode* tmp2491959;
    org$pandalanguage$pandac$ASTNode* tmp2561960;
    org$pandalanguage$pandac$ASTNode* decl1963;
    org$pandalanguage$pandac$ASTNode* tmp2501965;
    org$pandalanguage$pandac$ASTNode* tmp2571966;
    org$pandalanguage$pandac$ASTNode* decl1969;
    org$pandalanguage$pandac$ASTNode* tmp2511971;
    org$pandalanguage$pandac$ASTNode* tmp2581972;
    org$pandalanguage$pandac$ASTNode* decl1979;
    org$pandalanguage$pandac$ASTNode* tmp2521981;
    org$pandalanguage$pandac$ASTNode* tmp2591982;
    org$pandalanguage$pandac$ASTNode* decl1997;
    org$pandalanguage$pandac$ASTNode* tmp2531999;
    org$pandalanguage$pandac$ASTNode* tmp2602000;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2003;
    org$pandalanguage$pandac$ASTNode* tmp2612010;
    org$pandalanguage$pandac$ASTNode* tmp2622011;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2013;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1859, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1861 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1859, &$s1860);
    start1858 = $tmp1861;
    if (((panda$core$Bit) { !start1858.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1863, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1865 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1863, &$s1864);
    name1862 = $tmp1865;
    if (((panda$core$Bit) { !name1862.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1866, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1868 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1866, &$s1867);
    if (((panda$core$Bit) { !$tmp1868.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1870 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1870);
    members1869 = $tmp1870;
    dc1871 = NULL;
    $l1872:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1875 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1874 = $tmp1875;
        {
            $match$1854_131876 = next1874.kind;
            panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1885 = $tmp1886.value;
            if ($tmp1885) goto $l1887;
            panda$core$Bit $tmp1888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1885 = $tmp1888.value;
            $l1887:;
            panda$core$Bit $tmp1889 = { $tmp1885 };
            bool $tmp1884 = $tmp1889.value;
            if ($tmp1884) goto $l1890;
            panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1884 = $tmp1891.value;
            $l1890:;
            panda$core$Bit $tmp1892 = { $tmp1884 };
            bool $tmp1883 = $tmp1892.value;
            if ($tmp1883) goto $l1893;
            panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1883 = $tmp1894.value;
            $l1893:;
            panda$core$Bit $tmp1895 = { $tmp1883 };
            bool $tmp1882 = $tmp1895.value;
            if ($tmp1882) goto $l1896;
            panda$core$Bit $tmp1897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1882 = $tmp1897.value;
            $l1896:;
            panda$core$Bit $tmp1898 = { $tmp1882 };
            bool $tmp1881 = $tmp1898.value;
            if ($tmp1881) goto $l1899;
            panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1881 = $tmp1900.value;
            $l1899:;
            panda$core$Bit $tmp1901 = { $tmp1881 };
            bool $tmp1880 = $tmp1901.value;
            if ($tmp1880) goto $l1902;
            panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1880 = $tmp1903.value;
            $l1902:;
            panda$core$Bit $tmp1904 = { $tmp1880 };
            bool $tmp1879 = $tmp1904.value;
            if ($tmp1879) goto $l1905;
            panda$core$Bit $tmp1906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1879 = $tmp1906.value;
            $l1905:;
            panda$core$Bit $tmp1907 = { $tmp1879 };
            bool $tmp1878 = $tmp1907.value;
            if ($tmp1878) goto $l1908;
            panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1878 = $tmp1909.value;
            $l1908:;
            panda$core$Bit $tmp1910 = { $tmp1878 };
            bool $tmp1877 = $tmp1910.value;
            if ($tmp1877) goto $l1911;
            panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1877 = $tmp1912.value;
            $l1911:;
            panda$core$Bit $tmp1913 = { $tmp1877 };
            if ($tmp1913.value) {
            {
                goto $l1873;
            }
            }
            else {
            panda$core$Bit $tmp1914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1914.value) {
            {
                if (((panda$core$Bit) { dc1871 != NULL }).value) {
                {
                    panda$core$String* $tmp1916 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1874);
                    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1915, $tmp1916);
                    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1918);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1874, $tmp1919);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    org$pandalanguage$pandac$ASTNode* $tmp1920 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1871 = $tmp1920;
                }
            }
            }
            else {
            panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131876.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1921.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1923 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1871);
                c1922 = $tmp1923;
                if (((panda$core$Bit) { c1922 == NULL }).value) {
                {
                    {
                        tmp2471924 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c1922));
                        {
                            tmp2481925 = tmp2471924;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                            }
                            return tmp2481925;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1869, ((panda$core$Object*) c1922));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    dc1871 = NULL;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c1922));
            }
            }
            else {
            {
                goto $l1873;
            }
            }
            }
            }
        }
    }
    }
    $l1873:;
    panda$collections$ImmutableArray* $tmp1927 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init($tmp1927);
    a1926 = $tmp1927;
    $l1928:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1931 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1930 = $tmp1931;
        {
            $match$1878_131932 = next1930.kind;
            panda$core$Bit $tmp1933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1933.value) {
            {
                panda$core$Int64 $tmp1934 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1926);
                panda$core$Bit $tmp1935 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1934, ((panda$core$Int64) { 0 }));
                if ($tmp1935.value) {
                {
                    panda$core$String* $tmp1937 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1930);
                    panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1936, $tmp1937);
                    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, &$s1939);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1930, $tmp1940);
                    {
                        tmp2541941 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                        }
                        return tmp2541941;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                    panda$collections$ImmutableArray* $tmp1942 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                    a1926 = $tmp1942;
                }
            }
            }
            else {
            panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1943.value) {
            {
                bool $tmp1944 = ((panda$core$Bit) { dc1871 != NULL }).value;
                if ($tmp1944) goto $l1945;
                panda$core$Int64 $tmp1946 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1926);
                panda$core$Bit $tmp1947 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1946, ((panda$core$Int64) { 0 }));
                $tmp1944 = $tmp1947.value;
                $l1945:;
                panda$core$Bit $tmp1948 = { $tmp1944 };
                if ($tmp1948.value) {
                {
                    panda$core$String* $tmp1950 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1930);
                    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1949, $tmp1950);
                    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1930, $tmp1953);
                    {
                        tmp2551954 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                        }
                        return tmp2551954;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    org$pandalanguage$pandac$ASTNode* $tmp1955 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1871 = $tmp1955;
                }
            }
            }
            else {
            panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1956.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1958 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1871, a1926);
                decl1957 = $tmp1958;
                if (((panda$core$Bit) { decl1957 == NULL }).value) {
                {
                    {
                        tmp2491959 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1957));
                        {
                            tmp2561960 = tmp2491959;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                            }
                            return tmp2561960;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1869, ((panda$core$Object*) decl1957));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    dc1871 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                    panda$collections$ImmutableArray* $tmp1961 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1961);
                    a1926 = $tmp1961;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1957));
            }
            }
            else {
            panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1962.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1964 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1871, a1926);
                decl1963 = $tmp1964;
                if (((panda$core$Bit) { decl1963 == NULL }).value) {
                {
                    {
                        tmp2501965 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1963));
                        {
                            tmp2571966 = tmp2501965;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                            }
                            return tmp2571966;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1869, ((panda$core$Object*) decl1963));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    dc1871 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                    panda$collections$ImmutableArray* $tmp1967 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1967);
                    a1926 = $tmp1967;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1963));
            }
            }
            else {
            panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1968.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1970 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1871, a1926);
                decl1969 = $tmp1970;
                if (((panda$core$Bit) { decl1969 == NULL }).value) {
                {
                    {
                        tmp2511971 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1969));
                        {
                            tmp2581972 = tmp2511971;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                            }
                            return tmp2581972;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1869, ((panda$core$Object*) decl1969));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    dc1871 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                    panda$collections$ImmutableArray* $tmp1973 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1973);
                    a1926 = $tmp1973;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1969));
            }
            }
            else {
            panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp1974 = $tmp1975.value;
            if ($tmp1974) goto $l1976;
            panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1974 = $tmp1977.value;
            $l1976:;
            panda$core$Bit $tmp1978 = { $tmp1974 };
            if ($tmp1978.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1980 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1871, a1926);
                decl1979 = $tmp1980;
                if (((panda$core$Bit) { decl1979 == NULL }).value) {
                {
                    {
                        tmp2521981 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1979));
                        {
                            tmp2591982 = tmp2521981;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                            }
                            return tmp2591982;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1869, ((panda$core$Object*) decl1979));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    dc1871 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                    panda$collections$ImmutableArray* $tmp1983 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1983);
                    a1926 = $tmp1983;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1979));
            }
            }
            else {
            panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp1986 = $tmp1987.value;
            if ($tmp1986) goto $l1988;
            panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1986 = $tmp1989.value;
            $l1988:;
            panda$core$Bit $tmp1990 = { $tmp1986 };
            bool $tmp1985 = $tmp1990.value;
            if ($tmp1985) goto $l1991;
            panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1985 = $tmp1992.value;
            $l1991:;
            panda$core$Bit $tmp1993 = { $tmp1985 };
            bool $tmp1984 = $tmp1993.value;
            if ($tmp1984) goto $l1994;
            panda$core$Bit $tmp1995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1984 = $tmp1995.value;
            $l1994:;
            panda$core$Bit $tmp1996 = { $tmp1984 };
            if ($tmp1996.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1998 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1871, a1926);
                decl1997 = $tmp1998;
                if (((panda$core$Bit) { decl1997 == NULL }).value) {
                {
                    {
                        tmp2531999 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1997));
                        {
                            tmp2602000 = tmp2531999;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                            }
                            return tmp2602000;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1869, ((panda$core$Object*) decl1997));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                    dc1871 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                    panda$collections$ImmutableArray* $tmp2001 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp2001);
                    a1926 = $tmp2001;
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1997));
            }
            }
            else {
            panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131932.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp2002.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2003, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2003, &$s2004);
                goto $l1929;
            }
            }
            else {
            {
                panda$core$String* $tmp2006 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1930);
                panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2005, $tmp2006);
                panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2008);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1930, $tmp2009);
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                {
                    tmp2612010 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
                    }
                    return tmp2612010;
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
    $l1929:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2012 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2013, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp2014 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1862.value));
        panda$collections$ImmutableArray* $tmp2015 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1869);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2012, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1858.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp2013, $tmp2014, NULL, NULL, $tmp2015);
        tmp2622011 = $tmp2012;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1869));
        }
        return tmp2622011;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2016;
    org$pandalanguage$pandac$ASTNode* dc2018;
    org$pandalanguage$pandac$ASTNode* tmp2632021;
    panda$collections$ImmutableArray* a2022;
    org$pandalanguage$pandac$ASTNode* tmp2642024;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_92025;
    org$pandalanguage$pandac$ASTNode* tmp2652028;
    org$pandalanguage$pandac$ASTNode* tmp2662031;
    org$pandalanguage$pandac$ASTNode* tmp2672034;
    org$pandalanguage$pandac$ASTNode* tmp2682041;
    org$pandalanguage$pandac$ASTNode* tmp2692044;
    org$pandalanguage$pandac$ASTNode* tmp2702059;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2061;
    org$pandalanguage$pandac$ASTNode* tmp2712063;
    org$pandalanguage$pandac$parser$Token $tmp2017 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start2016 = $tmp2017;
    memset(&dc2018, 0, sizeof(dc2018));
    panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start2016.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp2019.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2020 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            dc2018 = $tmp2020;
        }
        if (((panda$core$Bit) { dc2018 == NULL }).value) {
        {
            {
                tmp2632021 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                return tmp2632021;
            }
        }
        }
    }
    }
    else {
    {
        {
            dc2018 = NULL;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp2023 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    a2022 = $tmp2023;
    if (((panda$core$Bit) { a2022 == NULL }).value) {
    {
        {
            tmp2642024 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
            }
            return tmp2642024;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2026 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_92025 = $tmp2026.kind;
        panda$core$Bit $tmp2027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2027.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2029 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2018, a2022);
                tmp2652028 = $tmp2029;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
                }
                return tmp2652028;
            }
        }
        }
        else {
        panda$core$Bit $tmp2030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2030.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2032 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2018, a2022);
                tmp2662031 = $tmp2032;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
                }
                return tmp2662031;
            }
        }
        }
        else {
        panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2033.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2035 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2018, a2022);
                tmp2672034 = $tmp2035;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
                }
                return tmp2672034;
            }
        }
        }
        else {
        panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp2036 = $tmp2037.value;
        if ($tmp2036) goto $l2038;
        panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2036 = $tmp2039.value;
        $l2038:;
        panda$core$Bit $tmp2040 = { $tmp2036 };
        if ($tmp2040.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2042 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2018, a2022);
                tmp2682041 = $tmp2042;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
                }
                return tmp2682041;
            }
        }
        }
        else {
        panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2043.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2045 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2018, a2022);
                tmp2692044 = $tmp2045;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
                }
                return tmp2692044;
            }
        }
        }
        else {
        panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2048 = $tmp2049.value;
        if ($tmp2048) goto $l2050;
        panda$core$Bit $tmp2051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2048 = $tmp2051.value;
        $l2050:;
        panda$core$Bit $tmp2052 = { $tmp2048 };
        bool $tmp2047 = $tmp2052.value;
        if ($tmp2047) goto $l2053;
        panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2047 = $tmp2054.value;
        $l2053:;
        panda$core$Bit $tmp2055 = { $tmp2047 };
        bool $tmp2046 = $tmp2055.value;
        if ($tmp2046) goto $l2056;
        panda$core$Bit $tmp2057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92025.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2046 = $tmp2057.value;
        $l2056:;
        panda$core$Bit $tmp2058 = { $tmp2046 };
        if ($tmp2058.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2060 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2018, a2022);
                tmp2702059 = $tmp2060;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
                }
                return tmp2702059;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2061, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2061, &$s2062);
            {
                tmp2712063 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
                }
                return tmp2712063;
            }
        }
        }
        }
        }
        }
        }
        }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2022));
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2064;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2065;
    org$pandalanguage$pandac$parser$Token$nullable name2068;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2069;
    panda$collections$ImmutableArray* generics2072;
    org$pandalanguage$pandac$ASTNode* tmp2722076;
    panda$collections$ImmutableArray* stypes2077;
    org$pandalanguage$pandac$ASTNode* tmp2732081;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2082;
    org$pandalanguage$pandac$ASTNode* tmp2742085;
    panda$collections$Array* members2086;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2090;
    org$pandalanguage$pandac$ASTNode* member2092;
    org$pandalanguage$pandac$ASTNode* tmp2752094;
    org$pandalanguage$pandac$ASTNode* tmp2762095;
    org$pandalanguage$pandac$ASTNode* tmp2772096;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2098;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2065, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2067 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2065, &$s2066);
    start2064 = $tmp2067;
    if (((panda$core$Bit) { !start2064.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2069, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2071 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2069, &$s2070);
    name2068 = $tmp2071;
    if (((panda$core$Bit) { !name2068.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2072, 0, sizeof(generics2072));
    org$pandalanguage$pandac$parser$Token $tmp2073 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2073.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2074.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2075 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2072 = $tmp2075;
        }
        if (((panda$core$Bit) { generics2072 == NULL }).value) {
        {
            {
                tmp2722076 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2072));
                return tmp2722076;
            }
        }
        }
    }
    }
    else {
    {
        {
            generics2072 = NULL;
        }
    }
    }
    memset(&stypes2077, 0, sizeof(stypes2077));
    org$pandalanguage$pandac$parser$Token $tmp2078 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2078.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2079.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2080 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            stypes2077 = $tmp2080;
        }
        if (((panda$core$Bit) { stypes2077 == NULL }).value) {
        {
            {
                tmp2732081 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2072));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2077));
                }
                return tmp2732081;
            }
        }
        }
    }
    }
    else {
    {
        {
            stypes2077 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2082, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2084 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2082, &$s2083);
    if (((panda$core$Bit) { !$tmp2084.nonnull }).value) {
    {
        {
            tmp2742085 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2077));
            }
            return tmp2742085;
        }
    }
    }
    panda$collections$Array* $tmp2087 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2087);
    members2086 = $tmp2087;
    $l2088:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2090, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2091 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2090);
    if (!((panda$core$Bit) { !$tmp2091.nonnull }).value) goto $l2089;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2093 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2092 = $tmp2093;
        if (((panda$core$Bit) { member2092 == NULL }).value) {
        {
            {
                tmp2752094 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2092));
                {
                    tmp2762095 = tmp2752094;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2072));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2086));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2077));
                    }
                    return tmp2762095;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2086, ((panda$core$Object*) member2092));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2092));
    }
    goto $l2088;
    $l2089:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2097 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2098, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2099 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2068.value));
        panda$collections$ImmutableArray* $tmp2100 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2086);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2097, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2064.value).position, p_doccomment, p_annotations, $tmp2098, $tmp2099, generics2072, stypes2077, $tmp2100);
        tmp2772096 = $tmp2097;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2072));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2086));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2077));
        }
        return tmp2772096;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2101;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2102;
    org$pandalanguage$pandac$parser$Token$nullable name2105;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2106;
    panda$collections$ImmutableArray* generics2109;
    org$pandalanguage$pandac$ASTNode* tmp2782113;
    panda$collections$Array* intfs2115;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2117;
    org$pandalanguage$pandac$ASTNode* t2119;
    org$pandalanguage$pandac$ASTNode* tmp2792121;
    org$pandalanguage$pandac$ASTNode* tmp2812122;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2125;
    org$pandalanguage$pandac$ASTNode* tmp2802128;
    org$pandalanguage$pandac$ASTNode* tmp2822129;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2130;
    org$pandalanguage$pandac$ASTNode* tmp2832133;
    panda$collections$Array* members2134;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2138;
    org$pandalanguage$pandac$ASTNode* member2140;
    org$pandalanguage$pandac$ASTNode* tmp2842142;
    org$pandalanguage$pandac$ASTNode* tmp2852143;
    org$pandalanguage$pandac$ASTNode* tmp2862144;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2146;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2102, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2104 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2102, &$s2103);
    start2101 = $tmp2104;
    if (((panda$core$Bit) { !start2101.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2106, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2108 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2106, &$s2107);
    name2105 = $tmp2108;
    if (((panda$core$Bit) { !name2105.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2109, 0, sizeof(generics2109));
    org$pandalanguage$pandac$parser$Token $tmp2110 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2110.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2111.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2112 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2109 = $tmp2112;
        }
        if (((panda$core$Bit) { generics2109 == NULL }).value) {
        {
            {
                tmp2782113 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2109));
                return tmp2782113;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp2114 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2114);
            generics2109 = $tmp2114;
        }
    }
    }
    panda$collections$Array* $tmp2116 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2116);
    intfs2115 = $tmp2116;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2117, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2118 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2117);
    if (((panda$core$Bit) { $tmp2118.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2120 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t2119 = $tmp2120;
        if (((panda$core$Bit) { t2119 == NULL }).value) {
        {
            {
                tmp2792121 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2119));
                {
                    tmp2812122 = tmp2792121;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2109));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2115));
                    }
                    return tmp2812122;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2115, ((panda$core$Object*) t2119));
        $l2123:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2125, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2126 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2125);
        if (!((panda$core$Bit) { $tmp2126.nonnull }).value) goto $l2124;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2119));
                org$pandalanguage$pandac$ASTNode* $tmp2127 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t2119 = $tmp2127;
            }
            if (((panda$core$Bit) { t2119 == NULL }).value) {
            {
                {
                    tmp2802128 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2119));
                    {
                        tmp2822129 = tmp2802128;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2109));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2115));
                        }
                        return tmp2822129;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2115, ((panda$core$Object*) t2119));
        }
        goto $l2123;
        $l2124:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2119));
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2130, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2132 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2130, &$s2131);
    if (((panda$core$Bit) { !$tmp2132.nonnull }).value) {
    {
        {
            tmp2832133 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2115));
            }
            return tmp2832133;
        }
    }
    }
    panda$collections$Array* $tmp2135 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2135);
    members2134 = $tmp2135;
    $l2136:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2138, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2139 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2138);
    if (!((panda$core$Bit) { !$tmp2139.nonnull }).value) goto $l2137;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2141 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2140 = $tmp2141;
        if (((panda$core$Bit) { member2140 == NULL }).value) {
        {
            {
                tmp2842142 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2140));
                {
                    tmp2852143 = tmp2842142;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2109));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2115));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2134));
                    }
                    return tmp2852143;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2134, ((panda$core$Object*) member2140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2140));
    }
    goto $l2136;
    $l2137:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2145 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2146, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp2147 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2105.value));
        panda$collections$ImmutableArray* $tmp2148 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs2115);
        panda$collections$ImmutableArray* $tmp2149 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2134);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2145, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2101.value).position, p_doccomment, p_annotations, $tmp2146, $tmp2147, generics2109, $tmp2148, $tmp2149);
        tmp2862144 = $tmp2145;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2109));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2134));
        }
        return tmp2862144;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_92150;
    {
        org$pandalanguage$pandac$parser$Token $tmp2151 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_92150 = $tmp2151.kind;
        panda$core$Bit $tmp2152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2152.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2153 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2153;
        }
        }
        else {
        panda$core$Bit $tmp2154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2154.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2155 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2155;
        }
        }
        else {
        panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2161 = $tmp2162.value;
        if ($tmp2161) goto $l2163;
        panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2161 = $tmp2164.value;
        $l2163:;
        panda$core$Bit $tmp2165 = { $tmp2161 };
        bool $tmp2160 = $tmp2165.value;
        if ($tmp2160) goto $l2166;
        panda$core$Bit $tmp2167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp2160 = $tmp2167.value;
        $l2166:;
        panda$core$Bit $tmp2168 = { $tmp2160 };
        bool $tmp2159 = $tmp2168.value;
        if ($tmp2159) goto $l2169;
        panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp2159 = $tmp2170.value;
        $l2169:;
        panda$core$Bit $tmp2171 = { $tmp2159 };
        bool $tmp2158 = $tmp2171.value;
        if ($tmp2158) goto $l2172;
        panda$core$Bit $tmp2173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2158 = $tmp2173.value;
        $l2172:;
        panda$core$Bit $tmp2174 = { $tmp2158 };
        bool $tmp2157 = $tmp2174.value;
        if ($tmp2157) goto $l2175;
        panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp2157 = $tmp2176.value;
        $l2175:;
        panda$core$Bit $tmp2177 = { $tmp2157 };
        bool $tmp2156 = $tmp2177.value;
        if ($tmp2156) goto $l2178;
        panda$core$Bit $tmp2179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92150.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp2156 = $tmp2179.value;
        $l2178:;
        panda$core$Bit $tmp2180 = { $tmp2156 };
        if ($tmp2180.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2181 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2181;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2182 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2182;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2183;
    org$pandalanguage$pandac$ASTNode* entry2189;
    org$pandalanguage$pandac$ASTNode* tmp2872191;
    org$pandalanguage$pandac$ASTNode* tmp2882192;
    org$pandalanguage$pandac$ASTNode* tmp2892194;
    panda$collections$Array* $tmp2184 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2184);
    entries2183 = $tmp2184;
    $l2185:;
    org$pandalanguage$pandac$parser$Token $tmp2187 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2188 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2187.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2188.value) goto $l2186;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2190 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2189 = $tmp2190;
        if (((panda$core$Bit) { entry2189 == NULL }).value) {
        {
            {
                tmp2872191 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2189));
                {
                    tmp2882192 = tmp2872191;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2183));
                    return tmp2882192;
                }
            }
        }
        }
        panda$core$Bit $tmp2193 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2193.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2183, ((panda$core$Object*) entry2189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2189));
    }
    goto $l2185;
    $l2186:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2195 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2196 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2183);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2195, ((panda$core$Int64) { 15 }), $tmp2196);
        tmp2892194 = $tmp2195;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2183));
        return tmp2892194;
    }
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

