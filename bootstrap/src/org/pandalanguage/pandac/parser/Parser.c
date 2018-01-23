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

typedef void (*$fn65)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn103)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn135)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn198)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn240)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn245)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn250)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn255)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn301)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn340)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn345)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn350)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn357)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn368)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn373)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn380)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn705)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn743)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1311)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1323)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1342)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1780)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s2013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
        self->path = p_path;
    }
    {
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
    panda$core$String* tmp2122;
    org$pandalanguage$pandac$parser$Token escape124;
    panda$core$String* tmp3128;
    panda$core$String* escapeText129;
    panda$core$Char8 c131;
    panda$core$Char8 $match$176_21137;
    panda$core$Char8 $tmp138;
    panda$core$Char8 $tmp140;
    panda$core$Char8 $tmp141;
    panda$core$Char8 $tmp143;
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
    panda$core$String* tmp4160;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp161;
    panda$core$String* tmp5166;
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
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                        return tmp1119;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result106, str114);
            }
            }
            else {
            panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13112.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp120.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token110, &$s121);
                {
                    tmp2122 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                    return tmp2122;
                }
            }
            }
            else {
            panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13112.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp123.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp125 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape124 = $tmp125;
                panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape124.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp126.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token110, &$s127);
                    {
                        tmp3128 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                        return tmp3128;
                    }
                }
                }
                panda$core$String* $tmp130 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape124);
                escapeText129 = $tmp130;
                panda$collections$ListView* $tmp132 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText129);
                ITable* $tmp133 = $tmp132->$class->itable;
                while ($tmp133->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp133 = $tmp133->next;
                }
                $fn135 $tmp134 = $tmp133->methods[0];
                panda$core$Object* $tmp136 = $tmp134($tmp132, ((panda$core$Int64) { 0 }));
                c131 = ((panda$core$Char8$wrapper*) $tmp136)->value;
                {
                    $match$176_21137 = c131;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp138, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp139 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21137, $tmp138);
                    if ($tmp139.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp140, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp140);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp141, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp142 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21137, $tmp141);
                    if ($tmp142.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp143, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp143);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp144, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp145 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21137, $tmp144);
                    if ($tmp145.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp146, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp146);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp147, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp148 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21137, $tmp147);
                    if ($tmp148.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp149);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp150, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp151 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21137, $tmp150);
                    if ($tmp151.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp152, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp152);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp153, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp154 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21137, $tmp153);
                    if ($tmp154.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp155, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp155);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp156, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp157 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21137, $tmp156);
                    if ($tmp157.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp158, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result106, $tmp158);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token110, &$s159);
                        {
                            tmp4160 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                            return tmp4160;
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
                panda$core$String$Index $tmp162 = panda$core$String$start$R$panda$core$String$Index(escapeText129);
                panda$core$String$Index $tmp163 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText129, $tmp162);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp161, ((panda$core$String$Index$nullable) { $tmp163, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp164 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText129, $tmp161);
                panda$core$MutableString$append$panda$core$String(result106, $tmp164);
            }
            }
            else {
            panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13112.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp165.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token110);
                {
                    panda$core$String* $tmp167 = panda$core$MutableString$finish$R$panda$core$String(result106);
                    tmp5166 = $tmp167;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result106));
                    return tmp5166;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp168 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token110);
                panda$core$MutableString$append$panda$core$String(result106, $tmp168);
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
    panda$core$MutableString* result169;
    org$pandalanguage$pandac$parser$Token token173;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13175;
    panda$core$String* str177;
    panda$core$Char8 $tmp179;
    panda$core$String* tmp6182;
    panda$core$String* tmp7185;
    org$pandalanguage$pandac$parser$Token escape187;
    panda$core$String* tmp8191;
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
    panda$core$String* tmp9226;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp227;
    panda$core$String* tmp10232;
    panda$core$String* tmp11235;
    panda$core$MutableString* $tmp170 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp170);
    result169 = $tmp170;
    $l171:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp174 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token173 = $tmp174;
        {
            $match$202_13175 = token173.kind;
            panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13175.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp176.value) {
            {
                panda$core$String* $tmp178 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token173);
                str177 = $tmp178;
                panda$core$Char8$init$panda$core$UInt8(&$tmp179, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp180 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str177, $tmp179);
                if ($tmp180.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token173, &$s181);
                    {
                        tmp6182 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
                        return tmp6182;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result169, str177);
            }
            }
            else {
            panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13175.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp183.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token173, &$s184);
                {
                    tmp7185 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
                    return tmp7185;
                }
            }
            }
            else {
            panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13175.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp186.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp188 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape187 = $tmp188;
                panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape187.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp189.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token173, &$s190);
                    {
                        tmp8191 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
                        return tmp8191;
                    }
                }
                }
                panda$core$String* $tmp193 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape187);
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
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp203);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp204, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp205 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp204);
                    if ($tmp205.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp206, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp206);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp207, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp208 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp207);
                    if ($tmp208.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp209, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp209);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp211 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp210);
                    if ($tmp211.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp212, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp212);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp214 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp213);
                    if ($tmp214.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp215, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp215);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp217 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp216);
                    if ($tmp217.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp218);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp220 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp219);
                    if ($tmp220.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp221);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp223 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21200, $tmp222);
                    if ($tmp223.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result169, $tmp224);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token173, &$s225);
                        {
                            tmp9226 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
                            return tmp9226;
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
                panda$core$String$Index $tmp228 = panda$core$String$start$R$panda$core$String$Index(escapeText192);
                panda$core$String$Index $tmp229 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText192, $tmp228);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp227, ((panda$core$String$Index$nullable) { $tmp229, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp230 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText192, $tmp227);
                panda$core$MutableString$append$panda$core$String(result169, $tmp230);
            }
            }
            else {
            panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13175.$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp231.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token173);
                {
                    panda$core$String* $tmp233 = panda$core$MutableString$finish$R$panda$core$String(result169);
                    tmp10232 = $tmp233;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
                    return tmp10232;
                }
            }
            }
            else {
            panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13175.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp234.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token173);
                {
                    panda$core$String* $tmp236 = panda$core$MutableString$finish$R$panda$core$String(result169);
                    tmp11235 = $tmp236;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
                    return tmp11235;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp237 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token173);
                panda$core$MutableString$append$panda$core$String(result169, $tmp237);
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l172:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result169));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot238;
    org$pandalanguage$pandac$ASTNode* call243;
    org$pandalanguage$pandac$ASTNode* stringType248;
    org$pandalanguage$pandac$ASTNode* tmp12253;
    org$pandalanguage$pandac$parser$Token$Kind $tmp257;
    org$pandalanguage$pandac$ASTNode* $tmp239 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp241 = (($fn240) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp239, ((panda$core$Int64) { 13 }), $tmp241, p_expr, &$s242);
    dot238 = $tmp239;
    org$pandalanguage$pandac$ASTNode* $tmp244 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp246 = (($fn245) p_expr->$class->vtable[2])(p_expr);
    panda$collections$ImmutableArray* $tmp247 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init($tmp247);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp244, ((panda$core$Int64) { 6 }), $tmp246, dot238, $tmp247);
    call243 = $tmp244;
    org$pandalanguage$pandac$ASTNode* $tmp249 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp251 = (($fn250) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp249, ((panda$core$Int64) { 35 }), $tmp251, &$s252);
    stringType248 = $tmp249;
    {
        org$pandalanguage$pandac$ASTNode* $tmp254 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp256 = (($fn255) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp257, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp254, ((panda$core$Int64) { 2 }), $tmp256, call243, $tmp257, stringType248);
        tmp12253 = $tmp254;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType248));
        }
        return tmp12253;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start258;
    org$pandalanguage$pandac$ASTNode* result270;
    panda$core$MutableString* chunk271;
    org$pandalanguage$pandac$parser$Token token275;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13278;
    panda$core$String* str280;
    panda$core$Char8 $tmp282;
    org$pandalanguage$pandac$ASTNode* tmp16285;
    org$pandalanguage$pandac$ASTNode* tmp17288;
    org$pandalanguage$pandac$parser$Token escape290;
    org$pandalanguage$pandac$ASTNode* tmp18294;
    panda$core$String* escapeText295;
    panda$core$Char8 c297;
    panda$core$Char8 $match$287_21303;
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
    panda$core$Char8 $tmp321;
    panda$core$Char8 $tmp322;
    org$pandalanguage$pandac$ASTNode* expr324;
    org$pandalanguage$pandac$ASTNode* tmp13326;
    org$pandalanguage$pandac$ASTNode* tmp19327;
    panda$core$String* align328;
    panda$core$String* format329;
    org$pandalanguage$pandac$parser$Token$Kind $tmp330;
    org$pandalanguage$pandac$parser$Token$Kind $tmp333;
    org$pandalanguage$pandac$ASTNode* tmp14336;
    org$pandalanguage$pandac$ASTNode* tmp20337;
    org$pandalanguage$pandac$ASTNode* formattable338;
    org$pandalanguage$pandac$ASTNode* cast343;
    org$pandalanguage$pandac$parser$Token$Kind $tmp347;
    org$pandalanguage$pandac$ASTNode* dot348;
    panda$collections$Array* callArgs353;
    org$pandalanguage$pandac$parser$Token$Kind $tmp360;
    org$pandalanguage$pandac$ASTNode* tmp15363;
    org$pandalanguage$pandac$ASTNode* tmp21364;
    org$pandalanguage$pandac$ASTNode* pandaType366;
    org$pandalanguage$pandac$ASTNode* callTarget371;
    panda$collections$Array* callArgs376;
    panda$core$String* text383;
    org$pandalanguage$pandac$ASTNode* tmp22396;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp397;
    org$pandalanguage$pandac$ASTNode* tmp23402;
    org$pandalanguage$pandac$parser$Token $tmp259 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start258 = $tmp259;
    panda$core$Bit $tmp261 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start258.kind.$rawValue, ((panda$core$Int64) { 7 }));
    bool $tmp260 = $tmp261.value;
    if (!$tmp260) goto $l262;
    panda$core$Bit $tmp263 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start258.kind.$rawValue, ((panda$core$Int64) { 6 }));
    $tmp260 = $tmp263.value;
    $l262:;
    panda$core$Bit $tmp264 = { $tmp260 };
    if ($tmp264.value) {
    {
        panda$core$String* $tmp266 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start258);
        panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s265, $tmp266);
        panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp267, &$s268);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start258, $tmp269);
        return NULL;
    }
    }
    result270 = NULL;
    panda$core$MutableString* $tmp272 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp272);
    chunk271 = $tmp272;
    $l273:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp276 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token275 = $tmp276;
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token275.kind.$rawValue, start258.kind.$rawValue);
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
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start258, &$s284);
                    {
                        tmp16285 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
                        }
                        return tmp16285;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk271, str280);
            }
            }
            else {
            panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13278.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp286.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start258, &$s287);
                {
                    tmp17288 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
                    }
                    return tmp17288;
                }
            }
            }
            else {
            panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13278.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp289.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp291 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape290 = $tmp291;
                panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape290.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp292.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start258, &$s293);
                    {
                        tmp18294 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
                        }
                        return tmp18294;
                    }
                }
                }
                panda$core$String* $tmp296 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape290);
                escapeText295 = $tmp296;
                panda$collections$ListView* $tmp298 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText295);
                ITable* $tmp299 = $tmp298->$class->itable;
                while ($tmp299->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp299 = $tmp299->next;
                }
                $fn301 $tmp300 = $tmp299->methods[0];
                panda$core$Object* $tmp302 = $tmp300($tmp298, ((panda$core$Int64) { 0 }));
                c297 = ((panda$core$Char8$wrapper*) $tmp302)->value;
                {
                    $match$287_21303 = c297;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp304, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp305 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21303, $tmp304);
                    if ($tmp305.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp306, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk271, $tmp306);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp307, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp308 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21303, $tmp307);
                    if ($tmp308.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp309, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk271, $tmp309);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp310, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp311 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21303, $tmp310);
                    if ($tmp311.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp312, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk271, $tmp312);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp313, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp314 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21303, $tmp313);
                    if ($tmp314.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk271, $tmp315);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp316, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp317 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21303, $tmp316);
                    if ($tmp317.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp318, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk271, $tmp318);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp320 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21303, $tmp319);
                    if ($tmp320.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp321, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk271, $tmp321);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp323 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21303, $tmp322);
                    if ($tmp323.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp325 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr324 = $tmp325;
                            if (((panda$core$Bit) { expr324 == NULL }).value) {
                            {
                                {
                                    tmp13326 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr324));
                                    {
                                        tmp19327 = tmp13326;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
                                        }
                                        return tmp19327;
                                    }
                                }
                            }
                            }
                            align328 = NULL;
                            format329 = NULL;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp330, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp331 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp330);
                            if (((panda$core$Bit) { $tmp331.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp332 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start258);
                                    align328 = $tmp332;
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp333, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp334 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp333);
                            if (((panda$core$Bit) { $tmp334.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp335 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start258);
                                    format329 = $tmp335;
                                }
                                if (((panda$core$Bit) { format329 == NULL }).value) {
                                {
                                    {
                                        tmp14336 = NULL;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format329));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align328));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr324));
                                        }
                                        {
                                            tmp20337 = tmp14336;
                                            {
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
                                            }
                                            return tmp20337;
                                        }
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp339 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp341 = (($fn340) expr324->$class->vtable[2])(expr324);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp339, ((panda$core$Int64) { 35 }), $tmp341, &$s342);
                                formattable338 = $tmp339;
                                org$pandalanguage$pandac$ASTNode* $tmp344 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp346 = (($fn345) expr324->$class->vtable[2])(expr324);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp347, ((panda$core$Int64) { 89 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp344, ((panda$core$Int64) { 2 }), $tmp346, expr324, $tmp347, formattable338);
                                cast343 = $tmp344;
                                org$pandalanguage$pandac$ASTNode* $tmp349 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp351 = (($fn350) expr324->$class->vtable[2])(expr324);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp349, ((panda$core$Int64) { 13 }), $tmp351, cast343, &$s352);
                                dot348 = $tmp349;
                                panda$collections$Array* $tmp354 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp354);
                                callArgs353 = $tmp354;
                                org$pandalanguage$pandac$ASTNode* $tmp355 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp355, ((panda$core$Int64) { 33 }), start258.position, format329);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs353, ((panda$core$Object*) $tmp355));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr324));
                                    org$pandalanguage$pandac$ASTNode* $tmp356 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$Position $tmp358 = (($fn357) expr324->$class->vtable[2])(expr324);
                                    panda$collections$ImmutableArray* $tmp359 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs353);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp356, ((panda$core$Int64) { 6 }), $tmp358, dot348, $tmp359);
                                    expr324 = $tmp356;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast343));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot348));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs353));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable338));
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp360, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp362 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp360, &$s361);
                            if (((panda$core$Bit) { !$tmp362.nonnull }).value) {
                            {
                                {
                                    tmp15363 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format329));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align328));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr324));
                                    }
                                    {
                                        tmp21364 = tmp15363;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
                                        }
                                        return tmp21364;
                                    }
                                }
                            }
                            }
                            if (((panda$core$Bit) { align328 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format329 == NULL }).value) {
                                {
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr324));
                                        org$pandalanguage$pandac$ASTNode* $tmp365 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr324);
                                        expr324 = $tmp365;
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp367 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp369 = (($fn368) expr324->$class->vtable[2])(expr324);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp367, ((panda$core$Int64) { 35 }), $tmp369, &$s370);
                                pandaType366 = $tmp367;
                                org$pandalanguage$pandac$ASTNode* $tmp372 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp374 = (($fn373) expr324->$class->vtable[2])(expr324);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp372, ((panda$core$Int64) { 13 }), $tmp374, pandaType366, &$s375);
                                callTarget371 = $tmp372;
                                panda$collections$Array* $tmp377 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp377);
                                callArgs376 = $tmp377;
                                panda$collections$Array$add$panda$collections$Array$T(callArgs376, ((panda$core$Object*) expr324));
                                org$pandalanguage$pandac$ASTNode* $tmp378 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp378, ((panda$core$Int64) { 33 }), start258.position, align328);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs376, ((panda$core$Object*) $tmp378));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr324));
                                    org$pandalanguage$pandac$ASTNode* $tmp379 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$Position $tmp381 = (($fn380) expr324->$class->vtable[2])(expr324);
                                    panda$collections$ImmutableArray* $tmp382 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs376);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp379, ((panda$core$Int64) { 6 }), $tmp381, callTarget371, $tmp382);
                                    expr324 = $tmp379;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget371));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType366));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs376));
                                }
                            }
                            }
                            panda$core$String* $tmp384 = panda$core$MutableString$finish$R$panda$core$String(chunk271);
                            text383 = $tmp384;
                            {
                                panda$core$MutableString* $tmp385 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                panda$core$MutableString$init($tmp385);
                                chunk271 = $tmp385;
                            }
                            panda$core$Bit $tmp388 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text383, &$s387);
                            bool $tmp386 = $tmp388.value;
                            if ($tmp386) goto $l389;
                            $tmp386 = ((panda$core$Bit) { result270 != NULL }).value;
                            $l389:;
                            panda$core$Bit $tmp390 = { $tmp386 };
                            if ($tmp390.value) {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                                    org$pandalanguage$pandac$ASTNode* $tmp391 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp391, ((panda$core$Int64) { 33 }), start258.position, text383);
                                    org$pandalanguage$pandac$ASTNode* $tmp392 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result270, $tmp391);
                                    result270 = $tmp392;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                                    org$pandalanguage$pandac$ASTNode* $tmp393 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result270, expr324);
                                    result270 = $tmp393;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                                    org$pandalanguage$pandac$ASTNode* $tmp394 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr324);
                                    result270 = $tmp394;
                                }
                            }
                            }
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text383));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format329));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align328));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr324));
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token275, &$s395);
                        {
                            tmp22396 = NULL;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
                            }
                            return tmp22396;
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
                panda$core$String$Index $tmp398 = panda$core$String$start$R$panda$core$String$Index(escapeText295);
                panda$core$String$Index $tmp399 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText295, $tmp398);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp397, ((panda$core$String$Index$nullable) { $tmp399, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp400 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText295, $tmp397);
                panda$core$MutableString$append$panda$core$String(chunk271, $tmp400);
            }
            }
            else {
            {
                panda$core$String* $tmp401 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token275);
                panda$core$MutableString$append$panda$core$String(chunk271, $tmp401);
            }
            }
            }
            }
        }
    }
    }
    $l274:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp403 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp404 = panda$core$MutableString$finish$R$panda$core$String(chunk271);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp403, ((panda$core$Int64) { 33 }), start258.position, $tmp404);
        org$pandalanguage$pandac$ASTNode* $tmp405 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result270, $tmp403);
        tmp23402 = $tmp405;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk271));
        }
        return tmp23402;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t406;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9408;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp419;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp425;
    org$pandalanguage$pandac$ASTNode* result449;
    org$pandalanguage$pandac$parser$Token$Kind $tmp451;
    org$pandalanguage$pandac$parser$Token $tmp407 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t406 = $tmp407;
    {
        $match$362_9408 = t406.kind;
        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp409.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp410 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp411 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t406);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp410, ((panda$core$Int64) { 18 }), t406.position, $tmp411);
            return $tmp410;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp413 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp414 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t406);
            panda$core$UInt64$nullable $tmp415 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp414);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp413, ((panda$core$Int64) { 20 }), t406.position, ((panda$core$UInt64) $tmp415.value));
            return $tmp413;
        }
        }
        else {
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp416.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp417 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp418 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t406);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp419, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp420 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp418, $tmp419);
            panda$core$UInt64$nullable $tmp421 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp420, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp417, ((panda$core$Int64) { 20 }), t406.position, ((panda$core$UInt64) $tmp421.value));
            return $tmp417;
        }
        }
        else {
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp422.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp423 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp424 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t406);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp425, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp426 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp424, $tmp425);
            panda$core$UInt64$nullable $tmp427 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp426, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp423, ((panda$core$Int64) { 20 }), t406.position, ((panda$core$UInt64) $tmp427.value));
            return $tmp423;
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp429 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp430 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t406);
            panda$core$Real64$nullable $tmp431 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp430);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp429, ((panda$core$Int64) { 30 }), t406.position, ((panda$core$Real64) $tmp431.value));
            return $tmp429;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp432.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp433 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp433, ((panda$core$Int64) { 32 }), t406.position);
            return $tmp433;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp435 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp435, ((panda$core$Int64) { 34 }), t406.position);
            return $tmp435;
        }
        }
        else {
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp437 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp437, ((panda$core$Int64) { 24 }), t406.position);
            return $tmp437;
        }
        }
        else {
        panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp438.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp439 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp439, ((panda$core$Int64) { 3 }), t406.position, ((panda$core$Bit) { true }));
            return $tmp439;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp441 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp441, ((panda$core$Int64) { 3 }), t406.position, ((panda$core$Bit) { false }));
            return $tmp441;
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp442 = $tmp443.value;
        if ($tmp442) goto $l444;
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp442 = $tmp445.value;
        $l444:;
        panda$core$Bit $tmp446 = { $tmp442 };
        if ($tmp446.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t406);
            org$pandalanguage$pandac$ASTNode* $tmp447 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp447;
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9408.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp448.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp450 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result449 = $tmp450;
            if (((panda$core$Bit) { result449 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp451, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp453 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp451, &$s452);
            if (((panda$core$Bit) { !$tmp453.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result449;
        }
        }
        else {
        {
            panda$core$String* $tmp455 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t406);
            panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s454, $tmp455);
            panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, &$s457);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t406, $tmp458);
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
    org$pandalanguage$pandac$ASTNode* $match$403_9459;
    panda$core$String* text461;
    org$pandalanguage$pandac$ASTNode* base464;
    panda$core$String* field466;
    panda$core$String* result468;
    {
        $match$403_9459 = p_expr;
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9459->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp460.value) {
        {
            panda$core$String** $tmp462 = ((panda$core$String**) ((char*) $match$403_9459->$data + 16));
            text461 = *$tmp462;
            return text461;
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9459->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9459->$data + 16));
            base464 = *$tmp465;
            panda$core$String** $tmp467 = ((panda$core$String**) ((char*) $match$403_9459->$data + 24));
            field466 = *$tmp467;
            panda$core$String* $tmp469 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base464);
            result468 = $tmp469;
            if (((panda$core$Bit) { result468 != NULL }).value) {
            {
                {
                    panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s470, field466);
                    panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result468, $tmp471);
                    result468 = $tmp472;
                }
            }
            }
            return result468;
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
    org$pandalanguage$pandac$parser$Token name473;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9475;
    org$pandalanguage$pandac$parser$Token token563;
    org$pandalanguage$pandac$parser$Token$Kind $tmp569;
    org$pandalanguage$pandac$parser$Token$Kind $tmp572;
    org$pandalanguage$pandac$parser$Token $tmp474 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name473 = $tmp474;
    {
        $match$423_9475 = name473.kind;
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp496 = $tmp497.value;
        if ($tmp496) goto $l498;
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp496 = $tmp499.value;
        $l498:;
        panda$core$Bit $tmp500 = { $tmp496 };
        bool $tmp495 = $tmp500.value;
        if ($tmp495) goto $l501;
        panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp495 = $tmp502.value;
        $l501:;
        panda$core$Bit $tmp503 = { $tmp495 };
        bool $tmp494 = $tmp503.value;
        if ($tmp494) goto $l504;
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp494 = $tmp505.value;
        $l504:;
        panda$core$Bit $tmp506 = { $tmp494 };
        bool $tmp493 = $tmp506.value;
        if ($tmp493) goto $l507;
        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp493 = $tmp508.value;
        $l507:;
        panda$core$Bit $tmp509 = { $tmp493 };
        bool $tmp492 = $tmp509.value;
        if ($tmp492) goto $l510;
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp492 = $tmp511.value;
        $l510:;
        panda$core$Bit $tmp512 = { $tmp492 };
        bool $tmp491 = $tmp512.value;
        if ($tmp491) goto $l513;
        panda$core$Bit $tmp514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp491 = $tmp514.value;
        $l513:;
        panda$core$Bit $tmp515 = { $tmp491 };
        bool $tmp490 = $tmp515.value;
        if ($tmp490) goto $l516;
        panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp490 = $tmp517.value;
        $l516:;
        panda$core$Bit $tmp518 = { $tmp490 };
        bool $tmp489 = $tmp518.value;
        if ($tmp489) goto $l519;
        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp489 = $tmp520.value;
        $l519:;
        panda$core$Bit $tmp521 = { $tmp489 };
        bool $tmp488 = $tmp521.value;
        if ($tmp488) goto $l522;
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp488 = $tmp523.value;
        $l522:;
        panda$core$Bit $tmp524 = { $tmp488 };
        bool $tmp487 = $tmp524.value;
        if ($tmp487) goto $l525;
        panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp487 = $tmp526.value;
        $l525:;
        panda$core$Bit $tmp527 = { $tmp487 };
        bool $tmp486 = $tmp527.value;
        if ($tmp486) goto $l528;
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp486 = $tmp529.value;
        $l528:;
        panda$core$Bit $tmp530 = { $tmp486 };
        bool $tmp485 = $tmp530.value;
        if ($tmp485) goto $l531;
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp485 = $tmp532.value;
        $l531:;
        panda$core$Bit $tmp533 = { $tmp485 };
        bool $tmp484 = $tmp533.value;
        if ($tmp484) goto $l534;
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp484 = $tmp535.value;
        $l534:;
        panda$core$Bit $tmp536 = { $tmp484 };
        bool $tmp483 = $tmp536.value;
        if ($tmp483) goto $l537;
        panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp483 = $tmp538.value;
        $l537:;
        panda$core$Bit $tmp539 = { $tmp483 };
        bool $tmp482 = $tmp539.value;
        if ($tmp482) goto $l540;
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp482 = $tmp541.value;
        $l540:;
        panda$core$Bit $tmp542 = { $tmp482 };
        bool $tmp481 = $tmp542.value;
        if ($tmp481) goto $l543;
        panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp481 = $tmp544.value;
        $l543:;
        panda$core$Bit $tmp545 = { $tmp481 };
        bool $tmp480 = $tmp545.value;
        if ($tmp480) goto $l546;
        panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp480 = $tmp547.value;
        $l546:;
        panda$core$Bit $tmp548 = { $tmp480 };
        bool $tmp479 = $tmp548.value;
        if ($tmp479) goto $l549;
        panda$core$Bit $tmp550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp479 = $tmp550.value;
        $l549:;
        panda$core$Bit $tmp551 = { $tmp479 };
        bool $tmp478 = $tmp551.value;
        if ($tmp478) goto $l552;
        panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp478 = $tmp553.value;
        $l552:;
        panda$core$Bit $tmp554 = { $tmp478 };
        bool $tmp477 = $tmp554.value;
        if ($tmp477) goto $l555;
        panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp477 = $tmp556.value;
        $l555:;
        panda$core$Bit $tmp557 = { $tmp477 };
        bool $tmp476 = $tmp557.value;
        if ($tmp476) goto $l558;
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp476 = $tmp559.value;
        $l558:;
        panda$core$Bit $tmp560 = { $tmp476 };
        if ($tmp560.value) {
        {
            panda$core$String* $tmp561 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name473);
            return $tmp561;
        }
        }
        else {
        panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp562.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp564 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token563 = $tmp564;
            panda$core$Bit $tmp565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token563.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp565.value) {
            {
                return &$s566;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token563);
                return &$s567;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9475.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp568.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp569, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp571 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp569, &$s570);
            if (((panda$core$Bit) { !$tmp571.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp572, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp573 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp572);
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
            panda$core$String* $tmp577 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name473);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s576, $tmp577);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name473, $tmp580);
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
    org$pandalanguage$pandac$parser$Token$Kind $tmp583;
    panda$core$MutableString* name586;
    org$pandalanguage$pandac$parser$Token$Kind $tmp591;
    org$pandalanguage$pandac$parser$Token$nullable id593;
    org$pandalanguage$pandac$parser$Token$Kind $tmp594;
    org$pandalanguage$pandac$ASTNode* tmp24597;
    panda$core$Char8 $tmp598;
    panda$core$String* finalName600;
    org$pandalanguage$pandac$ASTNode* result602;
    panda$collections$Array* children606;
    org$pandalanguage$pandac$ASTNode* t608;
    org$pandalanguage$pandac$ASTNode* tmp25610;
    org$pandalanguage$pandac$ASTNode* tmp31611;
    org$pandalanguage$pandac$ASTNode* tmp26612;
    org$pandalanguage$pandac$ASTNode* tmp32613;
    org$pandalanguage$pandac$parser$Token$Kind $tmp616;
    org$pandalanguage$pandac$ASTNode* tmp27619;
    org$pandalanguage$pandac$ASTNode* tmp33620;
    org$pandalanguage$pandac$ASTNode* tmp28621;
    org$pandalanguage$pandac$ASTNode* tmp34622;
    org$pandalanguage$pandac$parser$Token$Kind $tmp623;
    org$pandalanguage$pandac$ASTNode* tmp29626;
    org$pandalanguage$pandac$ASTNode* tmp35627;
    org$pandalanguage$pandac$ASTNode* tmp30628;
    org$pandalanguage$pandac$ASTNode* tmp36629;
    org$pandalanguage$pandac$parser$Token$Kind $tmp632;
    org$pandalanguage$pandac$ASTNode* tmp37635;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp583, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp585 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp583, &$s584);
    start582 = $tmp585;
    if (((panda$core$Bit) { !start582.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp587 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp588 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start582.value));
    panda$core$MutableString$init$panda$core$String($tmp587, $tmp588);
    name586 = $tmp587;
    $l589:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp591, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp592 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp591);
    if (!((panda$core$Bit) { $tmp592.nonnull }).value) goto $l590;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp594, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp596 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp594, &$s595);
        id593 = $tmp596;
        if (((panda$core$Bit) { !id593.nonnull }).value) {
        {
            {
                tmp24597 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
                return tmp24597;
            }
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp598, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name586, $tmp598);
        panda$core$String* $tmp599 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id593.value));
        panda$core$MutableString$append$panda$core$String(name586, $tmp599);
    }
    goto $l589;
    $l590:;
    panda$core$String* $tmp601 = panda$core$MutableString$finish$R$panda$core$String(name586);
    finalName600 = $tmp601;
    org$pandalanguage$pandac$ASTNode* $tmp603 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp603, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start582.value).position, finalName600);
    result602 = $tmp603;
    org$pandalanguage$pandac$parser$Token $tmp604 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp604.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp605.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp607 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp607);
        children606 = $tmp607;
        panda$collections$Array$add$panda$collections$Array$T(children606, ((panda$core$Object*) result602));
        org$pandalanguage$pandac$ASTNode* $tmp609 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t608 = $tmp609;
        if (((panda$core$Bit) { t608 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp25610 = result602;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
                    }
                    {
                        tmp31611 = tmp25610;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName600));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
                        }
                        return tmp31611;
                    }
                }
            }
            }
            {
                tmp26612 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
                }
                {
                    tmp32613 = tmp26612;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName600));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
                    }
                    return tmp32613;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children606, ((panda$core$Object*) t608));
        $l614:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp616, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp617 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp616);
        if (!((panda$core$Bit) { $tmp617.nonnull }).value) goto $l615;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
                org$pandalanguage$pandac$ASTNode* $tmp618 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                t608 = $tmp618;
            }
            if (((panda$core$Bit) { t608 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    {
                        tmp27619 = result602;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
                        }
                        {
                            tmp33620 = tmp27619;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName600));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
                            }
                            return tmp33620;
                        }
                    }
                }
                }
                {
                    tmp28621 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
                    }
                    {
                        tmp34622 = tmp28621;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName600));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
                        }
                        return tmp34622;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children606, ((panda$core$Object*) t608));
        }
        goto $l614;
        $l615:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp623, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp625 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp623, &$s624);
        if (((panda$core$Bit) { !$tmp625.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp29626 = result602;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
                    }
                    {
                        tmp35627 = tmp29626;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName600));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
                        }
                        return tmp35627;
                    }
                }
            }
            }
            {
                tmp30628 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
                }
                {
                    tmp36629 = tmp30628;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName600));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
                    }
                    return tmp36629;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
            org$pandalanguage$pandac$ASTNode* $tmp630 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp631 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children606);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp630, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start582.value).position, finalName600, $tmp631);
            result602 = $tmp630;
        }
        org$pandalanguage$pandac$parser$Parser$accept(self);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children606));
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp632, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp633 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp632);
    if (((panda$core$Bit) { $tmp633.nonnull }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
            org$pandalanguage$pandac$ASTNode* $tmp634 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp634, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start582.value).position, result602);
            result602 = $tmp634;
        }
    }
    }
    {
        tmp37635 = result602;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name586));
        }
        return tmp37635;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result636;
    org$pandalanguage$pandac$ASTNode* tmp38638;
    org$pandalanguage$pandac$parser$Token token641;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13643;
    panda$collections$Array* args646;
    org$pandalanguage$pandac$parser$Token$Kind $tmp648;
    org$pandalanguage$pandac$ASTNode* expr650;
    org$pandalanguage$pandac$ASTNode* tmp39653;
    org$pandalanguage$pandac$ASTNode* tmp46654;
    org$pandalanguage$pandac$parser$Token$Kind $tmp657;
    org$pandalanguage$pandac$ASTNode* tmp40661;
    org$pandalanguage$pandac$ASTNode* tmp47662;
    org$pandalanguage$pandac$parser$Token$Kind $tmp663;
    org$pandalanguage$pandac$ASTNode* tmp41667;
    org$pandalanguage$pandac$ASTNode* tmp48668;
    org$pandalanguage$pandac$ASTNode* arg673;
    org$pandalanguage$pandac$ASTNode* tmp49675;
    org$pandalanguage$pandac$parser$Token$Kind $tmp676;
    org$pandalanguage$pandac$ASTNode* tmp50679;
    org$pandalanguage$pandac$parser$Token$Kind $tmp681;
    panda$core$String* name683;
    org$pandalanguage$pandac$parser$Token$Kind $tmp684;
    org$pandalanguage$pandac$ASTNode* tmp51688;
    org$pandalanguage$pandac$ASTNode* target691;
    org$pandalanguage$pandac$ASTNode* tmp52693;
    org$pandalanguage$pandac$parser$Token$Kind $tmp695;
    panda$core$String* name697;
    panda$core$MutableString* finalName699;
    panda$core$Char8 $tmp701;
    panda$collections$Array* types702;
    org$pandalanguage$pandac$ASTNode* t707;
    org$pandalanguage$pandac$ASTNode* tmp42709;
    org$pandalanguage$pandac$ASTNode* tmp53710;
    org$pandalanguage$pandac$parser$Token$Kind $tmp713;
    org$pandalanguage$pandac$ASTNode* tmp43716;
    org$pandalanguage$pandac$ASTNode* tmp54717;
    org$pandalanguage$pandac$parser$Token$Kind $tmp719;
    org$pandalanguage$pandac$ASTNode* tmp44722;
    org$pandalanguage$pandac$ASTNode* tmp55723;
    panda$core$Char8 $tmp724;
    panda$core$Bit shouldAccept725;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29727;
    org$pandalanguage$pandac$ASTNode* tmp45747;
    org$pandalanguage$pandac$ASTNode* tmp56748;
    org$pandalanguage$pandac$ASTNode* tmp57749;
    org$pandalanguage$pandac$ASTNode* tmp58750;
    org$pandalanguage$pandac$ASTNode* $tmp637 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result636 = $tmp637;
    if (((panda$core$Bit) { result636 == NULL }).value) {
    {
        {
            tmp38638 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
            return tmp38638;
        }
    }
    }
    $l639:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp642 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token641 = $tmp642;
        {
            $match$540_13643 = token641.kind;
            panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13643.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp644.value) {
            {
                panda$core$Bit$wrapper* $tmp645;
                $tmp645 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                $tmp645->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp645));
                panda$collections$Array* $tmp647 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp647);
                args646 = $tmp647;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp648, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp649 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp648);
                if (((panda$core$Bit) { !$tmp649.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp651 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr650 = $tmp651;
                    if (((panda$core$Bit) { expr650 == NULL }).value) {
                    {
                        panda$core$Object* $tmp652 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp39653 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr650));
                            {
                                tmp46654 = tmp39653;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                                return tmp46654;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args646, ((panda$core$Object*) expr650));
                    $l655:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp657, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp658 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp657);
                    if (!((panda$core$Bit) { $tmp658.nonnull }).value) goto $l656;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr650));
                            org$pandalanguage$pandac$ASTNode* $tmp659 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr650 = $tmp659;
                        }
                        if (((panda$core$Bit) { expr650 == NULL }).value) {
                        {
                            panda$core$Object* $tmp660 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            {
                                tmp40661 = NULL;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr650));
                                {
                                    tmp47662 = tmp40661;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                                    return tmp47662;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args646, ((panda$core$Object*) expr650));
                    }
                    goto $l655;
                    $l656:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp663, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp665 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp663, &$s664);
                    if (((panda$core$Bit) { !$tmp665.nonnull }).value) {
                    {
                        panda$core$Object* $tmp666 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp41667 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr650));
                            {
                                tmp48668 = tmp41667;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                                return tmp48668;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr650));
                }
                }
                panda$core$Object* $tmp669 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                    org$pandalanguage$pandac$ASTNode* $tmp670 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp671 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args646);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp670, ((panda$core$Int64) { 6 }), token641.position, result636, $tmp671);
                    result636 = $tmp670;
                }
            }
            }
            else {
            panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13643.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp672.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp674 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                arg673 = $tmp674;
                if (((panda$core$Bit) { arg673 == NULL }).value) {
                {
                    {
                        tmp49675 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                        return tmp49675;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp676, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp678 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp676, &$s677);
                if (((panda$core$Bit) { !$tmp678.nonnull }).value) {
                {
                    {
                        tmp50679 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                        return tmp50679;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                    org$pandalanguage$pandac$ASTNode* $tmp680 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp681, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp680, ((panda$core$Int64) { 2 }), token641.position, result636, $tmp681, arg673);
                    result636 = $tmp680;
                }
            }
            }
            else {
            panda$core$Bit $tmp682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13643.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp682.value) {
            {
                memset(&name683, 0, sizeof(name683));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp684, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp685 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp684);
                if (((panda$core$Bit) { $tmp685.nonnull }).value) {
                {
                    {
                        name683 = &$s686;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp687 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                        name683 = $tmp687;
                    }
                    if (((panda$core$Bit) { name683 == NULL }).value) {
                    {
                        {
                            tmp51688 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                            return tmp51688;
                        }
                    }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                    org$pandalanguage$pandac$ASTNode* $tmp689 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp689, ((panda$core$Int64) { 13 }), token641.position, result636, name683);
                    result636 = $tmp689;
                }
            }
            }
            else {
            panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13643.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp690.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp692 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target691 = $tmp692;
                if (((panda$core$Bit) { target691 == NULL }).value) {
                {
                    {
                        tmp52693 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                        return tmp52693;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                    org$pandalanguage$pandac$ASTNode* $tmp694 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp695, ((panda$core$Int64) { 89 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp694, ((panda$core$Int64) { 2 }), token641.position, result636, $tmp695, target691);
                    result636 = $tmp694;
                }
            }
            }
            else {
            panda$core$Bit $tmp696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13643.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp696.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token641);
                panda$core$String* $tmp698 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result636);
                name697 = $tmp698;
                if (((panda$core$Bit) { name697 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp700 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                    panda$core$MutableString$init$panda$core$String($tmp700, name697);
                    finalName699 = $tmp700;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp701, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName699, $tmp701);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp703 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp703);
                    types702 = $tmp703;
                    org$pandalanguage$pandac$ASTNode* $tmp704 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp706 = (($fn705) result636->$class->vtable[2])(result636);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp704, ((panda$core$Int64) { 35 }), $tmp706, name697);
                    panda$collections$Array$add$panda$collections$Array$T(types702, ((panda$core$Object*) $tmp704));
                    org$pandalanguage$pandac$ASTNode* $tmp708 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t707 = $tmp708;
                    if (((panda$core$Bit) { t707 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp42709 = result636;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types702));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t707));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName699));
                            }
                            {
                                tmp53710 = tmp42709;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                                return tmp53710;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types702, ((panda$core$Object*) t707));
                    panda$core$MutableString$append$panda$core$Object(finalName699, ((panda$core$Object*) t707));
                    $l711:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp713, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp714 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp713);
                    if (!((panda$core$Bit) { $tmp714.nonnull }).value) goto $l712;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t707));
                            org$pandalanguage$pandac$ASTNode* $tmp715 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                            t707 = $tmp715;
                        }
                        if (((panda$core$Bit) { t707 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            {
                                tmp43716 = result636;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types702));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t707));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName699));
                                }
                                {
                                    tmp54717 = tmp43716;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                                    return tmp54717;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types702, ((panda$core$Object*) t707));
                        panda$core$MutableString$append$panda$core$String(finalName699, &$s718);
                        panda$core$MutableString$append$panda$core$Object(finalName699, ((panda$core$Object*) t707));
                    }
                    goto $l711;
                    $l712:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp719, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp721 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp719, &$s720);
                    if (((panda$core$Bit) { !$tmp721.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp44722 = result636;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types702));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t707));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName699));
                            }
                            {
                                tmp55723 = tmp44722;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                                return tmp55723;
                            }
                        }
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp724, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName699, $tmp724);
                    memset(&shouldAccept725, 0, sizeof(shouldAccept725));
                    panda$core$Object* $tmp726 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp726)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp728 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29727 = $tmp728.kind;
                            panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29727.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp731 = $tmp732.value;
                            if ($tmp731) goto $l733;
                            panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29727.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp731 = $tmp734.value;
                            $l733:;
                            panda$core$Bit $tmp735 = { $tmp731 };
                            bool $tmp730 = $tmp735.value;
                            if ($tmp730) goto $l736;
                            panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29727.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp730 = $tmp737.value;
                            $l736:;
                            panda$core$Bit $tmp738 = { $tmp730 };
                            bool $tmp729 = $tmp738.value;
                            if ($tmp729) goto $l739;
                            panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29727.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp729 = $tmp740.value;
                            $l739:;
                            panda$core$Bit $tmp741 = { $tmp729 };
                            if ($tmp741.value) {
                            {
                                shouldAccept725 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept725 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept725 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept725.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                            org$pandalanguage$pandac$ASTNode* $tmp742 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$Position $tmp744 = (($fn743) result636->$class->vtable[2])(result636);
                            panda$core$String* $tmp745 = panda$core$MutableString$finish$R$panda$core$String(finalName699);
                            panda$collections$ImmutableArray* $tmp746 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types702);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp742, ((panda$core$Int64) { 17 }), $tmp744, $tmp745, $tmp746);
                            result636 = $tmp742;
                        }
                        {
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types702));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t707));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName699));
                            }
                            goto $l639;
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp45747 = result636;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types702));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t707));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName699));
                            }
                            {
                                tmp56748 = tmp45747;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                                return tmp56748;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types702));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t707));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName699));
                    }
                }
                }
                {
                    tmp57749 = result636;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                    return tmp57749;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token641);
                {
                    tmp58750 = result636;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
                    return tmp58750;
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
    $l640:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result636));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result751;
    org$pandalanguage$pandac$ASTNode* tmp59753;
    org$pandalanguage$pandac$parser$Token$nullable op756;
    org$pandalanguage$pandac$parser$Token$Kind $tmp757;
    org$pandalanguage$pandac$ASTNode* next759;
    org$pandalanguage$pandac$ASTNode* tmp60761;
    org$pandalanguage$pandac$ASTNode* tmp61762;
    org$pandalanguage$pandac$ASTNode* tmp62764;
    org$pandalanguage$pandac$ASTNode* $tmp752 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result751 = $tmp752;
    if (((panda$core$Bit) { result751 == NULL }).value) {
    {
        {
            tmp59753 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result751));
            return tmp59753;
        }
    }
    }
    $l754:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp757, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp758 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp757);
        op756 = $tmp758;
        if (((panda$core$Bit) { !op756.nonnull }).value) {
        {
            goto $l755;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp760 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next759 = $tmp760;
        if (((panda$core$Bit) { next759 == NULL }).value) {
        {
            {
                tmp60761 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next759));
                {
                    tmp61762 = tmp60761;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result751));
                    return tmp61762;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result751));
            org$pandalanguage$pandac$ASTNode* $tmp763 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp763, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op756.value).position, result751, ((org$pandalanguage$pandac$parser$Token) op756.value).kind, next759);
            result751 = $tmp763;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next759));
    }
    }
    $l755:;
    {
        tmp62764 = result751;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result751));
        return tmp62764;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op765;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9767;
    org$pandalanguage$pandac$ASTNode* base777;
    org$pandalanguage$pandac$parser$Token $tmp766 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op765 = $tmp766;
    {
        $match$709_9767 = op765.kind;
        panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9767.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp769 = $tmp770.value;
        if ($tmp769) goto $l771;
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9767.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp769 = $tmp772.value;
        $l771:;
        panda$core$Bit $tmp773 = { $tmp769 };
        bool $tmp768 = $tmp773.value;
        if ($tmp768) goto $l774;
        panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9767.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp768 = $tmp775.value;
        $l774:;
        panda$core$Bit $tmp776 = { $tmp768 };
        if ($tmp776.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp778 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base777 = $tmp778;
            if (((panda$core$Bit) { base777 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp779 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp779, ((panda$core$Int64) { 28 }), op765.position, op765.kind, base777);
            return $tmp779;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op765);
            org$pandalanguage$pandac$ASTNode* $tmp780 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp780;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result781;
    org$pandalanguage$pandac$ASTNode* tmp63783;
    org$pandalanguage$pandac$parser$Token op786;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13788;
    org$pandalanguage$pandac$ASTNode* next814;
    org$pandalanguage$pandac$ASTNode* tmp65816;
    org$pandalanguage$pandac$parser$Token nextToken819;
    org$pandalanguage$pandac$ASTNode* next822;
    org$pandalanguage$pandac$ASTNode* tmp64824;
    org$pandalanguage$pandac$ASTNode* tmp66825;
    org$pandalanguage$pandac$parser$Token$Kind $tmp827;
    org$pandalanguage$pandac$ASTNode* tmp67828;
    org$pandalanguage$pandac$ASTNode* tmp68829;
    org$pandalanguage$pandac$ASTNode* $tmp782 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result781 = $tmp782;
    if (((panda$core$Bit) { result781 == NULL }).value) {
    {
        {
            tmp63783 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
            return tmp63783;
        }
    }
    }
    $l784:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp787 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op786 = $tmp787;
        {
            $match$735_13788 = op786.kind;
            panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp794 = $tmp795.value;
            if ($tmp794) goto $l796;
            panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp794 = $tmp797.value;
            $l796:;
            panda$core$Bit $tmp798 = { $tmp794 };
            bool $tmp793 = $tmp798.value;
            if ($tmp793) goto $l799;
            panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp793 = $tmp800.value;
            $l799:;
            panda$core$Bit $tmp801 = { $tmp793 };
            bool $tmp792 = $tmp801.value;
            if ($tmp792) goto $l802;
            panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp792 = $tmp803.value;
            $l802:;
            panda$core$Bit $tmp804 = { $tmp792 };
            bool $tmp791 = $tmp804.value;
            if ($tmp791) goto $l805;
            panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp791 = $tmp806.value;
            $l805:;
            panda$core$Bit $tmp807 = { $tmp791 };
            bool $tmp790 = $tmp807.value;
            if ($tmp790) goto $l808;
            panda$core$Bit $tmp809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp790 = $tmp809.value;
            $l808:;
            panda$core$Bit $tmp810 = { $tmp790 };
            bool $tmp789 = $tmp810.value;
            if ($tmp789) goto $l811;
            panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp789 = $tmp812.value;
            $l811:;
            panda$core$Bit $tmp813 = { $tmp789 };
            if ($tmp813.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp815 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next814 = $tmp815;
                if (((panda$core$Bit) { next814 == NULL }).value) {
                {
                    {
                        tmp65816 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
                        return tmp65816;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
                    org$pandalanguage$pandac$ASTNode* $tmp817 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp817, ((panda$core$Int64) { 2 }), op786.position, result781, op786.kind, next814);
                    result781 = $tmp817;
                }
            }
            }
            else {
            panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13788.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp818.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp820 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken819 = $tmp820;
                panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken819.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp821.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp823 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next822 = $tmp823;
                    if (((panda$core$Bit) { next822 == NULL }).value) {
                    {
                        {
                            tmp64824 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next822));
                            {
                                tmp66825 = tmp64824;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
                                return tmp66825;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
                        org$pandalanguage$pandac$ASTNode* $tmp826 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp827, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp826, ((panda$core$Int64) { 2 }), op786.position, result781, $tmp827, next822);
                        result781 = $tmp826;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next822));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken819);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op786);
                    {
                        tmp67828 = result781;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
                        return tmp67828;
                    }
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op786);
                {
                    tmp68829 = result781;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
                    return tmp68829;
                }
            }
            }
            }
        }
    }
    }
    $l785:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result830;
    org$pandalanguage$pandac$ASTNode* tmp69832;
    org$pandalanguage$pandac$parser$Token op835;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13837;
    org$pandalanguage$pandac$ASTNode* next847;
    org$pandalanguage$pandac$ASTNode* tmp70849;
    org$pandalanguage$pandac$ASTNode* tmp71851;
    org$pandalanguage$pandac$ASTNode* $tmp831 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result830 = $tmp831;
    if (((panda$core$Bit) { result830 == NULL }).value) {
    {
        {
            tmp69832 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
            return tmp69832;
        }
    }
    }
    $l833:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp836 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op835 = $tmp836;
        {
            $match$776_13837 = op835.kind;
            panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13837.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp839 = $tmp840.value;
            if ($tmp839) goto $l841;
            panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13837.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp839 = $tmp842.value;
            $l841:;
            panda$core$Bit $tmp843 = { $tmp839 };
            bool $tmp838 = $tmp843.value;
            if ($tmp838) goto $l844;
            panda$core$Bit $tmp845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13837.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp838 = $tmp845.value;
            $l844:;
            panda$core$Bit $tmp846 = { $tmp838 };
            if ($tmp846.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp848 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next847 = $tmp848;
                if (((panda$core$Bit) { next847 == NULL }).value) {
                {
                    {
                        tmp70849 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
                        return tmp70849;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
                    org$pandalanguage$pandac$ASTNode* $tmp850 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp850, ((panda$core$Int64) { 2 }), op835.position, result830, op835.kind, next847);
                    result830 = $tmp850;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op835);
                {
                    tmp71851 = result830;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
                    return tmp71851;
                }
            }
            }
        }
    }
    }
    $l834:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result852;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9853;
    org$pandalanguage$pandac$ASTNode* tmp72861;
    org$pandalanguage$pandac$parser$Token op862;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9864;
    org$pandalanguage$pandac$parser$Token next870;
    org$pandalanguage$pandac$ASTNode* right872;
    org$pandalanguage$pandac$ASTNode* tmp73883;
    org$pandalanguage$pandac$ASTNode* step884;
    org$pandalanguage$pandac$parser$Token$Kind $tmp885;
    org$pandalanguage$pandac$ASTNode* tmp74888;
    org$pandalanguage$pandac$ASTNode* tmp75889;
    org$pandalanguage$pandac$ASTNode* tmp76892;
    memset(&result852, 0, sizeof(result852));
    {
        org$pandalanguage$pandac$parser$Token $tmp854 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9853 = $tmp854.kind;
        panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9853.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp855 = $tmp856.value;
        if ($tmp855) goto $l857;
        panda$core$Bit $tmp858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9853.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp855 = $tmp858.value;
        $l857:;
        panda$core$Bit $tmp859 = { $tmp855 };
        if ($tmp859.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
                result852 = NULL;
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
                org$pandalanguage$pandac$ASTNode* $tmp860 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                result852 = $tmp860;
            }
            if (((panda$core$Bit) { result852 == NULL }).value) {
            {
                {
                    tmp72861 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
                    return tmp72861;
                }
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp863 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op862 = $tmp863;
    {
        $match$806_9864 = op862.kind;
        panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9864.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp865 = $tmp866.value;
        if ($tmp865) goto $l867;
        panda$core$Bit $tmp868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9864.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp865 = $tmp868.value;
        $l867:;
        panda$core$Bit $tmp869 = { $tmp865 };
        if ($tmp869.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp871 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next870 = $tmp871;
            memset(&right872, 0, sizeof(right872));
            panda$core$Bit $tmp875 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next870.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp874 = $tmp875.value;
            if (!$tmp874) goto $l876;
            panda$core$Bit $tmp877 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next870.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp874 = $tmp877.value;
            $l876:;
            panda$core$Bit $tmp878 = { $tmp874 };
            bool $tmp873 = $tmp878.value;
            if (!$tmp873) goto $l879;
            panda$core$Bit $tmp880 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next870.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp873 = $tmp880.value;
            $l879:;
            panda$core$Bit $tmp881 = { $tmp873 };
            if ($tmp881.value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp882 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    right872 = $tmp882;
                }
                if (((panda$core$Bit) { right872 == NULL }).value) {
                {
                    {
                        tmp73883 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
                        return tmp73883;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    right872 = NULL;
                }
            }
            }
            memset(&step884, 0, sizeof(step884));
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp885, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp886 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp885);
            if (((panda$core$Bit) { $tmp886.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp887 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    step884 = $tmp887;
                }
                if (((panda$core$Bit) { step884 == NULL }).value) {
                {
                    {
                        tmp74888 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
                        return tmp74888;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    step884 = NULL;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp890 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op862.kind.$rawValue, ((panda$core$Int64) { 96 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp890, ((panda$core$Int64) { 29 }), op862.position, result852, right872, $tmp891, step884);
                tmp75889 = $tmp890;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
                return tmp75889;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op862);
            {
                tmp76892 = result852;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
                return tmp76892;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result852));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result893;
    org$pandalanguage$pandac$ASTNode* tmp77895;
    org$pandalanguage$pandac$parser$Token op898;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13900;
    org$pandalanguage$pandac$ASTNode* next930;
    org$pandalanguage$pandac$ASTNode* tmp78932;
    org$pandalanguage$pandac$ASTNode* tmp79934;
    org$pandalanguage$pandac$ASTNode* $tmp894 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result893 = $tmp894;
    if (((panda$core$Bit) { result893 == NULL }).value) {
    {
        {
            tmp77895 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result893));
            return tmp77895;
        }
    }
    }
    $l896:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp899 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op898 = $tmp899;
        {
            $match$849_13900 = op898.kind;
            panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp907 = $tmp908.value;
            if ($tmp907) goto $l909;
            panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp907 = $tmp910.value;
            $l909:;
            panda$core$Bit $tmp911 = { $tmp907 };
            bool $tmp906 = $tmp911.value;
            if ($tmp906) goto $l912;
            panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp906 = $tmp913.value;
            $l912:;
            panda$core$Bit $tmp914 = { $tmp906 };
            bool $tmp905 = $tmp914.value;
            if ($tmp905) goto $l915;
            panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp905 = $tmp916.value;
            $l915:;
            panda$core$Bit $tmp917 = { $tmp905 };
            bool $tmp904 = $tmp917.value;
            if ($tmp904) goto $l918;
            panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp904 = $tmp919.value;
            $l918:;
            panda$core$Bit $tmp920 = { $tmp904 };
            bool $tmp903 = $tmp920.value;
            if ($tmp903) goto $l921;
            panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp903 = $tmp922.value;
            $l921:;
            panda$core$Bit $tmp923 = { $tmp903 };
            bool $tmp902 = $tmp923.value;
            if ($tmp902) goto $l924;
            panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp902 = $tmp925.value;
            $l924:;
            panda$core$Bit $tmp926 = { $tmp902 };
            bool $tmp901 = $tmp926.value;
            if ($tmp901) goto $l927;
            panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13900.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp901 = $tmp928.value;
            $l927:;
            panda$core$Bit $tmp929 = { $tmp901 };
            if ($tmp929.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp931 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next930 = $tmp931;
                if (((panda$core$Bit) { next930 == NULL }).value) {
                {
                    {
                        tmp78932 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result893));
                        return tmp78932;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result893));
                    org$pandalanguage$pandac$ASTNode* $tmp933 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp933, ((panda$core$Int64) { 2 }), op898.position, result893, op898.kind, next930);
                    result893 = $tmp933;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op898);
                {
                    tmp79934 = result893;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result893));
                    return tmp79934;
                }
            }
            }
        }
    }
    }
    $l897:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result893));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result935;
    org$pandalanguage$pandac$ASTNode* tmp80937;
    org$pandalanguage$pandac$parser$Token op940;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_13942;
    org$pandalanguage$pandac$ASTNode* next948;
    org$pandalanguage$pandac$ASTNode* tmp81950;
    org$pandalanguage$pandac$ASTNode* tmp82952;
    org$pandalanguage$pandac$ASTNode* $tmp936 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result935 = $tmp936;
    if (((panda$core$Bit) { result935 == NULL }).value) {
    {
        {
            tmp80937 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result935));
            return tmp80937;
        }
    }
    }
    $l938:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp941 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op940 = $tmp941;
        {
            $match$880_13942 = op940.kind;
            panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13942.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp943 = $tmp944.value;
            if ($tmp943) goto $l945;
            panda$core$Bit $tmp946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13942.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp943 = $tmp946.value;
            $l945:;
            panda$core$Bit $tmp947 = { $tmp943 };
            if ($tmp947.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp949 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next948 = $tmp949;
                if (((panda$core$Bit) { next948 == NULL }).value) {
                {
                    {
                        tmp81950 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result935));
                        return tmp81950;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result935));
                    org$pandalanguage$pandac$ASTNode* $tmp951 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp951, ((panda$core$Int64) { 2 }), op940.position, result935, op940.kind, next948);
                    result935 = $tmp951;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op940);
                {
                    tmp82952 = result935;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result935));
                    return tmp82952;
                }
            }
            }
        }
    }
    }
    $l939:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result935));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result953;
    org$pandalanguage$pandac$ASTNode* tmp83955;
    org$pandalanguage$pandac$parser$Token$nullable op958;
    org$pandalanguage$pandac$parser$Token$Kind $tmp959;
    org$pandalanguage$pandac$ASTNode* next961;
    org$pandalanguage$pandac$ASTNode* tmp84963;
    org$pandalanguage$pandac$ASTNode* tmp85964;
    org$pandalanguage$pandac$ASTNode* tmp86966;
    org$pandalanguage$pandac$ASTNode* $tmp954 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result953 = $tmp954;
    if (((panda$core$Bit) { result953 == NULL }).value) {
    {
        {
            tmp83955 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result953));
            return tmp83955;
        }
    }
    }
    $l956:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp959, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp960 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp959);
        op958 = $tmp960;
        if (((panda$core$Bit) { !op958.nonnull }).value) {
        {
            goto $l957;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp962 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next961 = $tmp962;
        if (((panda$core$Bit) { next961 == NULL }).value) {
        {
            {
                tmp84963 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next961));
                {
                    tmp85964 = tmp84963;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result953));
                    return tmp85964;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result953));
            org$pandalanguage$pandac$ASTNode* $tmp965 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp965, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op958.value).position, result953, ((org$pandalanguage$pandac$parser$Token) op958.value).kind, next961);
            result953 = $tmp965;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next961));
    }
    }
    $l957:;
    {
        tmp86966 = result953;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result953));
        return tmp86966;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp968;
    org$pandalanguage$pandac$ASTNode* test971;
    org$pandalanguage$pandac$ASTNode* tmp87973;
    panda$collections$ImmutableArray* ifTrue974;
    org$pandalanguage$pandac$ASTNode* tmp88976;
    org$pandalanguage$pandac$ASTNode* ifFalse977;
    org$pandalanguage$pandac$parser$Token$Kind $tmp978;
    org$pandalanguage$pandac$ASTNode* tmp89983;
    org$pandalanguage$pandac$ASTNode* tmp90985;
    org$pandalanguage$pandac$ASTNode* tmp91986;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp968, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp970 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp968, &$s969);
    start967 = $tmp970;
    if (((panda$core$Bit) { !start967.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp972 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test971 = $tmp972;
    if (((panda$core$Bit) { test971 == NULL }).value) {
    {
        {
            tmp87973 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test971));
            return tmp87973;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp975 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    ifTrue974 = $tmp975;
    if (((panda$core$Bit) { ifTrue974 == NULL }).value) {
    {
        {
            tmp88976 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test971));
            }
            return tmp88976;
        }
    }
    }
    memset(&ifFalse977, 0, sizeof(ifFalse977));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp978, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp979 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp978);
    if (((panda$core$Bit) { $tmp979.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp980 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp980.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp981.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse977));
                org$pandalanguage$pandac$ASTNode* $tmp982 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse977 = $tmp982;
            }
            if (((panda$core$Bit) { ifFalse977 == NULL }).value) {
            {
                {
                    tmp89983 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue974));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test971));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse977));
                    }
                    return tmp89983;
                }
            }
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse977));
                org$pandalanguage$pandac$ASTNode* $tmp984 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse977 = $tmp984;
            }
            if (((panda$core$Bit) { ifFalse977 == NULL }).value) {
            {
                {
                    tmp90985 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue974));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test971));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse977));
                    }
                    return tmp90985;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse977));
            ifFalse977 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp987 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp987, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start967.value).position, test971, ifTrue974, ifFalse977);
        tmp91986 = $tmp987;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue974));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse977));
        }
        return tmp91986;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp988;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp988, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp990 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp988, &$s989);
    if (((panda$core$Bit) { !$tmp990.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp991 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp991;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id992;
    org$pandalanguage$pandac$parser$Token$Kind $tmp993;
    org$pandalanguage$pandac$ASTNode* type998;
    org$pandalanguage$pandac$ASTNode* tmp921000;
    org$pandalanguage$pandac$ASTNode* tmp931001;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp993, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp995 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp993, &$s994);
    id992 = $tmp995;
    if (((panda$core$Bit) { !id992.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp996 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp996.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp997.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp999 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type998 = $tmp999;
        if (((panda$core$Bit) { type998 == NULL }).value) {
        {
            {
                tmp921000 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type998));
                return tmp921000;
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1002 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1003 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id992.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1002, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id992.value).position, $tmp1003, type998);
            tmp931001 = $tmp1002;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type998));
            return tmp931001;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1004 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1005 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id992.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1004, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id992.value).position, $tmp1005);
    return $tmp1004;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1006;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1007;
    org$pandalanguage$pandac$ASTNode* t1010;
    org$pandalanguage$pandac$ASTNode* tmp941012;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1013;
    org$pandalanguage$pandac$ASTNode* tmp951016;
    org$pandalanguage$pandac$ASTNode* list1017;
    org$pandalanguage$pandac$ASTNode* tmp961019;
    panda$collections$ImmutableArray* block1020;
    org$pandalanguage$pandac$ASTNode* tmp971022;
    org$pandalanguage$pandac$ASTNode* tmp981023;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1007, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1009 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1007, &$s1008);
    start1006 = $tmp1009;
    if (((panda$core$Bit) { !start1006.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1011 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1010 = $tmp1011;
    if (((panda$core$Bit) { t1010 == NULL }).value) {
    {
        {
            tmp941012 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1010));
            return tmp941012;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1013, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1015 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1013, &$s1014);
    if (((panda$core$Bit) { !$tmp1015.nonnull }).value) {
    {
        {
            tmp951016 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1010));
            return tmp951016;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1018 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list1017 = $tmp1018;
    if (((panda$core$Bit) { list1017 == NULL }).value) {
    {
        {
            tmp961019 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1017));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1010));
            }
            return tmp961019;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1021 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    block1020 = $tmp1021;
    if (((panda$core$Bit) { block1020 == NULL }).value) {
    {
        {
            tmp971022 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1017));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1020));
            }
            return tmp971022;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1024 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1024, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1006.value).position, p_label, t1010, list1017, block1020);
        tmp981023 = $tmp1024;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1017));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1010));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1020));
        }
        return tmp981023;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1025;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1026;
    org$pandalanguage$pandac$ASTNode* test1029;
    org$pandalanguage$pandac$ASTNode* tmp991031;
    panda$collections$ImmutableArray* body1032;
    org$pandalanguage$pandac$ASTNode* tmp1001034;
    org$pandalanguage$pandac$ASTNode* tmp1011035;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1026, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1028 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1026, &$s1027);
    start1025 = $tmp1028;
    if (((panda$core$Bit) { !start1025.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1030 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1029 = $tmp1030;
    if (((panda$core$Bit) { test1029 == NULL }).value) {
    {
        {
            tmp991031 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1029));
            return tmp991031;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1033 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1032 = $tmp1033;
    if (((panda$core$Bit) { body1032 == NULL }).value) {
    {
        {
            tmp1001034 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1029));
            }
            return tmp1001034;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1036 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1036, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1025.value).position, p_label, test1029, body1032);
        tmp1011035 = $tmp1036;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1032));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1029));
        }
        return tmp1011035;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1037;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1038;
    panda$collections$ImmutableArray* body1041;
    org$pandalanguage$pandac$ASTNode* tmp1021043;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1044;
    org$pandalanguage$pandac$ASTNode* tmp1031047;
    org$pandalanguage$pandac$ASTNode* test1048;
    org$pandalanguage$pandac$ASTNode* tmp1041050;
    org$pandalanguage$pandac$ASTNode* tmp1051051;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1038, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1040 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1038, &$s1039);
    start1037 = $tmp1040;
    if (((panda$core$Bit) { !start1037.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1042 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1041 = $tmp1042;
    if (((panda$core$Bit) { body1041 == NULL }).value) {
    {
        {
            tmp1021043 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1041));
            return tmp1021043;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1044, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1046 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1044, &$s1045);
    if (((panda$core$Bit) { !$tmp1046.nonnull }).value) {
    {
        {
            tmp1031047 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1041));
            return tmp1031047;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1049 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1048 = $tmp1049;
    if (((panda$core$Bit) { test1048 == NULL }).value) {
    {
        {
            tmp1041050 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1041));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1048));
            }
            return tmp1041050;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1052 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1052, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1037.value).position, p_label, body1041, test1048);
        tmp1051051 = $tmp1052;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1041));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1048));
        }
        return tmp1051051;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1053;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1054;
    panda$collections$ImmutableArray* body1057;
    org$pandalanguage$pandac$ASTNode* tmp1061059;
    org$pandalanguage$pandac$ASTNode* tmp1071060;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1054, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1056 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1054, &$s1055);
    start1053 = $tmp1056;
    if (((panda$core$Bit) { !start1053.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1058 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1057 = $tmp1058;
    if (((panda$core$Bit) { body1057 == NULL }).value) {
    {
        {
            tmp1061059 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1057));
            return tmp1061059;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1061 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1061, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1053.value).position, p_label, body1057);
        tmp1071060 = $tmp1061;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1057));
        return tmp1071060;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1062;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1063;
    org$pandalanguage$pandac$ASTNode* expr1066;
    org$pandalanguage$pandac$ASTNode* tmp1081068;
    org$pandalanguage$pandac$ASTNode* message1069;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1070;
    org$pandalanguage$pandac$ASTNode* tmp1091073;
    org$pandalanguage$pandac$ASTNode* tmp1101074;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1063, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1065 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1063, &$s1064);
    start1062 = $tmp1065;
    if (((panda$core$Bit) { !start1062.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1067 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1066 = $tmp1067;
    if (((panda$core$Bit) { expr1066 == NULL }).value) {
    {
        {
            tmp1081068 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1066));
            return tmp1081068;
        }
    }
    }
    memset(&message1069, 0, sizeof(message1069));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1070, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1071 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1070);
    if (((panda$core$Bit) { $tmp1071.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1072 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            message1069 = $tmp1072;
        }
        if (((panda$core$Bit) { message1069 == NULL }).value) {
        {
            {
                tmp1091073 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1069));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1066));
                }
                return tmp1091073;
            }
        }
        }
    }
    }
    else {
    {
        {
            message1069 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1075 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1075, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1062.value).position, expr1066, message1069);
        tmp1101074 = $tmp1075;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1066));
        }
        return tmp1101074;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1076;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1077;
    panda$collections$Array* expressions1080;
    org$pandalanguage$pandac$ASTNode* expr1082;
    org$pandalanguage$pandac$ASTNode* tmp1111084;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1087;
    org$pandalanguage$pandac$ASTNode* tmp1121090;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1091;
    org$pandalanguage$pandac$ASTNode* tmp1131094;
    panda$collections$Array* statements1095;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131099;
    org$pandalanguage$pandac$ASTNode* stmt1119;
    org$pandalanguage$pandac$ASTNode* tmp1151121;
    org$pandalanguage$pandac$ASTNode* stmt1122;
    org$pandalanguage$pandac$ASTNode* tmp1141124;
    org$pandalanguage$pandac$ASTNode* tmp1161125;
    org$pandalanguage$pandac$ASTNode* tmp1171126;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1077, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1079 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1077, &$s1078);
    start1076 = $tmp1079;
    if (((panda$core$Bit) { !start1076.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1081 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1081);
    expressions1080 = $tmp1081;
    org$pandalanguage$pandac$ASTNode* $tmp1083 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1082 = $tmp1083;
    if (((panda$core$Bit) { expr1082 == NULL }).value) {
    {
        {
            tmp1111084 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1082));
            }
            return tmp1111084;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1080, ((panda$core$Object*) expr1082));
    $l1085:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1087, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1088 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1087);
    if (!((panda$core$Bit) { $tmp1088.nonnull }).value) goto $l1086;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1082));
            org$pandalanguage$pandac$ASTNode* $tmp1089 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1082 = $tmp1089;
        }
        if (((panda$core$Bit) { expr1082 == NULL }).value) {
        {
            {
                tmp1121090 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1080));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1082));
                }
                return tmp1121090;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1080, ((panda$core$Object*) expr1082));
    }
    goto $l1085;
    $l1086:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1091, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1093 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1091, &$s1092);
    if (((panda$core$Bit) { !$tmp1093.nonnull }).value) {
    {
        {
            tmp1131094 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1082));
            }
            return tmp1131094;
        }
    }
    }
    panda$collections$Array* $tmp1096 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1096);
    statements1095 = $tmp1096;
    $l1097:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1100 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131099 = $tmp1100.kind;
            panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131099.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1102 = $tmp1103.value;
            if ($tmp1102) goto $l1104;
            panda$core$Bit $tmp1105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131099.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1102 = $tmp1105.value;
            $l1104:;
            panda$core$Bit $tmp1106 = { $tmp1102 };
            bool $tmp1101 = $tmp1106.value;
            if ($tmp1101) goto $l1107;
            panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131099.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1101 = $tmp1108.value;
            $l1107:;
            panda$core$Bit $tmp1109 = { $tmp1101 };
            if ($tmp1109.value) {
            {
                goto $l1098;
            }
            }
            else {
            panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131099.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1111 = $tmp1112.value;
            if ($tmp1111) goto $l1113;
            panda$core$Bit $tmp1114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131099.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1111 = $tmp1114.value;
            $l1113:;
            panda$core$Bit $tmp1115 = { $tmp1111 };
            bool $tmp1110 = $tmp1115.value;
            if ($tmp1110) goto $l1116;
            panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131099.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1110 = $tmp1117.value;
            $l1116:;
            panda$core$Bit $tmp1118 = { $tmp1110 };
            if ($tmp1118.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1120 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1119 = $tmp1120;
                if (((panda$core$Bit) { stmt1119 == NULL }).value) {
                {
                    {
                        tmp1151121 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1080));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1095));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1082));
                        }
                        return tmp1151121;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1095, ((panda$core$Object*) stmt1119));
                goto $l1098;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1123 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1122 = $tmp1123;
                    if (((panda$core$Bit) { stmt1122 == NULL }).value) {
                    {
                        {
                            tmp1141124 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1122));
                            {
                                tmp1161125 = tmp1141124;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1080));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1095));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1082));
                                }
                                return tmp1161125;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1095, ((panda$core$Object*) stmt1122));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1122));
                }
            }
            }
            }
        }
    }
    }
    $l1098:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1127 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1128 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1080);
        panda$collections$ImmutableArray* $tmp1129 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1095);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1127, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1076.value).position, $tmp1128, $tmp1129);
        tmp1171126 = $tmp1127;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1080));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1095));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1082));
        }
        return tmp1171126;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1130;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1131;
    org$pandalanguage$pandac$ASTNode* expr1134;
    org$pandalanguage$pandac$ASTNode* tmp1181136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1137;
    org$pandalanguage$pandac$ASTNode* tmp1191140;
    panda$collections$Array* whens1141;
    panda$collections$Array* other1143;
    org$pandalanguage$pandac$parser$Token token1146;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131148;
    org$pandalanguage$pandac$ASTNode* w1151;
    org$pandalanguage$pandac$ASTNode* tmp1201153;
    org$pandalanguage$pandac$parser$Token o1155;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1157;
    org$pandalanguage$pandac$ASTNode* tmp1211160;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251164;
    org$pandalanguage$pandac$ASTNode* stmt1176;
    org$pandalanguage$pandac$ASTNode* tmp1221178;
    org$pandalanguage$pandac$ASTNode* stmt1179;
    org$pandalanguage$pandac$ASTNode* tmp1231181;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1189;
    org$pandalanguage$pandac$ASTNode* tmp1241192;
    org$pandalanguage$pandac$ASTNode* tmp1251193;
    org$pandalanguage$pandac$ASTNode* tmp1261197;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1131, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1133 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1131, &$s1132);
    start1130 = $tmp1133;
    if (((panda$core$Bit) { !start1130.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1135 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1134 = $tmp1135;
    if (((panda$core$Bit) { expr1134 == NULL }).value) {
    {
        {
            tmp1181136 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
            return tmp1181136;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1137, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1139 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1137, &$s1138);
    if (((panda$core$Bit) { !$tmp1139.nonnull }).value) {
    {
        {
            tmp1191140 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
            return tmp1191140;
        }
    }
    }
    panda$collections$Array* $tmp1142 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1142);
    whens1141 = $tmp1142;
    other1143 = NULL;
    $l1144:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1147 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1146 = $tmp1147;
        {
            $match$1155_131148 = token1146.kind;
            panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131148.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1149.value) {
            {
                goto $l1145;
            }
            }
            else {
            panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131148.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1150.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1152 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1151 = $tmp1152;
                if (((panda$core$Bit) { w1151 == NULL }).value) {
                {
                    {
                        tmp1201153 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1141));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
                        }
                        return tmp1201153;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1141, ((panda$core$Object*) w1151));
            }
            }
            else {
            panda$core$Bit $tmp1154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131148.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1154.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1156 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1155 = $tmp1156;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1157, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1159 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1157, &$s1158);
                if (((panda$core$Bit) { !$tmp1159.nonnull }).value) {
                {
                    {
                        tmp1211160 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1141));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
                        }
                        return tmp1211160;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
                    panda$collections$Array* $tmp1161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1161);
                    other1143 = $tmp1161;
                }
                $l1162:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1165 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251164 = $tmp1165.kind;
                        panda$core$Bit $tmp1166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251164.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1166.value) {
                        {
                            goto $l1163;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251164.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1168 = $tmp1169.value;
                        if ($tmp1168) goto $l1170;
                        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251164.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1168 = $tmp1171.value;
                        $l1170:;
                        panda$core$Bit $tmp1172 = { $tmp1168 };
                        bool $tmp1167 = $tmp1172.value;
                        if ($tmp1167) goto $l1173;
                        panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251164.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1167 = $tmp1174.value;
                        $l1173:;
                        panda$core$Bit $tmp1175 = { $tmp1167 };
                        if ($tmp1175.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1177 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1176 = $tmp1177;
                            if (((panda$core$Bit) { stmt1176 == NULL }).value) {
                            {
                                {
                                    tmp1221178 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1141));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
                                    }
                                    return tmp1221178;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1143, ((panda$core$Object*) stmt1176));
                            goto $l1163;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1180 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1179 = $tmp1180;
                            if (((panda$core$Bit) { stmt1179 == NULL }).value) {
                            {
                                {
                                    tmp1231181 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1141));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
                                    }
                                    return tmp1231181;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1143, ((panda$core$Object*) stmt1179));
                        }
                        }
                        }
                    }
                }
                }
                $l1163:;
                goto $l1145;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1184 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1146);
                panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1183, $tmp1184);
                panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, &$s1186);
                panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1182, $tmp1187);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1146, $tmp1188);
            }
            }
            }
            }
        }
    }
    }
    $l1145:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1189, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1191 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1189, &$s1190);
    if (((panda$core$Bit) { !$tmp1191.nonnull }).value) {
    {
        {
            tmp1241192 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
            }
            return tmp1241192;
        }
    }
    }
    if (((panda$core$Bit) { other1143 != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1194 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp1195 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1141);
            panda$collections$ImmutableArray* $tmp1196 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1143);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1194, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1130.value).position, expr1134, $tmp1195, $tmp1196);
            tmp1251193 = $tmp1194;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
            }
            return tmp1251193;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1198 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1199 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1141);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1198, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1130.value).position, expr1134, $tmp1199, NULL);
        tmp1261197 = $tmp1198;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1141));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1134));
        }
        return tmp1261197;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1201;
    panda$collections$Array* result1204;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131208;
    org$pandalanguage$pandac$ASTNode* stmt1220;
    panda$collections$ImmutableArray* tmp1271222;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1223;
    panda$collections$ImmutableArray* tmp1281226;
    org$pandalanguage$pandac$ASTNode* stmt1227;
    panda$collections$ImmutableArray* tmp1291229;
    panda$collections$ImmutableArray* tmp1301230;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1201, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1203 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1201, &$s1202);
    start1200 = $tmp1203;
    if (((panda$core$Bit) { !start1200.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1205 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1205);
    result1204 = $tmp1205;
    $l1206:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1209 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131208 = $tmp1209.kind;
            panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131208.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1210.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1207;
            }
            }
            else {
            panda$core$Bit $tmp1213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131208.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1212 = $tmp1213.value;
            if ($tmp1212) goto $l1214;
            panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131208.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1212 = $tmp1215.value;
            $l1214:;
            panda$core$Bit $tmp1216 = { $tmp1212 };
            bool $tmp1211 = $tmp1216.value;
            if ($tmp1211) goto $l1217;
            panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131208.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1211 = $tmp1218.value;
            $l1217:;
            panda$core$Bit $tmp1219 = { $tmp1211 };
            if ($tmp1219.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1221 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1220 = $tmp1221;
                if (((panda$core$Bit) { stmt1220 == NULL }).value) {
                {
                    {
                        tmp1271222 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1204));
                        return tmp1271222;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1223, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1225 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1223, &$s1224);
                if (((panda$core$Bit) { !$tmp1225.nonnull }).value) {
                {
                    {
                        tmp1281226 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1204));
                        return tmp1281226;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1204, ((panda$core$Object*) stmt1220));
                goto $l1207;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1228 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1227 = $tmp1228;
                if (((panda$core$Bit) { stmt1227 == NULL }).value) {
                {
                    {
                        tmp1291229 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1204));
                        return tmp1291229;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1204, ((panda$core$Object*) stmt1227));
            }
            }
            }
        }
    }
    }
    $l1207:;
    {
        panda$collections$ImmutableArray* $tmp1231 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1204);
        tmp1301230 = $tmp1231;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1204));
        return tmp1301230;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1232;
    org$pandalanguage$pandac$ASTNode* tmp1311234;
    org$pandalanguage$pandac$ASTNode* tmp1321235;
    org$pandalanguage$pandac$Position $tmp1237;
    panda$collections$ImmutableArray* $tmp1233 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    statements1232 = $tmp1233;
    if (((panda$core$Bit) { statements1232 == NULL }).value) {
    {
        {
            tmp1311234 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1232));
            return tmp1311234;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1236 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp1237);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1236, ((panda$core$Int64) { 4 }), $tmp1237, statements1232);
        tmp1321235 = $tmp1236;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1232));
        return tmp1321235;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1238;
    org$pandalanguage$pandac$ASTNode* tmp1331240;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91241;
    org$pandalanguage$pandac$parser$Token op1304;
    org$pandalanguage$pandac$ASTNode* rvalue1306;
    org$pandalanguage$pandac$ASTNode* tmp1341308;
    org$pandalanguage$pandac$ASTNode* tmp1351309;
    org$pandalanguage$pandac$parser$Token op1316;
    org$pandalanguage$pandac$ASTNode* rvalue1318;
    org$pandalanguage$pandac$ASTNode* tmp1361320;
    org$pandalanguage$pandac$ASTNode* tmp1371321;
    org$pandalanguage$pandac$ASTNode* tmp1381325;
    org$pandalanguage$pandac$ASTNode* $tmp1239 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1238 = $tmp1239;
    if (((panda$core$Bit) { start1238 == NULL }).value) {
    {
        {
            tmp1331240 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1238));
            return tmp1331240;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1242 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91241 = $tmp1242.kind;
        panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1257 = $tmp1258.value;
        if ($tmp1257) goto $l1259;
        panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1257 = $tmp1260.value;
        $l1259:;
        panda$core$Bit $tmp1261 = { $tmp1257 };
        bool $tmp1256 = $tmp1261.value;
        if ($tmp1256) goto $l1262;
        panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1256 = $tmp1263.value;
        $l1262:;
        panda$core$Bit $tmp1264 = { $tmp1256 };
        bool $tmp1255 = $tmp1264.value;
        if ($tmp1255) goto $l1265;
        panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1255 = $tmp1266.value;
        $l1265:;
        panda$core$Bit $tmp1267 = { $tmp1255 };
        bool $tmp1254 = $tmp1267.value;
        if ($tmp1254) goto $l1268;
        panda$core$Bit $tmp1269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1254 = $tmp1269.value;
        $l1268:;
        panda$core$Bit $tmp1270 = { $tmp1254 };
        bool $tmp1253 = $tmp1270.value;
        if ($tmp1253) goto $l1271;
        panda$core$Bit $tmp1272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1253 = $tmp1272.value;
        $l1271:;
        panda$core$Bit $tmp1273 = { $tmp1253 };
        bool $tmp1252 = $tmp1273.value;
        if ($tmp1252) goto $l1274;
        panda$core$Bit $tmp1275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1252 = $tmp1275.value;
        $l1274:;
        panda$core$Bit $tmp1276 = { $tmp1252 };
        bool $tmp1251 = $tmp1276.value;
        if ($tmp1251) goto $l1277;
        panda$core$Bit $tmp1278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1251 = $tmp1278.value;
        $l1277:;
        panda$core$Bit $tmp1279 = { $tmp1251 };
        bool $tmp1250 = $tmp1279.value;
        if ($tmp1250) goto $l1280;
        panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1250 = $tmp1281.value;
        $l1280:;
        panda$core$Bit $tmp1282 = { $tmp1250 };
        bool $tmp1249 = $tmp1282.value;
        if ($tmp1249) goto $l1283;
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1249 = $tmp1284.value;
        $l1283:;
        panda$core$Bit $tmp1285 = { $tmp1249 };
        bool $tmp1248 = $tmp1285.value;
        if ($tmp1248) goto $l1286;
        panda$core$Bit $tmp1287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1248 = $tmp1287.value;
        $l1286:;
        panda$core$Bit $tmp1288 = { $tmp1248 };
        bool $tmp1247 = $tmp1288.value;
        if ($tmp1247) goto $l1289;
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1247 = $tmp1290.value;
        $l1289:;
        panda$core$Bit $tmp1291 = { $tmp1247 };
        bool $tmp1246 = $tmp1291.value;
        if ($tmp1246) goto $l1292;
        panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1246 = $tmp1293.value;
        $l1292:;
        panda$core$Bit $tmp1294 = { $tmp1246 };
        bool $tmp1245 = $tmp1294.value;
        if ($tmp1245) goto $l1295;
        panda$core$Bit $tmp1296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1245 = $tmp1296.value;
        $l1295:;
        panda$core$Bit $tmp1297 = { $tmp1245 };
        bool $tmp1244 = $tmp1297.value;
        if ($tmp1244) goto $l1298;
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1244 = $tmp1299.value;
        $l1298:;
        panda$core$Bit $tmp1300 = { $tmp1244 };
        bool $tmp1243 = $tmp1300.value;
        if ($tmp1243) goto $l1301;
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1243 = $tmp1302.value;
        $l1301:;
        panda$core$Bit $tmp1303 = { $tmp1243 };
        if ($tmp1303.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1305 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1304 = $tmp1305;
            org$pandalanguage$pandac$ASTNode* $tmp1307 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1306 = $tmp1307;
            if (((panda$core$Bit) { rvalue1306 == NULL }).value) {
            {
                {
                    tmp1341308 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1238));
                    return tmp1341308;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1310 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$Position $tmp1312 = (($fn1311) start1238->$class->vtable[2])(start1238);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1310, ((panda$core$Int64) { 2 }), $tmp1312, start1238, op1304.kind, rvalue1306);
                tmp1351309 = $tmp1310;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1238));
                return tmp1351309;
            }
        }
        }
        else {
        panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91241.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1313.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1314 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1314, &$s1315);
            org$pandalanguage$pandac$parser$Token $tmp1317 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1316 = $tmp1317;
            org$pandalanguage$pandac$ASTNode* $tmp1319 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1318 = $tmp1319;
            if (((panda$core$Bit) { rvalue1318 == NULL }).value) {
            {
                {
                    tmp1361320 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1238));
                    return tmp1361320;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1322 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$Position $tmp1324 = (($fn1323) start1238->$class->vtable[2])(start1238);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1322, ((panda$core$Int64) { 2 }), $tmp1324, start1238, op1316.kind, rvalue1318);
                tmp1371321 = $tmp1322;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1238));
                return tmp1371321;
            }
        }
        }
        else {
        {
            {
                tmp1381325 = start1238;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1238));
                return tmp1381325;
            }
        }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1238));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1326;
    org$pandalanguage$pandac$ASTNode* tmp1391328;
    org$pandalanguage$pandac$ASTNode* value1329;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1330;
    org$pandalanguage$pandac$ASTNode* tmp1401333;
    org$pandalanguage$pandac$ASTNode* tmp1411339;
    org$pandalanguage$pandac$ASTNode* tmp1421340;
    org$pandalanguage$pandac$ASTNode* $tmp1327 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1326 = $tmp1327;
    if (((panda$core$Bit) { t1326 == NULL }).value) {
    {
        {
            tmp1391328 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1326));
            return tmp1391328;
        }
    }
    }
    memset(&value1329, 0, sizeof(value1329));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1330, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1331 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1330);
    if (((panda$core$Bit) { $tmp1331.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1332 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1329 = $tmp1332;
        }
        if (((panda$core$Bit) { value1329 == NULL }).value) {
        {
            {
                tmp1401333 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1326));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1329));
                }
                return tmp1401333;
            }
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1334 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1334.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1335.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1336 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1336, &$s1337);
        {
            org$pandalanguage$pandac$ASTNode* $tmp1338 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1329 = $tmp1338;
        }
        if (((panda$core$Bit) { value1329 == NULL }).value) {
        {
            {
                tmp1411339 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1326));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1329));
                }
                return tmp1411339;
            }
        }
        }
    }
    }
    else {
    {
        {
            value1329 = NULL;
        }
    }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1341 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp1343 = (($fn1342) t1326->$class->vtable[2])(t1326);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1341, ((panda$core$Int64) { 11 }), $tmp1343, t1326, value1329);
        tmp1421340 = $tmp1341;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1329));
        }
        return tmp1421340;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1344;
    org$pandalanguage$pandac$Variable$Kind kind1346;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91347;
    org$pandalanguage$pandac$Variable$Kind $tmp1349;
    org$pandalanguage$pandac$Variable$Kind $tmp1351;
    org$pandalanguage$pandac$Variable$Kind $tmp1353;
    org$pandalanguage$pandac$Variable$Kind $tmp1355;
    panda$collections$Array* declarations1357;
    org$pandalanguage$pandac$ASTNode* decl1359;
    org$pandalanguage$pandac$ASTNode* tmp1431361;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1364;
    org$pandalanguage$pandac$ASTNode* decl1366;
    org$pandalanguage$pandac$ASTNode* tmp1441368;
    org$pandalanguage$pandac$ASTNode* tmp1451369;
    org$pandalanguage$pandac$ASTNode* tmp1461370;
    org$pandalanguage$pandac$parser$Token $tmp1345 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1344 = $tmp1345;
    memset(&kind1346, 0, sizeof(kind1346));
    {
        $match$1318_91347 = start1344.kind;
        panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91347.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1348.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1349, ((panda$core$Int64) { 0 }));
            kind1346 = $tmp1349;
        }
        }
        else {
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91347.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1350.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1351, ((panda$core$Int64) { 1 }));
            kind1346 = $tmp1351;
        }
        }
        else {
        panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91347.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1352.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1353, ((panda$core$Int64) { 3 }));
            kind1346 = $tmp1353;
        }
        }
        else {
        panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91347.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1354.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1355, ((panda$core$Int64) { 2 }));
            kind1346 = $tmp1355;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1344, &$s1356);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1358 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1358);
    declarations1357 = $tmp1358;
    org$pandalanguage$pandac$ASTNode* $tmp1360 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1359 = $tmp1360;
    if (((panda$core$Bit) { decl1359 == NULL }).value) {
    {
        {
            tmp1431361 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1359));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1357));
            }
            return tmp1431361;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1357, ((panda$core$Object*) decl1359));
    $l1362:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1364, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1365 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1364);
    if (!((panda$core$Bit) { $tmp1365.nonnull }).value) goto $l1363;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1367 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        decl1366 = $tmp1367;
        if (((panda$core$Bit) { decl1366 == NULL }).value) {
        {
            {
                tmp1441368 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1366));
                {
                    tmp1451369 = tmp1441368;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1359));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1357));
                    }
                    return tmp1451369;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1357, ((panda$core$Object*) decl1366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1366));
    }
    goto $l1362;
    $l1363:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1371 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1372 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1357);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1371, ((panda$core$Int64) { 38 }), start1344.position, kind1346, $tmp1372);
        tmp1461370 = $tmp1371;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1357));
        }
        return tmp1461370;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1373;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1374;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1377;
    org$pandalanguage$pandac$ASTNode* target1381;
    panda$collections$Array* args1384;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1386;
    org$pandalanguage$pandac$ASTNode* expr1388;
    org$pandalanguage$pandac$ASTNode* tmp1471391;
    org$pandalanguage$pandac$ASTNode* tmp1501392;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1395;
    org$pandalanguage$pandac$ASTNode* tmp1481399;
    org$pandalanguage$pandac$ASTNode* tmp1511400;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1401;
    org$pandalanguage$pandac$ASTNode* tmp1491405;
    org$pandalanguage$pandac$ASTNode* tmp1521406;
    org$pandalanguage$pandac$ASTNode* tmp1531408;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1374, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1376 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1374, &$s1375);
    start1373 = $tmp1376;
    if (((panda$core$Bit) { !start1373.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1377, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1379 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1377, &$s1378);
    if (((panda$core$Bit) { !$tmp1379.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1380;
    $tmp1380 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp1380->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1380));
    org$pandalanguage$pandac$ASTNode* $tmp1382 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1383 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1373.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1382, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1373.value).position, $tmp1383);
    target1381 = $tmp1382;
    panda$collections$Array* $tmp1385 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1385);
    args1384 = $tmp1385;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1386, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1387 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1386);
    if (((panda$core$Bit) { !$tmp1387.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1389 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1388 = $tmp1389;
        if (((panda$core$Bit) { expr1388 == NULL }).value) {
        {
            panda$core$Object* $tmp1390 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1471391 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1388));
                {
                    tmp1501392 = tmp1471391;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1381));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1384));
                    }
                    return tmp1501392;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1384, ((panda$core$Object*) expr1388));
        $l1393:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1395, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1396 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1395);
        if (!((panda$core$Bit) { $tmp1396.nonnull }).value) goto $l1394;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1388));
                org$pandalanguage$pandac$ASTNode* $tmp1397 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr1388 = $tmp1397;
            }
            if (((panda$core$Bit) { expr1388 == NULL }).value) {
            {
                panda$core$Object* $tmp1398 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    tmp1481399 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1388));
                    {
                        tmp1511400 = tmp1481399;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1381));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1384));
                        }
                        return tmp1511400;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1384, ((panda$core$Object*) expr1388));
        }
        goto $l1393;
        $l1394:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1401, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1403 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1401, &$s1402);
        if (((panda$core$Bit) { !$tmp1403.nonnull }).value) {
        {
            panda$core$Object* $tmp1404 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1491405 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1388));
                {
                    tmp1521406 = tmp1491405;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1381));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1384));
                    }
                    return tmp1521406;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1388));
    }
    }
    panda$core$Object* $tmp1407 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    {
        org$pandalanguage$pandac$ASTNode* $tmp1409 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp1410 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1384);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1409, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1373.value).position, target1381, $tmp1410);
        tmp1531408 = $tmp1409;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1384));
        }
        return tmp1531408;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1411;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1412;
    org$pandalanguage$pandac$parser$Token$nullable label1415;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1416;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1412, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1414 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1412, &$s1413);
    start1411 = $tmp1414;
    if (((panda$core$Bit) { !start1411.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1416, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1417 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1416);
    label1415 = $tmp1417;
    if (((panda$core$Bit) { label1415.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1418 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1419 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1415.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1418, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1411.value).position, $tmp1419);
        return $tmp1418;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1420 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1420, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1411.value).position, NULL);
    return $tmp1420;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1421;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1422;
    org$pandalanguage$pandac$parser$Token$nullable label1425;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1426;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1422, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1424 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1422, &$s1423);
    start1421 = $tmp1424;
    if (((panda$core$Bit) { !start1421.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1426, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1427 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1426);
    label1425 = $tmp1427;
    if (((panda$core$Bit) { label1425.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1428 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1429 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1425.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1428, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1421.value).position, $tmp1429);
        return $tmp1428;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1430 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1430, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1421.value).position, NULL);
    return $tmp1430;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1431;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1432;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_91435;
    panda$collections$Array* children1447;
    org$pandalanguage$pandac$ASTNode* expr1449;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1432, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1434 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1432, &$s1433);
    start1431 = $tmp1434;
    if (((panda$core$Bit) { !start1431.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1436 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_91435 = $tmp1436.kind;
        panda$core$Bit $tmp1439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91435.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1438 = $tmp1439.value;
        if ($tmp1438) goto $l1440;
        panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91435.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1438 = $tmp1441.value;
        $l1440:;
        panda$core$Bit $tmp1442 = { $tmp1438 };
        bool $tmp1437 = $tmp1442.value;
        if ($tmp1437) goto $l1443;
        panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91435.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1437 = $tmp1444.value;
        $l1443:;
        panda$core$Bit $tmp1445 = { $tmp1437 };
        if ($tmp1445.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1446 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1446, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1431.value).position, NULL);
            return $tmp1446;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1448 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1448);
            children1447 = $tmp1448;
            org$pandalanguage$pandac$ASTNode* $tmp1450 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1449 = $tmp1450;
            if (((panda$core$Bit) { expr1449 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1447, ((panda$core$Object*) expr1449));
            org$pandalanguage$pandac$ASTNode* $tmp1451 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1451, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1431.value).position, expr1449);
            return $tmp1451;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_91452;
    {
        org$pandalanguage$pandac$parser$Token $tmp1453 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_91452 = $tmp1453.kind;
        panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91452.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1454.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1455 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1455;
        }
        }
        else {
        panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91452.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1456.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1457 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1457;
        }
        }
        else {
        panda$core$Bit $tmp1458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91452.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1458.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1459 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1459;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_91460;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1470;
    {
        org$pandalanguage$pandac$parser$Token $tmp1461 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_91460 = $tmp1461.kind;
        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91460.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1462.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1463 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1463;
        }
        }
        else {
        panda$core$Bit $tmp1464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91460.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1464.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1465 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1465;
        }
        }
        else {
        panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91460.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1466.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1467 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1467;
        }
        }
        else {
        panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91460.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1468.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1469 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1469;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1470, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1470, &$s1471);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_91472;
    org$pandalanguage$pandac$parser$Token id1491;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1493;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1520;
    {
        org$pandalanguage$pandac$parser$Token $tmp1473 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_91472 = $tmp1473.kind;
        panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1474.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1475 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1475;
        }
        }
        else {
        panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1476.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1477 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1477;
        }
        }
        else {
        panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1478.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1479 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1479;
        }
        }
        else {
        panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1480.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1481 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1481;
        }
        }
        else {
        panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1482.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1483 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1483;
        }
        }
        else {
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1484.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1485 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1485;
        }
        }
        else {
        panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1486.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1487 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1487;
        }
        }
        else {
        panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1488.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1489 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1489;
        }
        }
        else {
        panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1490.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1492 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1491 = $tmp1492;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1493, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1494 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1493);
            if (((panda$core$Bit) { $tmp1494.nonnull }).value) {
            {
                panda$core$String* $tmp1495 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1491);
                org$pandalanguage$pandac$ASTNode* $tmp1496 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1495);
                return $tmp1496;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1491);
            org$pandalanguage$pandac$ASTNode* $tmp1497 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1497;
        }
        }
        else {
        panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1498 = $tmp1499.value;
        if ($tmp1498) goto $l1500;
        panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1498 = $tmp1501.value;
        $l1500:;
        panda$core$Bit $tmp1502 = { $tmp1498 };
        if ($tmp1502.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1503 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1503;
        }
        }
        else {
        panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1506 = $tmp1507.value;
        if ($tmp1506) goto $l1508;
        panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1506 = $tmp1509.value;
        $l1508:;
        panda$core$Bit $tmp1510 = { $tmp1506 };
        bool $tmp1505 = $tmp1510.value;
        if ($tmp1505) goto $l1511;
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1505 = $tmp1512.value;
        $l1511:;
        panda$core$Bit $tmp1513 = { $tmp1505 };
        bool $tmp1504 = $tmp1513.value;
        if ($tmp1504) goto $l1514;
        panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1504 = $tmp1515.value;
        $l1514:;
        panda$core$Bit $tmp1516 = { $tmp1504 };
        if ($tmp1516.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1517 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1517;
        }
        }
        else {
        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91472.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1518.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1519 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1519;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1520, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1520, &$s1521);
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
    org$pandalanguage$pandac$parser$Token$nullable start1522;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1523;
    org$pandalanguage$pandac$parser$Token$nullable next1526;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1527;
    panda$core$MutableString* name1530;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1535;
    panda$core$Char8 $tmp1537;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1538;
    org$pandalanguage$pandac$ASTNode* tmp1541541;
    org$pandalanguage$pandac$ASTNode* tmp1551543;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1523, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1525 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1523, &$s1524);
    start1522 = $tmp1525;
    if (((panda$core$Bit) { !start1522.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1527, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1529 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1527, &$s1528);
    next1526 = $tmp1529;
    if (((panda$core$Bit) { !next1526.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1531 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp1532 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1526.value));
    panda$core$MutableString$init$panda$core$String($tmp1531, $tmp1532);
    name1530 = $tmp1531;
    $l1533:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1535, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1536 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1535);
        next1526 = $tmp1536;
        if (((panda$core$Bit) { !next1526.nonnull }).value) {
        {
            goto $l1534;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1537, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1530, $tmp1537);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1538, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1540 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1538, &$s1539);
        next1526 = $tmp1540;
        if (((panda$core$Bit) { !next1526.nonnull }).value) {
        {
            {
                tmp1541541 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1530));
                return tmp1541541;
            }
        }
        }
        panda$core$String* $tmp1542 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1526.value));
        panda$core$MutableString$append$panda$core$String(name1530, $tmp1542);
    }
    }
    $l1534:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1544 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1545 = panda$core$MutableString$finish$R$panda$core$String(name1530);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1544, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start1522.value).position, $tmp1545);
        tmp1551543 = $tmp1544;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1530));
        return tmp1551543;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1546;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1547;
    org$pandalanguage$pandac$parser$Token$nullable next1550;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1551;
    panda$core$MutableString* name1554;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1559;
    panda$core$Char8 $tmp1561;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1562;
    org$pandalanguage$pandac$ASTNode* tmp1561565;
    org$pandalanguage$pandac$ASTNode* tmp1571567;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1547, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1549 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1547, &$s1548);
    start1546 = $tmp1549;
    if (((panda$core$Bit) { !start1546.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1551, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1553 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1551, &$s1552);
    next1550 = $tmp1553;
    if (((panda$core$Bit) { !next1550.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1555 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$String* $tmp1556 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1550.value));
    panda$core$MutableString$init$panda$core$String($tmp1555, $tmp1556);
    name1554 = $tmp1555;
    $l1557:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1559, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1560 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1559);
        next1550 = $tmp1560;
        if (((panda$core$Bit) { !next1550.nonnull }).value) {
        {
            goto $l1558;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1561, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1554, $tmp1561);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1562, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1564 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1562, &$s1563);
        next1550 = $tmp1564;
        if (((panda$core$Bit) { !next1550.nonnull }).value) {
        {
            {
                tmp1561565 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1554));
                return tmp1561565;
            }
        }
        }
        panda$core$String* $tmp1566 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1550.value));
        panda$core$MutableString$append$panda$core$String(name1554, $tmp1566);
    }
    }
    $l1558:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1568 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1569 = panda$core$MutableString$finish$R$panda$core$String(name1554);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1568, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start1546.value).position, $tmp1569);
        tmp1571567 = $tmp1568;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1554));
        return tmp1571567;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1570;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1571;
    org$pandalanguage$pandac$parser$Token$nullable id1574;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1575;
    panda$collections$Array* parameters1578;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1580;
    org$pandalanguage$pandac$ASTNode* t1582;
    panda$collections$ImmutableArray* tmp1581584;
    panda$collections$ImmutableArray* tmp1591585;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1592;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1594;
    panda$collections$ImmutableArray* tmp1611597;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1598;
    org$pandalanguage$pandac$ASTNode* t1600;
    panda$collections$ImmutableArray* tmp1601602;
    panda$collections$ImmutableArray* tmp1621603;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1608;
    panda$collections$ImmutableArray* tmp1631611;
    panda$collections$ImmutableArray* tmp1641612;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1571, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1573 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1571, &$s1572);
    start1570 = $tmp1573;
    if (((panda$core$Bit) { !start1570.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1575, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1577 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1575, &$s1576);
    id1574 = $tmp1577;
    if (((panda$core$Bit) { !id1574.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1579 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1579);
    parameters1578 = $tmp1579;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1580, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1581 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1580);
    if (((panda$core$Bit) { $tmp1581.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1583 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1582 = $tmp1583;
        if (((panda$core$Bit) { t1582 == NULL }).value) {
        {
            {
                tmp1581584 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1582));
                {
                    tmp1591585 = tmp1581584;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1578));
                    return tmp1591585;
                }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1586 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1587 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1574.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1586, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1574.value).position, $tmp1587, t1582);
        panda$collections$Array$add$panda$collections$Array$T(parameters1578, ((panda$core$Object*) $tmp1586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1582));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1588 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1589 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1574.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1588, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1574.value).position, $tmp1589);
        panda$collections$Array$add$panda$collections$Array$T(parameters1578, ((panda$core$Object*) $tmp1588));
    }
    }
    $l1590:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1592, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1593 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1592);
    if (!((panda$core$Bit) { $tmp1593.nonnull }).value) goto $l1591;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1594, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1596 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1594, &$s1595);
        id1574 = $tmp1596;
        if (((panda$core$Bit) { !id1574.nonnull }).value) {
        {
            {
                tmp1611597 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1578));
                return tmp1611597;
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1598, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1599 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1598);
        if (((panda$core$Bit) { $tmp1599.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1601 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1600 = $tmp1601;
            if (((panda$core$Bit) { t1600 == NULL }).value) {
            {
                {
                    tmp1601602 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1600));
                    {
                        tmp1621603 = tmp1601602;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1578));
                        return tmp1621603;
                    }
                }
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1604 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1605 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1574.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1604, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1574.value).position, $tmp1605, t1600);
            panda$collections$Array$add$panda$collections$Array$T(parameters1578, ((panda$core$Object*) $tmp1604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1600));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1606 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1607 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1574.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1606, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1574.value).position, $tmp1607);
            panda$collections$Array$add$panda$collections$Array$T(parameters1578, ((panda$core$Object*) $tmp1606));
        }
        }
    }
    goto $l1590;
    $l1591:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1608, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1610 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1608, &$s1609);
    if (((panda$core$Bit) { !$tmp1610.nonnull }).value) {
    {
        {
            tmp1631611 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1578));
            return tmp1631611;
        }
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1613 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1578);
        tmp1641612 = $tmp1613;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1578));
        return tmp1641612;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1614;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1615;
    panda$collections$Array* result1618;
    org$pandalanguage$pandac$ASTNode* t1620;
    panda$collections$ImmutableArray* tmp1651622;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1625;
    panda$collections$ImmutableArray* tmp1661628;
    panda$collections$ImmutableArray* tmp1671629;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1615, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1617 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1615, &$s1616);
    start1614 = $tmp1617;
    if (((panda$core$Bit) { !start1614.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1619 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1619);
    result1618 = $tmp1619;
    org$pandalanguage$pandac$ASTNode* $tmp1621 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1620 = $tmp1621;
    if (((panda$core$Bit) { t1620 == NULL }).value) {
    {
        {
            tmp1651622 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1620));
            }
            return tmp1651622;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1618, ((panda$core$Object*) t1620));
    $l1623:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1625, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1626 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1625);
    if (!((panda$core$Bit) { $tmp1626.nonnull }).value) goto $l1624;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1620));
            org$pandalanguage$pandac$ASTNode* $tmp1627 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1620 = $tmp1627;
        }
        if (((panda$core$Bit) { t1620 == NULL }).value) {
        {
            {
                tmp1661628 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1618));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1620));
                }
                return tmp1661628;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1618, ((panda$core$Object*) t1620));
    }
    goto $l1623;
    $l1624:;
    {
        panda$collections$ImmutableArray* $tmp1630 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1618);
        tmp1671629 = $tmp1630;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1618));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1620));
        }
        return tmp1671629;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1631;
    org$pandalanguage$pandac$parser$Token$nullable next1635;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1636;
    panda$collections$ImmutableArray* tmp1681640;
    panda$collections$Array* $tmp1632 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1632);
    result1631 = $tmp1632;
    $l1633:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1636, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1637 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1636);
        next1635 = $tmp1637;
        if (((panda$core$Bit) { !next1635.nonnull }).value) {
        {
            goto $l1634;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1638 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1639 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1635.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1638, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1635.value).position, $tmp1639);
        panda$collections$Array$add$panda$collections$Array$T(result1631, ((panda$core$Object*) $tmp1638));
    }
    }
    $l1634:;
    {
        panda$collections$ImmutableArray* $tmp1641 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1631);
        tmp1681640 = $tmp1641;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1631));
        return tmp1681640;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1642;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1643;
    panda$core$MutableString* result1646;
    org$pandalanguage$pandac$parser$Token next1650;
    org$pandalanguage$pandac$ASTNode* tmp1691655;
    org$pandalanguage$pandac$ASTNode* tmp1701657;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1643, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1645 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1643, &$s1644);
    start1642 = $tmp1645;
    if (((panda$core$Bit) { !start1642.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1647 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp1647);
    result1646 = $tmp1647;
    $l1648:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1651 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1650 = $tmp1651;
        panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1650.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1652.value) {
        {
            goto $l1649;
        }
        }
        panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1650.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1653.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1642.value), &$s1654);
            {
                tmp1691655 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1646));
                return tmp1691655;
            }
        }
        }
        panda$core$String* $tmp1656 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1650);
        panda$core$MutableString$append$panda$core$String(result1646, $tmp1656);
    }
    }
    $l1649:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1658 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1659 = panda$core$MutableString$finish$R$panda$core$String(result1646);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1658, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$parser$Token) start1642.value).position, $tmp1659);
        tmp1701657 = $tmp1658;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1646));
        return tmp1701657;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1660;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1661;
    org$pandalanguage$pandac$ASTNode* t1664;
    org$pandalanguage$pandac$ASTNode* tmp1711666;
    org$pandalanguage$pandac$ASTNode* tmp1721667;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1661, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1663 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1661, &$s1662);
    id1660 = $tmp1663;
    if (((panda$core$Bit) { !id1660.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1665 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1664 = $tmp1665;
    if (((panda$core$Bit) { t1664 == NULL }).value) {
    {
        {
            tmp1711666 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1664));
            return tmp1711666;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1668 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1669 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1660.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1668, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) id1660.value).position, $tmp1669, t1664);
        tmp1721667 = $tmp1668;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1664));
        return tmp1721667;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1670;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1671;
    panda$collections$Array* result1674;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1676;
    org$pandalanguage$pandac$ASTNode* param1678;
    panda$collections$ImmutableArray* tmp1731680;
    panda$collections$ImmutableArray* tmp1761681;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1684;
    panda$collections$ImmutableArray* tmp1741687;
    panda$collections$ImmutableArray* tmp1771688;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1689;
    panda$collections$ImmutableArray* tmp1751692;
    panda$collections$ImmutableArray* tmp1781693;
    panda$collections$ImmutableArray* tmp1791694;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1671, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1673 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1671, &$s1672);
    start1670 = $tmp1673;
    if (((panda$core$Bit) { !start1670.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1675 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1675);
    result1674 = $tmp1675;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1676, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1677 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1676);
    if (((panda$core$Bit) { !$tmp1677.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1679 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1678 = $tmp1679;
        if (((panda$core$Bit) { param1678 == NULL }).value) {
        {
            {
                tmp1731680 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1678));
                {
                    tmp1761681 = tmp1731680;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1674));
                    return tmp1761681;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1674, ((panda$core$Object*) param1678));
        $l1682:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1684, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1685 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1684);
        if (!((panda$core$Bit) { $tmp1685.nonnull }).value) goto $l1683;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1686 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                param1678 = $tmp1686;
            }
            if (((panda$core$Bit) { param1678 == NULL }).value) {
            {
                {
                    tmp1741687 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1678));
                    {
                        tmp1771688 = tmp1741687;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1674));
                        return tmp1771688;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1674, ((panda$core$Object*) param1678));
        }
        goto $l1682;
        $l1683:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1689, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1691 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1689, &$s1690);
        if (((panda$core$Bit) { !$tmp1691.nonnull }).value) {
        {
            {
                tmp1751692 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1678));
                {
                    tmp1781693 = tmp1751692;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1674));
                    return tmp1781693;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1678));
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1695 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1674);
        tmp1791694 = $tmp1695;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1674));
        return tmp1791694;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1696;
    org$pandalanguage$pandac$parser$Token$nullable start1697;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1698;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1700;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1703;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1704;
    panda$core$String* name1705;
    org$pandalanguage$pandac$ASTNode* tmp1801707;
    panda$collections$ImmutableArray* params1708;
    org$pandalanguage$pandac$ASTNode* tmp1811710;
    org$pandalanguage$pandac$ASTNode* returnType1711;
    org$pandalanguage$pandac$ASTNode* tmp1821715;
    panda$collections$ImmutableArray* body1716;
    org$pandalanguage$pandac$ASTNode* tmp1831720;
    org$pandalanguage$pandac$parser$Token token1721;
    panda$core$String* tokenText1723;
    org$pandalanguage$pandac$ASTNode* post1736;
    org$pandalanguage$pandac$ASTNode* tmp1841738;
    org$pandalanguage$pandac$ASTNode* tmp1851739;
    org$pandalanguage$pandac$ASTNode* tmp1861740;
    memset(&kind1696, 0, sizeof(kind1696));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1698, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1699 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1698);
    start1697 = $tmp1699;
    if (((panda$core$Bit) { !start1697.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1700, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1702 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1700, &$s1701);
        start1697 = $tmp1702;
        if (((panda$core$Bit) { !start1697.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1703, ((panda$core$Int64) { 0 }));
        kind1696 = $tmp1703;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1704, ((panda$core$Int64) { 1 }));
        kind1696 = $tmp1704;
    }
    }
    panda$core$String* $tmp1706 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1705 = $tmp1706;
    if (((panda$core$Bit) { name1705 == NULL }).value) {
    {
        {
            tmp1801707 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1705));
            return tmp1801707;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1709 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1708 = $tmp1709;
    if (((panda$core$Bit) { params1708 == NULL }).value) {
    {
        {
            tmp1811710 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1705));
            }
            return tmp1811710;
        }
    }
    }
    memset(&returnType1711, 0, sizeof(returnType1711));
    org$pandalanguage$pandac$parser$Token $tmp1712 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1712.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1713.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1714 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            returnType1711 = $tmp1714;
        }
        if (((panda$core$Bit) { returnType1711 == NULL }).value) {
        {
            {
                tmp1821715 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1708));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1711));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1705));
                }
                return tmp1821715;
            }
        }
        }
    }
    }
    else {
    {
        {
            returnType1711 = NULL;
        }
    }
    }
    memset(&body1716, 0, sizeof(body1716));
    org$pandalanguage$pandac$parser$Token $tmp1717 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1717.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1718.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp1719 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            body1716 = $tmp1719;
        }
        if (((panda$core$Bit) { body1716 == NULL }).value) {
        {
            {
                tmp1831720 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1716));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1708));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1711));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1705));
                }
                return tmp1831720;
            }
        }
        }
    }
    }
    else {
    {
        {
            body1716 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1722 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1721 = $tmp1722;
    panda$core$String* $tmp1724 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1721);
    tokenText1723 = $tmp1724;
    panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1721.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1725 = $tmp1726.value;
    if (!$tmp1725) goto $l1727;
    panda$core$Bit $tmp1730 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1723, &$s1729);
    bool $tmp1728 = $tmp1730.value;
    if ($tmp1728) goto $l1731;
    panda$core$Bit $tmp1733 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1723, &$s1732);
    $tmp1728 = $tmp1733.value;
    $l1731:;
    panda$core$Bit $tmp1734 = { $tmp1728 };
    $tmp1725 = $tmp1734.value;
    $l1727:;
    panda$core$Bit $tmp1735 = { $tmp1725 };
    if ($tmp1735.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1737 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1736 = $tmp1737;
        if (((panda$core$Bit) { post1736 == NULL }).value) {
        {
            {
                tmp1841738 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1736));
                {
                    tmp1851739 = tmp1841738;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1716));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1708));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1723));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1711));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1705));
                    }
                    return tmp1851739;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1736));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1741 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1741, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1697.value).position, p_doccomment, p_annotations, kind1696, name1705, params1708, returnType1711, body1716);
        tmp1861740 = $tmp1741;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1716));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1708));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1723));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1711));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1705));
        }
        return tmp1861740;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1742;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1743;
    panda$collections$ImmutableArray* params1746;
    org$pandalanguage$pandac$ASTNode* tmp1871748;
    panda$collections$ImmutableArray* b1749;
    org$pandalanguage$pandac$ASTNode* tmp1881751;
    org$pandalanguage$pandac$parser$Token token1752;
    panda$core$String* tokenText1754;
    org$pandalanguage$pandac$ASTNode* post1767;
    org$pandalanguage$pandac$ASTNode* tmp1891769;
    org$pandalanguage$pandac$ASTNode* tmp1901770;
    org$pandalanguage$pandac$ASTNode* tmp1911771;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1773;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1743, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1745 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1743, &$s1744);
    start1742 = $tmp1745;
    if (((panda$core$Bit) { !start1742.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1747 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1746 = $tmp1747;
    if (((panda$core$Bit) { params1746 == NULL }).value) {
    {
        {
            tmp1871748 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1746));
            return tmp1871748;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1750 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    b1749 = $tmp1750;
    if (((panda$core$Bit) { b1749 == NULL }).value) {
    {
        {
            tmp1881751 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1746));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1749));
            }
            return tmp1881751;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1753 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1752 = $tmp1753;
    panda$core$String* $tmp1755 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1752);
    tokenText1754 = $tmp1755;
    panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1752.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1756 = $tmp1757.value;
    if (!$tmp1756) goto $l1758;
    panda$core$Bit $tmp1761 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1754, &$s1760);
    bool $tmp1759 = $tmp1761.value;
    if ($tmp1759) goto $l1762;
    panda$core$Bit $tmp1764 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1754, &$s1763);
    $tmp1759 = $tmp1764.value;
    $l1762:;
    panda$core$Bit $tmp1765 = { $tmp1759 };
    $tmp1756 = $tmp1765.value;
    $l1758:;
    panda$core$Bit $tmp1766 = { $tmp1756 };
    if ($tmp1766.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1768 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1767 = $tmp1768;
        if (((panda$core$Bit) { post1767 == NULL }).value) {
        {
            {
                tmp1891769 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1767));
                {
                    tmp1901770 = tmp1891769;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1746));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1754));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1749));
                    }
                    return tmp1901770;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1767));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1772 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1773, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1772, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1742.value).position, p_doccomment, p_annotations, $tmp1773, &$s1774, params1746, NULL, b1749);
        tmp1911771 = $tmp1772;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1746));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1754));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1749));
        }
        return tmp1911771;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1775;
    org$pandalanguage$pandac$ASTNode* tmp1921777;
    org$pandalanguage$pandac$ASTNode* tmp1931778;
    org$pandalanguage$pandac$ASTNode* $tmp1776 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1775 = $tmp1776;
    if (((panda$core$Bit) { decl1775 == NULL }).value) {
    {
        {
            tmp1921777 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1775));
            return tmp1921777;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1779 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp1781 = (($fn1780) decl1775->$class->vtable[2])(decl1775);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1779, ((panda$core$Int64) { 14 }), $tmp1781, p_doccomment, p_annotations, decl1775);
        tmp1931778 = $tmp1779;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1775));
        return tmp1931778;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1782;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1783;
    panda$collections$Array* fields1786;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1788;
    org$pandalanguage$pandac$ASTNode* field1792;
    org$pandalanguage$pandac$ASTNode* tmp1941794;
    org$pandalanguage$pandac$ASTNode* tmp1961795;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1798;
    org$pandalanguage$pandac$ASTNode* tmp1951801;
    org$pandalanguage$pandac$ASTNode* tmp1971802;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1803;
    org$pandalanguage$pandac$ASTNode* tmp1981806;
    org$pandalanguage$pandac$ASTNode* tmp1991807;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1783, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1785 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1783, &$s1784);
    name1782 = $tmp1785;
    if (((panda$core$Bit) { !name1782.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1787 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1787);
    fields1786 = $tmp1787;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1788, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1789 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1788);
    if (((panda$core$Bit) { $tmp1789.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1790 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1791 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1790.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1791.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1793 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1792 = $tmp1793;
            if (((panda$core$Bit) { field1792 == NULL }).value) {
            {
                {
                    tmp1941794 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1792));
                    {
                        tmp1961795 = tmp1941794;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1786));
                        return tmp1961795;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1786, ((panda$core$Object*) field1792));
            $l1796:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1798, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1799 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1798);
            if (!((panda$core$Bit) { $tmp1799.nonnull }).value) goto $l1797;
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1792));
                    org$pandalanguage$pandac$ASTNode* $tmp1800 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    field1792 = $tmp1800;
                }
                if (((panda$core$Bit) { field1792 == NULL }).value) {
                {
                    {
                        tmp1951801 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1792));
                        {
                            tmp1971802 = tmp1951801;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1786));
                            return tmp1971802;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1786, ((panda$core$Object*) field1792));
            }
            goto $l1796;
            $l1797:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1792));
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1803, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1805 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1803, &$s1804);
        if (((panda$core$Bit) { !$tmp1805.nonnull }).value) {
        {
            {
                tmp1981806 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1786));
                return tmp1981806;
            }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp1809 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1782.value));
        panda$collections$ImmutableArray* $tmp1810 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1786);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1808, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1782.value).position, p_doccomment, $tmp1809, $tmp1810);
        tmp1991807 = $tmp1808;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1786));
        return tmp1991807;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1811;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1812;
    org$pandalanguage$pandac$parser$Token$nullable name1815;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1816;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1819;
    panda$collections$Array* members1822;
    org$pandalanguage$pandac$ASTNode* dc1824;
    org$pandalanguage$pandac$parser$Token next1827;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_131829;
    org$pandalanguage$pandac$ASTNode* c1875;
    org$pandalanguage$pandac$ASTNode* tmp2001877;
    panda$collections$ImmutableArray* a1878;
    org$pandalanguage$pandac$parser$Token next1882;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_131884;
    org$pandalanguage$pandac$ASTNode* tmp2011893;
    org$pandalanguage$pandac$ASTNode* tmp2021906;
    org$pandalanguage$pandac$ASTNode* decl1909;
    org$pandalanguage$pandac$ASTNode* tmp2031911;
    org$pandalanguage$pandac$ASTNode* decl1914;
    org$pandalanguage$pandac$ASTNode* tmp2041916;
    org$pandalanguage$pandac$ASTNode* decl1919;
    org$pandalanguage$pandac$ASTNode* tmp2051921;
    org$pandalanguage$pandac$ASTNode* decl1928;
    org$pandalanguage$pandac$ASTNode* tmp2061930;
    org$pandalanguage$pandac$ASTNode* decl1945;
    org$pandalanguage$pandac$ASTNode* tmp2071947;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1950;
    org$pandalanguage$pandac$ASTNode* tmp2081957;
    org$pandalanguage$pandac$ASTNode* tmp2091958;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp1960;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1812, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1814 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1812, &$s1813);
    start1811 = $tmp1814;
    if (((panda$core$Bit) { !start1811.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1816, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1818 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1816, &$s1817);
    name1815 = $tmp1818;
    if (((panda$core$Bit) { !name1815.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1819, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1821 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1819, &$s1820);
    if (((panda$core$Bit) { !$tmp1821.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1823 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1823);
    members1822 = $tmp1823;
    dc1824 = NULL;
    $l1825:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1828 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1827 = $tmp1828;
        {
            $match$1854_131829 = next1827.kind;
            panda$core$Bit $tmp1839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1838 = $tmp1839.value;
            if ($tmp1838) goto $l1840;
            panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1838 = $tmp1841.value;
            $l1840:;
            panda$core$Bit $tmp1842 = { $tmp1838 };
            bool $tmp1837 = $tmp1842.value;
            if ($tmp1837) goto $l1843;
            panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1837 = $tmp1844.value;
            $l1843:;
            panda$core$Bit $tmp1845 = { $tmp1837 };
            bool $tmp1836 = $tmp1845.value;
            if ($tmp1836) goto $l1846;
            panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1836 = $tmp1847.value;
            $l1846:;
            panda$core$Bit $tmp1848 = { $tmp1836 };
            bool $tmp1835 = $tmp1848.value;
            if ($tmp1835) goto $l1849;
            panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1835 = $tmp1850.value;
            $l1849:;
            panda$core$Bit $tmp1851 = { $tmp1835 };
            bool $tmp1834 = $tmp1851.value;
            if ($tmp1834) goto $l1852;
            panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1834 = $tmp1853.value;
            $l1852:;
            panda$core$Bit $tmp1854 = { $tmp1834 };
            bool $tmp1833 = $tmp1854.value;
            if ($tmp1833) goto $l1855;
            panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1833 = $tmp1856.value;
            $l1855:;
            panda$core$Bit $tmp1857 = { $tmp1833 };
            bool $tmp1832 = $tmp1857.value;
            if ($tmp1832) goto $l1858;
            panda$core$Bit $tmp1859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1832 = $tmp1859.value;
            $l1858:;
            panda$core$Bit $tmp1860 = { $tmp1832 };
            bool $tmp1831 = $tmp1860.value;
            if ($tmp1831) goto $l1861;
            panda$core$Bit $tmp1862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1831 = $tmp1862.value;
            $l1861:;
            panda$core$Bit $tmp1863 = { $tmp1831 };
            bool $tmp1830 = $tmp1863.value;
            if ($tmp1830) goto $l1864;
            panda$core$Bit $tmp1865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1830 = $tmp1865.value;
            $l1864:;
            panda$core$Bit $tmp1866 = { $tmp1830 };
            if ($tmp1866.value) {
            {
                goto $l1826;
            }
            }
            else {
            panda$core$Bit $tmp1867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1867.value) {
            {
                if (((panda$core$Bit) { dc1824 != NULL }).value) {
                {
                    panda$core$String* $tmp1869 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1827);
                    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1868, $tmp1869);
                    panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, &$s1871);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1827, $tmp1872);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    org$pandalanguage$pandac$ASTNode* $tmp1873 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1824 = $tmp1873;
                }
            }
            }
            else {
            panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131829.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1874.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1876 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1824);
                c1875 = $tmp1876;
                if (((panda$core$Bit) { c1875 == NULL }).value) {
                {
                    {
                        tmp2001877 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2001877;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1822, ((panda$core$Object*) c1875));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    dc1824 = NULL;
                }
            }
            }
            else {
            {
                goto $l1826;
            }
            }
            }
            }
        }
    }
    }
    $l1826:;
    panda$collections$ImmutableArray* $tmp1879 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
    panda$collections$ImmutableArray$init($tmp1879);
    a1878 = $tmp1879;
    $l1880:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1883 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1882 = $tmp1883;
        {
            $match$1878_131884 = next1882.kind;
            panda$core$Bit $tmp1885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1885.value) {
            {
                panda$core$Int64 $tmp1886 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1878);
                panda$core$Bit $tmp1887 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1886, ((panda$core$Int64) { 0 }));
                if ($tmp1887.value) {
                {
                    panda$core$String* $tmp1889 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1882);
                    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1888, $tmp1889);
                    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, &$s1891);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1882, $tmp1892);
                    {
                        tmp2011893 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2011893;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                    panda$collections$ImmutableArray* $tmp1894 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                    a1878 = $tmp1894;
                }
            }
            }
            else {
            panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1895.value) {
            {
                bool $tmp1896 = ((panda$core$Bit) { dc1824 != NULL }).value;
                if ($tmp1896) goto $l1897;
                panda$core$Int64 $tmp1898 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1878);
                panda$core$Bit $tmp1899 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1898, ((panda$core$Int64) { 0 }));
                $tmp1896 = $tmp1899.value;
                $l1897:;
                panda$core$Bit $tmp1900 = { $tmp1896 };
                if ($tmp1900.value) {
                {
                    panda$core$String* $tmp1902 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1882);
                    panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1901, $tmp1902);
                    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, &$s1904);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1882, $tmp1905);
                    {
                        tmp2021906 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2021906;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    org$pandalanguage$pandac$ASTNode* $tmp1907 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1824 = $tmp1907;
                }
            }
            }
            else {
            panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1908.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1910 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1824, a1878);
                decl1909 = $tmp1910;
                if (((panda$core$Bit) { decl1909 == NULL }).value) {
                {
                    {
                        tmp2031911 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2031911;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1822, ((panda$core$Object*) decl1909));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    dc1824 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                    panda$collections$ImmutableArray* $tmp1912 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1912);
                    a1878 = $tmp1912;
                }
            }
            }
            else {
            panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1913.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1915 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1824, a1878);
                decl1914 = $tmp1915;
                if (((panda$core$Bit) { decl1914 == NULL }).value) {
                {
                    {
                        tmp2041916 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2041916;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1822, ((panda$core$Object*) decl1914));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    dc1824 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                    panda$collections$ImmutableArray* $tmp1917 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1917);
                    a1878 = $tmp1917;
                }
            }
            }
            else {
            panda$core$Bit $tmp1918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1918.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1920 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1824, a1878);
                decl1919 = $tmp1920;
                if (((panda$core$Bit) { decl1919 == NULL }).value) {
                {
                    {
                        tmp2051921 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2051921;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1822, ((panda$core$Object*) decl1919));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    dc1824 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                    panda$collections$ImmutableArray* $tmp1922 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1922);
                    a1878 = $tmp1922;
                }
            }
            }
            else {
            panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp1923 = $tmp1924.value;
            if ($tmp1923) goto $l1925;
            panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1923 = $tmp1926.value;
            $l1925:;
            panda$core$Bit $tmp1927 = { $tmp1923 };
            if ($tmp1927.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1929 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1824, a1878);
                decl1928 = $tmp1929;
                if (((panda$core$Bit) { decl1928 == NULL }).value) {
                {
                    {
                        tmp2061930 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2061930;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1822, ((panda$core$Object*) decl1928));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    dc1824 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                    panda$collections$ImmutableArray* $tmp1931 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1931);
                    a1878 = $tmp1931;
                }
            }
            }
            else {
            panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp1934 = $tmp1935.value;
            if ($tmp1934) goto $l1936;
            panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1934 = $tmp1937.value;
            $l1936:;
            panda$core$Bit $tmp1938 = { $tmp1934 };
            bool $tmp1933 = $tmp1938.value;
            if ($tmp1933) goto $l1939;
            panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1933 = $tmp1940.value;
            $l1939:;
            panda$core$Bit $tmp1941 = { $tmp1933 };
            bool $tmp1932 = $tmp1941.value;
            if ($tmp1932) goto $l1942;
            panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1932 = $tmp1943.value;
            $l1942:;
            panda$core$Bit $tmp1944 = { $tmp1932 };
            if ($tmp1944.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1946 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1824, a1878);
                decl1945 = $tmp1946;
                if (((panda$core$Bit) { decl1945 == NULL }).value) {
                {
                    {
                        tmp2071947 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                        }
                        return tmp2071947;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1822, ((panda$core$Object*) decl1945));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                    dc1824 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                    panda$collections$ImmutableArray* $tmp1948 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                    panda$collections$ImmutableArray$init($tmp1948);
                    a1878 = $tmp1948;
                }
            }
            }
            else {
            panda$core$Bit $tmp1949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131884.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1949.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1950, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1950, &$s1951);
                goto $l1881;
            }
            }
            else {
            {
                panda$core$String* $tmp1953 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1882);
                panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1952, $tmp1953);
                panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1955);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1882, $tmp1956);
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                {
                    tmp2081957 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
                    }
                    return tmp2081957;
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
    $l1881:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1959 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp1960, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp1961 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1815.value));
        panda$collections$ImmutableArray* $tmp1962 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1822);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1959, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1811.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp1960, $tmp1961, NULL, NULL, $tmp1962);
        tmp2091958 = $tmp1959;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1822));
        }
        return tmp2091958;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1963;
    org$pandalanguage$pandac$ASTNode* dc1965;
    org$pandalanguage$pandac$ASTNode* tmp2101968;
    panda$collections$ImmutableArray* a1969;
    org$pandalanguage$pandac$ASTNode* tmp2111971;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_91972;
    org$pandalanguage$pandac$ASTNode* tmp2121975;
    org$pandalanguage$pandac$ASTNode* tmp2131978;
    org$pandalanguage$pandac$ASTNode* tmp2141981;
    org$pandalanguage$pandac$ASTNode* tmp2151988;
    org$pandalanguage$pandac$ASTNode* tmp2161991;
    org$pandalanguage$pandac$ASTNode* tmp2172006;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2008;
    org$pandalanguage$pandac$ASTNode* tmp2182010;
    org$pandalanguage$pandac$parser$Token $tmp1964 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start1963 = $tmp1964;
    memset(&dc1965, 0, sizeof(dc1965));
    panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start1963.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp1966.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1967 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            dc1965 = $tmp1967;
        }
        if (((panda$core$Bit) { dc1965 == NULL }).value) {
        {
            {
                tmp2101968 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                return tmp2101968;
            }
        }
        }
    }
    }
    else {
    {
        {
            dc1965 = NULL;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1970 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    a1969 = $tmp1970;
    if (((panda$core$Bit) { a1969 == NULL }).value) {
    {
        {
            tmp2111971 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
            }
            return tmp2111971;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1973 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_91972 = $tmp1973.kind;
        panda$core$Bit $tmp1974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1974.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1976 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1965, a1969);
                tmp2121975 = $tmp1976;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
                }
                return tmp2121975;
            }
        }
        }
        else {
        panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1977.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1979 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1965, a1969);
                tmp2131978 = $tmp1979;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
                }
                return tmp2131978;
            }
        }
        }
        else {
        panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1980.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1982 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1965, a1969);
                tmp2141981 = $tmp1982;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
                }
                return tmp2141981;
            }
        }
        }
        else {
        panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp1983 = $tmp1984.value;
        if ($tmp1983) goto $l1985;
        panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp1983 = $tmp1986.value;
        $l1985:;
        panda$core$Bit $tmp1987 = { $tmp1983 };
        if ($tmp1987.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1989 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1965, a1969);
                tmp2151988 = $tmp1989;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
                }
                return tmp2151988;
            }
        }
        }
        else {
        panda$core$Bit $tmp1990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1990.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1992 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1965, a1969);
                tmp2161991 = $tmp1992;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
                }
                return tmp2161991;
            }
        }
        }
        else {
        panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1995 = $tmp1996.value;
        if ($tmp1995) goto $l1997;
        panda$core$Bit $tmp1998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1995 = $tmp1998.value;
        $l1997:;
        panda$core$Bit $tmp1999 = { $tmp1995 };
        bool $tmp1994 = $tmp1999.value;
        if ($tmp1994) goto $l2000;
        panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1994 = $tmp2001.value;
        $l2000:;
        panda$core$Bit $tmp2002 = { $tmp1994 };
        bool $tmp1993 = $tmp2002.value;
        if ($tmp1993) goto $l2003;
        panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_91972.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1993 = $tmp2004.value;
        $l2003:;
        panda$core$Bit $tmp2005 = { $tmp1993 };
        if ($tmp2005.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2007 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1965, a1969);
                tmp2172006 = $tmp2007;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
                }
                return tmp2172006;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2008, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2008, &$s2009);
            {
                tmp2182010 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
                }
                return tmp2182010;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1969));
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2012;
    org$pandalanguage$pandac$parser$Token$nullable name2015;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2016;
    panda$collections$ImmutableArray* generics2019;
    org$pandalanguage$pandac$ASTNode* tmp2192023;
    panda$collections$ImmutableArray* stypes2024;
    org$pandalanguage$pandac$ASTNode* tmp2202028;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2029;
    org$pandalanguage$pandac$ASTNode* tmp2212032;
    panda$collections$Array* members2033;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2037;
    org$pandalanguage$pandac$ASTNode* member2039;
    org$pandalanguage$pandac$ASTNode* tmp2222041;
    org$pandalanguage$pandac$ASTNode* tmp2232042;
    org$pandalanguage$pandac$ASTNode* tmp2242043;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2045;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2012, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2014 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2012, &$s2013);
    start2011 = $tmp2014;
    if (((panda$core$Bit) { !start2011.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2016, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2018 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2016, &$s2017);
    name2015 = $tmp2018;
    if (((panda$core$Bit) { !name2015.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2019, 0, sizeof(generics2019));
    org$pandalanguage$pandac$parser$Token $tmp2020 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2020.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2021.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2022 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2019 = $tmp2022;
        }
        if (((panda$core$Bit) { generics2019 == NULL }).value) {
        {
            {
                tmp2192023 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2019));
                return tmp2192023;
            }
        }
        }
    }
    }
    else {
    {
        {
            generics2019 = NULL;
        }
    }
    }
    memset(&stypes2024, 0, sizeof(stypes2024));
    org$pandalanguage$pandac$parser$Token $tmp2025 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2025.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2026.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2027 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            stypes2024 = $tmp2027;
        }
        if (((panda$core$Bit) { stypes2024 == NULL }).value) {
        {
            {
                tmp2202028 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2019));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2024));
                }
                return tmp2202028;
            }
        }
        }
    }
    }
    else {
    {
        {
            stypes2024 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2029, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2031 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2029, &$s2030);
    if (((panda$core$Bit) { !$tmp2031.nonnull }).value) {
    {
        {
            tmp2212032 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2019));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2024));
            }
            return tmp2212032;
        }
    }
    }
    panda$collections$Array* $tmp2034 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2034);
    members2033 = $tmp2034;
    $l2035:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2037, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2038 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2037);
    if (!((panda$core$Bit) { !$tmp2038.nonnull }).value) goto $l2036;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2040 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2039 = $tmp2040;
        if (((panda$core$Bit) { member2039 == NULL }).value) {
        {
            {
                tmp2222041 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2039));
                {
                    tmp2232042 = tmp2222041;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2019));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2033));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2024));
                    }
                    return tmp2232042;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2033, ((panda$core$Object*) member2039));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2039));
    }
    goto $l2035;
    $l2036:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2044 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2045, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2046 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2015.value));
        panda$collections$ImmutableArray* $tmp2047 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2033);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2044, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2011.value).position, p_doccomment, p_annotations, $tmp2045, $tmp2046, generics2019, stypes2024, $tmp2047);
        tmp2242043 = $tmp2044;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2019));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2033));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2024));
        }
        return tmp2242043;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2048;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2049;
    org$pandalanguage$pandac$parser$Token$nullable name2052;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2053;
    panda$collections$ImmutableArray* generics2056;
    org$pandalanguage$pandac$ASTNode* tmp2252060;
    panda$collections$Array* intfs2062;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2064;
    org$pandalanguage$pandac$ASTNode* t2066;
    org$pandalanguage$pandac$ASTNode* tmp2262068;
    org$pandalanguage$pandac$ASTNode* tmp2282069;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2072;
    org$pandalanguage$pandac$ASTNode* tmp2272075;
    org$pandalanguage$pandac$ASTNode* tmp2292076;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2077;
    org$pandalanguage$pandac$ASTNode* tmp2302080;
    panda$collections$Array* members2081;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2085;
    org$pandalanguage$pandac$ASTNode* member2087;
    org$pandalanguage$pandac$ASTNode* tmp2312089;
    org$pandalanguage$pandac$ASTNode* tmp2322090;
    org$pandalanguage$pandac$ASTNode* tmp2332091;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2093;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2049, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2051 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2049, &$s2050);
    start2048 = $tmp2051;
    if (((panda$core$Bit) { !start2048.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2053, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2055 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2053, &$s2054);
    name2052 = $tmp2055;
    if (((panda$core$Bit) { !name2052.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2056, 0, sizeof(generics2056));
    org$pandalanguage$pandac$parser$Token $tmp2057 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2057.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2058.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2059 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2056 = $tmp2059;
        }
        if (((panda$core$Bit) { generics2056 == NULL }).value) {
        {
            {
                tmp2252060 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2056));
                return tmp2252060;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp2061 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp2061);
            generics2056 = $tmp2061;
        }
    }
    }
    panda$collections$Array* $tmp2063 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2063);
    intfs2062 = $tmp2063;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2064, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2065 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2064);
    if (((panda$core$Bit) { $tmp2065.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2067 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t2066 = $tmp2067;
        if (((panda$core$Bit) { t2066 == NULL }).value) {
        {
            {
                tmp2262068 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2066));
                {
                    tmp2282069 = tmp2262068;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2056));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2062));
                    }
                    return tmp2282069;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2062, ((panda$core$Object*) t2066));
        $l2070:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2072, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2073 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2072);
        if (!((panda$core$Bit) { $tmp2073.nonnull }).value) goto $l2071;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2066));
                org$pandalanguage$pandac$ASTNode* $tmp2074 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t2066 = $tmp2074;
            }
            if (((panda$core$Bit) { t2066 == NULL }).value) {
            {
                {
                    tmp2272075 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2066));
                    {
                        tmp2292076 = tmp2272075;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2056));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2062));
                        }
                        return tmp2292076;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2062, ((panda$core$Object*) t2066));
        }
        goto $l2070;
        $l2071:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2066));
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2077, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2079 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2077, &$s2078);
    if (((panda$core$Bit) { !$tmp2079.nonnull }).value) {
    {
        {
            tmp2302080 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2062));
            }
            return tmp2302080;
        }
    }
    }
    panda$collections$Array* $tmp2082 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2082);
    members2081 = $tmp2082;
    $l2083:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2085, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2086 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2085);
    if (!((panda$core$Bit) { !$tmp2086.nonnull }).value) goto $l2084;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2088 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2087 = $tmp2088;
        if (((panda$core$Bit) { member2087 == NULL }).value) {
        {
            {
                tmp2312089 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2087));
                {
                    tmp2322090 = tmp2312089;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2056));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2062));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2081));
                    }
                    return tmp2322090;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2081, ((panda$core$Object*) member2087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2087));
    }
    goto $l2083;
    $l2084:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2092 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2093, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp2094 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2052.value));
        panda$collections$ImmutableArray* $tmp2095 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs2062);
        panda$collections$ImmutableArray* $tmp2096 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2081);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2092, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2048.value).position, p_doccomment, p_annotations, $tmp2093, $tmp2094, generics2056, $tmp2095, $tmp2096);
        tmp2332091 = $tmp2092;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2056));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2062));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2081));
        }
        return tmp2332091;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_92097;
    {
        org$pandalanguage$pandac$parser$Token $tmp2098 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_92097 = $tmp2098.kind;
        panda$core$Bit $tmp2099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2099.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2100 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2100;
        }
        }
        else {
        panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2101.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2102 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2102;
        }
        }
        else {
        panda$core$Bit $tmp2109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2108 = $tmp2109.value;
        if ($tmp2108) goto $l2110;
        panda$core$Bit $tmp2111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2108 = $tmp2111.value;
        $l2110:;
        panda$core$Bit $tmp2112 = { $tmp2108 };
        bool $tmp2107 = $tmp2112.value;
        if ($tmp2107) goto $l2113;
        panda$core$Bit $tmp2114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp2107 = $tmp2114.value;
        $l2113:;
        panda$core$Bit $tmp2115 = { $tmp2107 };
        bool $tmp2106 = $tmp2115.value;
        if ($tmp2106) goto $l2116;
        panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp2106 = $tmp2117.value;
        $l2116:;
        panda$core$Bit $tmp2118 = { $tmp2106 };
        bool $tmp2105 = $tmp2118.value;
        if ($tmp2105) goto $l2119;
        panda$core$Bit $tmp2120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2105 = $tmp2120.value;
        $l2119:;
        panda$core$Bit $tmp2121 = { $tmp2105 };
        bool $tmp2104 = $tmp2121.value;
        if ($tmp2104) goto $l2122;
        panda$core$Bit $tmp2123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp2104 = $tmp2123.value;
        $l2122:;
        panda$core$Bit $tmp2124 = { $tmp2104 };
        bool $tmp2103 = $tmp2124.value;
        if ($tmp2103) goto $l2125;
        panda$core$Bit $tmp2126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92097.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp2103 = $tmp2126.value;
        $l2125:;
        panda$core$Bit $tmp2127 = { $tmp2103 };
        if ($tmp2127.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2128 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2128;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2129 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2129;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2130;
    org$pandalanguage$pandac$ASTNode* entry2136;
    org$pandalanguage$pandac$ASTNode* tmp2342138;
    org$pandalanguage$pandac$ASTNode* tmp2352139;
    org$pandalanguage$pandac$ASTNode* tmp2362141;
    panda$collections$Array* $tmp2131 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp2131);
    entries2130 = $tmp2131;
    $l2132:;
    org$pandalanguage$pandac$parser$Token $tmp2134 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2135 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2134.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2135.value) goto $l2133;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2137 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2136 = $tmp2137;
        if (((panda$core$Bit) { entry2136 == NULL }).value) {
        {
            {
                tmp2342138 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2136));
                {
                    tmp2352139 = tmp2342138;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2130));
                    return tmp2352139;
                }
            }
        }
        }
        panda$core$Bit $tmp2140 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2140.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2130, ((panda$core$Object*) entry2136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2136));
    }
    goto $l2132;
    $l2133:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2142 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2143 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2130);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2142, ((panda$core$Int64) { 15 }), $tmp2143);
        tmp2362141 = $tmp2142;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2130));
        return tmp2362141;
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

