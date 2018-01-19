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
#include "panda/core/Panda.h"
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

typedef void (*$fn69)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn108)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn141)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn205)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn248)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn254)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn261)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn267)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn314)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn354)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn360)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn366)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn376)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn388)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn394)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn404)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn755)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn794)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1389)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1402)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1422)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1891)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    self->path = NULL;
    self->source = NULL;
    org$pandalanguage$pandac$parser$Lexer* $tmp2 = (org$pandalanguage$pandac$parser$Lexer*) pandaZAlloc(40);
    $tmp2->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class;
    $tmp2->refCount.value = 1;
    org$pandalanguage$pandac$parser$Lexer$init($tmp2);
    self->lexer = $tmp2;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp4 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaZAlloc(40);
    $tmp4->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp4->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp4);
    self->pushbackBuffer = $tmp4;
    panda$collections$Stack* $tmp6 = (panda$collections$Stack*) pandaZAlloc(24);
    $tmp6->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp6->refCount.value = 1;
    panda$collections$Stack$init($tmp6);
    self->commaSeparatedExpressionContext = $tmp6;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp8 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaZAlloc(40);
    $tmp8->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp8->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp8);
    self->speculativeBuffer = $tmp8;
    {
        self->errors = p_errors;
    }
    panda$core$Bit$wrapper* $tmp10;
    $tmp10 = (panda$core$Bit$wrapper*) pandaZAlloc(13);
    $tmp10->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp10->refCount = 1;
    $tmp10->value = ((panda$core$Bit) { false });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp10));
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        self->path = p_path;
    }
    {
        self->source = p_source;
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx13;
    org$pandalanguage$pandac$parser$Token result16;
    org$pandalanguage$pandac$parser$Token result18;
    panda$core$Int64 $tmp11 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp12 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp11, ((panda$core$Int64) { 0 }));
    if ($tmp12.value) {
    {
        panda$core$Int64 $tmp14 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp15 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp14, ((panda$core$Int64) { 1 }));
        idx13 = $tmp15;
        org$pandalanguage$pandac$parser$Token $tmp17 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx13);
        result16 = $tmp17;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx13);
        return result16;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp19 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result18 = $tmp19;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result18);
    }
    }
    return result18;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result22;
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1324;
    org$pandalanguage$pandac$parser$Token next29;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2531;
    panda$core$Char8 $tmp34;
    org$pandalanguage$pandac$parser$Token next40;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2542;
    $l20:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp23 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result22 = $tmp23;
        {
            $match$57_1324 = result22.kind;
            panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1324.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp25.value) {
            {
                goto $l20;
            }
            }
            else {
            panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1324.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp26.value) {
            {
                $l27:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp30 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next29 = $tmp30;
                    {
                        $match$63_2531 = next29.kind;
                        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2531.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp32.value) {
                        {
                            panda$core$String* $tmp33 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next29);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp34, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp35 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp33, $tmp34);
                            if ($tmp35.value) {
                            {
                                goto $l20;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2531.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp36.value) {
                        {
                            return next29;
                        }
                        }
                        }
                    }
                }
                }
                $l28:;
            }
            }
            else {
            panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1324.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp37.value) {
            {
                $l38:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp41 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next40 = $tmp41;
                    {
                        $match$75_2542 = next40.kind;
                        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2542.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp43.value) {
                        {
                            goto $l20;
                        }
                        }
                        else {
                        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2542.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp44.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result22, &$s45);
                            return next40;
                        }
                        }
                        }
                    }
                }
                }
                $l39:;
            }
            }
            else {
            {
                return result22;
            }
            }
            }
            }
        }
    }
    }
    $l21:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp46 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp46, ((panda$core$Int64) { 0 }));
    if ($tmp47.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp48 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp48);
    }
    }
    panda$core$Int64 $tmp49 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp50 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp49, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp51 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp50);
    return $tmp51;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result52;
    org$pandalanguage$pandac$parser$Token $tmp53 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result52 = $tmp53;
    panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result52.kind.$rawValue, p_kind.$rawValue);
    if ($tmp54.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result52, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result52);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result55;
    org$pandalanguage$pandac$parser$Token $tmp56 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result55 = $tmp56;
    panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result55.kind.$rawValue, p_kind.$rawValue);
    if ($tmp57.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result55, true });
    }
    }
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s58, p_expected);
    panda$core$String* $tmp61 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, &$s60);
    panda$core$String* $tmp62 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result55);
    panda$core$String* $tmp63 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp61, $tmp62);
    panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp63, &$s64);
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result55, $tmp65);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp66 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp66.value) {
    {
        ITable* $tmp67 = self->errors->$class->itable;
        while ($tmp67->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp67 = $tmp67->next;
        }
        $fn69 $tmp68 = $tmp67->methods[0];
        $tmp68(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp70 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp70.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp71;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp72 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp72, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp71, $tmp73, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp75 = $tmp71.start.value;
    panda$core$Int64 i74 = { $tmp75 };
    int64_t $tmp77 = $tmp71.end.value;
    int64_t $tmp78 = $tmp71.step.value;
    bool $tmp79 = $tmp71.inclusive.value;
    bool $tmp86 = $tmp78 > 0;
    if ($tmp86) goto $l84; else goto $l85;
    $l84:;
    if ($tmp79) goto $l87; else goto $l88;
    $l87:;
    if ($tmp75 <= $tmp77) goto $l80; else goto $l82;
    $l88:;
    if ($tmp75 < $tmp77) goto $l80; else goto $l82;
    $l85:;
    if ($tmp79) goto $l89; else goto $l90;
    $l89:;
    if ($tmp75 >= $tmp77) goto $l80; else goto $l82;
    $l90:;
    if ($tmp75 > $tmp77) goto $l80; else goto $l82;
    $l80:;
    {
        org$pandalanguage$pandac$parser$Token $tmp92 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i74);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp92);
    }
    $l83:;
    if ($tmp86) goto $l94; else goto $l95;
    $l94:;
    int64_t $tmp96 = $tmp77 - i74.value;
    if ($tmp79) goto $l97; else goto $l98;
    $l97:;
    if ((uint64_t) $tmp96 >= $tmp78) goto $l93; else goto $l82;
    $l98:;
    if ((uint64_t) $tmp96 > $tmp78) goto $l93; else goto $l82;
    $l95:;
    int64_t $tmp100 = i74.value - $tmp77;
    if ($tmp79) goto $l101; else goto $l102;
    $l101:;
    if ((uint64_t) $tmp100 >= -$tmp78) goto $l93; else goto $l82;
    $l102:;
    if ((uint64_t) $tmp100 > -$tmp78) goto $l93; else goto $l82;
    $l93:;
    i74.value += $tmp78;
    goto $l80;
    $l82:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp104;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp104, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp105 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp104);
    return $tmp105;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp110;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp106 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp106->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp106->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp109 = (($fn108) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp110, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp106, ((panda$core$Int64) { 2 }), $tmp109, p_string, $tmp110, p_chunk);
    return $tmp106;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result111;
    org$pandalanguage$pandac$parser$Token token116;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13118;
    panda$core$String* str120;
    panda$core$Char8 $tmp122;
    panda$core$String* tmp1125;
    panda$core$String* tmp2128;
    org$pandalanguage$pandac$parser$Token escape130;
    panda$core$String* tmp3134;
    panda$core$String* escapeText135;
    panda$core$Char8 c137;
    panda$core$Char8 $match$176_21143;
    panda$core$Char8 $tmp144;
    panda$core$Char8 $tmp146;
    panda$core$Char8 $tmp147;
    panda$core$Char8 $tmp149;
    panda$core$Char8 $tmp150;
    panda$core$Char8 $tmp152;
    panda$core$Char8 $tmp153;
    panda$core$Char8 $tmp155;
    panda$core$Char8 $tmp156;
    panda$core$Char8 $tmp158;
    panda$core$Char8 $tmp159;
    panda$core$Char8 $tmp161;
    panda$core$Char8 $tmp162;
    panda$core$Char8 $tmp164;
    panda$core$String* tmp4166;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp167;
    panda$core$String* tmp5172;
    panda$core$MutableString* $tmp112 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp112->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp112->refCount.value = 1;
    panda$core$MutableString$init($tmp112);
    result111 = $tmp112;
    $l114:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp117 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token116 = $tmp117;
        {
            $match$157_13118 = token116.kind;
            panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13118.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp119.value) {
            {
                panda$core$String* $tmp121 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token116);
                str120 = $tmp121;
                panda$core$Char8$init$panda$core$UInt8(&$tmp122, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp123 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str120, $tmp122);
                if ($tmp123.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token116, &$s124);
                    {
                        tmp1125 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result111));
                        return tmp1125;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result111, str120);
            }
            }
            else {
            panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13118.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp126.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token116, &$s127);
                {
                    tmp2128 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result111));
                    return tmp2128;
                }
            }
            }
            else {
            panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13118.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp129.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp131 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape130 = $tmp131;
                panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape130.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp132.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token116, &$s133);
                    {
                        tmp3134 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result111));
                        return tmp3134;
                    }
                }
                }
                panda$core$String* $tmp136 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape130);
                escapeText135 = $tmp136;
                panda$collections$ListView* $tmp138 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText135);
                ITable* $tmp139 = $tmp138->$class->itable;
                while ($tmp139->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp139 = $tmp139->next;
                }
                $fn141 $tmp140 = $tmp139->methods[0];
                panda$core$Object* $tmp142 = $tmp140($tmp138, ((panda$core$Int64) { 0 }));
                c137 = ((panda$core$Char8$wrapper*) $tmp142)->value;
                {
                    $match$176_21143 = c137;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp144, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp145 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21143, $tmp144);
                    if ($tmp145.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp146, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result111, $tmp146);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp148 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21143, $tmp147);
                    if ($tmp148.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result111, $tmp149);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp150, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp151 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21143, $tmp150);
                    if ($tmp151.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp152, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result111, $tmp152);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp153, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp154 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21143, $tmp153);
                    if ($tmp154.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp155, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result111, $tmp155);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp156, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp157 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21143, $tmp156);
                    if ($tmp157.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp158, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result111, $tmp158);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp159, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp160 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21143, $tmp159);
                    if ($tmp160.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp161, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result111, $tmp161);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp162, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp163 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21143, $tmp162);
                    if ($tmp163.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp164, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result111, $tmp164);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token116, &$s165);
                        {
                            tmp4166 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result111));
                            return tmp4166;
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
                panda$core$String$Index $tmp168 = panda$core$String$start$R$panda$core$String$Index(escapeText135);
                panda$core$String$Index $tmp169 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText135, $tmp168);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp167, ((panda$core$String$Index$nullable) { $tmp169, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp170 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText135, $tmp167);
                panda$core$MutableString$append$panda$core$String(result111, $tmp170);
            }
            }
            else {
            panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13118.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp171.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token116);
                {
                    panda$core$String* $tmp173 = panda$core$MutableString$finish$R$panda$core$String(result111);
                    tmp5172 = $tmp173;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result111));
                    return tmp5172;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp174 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token116);
                panda$core$MutableString$append$panda$core$String(result111, $tmp174);
            }
            }
            }
            }
            }
        }
    }
    }
    $l115:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result111));
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result175;
    org$pandalanguage$pandac$parser$Token token180;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13182;
    panda$core$String* str184;
    panda$core$Char8 $tmp186;
    panda$core$String* tmp6189;
    panda$core$String* tmp7192;
    org$pandalanguage$pandac$parser$Token escape194;
    panda$core$String* tmp8198;
    panda$core$String* escapeText199;
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
    panda$core$String* tmp9233;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp234;
    panda$core$String* tmp10239;
    panda$core$String* tmp11242;
    panda$core$MutableString* $tmp176 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp176->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp176->refCount.value = 1;
    panda$core$MutableString$init($tmp176);
    result175 = $tmp176;
    $l178:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp181 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token180 = $tmp181;
        {
            $match$202_13182 = token180.kind;
            panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13182.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp183.value) {
            {
                panda$core$String* $tmp185 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token180);
                str184 = $tmp185;
                panda$core$Char8$init$panda$core$UInt8(&$tmp186, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp187 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str184, $tmp186);
                if ($tmp187.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token180, &$s188);
                    {
                        tmp6189 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
                        return tmp6189;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result175, str184);
            }
            }
            else {
            panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13182.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp190.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token180, &$s191);
                {
                    tmp7192 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
                    return tmp7192;
                }
            }
            }
            else {
            panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13182.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp193.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp195 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape194 = $tmp195;
                panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape194.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp196.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token180, &$s197);
                    {
                        tmp8198 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
                        return tmp8198;
                    }
                }
                }
                panda$core$String* $tmp200 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape194);
                escapeText199 = $tmp200;
                panda$collections$ListView* $tmp202 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText199);
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
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token180, &$s232);
                        {
                            tmp9233 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
                            return tmp9233;
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
                panda$core$String$Index $tmp235 = panda$core$String$start$R$panda$core$String$Index(escapeText199);
                panda$core$String$Index $tmp236 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText199, $tmp235);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp234, ((panda$core$String$Index$nullable) { $tmp236, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp237 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText199, $tmp234);
                panda$core$MutableString$append$panda$core$String(result175, $tmp237);
            }
            }
            else {
            panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13182.$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp238.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token180);
                {
                    panda$core$String* $tmp240 = panda$core$MutableString$finish$R$panda$core$String(result175);
                    tmp10239 = $tmp240;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
                    return tmp10239;
                }
            }
            }
            else {
            panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13182.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp241.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token180);
                {
                    panda$core$String* $tmp243 = panda$core$MutableString$finish$R$panda$core$String(result175);
                    tmp11242 = $tmp243;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
                    return tmp11242;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp244 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token180);
                panda$core$MutableString$append$panda$core$String(result175, $tmp244);
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l179:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result175));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot245;
    org$pandalanguage$pandac$ASTNode* call251;
    org$pandalanguage$pandac$ASTNode* stringType258;
    org$pandalanguage$pandac$ASTNode* tmp12264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp269;
    org$pandalanguage$pandac$ASTNode* $tmp246 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp246->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp246->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp249 = (($fn248) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp246, ((panda$core$Int64) { 13 }), $tmp249, p_expr, &$s250);
    dot245 = $tmp246;
    org$pandalanguage$pandac$ASTNode* $tmp252 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp252->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp252->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp255 = (($fn254) p_expr->$class->vtable[2])(p_expr);
    panda$collections$ImmutableArray* $tmp256 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
    $tmp256->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp256->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp256);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp252, ((panda$core$Int64) { 6 }), $tmp255, dot245, $tmp256);
    call251 = $tmp252;
    org$pandalanguage$pandac$ASTNode* $tmp259 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp259->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp259->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp262 = (($fn261) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp259, ((panda$core$Int64) { 35 }), $tmp262, &$s263);
    stringType258 = $tmp259;
    {
        org$pandalanguage$pandac$ASTNode* $tmp265 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp265->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp265->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp268 = (($fn267) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp269, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp265, ((panda$core$Int64) { 2 }), $tmp268, call251, $tmp269, stringType258);
        tmp12264 = $tmp265;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot245));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType258));
        }
        return tmp12264;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start270;
    org$pandalanguage$pandac$ASTNode* result282;
    panda$core$MutableString* chunk283;
    org$pandalanguage$pandac$parser$Token token288;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13291;
    panda$core$String* str293;
    panda$core$Char8 $tmp295;
    org$pandalanguage$pandac$ASTNode* tmp16298;
    org$pandalanguage$pandac$ASTNode* tmp17301;
    org$pandalanguage$pandac$parser$Token escape303;
    org$pandalanguage$pandac$ASTNode* tmp18307;
    panda$core$String* escapeText308;
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
    org$pandalanguage$pandac$ASTNode* tmp13339;
    org$pandalanguage$pandac$ASTNode* tmp19340;
    panda$core$String* align341;
    panda$core$String* format342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp343;
    org$pandalanguage$pandac$parser$Token$Kind $tmp346;
    org$pandalanguage$pandac$ASTNode* tmp14349;
    org$pandalanguage$pandac$ASTNode* tmp20350;
    org$pandalanguage$pandac$ASTNode* formattable351;
    org$pandalanguage$pandac$ASTNode* cast357;
    org$pandalanguage$pandac$parser$Token$Kind $tmp362;
    org$pandalanguage$pandac$ASTNode* dot363;
    panda$collections$Array* callArgs369;
    org$pandalanguage$pandac$parser$Token$Kind $tmp379;
    org$pandalanguage$pandac$ASTNode* tmp15382;
    org$pandalanguage$pandac$ASTNode* tmp21383;
    org$pandalanguage$pandac$ASTNode* pandaType385;
    org$pandalanguage$pandac$ASTNode* callTarget391;
    panda$collections$Array* callArgs397;
    panda$core$String* text407;
    org$pandalanguage$pandac$ASTNode* tmp22422;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp423;
    org$pandalanguage$pandac$ASTNode* tmp23428;
    org$pandalanguage$pandac$parser$Token $tmp271 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start270 = $tmp271;
    panda$core$Bit $tmp273 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start270.kind.$rawValue, ((panda$core$Int64) { 7 }));
    bool $tmp272 = $tmp273.value;
    if (!$tmp272) goto $l274;
    panda$core$Bit $tmp275 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start270.kind.$rawValue, ((panda$core$Int64) { 6 }));
    $tmp272 = $tmp275.value;
    $l274:;
    panda$core$Bit $tmp276 = { $tmp272 };
    if ($tmp276.value) {
    {
        panda$core$String* $tmp278 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start270);
        panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s277, $tmp278);
        panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp279, &$s280);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start270, $tmp281);
        return NULL;
    }
    }
    result282 = NULL;
    panda$core$MutableString* $tmp284 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp284->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp284->refCount.value = 1;
    panda$core$MutableString$init($tmp284);
    chunk283 = $tmp284;
    $l286:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp289 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token288 = $tmp289;
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token288.kind.$rawValue, start270.kind.$rawValue);
        if ($tmp290.value) {
        {
            goto $l287;
        }
        }
        {
            $match$268_13291 = token288.kind;
            panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13291.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp292.value) {
            {
                panda$core$String* $tmp294 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token288);
                str293 = $tmp294;
                panda$core$Char8$init$panda$core$UInt8(&$tmp295, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp296 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str293, $tmp295);
                if ($tmp296.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start270, &$s297);
                    {
                        tmp16298 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
                        }
                        return tmp16298;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk283, str293);
            }
            }
            else {
            panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13291.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp299.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start270, &$s300);
                {
                    tmp17301 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
                    }
                    return tmp17301;
                }
            }
            }
            else {
            panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13291.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp302.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp304 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape303 = $tmp304;
                panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape303.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp305.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start270, &$s306);
                    {
                        tmp18307 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
                        }
                        return tmp18307;
                    }
                }
                }
                panda$core$String* $tmp309 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape303);
                escapeText308 = $tmp309;
                panda$collections$ListView* $tmp311 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText308);
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
                            expr337 = $tmp338;
                            if (((panda$core$Bit) { expr337 == NULL }).value) {
                            {
                                {
                                    tmp13339 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr337));
                                    {
                                        tmp19340 = tmp13339;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
                                        }
                                        return tmp19340;
                                    }
                                }
                            }
                            }
                            align341 = NULL;
                            format342 = NULL;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp343, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp344 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp343);
                            if (((panda$core$Bit) { $tmp344.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp345 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start270);
                                    align341 = $tmp345;
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp346, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp347 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp346);
                            if (((panda$core$Bit) { $tmp347.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp348 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start270);
                                    format342 = $tmp348;
                                }
                                if (((panda$core$Bit) { format342 == NULL }).value) {
                                {
                                    {
                                        tmp14349 = NULL;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format342));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align341));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr337));
                                        }
                                        {
                                            tmp20350 = tmp14349;
                                            {
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
                                            }
                                            return tmp20350;
                                        }
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp352 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp352->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp352->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp355 = (($fn354) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp352, ((panda$core$Int64) { 35 }), $tmp355, &$s356);
                                formattable351 = $tmp352;
                                org$pandalanguage$pandac$ASTNode* $tmp358 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp358->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp358->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp361 = (($fn360) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp362, ((panda$core$Int64) { 89 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp358, ((panda$core$Int64) { 2 }), $tmp361, expr337, $tmp362, formattable351);
                                cast357 = $tmp358;
                                org$pandalanguage$pandac$ASTNode* $tmp364 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp364->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp364->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp367 = (($fn366) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp364, ((panda$core$Int64) { 13 }), $tmp367, cast357, &$s368);
                                dot363 = $tmp364;
                                panda$collections$Array* $tmp370 = (panda$collections$Array*) pandaZAlloc(40);
                                $tmp370->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp370->refCount.value = 1;
                                panda$collections$Array$init($tmp370);
                                callArgs369 = $tmp370;
                                org$pandalanguage$pandac$ASTNode* $tmp372 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp372->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp372->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp372, ((panda$core$Int64) { 33 }), start270.position, format342);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs369, ((panda$core$Object*) $tmp372));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr337));
                                    org$pandalanguage$pandac$ASTNode* $tmp374 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                    $tmp374->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp374->refCount.value = 1;
                                    org$pandalanguage$pandac$Position $tmp377 = (($fn376) expr337->$class->vtable[2])(expr337);
                                    panda$collections$ImmutableArray* $tmp378 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs369);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp374, ((panda$core$Int64) { 6 }), $tmp377, dot363, $tmp378);
                                    expr337 = $tmp374;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast357));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot363));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs369));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable351));
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp379, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp381 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp379, &$s380);
                            if (((panda$core$Bit) { !$tmp381.nonnull }).value) {
                            {
                                {
                                    tmp15382 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format342));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align341));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr337));
                                    }
                                    {
                                        tmp21383 = tmp15382;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
                                        }
                                        return tmp21383;
                                    }
                                }
                            }
                            }
                            if (((panda$core$Bit) { align341 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format342 == NULL }).value) {
                                {
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr337));
                                        org$pandalanguage$pandac$ASTNode* $tmp384 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr337);
                                        expr337 = $tmp384;
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp386 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp386->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp386->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp389 = (($fn388) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp386, ((panda$core$Int64) { 35 }), $tmp389, &$s390);
                                pandaType385 = $tmp386;
                                org$pandalanguage$pandac$ASTNode* $tmp392 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp392->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp392->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp395 = (($fn394) expr337->$class->vtable[2])(expr337);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp392, ((panda$core$Int64) { 13 }), $tmp395, pandaType385, &$s396);
                                callTarget391 = $tmp392;
                                panda$collections$Array* $tmp398 = (panda$collections$Array*) pandaZAlloc(40);
                                $tmp398->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp398->refCount.value = 1;
                                panda$collections$Array$init($tmp398);
                                callArgs397 = $tmp398;
                                panda$collections$Array$add$panda$collections$Array$T(callArgs397, ((panda$core$Object*) expr337));
                                org$pandalanguage$pandac$ASTNode* $tmp400 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp400->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp400, ((panda$core$Int64) { 33 }), start270.position, align341);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs397, ((panda$core$Object*) $tmp400));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr337));
                                    org$pandalanguage$pandac$ASTNode* $tmp402 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                    $tmp402->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp402->refCount.value = 1;
                                    org$pandalanguage$pandac$Position $tmp405 = (($fn404) expr337->$class->vtable[2])(expr337);
                                    panda$collections$ImmutableArray* $tmp406 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs397);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp402, ((panda$core$Int64) { 6 }), $tmp405, callTarget391, $tmp406);
                                    expr337 = $tmp402;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget391));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType385));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs397));
                                }
                            }
                            }
                            panda$core$String* $tmp408 = panda$core$MutableString$finish$R$panda$core$String(chunk283);
                            text407 = $tmp408;
                            {
                                panda$core$MutableString* $tmp409 = (panda$core$MutableString*) pandaZAlloc(48);
                                $tmp409->$class = (panda$core$Class*) &panda$core$MutableString$class;
                                $tmp409->refCount.value = 1;
                                panda$core$MutableString$init($tmp409);
                                chunk283 = $tmp409;
                            }
                            panda$core$Bit $tmp413 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text407, &$s412);
                            bool $tmp411 = $tmp413.value;
                            if ($tmp411) goto $l414;
                            $tmp411 = ((panda$core$Bit) { result282 != NULL }).value;
                            $l414:;
                            panda$core$Bit $tmp415 = { $tmp411 };
                            if ($tmp415.value) {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                                    org$pandalanguage$pandac$ASTNode* $tmp416 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                    $tmp416->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp416->refCount.value = 1;
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp416, ((panda$core$Int64) { 33 }), start270.position, text407);
                                    org$pandalanguage$pandac$ASTNode* $tmp418 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result282, $tmp416);
                                    result282 = $tmp418;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                                    org$pandalanguage$pandac$ASTNode* $tmp419 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result282, expr337);
                                    result282 = $tmp419;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                                    org$pandalanguage$pandac$ASTNode* $tmp420 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr337);
                                    result282 = $tmp420;
                                }
                            }
                            }
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text407));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format342));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align341));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr337));
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token288, &$s421);
                        {
                            tmp22422 = NULL;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
                            }
                            return tmp22422;
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
                panda$core$String$Index $tmp424 = panda$core$String$start$R$panda$core$String$Index(escapeText308);
                panda$core$String$Index $tmp425 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText308, $tmp424);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp423, ((panda$core$String$Index$nullable) { $tmp425, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp426 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText308, $tmp423);
                panda$core$MutableString$append$panda$core$String(chunk283, $tmp426);
            }
            }
            else {
            {
                panda$core$String* $tmp427 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token288);
                panda$core$MutableString$append$panda$core$String(chunk283, $tmp427);
            }
            }
            }
            }
        }
    }
    }
    $l287:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp429 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp429->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp429->refCount.value = 1;
        panda$core$String* $tmp431 = panda$core$MutableString$finish$R$panda$core$String(chunk283);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp429, ((panda$core$Int64) { 33 }), start270.position, $tmp431);
        org$pandalanguage$pandac$ASTNode* $tmp432 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result282, $tmp429);
        tmp23428 = $tmp432;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk283));
        }
        return tmp23428;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t433;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9435;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp449;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp456;
    org$pandalanguage$pandac$ASTNode* result486;
    org$pandalanguage$pandac$parser$Token$Kind $tmp488;
    org$pandalanguage$pandac$parser$Token $tmp434 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t433 = $tmp434;
    {
        $match$362_9435 = t433.kind;
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp437 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp437->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp437->refCount.value = 1;
            panda$core$String* $tmp439 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t433);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp437, ((panda$core$Int64) { 18 }), t433.position, $tmp439);
            return $tmp437;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp441 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp441->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp441->refCount.value = 1;
            panda$core$String* $tmp443 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t433);
            panda$core$UInt64$nullable $tmp444 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp443);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp441, ((panda$core$Int64) { 20 }), t433.position, ((panda$core$UInt64) $tmp444.value));
            return $tmp441;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp446 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp446->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp446->refCount.value = 1;
            panda$core$String* $tmp448 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t433);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp449, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp450 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp448, $tmp449);
            panda$core$UInt64$nullable $tmp451 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp450, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp446, ((panda$core$Int64) { 20 }), t433.position, ((panda$core$UInt64) $tmp451.value));
            return $tmp446;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp452.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp453 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp453->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp453->refCount.value = 1;
            panda$core$String* $tmp455 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t433);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp456, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp457 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp455, $tmp456);
            panda$core$UInt64$nullable $tmp458 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp457, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp453, ((panda$core$Int64) { 20 }), t433.position, ((panda$core$UInt64) $tmp458.value));
            return $tmp453;
        }
        }
        else {
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp459.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp460 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp460->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp460->refCount.value = 1;
            panda$core$String* $tmp462 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t433);
            panda$core$Real64$nullable $tmp463 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp462);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp460, ((panda$core$Int64) { 30 }), t433.position, ((panda$core$Real64) $tmp463.value));
            return $tmp460;
        }
        }
        else {
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp464.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp465 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp465->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp465->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp465, ((panda$core$Int64) { 32 }), t433.position);
            return $tmp465;
        }
        }
        else {
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp467.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp468 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp468->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp468->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp468, ((panda$core$Int64) { 34 }), t433.position);
            return $tmp468;
        }
        }
        else {
        panda$core$Bit $tmp470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp470.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp471 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp471->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp471->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp471, ((panda$core$Int64) { 24 }), t433.position);
            return $tmp471;
        }
        }
        else {
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp474 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp474->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp474->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp474, ((panda$core$Int64) { 3 }), t433.position, ((panda$core$Bit) { true }));
            return $tmp474;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp477 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp477->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp477->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp477, ((panda$core$Int64) { 3 }), t433.position, ((panda$core$Bit) { false }));
            return $tmp477;
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp479 = $tmp480.value;
        if ($tmp479) goto $l481;
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp479 = $tmp482.value;
        $l481:;
        panda$core$Bit $tmp483 = { $tmp479 };
        if ($tmp483.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t433);
            org$pandalanguage$pandac$ASTNode* $tmp484 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp484;
        }
        }
        else {
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9435.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp485.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp487 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result486 = $tmp487;
            if (((panda$core$Bit) { result486 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp488, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp490 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp488, &$s489);
            if (((panda$core$Bit) { !$tmp490.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result486;
        }
        }
        else {
        {
            panda$core$String* $tmp492 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t433);
            panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s491, $tmp492);
            panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s494);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t433, $tmp495);
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
    org$pandalanguage$pandac$ASTNode* $match$403_9496;
    panda$core$String* text498;
    org$pandalanguage$pandac$ASTNode* base501;
    panda$core$String* field503;
    panda$core$String* result505;
    {
        $match$403_9496 = p_expr;
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9496->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp497.value) {
        {
            panda$core$String** $tmp499 = ((panda$core$String**) ((char*) $match$403_9496->$data + 16));
            text498 = *$tmp499;
            return text498;
        }
        }
        else {
        panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9496->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp500.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp502 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9496->$data + 16));
            base501 = *$tmp502;
            panda$core$String** $tmp504 = ((panda$core$String**) ((char*) $match$403_9496->$data + 24));
            field503 = *$tmp504;
            panda$core$String* $tmp506 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base501);
            result505 = $tmp506;
            if (((panda$core$Bit) { result505 != NULL }).value) {
            {
                {
                    panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s507, field503);
                    panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result505, $tmp508);
                    result505 = $tmp509;
                }
            }
            }
            return result505;
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
    org$pandalanguage$pandac$parser$Token name510;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9512;
    org$pandalanguage$pandac$parser$Token token600;
    org$pandalanguage$pandac$parser$Token$Kind $tmp606;
    org$pandalanguage$pandac$parser$Token$Kind $tmp609;
    org$pandalanguage$pandac$parser$Token $tmp511 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name510 = $tmp511;
    {
        $match$423_9512 = name510.kind;
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp533 = $tmp534.value;
        if ($tmp533) goto $l535;
        panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp533 = $tmp536.value;
        $l535:;
        panda$core$Bit $tmp537 = { $tmp533 };
        bool $tmp532 = $tmp537.value;
        if ($tmp532) goto $l538;
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp532 = $tmp539.value;
        $l538:;
        panda$core$Bit $tmp540 = { $tmp532 };
        bool $tmp531 = $tmp540.value;
        if ($tmp531) goto $l541;
        panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp531 = $tmp542.value;
        $l541:;
        panda$core$Bit $tmp543 = { $tmp531 };
        bool $tmp530 = $tmp543.value;
        if ($tmp530) goto $l544;
        panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp530 = $tmp545.value;
        $l544:;
        panda$core$Bit $tmp546 = { $tmp530 };
        bool $tmp529 = $tmp546.value;
        if ($tmp529) goto $l547;
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp529 = $tmp548.value;
        $l547:;
        panda$core$Bit $tmp549 = { $tmp529 };
        bool $tmp528 = $tmp549.value;
        if ($tmp528) goto $l550;
        panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp528 = $tmp551.value;
        $l550:;
        panda$core$Bit $tmp552 = { $tmp528 };
        bool $tmp527 = $tmp552.value;
        if ($tmp527) goto $l553;
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp527 = $tmp554.value;
        $l553:;
        panda$core$Bit $tmp555 = { $tmp527 };
        bool $tmp526 = $tmp555.value;
        if ($tmp526) goto $l556;
        panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp526 = $tmp557.value;
        $l556:;
        panda$core$Bit $tmp558 = { $tmp526 };
        bool $tmp525 = $tmp558.value;
        if ($tmp525) goto $l559;
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp525 = $tmp560.value;
        $l559:;
        panda$core$Bit $tmp561 = { $tmp525 };
        bool $tmp524 = $tmp561.value;
        if ($tmp524) goto $l562;
        panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp524 = $tmp563.value;
        $l562:;
        panda$core$Bit $tmp564 = { $tmp524 };
        bool $tmp523 = $tmp564.value;
        if ($tmp523) goto $l565;
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp523 = $tmp566.value;
        $l565:;
        panda$core$Bit $tmp567 = { $tmp523 };
        bool $tmp522 = $tmp567.value;
        if ($tmp522) goto $l568;
        panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp522 = $tmp569.value;
        $l568:;
        panda$core$Bit $tmp570 = { $tmp522 };
        bool $tmp521 = $tmp570.value;
        if ($tmp521) goto $l571;
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp521 = $tmp572.value;
        $l571:;
        panda$core$Bit $tmp573 = { $tmp521 };
        bool $tmp520 = $tmp573.value;
        if ($tmp520) goto $l574;
        panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp520 = $tmp575.value;
        $l574:;
        panda$core$Bit $tmp576 = { $tmp520 };
        bool $tmp519 = $tmp576.value;
        if ($tmp519) goto $l577;
        panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp519 = $tmp578.value;
        $l577:;
        panda$core$Bit $tmp579 = { $tmp519 };
        bool $tmp518 = $tmp579.value;
        if ($tmp518) goto $l580;
        panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp518 = $tmp581.value;
        $l580:;
        panda$core$Bit $tmp582 = { $tmp518 };
        bool $tmp517 = $tmp582.value;
        if ($tmp517) goto $l583;
        panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp517 = $tmp584.value;
        $l583:;
        panda$core$Bit $tmp585 = { $tmp517 };
        bool $tmp516 = $tmp585.value;
        if ($tmp516) goto $l586;
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp516 = $tmp587.value;
        $l586:;
        panda$core$Bit $tmp588 = { $tmp516 };
        bool $tmp515 = $tmp588.value;
        if ($tmp515) goto $l589;
        panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp515 = $tmp590.value;
        $l589:;
        panda$core$Bit $tmp591 = { $tmp515 };
        bool $tmp514 = $tmp591.value;
        if ($tmp514) goto $l592;
        panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp514 = $tmp593.value;
        $l592:;
        panda$core$Bit $tmp594 = { $tmp514 };
        bool $tmp513 = $tmp594.value;
        if ($tmp513) goto $l595;
        panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp513 = $tmp596.value;
        $l595:;
        panda$core$Bit $tmp597 = { $tmp513 };
        if ($tmp597.value) {
        {
            panda$core$String* $tmp598 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name510);
            return $tmp598;
        }
        }
        else {
        panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp599.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp601 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token600 = $tmp601;
            panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token600.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp602.value) {
            {
                return &$s603;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token600);
                return &$s604;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9512.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp605.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp606, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp608 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp606, &$s607);
            if (((panda$core$Bit) { !$tmp608.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp609, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp610 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp609);
            if (((panda$core$Bit) { $tmp610.nonnull }).value) {
            {
                return &$s611;
            }
            }
            return &$s612;
        }
        }
        else {
        {
            panda$core$String* $tmp614 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name510);
            panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s613, $tmp614);
            panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s616);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name510, $tmp617);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp618 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp618;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start619;
    org$pandalanguage$pandac$parser$Token$Kind $tmp620;
    panda$core$MutableString* name623;
    org$pandalanguage$pandac$parser$Token$Kind $tmp629;
    org$pandalanguage$pandac$parser$Token$nullable id631;
    org$pandalanguage$pandac$parser$Token$Kind $tmp632;
    org$pandalanguage$pandac$ASTNode* tmp24635;
    panda$core$Char8 $tmp636;
    panda$core$String* finalName638;
    org$pandalanguage$pandac$ASTNode* result640;
    panda$collections$Array* children645;
    org$pandalanguage$pandac$ASTNode* t648;
    org$pandalanguage$pandac$ASTNode* tmp25650;
    org$pandalanguage$pandac$ASTNode* tmp31651;
    org$pandalanguage$pandac$ASTNode* tmp26652;
    org$pandalanguage$pandac$ASTNode* tmp32653;
    org$pandalanguage$pandac$parser$Token$Kind $tmp656;
    org$pandalanguage$pandac$ASTNode* tmp27659;
    org$pandalanguage$pandac$ASTNode* tmp33660;
    org$pandalanguage$pandac$ASTNode* tmp28661;
    org$pandalanguage$pandac$ASTNode* tmp34662;
    org$pandalanguage$pandac$parser$Token$Kind $tmp663;
    org$pandalanguage$pandac$ASTNode* tmp29666;
    org$pandalanguage$pandac$ASTNode* tmp35667;
    org$pandalanguage$pandac$ASTNode* tmp30668;
    org$pandalanguage$pandac$ASTNode* tmp36669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp673;
    org$pandalanguage$pandac$ASTNode* tmp37677;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp620, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp622 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp620, &$s621);
    start619 = $tmp622;
    if (((panda$core$Bit) { !start619.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp624 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp624->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp624->refCount.value = 1;
    panda$core$String* $tmp626 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start619.value));
    panda$core$MutableString$init$panda$core$String($tmp624, $tmp626);
    name623 = $tmp624;
    $l627:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp629, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp630 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp629);
    if (!((panda$core$Bit) { $tmp630.nonnull }).value) goto $l628;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp632, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp634 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp632, &$s633);
        id631 = $tmp634;
        if (((panda$core$Bit) { !id631.nonnull }).value) {
        {
            {
                tmp24635 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
                return tmp24635;
            }
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp636, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name623, $tmp636);
        panda$core$String* $tmp637 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id631.value));
        panda$core$MutableString$append$panda$core$String(name623, $tmp637);
    }
    goto $l627;
    $l628:;
    panda$core$String* $tmp639 = panda$core$MutableString$finish$R$panda$core$String(name623);
    finalName638 = $tmp639;
    org$pandalanguage$pandac$ASTNode* $tmp641 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp641->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp641->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp641, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start619.value).position, finalName638);
    result640 = $tmp641;
    org$pandalanguage$pandac$parser$Token $tmp643 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp643.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp644.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp646 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp646->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp646->refCount.value = 1;
        panda$collections$Array$init($tmp646);
        children645 = $tmp646;
        panda$collections$Array$add$panda$collections$Array$T(children645, ((panda$core$Object*) result640));
        org$pandalanguage$pandac$ASTNode* $tmp649 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t648 = $tmp649;
        if (((panda$core$Bit) { t648 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp25650 = result640;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
                    }
                    {
                        tmp31651 = tmp25650;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName638));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
                        }
                        return tmp31651;
                    }
                }
            }
            }
            {
                tmp26652 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
                }
                {
                    tmp32653 = tmp26652;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName638));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
                    }
                    return tmp32653;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children645, ((panda$core$Object*) t648));
        $l654:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp656, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp657 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp656);
        if (!((panda$core$Bit) { $tmp657.nonnull }).value) goto $l655;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
                org$pandalanguage$pandac$ASTNode* $tmp658 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                t648 = $tmp658;
            }
            if (((panda$core$Bit) { t648 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    {
                        tmp27659 = result640;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
                        }
                        {
                            tmp33660 = tmp27659;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName638));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
                            }
                            return tmp33660;
                        }
                    }
                }
                }
                {
                    tmp28661 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
                    }
                    {
                        tmp34662 = tmp28661;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName638));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
                        }
                        return tmp34662;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children645, ((panda$core$Object*) t648));
        }
        goto $l654;
        $l655:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp663, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp665 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp663, &$s664);
        if (((panda$core$Bit) { !$tmp665.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp29666 = result640;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
                    }
                    {
                        tmp35667 = tmp29666;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName638));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
                        }
                        return tmp35667;
                    }
                }
            }
            }
            {
                tmp30668 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
                }
                {
                    tmp36669 = tmp30668;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName638));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
                    }
                    return tmp36669;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
            org$pandalanguage$pandac$ASTNode* $tmp670 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp670->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp670->refCount.value = 1;
            panda$collections$ImmutableArray* $tmp672 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children645);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp670, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start619.value).position, finalName638, $tmp672);
            result640 = $tmp670;
        }
        org$pandalanguage$pandac$parser$Parser$accept(self);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t648));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children645));
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp673, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp674 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp673);
    if (((panda$core$Bit) { $tmp674.nonnull }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
            org$pandalanguage$pandac$ASTNode* $tmp675 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp675->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp675->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp675, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start619.value).position, result640);
            result640 = $tmp675;
        }
    }
    }
    {
        tmp37677 = result640;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name623));
        }
        return tmp37677;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result678;
    org$pandalanguage$pandac$ASTNode* tmp38680;
    org$pandalanguage$pandac$parser$Token token683;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13685;
    panda$collections$Array* args688;
    org$pandalanguage$pandac$parser$Token$Kind $tmp691;
    org$pandalanguage$pandac$ASTNode* expr693;
    org$pandalanguage$pandac$ASTNode* tmp39696;
    org$pandalanguage$pandac$ASTNode* tmp46697;
    org$pandalanguage$pandac$parser$Token$Kind $tmp700;
    org$pandalanguage$pandac$ASTNode* tmp40704;
    org$pandalanguage$pandac$ASTNode* tmp47705;
    org$pandalanguage$pandac$parser$Token$Kind $tmp706;
    org$pandalanguage$pandac$ASTNode* tmp41710;
    org$pandalanguage$pandac$ASTNode* tmp48711;
    org$pandalanguage$pandac$ASTNode* arg717;
    org$pandalanguage$pandac$ASTNode* tmp49719;
    org$pandalanguage$pandac$parser$Token$Kind $tmp720;
    org$pandalanguage$pandac$ASTNode* tmp50723;
    org$pandalanguage$pandac$parser$Token$Kind $tmp726;
    panda$core$String* name728;
    org$pandalanguage$pandac$parser$Token$Kind $tmp729;
    org$pandalanguage$pandac$ASTNode* tmp51733;
    org$pandalanguage$pandac$ASTNode* target737;
    org$pandalanguage$pandac$ASTNode* tmp52739;
    org$pandalanguage$pandac$parser$Token$Kind $tmp742;
    panda$core$String* name744;
    panda$core$MutableString* finalName746;
    panda$core$Char8 $tmp749;
    panda$collections$Array* types750;
    org$pandalanguage$pandac$ASTNode* t757;
    org$pandalanguage$pandac$ASTNode* tmp42759;
    org$pandalanguage$pandac$ASTNode* tmp53760;
    org$pandalanguage$pandac$parser$Token$Kind $tmp763;
    org$pandalanguage$pandac$ASTNode* tmp43766;
    org$pandalanguage$pandac$ASTNode* tmp54767;
    org$pandalanguage$pandac$parser$Token$Kind $tmp769;
    org$pandalanguage$pandac$ASTNode* tmp44772;
    org$pandalanguage$pandac$ASTNode* tmp55773;
    panda$core$Char8 $tmp774;
    panda$core$Bit shouldAccept775;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29777;
    org$pandalanguage$pandac$ASTNode* tmp45798;
    org$pandalanguage$pandac$ASTNode* tmp56799;
    org$pandalanguage$pandac$ASTNode* tmp57800;
    org$pandalanguage$pandac$ASTNode* tmp58801;
    org$pandalanguage$pandac$ASTNode* $tmp679 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result678 = $tmp679;
    if (((panda$core$Bit) { result678 == NULL }).value) {
    {
        {
            tmp38680 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
            return tmp38680;
        }
    }
    }
    $l681:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp684 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token683 = $tmp684;
        {
            $match$540_13685 = token683.kind;
            panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13685.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp686.value) {
            {
                panda$core$Bit$wrapper* $tmp687;
                $tmp687 = (panda$core$Bit$wrapper*) pandaZAlloc(13);
                $tmp687->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp687->refCount = 1;
                $tmp687->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp687));
                panda$collections$Array* $tmp689 = (panda$collections$Array*) pandaZAlloc(40);
                $tmp689->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp689->refCount.value = 1;
                panda$collections$Array$init($tmp689);
                args688 = $tmp689;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp691, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp692 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp691);
                if (((panda$core$Bit) { !$tmp692.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp694 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr693 = $tmp694;
                    if (((panda$core$Bit) { expr693 == NULL }).value) {
                    {
                        panda$core$Object* $tmp695 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp39696 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr693));
                            {
                                tmp46697 = tmp39696;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                                return tmp46697;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args688, ((panda$core$Object*) expr693));
                    $l698:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp700, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp701 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp700);
                    if (!((panda$core$Bit) { $tmp701.nonnull }).value) goto $l699;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr693));
                            org$pandalanguage$pandac$ASTNode* $tmp702 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr693 = $tmp702;
                        }
                        if (((panda$core$Bit) { expr693 == NULL }).value) {
                        {
                            panda$core$Object* $tmp703 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            {
                                tmp40704 = NULL;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr693));
                                {
                                    tmp47705 = tmp40704;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                                    return tmp47705;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args688, ((panda$core$Object*) expr693));
                    }
                    goto $l698;
                    $l699:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp706, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp708 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp706, &$s707);
                    if (((panda$core$Bit) { !$tmp708.nonnull }).value) {
                    {
                        panda$core$Object* $tmp709 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp41710 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr693));
                            {
                                tmp48711 = tmp41710;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                                return tmp48711;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr693));
                }
                }
                panda$core$Object* $tmp712 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                    org$pandalanguage$pandac$ASTNode* $tmp713 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp713->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp713->refCount.value = 1;
                    panda$collections$ImmutableArray* $tmp715 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args688);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp713, ((panda$core$Int64) { 6 }), token683.position, result678, $tmp715);
                    result678 = $tmp713;
                }
            }
            }
            else {
            panda$core$Bit $tmp716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13685.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp716.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp718 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                arg717 = $tmp718;
                if (((panda$core$Bit) { arg717 == NULL }).value) {
                {
                    {
                        tmp49719 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                        return tmp49719;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp720, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp722 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp720, &$s721);
                if (((panda$core$Bit) { !$tmp722.nonnull }).value) {
                {
                    {
                        tmp50723 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                        return tmp50723;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                    org$pandalanguage$pandac$ASTNode* $tmp724 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp724->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp724->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp726, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp724, ((panda$core$Int64) { 2 }), token683.position, result678, $tmp726, arg717);
                    result678 = $tmp724;
                }
            }
            }
            else {
            panda$core$Bit $tmp727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13685.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp727.value) {
            {
                memset(&name728, 0, sizeof(name728));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp729, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp730 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp729);
                if (((panda$core$Bit) { $tmp730.nonnull }).value) {
                {
                    {
                        name728 = &$s731;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp732 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                        name728 = $tmp732;
                    }
                    if (((panda$core$Bit) { name728 == NULL }).value) {
                    {
                        {
                            tmp51733 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                            return tmp51733;
                        }
                    }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                    org$pandalanguage$pandac$ASTNode* $tmp734 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp734->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp734->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp734, ((panda$core$Int64) { 13 }), token683.position, result678, name728);
                    result678 = $tmp734;
                }
            }
            }
            else {
            panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13685.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp736.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp738 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target737 = $tmp738;
                if (((panda$core$Bit) { target737 == NULL }).value) {
                {
                    {
                        tmp52739 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                        return tmp52739;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                    org$pandalanguage$pandac$ASTNode* $tmp740 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp740->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp740->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp742, ((panda$core$Int64) { 89 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp740, ((panda$core$Int64) { 2 }), token683.position, result678, $tmp742, target737);
                    result678 = $tmp740;
                }
            }
            }
            else {
            panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13685.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp743.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token683);
                panda$core$String* $tmp745 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result678);
                name744 = $tmp745;
                if (((panda$core$Bit) { name744 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp747 = (panda$core$MutableString*) pandaZAlloc(48);
                    $tmp747->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp747->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp747, name744);
                    finalName746 = $tmp747;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp749, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName746, $tmp749);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp751 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp751->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp751->refCount.value = 1;
                    panda$collections$Array$init($tmp751);
                    types750 = $tmp751;
                    org$pandalanguage$pandac$ASTNode* $tmp753 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp753->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp753->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp756 = (($fn755) result678->$class->vtable[2])(result678);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp753, ((panda$core$Int64) { 35 }), $tmp756, name744);
                    panda$collections$Array$add$panda$collections$Array$T(types750, ((panda$core$Object*) $tmp753));
                    org$pandalanguage$pandac$ASTNode* $tmp758 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t757 = $tmp758;
                    if (((panda$core$Bit) { t757 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp42759 = result678;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types750));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t757));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName746));
                            }
                            {
                                tmp53760 = tmp42759;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                                return tmp53760;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types750, ((panda$core$Object*) t757));
                    panda$core$MutableString$append$panda$core$Object(finalName746, ((panda$core$Object*) t757));
                    $l761:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp763, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp764 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp763);
                    if (!((panda$core$Bit) { $tmp764.nonnull }).value) goto $l762;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t757));
                            org$pandalanguage$pandac$ASTNode* $tmp765 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                            t757 = $tmp765;
                        }
                        if (((panda$core$Bit) { t757 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            {
                                tmp43766 = result678;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types750));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t757));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName746));
                                }
                                {
                                    tmp54767 = tmp43766;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                                    return tmp54767;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types750, ((panda$core$Object*) t757));
                        panda$core$MutableString$append$panda$core$String(finalName746, &$s768);
                        panda$core$MutableString$append$panda$core$Object(finalName746, ((panda$core$Object*) t757));
                    }
                    goto $l761;
                    $l762:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp769, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp769, &$s770);
                    if (((panda$core$Bit) { !$tmp771.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp44772 = result678;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types750));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t757));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName746));
                            }
                            {
                                tmp55773 = tmp44772;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                                return tmp55773;
                            }
                        }
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp774, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName746, $tmp774);
                    memset(&shouldAccept775, 0, sizeof(shouldAccept775));
                    panda$core$Object* $tmp776 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp776)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp778 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29777 = $tmp778.kind;
                            panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29777.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp781 = $tmp782.value;
                            if ($tmp781) goto $l783;
                            panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29777.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp781 = $tmp784.value;
                            $l783:;
                            panda$core$Bit $tmp785 = { $tmp781 };
                            bool $tmp780 = $tmp785.value;
                            if ($tmp780) goto $l786;
                            panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29777.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp780 = $tmp787.value;
                            $l786:;
                            panda$core$Bit $tmp788 = { $tmp780 };
                            bool $tmp779 = $tmp788.value;
                            if ($tmp779) goto $l789;
                            panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29777.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp779 = $tmp790.value;
                            $l789:;
                            panda$core$Bit $tmp791 = { $tmp779 };
                            if ($tmp791.value) {
                            {
                                shouldAccept775 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept775 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept775 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept775.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                            org$pandalanguage$pandac$ASTNode* $tmp792 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                            $tmp792->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp792->refCount.value = 1;
                            org$pandalanguage$pandac$Position $tmp795 = (($fn794) result678->$class->vtable[2])(result678);
                            panda$core$String* $tmp796 = panda$core$MutableString$finish$R$panda$core$String(finalName746);
                            panda$collections$ImmutableArray* $tmp797 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types750);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp792, ((panda$core$Int64) { 17 }), $tmp795, $tmp796, $tmp797);
                            result678 = $tmp792;
                        }
                        {
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types750));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t757));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName746));
                            }
                            goto $l681;
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp45798 = result678;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types750));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t757));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName746));
                            }
                            {
                                tmp56799 = tmp45798;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                                return tmp56799;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types750));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t757));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName746));
                    }
                }
                }
                {
                    tmp57800 = result678;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                    return tmp57800;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token683);
                {
                    tmp58801 = result678;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
                    return tmp58801;
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
    $l682:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result678));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result802;
    org$pandalanguage$pandac$ASTNode* tmp59804;
    org$pandalanguage$pandac$parser$Token$nullable op807;
    org$pandalanguage$pandac$parser$Token$Kind $tmp808;
    org$pandalanguage$pandac$ASTNode* next810;
    org$pandalanguage$pandac$ASTNode* tmp60812;
    org$pandalanguage$pandac$ASTNode* tmp61813;
    org$pandalanguage$pandac$ASTNode* tmp62816;
    org$pandalanguage$pandac$ASTNode* $tmp803 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result802 = $tmp803;
    if (((panda$core$Bit) { result802 == NULL }).value) {
    {
        {
            tmp59804 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result802));
            return tmp59804;
        }
    }
    }
    $l805:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp808, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp809 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp808);
        op807 = $tmp809;
        if (((panda$core$Bit) { !op807.nonnull }).value) {
        {
            goto $l806;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp811 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next810 = $tmp811;
        if (((panda$core$Bit) { next810 == NULL }).value) {
        {
            {
                tmp60812 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next810));
                {
                    tmp61813 = tmp60812;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result802));
                    return tmp61813;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result802));
            org$pandalanguage$pandac$ASTNode* $tmp814 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp814->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp814->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp814, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op807.value).position, result802, ((org$pandalanguage$pandac$parser$Token) op807.value).kind, next810);
            result802 = $tmp814;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next810));
    }
    }
    $l806:;
    {
        tmp62816 = result802;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result802));
        return tmp62816;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op817;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9819;
    org$pandalanguage$pandac$ASTNode* base829;
    org$pandalanguage$pandac$parser$Token $tmp818 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op817 = $tmp818;
    {
        $match$709_9819 = op817.kind;
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9819.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp821 = $tmp822.value;
        if ($tmp821) goto $l823;
        panda$core$Bit $tmp824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9819.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp821 = $tmp824.value;
        $l823:;
        panda$core$Bit $tmp825 = { $tmp821 };
        bool $tmp820 = $tmp825.value;
        if ($tmp820) goto $l826;
        panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9819.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp820 = $tmp827.value;
        $l826:;
        panda$core$Bit $tmp828 = { $tmp820 };
        if ($tmp828.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp830 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base829 = $tmp830;
            if (((panda$core$Bit) { base829 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp831 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp831->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp831->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp831, ((panda$core$Int64) { 28 }), op817.position, op817.kind, base829);
            return $tmp831;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op817);
            org$pandalanguage$pandac$ASTNode* $tmp833 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp833;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result834;
    org$pandalanguage$pandac$ASTNode* tmp63836;
    org$pandalanguage$pandac$parser$Token op839;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13841;
    org$pandalanguage$pandac$ASTNode* next867;
    org$pandalanguage$pandac$ASTNode* tmp65869;
    org$pandalanguage$pandac$parser$Token nextToken873;
    org$pandalanguage$pandac$ASTNode* next876;
    org$pandalanguage$pandac$ASTNode* tmp64878;
    org$pandalanguage$pandac$ASTNode* tmp66879;
    org$pandalanguage$pandac$parser$Token$Kind $tmp882;
    org$pandalanguage$pandac$ASTNode* tmp67883;
    org$pandalanguage$pandac$ASTNode* tmp68884;
    org$pandalanguage$pandac$ASTNode* $tmp835 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result834 = $tmp835;
    if (((panda$core$Bit) { result834 == NULL }).value) {
    {
        {
            tmp63836 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
            return tmp63836;
        }
    }
    }
    $l837:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp840 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op839 = $tmp840;
        {
            $match$735_13841 = op839.kind;
            panda$core$Bit $tmp848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp847 = $tmp848.value;
            if ($tmp847) goto $l849;
            panda$core$Bit $tmp850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp847 = $tmp850.value;
            $l849:;
            panda$core$Bit $tmp851 = { $tmp847 };
            bool $tmp846 = $tmp851.value;
            if ($tmp846) goto $l852;
            panda$core$Bit $tmp853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp846 = $tmp853.value;
            $l852:;
            panda$core$Bit $tmp854 = { $tmp846 };
            bool $tmp845 = $tmp854.value;
            if ($tmp845) goto $l855;
            panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp845 = $tmp856.value;
            $l855:;
            panda$core$Bit $tmp857 = { $tmp845 };
            bool $tmp844 = $tmp857.value;
            if ($tmp844) goto $l858;
            panda$core$Bit $tmp859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp844 = $tmp859.value;
            $l858:;
            panda$core$Bit $tmp860 = { $tmp844 };
            bool $tmp843 = $tmp860.value;
            if ($tmp843) goto $l861;
            panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp843 = $tmp862.value;
            $l861:;
            panda$core$Bit $tmp863 = { $tmp843 };
            bool $tmp842 = $tmp863.value;
            if ($tmp842) goto $l864;
            panda$core$Bit $tmp865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp842 = $tmp865.value;
            $l864:;
            panda$core$Bit $tmp866 = { $tmp842 };
            if ($tmp866.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp868 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next867 = $tmp868;
                if (((panda$core$Bit) { next867 == NULL }).value) {
                {
                    {
                        tmp65869 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
                        return tmp65869;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
                    org$pandalanguage$pandac$ASTNode* $tmp870 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp870->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp870->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp870, ((panda$core$Int64) { 2 }), op839.position, result834, op839.kind, next867);
                    result834 = $tmp870;
                }
            }
            }
            else {
            panda$core$Bit $tmp872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13841.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp872.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp874 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken873 = $tmp874;
                panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken873.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp875.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp877 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next876 = $tmp877;
                    if (((panda$core$Bit) { next876 == NULL }).value) {
                    {
                        {
                            tmp64878 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next876));
                            {
                                tmp66879 = tmp64878;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
                                return tmp66879;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
                        org$pandalanguage$pandac$ASTNode* $tmp880 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                        $tmp880->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp880->refCount.value = 1;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp882, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp880, ((panda$core$Int64) { 2 }), op839.position, result834, $tmp882, next876);
                        result834 = $tmp880;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next876));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken873);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op839);
                    {
                        tmp67883 = result834;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
                        return tmp67883;
                    }
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op839);
                {
                    tmp68884 = result834;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
                    return tmp68884;
                }
            }
            }
            }
        }
    }
    }
    $l838:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result834));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result885;
    org$pandalanguage$pandac$ASTNode* tmp69887;
    org$pandalanguage$pandac$parser$Token op890;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13892;
    org$pandalanguage$pandac$ASTNode* next902;
    org$pandalanguage$pandac$ASTNode* tmp70904;
    org$pandalanguage$pandac$ASTNode* tmp71907;
    org$pandalanguage$pandac$ASTNode* $tmp886 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result885 = $tmp886;
    if (((panda$core$Bit) { result885 == NULL }).value) {
    {
        {
            tmp69887 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result885));
            return tmp69887;
        }
    }
    }
    $l888:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp891 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op890 = $tmp891;
        {
            $match$776_13892 = op890.kind;
            panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13892.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp894 = $tmp895.value;
            if ($tmp894) goto $l896;
            panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13892.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp894 = $tmp897.value;
            $l896:;
            panda$core$Bit $tmp898 = { $tmp894 };
            bool $tmp893 = $tmp898.value;
            if ($tmp893) goto $l899;
            panda$core$Bit $tmp900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13892.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp893 = $tmp900.value;
            $l899:;
            panda$core$Bit $tmp901 = { $tmp893 };
            if ($tmp901.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp903 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next902 = $tmp903;
                if (((panda$core$Bit) { next902 == NULL }).value) {
                {
                    {
                        tmp70904 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result885));
                        return tmp70904;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result885));
                    org$pandalanguage$pandac$ASTNode* $tmp905 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp905->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp905->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp905, ((panda$core$Int64) { 2 }), op890.position, result885, op890.kind, next902);
                    result885 = $tmp905;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op890);
                {
                    tmp71907 = result885;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result885));
                    return tmp71907;
                }
            }
            }
        }
    }
    }
    $l889:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result885));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result908;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9909;
    org$pandalanguage$pandac$ASTNode* tmp72917;
    org$pandalanguage$pandac$parser$Token op918;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9920;
    org$pandalanguage$pandac$parser$Token next926;
    org$pandalanguage$pandac$ASTNode* right928;
    org$pandalanguage$pandac$ASTNode* tmp73939;
    org$pandalanguage$pandac$ASTNode* step940;
    org$pandalanguage$pandac$parser$Token$Kind $tmp941;
    org$pandalanguage$pandac$ASTNode* tmp74944;
    org$pandalanguage$pandac$ASTNode* tmp75945;
    org$pandalanguage$pandac$ASTNode* tmp76949;
    memset(&result908, 0, sizeof(result908));
    {
        org$pandalanguage$pandac$parser$Token $tmp910 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9909 = $tmp910.kind;
        panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9909.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp911 = $tmp912.value;
        if ($tmp911) goto $l913;
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9909.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp911 = $tmp914.value;
        $l913:;
        panda$core$Bit $tmp915 = { $tmp911 };
        if ($tmp915.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
                result908 = NULL;
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
                org$pandalanguage$pandac$ASTNode* $tmp916 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                result908 = $tmp916;
            }
            if (((panda$core$Bit) { result908 == NULL }).value) {
            {
                {
                    tmp72917 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
                    return tmp72917;
                }
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp919 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op918 = $tmp919;
    {
        $match$806_9920 = op918.kind;
        panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9920.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp921 = $tmp922.value;
        if ($tmp921) goto $l923;
        panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9920.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp921 = $tmp924.value;
        $l923:;
        panda$core$Bit $tmp925 = { $tmp921 };
        if ($tmp925.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp927 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next926 = $tmp927;
            memset(&right928, 0, sizeof(right928));
            panda$core$Bit $tmp931 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next926.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp930 = $tmp931.value;
            if (!$tmp930) goto $l932;
            panda$core$Bit $tmp933 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next926.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp930 = $tmp933.value;
            $l932:;
            panda$core$Bit $tmp934 = { $tmp930 };
            bool $tmp929 = $tmp934.value;
            if (!$tmp929) goto $l935;
            panda$core$Bit $tmp936 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next926.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp929 = $tmp936.value;
            $l935:;
            panda$core$Bit $tmp937 = { $tmp929 };
            if ($tmp937.value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp938 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    right928 = $tmp938;
                }
                if (((panda$core$Bit) { right928 == NULL }).value) {
                {
                    {
                        tmp73939 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
                        return tmp73939;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    right928 = NULL;
                }
            }
            }
            memset(&step940, 0, sizeof(step940));
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp941, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp942 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp941);
            if (((panda$core$Bit) { $tmp942.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp943 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    step940 = $tmp943;
                }
                if (((panda$core$Bit) { step940 == NULL }).value) {
                {
                    {
                        tmp74944 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
                        return tmp74944;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    step940 = NULL;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp946 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp946->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp946->refCount.value = 1;
                panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op918.kind.$rawValue, ((panda$core$Int64) { 96 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp946, ((panda$core$Int64) { 29 }), op918.position, result908, right928, $tmp948, step940);
                tmp75945 = $tmp946;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
                return tmp75945;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op918);
            {
                tmp76949 = result908;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
                return tmp76949;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result908));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result950;
    org$pandalanguage$pandac$ASTNode* tmp77952;
    org$pandalanguage$pandac$parser$Token op955;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13957;
    org$pandalanguage$pandac$ASTNode* next987;
    org$pandalanguage$pandac$ASTNode* tmp78989;
    org$pandalanguage$pandac$ASTNode* tmp79992;
    org$pandalanguage$pandac$ASTNode* $tmp951 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result950 = $tmp951;
    if (((panda$core$Bit) { result950 == NULL }).value) {
    {
        {
            tmp77952 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
            return tmp77952;
        }
    }
    }
    $l953:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp956 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op955 = $tmp956;
        {
            $match$849_13957 = op955.kind;
            panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp964 = $tmp965.value;
            if ($tmp964) goto $l966;
            panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp964 = $tmp967.value;
            $l966:;
            panda$core$Bit $tmp968 = { $tmp964 };
            bool $tmp963 = $tmp968.value;
            if ($tmp963) goto $l969;
            panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp963 = $tmp970.value;
            $l969:;
            panda$core$Bit $tmp971 = { $tmp963 };
            bool $tmp962 = $tmp971.value;
            if ($tmp962) goto $l972;
            panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp962 = $tmp973.value;
            $l972:;
            panda$core$Bit $tmp974 = { $tmp962 };
            bool $tmp961 = $tmp974.value;
            if ($tmp961) goto $l975;
            panda$core$Bit $tmp976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp961 = $tmp976.value;
            $l975:;
            panda$core$Bit $tmp977 = { $tmp961 };
            bool $tmp960 = $tmp977.value;
            if ($tmp960) goto $l978;
            panda$core$Bit $tmp979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp960 = $tmp979.value;
            $l978:;
            panda$core$Bit $tmp980 = { $tmp960 };
            bool $tmp959 = $tmp980.value;
            if ($tmp959) goto $l981;
            panda$core$Bit $tmp982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp959 = $tmp982.value;
            $l981:;
            panda$core$Bit $tmp983 = { $tmp959 };
            bool $tmp958 = $tmp983.value;
            if ($tmp958) goto $l984;
            panda$core$Bit $tmp985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13957.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp958 = $tmp985.value;
            $l984:;
            panda$core$Bit $tmp986 = { $tmp958 };
            if ($tmp986.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp988 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next987 = $tmp988;
                if (((panda$core$Bit) { next987 == NULL }).value) {
                {
                    {
                        tmp78989 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
                        return tmp78989;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
                    org$pandalanguage$pandac$ASTNode* $tmp990 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp990->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp990->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp990, ((panda$core$Int64) { 2 }), op955.position, result950, op955.kind, next987);
                    result950 = $tmp990;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op955);
                {
                    tmp79992 = result950;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
                    return tmp79992;
                }
            }
            }
        }
    }
    }
    $l954:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result950));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result993;
    org$pandalanguage$pandac$ASTNode* tmp80995;
    org$pandalanguage$pandac$parser$Token op998;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_131000;
    org$pandalanguage$pandac$ASTNode* next1006;
    org$pandalanguage$pandac$ASTNode* tmp811008;
    org$pandalanguage$pandac$ASTNode* tmp821011;
    org$pandalanguage$pandac$ASTNode* $tmp994 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result993 = $tmp994;
    if (((panda$core$Bit) { result993 == NULL }).value) {
    {
        {
            tmp80995 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result993));
            return tmp80995;
        }
    }
    }
    $l996:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp999 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op998 = $tmp999;
        {
            $match$880_131000 = op998.kind;
            panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131000.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp1001 = $tmp1002.value;
            if ($tmp1001) goto $l1003;
            panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131000.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp1001 = $tmp1004.value;
            $l1003:;
            panda$core$Bit $tmp1005 = { $tmp1001 };
            if ($tmp1005.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1007 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next1006 = $tmp1007;
                if (((panda$core$Bit) { next1006 == NULL }).value) {
                {
                    {
                        tmp811008 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result993));
                        return tmp811008;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result993));
                    org$pandalanguage$pandac$ASTNode* $tmp1009 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp1009->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp1009->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1009, ((panda$core$Int64) { 2 }), op998.position, result993, op998.kind, next1006);
                    result993 = $tmp1009;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op998);
                {
                    tmp821011 = result993;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result993));
                    return tmp821011;
                }
            }
            }
        }
    }
    }
    $l997:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result993));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1012;
    org$pandalanguage$pandac$ASTNode* tmp831014;
    org$pandalanguage$pandac$parser$Token$nullable op1017;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1018;
    org$pandalanguage$pandac$ASTNode* next1020;
    org$pandalanguage$pandac$ASTNode* tmp841022;
    org$pandalanguage$pandac$ASTNode* tmp851023;
    org$pandalanguage$pandac$ASTNode* tmp861026;
    org$pandalanguage$pandac$ASTNode* $tmp1013 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result1012 = $tmp1013;
    if (((panda$core$Bit) { result1012 == NULL }).value) {
    {
        {
            tmp831014 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1012));
            return tmp831014;
        }
    }
    }
    $l1015:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1018, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1019 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1018);
        op1017 = $tmp1019;
        if (((panda$core$Bit) { !op1017.nonnull }).value) {
        {
            goto $l1016;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1021 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next1020 = $tmp1021;
        if (((panda$core$Bit) { next1020 == NULL }).value) {
        {
            {
                tmp841022 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1020));
                {
                    tmp851023 = tmp841022;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1012));
                    return tmp851023;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1012));
            org$pandalanguage$pandac$ASTNode* $tmp1024 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1024->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1024->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1024, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1017.value).position, result1012, ((org$pandalanguage$pandac$parser$Token) op1017.value).kind, next1020);
            result1012 = $tmp1024;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1020));
    }
    }
    $l1016:;
    {
        tmp861026 = result1012;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1012));
        return tmp861026;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1027;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1028;
    org$pandalanguage$pandac$ASTNode* test1031;
    org$pandalanguage$pandac$ASTNode* tmp871033;
    panda$collections$ImmutableArray* ifTrue1034;
    org$pandalanguage$pandac$ASTNode* tmp881036;
    org$pandalanguage$pandac$ASTNode* ifFalse1037;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1038;
    org$pandalanguage$pandac$ASTNode* tmp891043;
    org$pandalanguage$pandac$ASTNode* tmp901045;
    org$pandalanguage$pandac$ASTNode* tmp911046;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1028, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1030 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1028, &$s1029);
    start1027 = $tmp1030;
    if (((panda$core$Bit) { !start1027.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1032 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1031 = $tmp1032;
    if (((panda$core$Bit) { test1031 == NULL }).value) {
    {
        {
            tmp871033 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1031));
            return tmp871033;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1035 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    ifTrue1034 = $tmp1035;
    if (((panda$core$Bit) { ifTrue1034 == NULL }).value) {
    {
        {
            tmp881036 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1034));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1031));
            }
            return tmp881036;
        }
    }
    }
    memset(&ifFalse1037, 0, sizeof(ifFalse1037));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1038, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1039 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1038);
    if (((panda$core$Bit) { $tmp1039.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1040 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1040.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1041.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1037));
                org$pandalanguage$pandac$ASTNode* $tmp1042 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1037 = $tmp1042;
            }
            if (((panda$core$Bit) { ifFalse1037 == NULL }).value) {
            {
                {
                    tmp891043 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1034));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1031));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1037));
                    }
                    return tmp891043;
                }
            }
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1037));
                org$pandalanguage$pandac$ASTNode* $tmp1044 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1037 = $tmp1044;
            }
            if (((panda$core$Bit) { ifFalse1037 == NULL }).value) {
            {
                {
                    tmp901045 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1034));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1031));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1037));
                    }
                    return tmp901045;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1037));
            ifFalse1037 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1047 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1047->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1047->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1047, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1027.value).position, test1031, ifTrue1034, ifFalse1037);
        tmp911046 = $tmp1047;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1034));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1031));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1037));
        }
        return tmp911046;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1049;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1049, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1051 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1049, &$s1050);
    if (((panda$core$Bit) { !$tmp1051.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1052 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp1052;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1053;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1054;
    org$pandalanguage$pandac$ASTNode* type1059;
    org$pandalanguage$pandac$ASTNode* tmp921061;
    org$pandalanguage$pandac$ASTNode* tmp931062;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1054, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1056 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1054, &$s1055);
    id1053 = $tmp1056;
    if (((panda$core$Bit) { !id1053.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1057 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1057.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1058.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1060 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type1059 = $tmp1060;
        if (((panda$core$Bit) { type1059 == NULL }).value) {
        {
            {
                tmp921061 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1059));
                return tmp921061;
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1063 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1063->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1063->refCount.value = 1;
            panda$core$String* $tmp1065 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1053.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1063, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1053.value).position, $tmp1065, type1059);
            tmp931062 = $tmp1063;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1059));
            return tmp931062;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1066 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1066->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1066->refCount.value = 1;
    panda$core$String* $tmp1068 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1053.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1066, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1053.value).position, $tmp1068);
    return $tmp1066;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1069;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1070;
    org$pandalanguage$pandac$ASTNode* t1073;
    org$pandalanguage$pandac$ASTNode* tmp941075;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1076;
    org$pandalanguage$pandac$ASTNode* tmp951079;
    org$pandalanguage$pandac$ASTNode* list1080;
    org$pandalanguage$pandac$ASTNode* tmp961082;
    panda$collections$ImmutableArray* block1083;
    org$pandalanguage$pandac$ASTNode* tmp971085;
    org$pandalanguage$pandac$ASTNode* tmp981086;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1070, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1070, &$s1071);
    start1069 = $tmp1072;
    if (((panda$core$Bit) { !start1069.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1074 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1073 = $tmp1074;
    if (((panda$core$Bit) { t1073 == NULL }).value) {
    {
        {
            tmp941075 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1073));
            return tmp941075;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1076, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1078 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1076, &$s1077);
    if (((panda$core$Bit) { !$tmp1078.nonnull }).value) {
    {
        {
            tmp951079 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1073));
            return tmp951079;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1081 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list1080 = $tmp1081;
    if (((panda$core$Bit) { list1080 == NULL }).value) {
    {
        {
            tmp961082 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1073));
            }
            return tmp961082;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1084 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    block1083 = $tmp1084;
    if (((panda$core$Bit) { block1083 == NULL }).value) {
    {
        {
            tmp971085 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1073));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1083));
            }
            return tmp971085;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1087 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1087->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1087->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1087, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1069.value).position, p_label, t1073, list1080, block1083);
        tmp981086 = $tmp1087;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1080));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1073));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1083));
        }
        return tmp981086;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1089;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1090;
    org$pandalanguage$pandac$ASTNode* test1093;
    org$pandalanguage$pandac$ASTNode* tmp991095;
    panda$collections$ImmutableArray* body1096;
    org$pandalanguage$pandac$ASTNode* tmp1001098;
    org$pandalanguage$pandac$ASTNode* tmp1011099;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1090, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1092 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1090, &$s1091);
    start1089 = $tmp1092;
    if (((panda$core$Bit) { !start1089.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1094 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1093 = $tmp1094;
    if (((panda$core$Bit) { test1093 == NULL }).value) {
    {
        {
            tmp991095 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1093));
            return tmp991095;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1097 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1096 = $tmp1097;
    if (((panda$core$Bit) { body1096 == NULL }).value) {
    {
        {
            tmp1001098 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1093));
            }
            return tmp1001098;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1100 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1100->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1100->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1100, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1089.value).position, p_label, test1093, body1096);
        tmp1011099 = $tmp1100;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1096));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1093));
        }
        return tmp1011099;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1102;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1103;
    panda$collections$ImmutableArray* body1106;
    org$pandalanguage$pandac$ASTNode* tmp1021108;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1109;
    org$pandalanguage$pandac$ASTNode* tmp1031112;
    org$pandalanguage$pandac$ASTNode* test1113;
    org$pandalanguage$pandac$ASTNode* tmp1041115;
    org$pandalanguage$pandac$ASTNode* tmp1051116;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1103, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1105 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1103, &$s1104);
    start1102 = $tmp1105;
    if (((panda$core$Bit) { !start1102.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1107 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1106 = $tmp1107;
    if (((panda$core$Bit) { body1106 == NULL }).value) {
    {
        {
            tmp1021108 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1106));
            return tmp1021108;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1109, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1111 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1109, &$s1110);
    if (((panda$core$Bit) { !$tmp1111.nonnull }).value) {
    {
        {
            tmp1031112 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1106));
            return tmp1031112;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1114 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1113 = $tmp1114;
    if (((panda$core$Bit) { test1113 == NULL }).value) {
    {
        {
            tmp1041115 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1113));
            }
            return tmp1041115;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1117 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1117->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1117->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1117, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1102.value).position, p_label, body1106, test1113);
        tmp1051116 = $tmp1117;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1113));
        }
        return tmp1051116;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1120;
    panda$collections$ImmutableArray* body1123;
    org$pandalanguage$pandac$ASTNode* tmp1061125;
    org$pandalanguage$pandac$ASTNode* tmp1071126;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1120, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1122 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1120, &$s1121);
    start1119 = $tmp1122;
    if (((panda$core$Bit) { !start1119.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1124 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1123 = $tmp1124;
    if (((panda$core$Bit) { body1123 == NULL }).value) {
    {
        {
            tmp1061125 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1123));
            return tmp1061125;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1127 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1127->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1127->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1127, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1119.value).position, p_label, body1123);
        tmp1071126 = $tmp1127;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1123));
        return tmp1071126;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1129;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1130;
    org$pandalanguage$pandac$ASTNode* expr1133;
    org$pandalanguage$pandac$ASTNode* tmp1081135;
    org$pandalanguage$pandac$ASTNode* message1136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1137;
    org$pandalanguage$pandac$ASTNode* tmp1091140;
    org$pandalanguage$pandac$ASTNode* tmp1101141;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1130, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1132 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1130, &$s1131);
    start1129 = $tmp1132;
    if (((panda$core$Bit) { !start1129.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1134 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1133 = $tmp1134;
    if (((panda$core$Bit) { expr1133 == NULL }).value) {
    {
        {
            tmp1081135 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1133));
            return tmp1081135;
        }
    }
    }
    memset(&message1136, 0, sizeof(message1136));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1137, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1138 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1137);
    if (((panda$core$Bit) { $tmp1138.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1139 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            message1136 = $tmp1139;
        }
        if (((panda$core$Bit) { message1136 == NULL }).value) {
        {
            {
                tmp1091140 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1136));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1133));
                }
                return tmp1091140;
            }
        }
        }
    }
    }
    else {
    {
        {
            message1136 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1142 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1142->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1142->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1142, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1129.value).position, expr1133, message1136);
        tmp1101141 = $tmp1142;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1133));
        }
        return tmp1101141;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1144;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1145;
    panda$collections$Array* expressions1148;
    org$pandalanguage$pandac$ASTNode* expr1151;
    org$pandalanguage$pandac$ASTNode* tmp1111153;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1156;
    org$pandalanguage$pandac$ASTNode* tmp1121159;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1160;
    org$pandalanguage$pandac$ASTNode* tmp1131163;
    panda$collections$Array* statements1164;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131169;
    org$pandalanguage$pandac$ASTNode* stmt1189;
    org$pandalanguage$pandac$ASTNode* tmp1151191;
    org$pandalanguage$pandac$ASTNode* stmt1192;
    org$pandalanguage$pandac$ASTNode* tmp1141194;
    org$pandalanguage$pandac$ASTNode* tmp1161195;
    org$pandalanguage$pandac$ASTNode* tmp1171196;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1145, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1147 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1145, &$s1146);
    start1144 = $tmp1147;
    if (((panda$core$Bit) { !start1144.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1149 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1149->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1149->refCount.value = 1;
    panda$collections$Array$init($tmp1149);
    expressions1148 = $tmp1149;
    org$pandalanguage$pandac$ASTNode* $tmp1152 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1151 = $tmp1152;
    if (((panda$core$Bit) { expr1151 == NULL }).value) {
    {
        {
            tmp1111153 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1148));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1151));
            }
            return tmp1111153;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1148, ((panda$core$Object*) expr1151));
    $l1154:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1156, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1157 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1156);
    if (!((panda$core$Bit) { $tmp1157.nonnull }).value) goto $l1155;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1151));
            org$pandalanguage$pandac$ASTNode* $tmp1158 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1151 = $tmp1158;
        }
        if (((panda$core$Bit) { expr1151 == NULL }).value) {
        {
            {
                tmp1121159 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1148));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1151));
                }
                return tmp1121159;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1148, ((panda$core$Object*) expr1151));
    }
    goto $l1154;
    $l1155:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1160, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1162 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1160, &$s1161);
    if (((panda$core$Bit) { !$tmp1162.nonnull }).value) {
    {
        {
            tmp1131163 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1148));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1151));
            }
            return tmp1131163;
        }
    }
    }
    panda$collections$Array* $tmp1165 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1165->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1165->refCount.value = 1;
    panda$collections$Array$init($tmp1165);
    statements1164 = $tmp1165;
    $l1167:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1170 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131169 = $tmp1170.kind;
            panda$core$Bit $tmp1173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131169.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1172 = $tmp1173.value;
            if ($tmp1172) goto $l1174;
            panda$core$Bit $tmp1175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131169.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1172 = $tmp1175.value;
            $l1174:;
            panda$core$Bit $tmp1176 = { $tmp1172 };
            bool $tmp1171 = $tmp1176.value;
            if ($tmp1171) goto $l1177;
            panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131169.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1171 = $tmp1178.value;
            $l1177:;
            panda$core$Bit $tmp1179 = { $tmp1171 };
            if ($tmp1179.value) {
            {
                goto $l1168;
            }
            }
            else {
            panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131169.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1181 = $tmp1182.value;
            if ($tmp1181) goto $l1183;
            panda$core$Bit $tmp1184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131169.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1181 = $tmp1184.value;
            $l1183:;
            panda$core$Bit $tmp1185 = { $tmp1181 };
            bool $tmp1180 = $tmp1185.value;
            if ($tmp1180) goto $l1186;
            panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131169.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1180 = $tmp1187.value;
            $l1186:;
            panda$core$Bit $tmp1188 = { $tmp1180 };
            if ($tmp1188.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1190 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1189 = $tmp1190;
                if (((panda$core$Bit) { stmt1189 == NULL }).value) {
                {
                    {
                        tmp1151191 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1148));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1164));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1151));
                        }
                        return tmp1151191;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1164, ((panda$core$Object*) stmt1189));
                goto $l1168;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1193 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1192 = $tmp1193;
                    if (((panda$core$Bit) { stmt1192 == NULL }).value) {
                    {
                        {
                            tmp1141194 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1192));
                            {
                                tmp1161195 = tmp1141194;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1148));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1164));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1151));
                                }
                                return tmp1161195;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1164, ((panda$core$Object*) stmt1192));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1192));
                }
            }
            }
            }
        }
    }
    }
    $l1168:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1197 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1197->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1197->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1199 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1148);
        panda$collections$ImmutableArray* $tmp1200 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1164);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1197, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1144.value).position, $tmp1199, $tmp1200);
        tmp1171196 = $tmp1197;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1164));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1151));
        }
        return tmp1171196;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1201;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1202;
    org$pandalanguage$pandac$ASTNode* expr1205;
    org$pandalanguage$pandac$ASTNode* tmp1181207;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1208;
    org$pandalanguage$pandac$ASTNode* tmp1191211;
    panda$collections$Array* whens1212;
    panda$collections$Array* other1215;
    org$pandalanguage$pandac$parser$Token token1218;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131220;
    org$pandalanguage$pandac$ASTNode* w1223;
    org$pandalanguage$pandac$ASTNode* tmp1201225;
    org$pandalanguage$pandac$parser$Token o1227;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1229;
    org$pandalanguage$pandac$ASTNode* tmp1211232;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251237;
    org$pandalanguage$pandac$ASTNode* stmt1249;
    org$pandalanguage$pandac$ASTNode* tmp1221251;
    org$pandalanguage$pandac$ASTNode* stmt1252;
    org$pandalanguage$pandac$ASTNode* tmp1231254;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1262;
    org$pandalanguage$pandac$ASTNode* tmp1241265;
    org$pandalanguage$pandac$ASTNode* tmp1251266;
    org$pandalanguage$pandac$ASTNode* tmp1261271;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1202, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1204 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1202, &$s1203);
    start1201 = $tmp1204;
    if (((panda$core$Bit) { !start1201.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1206 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1205 = $tmp1206;
    if (((panda$core$Bit) { expr1205 == NULL }).value) {
    {
        {
            tmp1181207 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
            return tmp1181207;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1208, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1210 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1208, &$s1209);
    if (((panda$core$Bit) { !$tmp1210.nonnull }).value) {
    {
        {
            tmp1191211 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
            return tmp1191211;
        }
    }
    }
    panda$collections$Array* $tmp1213 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1213->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1213->refCount.value = 1;
    panda$collections$Array$init($tmp1213);
    whens1212 = $tmp1213;
    other1215 = NULL;
    $l1216:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1219 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1218 = $tmp1219;
        {
            $match$1155_131220 = token1218.kind;
            panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131220.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1221.value) {
            {
                goto $l1217;
            }
            }
            else {
            panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131220.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1222.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1224 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1223 = $tmp1224;
                if (((panda$core$Bit) { w1223 == NULL }).value) {
                {
                    {
                        tmp1201225 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1212));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
                        }
                        return tmp1201225;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1212, ((panda$core$Object*) w1223));
            }
            }
            else {
            panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131220.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1226.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1228 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1227 = $tmp1228;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1229, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1231 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1229, &$s1230);
                if (((panda$core$Bit) { !$tmp1231.nonnull }).value) {
                {
                    {
                        tmp1211232 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1212));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
                        }
                        return tmp1211232;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
                    panda$collections$Array* $tmp1233 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp1233->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp1233->refCount.value = 1;
                    panda$collections$Array$init($tmp1233);
                    other1215 = $tmp1233;
                }
                $l1235:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1238 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251237 = $tmp1238.kind;
                        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251237.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1239.value) {
                        {
                            goto $l1236;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251237.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1241 = $tmp1242.value;
                        if ($tmp1241) goto $l1243;
                        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251237.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1241 = $tmp1244.value;
                        $l1243:;
                        panda$core$Bit $tmp1245 = { $tmp1241 };
                        bool $tmp1240 = $tmp1245.value;
                        if ($tmp1240) goto $l1246;
                        panda$core$Bit $tmp1247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251237.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1240 = $tmp1247.value;
                        $l1246:;
                        panda$core$Bit $tmp1248 = { $tmp1240 };
                        if ($tmp1248.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1250 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1249 = $tmp1250;
                            if (((panda$core$Bit) { stmt1249 == NULL }).value) {
                            {
                                {
                                    tmp1221251 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1212));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
                                    }
                                    return tmp1221251;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1215, ((panda$core$Object*) stmt1249));
                            goto $l1236;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1253 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1252 = $tmp1253;
                            if (((panda$core$Bit) { stmt1252 == NULL }).value) {
                            {
                                {
                                    tmp1231254 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1212));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
                                    }
                                    return tmp1231254;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1215, ((panda$core$Object*) stmt1252));
                        }
                        }
                        }
                    }
                }
                }
                $l1236:;
                goto $l1217;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1257 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1218);
                panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1256, $tmp1257);
                panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
                panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1255, $tmp1260);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1218, $tmp1261);
            }
            }
            }
            }
        }
    }
    }
    $l1217:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1262, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1264 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1262, &$s1263);
    if (((panda$core$Bit) { !$tmp1264.nonnull }).value) {
    {
        {
            tmp1241265 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
            }
            return tmp1241265;
        }
    }
    }
    if (((panda$core$Bit) { other1215 != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1267 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1267->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1267->refCount.value = 1;
            panda$collections$ImmutableArray* $tmp1269 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1212);
            panda$collections$ImmutableArray* $tmp1270 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1215);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1267, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1201.value).position, expr1205, $tmp1269, $tmp1270);
            tmp1251266 = $tmp1267;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
            }
            return tmp1251266;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1272 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1272->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1272->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1274 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1212);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1272, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1201.value).position, expr1205, $tmp1274, NULL);
        tmp1261271 = $tmp1272;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1215));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1205));
        }
        return tmp1261271;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1275;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1276;
    panda$collections$Array* result1279;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131284;
    org$pandalanguage$pandac$ASTNode* stmt1296;
    panda$collections$ImmutableArray* tmp1271298;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1299;
    panda$collections$ImmutableArray* tmp1281302;
    org$pandalanguage$pandac$ASTNode* stmt1303;
    panda$collections$ImmutableArray* tmp1291305;
    panda$collections$ImmutableArray* tmp1301306;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1276, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1278 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1276, &$s1277);
    start1275 = $tmp1278;
    if (((panda$core$Bit) { !start1275.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1280 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1280->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1280->refCount.value = 1;
    panda$collections$Array$init($tmp1280);
    result1279 = $tmp1280;
    $l1282:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1285 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131284 = $tmp1285.kind;
            panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131284.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1286.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1283;
            }
            }
            else {
            panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131284.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1288 = $tmp1289.value;
            if ($tmp1288) goto $l1290;
            panda$core$Bit $tmp1291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131284.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1288 = $tmp1291.value;
            $l1290:;
            panda$core$Bit $tmp1292 = { $tmp1288 };
            bool $tmp1287 = $tmp1292.value;
            if ($tmp1287) goto $l1293;
            panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131284.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1287 = $tmp1294.value;
            $l1293:;
            panda$core$Bit $tmp1295 = { $tmp1287 };
            if ($tmp1295.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1297 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1296 = $tmp1297;
                if (((panda$core$Bit) { stmt1296 == NULL }).value) {
                {
                    {
                        tmp1271298 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1279));
                        return tmp1271298;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1299, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1301 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1299, &$s1300);
                if (((panda$core$Bit) { !$tmp1301.nonnull }).value) {
                {
                    {
                        tmp1281302 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1279));
                        return tmp1281302;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1279, ((panda$core$Object*) stmt1296));
                goto $l1283;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1304 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1303 = $tmp1304;
                if (((panda$core$Bit) { stmt1303 == NULL }).value) {
                {
                    {
                        tmp1291305 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1279));
                        return tmp1291305;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1279, ((panda$core$Object*) stmt1303));
            }
            }
            }
        }
    }
    }
    $l1283:;
    {
        panda$collections$ImmutableArray* $tmp1307 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1279);
        tmp1301306 = $tmp1307;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1279));
        return tmp1301306;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1308;
    org$pandalanguage$pandac$ASTNode* tmp1311310;
    org$pandalanguage$pandac$ASTNode* tmp1321311;
    org$pandalanguage$pandac$Position $tmp1314;
    panda$collections$ImmutableArray* $tmp1309 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    statements1308 = $tmp1309;
    if (((panda$core$Bit) { statements1308 == NULL }).value) {
    {
        {
            tmp1311310 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1308));
            return tmp1311310;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1312 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1312->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1312->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1314);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1312, ((panda$core$Int64) { 4 }), $tmp1314, statements1308);
        tmp1321311 = $tmp1312;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1308));
        return tmp1321311;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1315;
    org$pandalanguage$pandac$ASTNode* tmp1331317;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91318;
    org$pandalanguage$pandac$parser$Token op1381;
    org$pandalanguage$pandac$ASTNode* rvalue1383;
    org$pandalanguage$pandac$ASTNode* tmp1341385;
    org$pandalanguage$pandac$ASTNode* tmp1351386;
    org$pandalanguage$pandac$parser$Token op1394;
    org$pandalanguage$pandac$ASTNode* rvalue1396;
    org$pandalanguage$pandac$ASTNode* tmp1361398;
    org$pandalanguage$pandac$ASTNode* tmp1371399;
    org$pandalanguage$pandac$ASTNode* tmp1381404;
    org$pandalanguage$pandac$ASTNode* $tmp1316 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1315 = $tmp1316;
    if (((panda$core$Bit) { start1315 == NULL }).value) {
    {
        {
            tmp1331317 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1315));
            return tmp1331317;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1319 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91318 = $tmp1319.kind;
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1334 = $tmp1335.value;
        if ($tmp1334) goto $l1336;
        panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1334 = $tmp1337.value;
        $l1336:;
        panda$core$Bit $tmp1338 = { $tmp1334 };
        bool $tmp1333 = $tmp1338.value;
        if ($tmp1333) goto $l1339;
        panda$core$Bit $tmp1340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1333 = $tmp1340.value;
        $l1339:;
        panda$core$Bit $tmp1341 = { $tmp1333 };
        bool $tmp1332 = $tmp1341.value;
        if ($tmp1332) goto $l1342;
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1332 = $tmp1343.value;
        $l1342:;
        panda$core$Bit $tmp1344 = { $tmp1332 };
        bool $tmp1331 = $tmp1344.value;
        if ($tmp1331) goto $l1345;
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1331 = $tmp1346.value;
        $l1345:;
        panda$core$Bit $tmp1347 = { $tmp1331 };
        bool $tmp1330 = $tmp1347.value;
        if ($tmp1330) goto $l1348;
        panda$core$Bit $tmp1349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1330 = $tmp1349.value;
        $l1348:;
        panda$core$Bit $tmp1350 = { $tmp1330 };
        bool $tmp1329 = $tmp1350.value;
        if ($tmp1329) goto $l1351;
        panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1329 = $tmp1352.value;
        $l1351:;
        panda$core$Bit $tmp1353 = { $tmp1329 };
        bool $tmp1328 = $tmp1353.value;
        if ($tmp1328) goto $l1354;
        panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1328 = $tmp1355.value;
        $l1354:;
        panda$core$Bit $tmp1356 = { $tmp1328 };
        bool $tmp1327 = $tmp1356.value;
        if ($tmp1327) goto $l1357;
        panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1327 = $tmp1358.value;
        $l1357:;
        panda$core$Bit $tmp1359 = { $tmp1327 };
        bool $tmp1326 = $tmp1359.value;
        if ($tmp1326) goto $l1360;
        panda$core$Bit $tmp1361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1326 = $tmp1361.value;
        $l1360:;
        panda$core$Bit $tmp1362 = { $tmp1326 };
        bool $tmp1325 = $tmp1362.value;
        if ($tmp1325) goto $l1363;
        panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1325 = $tmp1364.value;
        $l1363:;
        panda$core$Bit $tmp1365 = { $tmp1325 };
        bool $tmp1324 = $tmp1365.value;
        if ($tmp1324) goto $l1366;
        panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1324 = $tmp1367.value;
        $l1366:;
        panda$core$Bit $tmp1368 = { $tmp1324 };
        bool $tmp1323 = $tmp1368.value;
        if ($tmp1323) goto $l1369;
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1323 = $tmp1370.value;
        $l1369:;
        panda$core$Bit $tmp1371 = { $tmp1323 };
        bool $tmp1322 = $tmp1371.value;
        if ($tmp1322) goto $l1372;
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1322 = $tmp1373.value;
        $l1372:;
        panda$core$Bit $tmp1374 = { $tmp1322 };
        bool $tmp1321 = $tmp1374.value;
        if ($tmp1321) goto $l1375;
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1321 = $tmp1376.value;
        $l1375:;
        panda$core$Bit $tmp1377 = { $tmp1321 };
        bool $tmp1320 = $tmp1377.value;
        if ($tmp1320) goto $l1378;
        panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1320 = $tmp1379.value;
        $l1378:;
        panda$core$Bit $tmp1380 = { $tmp1320 };
        if ($tmp1380.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1382 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1381 = $tmp1382;
            org$pandalanguage$pandac$ASTNode* $tmp1384 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1383 = $tmp1384;
            if (((panda$core$Bit) { rvalue1383 == NULL }).value) {
            {
                {
                    tmp1341385 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1315));
                    return tmp1341385;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1387 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp1387->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1387->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1390 = (($fn1389) start1315->$class->vtable[2])(start1315);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1387, ((panda$core$Int64) { 2 }), $tmp1390, start1315, op1381.kind, rvalue1383);
                tmp1351386 = $tmp1387;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1315));
                return tmp1351386;
            }
        }
        }
        else {
        panda$core$Bit $tmp1391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91318.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1391.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1392 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1392, &$s1393);
            org$pandalanguage$pandac$parser$Token $tmp1395 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1394 = $tmp1395;
            org$pandalanguage$pandac$ASTNode* $tmp1397 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1396 = $tmp1397;
            if (((panda$core$Bit) { rvalue1396 == NULL }).value) {
            {
                {
                    tmp1361398 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1315));
                    return tmp1361398;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1400 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp1400->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1400->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1403 = (($fn1402) start1315->$class->vtable[2])(start1315);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1400, ((panda$core$Int64) { 2 }), $tmp1403, start1315, op1394.kind, rvalue1396);
                tmp1371399 = $tmp1400;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1315));
                return tmp1371399;
            }
        }
        }
        else {
        {
            {
                tmp1381404 = start1315;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1315));
                return tmp1381404;
            }
        }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1315));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1405;
    org$pandalanguage$pandac$ASTNode* tmp1391407;
    org$pandalanguage$pandac$ASTNode* value1408;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1409;
    org$pandalanguage$pandac$ASTNode* tmp1401412;
    org$pandalanguage$pandac$ASTNode* tmp1411418;
    org$pandalanguage$pandac$ASTNode* tmp1421419;
    org$pandalanguage$pandac$ASTNode* $tmp1406 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1405 = $tmp1406;
    if (((panda$core$Bit) { t1405 == NULL }).value) {
    {
        {
            tmp1391407 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1405));
            return tmp1391407;
        }
    }
    }
    memset(&value1408, 0, sizeof(value1408));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1409, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1410 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1409);
    if (((panda$core$Bit) { $tmp1410.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1411 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1408 = $tmp1411;
        }
        if (((panda$core$Bit) { value1408 == NULL }).value) {
        {
            {
                tmp1401412 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1405));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1408));
                }
                return tmp1401412;
            }
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1413 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1413.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1414.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1415 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1415, &$s1416);
        {
            org$pandalanguage$pandac$ASTNode* $tmp1417 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1408 = $tmp1417;
        }
        if (((panda$core$Bit) { value1408 == NULL }).value) {
        {
            {
                tmp1411418 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1405));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1408));
                }
                return tmp1411418;
            }
        }
        }
    }
    }
    else {
    {
        {
            value1408 = NULL;
        }
    }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1420 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1420->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1420->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp1423 = (($fn1422) t1405->$class->vtable[2])(t1405);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1420, ((panda$core$Int64) { 11 }), $tmp1423, t1405, value1408);
        tmp1421419 = $tmp1420;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1405));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1408));
        }
        return tmp1421419;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1424;
    org$pandalanguage$pandac$Variable$Kind kind1426;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91427;
    org$pandalanguage$pandac$Variable$Kind $tmp1429;
    org$pandalanguage$pandac$Variable$Kind $tmp1431;
    org$pandalanguage$pandac$Variable$Kind $tmp1433;
    org$pandalanguage$pandac$Variable$Kind $tmp1435;
    panda$collections$Array* declarations1437;
    org$pandalanguage$pandac$ASTNode* decl1440;
    org$pandalanguage$pandac$ASTNode* tmp1431442;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1445;
    org$pandalanguage$pandac$ASTNode* decl1447;
    org$pandalanguage$pandac$ASTNode* tmp1441449;
    org$pandalanguage$pandac$ASTNode* tmp1451450;
    org$pandalanguage$pandac$ASTNode* tmp1461451;
    org$pandalanguage$pandac$parser$Token $tmp1425 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1424 = $tmp1425;
    memset(&kind1426, 0, sizeof(kind1426));
    {
        $match$1318_91427 = start1424.kind;
        panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91427.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1428.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1429, ((panda$core$Int64) { 0 }));
            kind1426 = $tmp1429;
        }
        }
        else {
        panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91427.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1430.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1431, ((panda$core$Int64) { 1 }));
            kind1426 = $tmp1431;
        }
        }
        else {
        panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91427.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1432.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1433, ((panda$core$Int64) { 3 }));
            kind1426 = $tmp1433;
        }
        }
        else {
        panda$core$Bit $tmp1434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91427.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1434.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1435, ((panda$core$Int64) { 2 }));
            kind1426 = $tmp1435;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1424, &$s1436);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1438 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1438->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1438->refCount.value = 1;
    panda$collections$Array$init($tmp1438);
    declarations1437 = $tmp1438;
    org$pandalanguage$pandac$ASTNode* $tmp1441 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1440 = $tmp1441;
    if (((panda$core$Bit) { decl1440 == NULL }).value) {
    {
        {
            tmp1431442 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1440));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1437));
            }
            return tmp1431442;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1437, ((panda$core$Object*) decl1440));
    $l1443:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1445, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1446 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1445);
    if (!((panda$core$Bit) { $tmp1446.nonnull }).value) goto $l1444;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1448 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        decl1447 = $tmp1448;
        if (((panda$core$Bit) { decl1447 == NULL }).value) {
        {
            {
                tmp1441449 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1447));
                {
                    tmp1451450 = tmp1441449;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1440));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1437));
                    }
                    return tmp1451450;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1437, ((panda$core$Object*) decl1447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1447));
    }
    goto $l1443;
    $l1444:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1452 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1452->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1452->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1454 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1437);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1452, ((panda$core$Int64) { 38 }), start1424.position, kind1426, $tmp1454);
        tmp1461451 = $tmp1452;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1437));
        }
        return tmp1461451;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1455;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1456;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1459;
    org$pandalanguage$pandac$ASTNode* target1463;
    panda$collections$Array* args1467;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1470;
    org$pandalanguage$pandac$ASTNode* expr1472;
    org$pandalanguage$pandac$ASTNode* tmp1471475;
    org$pandalanguage$pandac$ASTNode* tmp1501476;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1479;
    org$pandalanguage$pandac$ASTNode* tmp1481483;
    org$pandalanguage$pandac$ASTNode* tmp1511484;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1485;
    org$pandalanguage$pandac$ASTNode* tmp1491489;
    org$pandalanguage$pandac$ASTNode* tmp1521490;
    org$pandalanguage$pandac$ASTNode* tmp1531492;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1456, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1458 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1456, &$s1457);
    start1455 = $tmp1458;
    if (((panda$core$Bit) { !start1455.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1459, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1461 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1459, &$s1460);
    if (((panda$core$Bit) { !$tmp1461.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1462;
    $tmp1462 = (panda$core$Bit$wrapper*) pandaZAlloc(13);
    $tmp1462->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp1462->refCount = 1;
    $tmp1462->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1462));
    org$pandalanguage$pandac$ASTNode* $tmp1464 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1464->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1464->refCount.value = 1;
    panda$core$String* $tmp1466 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1455.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1464, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1455.value).position, $tmp1466);
    target1463 = $tmp1464;
    panda$collections$Array* $tmp1468 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1468->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1468->refCount.value = 1;
    panda$collections$Array$init($tmp1468);
    args1467 = $tmp1468;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1470, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1471 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1470);
    if (((panda$core$Bit) { !$tmp1471.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1473 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1472 = $tmp1473;
        if (((panda$core$Bit) { expr1472 == NULL }).value) {
        {
            panda$core$Object* $tmp1474 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1471475 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1472));
                {
                    tmp1501476 = tmp1471475;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1463));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1467));
                    }
                    return tmp1501476;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1467, ((panda$core$Object*) expr1472));
        $l1477:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1479, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1480 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1479);
        if (!((panda$core$Bit) { $tmp1480.nonnull }).value) goto $l1478;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1472));
                org$pandalanguage$pandac$ASTNode* $tmp1481 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr1472 = $tmp1481;
            }
            if (((panda$core$Bit) { expr1472 == NULL }).value) {
            {
                panda$core$Object* $tmp1482 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    tmp1481483 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1472));
                    {
                        tmp1511484 = tmp1481483;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1463));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1467));
                        }
                        return tmp1511484;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1467, ((panda$core$Object*) expr1472));
        }
        goto $l1477;
        $l1478:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1485, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1487 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1485, &$s1486);
        if (((panda$core$Bit) { !$tmp1487.nonnull }).value) {
        {
            panda$core$Object* $tmp1488 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1491489 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1472));
                {
                    tmp1521490 = tmp1491489;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1463));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1467));
                    }
                    return tmp1521490;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1472));
    }
    }
    panda$core$Object* $tmp1491 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    {
        org$pandalanguage$pandac$ASTNode* $tmp1493 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1493->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1493->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1495 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1467);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1493, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1455.value).position, target1463, $tmp1495);
        tmp1531492 = $tmp1493;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1467));
        }
        return tmp1531492;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1496;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1497;
    org$pandalanguage$pandac$parser$Token$nullable label1500;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1501;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1497, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1499 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1497, &$s1498);
    start1496 = $tmp1499;
    if (((panda$core$Bit) { !start1496.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1501, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1502 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1501);
    label1500 = $tmp1502;
    if (((panda$core$Bit) { label1500.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1503 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1503->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1503->refCount.value = 1;
        panda$core$String* $tmp1505 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1500.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1503, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1496.value).position, $tmp1505);
        return $tmp1503;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1506 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1506->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1506->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1506, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1496.value).position, NULL);
    return $tmp1506;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1508;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1509;
    org$pandalanguage$pandac$parser$Token$nullable label1512;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1513;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1509, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1511 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1509, &$s1510);
    start1508 = $tmp1511;
    if (((panda$core$Bit) { !start1508.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1513, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1514 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1513);
    label1512 = $tmp1514;
    if (((panda$core$Bit) { label1512.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1515 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1515->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1515->refCount.value = 1;
        panda$core$String* $tmp1517 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1512.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1515, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1508.value).position, $tmp1517);
        return $tmp1515;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1518 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1518->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1518->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1518, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1508.value).position, NULL);
    return $tmp1518;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1520;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1521;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_91524;
    panda$collections$Array* children1537;
    org$pandalanguage$pandac$ASTNode* expr1540;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1521, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1523 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1521, &$s1522);
    start1520 = $tmp1523;
    if (((panda$core$Bit) { !start1520.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1525 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_91524 = $tmp1525.kind;
        panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91524.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1527 = $tmp1528.value;
        if ($tmp1527) goto $l1529;
        panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91524.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1527 = $tmp1530.value;
        $l1529:;
        panda$core$Bit $tmp1531 = { $tmp1527 };
        bool $tmp1526 = $tmp1531.value;
        if ($tmp1526) goto $l1532;
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91524.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1526 = $tmp1533.value;
        $l1532:;
        panda$core$Bit $tmp1534 = { $tmp1526 };
        if ($tmp1534.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1535 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1535->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1535->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1535, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1520.value).position, NULL);
            return $tmp1535;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1538 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp1538->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1538->refCount.value = 1;
            panda$collections$Array$init($tmp1538);
            children1537 = $tmp1538;
            org$pandalanguage$pandac$ASTNode* $tmp1541 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1540 = $tmp1541;
            if (((panda$core$Bit) { expr1540 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1537, ((panda$core$Object*) expr1540));
            org$pandalanguage$pandac$ASTNode* $tmp1542 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1542->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1542->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1542, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1520.value).position, expr1540);
            return $tmp1542;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_91544;
    {
        org$pandalanguage$pandac$parser$Token $tmp1545 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_91544 = $tmp1545.kind;
        panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91544.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1546.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1547 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1547;
        }
        }
        else {
        panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91544.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1548.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1549 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1549;
        }
        }
        else {
        panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91544.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1550.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1551 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1551;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_91552;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1562;
    {
        org$pandalanguage$pandac$parser$Token $tmp1553 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_91552 = $tmp1553.kind;
        panda$core$Bit $tmp1554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91552.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1554.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1555 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1555;
        }
        }
        else {
        panda$core$Bit $tmp1556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91552.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1556.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1557 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1557;
        }
        }
        else {
        panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91552.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1558.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1559 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1559;
        }
        }
        else {
        panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91552.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1560.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1561 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1561;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1562, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1562, &$s1563);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_91564;
    org$pandalanguage$pandac$parser$Token id1583;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1585;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1612;
    {
        org$pandalanguage$pandac$parser$Token $tmp1565 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_91564 = $tmp1565.kind;
        panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1566.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1567 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1567;
        }
        }
        else {
        panda$core$Bit $tmp1568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1568.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1569 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1569;
        }
        }
        else {
        panda$core$Bit $tmp1570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1570.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1571 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1571;
        }
        }
        else {
        panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1572.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1573 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1573;
        }
        }
        else {
        panda$core$Bit $tmp1574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1574.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1575 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1575;
        }
        }
        else {
        panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1576.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1577 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1577;
        }
        }
        else {
        panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1578.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1579 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1579;
        }
        }
        else {
        panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1580.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1581 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1581;
        }
        }
        else {
        panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1582.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1584 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1583 = $tmp1584;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1585, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1586 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1585);
            if (((panda$core$Bit) { $tmp1586.nonnull }).value) {
            {
                panda$core$String* $tmp1587 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1583);
                org$pandalanguage$pandac$ASTNode* $tmp1588 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1587);
                return $tmp1588;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1583);
            org$pandalanguage$pandac$ASTNode* $tmp1589 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1589;
        }
        }
        else {
        panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1590 = $tmp1591.value;
        if ($tmp1590) goto $l1592;
        panda$core$Bit $tmp1593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1590 = $tmp1593.value;
        $l1592:;
        panda$core$Bit $tmp1594 = { $tmp1590 };
        if ($tmp1594.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1595 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1595;
        }
        }
        else {
        panda$core$Bit $tmp1599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1598 = $tmp1599.value;
        if ($tmp1598) goto $l1600;
        panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1598 = $tmp1601.value;
        $l1600:;
        panda$core$Bit $tmp1602 = { $tmp1598 };
        bool $tmp1597 = $tmp1602.value;
        if ($tmp1597) goto $l1603;
        panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1597 = $tmp1604.value;
        $l1603:;
        panda$core$Bit $tmp1605 = { $tmp1597 };
        bool $tmp1596 = $tmp1605.value;
        if ($tmp1596) goto $l1606;
        panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1596 = $tmp1607.value;
        $l1606:;
        panda$core$Bit $tmp1608 = { $tmp1596 };
        if ($tmp1608.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1609 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1609;
        }
        }
        else {
        panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91564.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1610.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1611 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1611;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1612, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1612, &$s1613);
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
    org$pandalanguage$pandac$parser$Token$nullable start1614;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1615;
    org$pandalanguage$pandac$parser$Token$nullable next1618;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1619;
    panda$core$MutableString* name1622;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1628;
    panda$core$Char8 $tmp1630;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1631;
    org$pandalanguage$pandac$ASTNode* tmp1541634;
    org$pandalanguage$pandac$ASTNode* tmp1551636;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1615, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1617 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1615, &$s1616);
    start1614 = $tmp1617;
    if (((panda$core$Bit) { !start1614.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1619, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1621 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1619, &$s1620);
    next1618 = $tmp1621;
    if (((panda$core$Bit) { !next1618.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1623 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1623->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1623->refCount.value = 1;
    panda$core$String* $tmp1625 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1618.value));
    panda$core$MutableString$init$panda$core$String($tmp1623, $tmp1625);
    name1622 = $tmp1623;
    $l1626:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1628, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1629 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1628);
        next1618 = $tmp1629;
        if (((panda$core$Bit) { !next1618.nonnull }).value) {
        {
            goto $l1627;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1630, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1622, $tmp1630);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1631, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1633 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1631, &$s1632);
        next1618 = $tmp1633;
        if (((panda$core$Bit) { !next1618.nonnull }).value) {
        {
            {
                tmp1541634 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1622));
                return tmp1541634;
            }
        }
        }
        panda$core$String* $tmp1635 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1618.value));
        panda$core$MutableString$append$panda$core$String(name1622, $tmp1635);
    }
    }
    $l1627:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1637 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1637->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1637->refCount.value = 1;
        panda$core$String* $tmp1639 = panda$core$MutableString$finish$R$panda$core$String(name1622);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1637, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start1614.value).position, $tmp1639);
        tmp1551636 = $tmp1637;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1622));
        return tmp1551636;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1640;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1641;
    org$pandalanguage$pandac$parser$Token$nullable next1644;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1645;
    panda$core$MutableString* name1648;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1654;
    panda$core$Char8 $tmp1656;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1657;
    org$pandalanguage$pandac$ASTNode* tmp1561660;
    org$pandalanguage$pandac$ASTNode* tmp1571662;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1641, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1643 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1641, &$s1642);
    start1640 = $tmp1643;
    if (((panda$core$Bit) { !start1640.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1645, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1647 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1645, &$s1646);
    next1644 = $tmp1647;
    if (((panda$core$Bit) { !next1644.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1649 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1649->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1649->refCount.value = 1;
    panda$core$String* $tmp1651 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1644.value));
    panda$core$MutableString$init$panda$core$String($tmp1649, $tmp1651);
    name1648 = $tmp1649;
    $l1652:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1654, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1655 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1654);
        next1644 = $tmp1655;
        if (((panda$core$Bit) { !next1644.nonnull }).value) {
        {
            goto $l1653;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1656, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1648, $tmp1656);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1657, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1659 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1657, &$s1658);
        next1644 = $tmp1659;
        if (((panda$core$Bit) { !next1644.nonnull }).value) {
        {
            {
                tmp1561660 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1648));
                return tmp1561660;
            }
        }
        }
        panda$core$String* $tmp1661 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1644.value));
        panda$core$MutableString$append$panda$core$String(name1648, $tmp1661);
    }
    }
    $l1653:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1663 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1663->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1663->refCount.value = 1;
        panda$core$String* $tmp1665 = panda$core$MutableString$finish$R$panda$core$String(name1648);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1663, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start1640.value).position, $tmp1665);
        tmp1571662 = $tmp1663;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1648));
        return tmp1571662;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1666;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1667;
    org$pandalanguage$pandac$parser$Token$nullable id1670;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1671;
    panda$collections$Array* parameters1674;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1677;
    org$pandalanguage$pandac$ASTNode* t1679;
    panda$collections$ImmutableArray* tmp1581681;
    panda$collections$ImmutableArray* tmp1591682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1691;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1693;
    panda$collections$ImmutableArray* tmp1611696;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1697;
    org$pandalanguage$pandac$ASTNode* t1699;
    panda$collections$ImmutableArray* tmp1601701;
    panda$collections$ImmutableArray* tmp1621702;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1709;
    panda$collections$ImmutableArray* tmp1631712;
    panda$collections$ImmutableArray* tmp1641713;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1667, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1669 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1667, &$s1668);
    start1666 = $tmp1669;
    if (((panda$core$Bit) { !start1666.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1671, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1673 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1671, &$s1672);
    id1670 = $tmp1673;
    if (((panda$core$Bit) { !id1670.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1675 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1675->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1675->refCount.value = 1;
    panda$collections$Array$init($tmp1675);
    parameters1674 = $tmp1675;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1677, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1678 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1677);
    if (((panda$core$Bit) { $tmp1678.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1680 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1679 = $tmp1680;
        if (((panda$core$Bit) { t1679 == NULL }).value) {
        {
            {
                tmp1581681 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1679));
                {
                    tmp1591682 = tmp1581681;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1674));
                    return tmp1591682;
                }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1683 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1683->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1683->refCount.value = 1;
        panda$core$String* $tmp1685 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1670.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1683, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1670.value).position, $tmp1685, t1679);
        panda$collections$Array$add$panda$collections$Array$T(parameters1674, ((panda$core$Object*) $tmp1683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1679));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1686 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1686->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1686->refCount.value = 1;
        panda$core$String* $tmp1688 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1670.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1686, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1670.value).position, $tmp1688);
        panda$collections$Array$add$panda$collections$Array$T(parameters1674, ((panda$core$Object*) $tmp1686));
    }
    }
    $l1689:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1691, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1692 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1691);
    if (!((panda$core$Bit) { $tmp1692.nonnull }).value) goto $l1690;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1693, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1695 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1693, &$s1694);
        id1670 = $tmp1695;
        if (((panda$core$Bit) { !id1670.nonnull }).value) {
        {
            {
                tmp1611696 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1674));
                return tmp1611696;
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1697, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1698 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1697);
        if (((panda$core$Bit) { $tmp1698.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1700 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1699 = $tmp1700;
            if (((panda$core$Bit) { t1699 == NULL }).value) {
            {
                {
                    tmp1601701 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1699));
                    {
                        tmp1621702 = tmp1601701;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1674));
                        return tmp1621702;
                    }
                }
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1703 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1703->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1703->refCount.value = 1;
            panda$core$String* $tmp1705 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1670.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1703, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1670.value).position, $tmp1705, t1699);
            panda$collections$Array$add$panda$collections$Array$T(parameters1674, ((panda$core$Object*) $tmp1703));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1699));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1706 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1706->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1706->refCount.value = 1;
            panda$core$String* $tmp1708 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1670.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1706, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1670.value).position, $tmp1708);
            panda$collections$Array$add$panda$collections$Array$T(parameters1674, ((panda$core$Object*) $tmp1706));
        }
        }
    }
    goto $l1689;
    $l1690:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1709, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1711 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1709, &$s1710);
    if (((panda$core$Bit) { !$tmp1711.nonnull }).value) {
    {
        {
            tmp1631712 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1674));
            return tmp1631712;
        }
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1714 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1674);
        tmp1641713 = $tmp1714;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1674));
        return tmp1641713;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1715;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1716;
    panda$collections$Array* result1719;
    org$pandalanguage$pandac$ASTNode* t1722;
    panda$collections$ImmutableArray* tmp1651724;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1727;
    panda$collections$ImmutableArray* tmp1661730;
    panda$collections$ImmutableArray* tmp1671731;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1716, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1718 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1716, &$s1717);
    start1715 = $tmp1718;
    if (((panda$core$Bit) { !start1715.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1720 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1720->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1720->refCount.value = 1;
    panda$collections$Array$init($tmp1720);
    result1719 = $tmp1720;
    org$pandalanguage$pandac$ASTNode* $tmp1723 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1722 = $tmp1723;
    if (((panda$core$Bit) { t1722 == NULL }).value) {
    {
        {
            tmp1651724 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1722));
            }
            return tmp1651724;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1719, ((panda$core$Object*) t1722));
    $l1725:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1727, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1728 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1727);
    if (!((panda$core$Bit) { $tmp1728.nonnull }).value) goto $l1726;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1722));
            org$pandalanguage$pandac$ASTNode* $tmp1729 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1722 = $tmp1729;
        }
        if (((panda$core$Bit) { t1722 == NULL }).value) {
        {
            {
                tmp1661730 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1719));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1722));
                }
                return tmp1661730;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1719, ((panda$core$Object*) t1722));
    }
    goto $l1725;
    $l1726:;
    {
        panda$collections$ImmutableArray* $tmp1732 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1719);
        tmp1671731 = $tmp1732;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1719));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1722));
        }
        return tmp1671731;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1733;
    org$pandalanguage$pandac$parser$Token$nullable next1738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1739;
    panda$collections$ImmutableArray* tmp1681744;
    panda$collections$Array* $tmp1734 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1734->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1734->refCount.value = 1;
    panda$collections$Array$init($tmp1734);
    result1733 = $tmp1734;
    $l1736:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1739, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1740 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1739);
        next1738 = $tmp1740;
        if (((panda$core$Bit) { !next1738.nonnull }).value) {
        {
            goto $l1737;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1741 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1741->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1741->refCount.value = 1;
        panda$core$String* $tmp1743 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1738.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1741, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1738.value).position, $tmp1743);
        panda$collections$Array$add$panda$collections$Array$T(result1733, ((panda$core$Object*) $tmp1741));
    }
    }
    $l1737:;
    {
        panda$collections$ImmutableArray* $tmp1745 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1733);
        tmp1681744 = $tmp1745;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1733));
        return tmp1681744;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1746;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1747;
    panda$core$MutableString* result1750;
    org$pandalanguage$pandac$parser$Token next1755;
    org$pandalanguage$pandac$ASTNode* tmp1691760;
    org$pandalanguage$pandac$ASTNode* tmp1701762;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1747, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1749 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1747, &$s1748);
    start1746 = $tmp1749;
    if (((panda$core$Bit) { !start1746.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1751 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1751->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1751->refCount.value = 1;
    panda$core$MutableString$init($tmp1751);
    result1750 = $tmp1751;
    $l1753:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1756 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1755 = $tmp1756;
        panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1755.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1757.value) {
        {
            goto $l1754;
        }
        }
        panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1755.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1758.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1746.value), &$s1759);
            {
                tmp1691760 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1750));
                return tmp1691760;
            }
        }
        }
        panda$core$String* $tmp1761 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1755);
        panda$core$MutableString$append$panda$core$String(result1750, $tmp1761);
    }
    }
    $l1754:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1763 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1763->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1763->refCount.value = 1;
        panda$core$String* $tmp1765 = panda$core$MutableString$finish$R$panda$core$String(result1750);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1763, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$parser$Token) start1746.value).position, $tmp1765);
        tmp1701762 = $tmp1763;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1750));
        return tmp1701762;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1767;
    org$pandalanguage$pandac$ASTNode* t1770;
    org$pandalanguage$pandac$ASTNode* tmp1711772;
    org$pandalanguage$pandac$ASTNode* tmp1721773;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1767, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1769 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1767, &$s1768);
    id1766 = $tmp1769;
    if (((panda$core$Bit) { !id1766.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1771 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1770 = $tmp1771;
    if (((panda$core$Bit) { t1770 == NULL }).value) {
    {
        {
            tmp1711772 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1770));
            return tmp1711772;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1774 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1774->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1774->refCount.value = 1;
        panda$core$String* $tmp1776 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1766.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1774, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) id1766.value).position, $tmp1776, t1770);
        tmp1721773 = $tmp1774;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1770));
        return tmp1721773;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1777;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1778;
    panda$collections$Array* result1781;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1784;
    org$pandalanguage$pandac$ASTNode* param1786;
    panda$collections$ImmutableArray* tmp1731788;
    panda$collections$ImmutableArray* tmp1761789;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1792;
    panda$collections$ImmutableArray* tmp1741795;
    panda$collections$ImmutableArray* tmp1771796;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1797;
    panda$collections$ImmutableArray* tmp1751800;
    panda$collections$ImmutableArray* tmp1781801;
    panda$collections$ImmutableArray* tmp1791802;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1778, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1780 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1778, &$s1779);
    start1777 = $tmp1780;
    if (((panda$core$Bit) { !start1777.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1782 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1782->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1782->refCount.value = 1;
    panda$collections$Array$init($tmp1782);
    result1781 = $tmp1782;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1784, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1785 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1784);
    if (((panda$core$Bit) { !$tmp1785.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1787 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1786 = $tmp1787;
        if (((panda$core$Bit) { param1786 == NULL }).value) {
        {
            {
                tmp1731788 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1786));
                {
                    tmp1761789 = tmp1731788;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1781));
                    return tmp1761789;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1781, ((panda$core$Object*) param1786));
        $l1790:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1792, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1793 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1792);
        if (!((panda$core$Bit) { $tmp1793.nonnull }).value) goto $l1791;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1794 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                param1786 = $tmp1794;
            }
            if (((panda$core$Bit) { param1786 == NULL }).value) {
            {
                {
                    tmp1741795 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1786));
                    {
                        tmp1771796 = tmp1741795;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1781));
                        return tmp1771796;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1781, ((panda$core$Object*) param1786));
        }
        goto $l1790;
        $l1791:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1797, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1799 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1797, &$s1798);
        if (((panda$core$Bit) { !$tmp1799.nonnull }).value) {
        {
            {
                tmp1751800 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1786));
                {
                    tmp1781801 = tmp1751800;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1781));
                    return tmp1781801;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1786));
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1803 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1781);
        tmp1791802 = $tmp1803;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1781));
        return tmp1791802;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1804;
    org$pandalanguage$pandac$parser$Token$nullable start1805;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1806;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1808;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1811;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1812;
    panda$core$String* name1813;
    org$pandalanguage$pandac$ASTNode* tmp1801815;
    panda$collections$ImmutableArray* params1816;
    org$pandalanguage$pandac$ASTNode* tmp1811818;
    org$pandalanguage$pandac$ASTNode* returnType1819;
    org$pandalanguage$pandac$ASTNode* tmp1821823;
    panda$collections$ImmutableArray* body1824;
    org$pandalanguage$pandac$ASTNode* tmp1831828;
    org$pandalanguage$pandac$parser$Token token1829;
    panda$core$String* tokenText1831;
    org$pandalanguage$pandac$ASTNode* post1844;
    org$pandalanguage$pandac$ASTNode* tmp1841846;
    org$pandalanguage$pandac$ASTNode* tmp1851847;
    org$pandalanguage$pandac$ASTNode* tmp1861848;
    memset(&kind1804, 0, sizeof(kind1804));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1806, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1807 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1806);
    start1805 = $tmp1807;
    if (((panda$core$Bit) { !start1805.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1808, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1810 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1808, &$s1809);
        start1805 = $tmp1810;
        if (((panda$core$Bit) { !start1805.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1811, ((panda$core$Int64) { 0 }));
        kind1804 = $tmp1811;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1812, ((panda$core$Int64) { 1 }));
        kind1804 = $tmp1812;
    }
    }
    panda$core$String* $tmp1814 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1813 = $tmp1814;
    if (((panda$core$Bit) { name1813 == NULL }).value) {
    {
        {
            tmp1801815 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1813));
            return tmp1801815;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1817 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1816 = $tmp1817;
    if (((panda$core$Bit) { params1816 == NULL }).value) {
    {
        {
            tmp1811818 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1816));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1813));
            }
            return tmp1811818;
        }
    }
    }
    memset(&returnType1819, 0, sizeof(returnType1819));
    org$pandalanguage$pandac$parser$Token $tmp1820 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1820.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1821.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1822 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            returnType1819 = $tmp1822;
        }
        if (((panda$core$Bit) { returnType1819 == NULL }).value) {
        {
            {
                tmp1821823 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1816));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1813));
                }
                return tmp1821823;
            }
        }
        }
    }
    }
    else {
    {
        {
            returnType1819 = NULL;
        }
    }
    }
    memset(&body1824, 0, sizeof(body1824));
    org$pandalanguage$pandac$parser$Token $tmp1825 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1825.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1826.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp1827 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            body1824 = $tmp1827;
        }
        if (((panda$core$Bit) { body1824 == NULL }).value) {
        {
            {
                tmp1831828 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1824));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1816));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1819));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1813));
                }
                return tmp1831828;
            }
        }
        }
    }
    }
    else {
    {
        {
            body1824 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1830 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1829 = $tmp1830;
    panda$core$String* $tmp1832 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1829);
    tokenText1831 = $tmp1832;
    panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1829.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1833 = $tmp1834.value;
    if (!$tmp1833) goto $l1835;
    panda$core$Bit $tmp1838 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1831, &$s1837);
    bool $tmp1836 = $tmp1838.value;
    if ($tmp1836) goto $l1839;
    panda$core$Bit $tmp1841 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1831, &$s1840);
    $tmp1836 = $tmp1841.value;
    $l1839:;
    panda$core$Bit $tmp1842 = { $tmp1836 };
    $tmp1833 = $tmp1842.value;
    $l1835:;
    panda$core$Bit $tmp1843 = { $tmp1833 };
    if ($tmp1843.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1845 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1844 = $tmp1845;
        if (((panda$core$Bit) { post1844 == NULL }).value) {
        {
            {
                tmp1841846 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1844));
                {
                    tmp1851847 = tmp1841846;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1824));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1816));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1831));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1819));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1813));
                    }
                    return tmp1851847;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1844));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1849 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1849->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1849->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1849, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1805.value).position, p_doccomment, p_annotations, kind1804, name1813, params1816, returnType1819, body1824);
        tmp1861848 = $tmp1849;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1831));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1813));
        }
        return tmp1861848;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1851;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1852;
    panda$collections$ImmutableArray* params1855;
    org$pandalanguage$pandac$ASTNode* tmp1871857;
    panda$collections$ImmutableArray* b1858;
    org$pandalanguage$pandac$ASTNode* tmp1881860;
    org$pandalanguage$pandac$parser$Token token1861;
    panda$core$String* tokenText1863;
    org$pandalanguage$pandac$ASTNode* post1876;
    org$pandalanguage$pandac$ASTNode* tmp1891878;
    org$pandalanguage$pandac$ASTNode* tmp1901879;
    org$pandalanguage$pandac$ASTNode* tmp1911880;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1883;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1852, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1854 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1852, &$s1853);
    start1851 = $tmp1854;
    if (((panda$core$Bit) { !start1851.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1856 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1855 = $tmp1856;
    if (((panda$core$Bit) { params1855 == NULL }).value) {
    {
        {
            tmp1871857 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1855));
            return tmp1871857;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1859 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    b1858 = $tmp1859;
    if (((panda$core$Bit) { b1858 == NULL }).value) {
    {
        {
            tmp1881860 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1858));
            }
            return tmp1881860;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1862 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1861 = $tmp1862;
    panda$core$String* $tmp1864 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1861);
    tokenText1863 = $tmp1864;
    panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1861.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1865 = $tmp1866.value;
    if (!$tmp1865) goto $l1867;
    panda$core$Bit $tmp1870 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1863, &$s1869);
    bool $tmp1868 = $tmp1870.value;
    if ($tmp1868) goto $l1871;
    panda$core$Bit $tmp1873 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1863, &$s1872);
    $tmp1868 = $tmp1873.value;
    $l1871:;
    panda$core$Bit $tmp1874 = { $tmp1868 };
    $tmp1865 = $tmp1874.value;
    $l1867:;
    panda$core$Bit $tmp1875 = { $tmp1865 };
    if ($tmp1875.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1877 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1876 = $tmp1877;
        if (((panda$core$Bit) { post1876 == NULL }).value) {
        {
            {
                tmp1891878 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1876));
                {
                    tmp1901879 = tmp1891878;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1855));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1863));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1858));
                    }
                    return tmp1901879;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1876));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1881 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1881->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1881->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1883, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1881, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1851.value).position, p_doccomment, p_annotations, $tmp1883, &$s1884, params1855, NULL, b1858);
        tmp1911880 = $tmp1881;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1855));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1863));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1858));
        }
        return tmp1911880;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1885;
    org$pandalanguage$pandac$ASTNode* tmp1921887;
    org$pandalanguage$pandac$ASTNode* tmp1931888;
    org$pandalanguage$pandac$ASTNode* $tmp1886 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1885 = $tmp1886;
    if (((panda$core$Bit) { decl1885 == NULL }).value) {
    {
        {
            tmp1921887 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1885));
            return tmp1921887;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1889 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1889->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1889->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp1892 = (($fn1891) decl1885->$class->vtable[2])(decl1885);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1889, ((panda$core$Int64) { 14 }), $tmp1892, p_doccomment, p_annotations, decl1885);
        tmp1931888 = $tmp1889;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1885));
        return tmp1931888;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1893;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1894;
    panda$collections$Array* fields1897;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1900;
    org$pandalanguage$pandac$ASTNode* field1904;
    org$pandalanguage$pandac$ASTNode* tmp1941906;
    org$pandalanguage$pandac$ASTNode* tmp1961907;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1910;
    org$pandalanguage$pandac$ASTNode* tmp1951913;
    org$pandalanguage$pandac$ASTNode* tmp1971914;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1915;
    org$pandalanguage$pandac$ASTNode* tmp1981918;
    org$pandalanguage$pandac$ASTNode* tmp1991919;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1894, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1896 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1894, &$s1895);
    name1893 = $tmp1896;
    if (((panda$core$Bit) { !name1893.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1898 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1898->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1898->refCount.value = 1;
    panda$collections$Array$init($tmp1898);
    fields1897 = $tmp1898;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1900, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1901 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1900);
    if (((panda$core$Bit) { $tmp1901.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1902 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1903 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1902.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1903.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1905 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1904 = $tmp1905;
            if (((panda$core$Bit) { field1904 == NULL }).value) {
            {
                {
                    tmp1941906 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1904));
                    {
                        tmp1961907 = tmp1941906;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1897));
                        return tmp1961907;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1897, ((panda$core$Object*) field1904));
            $l1908:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1910, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1911 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1910);
            if (!((panda$core$Bit) { $tmp1911.nonnull }).value) goto $l1909;
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1904));
                    org$pandalanguage$pandac$ASTNode* $tmp1912 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    field1904 = $tmp1912;
                }
                if (((panda$core$Bit) { field1904 == NULL }).value) {
                {
                    {
                        tmp1951913 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1904));
                        {
                            tmp1971914 = tmp1951913;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1897));
                            return tmp1971914;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1897, ((panda$core$Object*) field1904));
            }
            goto $l1908;
            $l1909:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1904));
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1915, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1917 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1915, &$s1916);
        if (((panda$core$Bit) { !$tmp1917.nonnull }).value) {
        {
            {
                tmp1981918 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1897));
                return tmp1981918;
            }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1920 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1920->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1920->refCount.value = 1;
        panda$core$String* $tmp1922 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1893.value));
        panda$collections$ImmutableArray* $tmp1923 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1897);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1920, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1893.value).position, p_doccomment, $tmp1922, $tmp1923);
        tmp1991919 = $tmp1920;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1897));
        return tmp1991919;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1924;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1925;
    org$pandalanguage$pandac$parser$Token$nullable name1928;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1929;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1932;
    panda$collections$Array* members1935;
    org$pandalanguage$pandac$ASTNode* dc1938;
    org$pandalanguage$pandac$parser$Token next1941;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_131943;
    org$pandalanguage$pandac$ASTNode* c1989;
    org$pandalanguage$pandac$ASTNode* tmp2001991;
    panda$collections$ImmutableArray* a1992;
    org$pandalanguage$pandac$parser$Token next1997;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_131999;
    org$pandalanguage$pandac$ASTNode* tmp2012008;
    org$pandalanguage$pandac$ASTNode* tmp2022021;
    org$pandalanguage$pandac$ASTNode* decl2024;
    org$pandalanguage$pandac$ASTNode* tmp2032026;
    org$pandalanguage$pandac$ASTNode* decl2030;
    org$pandalanguage$pandac$ASTNode* tmp2042032;
    org$pandalanguage$pandac$ASTNode* decl2036;
    org$pandalanguage$pandac$ASTNode* tmp2052038;
    org$pandalanguage$pandac$ASTNode* decl2046;
    org$pandalanguage$pandac$ASTNode* tmp2062048;
    org$pandalanguage$pandac$ASTNode* decl2064;
    org$pandalanguage$pandac$ASTNode* tmp2072066;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2070;
    org$pandalanguage$pandac$ASTNode* tmp2082077;
    org$pandalanguage$pandac$ASTNode* tmp2092078;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2081;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1925, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1927 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1925, &$s1926);
    start1924 = $tmp1927;
    if (((panda$core$Bit) { !start1924.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1929, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1931 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1929, &$s1930);
    name1928 = $tmp1931;
    if (((panda$core$Bit) { !name1928.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1932, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1934 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1932, &$s1933);
    if (((panda$core$Bit) { !$tmp1934.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1936 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1936->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1936->refCount.value = 1;
    panda$collections$Array$init($tmp1936);
    members1935 = $tmp1936;
    dc1938 = NULL;
    $l1939:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1942 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1941 = $tmp1942;
        {
            $match$1854_131943 = next1941.kind;
            panda$core$Bit $tmp1953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1952 = $tmp1953.value;
            if ($tmp1952) goto $l1954;
            panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1952 = $tmp1955.value;
            $l1954:;
            panda$core$Bit $tmp1956 = { $tmp1952 };
            bool $tmp1951 = $tmp1956.value;
            if ($tmp1951) goto $l1957;
            panda$core$Bit $tmp1958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1951 = $tmp1958.value;
            $l1957:;
            panda$core$Bit $tmp1959 = { $tmp1951 };
            bool $tmp1950 = $tmp1959.value;
            if ($tmp1950) goto $l1960;
            panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1950 = $tmp1961.value;
            $l1960:;
            panda$core$Bit $tmp1962 = { $tmp1950 };
            bool $tmp1949 = $tmp1962.value;
            if ($tmp1949) goto $l1963;
            panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1949 = $tmp1964.value;
            $l1963:;
            panda$core$Bit $tmp1965 = { $tmp1949 };
            bool $tmp1948 = $tmp1965.value;
            if ($tmp1948) goto $l1966;
            panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1948 = $tmp1967.value;
            $l1966:;
            panda$core$Bit $tmp1968 = { $tmp1948 };
            bool $tmp1947 = $tmp1968.value;
            if ($tmp1947) goto $l1969;
            panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1947 = $tmp1970.value;
            $l1969:;
            panda$core$Bit $tmp1971 = { $tmp1947 };
            bool $tmp1946 = $tmp1971.value;
            if ($tmp1946) goto $l1972;
            panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1946 = $tmp1973.value;
            $l1972:;
            panda$core$Bit $tmp1974 = { $tmp1946 };
            bool $tmp1945 = $tmp1974.value;
            if ($tmp1945) goto $l1975;
            panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1945 = $tmp1976.value;
            $l1975:;
            panda$core$Bit $tmp1977 = { $tmp1945 };
            bool $tmp1944 = $tmp1977.value;
            if ($tmp1944) goto $l1978;
            panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1944 = $tmp1979.value;
            $l1978:;
            panda$core$Bit $tmp1980 = { $tmp1944 };
            if ($tmp1980.value) {
            {
                goto $l1940;
            }
            }
            else {
            panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1981.value) {
            {
                if (((panda$core$Bit) { dc1938 != NULL }).value) {
                {
                    panda$core$String* $tmp1983 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1941);
                    panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1982, $tmp1983);
                    panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1985);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1941, $tmp1986);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    org$pandalanguage$pandac$ASTNode* $tmp1987 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1938 = $tmp1987;
                }
            }
            }
            else {
            panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131943.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1988.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1990 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1938);
                c1989 = $tmp1990;
                if (((panda$core$Bit) { c1989 == NULL }).value) {
                {
                    {
                        tmp2001991 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2001991;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1935, ((panda$core$Object*) c1989));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    dc1938 = NULL;
                }
            }
            }
            else {
            {
                goto $l1940;
            }
            }
            }
            }
        }
    }
    }
    $l1940:;
    panda$collections$ImmutableArray* $tmp1993 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
    $tmp1993->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1993->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp1993);
    a1992 = $tmp1993;
    $l1995:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1998 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1997 = $tmp1998;
        {
            $match$1878_131999 = next1997.kind;
            panda$core$Bit $tmp2000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2000.value) {
            {
                panda$core$Int64 $tmp2001 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1992);
                panda$core$Bit $tmp2002 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2001, ((panda$core$Int64) { 0 }));
                if ($tmp2002.value) {
                {
                    panda$core$String* $tmp2004 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1997);
                    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2003, $tmp2004);
                    panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2006);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1997, $tmp2007);
                    {
                        tmp2012008 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2012008;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                    panda$collections$ImmutableArray* $tmp2009 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                    a1992 = $tmp2009;
                }
            }
            }
            else {
            panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2010.value) {
            {
                bool $tmp2011 = ((panda$core$Bit) { dc1938 != NULL }).value;
                if ($tmp2011) goto $l2012;
                panda$core$Int64 $tmp2013 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1992);
                panda$core$Bit $tmp2014 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2013, ((panda$core$Int64) { 0 }));
                $tmp2011 = $tmp2014.value;
                $l2012:;
                panda$core$Bit $tmp2015 = { $tmp2011 };
                if ($tmp2015.value) {
                {
                    panda$core$String* $tmp2017 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1997);
                    panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2016, $tmp2017);
                    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, &$s2019);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1997, $tmp2020);
                    {
                        tmp2022021 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2022021;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    org$pandalanguage$pandac$ASTNode* $tmp2022 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1938 = $tmp2022;
                }
            }
            }
            else {
            panda$core$Bit $tmp2023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2023.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2025 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1938, a1992);
                decl2024 = $tmp2025;
                if (((panda$core$Bit) { decl2024 == NULL }).value) {
                {
                    {
                        tmp2032026 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2032026;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1935, ((panda$core$Object*) decl2024));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    dc1938 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                    panda$collections$ImmutableArray* $tmp2027 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2027->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2027->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2027);
                    a1992 = $tmp2027;
                }
            }
            }
            else {
            panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2029.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2031 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1938, a1992);
                decl2030 = $tmp2031;
                if (((panda$core$Bit) { decl2030 == NULL }).value) {
                {
                    {
                        tmp2042032 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2042032;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1935, ((panda$core$Object*) decl2030));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    dc1938 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                    panda$collections$ImmutableArray* $tmp2033 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2033->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2033->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2033);
                    a1992 = $tmp2033;
                }
            }
            }
            else {
            panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2035.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2037 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1938, a1992);
                decl2036 = $tmp2037;
                if (((panda$core$Bit) { decl2036 == NULL }).value) {
                {
                    {
                        tmp2052038 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2052038;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1935, ((panda$core$Object*) decl2036));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    dc1938 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                    panda$collections$ImmutableArray* $tmp2039 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2039->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2039->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2039);
                    a1992 = $tmp2039;
                }
            }
            }
            else {
            panda$core$Bit $tmp2042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp2041 = $tmp2042.value;
            if ($tmp2041) goto $l2043;
            panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp2041 = $tmp2044.value;
            $l2043:;
            panda$core$Bit $tmp2045 = { $tmp2041 };
            if ($tmp2045.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2047 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1938, a1992);
                decl2046 = $tmp2047;
                if (((panda$core$Bit) { decl2046 == NULL }).value) {
                {
                    {
                        tmp2062048 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2062048;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1935, ((panda$core$Object*) decl2046));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    dc1938 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                    panda$collections$ImmutableArray* $tmp2049 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2049->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2049->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2049);
                    a1992 = $tmp2049;
                }
            }
            }
            else {
            panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp2053 = $tmp2054.value;
            if ($tmp2053) goto $l2055;
            panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp2053 = $tmp2056.value;
            $l2055:;
            panda$core$Bit $tmp2057 = { $tmp2053 };
            bool $tmp2052 = $tmp2057.value;
            if ($tmp2052) goto $l2058;
            panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp2052 = $tmp2059.value;
            $l2058:;
            panda$core$Bit $tmp2060 = { $tmp2052 };
            bool $tmp2051 = $tmp2060.value;
            if ($tmp2051) goto $l2061;
            panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp2051 = $tmp2062.value;
            $l2061:;
            panda$core$Bit $tmp2063 = { $tmp2051 };
            if ($tmp2063.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2065 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1938, a1992);
                decl2064 = $tmp2065;
                if (((panda$core$Bit) { decl2064 == NULL }).value) {
                {
                    {
                        tmp2072066 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                        }
                        return tmp2072066;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1935, ((panda$core$Object*) decl2064));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                    dc1938 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                    panda$collections$ImmutableArray* $tmp2067 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2067->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2067->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2067);
                    a1992 = $tmp2067;
                }
            }
            }
            else {
            panda$core$Bit $tmp2069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131999.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp2069.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2070, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2070, &$s2071);
                goto $l1996;
            }
            }
            else {
            {
                panda$core$String* $tmp2073 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1997);
                panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2072, $tmp2073);
                panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1997, $tmp2076);
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                {
                    tmp2082077 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
                    }
                    return tmp2082077;
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
    $l1996:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2079 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2079->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2079->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2081, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp2082 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1928.value));
        panda$collections$ImmutableArray* $tmp2083 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1935);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2079, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1924.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp2081, $tmp2082, NULL, NULL, $tmp2083);
        tmp2092078 = $tmp2079;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1938));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1992));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1935));
        }
        return tmp2092078;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2084;
    org$pandalanguage$pandac$ASTNode* dc2086;
    org$pandalanguage$pandac$ASTNode* tmp2102089;
    panda$collections$ImmutableArray* a2090;
    org$pandalanguage$pandac$ASTNode* tmp2112092;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_92093;
    org$pandalanguage$pandac$ASTNode* tmp2122096;
    org$pandalanguage$pandac$ASTNode* tmp2132099;
    org$pandalanguage$pandac$ASTNode* tmp2142102;
    org$pandalanguage$pandac$ASTNode* tmp2152109;
    org$pandalanguage$pandac$ASTNode* tmp2162112;
    org$pandalanguage$pandac$ASTNode* tmp2172127;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2129;
    org$pandalanguage$pandac$ASTNode* tmp2182131;
    org$pandalanguage$pandac$parser$Token $tmp2085 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start2084 = $tmp2085;
    memset(&dc2086, 0, sizeof(dc2086));
    panda$core$Bit $tmp2087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start2084.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp2087.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2088 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            dc2086 = $tmp2088;
        }
        if (((panda$core$Bit) { dc2086 == NULL }).value) {
        {
            {
                tmp2102089 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                return tmp2102089;
            }
        }
        }
    }
    }
    else {
    {
        {
            dc2086 = NULL;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp2091 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    a2090 = $tmp2091;
    if (((panda$core$Bit) { a2090 == NULL }).value) {
    {
        {
            tmp2112092 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
            }
            return tmp2112092;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2094 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_92093 = $tmp2094.kind;
        panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2095.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2097 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2086, a2090);
                tmp2122096 = $tmp2097;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
                }
                return tmp2122096;
            }
        }
        }
        else {
        panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2098.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2100 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2086, a2090);
                tmp2132099 = $tmp2100;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
                }
                return tmp2132099;
            }
        }
        }
        else {
        panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2101.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2103 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2086, a2090);
                tmp2142102 = $tmp2103;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
                }
                return tmp2142102;
            }
        }
        }
        else {
        panda$core$Bit $tmp2105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp2104 = $tmp2105.value;
        if ($tmp2104) goto $l2106;
        panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2104 = $tmp2107.value;
        $l2106:;
        panda$core$Bit $tmp2108 = { $tmp2104 };
        if ($tmp2108.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2110 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2086, a2090);
                tmp2152109 = $tmp2110;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
                }
                return tmp2152109;
            }
        }
        }
        else {
        panda$core$Bit $tmp2111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2111.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2113 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2086, a2090);
                tmp2162112 = $tmp2113;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
                }
                return tmp2162112;
            }
        }
        }
        else {
        panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2116 = $tmp2117.value;
        if ($tmp2116) goto $l2118;
        panda$core$Bit $tmp2119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2116 = $tmp2119.value;
        $l2118:;
        panda$core$Bit $tmp2120 = { $tmp2116 };
        bool $tmp2115 = $tmp2120.value;
        if ($tmp2115) goto $l2121;
        panda$core$Bit $tmp2122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2115 = $tmp2122.value;
        $l2121:;
        panda$core$Bit $tmp2123 = { $tmp2115 };
        bool $tmp2114 = $tmp2123.value;
        if ($tmp2114) goto $l2124;
        panda$core$Bit $tmp2125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92093.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2114 = $tmp2125.value;
        $l2124:;
        panda$core$Bit $tmp2126 = { $tmp2114 };
        if ($tmp2126.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2128 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2086, a2090);
                tmp2172127 = $tmp2128;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
                }
                return tmp2172127;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2129, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2129, &$s2130);
            {
                tmp2182131 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
                }
                return tmp2182131;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2086));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2090));
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2132;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2133;
    org$pandalanguage$pandac$parser$Token$nullable name2136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2137;
    panda$collections$ImmutableArray* generics2140;
    org$pandalanguage$pandac$ASTNode* tmp2192144;
    panda$collections$ImmutableArray* stypes2145;
    org$pandalanguage$pandac$ASTNode* tmp2202149;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2150;
    org$pandalanguage$pandac$ASTNode* tmp2212153;
    panda$collections$Array* members2154;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2159;
    org$pandalanguage$pandac$ASTNode* member2161;
    org$pandalanguage$pandac$ASTNode* tmp2222163;
    org$pandalanguage$pandac$ASTNode* tmp2232164;
    org$pandalanguage$pandac$ASTNode* tmp2242165;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2168;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2133, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2135 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2133, &$s2134);
    start2132 = $tmp2135;
    if (((panda$core$Bit) { !start2132.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2137, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2139 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2137, &$s2138);
    name2136 = $tmp2139;
    if (((panda$core$Bit) { !name2136.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2140, 0, sizeof(generics2140));
    org$pandalanguage$pandac$parser$Token $tmp2141 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2142.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2143 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2140 = $tmp2143;
        }
        if (((panda$core$Bit) { generics2140 == NULL }).value) {
        {
            {
                tmp2192144 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2140));
                return tmp2192144;
            }
        }
        }
    }
    }
    else {
    {
        {
            generics2140 = NULL;
        }
    }
    }
    memset(&stypes2145, 0, sizeof(stypes2145));
    org$pandalanguage$pandac$parser$Token $tmp2146 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2146.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2147.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2148 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            stypes2145 = $tmp2148;
        }
        if (((panda$core$Bit) { stypes2145 == NULL }).value) {
        {
            {
                tmp2202149 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2140));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2145));
                }
                return tmp2202149;
            }
        }
        }
    }
    }
    else {
    {
        {
            stypes2145 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2150, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2152 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2150, &$s2151);
    if (((panda$core$Bit) { !$tmp2152.nonnull }).value) {
    {
        {
            tmp2212153 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2145));
            }
            return tmp2212153;
        }
    }
    }
    panda$collections$Array* $tmp2155 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2155->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2155->refCount.value = 1;
    panda$collections$Array$init($tmp2155);
    members2154 = $tmp2155;
    $l2157:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2159, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2160 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2159);
    if (!((panda$core$Bit) { !$tmp2160.nonnull }).value) goto $l2158;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2162 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2161 = $tmp2162;
        if (((panda$core$Bit) { member2161 == NULL }).value) {
        {
            {
                tmp2222163 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2161));
                {
                    tmp2232164 = tmp2222163;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2140));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2145));
                    }
                    return tmp2232164;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2154, ((panda$core$Object*) member2161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2161));
    }
    goto $l2157;
    $l2158:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2166 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2166->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2166->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2168, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2169 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2136.value));
        panda$collections$ImmutableArray* $tmp2170 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2154);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2166, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2132.value).position, p_doccomment, p_annotations, $tmp2168, $tmp2169, generics2140, stypes2145, $tmp2170);
        tmp2242165 = $tmp2166;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2154));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2145));
        }
        return tmp2242165;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2171;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2172;
    org$pandalanguage$pandac$parser$Token$nullable name2175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2176;
    panda$collections$ImmutableArray* generics2179;
    org$pandalanguage$pandac$ASTNode* tmp2252183;
    panda$collections$Array* intfs2186;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2189;
    org$pandalanguage$pandac$ASTNode* t2191;
    org$pandalanguage$pandac$ASTNode* tmp2262193;
    org$pandalanguage$pandac$ASTNode* tmp2282194;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2197;
    org$pandalanguage$pandac$ASTNode* tmp2272200;
    org$pandalanguage$pandac$ASTNode* tmp2292201;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2202;
    org$pandalanguage$pandac$ASTNode* tmp2302205;
    panda$collections$Array* members2206;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2211;
    org$pandalanguage$pandac$ASTNode* member2213;
    org$pandalanguage$pandac$ASTNode* tmp2312215;
    org$pandalanguage$pandac$ASTNode* tmp2322216;
    org$pandalanguage$pandac$ASTNode* tmp2332217;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2220;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2172, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2174 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2172, &$s2173);
    start2171 = $tmp2174;
    if (((panda$core$Bit) { !start2171.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2176, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2178 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2176, &$s2177);
    name2175 = $tmp2178;
    if (((panda$core$Bit) { !name2175.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2179, 0, sizeof(generics2179));
    org$pandalanguage$pandac$parser$Token $tmp2180 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2180.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2181.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2182 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2179 = $tmp2182;
        }
        if (((panda$core$Bit) { generics2179 == NULL }).value) {
        {
            {
                tmp2252183 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2179));
                return tmp2252183;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp2184 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
            $tmp2184->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
            $tmp2184->refCount.value = 1;
            panda$collections$ImmutableArray$init($tmp2184);
            generics2179 = $tmp2184;
        }
    }
    }
    panda$collections$Array* $tmp2187 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2187->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2187->refCount.value = 1;
    panda$collections$Array$init($tmp2187);
    intfs2186 = $tmp2187;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2189, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2190 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2189);
    if (((panda$core$Bit) { $tmp2190.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2192 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t2191 = $tmp2192;
        if (((panda$core$Bit) { t2191 == NULL }).value) {
        {
            {
                tmp2262193 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2191));
                {
                    tmp2282194 = tmp2262193;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2179));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2186));
                    }
                    return tmp2282194;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2186, ((panda$core$Object*) t2191));
        $l2195:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2197, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2198 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2197);
        if (!((panda$core$Bit) { $tmp2198.nonnull }).value) goto $l2196;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2191));
                org$pandalanguage$pandac$ASTNode* $tmp2199 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t2191 = $tmp2199;
            }
            if (((panda$core$Bit) { t2191 == NULL }).value) {
            {
                {
                    tmp2272200 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2191));
                    {
                        tmp2292201 = tmp2272200;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2179));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2186));
                        }
                        return tmp2292201;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2186, ((panda$core$Object*) t2191));
        }
        goto $l2195;
        $l2196:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2191));
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2202, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2204 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2202, &$s2203);
    if (((panda$core$Bit) { !$tmp2204.nonnull }).value) {
    {
        {
            tmp2302205 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2186));
            }
            return tmp2302205;
        }
    }
    }
    panda$collections$Array* $tmp2207 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2207->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2207->refCount.value = 1;
    panda$collections$Array$init($tmp2207);
    members2206 = $tmp2207;
    $l2209:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2211, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2212 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2211);
    if (!((panda$core$Bit) { !$tmp2212.nonnull }).value) goto $l2210;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2214 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2213 = $tmp2214;
        if (((panda$core$Bit) { member2213 == NULL }).value) {
        {
            {
                tmp2312215 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2213));
                {
                    tmp2322216 = tmp2312215;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2179));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2186));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2206));
                    }
                    return tmp2322216;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2206, ((panda$core$Object*) member2213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2213));
    }
    goto $l2209;
    $l2210:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2218 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2218->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2218->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2220, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp2221 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2175.value));
        panda$collections$ImmutableArray* $tmp2222 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs2186);
        panda$collections$ImmutableArray* $tmp2223 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2206);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2218, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2171.value).position, p_doccomment, p_annotations, $tmp2220, $tmp2221, generics2179, $tmp2222, $tmp2223);
        tmp2332217 = $tmp2218;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2206));
        }
        return tmp2332217;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_92224;
    {
        org$pandalanguage$pandac$parser$Token $tmp2225 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_92224 = $tmp2225.kind;
        panda$core$Bit $tmp2226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2226.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2227 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2227;
        }
        }
        else {
        panda$core$Bit $tmp2228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2228.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2229 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2229;
        }
        }
        else {
        panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2235 = $tmp2236.value;
        if ($tmp2235) goto $l2237;
        panda$core$Bit $tmp2238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2235 = $tmp2238.value;
        $l2237:;
        panda$core$Bit $tmp2239 = { $tmp2235 };
        bool $tmp2234 = $tmp2239.value;
        if ($tmp2234) goto $l2240;
        panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp2234 = $tmp2241.value;
        $l2240:;
        panda$core$Bit $tmp2242 = { $tmp2234 };
        bool $tmp2233 = $tmp2242.value;
        if ($tmp2233) goto $l2243;
        panda$core$Bit $tmp2244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp2233 = $tmp2244.value;
        $l2243:;
        panda$core$Bit $tmp2245 = { $tmp2233 };
        bool $tmp2232 = $tmp2245.value;
        if ($tmp2232) goto $l2246;
        panda$core$Bit $tmp2247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2232 = $tmp2247.value;
        $l2246:;
        panda$core$Bit $tmp2248 = { $tmp2232 };
        bool $tmp2231 = $tmp2248.value;
        if ($tmp2231) goto $l2249;
        panda$core$Bit $tmp2250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp2231 = $tmp2250.value;
        $l2249:;
        panda$core$Bit $tmp2251 = { $tmp2231 };
        bool $tmp2230 = $tmp2251.value;
        if ($tmp2230) goto $l2252;
        panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92224.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp2230 = $tmp2253.value;
        $l2252:;
        panda$core$Bit $tmp2254 = { $tmp2230 };
        if ($tmp2254.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2255 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2255;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2256 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2256;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2257;
    org$pandalanguage$pandac$ASTNode* entry2264;
    org$pandalanguage$pandac$ASTNode* tmp2342266;
    org$pandalanguage$pandac$ASTNode* tmp2352267;
    org$pandalanguage$pandac$ASTNode* tmp2362269;
    panda$collections$Array* $tmp2258 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2258->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2258->refCount.value = 1;
    panda$collections$Array$init($tmp2258);
    entries2257 = $tmp2258;
    $l2260:;
    org$pandalanguage$pandac$parser$Token $tmp2262 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2263 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2262.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2263.value) goto $l2261;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2265 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2264 = $tmp2265;
        if (((panda$core$Bit) { entry2264 == NULL }).value) {
        {
            {
                tmp2342266 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2264));
                {
                    tmp2352267 = tmp2342266;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2257));
                    return tmp2352267;
                }
            }
        }
        }
        panda$core$Bit $tmp2268 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2268.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2257, ((panda$core$Object*) entry2264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2264));
    }
    goto $l2260;
    $l2261:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2270 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2270->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2270->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp2272 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2257);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2270, ((panda$core$Int64) { 15 }), $tmp2272);
        tmp2362269 = $tmp2270;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2257));
        return tmp2362269;
    }
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

