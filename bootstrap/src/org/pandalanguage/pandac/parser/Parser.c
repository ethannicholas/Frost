#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
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

typedef void (*$fn71)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn110)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn143)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn205)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn245)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn252)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn260)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn266)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn314)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn355)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn362)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn369)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn381)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn393)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn400)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn412)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn764)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn799)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1377)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1389)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1408)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1858)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    self->path = NULL;
    self->source = NULL;
    org$pandalanguage$pandac$parser$Lexer* $tmp1 = (org$pandalanguage$pandac$parser$Lexer*) pandaAlloc(40);
    $tmp1->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class;
    $tmp1->refCount.value = 1;
    org$pandalanguage$pandac$parser$Lexer$init($tmp1);
    self->lexer = $tmp1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp3 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaAlloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp3->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp3);
    self->pushbackBuffer = $tmp3;
    panda$collections$Stack* $tmp5 = (panda$collections$Stack*) pandaAlloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp5->refCount.value = 1;
    panda$collections$Stack$init($tmp5);
    self->commaSeparatedExpressionContext = $tmp5;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaAlloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp7->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    self->speculativeBuffer = $tmp7;
    {
        panda$core$Object* $tmp9 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_errors));
        self->errors = ((org$pandalanguage$pandac$ErrorReporter*) $tmp9);
    }
    panda$core$Bit$wrapper* $tmp10;
    $tmp10 = (panda$core$Bit$wrapper*) pandaAlloc(13);
    $tmp10->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp10->refCount = 1;
    $tmp10->value = ((panda$core$Bit) { false });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp10));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        panda$core$Object* $tmp11 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_path));
        self->path = ((panda$io$File*) $tmp11);
    }
    {
        panda$core$Object* $tmp12 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_source));
        self->source = ((panda$core$String*) $tmp12);
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx15;
    org$pandalanguage$pandac$parser$Token result18;
    org$pandalanguage$pandac$parser$Token result20;
    panda$core$Int64 $tmp13 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp14 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp13, ((panda$core$Int64) { 0 }));
    if ($tmp14.value) {
    {
        panda$core$Int64 $tmp16 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp17 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp16, ((panda$core$Int64) { 1 }));
        idx15 = $tmp17;
        org$pandalanguage$pandac$parser$Token $tmp19 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx15);
        result18 = $tmp19;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx15);
        return result18;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp21 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result20 = $tmp21;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result20);
    }
    }
    return result20;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result24;
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1326;
    org$pandalanguage$pandac$parser$Token next31;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2533;
    panda$core$Char8 $tmp36;
    org$pandalanguage$pandac$parser$Token next42;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2544;
    $l22:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp25 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result24 = $tmp25;
        {
            $match$57_1326 = result24.kind;
            panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1326.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp27.value) {
            {
                goto $l22;
            }
            }
            else {
            panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1326.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp28.value) {
            {
                $l29:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp32 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next31 = $tmp32;
                    {
                        $match$63_2533 = next31.kind;
                        panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2533.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp34.value) {
                        {
                            panda$core$String* $tmp35 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next31);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp37 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp35, $tmp36);
                            if ($tmp37.value) {
                            {
                                goto $l22;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2533.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp38.value) {
                        {
                            return next31;
                        }
                        }
                        }
                    }
                }
                }
                $l30:;
            }
            }
            else {
            panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1326.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp39.value) {
            {
                $l40:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp43 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next42 = $tmp43;
                    {
                        $match$75_2544 = next42.kind;
                        panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2544.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp45.value) {
                        {
                            goto $l22;
                        }
                        }
                        else {
                        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2544.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp46.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result24, &$s47);
                            return next42;
                        }
                        }
                        }
                    }
                }
                }
                $l41:;
            }
            }
            else {
            {
                return result24;
            }
            }
            }
            }
        }
    }
    }
    $l23:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp48 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp48, ((panda$core$Int64) { 0 }));
    if ($tmp49.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp50 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp50);
    }
    }
    panda$core$Int64 $tmp51 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp52 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp51, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp53 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp52);
    return $tmp53;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result54;
    org$pandalanguage$pandac$parser$Token $tmp55 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result54 = $tmp55;
    panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result54.kind.$rawValue, p_kind.$rawValue);
    if ($tmp56.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result54, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result54);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result57;
    org$pandalanguage$pandac$parser$Token $tmp58 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result57 = $tmp58;
    panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result57.kind.$rawValue, p_kind.$rawValue);
    if ($tmp59.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result57, true });
    }
    }
    panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s60, p_expected);
    panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp61, &$s62);
    panda$core$String* $tmp64 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result57);
    panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, $tmp64);
    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, &$s66);
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result57, $tmp67);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp68 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp68.value) {
    {
        ITable* $tmp69 = self->errors->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[0];
        $tmp70(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp72.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp73;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp74 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp75 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp74, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp73, $tmp75, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp77 = $tmp73.start.value;
    panda$core$Int64 i76 = { $tmp77 };
    int64_t $tmp79 = $tmp73.end.value;
    int64_t $tmp80 = $tmp73.step.value;
    bool $tmp81 = $tmp73.inclusive.value;
    bool $tmp88 = $tmp80 > 0;
    if ($tmp88) goto $l86; else goto $l87;
    $l86:;
    if ($tmp81) goto $l89; else goto $l90;
    $l89:;
    if ($tmp77 <= $tmp79) goto $l82; else goto $l84;
    $l90:;
    if ($tmp77 < $tmp79) goto $l82; else goto $l84;
    $l87:;
    if ($tmp81) goto $l91; else goto $l92;
    $l91:;
    if ($tmp77 >= $tmp79) goto $l82; else goto $l84;
    $l92:;
    if ($tmp77 > $tmp79) goto $l82; else goto $l84;
    $l82:;
    {
        org$pandalanguage$pandac$parser$Token $tmp94 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i76);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp94);
    }
    $l85:;
    if ($tmp88) goto $l96; else goto $l97;
    $l96:;
    int64_t $tmp98 = $tmp79 - i76.value;
    if ($tmp81) goto $l99; else goto $l100;
    $l99:;
    if ((uint64_t) $tmp98 >= $tmp80) goto $l95; else goto $l84;
    $l100:;
    if ((uint64_t) $tmp98 > $tmp80) goto $l95; else goto $l84;
    $l97:;
    int64_t $tmp102 = i76.value - $tmp79;
    if ($tmp81) goto $l103; else goto $l104;
    $l103:;
    if ((uint64_t) $tmp102 >= -$tmp80) goto $l95; else goto $l84;
    $l104:;
    if ((uint64_t) $tmp102 > -$tmp80) goto $l95; else goto $l84;
    $l95:;
    i76.value += $tmp80;
    goto $l82;
    $l84:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp106;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp106, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp107 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp106);
    return $tmp107;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp112;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp108 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp108->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp108->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp111 = (($fn110) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp112, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp108, ((panda$core$Int64) { 2 }), $tmp111, p_string, $tmp112, p_chunk);
    return $tmp108;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result113;
    org$pandalanguage$pandac$parser$Token token119;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13121;
    panda$core$String* str123;
    panda$core$Char8 $tmp126;
    org$pandalanguage$pandac$parser$Token escape132;
    panda$core$String* escapeText136;
    panda$core$Char8 c139;
    panda$core$Char8 $match$176_21145;
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
    panda$core$Char8 $tmp161;
    panda$core$Char8 $tmp163;
    panda$core$Char8 $tmp164;
    panda$core$Char8 $tmp166;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp168;
    panda$core$MutableString* $tmp114 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp114->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp114->refCount.value = 1;
    panda$core$MutableString$init($tmp114);
    panda$core$Object* $tmp116 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp114));
    result113 = ((panda$core$MutableString*) $tmp116);
    $l117:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp120 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token119 = $tmp120;
        {
            $match$157_13121 = token119.kind;
            panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13121.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp122.value) {
            {
                panda$core$String* $tmp124 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token119);
                panda$core$Object* $tmp125 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp124));
                str123 = ((panda$core$String*) $tmp125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp126, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp127 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str123, $tmp126);
                if ($tmp127.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token119, &$s128);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result113, str123);
            }
            }
            else {
            panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13121.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp129.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token119, &$s130);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13121.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp131.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp133 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape132 = $tmp133;
                panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape132.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp134.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token119, &$s135);
                    return NULL;
                }
                }
                panda$core$String* $tmp137 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape132);
                panda$core$Object* $tmp138 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp137));
                escapeText136 = ((panda$core$String*) $tmp138);
                panda$collections$ListView* $tmp140 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText136);
                ITable* $tmp141 = $tmp140->$class->itable;
                while ($tmp141->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp141 = $tmp141->next;
                }
                $fn143 $tmp142 = $tmp141->methods[0];
                panda$core$Object* $tmp144 = $tmp142($tmp140, ((panda$core$Int64) { 0 }));
                c139 = ((panda$core$Char8$wrapper*) $tmp144)->value;
                {
                    $match$176_21145 = c139;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp146, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp147 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21145, $tmp146);
                    if ($tmp147.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp148, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result113, $tmp148);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp150 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21145, $tmp149);
                    if ($tmp150.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result113, $tmp151);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp152, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp153 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21145, $tmp152);
                    if ($tmp153.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp154, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result113, $tmp154);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp155, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp156 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21145, $tmp155);
                    if ($tmp156.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp157, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result113, $tmp157);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp158, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp159 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21145, $tmp158);
                    if ($tmp159.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp160, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result113, $tmp160);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp161, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp162 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21145, $tmp161);
                    if ($tmp162.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp163, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result113, $tmp163);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp164, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp165 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21145, $tmp164);
                    if ($tmp165.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp166, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result113, $tmp166);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token119, &$s167);
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
                panda$core$String$Index $tmp169 = panda$core$String$start$R$panda$core$String$Index(escapeText136);
                panda$core$String$Index $tmp170 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText136, $tmp169);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp168, ((panda$core$String$Index$nullable) { $tmp170, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp171 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText136, $tmp168);
                panda$core$MutableString$append$panda$core$String(result113, $tmp171);
            }
            }
            else {
            panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13121.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp172.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token119);
                panda$core$String* $tmp173 = panda$core$MutableString$finish$R$panda$core$String(result113);
                return $tmp173;
            }
            }
            else {
            {
                panda$core$String* $tmp174 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token119);
                panda$core$MutableString$append$panda$core$String(result113, $tmp174);
            }
            }
            }
            }
            }
        }
    }
    }
    $l118:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result175;
    org$pandalanguage$pandac$parser$Token token181;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13183;
    panda$core$String* str185;
    panda$core$Char8 $tmp188;
    org$pandalanguage$pandac$parser$Token escape194;
    panda$core$String* escapeText198;
    panda$core$Char8 c201;
    panda$core$Char8 $match$221_21207;
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
    panda$core$Char8 $tmp223;
    panda$core$Char8 $tmp225;
    panda$core$Char8 $tmp226;
    panda$core$Char8 $tmp228;
    panda$core$Char8 $tmp229;
    panda$core$Char8 $tmp231;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp233;
    panda$core$MutableString* $tmp176 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp176->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp176->refCount.value = 1;
    panda$core$MutableString$init($tmp176);
    panda$core$Object* $tmp178 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp176));
    result175 = ((panda$core$MutableString*) $tmp178);
    $l179:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp182 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token181 = $tmp182;
        {
            $match$202_13183 = token181.kind;
            panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13183.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp184.value) {
            {
                panda$core$String* $tmp186 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token181);
                panda$core$Object* $tmp187 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp186));
                str185 = ((panda$core$String*) $tmp187);
                panda$core$Char8$init$panda$core$UInt8(&$tmp188, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp189 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str185, $tmp188);
                if ($tmp189.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token181, &$s190);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(result175, str185);
            }
            }
            else {
            panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13183.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp191.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token181, &$s192);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13183.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp193.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp195 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape194 = $tmp195;
                panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape194.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp196.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token181, &$s197);
                    return NULL;
                }
                }
                panda$core$String* $tmp199 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape194);
                panda$core$Object* $tmp200 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp199));
                escapeText198 = ((panda$core$String*) $tmp200);
                panda$collections$ListView* $tmp202 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText198);
                ITable* $tmp203 = $tmp202->$class->itable;
                while ($tmp203->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp203 = $tmp203->next;
                }
                $fn205 $tmp204 = $tmp203->methods[0];
                panda$core$Object* $tmp206 = $tmp204($tmp202, ((panda$core$Int64) { 0 }));
                c201 = ((panda$core$Char8$wrapper*) $tmp206)->value;
                {
                    $match$221_21207 = c201;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp208, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp209 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp208);
                    if ($tmp209.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp210);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp211, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp212 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp211);
                    if ($tmp212.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp213);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp214, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp215 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp214);
                    if ($tmp215.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp216);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp217, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp218 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp217);
                    if ($tmp218.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp219);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp220, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp221 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp220);
                    if ($tmp221.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp222);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp223, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp224 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp223);
                    if ($tmp224.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp225);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp226, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp227 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp226);
                    if ($tmp227.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp228);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp229, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp230 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21207, $tmp229);
                    if ($tmp230.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp231, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result175, $tmp231);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token181, &$s232);
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
                panda$core$String$Index $tmp234 = panda$core$String$start$R$panda$core$String$Index(escapeText198);
                panda$core$String$Index $tmp235 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText198, $tmp234);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp233, ((panda$core$String$Index$nullable) { $tmp235, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp236 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText198, $tmp233);
                panda$core$MutableString$append$panda$core$String(result175, $tmp236);
            }
            }
            else {
            panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13183.$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp237.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token181);
                panda$core$String* $tmp238 = panda$core$MutableString$finish$R$panda$core$String(result175);
                return $tmp238;
            }
            }
            else {
            panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13183.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp239.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token181);
                panda$core$String* $tmp240 = panda$core$MutableString$finish$R$panda$core$String(result175);
                return $tmp240;
            }
            }
            else {
            {
                panda$core$String* $tmp241 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token181);
                panda$core$MutableString$append$panda$core$String(result175, $tmp241);
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l180:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot242;
    org$pandalanguage$pandac$ASTNode* call249;
    org$pandalanguage$pandac$ASTNode* stringType257;
    org$pandalanguage$pandac$parser$Token$Kind $tmp268;
    org$pandalanguage$pandac$ASTNode* $tmp243 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp243->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp243->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp246 = (($fn245) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp243, ((panda$core$Int64) { 13 }), $tmp246, p_expr, &$s247);
    panda$core$Object* $tmp248 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp243));
    dot242 = ((org$pandalanguage$pandac$ASTNode*) $tmp248);
    org$pandalanguage$pandac$ASTNode* $tmp250 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp250->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp250->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp253 = (($fn252) p_expr->$class->vtable[2])(p_expr);
    panda$collections$ImmutableArray* $tmp254 = (panda$collections$ImmutableArray*) pandaAlloc(40);
    $tmp254->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp254->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp254);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp250, ((panda$core$Int64) { 6 }), $tmp253, dot242, $tmp254);
    panda$core$Object* $tmp256 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp250));
    call249 = ((org$pandalanguage$pandac$ASTNode*) $tmp256);
    org$pandalanguage$pandac$ASTNode* $tmp258 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp258->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp258->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp261 = (($fn260) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp258, ((panda$core$Int64) { 35 }), $tmp261, &$s262);
    panda$core$Object* $tmp263 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp258));
    stringType257 = ((org$pandalanguage$pandac$ASTNode*) $tmp263);
    org$pandalanguage$pandac$ASTNode* $tmp264 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp264->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp264->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp267 = (($fn266) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp268, ((panda$core$Int64) { 89 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp264, ((panda$core$Int64) { 2 }), $tmp267, call249, $tmp268, stringType257);
    return $tmp264;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start269;
    org$pandalanguage$pandac$ASTNode* result281;
    panda$core$MutableString* chunk283;
    org$pandalanguage$pandac$parser$Token token289;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13292;
    panda$core$String* str294;
    panda$core$Char8 $tmp297;
    org$pandalanguage$pandac$parser$Token escape303;
    panda$core$String* escapeText307;
    panda$core$Char8 c310;
    panda$core$Char8 $match$287_21316;
    panda$core$Char8 $tmp317;
    panda$core$Char8 $tmp319;
    panda$core$Char8 $tmp320;
    panda$core$Char8 $tmp322;
    panda$core$Char8 $tmp323;
    panda$core$Char8 $tmp325;
    panda$core$Char8 $tmp326;
    panda$core$Char8 $tmp328;
    panda$core$Char8 $tmp329;
    panda$core$Char8 $tmp331;
    panda$core$Char8 $tmp332;
    panda$core$Char8 $tmp334;
    panda$core$Char8 $tmp335;
    org$pandalanguage$pandac$ASTNode* expr337;
    panda$core$String* align340;
    panda$core$String* format342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp344;
    org$pandalanguage$pandac$parser$Token$Kind $tmp348;
    org$pandalanguage$pandac$ASTNode* formattable352;
    org$pandalanguage$pandac$ASTNode* cast359;
    org$pandalanguage$pandac$parser$Token$Kind $tmp364;
    org$pandalanguage$pandac$ASTNode* dot366;
    panda$collections$Array* callArgs373;
    org$pandalanguage$pandac$parser$Token$Kind $tmp385;
    org$pandalanguage$pandac$ASTNode* pandaType390;
    org$pandalanguage$pandac$ASTNode* callTarget397;
    panda$collections$Array* callArgs404;
    panda$core$String* text416;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp436;
    org$pandalanguage$pandac$parser$Token $tmp270 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start269 = $tmp270;
    panda$core$Bit $tmp272 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start269.kind.$rawValue, ((panda$core$Int64) { 7 }));
    bool $tmp271 = $tmp272.value;
    if (!$tmp271) goto $l273;
    panda$core$Bit $tmp274 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start269.kind.$rawValue, ((panda$core$Int64) { 6 }));
    $tmp271 = $tmp274.value;
    $l273:;
    panda$core$Bit $tmp275 = { $tmp271 };
    if ($tmp275.value) {
    {
        panda$core$String* $tmp277 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start269);
        panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s276, $tmp277);
        panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s279);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start269, $tmp280);
        return NULL;
    }
    }
    panda$core$Object* $tmp282 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
    result281 = ((org$pandalanguage$pandac$ASTNode*) $tmp282);
    panda$core$MutableString* $tmp284 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp284->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp284->refCount.value = 1;
    panda$core$MutableString$init($tmp284);
    panda$core$Object* $tmp286 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp284));
    chunk283 = ((panda$core$MutableString*) $tmp286);
    $l287:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp290 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token289 = $tmp290;
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token289.kind.$rawValue, start269.kind.$rawValue);
        if ($tmp291.value) {
        {
            goto $l288;
        }
        }
        {
            $match$268_13292 = token289.kind;
            panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13292.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp293.value) {
            {
                panda$core$String* $tmp295 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token289);
                panda$core$Object* $tmp296 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp295));
                str294 = ((panda$core$String*) $tmp296);
                panda$core$Char8$init$panda$core$UInt8(&$tmp297, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp298 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str294, $tmp297);
                if ($tmp298.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start269, &$s299);
                    return NULL;
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk283, str294);
            }
            }
            else {
            panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13292.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp300.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start269, &$s301);
                return NULL;
            }
            }
            else {
            panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13292.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp302.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp304 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape303 = $tmp304;
                panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape303.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp305.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start269, &$s306);
                    return NULL;
                }
                }
                panda$core$String* $tmp308 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape303);
                panda$core$Object* $tmp309 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp308));
                escapeText307 = ((panda$core$String*) $tmp309);
                panda$collections$ListView* $tmp311 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText307);
                ITable* $tmp312 = $tmp311->$class->itable;
                while ($tmp312->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp312 = $tmp312->next;
                }
                $fn314 $tmp313 = $tmp312->methods[0];
                panda$core$Object* $tmp315 = $tmp313($tmp311, ((panda$core$Int64) { 0 }));
                c310 = ((panda$core$Char8$wrapper*) $tmp315)->value;
                {
                    $match$287_21316 = c310;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp318 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21316, $tmp317);
                    if ($tmp318.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk283, $tmp319);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp321 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21316, $tmp320);
                    if ($tmp321.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk283, $tmp322);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp323, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp324 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21316, $tmp323);
                    if ($tmp324.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk283, $tmp325);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp326, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp327 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21316, $tmp326);
                    if ($tmp327.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk283, $tmp328);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp330 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21316, $tmp329);
                    if ($tmp330.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk283, $tmp331);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp332, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp333 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21316, $tmp332);
                    if ($tmp333.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp334, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk283, $tmp334);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp335, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp336 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21316, $tmp335);
                    if ($tmp336.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp338 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            panda$core$Object* $tmp339 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp338));
                            expr337 = ((org$pandalanguage$pandac$ASTNode*) $tmp339);
                            if (((panda$core$Bit) { expr337 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$core$Object* $tmp341 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                            align340 = ((panda$core$String*) $tmp341);
                            panda$core$Object* $tmp343 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                            format342 = ((panda$core$String*) $tmp343);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp344, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp345 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp344);
                            if (((panda$core$Bit) { $tmp345.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp346 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start269);
                                    panda$core$Object* $tmp347 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp346));
                                    align340 = ((panda$core$String*) $tmp347);
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp348, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp349 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp348);
                            if (((panda$core$Bit) { $tmp349.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp350 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start269);
                                    panda$core$Object* $tmp351 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp350));
                                    format342 = ((panda$core$String*) $tmp351);
                                }
                                if (((panda$core$Bit) { format342 == NULL }).value) {
                                {
                                    return NULL;
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp353 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                $tmp353->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp353->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp356 = (($fn355) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp353, ((panda$core$Int64) { 35 }), $tmp356, &$s357);
                                panda$core$Object* $tmp358 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp353));
                                formattable352 = ((org$pandalanguage$pandac$ASTNode*) $tmp358);
                                org$pandalanguage$pandac$ASTNode* $tmp360 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                $tmp360->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp360->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp363 = (($fn362) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp364, ((panda$core$Int64) { 89 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp360, ((panda$core$Int64) { 2 }), $tmp363, expr337, $tmp364, formattable352);
                                panda$core$Object* $tmp365 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp360));
                                cast359 = ((org$pandalanguage$pandac$ASTNode*) $tmp365);
                                org$pandalanguage$pandac$ASTNode* $tmp367 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                $tmp367->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp367->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp370 = (($fn369) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp367, ((panda$core$Int64) { 13 }), $tmp370, cast359, &$s371);
                                panda$core$Object* $tmp372 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp367));
                                dot366 = ((org$pandalanguage$pandac$ASTNode*) $tmp372);
                                panda$collections$Array* $tmp374 = (panda$collections$Array*) pandaAlloc(41);
                                $tmp374->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp374->refCount.value = 1;
                                panda$collections$Array$init($tmp374);
                                panda$core$Object* $tmp376 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp374));
                                callArgs373 = ((panda$collections$Array*) $tmp376);
                                org$pandalanguage$pandac$ASTNode* $tmp377 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                $tmp377->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp377->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp377, ((panda$core$Int64) { 33 }), start269.position, format342);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs373, ((panda$core$Object*) $tmp377));
                                {
                                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) expr337));
                                    org$pandalanguage$pandac$ASTNode* $tmp379 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                    $tmp379->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp379->refCount.value = 1;
                                    org$pandalanguage$pandac$Position $tmp382 = (($fn381) expr337->$class->vtable[2])(expr337);
                                    panda$collections$ImmutableArray* $tmp383 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs373);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp379, ((panda$core$Int64) { 6 }), $tmp382, dot366, $tmp383);
                                    panda$core$Object* $tmp384 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp379));
                                    expr337 = ((org$pandalanguage$pandac$ASTNode*) $tmp384);
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp385, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp387 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp385, &$s386);
                            if (((panda$core$Bit) { !$tmp387.nonnull }).value) {
                            {
                                return NULL;
                            }
                            }
                            if (((panda$core$Bit) { align340 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format342 == NULL }).value) {
                                {
                                    {
                                        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) expr337));
                                        org$pandalanguage$pandac$ASTNode* $tmp388 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr337);
                                        panda$core$Object* $tmp389 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp388));
                                        expr337 = ((org$pandalanguage$pandac$ASTNode*) $tmp389);
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp391 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                $tmp391->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp391->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp394 = (($fn393) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp391, ((panda$core$Int64) { 35 }), $tmp394, &$s395);
                                panda$core$Object* $tmp396 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp391));
                                pandaType390 = ((org$pandalanguage$pandac$ASTNode*) $tmp396);
                                org$pandalanguage$pandac$ASTNode* $tmp398 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                $tmp398->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp398->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp401 = (($fn400) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp398, ((panda$core$Int64) { 13 }), $tmp401, pandaType390, &$s402);
                                panda$core$Object* $tmp403 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp398));
                                callTarget397 = ((org$pandalanguage$pandac$ASTNode*) $tmp403);
                                panda$collections$Array* $tmp405 = (panda$collections$Array*) pandaAlloc(41);
                                $tmp405->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp405->refCount.value = 1;
                                panda$collections$Array$init($tmp405);
                                panda$core$Object* $tmp407 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp405));
                                callArgs404 = ((panda$collections$Array*) $tmp407);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs404, ((panda$core$Object*) expr337));
                                org$pandalanguage$pandac$ASTNode* $tmp408 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                $tmp408->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp408->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp408, ((panda$core$Int64) { 33 }), start269.position, align340);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs404, ((panda$core$Object*) $tmp408));
                                {
                                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) expr337));
                                    org$pandalanguage$pandac$ASTNode* $tmp410 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                    $tmp410->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp410->refCount.value = 1;
                                    org$pandalanguage$pandac$Position $tmp413 = (($fn412) expr337->$class->vtable[2])(expr337);
                                    panda$collections$ImmutableArray* $tmp414 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs404);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp410, ((panda$core$Int64) { 6 }), $tmp413, callTarget397, $tmp414);
                                    panda$core$Object* $tmp415 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp410));
                                    expr337 = ((org$pandalanguage$pandac$ASTNode*) $tmp415);
                                }
                            }
                            }
                            panda$core$String* $tmp417 = panda$core$MutableString$finish$R$panda$core$String(chunk283);
                            panda$core$Object* $tmp418 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp417));
                            text416 = ((panda$core$String*) $tmp418);
                            {
                                panda$core$MutableString* $tmp419 = (panda$core$MutableString*) pandaAlloc(48);
                                $tmp419->$class = (panda$core$Class*) &panda$core$MutableString$class;
                                $tmp419->refCount.value = 1;
                                panda$core$MutableString$init($tmp419);
                                panda$core$Object* $tmp421 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp419));
                                chunk283 = ((panda$core$MutableString*) $tmp421);
                            }
                            panda$core$Bit $tmp424 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text416, &$s423);
                            bool $tmp422 = $tmp424.value;
                            if ($tmp422) goto $l425;
                            $tmp422 = ((panda$core$Bit) { result281 != NULL }).value;
                            $l425:;
                            panda$core$Bit $tmp426 = { $tmp422 };
                            if ($tmp426.value) {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result281));
                                    org$pandalanguage$pandac$ASTNode* $tmp427 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                                    $tmp427->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp427->refCount.value = 1;
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp427, ((panda$core$Int64) { 33 }), start269.position, text416);
                                    org$pandalanguage$pandac$ASTNode* $tmp429 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result281, $tmp427);
                                    panda$core$Object* $tmp430 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp429));
                                    result281 = ((org$pandalanguage$pandac$ASTNode*) $tmp430);
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result281));
                                    org$pandalanguage$pandac$ASTNode* $tmp431 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result281, expr337);
                                    panda$core$Object* $tmp432 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp431));
                                    result281 = ((org$pandalanguage$pandac$ASTNode*) $tmp432);
                                }
                            }
                            }
                            else {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result281));
                                    org$pandalanguage$pandac$ASTNode* $tmp433 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr337);
                                    panda$core$Object* $tmp434 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp433));
                                    result281 = ((org$pandalanguage$pandac$ASTNode*) $tmp434);
                                }
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token289, &$s435);
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
                panda$core$String$Index $tmp437 = panda$core$String$start$R$panda$core$String$Index(escapeText307);
                panda$core$String$Index $tmp438 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText307, $tmp437);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp436, ((panda$core$String$Index$nullable) { $tmp438, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp439 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText307, $tmp436);
                panda$core$MutableString$append$panda$core$String(chunk283, $tmp439);
            }
            }
            else {
            {
                panda$core$String* $tmp440 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token289);
                panda$core$MutableString$append$panda$core$String(chunk283, $tmp440);
            }
            }
            }
            }
        }
    }
    }
    $l288:;
    org$pandalanguage$pandac$ASTNode* $tmp441 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp441->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp441->refCount.value = 1;
    panda$core$String* $tmp443 = panda$core$MutableString$finish$R$panda$core$String(chunk283);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp441, ((panda$core$Int64) { 33 }), start269.position, $tmp443);
    org$pandalanguage$pandac$ASTNode* $tmp444 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result281, $tmp441);
    return $tmp444;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t445;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9447;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp461;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp468;
    org$pandalanguage$pandac$ASTNode* result498;
    org$pandalanguage$pandac$parser$Token$Kind $tmp501;
    org$pandalanguage$pandac$parser$Token $tmp446 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t445 = $tmp446;
    {
        $match$362_9447 = t445.kind;
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp448.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp449 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp449->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp449->refCount.value = 1;
            panda$core$String* $tmp451 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t445);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp449, ((panda$core$Int64) { 18 }), t445.position, $tmp451);
            return $tmp449;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp452.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp453 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp453->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp453->refCount.value = 1;
            panda$core$String* $tmp455 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t445);
            panda$core$UInt64$nullable $tmp456 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp455);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp453, ((panda$core$Int64) { 20 }), t445.position, ((panda$core$UInt64) $tmp456.value));
            return $tmp453;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp458 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp458->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp458->refCount.value = 1;
            panda$core$String* $tmp460 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t445);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp461, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp462 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp460, $tmp461);
            panda$core$UInt64$nullable $tmp463 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp462, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp458, ((panda$core$Int64) { 20 }), t445.position, ((panda$core$UInt64) $tmp463.value));
            return $tmp458;
        }
        }
        else {
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp464.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp465 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp465->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp465->refCount.value = 1;
            panda$core$String* $tmp467 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t445);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp468, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp469 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp467, $tmp468);
            panda$core$UInt64$nullable $tmp470 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp469, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp465, ((panda$core$Int64) { 20 }), t445.position, ((panda$core$UInt64) $tmp470.value));
            return $tmp465;
        }
        }
        else {
        panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp471.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp472 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp472->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp472->refCount.value = 1;
            panda$core$String* $tmp474 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t445);
            panda$core$Real64$nullable $tmp475 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp474);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp472, ((panda$core$Int64) { 30 }), t445.position, ((panda$core$Real64) $tmp475.value));
            return $tmp472;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp477 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp477->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp477, ((panda$core$Int64) { 32 }), t445.position);
            return $tmp477;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp480 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp480->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp480->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp480, ((panda$core$Int64) { 34 }), t445.position);
            return $tmp480;
        }
        }
        else {
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp482.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp483 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp483->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp483->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp483, ((panda$core$Int64) { 24 }), t445.position);
            return $tmp483;
        }
        }
        else {
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp485.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp486 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp486->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp486->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp486, ((panda$core$Int64) { 3 }), t445.position, ((panda$core$Bit) { true }));
            return $tmp486;
        }
        }
        else {
        panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp488.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp489 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp489->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp489->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp489, ((panda$core$Int64) { 3 }), t445.position, ((panda$core$Bit) { false }));
            return $tmp489;
        }
        }
        else {
        panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp491 = $tmp492.value;
        if ($tmp491) goto $l493;
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp491 = $tmp494.value;
        $l493:;
        panda$core$Bit $tmp495 = { $tmp491 };
        if ($tmp495.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t445);
            org$pandalanguage$pandac$ASTNode* $tmp496 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp496;
        }
        }
        else {
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9447.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp497.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp499 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp500 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp499));
            result498 = ((org$pandalanguage$pandac$ASTNode*) $tmp500);
            if (((panda$core$Bit) { result498 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp501, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp503 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp501, &$s502);
            if (((panda$core$Bit) { !$tmp503.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result498;
        }
        }
        else {
        {
            panda$core$String* $tmp505 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t445);
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s504, $tmp505);
            panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, &$s507);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t445, $tmp508);
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
    org$pandalanguage$pandac$ASTNode* $match$403_9509;
    panda$core$String* text511;
    org$pandalanguage$pandac$ASTNode* base514;
    panda$core$String* field516;
    panda$core$String* result518;
    {
        $match$403_9509 = p_expr;
        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9509->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp510.value) {
        {
            panda$core$String** $tmp512 = ((panda$core$String**) ((char*) $match$403_9509->$data + 16));
            text511 = *$tmp512;
            return text511;
        }
        }
        else {
        panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9509->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp513.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp515 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9509->$data + 16));
            base514 = *$tmp515;
            panda$core$String** $tmp517 = ((panda$core$String**) ((char*) $match$403_9509->$data + 24));
            field516 = *$tmp517;
            panda$core$String* $tmp519 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base514);
            panda$core$Object* $tmp520 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp519));
            result518 = ((panda$core$String*) $tmp520);
            if (((panda$core$Bit) { result518 != NULL }).value) {
            {
                {
                    panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s521, field516);
                    panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result518, $tmp522);
                    panda$core$Object* $tmp524 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp523));
                    result518 = ((panda$core$String*) $tmp524);
                }
            }
            }
            return result518;
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
    org$pandalanguage$pandac$parser$Token name525;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9527;
    org$pandalanguage$pandac$parser$Token token615;
    org$pandalanguage$pandac$parser$Token$Kind $tmp621;
    org$pandalanguage$pandac$parser$Token$Kind $tmp624;
    org$pandalanguage$pandac$parser$Token $tmp526 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name525 = $tmp526;
    {
        $match$423_9527 = name525.kind;
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp548 = $tmp549.value;
        if ($tmp548) goto $l550;
        panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp548 = $tmp551.value;
        $l550:;
        panda$core$Bit $tmp552 = { $tmp548 };
        bool $tmp547 = $tmp552.value;
        if ($tmp547) goto $l553;
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp547 = $tmp554.value;
        $l553:;
        panda$core$Bit $tmp555 = { $tmp547 };
        bool $tmp546 = $tmp555.value;
        if ($tmp546) goto $l556;
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp546 = $tmp557.value;
        $l556:;
        panda$core$Bit $tmp558 = { $tmp546 };
        bool $tmp545 = $tmp558.value;
        if ($tmp545) goto $l559;
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp545 = $tmp560.value;
        $l559:;
        panda$core$Bit $tmp561 = { $tmp545 };
        bool $tmp544 = $tmp561.value;
        if ($tmp544) goto $l562;
        panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp544 = $tmp563.value;
        $l562:;
        panda$core$Bit $tmp564 = { $tmp544 };
        bool $tmp543 = $tmp564.value;
        if ($tmp543) goto $l565;
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp543 = $tmp566.value;
        $l565:;
        panda$core$Bit $tmp567 = { $tmp543 };
        bool $tmp542 = $tmp567.value;
        if ($tmp542) goto $l568;
        panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp542 = $tmp569.value;
        $l568:;
        panda$core$Bit $tmp570 = { $tmp542 };
        bool $tmp541 = $tmp570.value;
        if ($tmp541) goto $l571;
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp541 = $tmp572.value;
        $l571:;
        panda$core$Bit $tmp573 = { $tmp541 };
        bool $tmp540 = $tmp573.value;
        if ($tmp540) goto $l574;
        panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp540 = $tmp575.value;
        $l574:;
        panda$core$Bit $tmp576 = { $tmp540 };
        bool $tmp539 = $tmp576.value;
        if ($tmp539) goto $l577;
        panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp539 = $tmp578.value;
        $l577:;
        panda$core$Bit $tmp579 = { $tmp539 };
        bool $tmp538 = $tmp579.value;
        if ($tmp538) goto $l580;
        panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp538 = $tmp581.value;
        $l580:;
        panda$core$Bit $tmp582 = { $tmp538 };
        bool $tmp537 = $tmp582.value;
        if ($tmp537) goto $l583;
        panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp537 = $tmp584.value;
        $l583:;
        panda$core$Bit $tmp585 = { $tmp537 };
        bool $tmp536 = $tmp585.value;
        if ($tmp536) goto $l586;
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp536 = $tmp587.value;
        $l586:;
        panda$core$Bit $tmp588 = { $tmp536 };
        bool $tmp535 = $tmp588.value;
        if ($tmp535) goto $l589;
        panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp535 = $tmp590.value;
        $l589:;
        panda$core$Bit $tmp591 = { $tmp535 };
        bool $tmp534 = $tmp591.value;
        if ($tmp534) goto $l592;
        panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp534 = $tmp593.value;
        $l592:;
        panda$core$Bit $tmp594 = { $tmp534 };
        bool $tmp533 = $tmp594.value;
        if ($tmp533) goto $l595;
        panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp533 = $tmp596.value;
        $l595:;
        panda$core$Bit $tmp597 = { $tmp533 };
        bool $tmp532 = $tmp597.value;
        if ($tmp532) goto $l598;
        panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp532 = $tmp599.value;
        $l598:;
        panda$core$Bit $tmp600 = { $tmp532 };
        bool $tmp531 = $tmp600.value;
        if ($tmp531) goto $l601;
        panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp531 = $tmp602.value;
        $l601:;
        panda$core$Bit $tmp603 = { $tmp531 };
        bool $tmp530 = $tmp603.value;
        if ($tmp530) goto $l604;
        panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp530 = $tmp605.value;
        $l604:;
        panda$core$Bit $tmp606 = { $tmp530 };
        bool $tmp529 = $tmp606.value;
        if ($tmp529) goto $l607;
        panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp529 = $tmp608.value;
        $l607:;
        panda$core$Bit $tmp609 = { $tmp529 };
        bool $tmp528 = $tmp609.value;
        if ($tmp528) goto $l610;
        panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp528 = $tmp611.value;
        $l610:;
        panda$core$Bit $tmp612 = { $tmp528 };
        if ($tmp612.value) {
        {
            panda$core$String* $tmp613 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name525);
            return $tmp613;
        }
        }
        else {
        panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp614.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp616 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token615 = $tmp616;
            panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token615.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp617.value) {
            {
                return &$s618;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token615);
                return &$s619;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9527.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp620.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp621, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp623 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp621, &$s622);
            if (((panda$core$Bit) { !$tmp623.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp624, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp625 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp624);
            if (((panda$core$Bit) { $tmp625.nonnull }).value) {
            {
                return &$s626;
            }
            }
            return &$s627;
        }
        }
        else {
        {
            panda$core$String* $tmp629 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name525);
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s628, $tmp629);
            panda$core$String* $tmp632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s631);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name525, $tmp632);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp633 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp633;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start634;
    org$pandalanguage$pandac$parser$Token$Kind $tmp635;
    panda$core$MutableString* name638;
    org$pandalanguage$pandac$parser$Token$Kind $tmp645;
    org$pandalanguage$pandac$parser$Token$nullable id647;
    org$pandalanguage$pandac$parser$Token$Kind $tmp648;
    panda$core$Char8 $tmp651;
    panda$core$String* finalName653;
    org$pandalanguage$pandac$ASTNode* result656;
    panda$collections$Array* children662;
    org$pandalanguage$pandac$ASTNode* t666;
    org$pandalanguage$pandac$parser$Token$Kind $tmp671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp675;
    org$pandalanguage$pandac$parser$Token$Kind $tmp682;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp635, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp637 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp635, &$s636);
    start634 = $tmp637;
    if (((panda$core$Bit) { !start634.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp639 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp639->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp639->refCount.value = 1;
    panda$core$String* $tmp641 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start634.value));
    panda$core$MutableString$init$panda$core$String($tmp639, $tmp641);
    panda$core$Object* $tmp642 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp639));
    name638 = ((panda$core$MutableString*) $tmp642);
    $l643:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp645, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp646 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp645);
    if (!((panda$core$Bit) { $tmp646.nonnull }).value) goto $l644;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp648, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp650 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp648, &$s649);
        id647 = $tmp650;
        if (((panda$core$Bit) { !id647.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp651, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name638, $tmp651);
        panda$core$String* $tmp652 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id647.value));
        panda$core$MutableString$append$panda$core$String(name638, $tmp652);
    }
    goto $l643;
    $l644:;
    panda$core$String* $tmp654 = panda$core$MutableString$finish$R$panda$core$String(name638);
    panda$core$Object* $tmp655 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp654));
    finalName653 = ((panda$core$String*) $tmp655);
    org$pandalanguage$pandac$ASTNode* $tmp657 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp657->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp657->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp657, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start634.value).position, finalName653);
    panda$core$Object* $tmp659 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp657));
    result656 = ((org$pandalanguage$pandac$ASTNode*) $tmp659);
    org$pandalanguage$pandac$parser$Token $tmp660 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp660.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp661.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp663 = (panda$collections$Array*) pandaAlloc(41);
        $tmp663->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp663->refCount.value = 1;
        panda$collections$Array$init($tmp663);
        panda$core$Object* $tmp665 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp663));
        children662 = ((panda$collections$Array*) $tmp665);
        panda$collections$Array$add$panda$collections$Array$T(children662, ((panda$core$Object*) result656));
        org$pandalanguage$pandac$ASTNode* $tmp667 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        panda$core$Object* $tmp668 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp667));
        t666 = ((org$pandalanguage$pandac$ASTNode*) $tmp668);
        if (((panda$core$Bit) { t666 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result656;
            }
            }
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children662, ((panda$core$Object*) t666));
        $l669:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp671, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp672 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp671);
        if (!((panda$core$Bit) { $tmp672.nonnull }).value) goto $l670;
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) t666));
                org$pandalanguage$pandac$ASTNode* $tmp673 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                panda$core$Object* $tmp674 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp673));
                t666 = ((org$pandalanguage$pandac$ASTNode*) $tmp674);
            }
            if (((panda$core$Bit) { t666 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    return result656;
                }
                }
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children662, ((panda$core$Object*) t666));
        }
        goto $l669;
        $l670:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp675, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp677 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp675, &$s676);
        if (((panda$core$Bit) { !$tmp677.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                return result656;
            }
            }
            return NULL;
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result656));
            org$pandalanguage$pandac$ASTNode* $tmp678 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp678->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp678->refCount.value = 1;
            panda$collections$ImmutableArray* $tmp680 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children662);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp678, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start634.value).position, finalName653, $tmp680);
            panda$core$Object* $tmp681 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp678));
            result656 = ((org$pandalanguage$pandac$ASTNode*) $tmp681);
        }
        org$pandalanguage$pandac$parser$Parser$accept(self);
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp682, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp683 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp682);
    if (((panda$core$Bit) { $tmp683.nonnull }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result656));
            org$pandalanguage$pandac$ASTNode* $tmp684 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp684->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp684->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp684, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start634.value).position, result656);
            panda$core$Object* $tmp686 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp684));
            result656 = ((org$pandalanguage$pandac$ASTNode*) $tmp686);
        }
    }
    }
    return result656;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result687;
    org$pandalanguage$pandac$parser$Token token692;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13694;
    panda$collections$Array* args697;
    org$pandalanguage$pandac$parser$Token$Kind $tmp701;
    org$pandalanguage$pandac$ASTNode* expr703;
    org$pandalanguage$pandac$parser$Token$Kind $tmp708;
    org$pandalanguage$pandac$parser$Token$Kind $tmp712;
    org$pandalanguage$pandac$ASTNode* arg720;
    org$pandalanguage$pandac$parser$Token$Kind $tmp723;
    org$pandalanguage$pandac$parser$Token$Kind $tmp728;
    panda$core$String* name731;
    org$pandalanguage$pandac$parser$Token$Kind $tmp732;
    org$pandalanguage$pandac$ASTNode* target742;
    org$pandalanguage$pandac$parser$Token$Kind $tmp747;
    panda$core$String* name750;
    panda$core$MutableString* finalName753;
    panda$core$Char8 $tmp757;
    panda$collections$Array* types758;
    org$pandalanguage$pandac$ASTNode* t766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp771;
    org$pandalanguage$pandac$parser$Token$Kind $tmp776;
    panda$core$Char8 $tmp779;
    panda$core$Bit shouldAccept780;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29782;
    org$pandalanguage$pandac$ASTNode* $tmp688 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp689 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp688));
    result687 = ((org$pandalanguage$pandac$ASTNode*) $tmp689);
    if (((panda$core$Bit) { result687 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l690:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp693 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token692 = $tmp693;
        {
            $match$540_13694 = token692.kind;
            panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13694.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp695.value) {
            {
                panda$core$Bit$wrapper* $tmp696;
                $tmp696 = (panda$core$Bit$wrapper*) pandaAlloc(13);
                $tmp696->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp696->refCount = 1;
                $tmp696->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp696));
                panda$collections$Array* $tmp698 = (panda$collections$Array*) pandaAlloc(41);
                $tmp698->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp698->refCount.value = 1;
                panda$collections$Array$init($tmp698);
                panda$core$Object* $tmp700 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp698));
                args697 = ((panda$collections$Array*) $tmp700);
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp701, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp702 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp701);
                if (((panda$core$Bit) { !$tmp702.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp704 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp705 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp704));
                    expr703 = ((org$pandalanguage$pandac$ASTNode*) $tmp705);
                    if (((panda$core$Bit) { expr703 == NULL }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args697, ((panda$core$Object*) expr703));
                    $l706:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp708, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp709 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp708);
                    if (!((panda$core$Bit) { $tmp709.nonnull }).value) goto $l707;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) expr703));
                            org$pandalanguage$pandac$ASTNode* $tmp710 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            panda$core$Object* $tmp711 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp710));
                            expr703 = ((org$pandalanguage$pandac$ASTNode*) $tmp711);
                        }
                        if (((panda$core$Bit) { expr703 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            return NULL;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args697, ((panda$core$Object*) expr703));
                    }
                    goto $l706;
                    $l707:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp712, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp714 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp712, &$s713);
                    if (((panda$core$Bit) { !$tmp714.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        return NULL;
                    }
                    }
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result687));
                    org$pandalanguage$pandac$ASTNode* $tmp715 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp715->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp715->refCount.value = 1;
                    panda$collections$ImmutableArray* $tmp717 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args697);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp715, ((panda$core$Int64) { 6 }), token692.position, result687, $tmp717);
                    panda$core$Object* $tmp718 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp715));
                    result687 = ((org$pandalanguage$pandac$ASTNode*) $tmp718);
                }
            }
            }
            else {
            panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13694.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp719.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp721 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp722 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp721));
                arg720 = ((org$pandalanguage$pandac$ASTNode*) $tmp722);
                if (((panda$core$Bit) { arg720 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp723, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp725 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp723, &$s724);
                if (((panda$core$Bit) { !$tmp725.nonnull }).value) {
                {
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result687));
                    org$pandalanguage$pandac$ASTNode* $tmp726 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp726->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp726->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp728, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp726, ((panda$core$Int64) { 2 }), token692.position, result687, $tmp728, arg720);
                    panda$core$Object* $tmp729 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp726));
                    result687 = ((org$pandalanguage$pandac$ASTNode*) $tmp729);
                }
            }
            }
            else {
            panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13694.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp730.value) {
            {
                memset(&name731, 0, sizeof(name731));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp732, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp733 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp732);
                if (((panda$core$Bit) { $tmp733.nonnull }).value) {
                {
                    {
                        panda$core$Object* $tmp735 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s734));
                        name731 = ((panda$core$String*) $tmp735);
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp736 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                        panda$core$Object* $tmp737 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp736));
                        name731 = ((panda$core$String*) $tmp737);
                    }
                    if (((panda$core$Bit) { name731 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result687));
                    org$pandalanguage$pandac$ASTNode* $tmp738 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp738->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp738->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp738, ((panda$core$Int64) { 13 }), token692.position, result687, name731);
                    panda$core$Object* $tmp740 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp738));
                    result687 = ((org$pandalanguage$pandac$ASTNode*) $tmp740);
                }
            }
            }
            else {
            panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13694.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp741.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp743 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp744 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp743));
                target742 = ((org$pandalanguage$pandac$ASTNode*) $tmp744);
                if (((panda$core$Bit) { target742 == NULL }).value) {
                {
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result687));
                    org$pandalanguage$pandac$ASTNode* $tmp745 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp745->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp745->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp747, ((panda$core$Int64) { 89 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp745, ((panda$core$Int64) { 2 }), token692.position, result687, $tmp747, target742);
                    panda$core$Object* $tmp748 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp745));
                    result687 = ((org$pandalanguage$pandac$ASTNode*) $tmp748);
                }
            }
            }
            else {
            panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13694.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp749.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token692);
                panda$core$String* $tmp751 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result687);
                panda$core$Object* $tmp752 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp751));
                name750 = ((panda$core$String*) $tmp752);
                if (((panda$core$Bit) { name750 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp754 = (panda$core$MutableString*) pandaAlloc(48);
                    $tmp754->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp754->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp754, name750);
                    panda$core$Object* $tmp756 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp754));
                    finalName753 = ((panda$core$MutableString*) $tmp756);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp757, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName753, $tmp757);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp759 = (panda$collections$Array*) pandaAlloc(41);
                    $tmp759->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp759->refCount.value = 1;
                    panda$collections$Array$init($tmp759);
                    panda$core$Object* $tmp761 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp759));
                    types758 = ((panda$collections$Array*) $tmp761);
                    org$pandalanguage$pandac$ASTNode* $tmp762 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp762->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp762->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp765 = (($fn764) result687->$class->vtable[2])(result687);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp762, ((panda$core$Int64) { 35 }), $tmp765, name750);
                    panda$collections$Array$add$panda$collections$Array$T(types758, ((panda$core$Object*) $tmp762));
                    org$pandalanguage$pandac$ASTNode* $tmp767 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    panda$core$Object* $tmp768 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp767));
                    t766 = ((org$pandalanguage$pandac$ASTNode*) $tmp768);
                    if (((panda$core$Bit) { t766 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result687;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types758, ((panda$core$Object*) t766));
                    panda$core$MutableString$append$panda$core$Object(finalName753, ((panda$core$Object*) t766));
                    $l769:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp771, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp772 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp771);
                    if (!((panda$core$Bit) { $tmp772.nonnull }).value) goto $l770;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) t766));
                            org$pandalanguage$pandac$ASTNode* $tmp773 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                            panda$core$Object* $tmp774 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp773));
                            t766 = ((org$pandalanguage$pandac$ASTNode*) $tmp774);
                        }
                        if (((panda$core$Bit) { t766 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            return result687;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types758, ((panda$core$Object*) t766));
                        panda$core$MutableString$append$panda$core$String(finalName753, &$s775);
                        panda$core$MutableString$append$panda$core$Object(finalName753, ((panda$core$Object*) t766));
                    }
                    goto $l769;
                    $l770:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp776, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp778 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp776, &$s777);
                    if (((panda$core$Bit) { !$tmp778.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result687;
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp779, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName753, $tmp779);
                    memset(&shouldAccept780, 0, sizeof(shouldAccept780));
                    panda$core$Object* $tmp781 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp781)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp783 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29782 = $tmp783.kind;
                            panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29782.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp786 = $tmp787.value;
                            if ($tmp786) goto $l788;
                            panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29782.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp786 = $tmp789.value;
                            $l788:;
                            panda$core$Bit $tmp790 = { $tmp786 };
                            bool $tmp785 = $tmp790.value;
                            if ($tmp785) goto $l791;
                            panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29782.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp785 = $tmp792.value;
                            $l791:;
                            panda$core$Bit $tmp793 = { $tmp785 };
                            bool $tmp784 = $tmp793.value;
                            if ($tmp784) goto $l794;
                            panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29782.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp784 = $tmp795.value;
                            $l794:;
                            panda$core$Bit $tmp796 = { $tmp784 };
                            if ($tmp796.value) {
                            {
                                shouldAccept780 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept780 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept780 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept780.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        {
                            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result687));
                            org$pandalanguage$pandac$ASTNode* $tmp797 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                            $tmp797->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp797->refCount.value = 1;
                            org$pandalanguage$pandac$Position $tmp800 = (($fn799) result687->$class->vtable[2])(result687);
                            panda$core$String* $tmp801 = panda$core$MutableString$finish$R$panda$core$String(finalName753);
                            panda$collections$ImmutableArray* $tmp802 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types758);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp797, ((panda$core$Int64) { 17 }), $tmp800, $tmp801, $tmp802);
                            panda$core$Object* $tmp803 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp797));
                            result687 = ((org$pandalanguage$pandac$ASTNode*) $tmp803);
                        }
                        goto $l690;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        return result687;
                    }
                    }
                }
                }
                return result687;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token692);
                return result687;
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l691:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result804;
    org$pandalanguage$pandac$parser$Token$nullable op809;
    org$pandalanguage$pandac$parser$Token$Kind $tmp810;
    org$pandalanguage$pandac$ASTNode* next812;
    org$pandalanguage$pandac$ASTNode* $tmp805 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp806 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp805));
    result804 = ((org$pandalanguage$pandac$ASTNode*) $tmp806);
    if (((panda$core$Bit) { result804 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l807:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp810, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp811 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp810);
        op809 = $tmp811;
        if (((panda$core$Bit) { !op809.nonnull }).value) {
        {
            goto $l808;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp813 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp814 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp813));
        next812 = ((org$pandalanguage$pandac$ASTNode*) $tmp814);
        if (((panda$core$Bit) { next812 == NULL }).value) {
        {
            return NULL;
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result804));
            org$pandalanguage$pandac$ASTNode* $tmp815 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp815->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp815->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp815, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op809.value).position, result804, ((org$pandalanguage$pandac$parser$Token) op809.value).kind, next812);
            panda$core$Object* $tmp817 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp815));
            result804 = ((org$pandalanguage$pandac$ASTNode*) $tmp817);
        }
    }
    }
    $l808:;
    return result804;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op818;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9820;
    org$pandalanguage$pandac$ASTNode* base830;
    org$pandalanguage$pandac$parser$Token $tmp819 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op818 = $tmp819;
    {
        $match$709_9820 = op818.kind;
        panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9820.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp822 = $tmp823.value;
        if ($tmp822) goto $l824;
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9820.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp822 = $tmp825.value;
        $l824:;
        panda$core$Bit $tmp826 = { $tmp822 };
        bool $tmp821 = $tmp826.value;
        if ($tmp821) goto $l827;
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9820.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp821 = $tmp828.value;
        $l827:;
        panda$core$Bit $tmp829 = { $tmp821 };
        if ($tmp829.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp831 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp832 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp831));
            base830 = ((org$pandalanguage$pandac$ASTNode*) $tmp832);
            if (((panda$core$Bit) { base830 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp833 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp833->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp833->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp833, ((panda$core$Int64) { 28 }), op818.position, op818.kind, base830);
            return $tmp833;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op818);
            org$pandalanguage$pandac$ASTNode* $tmp835 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp835;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result836;
    org$pandalanguage$pandac$parser$Token op841;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13843;
    org$pandalanguage$pandac$ASTNode* next869;
    org$pandalanguage$pandac$parser$Token nextToken876;
    org$pandalanguage$pandac$ASTNode* next879;
    org$pandalanguage$pandac$parser$Token$Kind $tmp884;
    org$pandalanguage$pandac$ASTNode* $tmp837 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp838 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp837));
    result836 = ((org$pandalanguage$pandac$ASTNode*) $tmp838);
    if (((panda$core$Bit) { result836 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l839:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp842 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op841 = $tmp842;
        {
            $match$735_13843 = op841.kind;
            panda$core$Bit $tmp850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp849 = $tmp850.value;
            if ($tmp849) goto $l851;
            panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp849 = $tmp852.value;
            $l851:;
            panda$core$Bit $tmp853 = { $tmp849 };
            bool $tmp848 = $tmp853.value;
            if ($tmp848) goto $l854;
            panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp848 = $tmp855.value;
            $l854:;
            panda$core$Bit $tmp856 = { $tmp848 };
            bool $tmp847 = $tmp856.value;
            if ($tmp847) goto $l857;
            panda$core$Bit $tmp858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp847 = $tmp858.value;
            $l857:;
            panda$core$Bit $tmp859 = { $tmp847 };
            bool $tmp846 = $tmp859.value;
            if ($tmp846) goto $l860;
            panda$core$Bit $tmp861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp846 = $tmp861.value;
            $l860:;
            panda$core$Bit $tmp862 = { $tmp846 };
            bool $tmp845 = $tmp862.value;
            if ($tmp845) goto $l863;
            panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp845 = $tmp864.value;
            $l863:;
            panda$core$Bit $tmp865 = { $tmp845 };
            bool $tmp844 = $tmp865.value;
            if ($tmp844) goto $l866;
            panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp844 = $tmp867.value;
            $l866:;
            panda$core$Bit $tmp868 = { $tmp844 };
            if ($tmp868.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp870 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp871 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp870));
                next869 = ((org$pandalanguage$pandac$ASTNode*) $tmp871);
                if (((panda$core$Bit) { next869 == NULL }).value) {
                {
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result836));
                    org$pandalanguage$pandac$ASTNode* $tmp872 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp872->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp872->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp872, ((panda$core$Int64) { 2 }), op841.position, result836, op841.kind, next869);
                    panda$core$Object* $tmp874 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp872));
                    result836 = ((org$pandalanguage$pandac$ASTNode*) $tmp874);
                }
            }
            }
            else {
            panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13843.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp875.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp877 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken876 = $tmp877;
                panda$core$Bit $tmp878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken876.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp878.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp880 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp881 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp880));
                    next879 = ((org$pandalanguage$pandac$ASTNode*) $tmp881);
                    if (((panda$core$Bit) { next879 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result836));
                        org$pandalanguage$pandac$ASTNode* $tmp882 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                        $tmp882->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp882->refCount.value = 1;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp884, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp882, ((panda$core$Int64) { 2 }), op841.position, result836, $tmp884, next879);
                        panda$core$Object* $tmp885 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp882));
                        result836 = ((org$pandalanguage$pandac$ASTNode*) $tmp885);
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken876);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op841);
                    return result836;
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op841);
                return result836;
            }
            }
            }
        }
    }
    }
    $l840:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result886;
    org$pandalanguage$pandac$parser$Token op891;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13893;
    org$pandalanguage$pandac$ASTNode* next903;
    org$pandalanguage$pandac$ASTNode* $tmp887 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp888 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp887));
    result886 = ((org$pandalanguage$pandac$ASTNode*) $tmp888);
    if (((panda$core$Bit) { result886 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l889:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp892 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op891 = $tmp892;
        {
            $match$776_13893 = op891.kind;
            panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13893.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp895 = $tmp896.value;
            if ($tmp895) goto $l897;
            panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13893.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp895 = $tmp898.value;
            $l897:;
            panda$core$Bit $tmp899 = { $tmp895 };
            bool $tmp894 = $tmp899.value;
            if ($tmp894) goto $l900;
            panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13893.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp894 = $tmp901.value;
            $l900:;
            panda$core$Bit $tmp902 = { $tmp894 };
            if ($tmp902.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp904 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp905 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp904));
                next903 = ((org$pandalanguage$pandac$ASTNode*) $tmp905);
                if (((panda$core$Bit) { next903 == NULL }).value) {
                {
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result886));
                    org$pandalanguage$pandac$ASTNode* $tmp906 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp906->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp906->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp906, ((panda$core$Int64) { 2 }), op891.position, result886, op891.kind, next903);
                    panda$core$Object* $tmp908 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp906));
                    result886 = ((org$pandalanguage$pandac$ASTNode*) $tmp908);
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op891);
                return result886;
            }
            }
        }
    }
    }
    $l890:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result909;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9910;
    org$pandalanguage$pandac$parser$Token op920;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9922;
    org$pandalanguage$pandac$parser$Token next928;
    org$pandalanguage$pandac$ASTNode* right930;
    org$pandalanguage$pandac$ASTNode* step943;
    org$pandalanguage$pandac$parser$Token$Kind $tmp944;
    memset(&result909, 0, sizeof(result909));
    {
        org$pandalanguage$pandac$parser$Token $tmp911 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9910 = $tmp911.kind;
        panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9910.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp912 = $tmp913.value;
        if ($tmp912) goto $l914;
        panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9910.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp912 = $tmp915.value;
        $l914:;
        panda$core$Bit $tmp916 = { $tmp912 };
        if ($tmp916.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result909));
                panda$core$Object* $tmp917 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                result909 = ((org$pandalanguage$pandac$ASTNode*) $tmp917);
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result909));
                org$pandalanguage$pandac$ASTNode* $tmp918 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp919 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp918));
                result909 = ((org$pandalanguage$pandac$ASTNode*) $tmp919);
            }
            if (((panda$core$Bit) { result909 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp921 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op920 = $tmp921;
    {
        $match$806_9922 = op920.kind;
        panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9922.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp923 = $tmp924.value;
        if ($tmp923) goto $l925;
        panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9922.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp923 = $tmp926.value;
        $l925:;
        panda$core$Bit $tmp927 = { $tmp923 };
        if ($tmp927.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp929 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next928 = $tmp929;
            memset(&right930, 0, sizeof(right930));
            panda$core$Bit $tmp933 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next928.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp932 = $tmp933.value;
            if (!$tmp932) goto $l934;
            panda$core$Bit $tmp935 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next928.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp932 = $tmp935.value;
            $l934:;
            panda$core$Bit $tmp936 = { $tmp932 };
            bool $tmp931 = $tmp936.value;
            if (!$tmp931) goto $l937;
            panda$core$Bit $tmp938 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next928.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp931 = $tmp938.value;
            $l937:;
            panda$core$Bit $tmp939 = { $tmp931 };
            if ($tmp939.value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp940 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp941 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp940));
                    right930 = ((org$pandalanguage$pandac$ASTNode*) $tmp941);
                }
                if (((panda$core$Bit) { right930 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                {
                    panda$core$Object* $tmp942 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    right930 = ((org$pandalanguage$pandac$ASTNode*) $tmp942);
                }
            }
            }
            memset(&step943, 0, sizeof(step943));
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp944, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp945 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp944);
            if (((panda$core$Bit) { $tmp945.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp946 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp947 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp946));
                    step943 = ((org$pandalanguage$pandac$ASTNode*) $tmp947);
                }
                if (((panda$core$Bit) { step943 == NULL }).value) {
                {
                    return NULL;
                }
                }
            }
            }
            else {
            {
                {
                    panda$core$Object* $tmp948 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    step943 = ((org$pandalanguage$pandac$ASTNode*) $tmp948);
                }
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp949 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp949->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp949->refCount.value = 1;
            panda$core$Bit $tmp951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op920.kind.$rawValue, ((panda$core$Int64) { 96 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp949, ((panda$core$Int64) { 29 }), op920.position, result909, right930, $tmp951, step943);
            return $tmp949;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op920);
            return result909;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result952;
    org$pandalanguage$pandac$parser$Token op957;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13959;
    org$pandalanguage$pandac$ASTNode* next989;
    org$pandalanguage$pandac$ASTNode* $tmp953 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp954 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp953));
    result952 = ((org$pandalanguage$pandac$ASTNode*) $tmp954);
    if (((panda$core$Bit) { result952 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l955:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp958 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op957 = $tmp958;
        {
            $match$849_13959 = op957.kind;
            panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp966 = $tmp967.value;
            if ($tmp966) goto $l968;
            panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp966 = $tmp969.value;
            $l968:;
            panda$core$Bit $tmp970 = { $tmp966 };
            bool $tmp965 = $tmp970.value;
            if ($tmp965) goto $l971;
            panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp965 = $tmp972.value;
            $l971:;
            panda$core$Bit $tmp973 = { $tmp965 };
            bool $tmp964 = $tmp973.value;
            if ($tmp964) goto $l974;
            panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp964 = $tmp975.value;
            $l974:;
            panda$core$Bit $tmp976 = { $tmp964 };
            bool $tmp963 = $tmp976.value;
            if ($tmp963) goto $l977;
            panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp963 = $tmp978.value;
            $l977:;
            panda$core$Bit $tmp979 = { $tmp963 };
            bool $tmp962 = $tmp979.value;
            if ($tmp962) goto $l980;
            panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp962 = $tmp981.value;
            $l980:;
            panda$core$Bit $tmp982 = { $tmp962 };
            bool $tmp961 = $tmp982.value;
            if ($tmp961) goto $l983;
            panda$core$Bit $tmp984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp961 = $tmp984.value;
            $l983:;
            panda$core$Bit $tmp985 = { $tmp961 };
            bool $tmp960 = $tmp985.value;
            if ($tmp960) goto $l986;
            panda$core$Bit $tmp987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13959.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp960 = $tmp987.value;
            $l986:;
            panda$core$Bit $tmp988 = { $tmp960 };
            if ($tmp988.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp990 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp991 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp990));
                next989 = ((org$pandalanguage$pandac$ASTNode*) $tmp991);
                if (((panda$core$Bit) { next989 == NULL }).value) {
                {
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result952));
                    org$pandalanguage$pandac$ASTNode* $tmp992 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp992->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp992->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp992, ((panda$core$Int64) { 2 }), op957.position, result952, op957.kind, next989);
                    panda$core$Object* $tmp994 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp992));
                    result952 = ((org$pandalanguage$pandac$ASTNode*) $tmp994);
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op957);
                return result952;
            }
            }
        }
    }
    }
    $l956:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result995;
    org$pandalanguage$pandac$parser$Token op1000;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_131002;
    org$pandalanguage$pandac$ASTNode* next1008;
    org$pandalanguage$pandac$ASTNode* $tmp996 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp997 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp996));
    result995 = ((org$pandalanguage$pandac$ASTNode*) $tmp997);
    if (((panda$core$Bit) { result995 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l998:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1001 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1000 = $tmp1001;
        {
            $match$880_131002 = op1000.kind;
            panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131002.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp1003 = $tmp1004.value;
            if ($tmp1003) goto $l1005;
            panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131002.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp1003 = $tmp1006.value;
            $l1005:;
            panda$core$Bit $tmp1007 = { $tmp1003 };
            if ($tmp1007.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1009 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1010 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1009));
                next1008 = ((org$pandalanguage$pandac$ASTNode*) $tmp1010);
                if (((panda$core$Bit) { next1008 == NULL }).value) {
                {
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result995));
                    org$pandalanguage$pandac$ASTNode* $tmp1011 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
                    $tmp1011->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp1011->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1011, ((panda$core$Int64) { 2 }), op1000.position, result995, op1000.kind, next1008);
                    panda$core$Object* $tmp1013 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1011));
                    result995 = ((org$pandalanguage$pandac$ASTNode*) $tmp1013);
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1000);
                return result995;
            }
            }
        }
    }
    }
    $l999:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1014;
    org$pandalanguage$pandac$parser$Token$nullable op1019;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1020;
    org$pandalanguage$pandac$ASTNode* next1022;
    org$pandalanguage$pandac$ASTNode* $tmp1015 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1016 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1015));
    result1014 = ((org$pandalanguage$pandac$ASTNode*) $tmp1016);
    if (((panda$core$Bit) { result1014 == NULL }).value) {
    {
        return NULL;
    }
    }
    $l1017:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1020, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1021 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1020);
        op1019 = $tmp1021;
        if (((panda$core$Bit) { !op1019.nonnull }).value) {
        {
            goto $l1018;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1023 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1024 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1023));
        next1022 = ((org$pandalanguage$pandac$ASTNode*) $tmp1024);
        if (((panda$core$Bit) { next1022 == NULL }).value) {
        {
            return NULL;
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) result1014));
            org$pandalanguage$pandac$ASTNode* $tmp1025 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp1025->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1025->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1025, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1019.value).position, result1014, ((org$pandalanguage$pandac$parser$Token) op1019.value).kind, next1022);
            panda$core$Object* $tmp1027 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1025));
            result1014 = ((org$pandalanguage$pandac$ASTNode*) $tmp1027);
        }
    }
    }
    $l1018:;
    return result1014;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1028;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1029;
    org$pandalanguage$pandac$ASTNode* test1032;
    panda$collections$ImmutableArray* ifTrue1035;
    org$pandalanguage$pandac$ASTNode* ifFalse1038;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1039;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1029, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1031 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1029, &$s1030);
    start1028 = $tmp1031;
    if (((panda$core$Bit) { !start1028.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1033 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1034 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1033));
    test1032 = ((org$pandalanguage$pandac$ASTNode*) $tmp1034);
    if (((panda$core$Bit) { test1032 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1036 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1037 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1036));
    ifTrue1035 = ((panda$collections$ImmutableArray*) $tmp1037);
    if (((panda$core$Bit) { ifTrue1035 == NULL }).value) {
    {
        return NULL;
    }
    }
    memset(&ifFalse1038, 0, sizeof(ifFalse1038));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1039, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1040 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1039);
    if (((panda$core$Bit) { $tmp1040.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1041 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1041.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1042.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ifFalse1038));
                org$pandalanguage$pandac$ASTNode* $tmp1043 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1044 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1043));
                ifFalse1038 = ((org$pandalanguage$pandac$ASTNode*) $tmp1044);
            }
            if (((panda$core$Bit) { ifFalse1038 == NULL }).value) {
            {
                return NULL;
            }
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ifFalse1038));
                org$pandalanguage$pandac$ASTNode* $tmp1045 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1046 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1045));
                ifFalse1038 = ((org$pandalanguage$pandac$ASTNode*) $tmp1046);
            }
            if (((panda$core$Bit) { ifFalse1038 == NULL }).value) {
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
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ifFalse1038));
            panda$core$Object* $tmp1047 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            ifFalse1038 = ((org$pandalanguage$pandac$ASTNode*) $tmp1047);
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1048 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1048->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1048->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1048, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1028.value).position, test1032, ifTrue1035, ifFalse1038);
    return $tmp1048;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1050;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1050, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1052 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1050, &$s1051);
    if (((panda$core$Bit) { !$tmp1052.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1053 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp1053;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1054;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1055;
    org$pandalanguage$pandac$ASTNode* type1060;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1055, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1057 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1055, &$s1056);
    id1054 = $tmp1057;
    if (((panda$core$Bit) { !id1054.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1058 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1058.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1059.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1061 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1062 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1061));
        type1060 = ((org$pandalanguage$pandac$ASTNode*) $tmp1062);
        if (((panda$core$Bit) { type1060 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1063 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp1063->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1063->refCount.value = 1;
        panda$core$String* $tmp1065 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1054.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1063, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1054.value).position, $tmp1065, type1060);
        return $tmp1063;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1066 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1066->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1066->refCount.value = 1;
    panda$core$String* $tmp1068 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1054.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1066, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1054.value).position, $tmp1068);
    return $tmp1066;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1069;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1070;
    org$pandalanguage$pandac$ASTNode* t1073;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1076;
    org$pandalanguage$pandac$ASTNode* list1079;
    panda$collections$ImmutableArray* block1082;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1070, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1070, &$s1071);
    start1069 = $tmp1072;
    if (((panda$core$Bit) { !start1069.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1074 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1075 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1074));
    t1073 = ((org$pandalanguage$pandac$ASTNode*) $tmp1075);
    if (((panda$core$Bit) { t1073 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1076, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1078 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1076, &$s1077);
    if (((panda$core$Bit) { !$tmp1078.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1080 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1081 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1080));
    list1079 = ((org$pandalanguage$pandac$ASTNode*) $tmp1081);
    if (((panda$core$Bit) { list1079 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1083 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1084 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1083));
    block1082 = ((panda$collections$ImmutableArray*) $tmp1084);
    if (((panda$core$Bit) { block1082 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1085 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1085->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1085->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1085, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1069.value).position, p_label, t1073, list1079, block1082);
    return $tmp1085;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1087;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1088;
    org$pandalanguage$pandac$ASTNode* test1091;
    panda$collections$ImmutableArray* body1094;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1088, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1090 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1088, &$s1089);
    start1087 = $tmp1090;
    if (((panda$core$Bit) { !start1087.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1092 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1093 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1092));
    test1091 = ((org$pandalanguage$pandac$ASTNode*) $tmp1093);
    if (((panda$core$Bit) { test1091 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1095 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1096 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1095));
    body1094 = ((panda$collections$ImmutableArray*) $tmp1096);
    if (((panda$core$Bit) { body1094 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1097 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1097->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1097->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1097, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1087.value).position, p_label, test1091, body1094);
    return $tmp1097;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1099;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1100;
    panda$collections$ImmutableArray* body1103;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1106;
    org$pandalanguage$pandac$ASTNode* test1109;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1100, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1102 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1100, &$s1101);
    start1099 = $tmp1102;
    if (((panda$core$Bit) { !start1099.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1104 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1105 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1104));
    body1103 = ((panda$collections$ImmutableArray*) $tmp1105);
    if (((panda$core$Bit) { body1103 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1106, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1108 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1106, &$s1107);
    if (((panda$core$Bit) { !$tmp1108.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1110 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1111 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1110));
    test1109 = ((org$pandalanguage$pandac$ASTNode*) $tmp1111);
    if (((panda$core$Bit) { test1109 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1112 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1112->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1112->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1112, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1099.value).position, p_label, body1103, test1109);
    return $tmp1112;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1114;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1115;
    panda$collections$ImmutableArray* body1118;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1115, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1117 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1115, &$s1116);
    start1114 = $tmp1117;
    if (((panda$core$Bit) { !start1114.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1119 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1120 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1119));
    body1118 = ((panda$collections$ImmutableArray*) $tmp1120);
    if (((panda$core$Bit) { body1118 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1121 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1121->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1121->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1121, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1114.value).position, p_label, body1118);
    return $tmp1121;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1123;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1124;
    org$pandalanguage$pandac$ASTNode* expr1127;
    org$pandalanguage$pandac$ASTNode* message1130;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1131;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1124, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1126 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1124, &$s1125);
    start1123 = $tmp1126;
    if (((panda$core$Bit) { !start1123.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1128 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1129 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1128));
    expr1127 = ((org$pandalanguage$pandac$ASTNode*) $tmp1129);
    if (((panda$core$Bit) { expr1127 == NULL }).value) {
    {
        return NULL;
    }
    }
    memset(&message1130, 0, sizeof(message1130));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1131, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1132 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1131);
    if (((panda$core$Bit) { $tmp1132.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1133 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1134 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1133));
            message1130 = ((org$pandalanguage$pandac$ASTNode*) $tmp1134);
        }
        if (((panda$core$Bit) { message1130 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp1135 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            message1130 = ((org$pandalanguage$pandac$ASTNode*) $tmp1135);
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1136 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1136->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1136->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1136, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1123.value).position, expr1127, message1130);
    return $tmp1136;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1138;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1139;
    panda$collections$Array* expressions1142;
    org$pandalanguage$pandac$ASTNode* expr1146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1151;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1155;
    panda$collections$Array* statements1158;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131164;
    org$pandalanguage$pandac$ASTNode* stmt1184;
    org$pandalanguage$pandac$ASTNode* stmt1187;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1139, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1141 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1139, &$s1140);
    start1138 = $tmp1141;
    if (((panda$core$Bit) { !start1138.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1143 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1143->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1143->refCount.value = 1;
    panda$collections$Array$init($tmp1143);
    panda$core$Object* $tmp1145 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1143));
    expressions1142 = ((panda$collections$Array*) $tmp1145);
    org$pandalanguage$pandac$ASTNode* $tmp1147 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1148 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1147));
    expr1146 = ((org$pandalanguage$pandac$ASTNode*) $tmp1148);
    if (((panda$core$Bit) { expr1146 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1142, ((panda$core$Object*) expr1146));
    $l1149:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1151, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1152 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1151);
    if (!((panda$core$Bit) { $tmp1152.nonnull }).value) goto $l1150;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) expr1146));
            org$pandalanguage$pandac$ASTNode* $tmp1153 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1154 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1153));
            expr1146 = ((org$pandalanguage$pandac$ASTNode*) $tmp1154);
        }
        if (((panda$core$Bit) { expr1146 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1142, ((panda$core$Object*) expr1146));
    }
    goto $l1149;
    $l1150:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1155, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1157 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1155, &$s1156);
    if (((panda$core$Bit) { !$tmp1157.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1159 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1159->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1159->refCount.value = 1;
    panda$collections$Array$init($tmp1159);
    panda$core$Object* $tmp1161 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1159));
    statements1158 = ((panda$collections$Array*) $tmp1161);
    $l1162:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1165 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131164 = $tmp1165.kind;
            panda$core$Bit $tmp1168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131164.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1167 = $tmp1168.value;
            if ($tmp1167) goto $l1169;
            panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131164.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1167 = $tmp1170.value;
            $l1169:;
            panda$core$Bit $tmp1171 = { $tmp1167 };
            bool $tmp1166 = $tmp1171.value;
            if ($tmp1166) goto $l1172;
            panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131164.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1166 = $tmp1173.value;
            $l1172:;
            panda$core$Bit $tmp1174 = { $tmp1166 };
            if ($tmp1174.value) {
            {
                goto $l1163;
            }
            }
            else {
            panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131164.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1176 = $tmp1177.value;
            if ($tmp1176) goto $l1178;
            panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131164.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1176 = $tmp1179.value;
            $l1178:;
            panda$core$Bit $tmp1180 = { $tmp1176 };
            bool $tmp1175 = $tmp1180.value;
            if ($tmp1175) goto $l1181;
            panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131164.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1175 = $tmp1182.value;
            $l1181:;
            panda$core$Bit $tmp1183 = { $tmp1175 };
            if ($tmp1183.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1185 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1186 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1185));
                stmt1184 = ((org$pandalanguage$pandac$ASTNode*) $tmp1186);
                if (((panda$core$Bit) { stmt1184 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1158, ((panda$core$Object*) stmt1184));
                goto $l1163;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1188 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp1189 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1188));
                    stmt1187 = ((org$pandalanguage$pandac$ASTNode*) $tmp1189);
                    if (((panda$core$Bit) { stmt1187 == NULL }).value) {
                    {
                        return NULL;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1158, ((panda$core$Object*) stmt1187));
                }
            }
            }
            }
        }
    }
    }
    $l1163:;
    org$pandalanguage$pandac$ASTNode* $tmp1190 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1190->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1190->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1192 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1142);
    panda$collections$ImmutableArray* $tmp1193 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1158);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1190, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1138.value).position, $tmp1192, $tmp1193);
    return $tmp1190;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1194;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1195;
    org$pandalanguage$pandac$ASTNode* expr1198;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1201;
    panda$collections$Array* whens1204;
    panda$collections$Array* other1208;
    org$pandalanguage$pandac$parser$Token token1212;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131214;
    org$pandalanguage$pandac$ASTNode* w1217;
    org$pandalanguage$pandac$parser$Token o1221;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1223;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251231;
    org$pandalanguage$pandac$ASTNode* stmt1243;
    org$pandalanguage$pandac$ASTNode* stmt1246;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1256;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1195, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1197 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1195, &$s1196);
    start1194 = $tmp1197;
    if (((panda$core$Bit) { !start1194.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1199 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1200 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1199));
    expr1198 = ((org$pandalanguage$pandac$ASTNode*) $tmp1200);
    if (((panda$core$Bit) { expr1198 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1201, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1203 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1201, &$s1202);
    if (((panda$core$Bit) { !$tmp1203.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1205 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1205->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1205->refCount.value = 1;
    panda$collections$Array$init($tmp1205);
    panda$core$Object* $tmp1207 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1205));
    whens1204 = ((panda$collections$Array*) $tmp1207);
    panda$core$Object* $tmp1209 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
    other1208 = ((panda$collections$Array*) $tmp1209);
    $l1210:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1213 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1212 = $tmp1213;
        {
            $match$1155_131214 = token1212.kind;
            panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131214.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1215.value) {
            {
                goto $l1211;
            }
            }
            else {
            panda$core$Bit $tmp1216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131214.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1216.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1218 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1219 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1218));
                w1217 = ((org$pandalanguage$pandac$ASTNode*) $tmp1219);
                if (((panda$core$Bit) { w1217 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1204, ((panda$core$Object*) w1217));
            }
            }
            else {
            panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131214.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1220.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1222 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1221 = $tmp1222;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1223, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1225 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1223, &$s1224);
                if (((panda$core$Bit) { !$tmp1225.nonnull }).value) {
                {
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) other1208));
                    panda$collections$Array* $tmp1226 = (panda$collections$Array*) pandaAlloc(41);
                    $tmp1226->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp1226->refCount.value = 1;
                    panda$collections$Array$init($tmp1226);
                    panda$core$Object* $tmp1228 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1226));
                    other1208 = ((panda$collections$Array*) $tmp1228);
                }
                $l1229:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1232 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251231 = $tmp1232.kind;
                        panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251231.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1233.value) {
                        {
                            goto $l1230;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251231.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1235 = $tmp1236.value;
                        if ($tmp1235) goto $l1237;
                        panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251231.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1235 = $tmp1238.value;
                        $l1237:;
                        panda$core$Bit $tmp1239 = { $tmp1235 };
                        bool $tmp1234 = $tmp1239.value;
                        if ($tmp1234) goto $l1240;
                        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251231.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1234 = $tmp1241.value;
                        $l1240:;
                        panda$core$Bit $tmp1242 = { $tmp1234 };
                        if ($tmp1242.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1244 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            panda$core$Object* $tmp1245 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1244));
                            stmt1243 = ((org$pandalanguage$pandac$ASTNode*) $tmp1245);
                            if (((panda$core$Bit) { stmt1243 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1208, ((panda$core$Object*) stmt1243));
                            goto $l1230;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1247 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            panda$core$Object* $tmp1248 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1247));
                            stmt1246 = ((org$pandalanguage$pandac$ASTNode*) $tmp1248);
                            if (((panda$core$Bit) { stmt1246 == NULL }).value) {
                            {
                                return NULL;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1208, ((panda$core$Object*) stmt1246));
                        }
                        }
                        }
                    }
                }
                }
                $l1230:;
                goto $l1211;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1251 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1212);
                panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1250, $tmp1251);
                panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, &$s1253);
                panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1249, $tmp1254);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1212, $tmp1255);
            }
            }
            }
            }
        }
    }
    }
    $l1211:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1256, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1258 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1256, &$s1257);
    if (((panda$core$Bit) { !$tmp1258.nonnull }).value) {
    {
        return NULL;
    }
    }
    if (((panda$core$Bit) { other1208 != NULL }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1259 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp1259->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1259->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1261 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1204);
        panda$collections$ImmutableArray* $tmp1262 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1208);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1259, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1194.value).position, expr1198, $tmp1261, $tmp1262);
        return $tmp1259;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1263 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1263->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1263->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1265 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1204);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1263, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1194.value).position, expr1198, $tmp1265, NULL);
    return $tmp1263;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1266;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1267;
    panda$collections$Array* result1270;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131276;
    org$pandalanguage$pandac$ASTNode* stmt1288;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1291;
    org$pandalanguage$pandac$ASTNode* stmt1294;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1267, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1269 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1267, &$s1268);
    start1266 = $tmp1269;
    if (((panda$core$Bit) { !start1266.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1271 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1271->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1271->refCount.value = 1;
    panda$collections$Array$init($tmp1271);
    panda$core$Object* $tmp1273 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1271));
    result1270 = ((panda$collections$Array*) $tmp1273);
    $l1274:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1277 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131276 = $tmp1277.kind;
            panda$core$Bit $tmp1278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131276.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1278.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1275;
            }
            }
            else {
            panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131276.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1280 = $tmp1281.value;
            if ($tmp1280) goto $l1282;
            panda$core$Bit $tmp1283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131276.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1280 = $tmp1283.value;
            $l1282:;
            panda$core$Bit $tmp1284 = { $tmp1280 };
            bool $tmp1279 = $tmp1284.value;
            if ($tmp1279) goto $l1285;
            panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131276.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1279 = $tmp1286.value;
            $l1285:;
            panda$core$Bit $tmp1287 = { $tmp1279 };
            if ($tmp1287.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1289 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1290 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1289));
                stmt1288 = ((org$pandalanguage$pandac$ASTNode*) $tmp1290);
                if (((panda$core$Bit) { stmt1288 == NULL }).value) {
                {
                    return NULL;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1291, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1293 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1291, &$s1292);
                if (((panda$core$Bit) { !$tmp1293.nonnull }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1270, ((panda$core$Object*) stmt1288));
                goto $l1275;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1295 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1296 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1295));
                stmt1294 = ((org$pandalanguage$pandac$ASTNode*) $tmp1296);
                if (((panda$core$Bit) { stmt1294 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1270, ((panda$core$Object*) stmt1294));
            }
            }
            }
        }
    }
    }
    $l1275:;
    panda$collections$ImmutableArray* $tmp1297 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1270);
    return $tmp1297;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1298;
    org$pandalanguage$pandac$Position $tmp1303;
    panda$collections$ImmutableArray* $tmp1299 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1300 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1299));
    statements1298 = ((panda$collections$ImmutableArray*) $tmp1300);
    if (((panda$core$Bit) { statements1298 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1301 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1301->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1301->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1303);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1301, ((panda$core$Int64) { 4 }), $tmp1303, statements1298);
    return $tmp1301;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1304;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91307;
    org$pandalanguage$pandac$parser$Token op1370;
    org$pandalanguage$pandac$ASTNode* rvalue1372;
    org$pandalanguage$pandac$parser$Token op1382;
    org$pandalanguage$pandac$ASTNode* rvalue1384;
    org$pandalanguage$pandac$ASTNode* $tmp1305 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1306 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1305));
    start1304 = ((org$pandalanguage$pandac$ASTNode*) $tmp1306);
    if (((panda$core$Bit) { start1304 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1308 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91307 = $tmp1308.kind;
        panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1323 = $tmp1324.value;
        if ($tmp1323) goto $l1325;
        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1323 = $tmp1326.value;
        $l1325:;
        panda$core$Bit $tmp1327 = { $tmp1323 };
        bool $tmp1322 = $tmp1327.value;
        if ($tmp1322) goto $l1328;
        panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1322 = $tmp1329.value;
        $l1328:;
        panda$core$Bit $tmp1330 = { $tmp1322 };
        bool $tmp1321 = $tmp1330.value;
        if ($tmp1321) goto $l1331;
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1321 = $tmp1332.value;
        $l1331:;
        panda$core$Bit $tmp1333 = { $tmp1321 };
        bool $tmp1320 = $tmp1333.value;
        if ($tmp1320) goto $l1334;
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1320 = $tmp1335.value;
        $l1334:;
        panda$core$Bit $tmp1336 = { $tmp1320 };
        bool $tmp1319 = $tmp1336.value;
        if ($tmp1319) goto $l1337;
        panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1319 = $tmp1338.value;
        $l1337:;
        panda$core$Bit $tmp1339 = { $tmp1319 };
        bool $tmp1318 = $tmp1339.value;
        if ($tmp1318) goto $l1340;
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1318 = $tmp1341.value;
        $l1340:;
        panda$core$Bit $tmp1342 = { $tmp1318 };
        bool $tmp1317 = $tmp1342.value;
        if ($tmp1317) goto $l1343;
        panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1317 = $tmp1344.value;
        $l1343:;
        panda$core$Bit $tmp1345 = { $tmp1317 };
        bool $tmp1316 = $tmp1345.value;
        if ($tmp1316) goto $l1346;
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1316 = $tmp1347.value;
        $l1346:;
        panda$core$Bit $tmp1348 = { $tmp1316 };
        bool $tmp1315 = $tmp1348.value;
        if ($tmp1315) goto $l1349;
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1315 = $tmp1350.value;
        $l1349:;
        panda$core$Bit $tmp1351 = { $tmp1315 };
        bool $tmp1314 = $tmp1351.value;
        if ($tmp1314) goto $l1352;
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1314 = $tmp1353.value;
        $l1352:;
        panda$core$Bit $tmp1354 = { $tmp1314 };
        bool $tmp1313 = $tmp1354.value;
        if ($tmp1313) goto $l1355;
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1313 = $tmp1356.value;
        $l1355:;
        panda$core$Bit $tmp1357 = { $tmp1313 };
        bool $tmp1312 = $tmp1357.value;
        if ($tmp1312) goto $l1358;
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1312 = $tmp1359.value;
        $l1358:;
        panda$core$Bit $tmp1360 = { $tmp1312 };
        bool $tmp1311 = $tmp1360.value;
        if ($tmp1311) goto $l1361;
        panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1311 = $tmp1362.value;
        $l1361:;
        panda$core$Bit $tmp1363 = { $tmp1311 };
        bool $tmp1310 = $tmp1363.value;
        if ($tmp1310) goto $l1364;
        panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1310 = $tmp1365.value;
        $l1364:;
        panda$core$Bit $tmp1366 = { $tmp1310 };
        bool $tmp1309 = $tmp1366.value;
        if ($tmp1309) goto $l1367;
        panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1309 = $tmp1368.value;
        $l1367:;
        panda$core$Bit $tmp1369 = { $tmp1309 };
        if ($tmp1369.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1371 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1370 = $tmp1371;
            org$pandalanguage$pandac$ASTNode* $tmp1373 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1374 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1373));
            rvalue1372 = ((org$pandalanguage$pandac$ASTNode*) $tmp1374);
            if (((panda$core$Bit) { rvalue1372 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1375 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp1375->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1375->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp1378 = (($fn1377) start1304->$class->vtable[2])(start1304);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1375, ((panda$core$Int64) { 2 }), $tmp1378, start1304, op1370.kind, rvalue1372);
            return $tmp1375;
        }
        }
        else {
        panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91307.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1379.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1380 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1380, &$s1381);
            org$pandalanguage$pandac$parser$Token $tmp1383 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1382 = $tmp1383;
            org$pandalanguage$pandac$ASTNode* $tmp1385 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1386 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1385));
            rvalue1384 = ((org$pandalanguage$pandac$ASTNode*) $tmp1386);
            if (((panda$core$Bit) { rvalue1384 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1387 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp1387->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1387->refCount.value = 1;
            org$pandalanguage$pandac$Position $tmp1390 = (($fn1389) start1304->$class->vtable[2])(start1304);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1387, ((panda$core$Int64) { 2 }), $tmp1390, start1304, op1382.kind, rvalue1384);
            return $tmp1387;
        }
        }
        else {
        {
            return start1304;
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1391;
    org$pandalanguage$pandac$ASTNode* value1394;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1395;
    org$pandalanguage$pandac$ASTNode* $tmp1392 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1393 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1392));
    t1391 = ((org$pandalanguage$pandac$ASTNode*) $tmp1393);
    if (((panda$core$Bit) { t1391 == NULL }).value) {
    {
        return NULL;
    }
    }
    memset(&value1394, 0, sizeof(value1394));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1395, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1396 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1395);
    if (((panda$core$Bit) { $tmp1396.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1397 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1398 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1397));
            value1394 = ((org$pandalanguage$pandac$ASTNode*) $tmp1398);
        }
        if (((panda$core$Bit) { value1394 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1399 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1399.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1400.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1401 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1401, &$s1402);
        {
            org$pandalanguage$pandac$ASTNode* $tmp1403 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1404 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1403));
            value1394 = ((org$pandalanguage$pandac$ASTNode*) $tmp1404);
        }
        if (((panda$core$Bit) { value1394 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp1405 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            value1394 = ((org$pandalanguage$pandac$ASTNode*) $tmp1405);
        }
    }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1406 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1406->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1406->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp1409 = (($fn1408) t1391->$class->vtable[2])(t1391);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1406, ((panda$core$Int64) { 11 }), $tmp1409, t1391, value1394);
    return $tmp1406;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1410;
    org$pandalanguage$pandac$Variable$Kind kind1412;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91413;
    org$pandalanguage$pandac$Variable$Kind $tmp1415;
    org$pandalanguage$pandac$Variable$Kind $tmp1417;
    org$pandalanguage$pandac$Variable$Kind $tmp1419;
    org$pandalanguage$pandac$Variable$Kind $tmp1421;
    panda$collections$Array* declarations1423;
    org$pandalanguage$pandac$ASTNode* decl1427;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1432;
    org$pandalanguage$pandac$ASTNode* decl1434;
    org$pandalanguage$pandac$parser$Token $tmp1411 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1410 = $tmp1411;
    memset(&kind1412, 0, sizeof(kind1412));
    {
        $match$1318_91413 = start1410.kind;
        panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91413.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1414.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1415, ((panda$core$Int64) { 0 }));
            kind1412 = $tmp1415;
        }
        }
        else {
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91413.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1416.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1417, ((panda$core$Int64) { 1 }));
            kind1412 = $tmp1417;
        }
        }
        else {
        panda$core$Bit $tmp1418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91413.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1418.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1419, ((panda$core$Int64) { 3 }));
            kind1412 = $tmp1419;
        }
        }
        else {
        panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91413.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1420.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1421, ((panda$core$Int64) { 2 }));
            kind1412 = $tmp1421;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1410, &$s1422);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1424 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1424->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1424->refCount.value = 1;
    panda$collections$Array$init($tmp1424);
    panda$core$Object* $tmp1426 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1424));
    declarations1423 = ((panda$collections$Array*) $tmp1426);
    org$pandalanguage$pandac$ASTNode* $tmp1428 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1429 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1428));
    decl1427 = ((org$pandalanguage$pandac$ASTNode*) $tmp1429);
    if (((panda$core$Bit) { decl1427 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1423, ((panda$core$Object*) decl1427));
    $l1430:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1432, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1433 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1432);
    if (!((panda$core$Bit) { $tmp1433.nonnull }).value) goto $l1431;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1435 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1436 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1435));
        decl1434 = ((org$pandalanguage$pandac$ASTNode*) $tmp1436);
        if (((panda$core$Bit) { decl1434 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1423, ((panda$core$Object*) decl1434));
    }
    goto $l1430;
    $l1431:;
    org$pandalanguage$pandac$ASTNode* $tmp1437 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1437->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1437->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1439 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1423);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1437, ((panda$core$Int64) { 38 }), start1410.position, kind1412, $tmp1439);
    return $tmp1437;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1440;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1441;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1444;
    org$pandalanguage$pandac$ASTNode* target1448;
    panda$collections$Array* args1453;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1457;
    org$pandalanguage$pandac$ASTNode* expr1459;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1464;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1468;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1441, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1443 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1441, &$s1442);
    start1440 = $tmp1443;
    if (((panda$core$Bit) { !start1440.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1444, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1446 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1444, &$s1445);
    if (((panda$core$Bit) { !$tmp1446.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1447;
    $tmp1447 = (panda$core$Bit$wrapper*) pandaAlloc(13);
    $tmp1447->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp1447->refCount = 1;
    $tmp1447->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1447));
    org$pandalanguage$pandac$ASTNode* $tmp1449 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1449->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1449->refCount.value = 1;
    panda$core$String* $tmp1451 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1440.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1449, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1440.value).position, $tmp1451);
    panda$core$Object* $tmp1452 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1449));
    target1448 = ((org$pandalanguage$pandac$ASTNode*) $tmp1452);
    panda$collections$Array* $tmp1454 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1454->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1454->refCount.value = 1;
    panda$collections$Array$init($tmp1454);
    panda$core$Object* $tmp1456 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1454));
    args1453 = ((panda$collections$Array*) $tmp1456);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1457, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1458 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1457);
    if (((panda$core$Bit) { !$tmp1458.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1460 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1461 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1460));
        expr1459 = ((org$pandalanguage$pandac$ASTNode*) $tmp1461);
        if (((panda$core$Bit) { expr1459 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1453, ((panda$core$Object*) expr1459));
        $l1462:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1464, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1465 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1464);
        if (!((panda$core$Bit) { $tmp1465.nonnull }).value) goto $l1463;
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) expr1459));
                org$pandalanguage$pandac$ASTNode* $tmp1466 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1467 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1466));
                expr1459 = ((org$pandalanguage$pandac$ASTNode*) $tmp1467);
            }
            if (((panda$core$Bit) { expr1459 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1453, ((panda$core$Object*) expr1459));
        }
        goto $l1462;
        $l1463:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1468, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1470 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1468, &$s1469);
        if (((panda$core$Bit) { !$tmp1470.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            return NULL;
        }
        }
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    org$pandalanguage$pandac$ASTNode* $tmp1471 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1471->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1471->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp1473 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1453);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1471, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1440.value).position, target1448, $tmp1473);
    return $tmp1471;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1474;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1475;
    org$pandalanguage$pandac$parser$Token$nullable label1478;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1479;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1475, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1477 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1475, &$s1476);
    start1474 = $tmp1477;
    if (((panda$core$Bit) { !start1474.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1479, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1480 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1479);
    label1478 = $tmp1480;
    if (((panda$core$Bit) { label1478.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1481 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp1481->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1481->refCount.value = 1;
        panda$core$String* $tmp1483 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1478.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1481, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1474.value).position, $tmp1483);
        return $tmp1481;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1484 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1484->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1484->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1484, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1474.value).position, NULL);
    return $tmp1484;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1486;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1487;
    org$pandalanguage$pandac$parser$Token$nullable label1490;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1491;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1487, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1489 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1487, &$s1488);
    start1486 = $tmp1489;
    if (((panda$core$Bit) { !start1486.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1491, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1492 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1491);
    label1490 = $tmp1492;
    if (((panda$core$Bit) { label1490.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1493 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp1493->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1493->refCount.value = 1;
        panda$core$String* $tmp1495 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1490.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1493, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1486.value).position, $tmp1495);
        return $tmp1493;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1496 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1496->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1496->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1496, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1486.value).position, NULL);
    return $tmp1496;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1498;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1499;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_91502;
    panda$collections$Array* children1515;
    org$pandalanguage$pandac$ASTNode* expr1519;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1499, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1501 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1499, &$s1500);
    start1498 = $tmp1501;
    if (((panda$core$Bit) { !start1498.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1503 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_91502 = $tmp1503.kind;
        panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91502.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1505 = $tmp1506.value;
        if ($tmp1505) goto $l1507;
        panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91502.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1505 = $tmp1508.value;
        $l1507:;
        panda$core$Bit $tmp1509 = { $tmp1505 };
        bool $tmp1504 = $tmp1509.value;
        if ($tmp1504) goto $l1510;
        panda$core$Bit $tmp1511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91502.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1504 = $tmp1511.value;
        $l1510:;
        panda$core$Bit $tmp1512 = { $tmp1504 };
        if ($tmp1512.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1513 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp1513->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1513->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1513, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1498.value).position, NULL);
            return $tmp1513;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1516 = (panda$collections$Array*) pandaAlloc(41);
            $tmp1516->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1516->refCount.value = 1;
            panda$collections$Array$init($tmp1516);
            panda$core$Object* $tmp1518 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1516));
            children1515 = ((panda$collections$Array*) $tmp1518);
            org$pandalanguage$pandac$ASTNode* $tmp1520 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1521 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1520));
            expr1519 = ((org$pandalanguage$pandac$ASTNode*) $tmp1521);
            if (((panda$core$Bit) { expr1519 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1515, ((panda$core$Object*) expr1519));
            org$pandalanguage$pandac$ASTNode* $tmp1522 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp1522->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1522->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1522, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1498.value).position, expr1519);
            return $tmp1522;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_91524;
    {
        org$pandalanguage$pandac$parser$Token $tmp1525 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_91524 = $tmp1525.kind;
        panda$core$Bit $tmp1526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91524.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1526.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1527 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1527;
        }
        }
        else {
        panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91524.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1528.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1529 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1529;
        }
        }
        else {
        panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91524.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1530.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1531 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1531;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_91532;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1542;
    {
        org$pandalanguage$pandac$parser$Token $tmp1533 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_91532 = $tmp1533.kind;
        panda$core$Bit $tmp1534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91532.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1534.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1535 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1535;
        }
        }
        else {
        panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91532.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1536.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1537 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1537;
        }
        }
        else {
        panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91532.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1538.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1539 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1539;
        }
        }
        else {
        panda$core$Bit $tmp1540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91532.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1540.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1541 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1541;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1542, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1542, &$s1543);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_91544;
    org$pandalanguage$pandac$parser$Token id1563;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1565;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1592;
    {
        org$pandalanguage$pandac$parser$Token $tmp1545 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_91544 = $tmp1545.kind;
        panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1546.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1547 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1547;
        }
        }
        else {
        panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1548.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1549 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1549;
        }
        }
        else {
        panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1550.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1551 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1551;
        }
        }
        else {
        panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1552.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1553 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1553;
        }
        }
        else {
        panda$core$Bit $tmp1554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1554.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1555 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1555;
        }
        }
        else {
        panda$core$Bit $tmp1556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1556.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1557 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1557;
        }
        }
        else {
        panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1558.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1559 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1559;
        }
        }
        else {
        panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1560.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1561 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1561;
        }
        }
        else {
        panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1562.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1564 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1563 = $tmp1564;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1565, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1566 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1565);
            if (((panda$core$Bit) { $tmp1566.nonnull }).value) {
            {
                panda$core$String* $tmp1567 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1563);
                org$pandalanguage$pandac$ASTNode* $tmp1568 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1567);
                return $tmp1568;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1563);
            org$pandalanguage$pandac$ASTNode* $tmp1569 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1569;
        }
        }
        else {
        panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1570 = $tmp1571.value;
        if ($tmp1570) goto $l1572;
        panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1570 = $tmp1573.value;
        $l1572:;
        panda$core$Bit $tmp1574 = { $tmp1570 };
        if ($tmp1574.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1575 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1575;
        }
        }
        else {
        panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1578 = $tmp1579.value;
        if ($tmp1578) goto $l1580;
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1578 = $tmp1581.value;
        $l1580:;
        panda$core$Bit $tmp1582 = { $tmp1578 };
        bool $tmp1577 = $tmp1582.value;
        if ($tmp1577) goto $l1583;
        panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1577 = $tmp1584.value;
        $l1583:;
        panda$core$Bit $tmp1585 = { $tmp1577 };
        bool $tmp1576 = $tmp1585.value;
        if ($tmp1576) goto $l1586;
        panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1576 = $tmp1587.value;
        $l1586:;
        panda$core$Bit $tmp1588 = { $tmp1576 };
        if ($tmp1588.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1589 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1589;
        }
        }
        else {
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91544.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1590.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1591 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1591;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1592, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1592, &$s1593);
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
    org$pandalanguage$pandac$parser$Token$nullable start1594;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1595;
    org$pandalanguage$pandac$parser$Token$nullable next1598;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1599;
    panda$core$MutableString* name1602;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1609;
    panda$core$Char8 $tmp1611;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1612;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1595, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1597 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1595, &$s1596);
    start1594 = $tmp1597;
    if (((panda$core$Bit) { !start1594.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1599, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1601 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1599, &$s1600);
    next1598 = $tmp1601;
    if (((panda$core$Bit) { !next1598.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1603 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp1603->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1603->refCount.value = 1;
    panda$core$String* $tmp1605 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1598.value));
    panda$core$MutableString$init$panda$core$String($tmp1603, $tmp1605);
    panda$core$Object* $tmp1606 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1603));
    name1602 = ((panda$core$MutableString*) $tmp1606);
    $l1607:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1609, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1610 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1609);
        next1598 = $tmp1610;
        if (((panda$core$Bit) { !next1598.nonnull }).value) {
        {
            goto $l1608;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1611, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1602, $tmp1611);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1612, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1614 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1612, &$s1613);
        next1598 = $tmp1614;
        if (((panda$core$Bit) { !next1598.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1615 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1598.value));
        panda$core$MutableString$append$panda$core$String(name1602, $tmp1615);
    }
    }
    $l1608:;
    org$pandalanguage$pandac$ASTNode* $tmp1616 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1616->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1616->refCount.value = 1;
    panda$core$String* $tmp1618 = panda$core$MutableString$finish$R$panda$core$String(name1602);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1616, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start1594.value).position, $tmp1618);
    return $tmp1616;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1619;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1620;
    org$pandalanguage$pandac$parser$Token$nullable next1623;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1624;
    panda$core$MutableString* name1627;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1634;
    panda$core$Char8 $tmp1636;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1637;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1620, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1622 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1620, &$s1621);
    start1619 = $tmp1622;
    if (((panda$core$Bit) { !start1619.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1624, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1626 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1624, &$s1625);
    next1623 = $tmp1626;
    if (((panda$core$Bit) { !next1623.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1628 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp1628->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1628->refCount.value = 1;
    panda$core$String* $tmp1630 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1623.value));
    panda$core$MutableString$init$panda$core$String($tmp1628, $tmp1630);
    panda$core$Object* $tmp1631 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1628));
    name1627 = ((panda$core$MutableString*) $tmp1631);
    $l1632:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1634, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1635 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1634);
        next1623 = $tmp1635;
        if (((panda$core$Bit) { !next1623.nonnull }).value) {
        {
            goto $l1633;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1636, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1627, $tmp1636);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1637, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1639 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1637, &$s1638);
        next1623 = $tmp1639;
        if (((panda$core$Bit) { !next1623.nonnull }).value) {
        {
            return NULL;
        }
        }
        panda$core$String* $tmp1640 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1623.value));
        panda$core$MutableString$append$panda$core$String(name1627, $tmp1640);
    }
    }
    $l1633:;
    org$pandalanguage$pandac$ASTNode* $tmp1641 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1641->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1641->refCount.value = 1;
    panda$core$String* $tmp1643 = panda$core$MutableString$finish$R$panda$core$String(name1627);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1641, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start1619.value).position, $tmp1643);
    return $tmp1641;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1644;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1645;
    org$pandalanguage$pandac$parser$Token$nullable id1648;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1649;
    panda$collections$Array* parameters1652;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1656;
    org$pandalanguage$pandac$ASTNode* t1658;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1674;
    org$pandalanguage$pandac$ASTNode* t1676;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1685;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1645, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1647 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1645, &$s1646);
    start1644 = $tmp1647;
    if (((panda$core$Bit) { !start1644.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1649, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1651 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1649, &$s1650);
    id1648 = $tmp1651;
    if (((panda$core$Bit) { !id1648.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1653 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1653->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1653->refCount.value = 1;
    panda$collections$Array$init($tmp1653);
    panda$core$Object* $tmp1655 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1653));
    parameters1652 = ((panda$collections$Array*) $tmp1655);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1656, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1657 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1656);
    if (((panda$core$Bit) { $tmp1657.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1659 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1660 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1659));
        t1658 = ((org$pandalanguage$pandac$ASTNode*) $tmp1660);
        if (((panda$core$Bit) { t1658 == NULL }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1661 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp1661->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1661->refCount.value = 1;
        panda$core$String* $tmp1663 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1648.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1661, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1648.value).position, $tmp1663, t1658);
        panda$collections$Array$add$panda$collections$Array$T(parameters1652, ((panda$core$Object*) $tmp1661));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1664 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp1664->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1664->refCount.value = 1;
        panda$core$String* $tmp1666 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1648.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1664, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1648.value).position, $tmp1666);
        panda$collections$Array$add$panda$collections$Array$T(parameters1652, ((panda$core$Object*) $tmp1664));
    }
    }
    $l1667:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1669, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1670 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1669);
    if (!((panda$core$Bit) { $tmp1670.nonnull }).value) goto $l1668;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1671, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1673 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1671, &$s1672);
        id1648 = $tmp1673;
        if (((panda$core$Bit) { !id1648.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1674, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1675 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1674);
        if (((panda$core$Bit) { $tmp1675.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1677 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1678 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1677));
            t1676 = ((org$pandalanguage$pandac$ASTNode*) $tmp1678);
            if (((panda$core$Bit) { t1676 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1679 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp1679->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1679->refCount.value = 1;
            panda$core$String* $tmp1681 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1648.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1679, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1648.value).position, $tmp1681, t1676);
            panda$collections$Array$add$panda$collections$Array$T(parameters1652, ((panda$core$Object*) $tmp1679));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1682 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
            $tmp1682->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1682->refCount.value = 1;
            panda$core$String* $tmp1684 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1648.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1682, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1648.value).position, $tmp1684);
            panda$collections$Array$add$panda$collections$Array$T(parameters1652, ((panda$core$Object*) $tmp1682));
        }
        }
    }
    goto $l1667;
    $l1668:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1685, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1687 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1685, &$s1686);
    if (((panda$core$Bit) { !$tmp1687.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1688 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1652);
    return $tmp1688;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1689;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1690;
    panda$collections$Array* result1693;
    org$pandalanguage$pandac$ASTNode* t1697;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1702;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1690, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1692 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1690, &$s1691);
    start1689 = $tmp1692;
    if (((panda$core$Bit) { !start1689.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1694 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1694->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1694->refCount.value = 1;
    panda$collections$Array$init($tmp1694);
    panda$core$Object* $tmp1696 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1694));
    result1693 = ((panda$collections$Array*) $tmp1696);
    org$pandalanguage$pandac$ASTNode* $tmp1698 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1699 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1698));
    t1697 = ((org$pandalanguage$pandac$ASTNode*) $tmp1699);
    if (((panda$core$Bit) { t1697 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1693, ((panda$core$Object*) t1697));
    $l1700:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1702, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1703 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1702);
    if (!((panda$core$Bit) { $tmp1703.nonnull }).value) goto $l1701;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) t1697));
            org$pandalanguage$pandac$ASTNode* $tmp1704 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1705 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1704));
            t1697 = ((org$pandalanguage$pandac$ASTNode*) $tmp1705);
        }
        if (((panda$core$Bit) { t1697 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1693, ((panda$core$Object*) t1697));
    }
    goto $l1700;
    $l1701:;
    panda$collections$ImmutableArray* $tmp1706 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1693);
    return $tmp1706;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1707;
    org$pandalanguage$pandac$parser$Token$nullable next1713;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1714;
    panda$collections$Array* $tmp1708 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1708->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1708->refCount.value = 1;
    panda$collections$Array$init($tmp1708);
    panda$core$Object* $tmp1710 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1708));
    result1707 = ((panda$collections$Array*) $tmp1710);
    $l1711:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1714, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1715 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1714);
        next1713 = $tmp1715;
        if (((panda$core$Bit) { !next1713.nonnull }).value) {
        {
            goto $l1712;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1716 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
        $tmp1716->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1716->refCount.value = 1;
        panda$core$String* $tmp1718 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1713.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1716, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1713.value).position, $tmp1718);
        panda$collections$Array$add$panda$collections$Array$T(result1707, ((panda$core$Object*) $tmp1716));
    }
    }
    $l1712:;
    panda$collections$ImmutableArray* $tmp1719 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1707);
    return $tmp1719;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1720;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1721;
    panda$core$MutableString* result1724;
    org$pandalanguage$pandac$parser$Token next1730;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1721, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1723 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1721, &$s1722);
    start1720 = $tmp1723;
    if (((panda$core$Bit) { !start1720.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1725 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp1725->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1725->refCount.value = 1;
    panda$core$MutableString$init($tmp1725);
    panda$core$Object* $tmp1727 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1725));
    result1724 = ((panda$core$MutableString*) $tmp1727);
    $l1728:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1731 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1730 = $tmp1731;
        panda$core$Bit $tmp1732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1730.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1732.value) {
        {
            goto $l1729;
        }
        }
        panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1730.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1733.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1720.value), &$s1734);
            return NULL;
        }
        }
        panda$core$String* $tmp1735 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1730);
        panda$core$MutableString$append$panda$core$String(result1724, $tmp1735);
    }
    }
    $l1729:;
    org$pandalanguage$pandac$ASTNode* $tmp1736 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1736->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1736->refCount.value = 1;
    panda$core$String* $tmp1738 = panda$core$MutableString$finish$R$panda$core$String(result1724);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1736, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$parser$Token) start1720.value).position, $tmp1738);
    return $tmp1736;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1739;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1740;
    org$pandalanguage$pandac$ASTNode* t1743;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1740, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1742 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1740, &$s1741);
    id1739 = $tmp1742;
    if (((panda$core$Bit) { !id1739.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1744 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1745 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1744));
    t1743 = ((org$pandalanguage$pandac$ASTNode*) $tmp1745);
    if (((panda$core$Bit) { t1743 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1746 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1746->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1746->refCount.value = 1;
    panda$core$String* $tmp1748 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1739.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1746, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) id1739.value).position, $tmp1748, t1743);
    return $tmp1746;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1749;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1750;
    panda$collections$Array* result1753;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1757;
    org$pandalanguage$pandac$ASTNode* param1759;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1764;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1768;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1750, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1752 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1750, &$s1751);
    start1749 = $tmp1752;
    if (((panda$core$Bit) { !start1749.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1754 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1754->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1754->refCount.value = 1;
    panda$collections$Array$init($tmp1754);
    panda$core$Object* $tmp1756 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1754));
    result1753 = ((panda$collections$Array*) $tmp1756);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1757, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1758 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1757);
    if (((panda$core$Bit) { !$tmp1758.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1760 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1761 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1760));
        param1759 = ((org$pandalanguage$pandac$ASTNode*) $tmp1761);
        if (((panda$core$Bit) { param1759 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1753, ((panda$core$Object*) param1759));
        $l1762:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1764, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1765 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1764);
        if (!((panda$core$Bit) { $tmp1765.nonnull }).value) goto $l1763;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1766 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp1767 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1766));
                param1759 = ((org$pandalanguage$pandac$ASTNode*) $tmp1767);
            }
            if (((panda$core$Bit) { param1759 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1753, ((panda$core$Object*) param1759));
        }
        goto $l1762;
        $l1763:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1768, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1770 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1768, &$s1769);
        if (((panda$core$Bit) { !$tmp1770.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1771 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1753);
    return $tmp1771;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1772;
    org$pandalanguage$pandac$parser$Token$nullable start1773;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1774;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1776;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1779;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1780;
    panda$core$String* name1781;
    panda$collections$ImmutableArray* params1784;
    org$pandalanguage$pandac$ASTNode* returnType1787;
    panda$collections$ImmutableArray* body1793;
    org$pandalanguage$pandac$parser$Token token1799;
    panda$core$String* tokenText1801;
    org$pandalanguage$pandac$ASTNode* post1815;
    memset(&kind1772, 0, sizeof(kind1772));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1774, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1775 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1774);
    start1773 = $tmp1775;
    if (((panda$core$Bit) { !start1773.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1776, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1778 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1776, &$s1777);
        start1773 = $tmp1778;
        if (((panda$core$Bit) { !start1773.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1779, ((panda$core$Int64) { 0 }));
        kind1772 = $tmp1779;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1780, ((panda$core$Int64) { 1 }));
        kind1772 = $tmp1780;
    }
    }
    panda$core$String* $tmp1782 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    panda$core$Object* $tmp1783 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1782));
    name1781 = ((panda$core$String*) $tmp1783);
    if (((panda$core$Bit) { name1781 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1785 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1786 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1785));
    params1784 = ((panda$collections$ImmutableArray*) $tmp1786);
    if (((panda$core$Bit) { params1784 == NULL }).value) {
    {
        return NULL;
    }
    }
    memset(&returnType1787, 0, sizeof(returnType1787));
    org$pandalanguage$pandac$parser$Token $tmp1788 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1788.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1789.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1790 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1791 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1790));
            returnType1787 = ((org$pandalanguage$pandac$ASTNode*) $tmp1791);
        }
        if (((panda$core$Bit) { returnType1787 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp1792 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            returnType1787 = ((org$pandalanguage$pandac$ASTNode*) $tmp1792);
        }
    }
    }
    memset(&body1793, 0, sizeof(body1793));
    org$pandalanguage$pandac$parser$Token $tmp1794 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1794.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1795.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp1796 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$core$Object* $tmp1797 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1796));
            body1793 = ((panda$collections$ImmutableArray*) $tmp1797);
        }
        if (((panda$core$Bit) { body1793 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp1798 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            body1793 = ((panda$collections$ImmutableArray*) $tmp1798);
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1800 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1799 = $tmp1800;
    panda$core$String* $tmp1802 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1799);
    panda$core$Object* $tmp1803 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1802));
    tokenText1801 = ((panda$core$String*) $tmp1803);
    panda$core$Bit $tmp1805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1799.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1804 = $tmp1805.value;
    if (!$tmp1804) goto $l1806;
    panda$core$Bit $tmp1809 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1801, &$s1808);
    bool $tmp1807 = $tmp1809.value;
    if ($tmp1807) goto $l1810;
    panda$core$Bit $tmp1812 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1801, &$s1811);
    $tmp1807 = $tmp1812.value;
    $l1810:;
    panda$core$Bit $tmp1813 = { $tmp1807 };
    $tmp1804 = $tmp1813.value;
    $l1806:;
    panda$core$Bit $tmp1814 = { $tmp1804 };
    if ($tmp1814.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1816 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1817 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1816));
        post1815 = ((org$pandalanguage$pandac$ASTNode*) $tmp1817);
        if (((panda$core$Bit) { post1815 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1818 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1818->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1818->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1818, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1773.value).position, p_doccomment, p_annotations, kind1772, name1781, params1784, returnType1787, body1793);
    return $tmp1818;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1820;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1821;
    panda$collections$ImmutableArray* params1824;
    panda$collections$ImmutableArray* b1827;
    org$pandalanguage$pandac$parser$Token token1830;
    panda$core$String* tokenText1832;
    org$pandalanguage$pandac$ASTNode* post1846;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1851;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1821, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1823 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1821, &$s1822);
    start1820 = $tmp1823;
    if (((panda$core$Bit) { !start1820.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1825 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1826 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1825));
    params1824 = ((panda$collections$ImmutableArray*) $tmp1826);
    if (((panda$core$Bit) { params1824 == NULL }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1828 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    panda$core$Object* $tmp1829 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1828));
    b1827 = ((panda$collections$ImmutableArray*) $tmp1829);
    if (((panda$core$Bit) { b1827 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1831 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1830 = $tmp1831;
    panda$core$String* $tmp1833 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1830);
    panda$core$Object* $tmp1834 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1833));
    tokenText1832 = ((panda$core$String*) $tmp1834);
    panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1830.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1835 = $tmp1836.value;
    if (!$tmp1835) goto $l1837;
    panda$core$Bit $tmp1840 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1832, &$s1839);
    bool $tmp1838 = $tmp1840.value;
    if ($tmp1838) goto $l1841;
    panda$core$Bit $tmp1843 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1832, &$s1842);
    $tmp1838 = $tmp1843.value;
    $l1841:;
    panda$core$Bit $tmp1844 = { $tmp1838 };
    $tmp1835 = $tmp1844.value;
    $l1837:;
    panda$core$Bit $tmp1845 = { $tmp1835 };
    if ($tmp1845.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1847 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp1848 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1847));
        post1846 = ((org$pandalanguage$pandac$ASTNode*) $tmp1848);
        if (((panda$core$Bit) { post1846 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1849 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1849->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1849->refCount.value = 1;
    org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1851, ((panda$core$Int64) { 2 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1849, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1820.value).position, p_doccomment, p_annotations, $tmp1851, &$s1852, params1824, NULL, b1827);
    return $tmp1849;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1853;
    org$pandalanguage$pandac$ASTNode* $tmp1854 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    panda$core$Object* $tmp1855 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1854));
    decl1853 = ((org$pandalanguage$pandac$ASTNode*) $tmp1855);
    if (((panda$core$Bit) { decl1853 == NULL }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1856 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1856->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1856->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp1859 = (($fn1858) decl1853->$class->vtable[2])(decl1853);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1856, ((panda$core$Int64) { 14 }), $tmp1859, p_doccomment, p_annotations, decl1853);
    return $tmp1856;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1860;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1861;
    panda$collections$Array* fields1864;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1868;
    org$pandalanguage$pandac$ASTNode* field1872;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1877;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1881;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1861, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1863 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1861, &$s1862);
    name1860 = $tmp1863;
    if (((panda$core$Bit) { !name1860.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1865 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1865->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1865->refCount.value = 1;
    panda$collections$Array$init($tmp1865);
    panda$core$Object* $tmp1867 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1865));
    fields1864 = ((panda$collections$Array*) $tmp1867);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1868, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1869 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1868);
    if (((panda$core$Bit) { $tmp1869.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1870 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1871 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1870.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1871.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1873 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp1874 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1873));
            field1872 = ((org$pandalanguage$pandac$ASTNode*) $tmp1874);
            if (((panda$core$Bit) { field1872 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1864, ((panda$core$Object*) field1872));
            $l1875:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1877, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1878 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1877);
            if (!((panda$core$Bit) { $tmp1878.nonnull }).value) goto $l1876;
            {
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) field1872));
                    org$pandalanguage$pandac$ASTNode* $tmp1879 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp1880 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1879));
                    field1872 = ((org$pandalanguage$pandac$ASTNode*) $tmp1880);
                }
                if (((panda$core$Bit) { field1872 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1864, ((panda$core$Object*) field1872));
            }
            goto $l1875;
            $l1876:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1881, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1883 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1881, &$s1882);
        if (((panda$core$Bit) { !$tmp1883.nonnull }).value) {
        {
            return NULL;
        }
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1884 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp1884->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1884->refCount.value = 1;
    panda$core$String* $tmp1886 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1860.value));
    panda$collections$ImmutableArray* $tmp1887 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1864);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1884, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1860.value).position, p_doccomment, $tmp1886, $tmp1887);
    return $tmp1884;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1888;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1889;
    org$pandalanguage$pandac$parser$Token$nullable name1892;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1893;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1896;
    panda$collections$Array* members1899;
    org$pandalanguage$pandac$ASTNode* dc1903;
    org$pandalanguage$pandac$parser$Token next1907;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_131909;
    org$pandalanguage$pandac$ASTNode* c1956;
    panda$collections$ImmutableArray* a1960;
    org$pandalanguage$pandac$parser$Token next1966;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_131968;
    org$pandalanguage$pandac$ASTNode* decl1993;
    org$pandalanguage$pandac$ASTNode* decl2001;
    org$pandalanguage$pandac$ASTNode* decl2009;
    org$pandalanguage$pandac$ASTNode* decl2021;
    org$pandalanguage$pandac$ASTNode* decl2041;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2049;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2058;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1889, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1891 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1889, &$s1890);
    start1888 = $tmp1891;
    if (((panda$core$Bit) { !start1888.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1893, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1895 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1893, &$s1894);
    name1892 = $tmp1895;
    if (((panda$core$Bit) { !name1892.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1896, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1898 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1896, &$s1897);
    if (((panda$core$Bit) { !$tmp1898.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1900 = (panda$collections$Array*) pandaAlloc(41);
    $tmp1900->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1900->refCount.value = 1;
    panda$collections$Array$init($tmp1900);
    panda$core$Object* $tmp1902 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1900));
    members1899 = ((panda$collections$Array*) $tmp1902);
    panda$core$Object* $tmp1904 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp1904);
    $l1905:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1908 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1907 = $tmp1908;
        {
            $match$1854_131909 = next1907.kind;
            panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1918 = $tmp1919.value;
            if ($tmp1918) goto $l1920;
            panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1918 = $tmp1921.value;
            $l1920:;
            panda$core$Bit $tmp1922 = { $tmp1918 };
            bool $tmp1917 = $tmp1922.value;
            if ($tmp1917) goto $l1923;
            panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1917 = $tmp1924.value;
            $l1923:;
            panda$core$Bit $tmp1925 = { $tmp1917 };
            bool $tmp1916 = $tmp1925.value;
            if ($tmp1916) goto $l1926;
            panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1916 = $tmp1927.value;
            $l1926:;
            panda$core$Bit $tmp1928 = { $tmp1916 };
            bool $tmp1915 = $tmp1928.value;
            if ($tmp1915) goto $l1929;
            panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1915 = $tmp1930.value;
            $l1929:;
            panda$core$Bit $tmp1931 = { $tmp1915 };
            bool $tmp1914 = $tmp1931.value;
            if ($tmp1914) goto $l1932;
            panda$core$Bit $tmp1933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1914 = $tmp1933.value;
            $l1932:;
            panda$core$Bit $tmp1934 = { $tmp1914 };
            bool $tmp1913 = $tmp1934.value;
            if ($tmp1913) goto $l1935;
            panda$core$Bit $tmp1936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1913 = $tmp1936.value;
            $l1935:;
            panda$core$Bit $tmp1937 = { $tmp1913 };
            bool $tmp1912 = $tmp1937.value;
            if ($tmp1912) goto $l1938;
            panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1912 = $tmp1939.value;
            $l1938:;
            panda$core$Bit $tmp1940 = { $tmp1912 };
            bool $tmp1911 = $tmp1940.value;
            if ($tmp1911) goto $l1941;
            panda$core$Bit $tmp1942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1911 = $tmp1942.value;
            $l1941:;
            panda$core$Bit $tmp1943 = { $tmp1911 };
            bool $tmp1910 = $tmp1943.value;
            if ($tmp1910) goto $l1944;
            panda$core$Bit $tmp1945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1910 = $tmp1945.value;
            $l1944:;
            panda$core$Bit $tmp1946 = { $tmp1910 };
            if ($tmp1946.value) {
            {
                goto $l1906;
            }
            }
            else {
            panda$core$Bit $tmp1947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1947.value) {
            {
                if (((panda$core$Bit) { dc1903 != NULL }).value) {
                {
                    panda$core$String* $tmp1949 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1907);
                    panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1948, $tmp1949);
                    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1951);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1907, $tmp1952);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    org$pandalanguage$pandac$ASTNode* $tmp1953 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp1954 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1953));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp1954);
                }
            }
            }
            else {
            panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131909.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1955.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1957 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1903);
                panda$core$Object* $tmp1958 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1957));
                c1956 = ((org$pandalanguage$pandac$ASTNode*) $tmp1958);
                if (((panda$core$Bit) { c1956 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1899, ((panda$core$Object*) c1956));
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    panda$core$Object* $tmp1959 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp1959);
                }
            }
            }
            else {
            {
                goto $l1906;
            }
            }
            }
            }
        }
    }
    }
    $l1906:;
    panda$collections$ImmutableArray* $tmp1961 = (panda$collections$ImmutableArray*) pandaAlloc(40);
    $tmp1961->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1961->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp1961);
    panda$core$Object* $tmp1963 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1961));
    a1960 = ((panda$collections$ImmutableArray*) $tmp1963);
    $l1964:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1967 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1966 = $tmp1967;
        {
            $match$1878_131968 = next1966.kind;
            panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1969.value) {
            {
                panda$core$Int64 $tmp1970 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1960);
                panda$core$Bit $tmp1971 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1970, ((panda$core$Int64) { 0 }));
                if ($tmp1971.value) {
                {
                    panda$core$String* $tmp1973 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1966);
                    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1972, $tmp1973);
                    panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1966, $tmp1976);
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) a1960));
                    panda$collections$ImmutableArray* $tmp1977 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                    panda$core$Object* $tmp1978 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1977));
                    a1960 = ((panda$collections$ImmutableArray*) $tmp1978);
                }
            }
            }
            else {
            panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1979.value) {
            {
                bool $tmp1980 = ((panda$core$Bit) { dc1903 != NULL }).value;
                if ($tmp1980) goto $l1981;
                panda$core$Int64 $tmp1982 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1960);
                panda$core$Bit $tmp1983 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1982, ((panda$core$Int64) { 0 }));
                $tmp1980 = $tmp1983.value;
                $l1981:;
                panda$core$Bit $tmp1984 = { $tmp1980 };
                if ($tmp1984.value) {
                {
                    panda$core$String* $tmp1986 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1966);
                    panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1985, $tmp1986);
                    panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1988);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1966, $tmp1989);
                    return NULL;
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    org$pandalanguage$pandac$ASTNode* $tmp1990 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    panda$core$Object* $tmp1991 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1990));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp1991);
                }
            }
            }
            else {
            panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1992.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1994 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1903, a1960);
                panda$core$Object* $tmp1995 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1994));
                decl1993 = ((org$pandalanguage$pandac$ASTNode*) $tmp1995);
                if (((panda$core$Bit) { decl1993 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1899, ((panda$core$Object*) decl1993));
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    panda$core$Object* $tmp1996 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp1996);
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) a1960));
                    panda$collections$ImmutableArray* $tmp1997 = (panda$collections$ImmutableArray*) pandaAlloc(40);
                    $tmp1997->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp1997->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp1997);
                    panda$core$Object* $tmp1999 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1997));
                    a1960 = ((panda$collections$ImmutableArray*) $tmp1999);
                }
            }
            }
            else {
            panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2000.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2002 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1903, a1960);
                panda$core$Object* $tmp2003 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2002));
                decl2001 = ((org$pandalanguage$pandac$ASTNode*) $tmp2003);
                if (((panda$core$Bit) { decl2001 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1899, ((panda$core$Object*) decl2001));
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    panda$core$Object* $tmp2004 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp2004);
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) a1960));
                    panda$collections$ImmutableArray* $tmp2005 = (panda$collections$ImmutableArray*) pandaAlloc(40);
                    $tmp2005->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2005->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2005);
                    panda$core$Object* $tmp2007 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2005));
                    a1960 = ((panda$collections$ImmutableArray*) $tmp2007);
                }
            }
            }
            else {
            panda$core$Bit $tmp2008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2008.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2010 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1903, a1960);
                panda$core$Object* $tmp2011 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2010));
                decl2009 = ((org$pandalanguage$pandac$ASTNode*) $tmp2011);
                if (((panda$core$Bit) { decl2009 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1899, ((panda$core$Object*) decl2009));
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    panda$core$Object* $tmp2012 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp2012);
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) a1960));
                    panda$collections$ImmutableArray* $tmp2013 = (panda$collections$ImmutableArray*) pandaAlloc(40);
                    $tmp2013->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2013->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2013);
                    panda$core$Object* $tmp2015 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2013));
                    a1960 = ((panda$collections$ImmutableArray*) $tmp2015);
                }
            }
            }
            else {
            panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp2016 = $tmp2017.value;
            if ($tmp2016) goto $l2018;
            panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp2016 = $tmp2019.value;
            $l2018:;
            panda$core$Bit $tmp2020 = { $tmp2016 };
            if ($tmp2020.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2022 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1903, a1960);
                panda$core$Object* $tmp2023 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2022));
                decl2021 = ((org$pandalanguage$pandac$ASTNode*) $tmp2023);
                if (((panda$core$Bit) { decl2021 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1899, ((panda$core$Object*) decl2021));
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    panda$core$Object* $tmp2024 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp2024);
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) a1960));
                    panda$collections$ImmutableArray* $tmp2025 = (panda$collections$ImmutableArray*) pandaAlloc(40);
                    $tmp2025->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2025->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2025);
                    panda$core$Object* $tmp2027 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2025));
                    a1960 = ((panda$collections$ImmutableArray*) $tmp2027);
                }
            }
            }
            else {
            panda$core$Bit $tmp2031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp2030 = $tmp2031.value;
            if ($tmp2030) goto $l2032;
            panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp2030 = $tmp2033.value;
            $l2032:;
            panda$core$Bit $tmp2034 = { $tmp2030 };
            bool $tmp2029 = $tmp2034.value;
            if ($tmp2029) goto $l2035;
            panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp2029 = $tmp2036.value;
            $l2035:;
            panda$core$Bit $tmp2037 = { $tmp2029 };
            bool $tmp2028 = $tmp2037.value;
            if ($tmp2028) goto $l2038;
            panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp2028 = $tmp2039.value;
            $l2038:;
            panda$core$Bit $tmp2040 = { $tmp2028 };
            if ($tmp2040.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2042 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1903, a1960);
                panda$core$Object* $tmp2043 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2042));
                decl2041 = ((org$pandalanguage$pandac$ASTNode*) $tmp2043);
                if (((panda$core$Bit) { decl2041 == NULL }).value) {
                {
                    return NULL;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1899, ((panda$core$Object*) decl2041));
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) dc1903));
                    panda$core$Object* $tmp2044 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                    dc1903 = ((org$pandalanguage$pandac$ASTNode*) $tmp2044);
                }
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) a1960));
                    panda$collections$ImmutableArray* $tmp2045 = (panda$collections$ImmutableArray*) pandaAlloc(40);
                    $tmp2045->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2045->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2045);
                    panda$core$Object* $tmp2047 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2045));
                    a1960 = ((panda$collections$ImmutableArray*) $tmp2047);
                }
            }
            }
            else {
            panda$core$Bit $tmp2048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131968.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp2048.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2049, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2049, &$s2050);
                goto $l1965;
            }
            }
            else {
            {
                panda$core$String* $tmp2052 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1966);
                panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2051, $tmp2052);
                panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1966, $tmp2055);
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
    $l1965:;
    org$pandalanguage$pandac$ASTNode* $tmp2056 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp2056->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2056->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2058, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2059 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1892.value));
    panda$collections$ImmutableArray* $tmp2060 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1899);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2056, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1888.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp2058, $tmp2059, NULL, NULL, $tmp2060);
    return $tmp2056;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2061;
    org$pandalanguage$pandac$ASTNode* dc2063;
    panda$collections$ImmutableArray* a2068;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_92071;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2101;
    org$pandalanguage$pandac$parser$Token $tmp2062 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start2061 = $tmp2062;
    memset(&dc2063, 0, sizeof(dc2063));
    panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start2061.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp2064.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2065 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            panda$core$Object* $tmp2066 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2065));
            dc2063 = ((org$pandalanguage$pandac$ASTNode*) $tmp2066);
        }
        if (((panda$core$Bit) { dc2063 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp2067 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            dc2063 = ((org$pandalanguage$pandac$ASTNode*) $tmp2067);
        }
    }
    }
    panda$collections$ImmutableArray* $tmp2069 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    panda$core$Object* $tmp2070 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2069));
    a2068 = ((panda$collections$ImmutableArray*) $tmp2070);
    if (((panda$core$Bit) { a2068 == NULL }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2072 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_92071 = $tmp2072.kind;
        panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2073.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2074 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2068);
            return $tmp2074;
        }
        }
        else {
        panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2075.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2076 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2068);
            return $tmp2076;
        }
        }
        else {
        panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2077.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2078 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2068);
            return $tmp2078;
        }
        }
        else {
        panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp2079 = $tmp2080.value;
        if ($tmp2079) goto $l2081;
        panda$core$Bit $tmp2082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2079 = $tmp2082.value;
        $l2081:;
        panda$core$Bit $tmp2083 = { $tmp2079 };
        if ($tmp2083.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2084 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2068);
            return $tmp2084;
        }
        }
        else {
        panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2085.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2086 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2068);
            return $tmp2086;
        }
        }
        else {
        panda$core$Bit $tmp2090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2089 = $tmp2090.value;
        if ($tmp2089) goto $l2091;
        panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2089 = $tmp2092.value;
        $l2091:;
        panda$core$Bit $tmp2093 = { $tmp2089 };
        bool $tmp2088 = $tmp2093.value;
        if ($tmp2088) goto $l2094;
        panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2088 = $tmp2095.value;
        $l2094:;
        panda$core$Bit $tmp2096 = { $tmp2088 };
        bool $tmp2087 = $tmp2096.value;
        if ($tmp2087) goto $l2097;
        panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92071.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2087 = $tmp2098.value;
        $l2097:;
        panda$core$Bit $tmp2099 = { $tmp2087 };
        if ($tmp2099.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2100 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2063, a2068);
            return $tmp2100;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2101, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2101, &$s2102);
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
    org$pandalanguage$pandac$parser$Token$nullable start2103;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2104;
    org$pandalanguage$pandac$parser$Token$nullable name2107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2108;
    panda$collections$ImmutableArray* generics2111;
    panda$collections$ImmutableArray* stypes2117;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2123;
    panda$collections$Array* members2126;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2132;
    org$pandalanguage$pandac$ASTNode* member2134;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2139;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2104, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2106 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2104, &$s2105);
    start2103 = $tmp2106;
    if (((panda$core$Bit) { !start2103.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2108, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2110 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2108, &$s2109);
    name2107 = $tmp2110;
    if (((panda$core$Bit) { !name2107.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2111, 0, sizeof(generics2111));
    org$pandalanguage$pandac$parser$Token $tmp2112 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2112.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2113.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2114 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$core$Object* $tmp2115 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2114));
            generics2111 = ((panda$collections$ImmutableArray*) $tmp2115);
        }
        if (((panda$core$Bit) { generics2111 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp2116 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            generics2111 = ((panda$collections$ImmutableArray*) $tmp2116);
        }
    }
    }
    memset(&stypes2117, 0, sizeof(stypes2117));
    org$pandalanguage$pandac$parser$Token $tmp2118 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2118.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2119.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2120 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$core$Object* $tmp2121 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2120));
            stypes2117 = ((panda$collections$ImmutableArray*) $tmp2121);
        }
        if (((panda$core$Bit) { stypes2117 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp2122 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            stypes2117 = ((panda$collections$ImmutableArray*) $tmp2122);
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2123, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2125 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2123, &$s2124);
    if (((panda$core$Bit) { !$tmp2125.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2127 = (panda$collections$Array*) pandaAlloc(41);
    $tmp2127->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2127->refCount.value = 1;
    panda$collections$Array$init($tmp2127);
    panda$core$Object* $tmp2129 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2127));
    members2126 = ((panda$collections$Array*) $tmp2129);
    $l2130:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2132, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2133 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2132);
    if (!((panda$core$Bit) { !$tmp2133.nonnull }).value) goto $l2131;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2135 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp2136 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2135));
        member2134 = ((org$pandalanguage$pandac$ASTNode*) $tmp2136);
        if (((panda$core$Bit) { member2134 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2126, ((panda$core$Object*) member2134));
    }
    goto $l2130;
    $l2131:;
    org$pandalanguage$pandac$ASTNode* $tmp2137 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp2137->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2137->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2139, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2140 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2107.value));
    panda$collections$ImmutableArray* $tmp2141 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2126);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2137, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2103.value).position, p_doccomment, p_annotations, $tmp2139, $tmp2140, generics2111, stypes2117, $tmp2141);
    return $tmp2137;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2143;
    org$pandalanguage$pandac$parser$Token$nullable name2146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2147;
    panda$collections$ImmutableArray* generics2150;
    panda$collections$Array* intfs2158;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2162;
    org$pandalanguage$pandac$ASTNode* t2164;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2169;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2173;
    panda$collections$Array* members2176;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2182;
    org$pandalanguage$pandac$ASTNode* member2184;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2189;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2143, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2145 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2143, &$s2144);
    start2142 = $tmp2145;
    if (((panda$core$Bit) { !start2142.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2147, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2149 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2147, &$s2148);
    name2146 = $tmp2149;
    if (((panda$core$Bit) { !name2146.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2150, 0, sizeof(generics2150));
    org$pandalanguage$pandac$parser$Token $tmp2151 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2151.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2152.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2153 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            panda$core$Object* $tmp2154 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2153));
            generics2150 = ((panda$collections$ImmutableArray*) $tmp2154);
        }
        if (((panda$core$Bit) { generics2150 == NULL }).value) {
        {
            return NULL;
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp2155 = (panda$collections$ImmutableArray*) pandaAlloc(40);
            $tmp2155->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
            $tmp2155->refCount.value = 1;
            panda$collections$ImmutableArray$init($tmp2155);
            panda$core$Object* $tmp2157 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2155));
            generics2150 = ((panda$collections$ImmutableArray*) $tmp2157);
        }
    }
    }
    panda$collections$Array* $tmp2159 = (panda$collections$Array*) pandaAlloc(41);
    $tmp2159->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2159->refCount.value = 1;
    panda$collections$Array$init($tmp2159);
    panda$core$Object* $tmp2161 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2159));
    intfs2158 = ((panda$collections$Array*) $tmp2161);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2162, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2163 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2162);
    if (((panda$core$Bit) { $tmp2163.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2165 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp2166 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2165));
        t2164 = ((org$pandalanguage$pandac$ASTNode*) $tmp2166);
        if (((panda$core$Bit) { t2164 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2158, ((panda$core$Object*) t2164));
        $l2167:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2169, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2170 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2169);
        if (!((panda$core$Bit) { $tmp2170.nonnull }).value) goto $l2168;
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) t2164));
                org$pandalanguage$pandac$ASTNode* $tmp2171 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                panda$core$Object* $tmp2172 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2171));
                t2164 = ((org$pandalanguage$pandac$ASTNode*) $tmp2172);
            }
            if (((panda$core$Bit) { t2164 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2158, ((panda$core$Object*) t2164));
        }
        goto $l2167;
        $l2168:;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2173, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2175 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2173, &$s2174);
    if (((panda$core$Bit) { !$tmp2175.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp2177 = (panda$collections$Array*) pandaAlloc(41);
    $tmp2177->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2177->refCount.value = 1;
    panda$collections$Array$init($tmp2177);
    panda$core$Object* $tmp2179 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2177));
    members2176 = ((panda$collections$Array*) $tmp2179);
    $l2180:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2182, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2183 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2182);
    if (!((panda$core$Bit) { !$tmp2183.nonnull }).value) goto $l2181;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2185 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp2186 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2185));
        member2184 = ((org$pandalanguage$pandac$ASTNode*) $tmp2186);
        if (((panda$core$Bit) { member2184 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2176, ((panda$core$Object*) member2184));
    }
    goto $l2180;
    $l2181:;
    org$pandalanguage$pandac$ASTNode* $tmp2187 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp2187->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2187->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2189, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2190 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2146.value));
    panda$collections$ImmutableArray* $tmp2191 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs2158);
    panda$collections$ImmutableArray* $tmp2192 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2176);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2187, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2142.value).position, p_doccomment, p_annotations, $tmp2189, $tmp2190, generics2150, $tmp2191, $tmp2192);
    return $tmp2187;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_92193;
    {
        org$pandalanguage$pandac$parser$Token $tmp2194 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_92193 = $tmp2194.kind;
        panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2195.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2196 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2196;
        }
        }
        else {
        panda$core$Bit $tmp2197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2197.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2198 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2198;
        }
        }
        else {
        panda$core$Bit $tmp2205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2204 = $tmp2205.value;
        if ($tmp2204) goto $l2206;
        panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2204 = $tmp2207.value;
        $l2206:;
        panda$core$Bit $tmp2208 = { $tmp2204 };
        bool $tmp2203 = $tmp2208.value;
        if ($tmp2203) goto $l2209;
        panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp2203 = $tmp2210.value;
        $l2209:;
        panda$core$Bit $tmp2211 = { $tmp2203 };
        bool $tmp2202 = $tmp2211.value;
        if ($tmp2202) goto $l2212;
        panda$core$Bit $tmp2213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp2202 = $tmp2213.value;
        $l2212:;
        panda$core$Bit $tmp2214 = { $tmp2202 };
        bool $tmp2201 = $tmp2214.value;
        if ($tmp2201) goto $l2215;
        panda$core$Bit $tmp2216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2201 = $tmp2216.value;
        $l2215:;
        panda$core$Bit $tmp2217 = { $tmp2201 };
        bool $tmp2200 = $tmp2217.value;
        if ($tmp2200) goto $l2218;
        panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp2200 = $tmp2219.value;
        $l2218:;
        panda$core$Bit $tmp2220 = { $tmp2200 };
        bool $tmp2199 = $tmp2220.value;
        if ($tmp2199) goto $l2221;
        panda$core$Bit $tmp2222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92193.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp2199 = $tmp2222.value;
        $l2221:;
        panda$core$Bit $tmp2223 = { $tmp2199 };
        if ($tmp2223.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2224 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2224;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2225 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2225;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2226;
    org$pandalanguage$pandac$ASTNode* entry2234;
    panda$collections$Array* $tmp2227 = (panda$collections$Array*) pandaAlloc(41);
    $tmp2227->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2227->refCount.value = 1;
    panda$collections$Array$init($tmp2227);
    panda$core$Object* $tmp2229 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2227));
    entries2226 = ((panda$collections$Array*) $tmp2229);
    $l2230:;
    org$pandalanguage$pandac$parser$Token $tmp2232 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2233 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2232.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2233.value) goto $l2231;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2235 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        panda$core$Object* $tmp2236 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp2235));
        entry2234 = ((org$pandalanguage$pandac$ASTNode*) $tmp2236);
        if (((panda$core$Bit) { entry2234 == NULL }).value) {
        {
            return NULL;
        }
        }
        panda$core$Bit $tmp2237 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2237.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2226, ((panda$core$Object*) entry2234));
    }
    goto $l2230;
    $l2231:;
    org$pandalanguage$pandac$ASTNode* $tmp2238 = (org$pandalanguage$pandac$ASTNode*) pandaAlloc(96);
    $tmp2238->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp2238->refCount.value = 1;
    panda$collections$ImmutableArray* $tmp2240 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2226);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2238, ((panda$core$Int64) { 15 }), $tmp2240);
    return $tmp2238;
}

