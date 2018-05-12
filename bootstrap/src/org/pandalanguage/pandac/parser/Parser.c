#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/core/Panda.h"
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

typedef void (*$fn106)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn154)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn216)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn320)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn383)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn390)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn398)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn405)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn491)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn557)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn564)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn571)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn584)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn609)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn616)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn629)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1283)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1343)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2537)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2564)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2615)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3565)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp2;
    org$pandalanguage$pandac$parser$Lexer* $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6;
    panda$collections$Stack* $tmp8;
    panda$collections$Stack* $tmp9;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp12;
    org$pandalanguage$pandac$ErrorReporter* $tmp14;
    org$pandalanguage$pandac$ErrorReporter* $tmp15;
    panda$core$Object* $tmp16;
    self->lexer = NULL;
    self->errors = NULL;
    self->path = NULL;
    self->source = NULL;
    self->pushbackBuffer = NULL;
    self->commaSeparatedExpressionContext = NULL;
    self->speculativeBuffer = NULL;
    org$pandalanguage$pandac$parser$Lexer* $tmp4 = (org$pandalanguage$pandac$parser$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class);
    org$pandalanguage$pandac$parser$Lexer$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->lexer = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->pushbackBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Stack* $tmp10 = (panda$collections$Stack*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$Stack$class);
    panda$collections$Stack$init($tmp10);
    $tmp9 = $tmp10;
    $tmp8 = $tmp9;
    self->commaSeparatedExpressionContext = $tmp8;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp13 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp13);
    $tmp12 = $tmp13;
    $tmp11 = $tmp12;
    self->speculativeBuffer = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    {
        $tmp14 = self->errors;
        $tmp15 = p_errors;
        self->errors = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    }
    panda$core$Bit$wrapper* $tmp17;
    $tmp17 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp17->value = ((panda$core$Bit) { false });
    $tmp16 = ((panda$core$Object*) $tmp17);
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp16);
    panda$core$Panda$unref$panda$core$Object($tmp16);
}
void org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, panda$io$File* p_path, panda$core$String* p_source) {
    panda$io$File* $tmp18;
    panda$io$File* $tmp19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    org$pandalanguage$pandac$parser$Lexer$start$panda$core$String(self->lexer, p_source);
    {
        $tmp18 = self->path;
        $tmp19 = p_path;
        self->path = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
    {
        $tmp20 = self->source;
        $tmp21 = p_source;
        self->source = $tmp21;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 idx24;
    org$pandalanguage$pandac$parser$Token result27;
    org$pandalanguage$pandac$parser$Token $finallyReturn28;
    org$pandalanguage$pandac$parser$Token result31;
    org$pandalanguage$pandac$parser$Token $finallyReturn32;
    panda$core$Int64 $tmp22 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp23 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp22, ((panda$core$Int64) { 0 }));
    if ($tmp23.value) {
    {
        panda$core$Int64 $tmp25 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp26 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp25, ((panda$core$Int64) { 1 }));
        idx24 = $tmp26;
        org$pandalanguage$pandac$parser$Token $tmp28 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx24);
        result27 = $tmp28;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx24);
        $finallyReturn28 = result27;
        return $finallyReturn28;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp32 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result31 = $tmp32;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result31);
    }
    }
    $finallyReturn32 = result31;
    return $finallyReturn32;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result37;
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1339;
    org$pandalanguage$pandac$parser$Token next44;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2546;
    panda$core$String* $tmp48;
    panda$core$Char8 $tmp50;
    org$pandalanguage$pandac$parser$Token $finallyReturn52;
    org$pandalanguage$pandac$parser$Token next58;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2560;
    org$pandalanguage$pandac$parser$Token $finallyReturn63;
    org$pandalanguage$pandac$parser$Token $finallyReturn65;
    $l35:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp38 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result37 = $tmp38;
        {
            $match$57_1339 = result37.kind;
            panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1339.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp40.value) {
            {
                goto $l35;
            }
            }
            else {
            panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1339.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp41.value) {
            {
                $l42:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp45 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next44 = $tmp45;
                    {
                        $match$63_2546 = next44.kind;
                        panda$core$Bit $tmp47 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2546.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp47.value) {
                        {
                            panda$core$String* $tmp49 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next44);
                            $tmp48 = $tmp49;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp50, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp51 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp48, $tmp50);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
                            if ($tmp51.value) {
                            {
                                goto $l35;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2546.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp52.value) {
                        {
                            $finallyReturn52 = next44;
                            return $finallyReturn52;
                        }
                        }
                        }
                    }
                }
                }
                $l43:;
            }
            }
            else {
            panda$core$Bit $tmp55 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1339.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp55.value) {
            {
                $l56:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp59 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next58 = $tmp59;
                    {
                        $match$75_2560 = next58.kind;
                        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2560.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp61.value) {
                        {
                            goto $l35;
                        }
                        }
                        else {
                        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2560.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp62.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result37, &$s63);
                            $finallyReturn63 = next58;
                            return $finallyReturn63;
                        }
                        }
                        }
                    }
                }
                }
                $l57:;
            }
            }
            else {
            {
                $finallyReturn65 = result37;
                return $finallyReturn65;
            }
            }
            }
            }
        }
    }
    }
    $l36:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $finallyReturn70;
    panda$core$Int64 $tmp68 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp68, ((panda$core$Int64) { 0 }));
    if ($tmp69.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp70 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp70);
    }
    }
    panda$core$Int64 $tmp72 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp72, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp74 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp73);
    $finallyReturn70 = $tmp74;
    return $finallyReturn70;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result76;
    org$pandalanguage$pandac$parser$Token$nullable $finallyReturn78;
    org$pandalanguage$pandac$parser$Token$nullable $finallyReturn80;
    org$pandalanguage$pandac$parser$Token $tmp77 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result76 = $tmp77;
    panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result76.kind.$rawValue, p_kind.$rawValue);
    if ($tmp78.value) {
    {
        $finallyReturn78 = ((org$pandalanguage$pandac$parser$Token$nullable) { result76, true });
        return $finallyReturn78;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result76);
    $finallyReturn80 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $finallyReturn80;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result83;
    org$pandalanguage$pandac$parser$Token$nullable $finallyReturn85;
    panda$core$String* $tmp88;
    panda$core$String* $tmp89;
    panda$core$String* $tmp90;
    panda$core$String* $tmp91;
    panda$core$String* $tmp96;
    org$pandalanguage$pandac$parser$Token$nullable $finallyReturn100;
    org$pandalanguage$pandac$parser$Token $tmp84 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result83 = $tmp84;
    panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result83.kind.$rawValue, p_kind.$rawValue);
    if ($tmp85.value) {
    {
        $finallyReturn85 = ((org$pandalanguage$pandac$parser$Token$nullable) { result83, true });
        return $finallyReturn85;
    }
    }
    panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s92, p_expected);
    $tmp91 = $tmp93;
    panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp91, &$s94);
    $tmp90 = $tmp95;
    panda$core$String* $tmp97 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result83);
    $tmp96 = $tmp97;
    panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, $tmp96);
    $tmp89 = $tmp98;
    panda$core$String* $tmp100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, &$s99);
    $tmp88 = $tmp100;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result83, $tmp88);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
    $finallyReturn100 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $finallyReturn100;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp103 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp103.value) {
    {
        ITable* $tmp104 = self->errors->$class->itable;
        while ($tmp104->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp104 = $tmp104->next;
        }
        $fn106 $tmp105 = $tmp104->methods[0];
        $tmp105(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp107.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp108;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp109 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp110 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp109, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp108, $tmp110, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp112 = $tmp108.start.value;
    panda$core$Int64 i111 = { $tmp112 };
    int64_t $tmp114 = $tmp108.end.value;
    int64_t $tmp115 = $tmp108.step.value;
    bool $tmp116 = $tmp108.inclusive.value;
    bool $tmp123 = $tmp115 > 0;
    if ($tmp123) goto $l121; else goto $l122;
    $l121:;
    if ($tmp116) goto $l124; else goto $l125;
    $l124:;
    if ($tmp112 <= $tmp114) goto $l117; else goto $l119;
    $l125:;
    if ($tmp112 < $tmp114) goto $l117; else goto $l119;
    $l122:;
    if ($tmp116) goto $l126; else goto $l127;
    $l126:;
    if ($tmp112 >= $tmp114) goto $l117; else goto $l119;
    $l127:;
    if ($tmp112 > $tmp114) goto $l117; else goto $l119;
    $l117:;
    {
        org$pandalanguage$pandac$parser$Token $tmp129 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i111);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp129);
    }
    $l120:;
    if ($tmp123) goto $l131; else goto $l132;
    $l131:;
    int64_t $tmp133 = $tmp114 - i111.value;
    if ($tmp116) goto $l134; else goto $l135;
    $l134:;
    if ((uint64_t) $tmp133 >= $tmp115) goto $l130; else goto $l119;
    $l135:;
    if ((uint64_t) $tmp133 > $tmp115) goto $l130; else goto $l119;
    $l132:;
    int64_t $tmp137 = i111.value - $tmp114;
    if ($tmp116) goto $l138; else goto $l139;
    $l138:;
    if ((uint64_t) $tmp137 >= -$tmp115) goto $l130; else goto $l119;
    $l139:;
    if ((uint64_t) $tmp137 > -$tmp115) goto $l130; else goto $l119;
    $l130:;
    i111.value += $tmp115;
    goto $l117;
    $l119:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $finallyReturn140;
    panda$core$String* $tmp142;
    panda$core$String* $tmp143;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp144;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp144, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp145 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp144);
    $tmp143 = $tmp145;
    $tmp142 = $tmp143;
    $finallyReturn140 = $tmp142;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
    return $finallyReturn140;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $finallyReturn146;
    org$pandalanguage$pandac$ASTNode* $tmp148;
    org$pandalanguage$pandac$ASTNode* $finallyReturn149;
    org$pandalanguage$pandac$ASTNode* $tmp151;
    org$pandalanguage$pandac$ASTNode* $tmp152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp156;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp148 = p_chunk;
        $finallyReturn146 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        return $finallyReturn146;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp153 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp155 = (($fn154) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp156, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp153, ((panda$core$Int64) { 2 }), $tmp155, p_string, $tmp156, p_chunk);
    $tmp152 = $tmp153;
    $tmp151 = $tmp152;
    $finallyReturn149 = $tmp151;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
    return $finallyReturn149;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result161 = NULL;
    panda$core$MutableString* $tmp162;
    panda$core$MutableString* $tmp163;
    org$pandalanguage$pandac$parser$Token token167;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13169;
    panda$core$String* str174 = NULL;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    panda$core$Char8 $tmp178;
    panda$core$String* $finallyReturn180;
    panda$core$String* $tmp182;
    panda$core$String* $finallyReturn188;
    panda$core$String* $tmp190;
    org$pandalanguage$pandac$parser$Token escape197;
    panda$core$String* $finallyReturn200;
    panda$core$String* $tmp202;
    panda$core$String* escapeText206 = NULL;
    panda$core$String* $tmp207;
    panda$core$String* $tmp208;
    panda$core$Char8 c210;
    panda$core$Object* $tmp211;
    panda$collections$ListView* $tmp212;
    panda$core$Char8 $match$176_21218;
    panda$core$Char8 $tmp219;
    panda$core$Char8 $tmp221;
    panda$core$Char8 $tmp222;
    panda$core$Char8 $tmp224;
    panda$core$Char8 $tmp225;
    panda$core$Char8 $tmp227;
    panda$core$Char8 $tmp228;
    panda$core$Char8 $tmp230;
    panda$core$Char8 $tmp231;
    panda$core$Char8 $tmp233;
    panda$core$Char8 $tmp234;
    panda$core$Char8 $tmp236;
    panda$core$Char8 $tmp237;
    panda$core$Char8 $tmp239;
    panda$core$String* $finallyReturn240;
    panda$core$String* $tmp242;
    panda$core$String* $tmp246;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp247;
    panda$core$String* $finallyReturn252;
    panda$core$String* $tmp254;
    panda$core$String* $tmp255;
    panda$core$String* $tmp259;
    int $tmp160;
    {
        panda$core$MutableString* $tmp164 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp164);
        $tmp163 = $tmp164;
        $tmp162 = $tmp163;
        result161 = $tmp162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
        $l165:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp168 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token167 = $tmp168;
            {
                $match$157_13169 = token167.kind;
                panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13169.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp170.value) {
                {
                    int $tmp173;
                    {
                        panda$core$String* $tmp177 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token167);
                        $tmp176 = $tmp177;
                        $tmp175 = $tmp176;
                        str174 = $tmp175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp178, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp179 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str174, $tmp178);
                        if ($tmp179.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token167, &$s180);
                            $tmp182 = NULL;
                            $finallyReturn180 = $tmp182;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                            $tmp173 = 0;
                            goto $l171;
                            $l183:;
                            $tmp160 = 0;
                            goto $l158;
                            $l184:;
                            return $finallyReturn180;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result161, str174);
                    }
                    $tmp173 = -1;
                    goto $l171;
                    $l171:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str174));
                    str174 = NULL;
                    switch ($tmp173) {
                        case -1: goto $l186;
                        case 0: goto $l183;
                    }
                    $l186:;
                }
                }
                else {
                panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13169.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp187.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token167, &$s188);
                    $tmp190 = NULL;
                    $finallyReturn188 = $tmp190;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
                    $tmp160 = 1;
                    goto $l158;
                    $l191:;
                    return $finallyReturn188;
                }
                }
                else {
                panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13169.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp193.value) {
                {
                    int $tmp196;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp198 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape197 = $tmp198;
                        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape197.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp199.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token167, &$s200);
                            $tmp202 = NULL;
                            $finallyReturn200 = $tmp202;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                            $tmp196 = 0;
                            goto $l194;
                            $l203:;
                            $tmp160 = 2;
                            goto $l158;
                            $l204:;
                            return $finallyReturn200;
                        }
                        }
                        panda$core$String* $tmp209 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape197);
                        $tmp208 = $tmp209;
                        $tmp207 = $tmp208;
                        escapeText206 = $tmp207;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                        panda$collections$ListView* $tmp213 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText206);
                        $tmp212 = $tmp213;
                        ITable* $tmp214 = $tmp212->$class->itable;
                        while ($tmp214->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp214 = $tmp214->next;
                        }
                        $fn216 $tmp215 = $tmp214->methods[0];
                        panda$core$Object* $tmp217 = $tmp215($tmp212, ((panda$core$Int64) { 0 }));
                        $tmp211 = $tmp217;
                        c210 = ((panda$core$Char8$wrapper*) $tmp211)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp211);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
                        {
                            $match$176_21218 = c210;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp220 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21218, $tmp219);
                            if ($tmp220.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp221);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp223 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21218, $tmp222);
                            if ($tmp223.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp224);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp226 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21218, $tmp225);
                            if ($tmp226.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp227);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp229 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21218, $tmp228);
                            if ($tmp229.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp230, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp230);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp231, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp232 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21218, $tmp231);
                            if ($tmp232.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp233, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp233);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp234, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp235 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21218, $tmp234);
                            if ($tmp235.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp236, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp236);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp237, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp238 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21218, $tmp237);
                            if ($tmp238.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp239, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result161, $tmp239);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token167, &$s240);
                                $tmp242 = NULL;
                                $finallyReturn240 = $tmp242;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                                $tmp196 = 1;
                                goto $l194;
                                $l243:;
                                $tmp160 = 3;
                                goto $l158;
                                $l244:;
                                return $finallyReturn240;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp248 = panda$core$String$start$R$panda$core$String$Index(escapeText206);
                        panda$core$String$Index $tmp249 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText206, $tmp248);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp247, ((panda$core$String$Index$nullable) { $tmp249, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp250 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText206, $tmp247);
                        $tmp246 = $tmp250;
                        panda$core$MutableString$append$panda$core$String(result161, $tmp246);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
                    }
                    $tmp196 = -1;
                    goto $l194;
                    $l194:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText206));
                    escapeText206 = NULL;
                    switch ($tmp196) {
                        case 1: goto $l243;
                        case 0: goto $l203;
                        case -1: goto $l251;
                    }
                    $l251:;
                }
                }
                else {
                panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13169.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp252.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token167);
                    panda$core$String* $tmp256 = panda$core$MutableString$finish$R$panda$core$String(result161);
                    $tmp255 = $tmp256;
                    $tmp254 = $tmp255;
                    $finallyReturn252 = $tmp254;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                    $tmp160 = 4;
                    goto $l158;
                    $l257:;
                    return $finallyReturn252;
                }
                }
                else {
                {
                    panda$core$String* $tmp260 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token167);
                    $tmp259 = $tmp260;
                    panda$core$MutableString$append$panda$core$String(result161, $tmp259);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
                }
                }
                }
                }
                }
            }
        }
        }
        $l166:;
    }
    $tmp160 = -1;
    goto $l158;
    $l158:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result161));
    result161 = NULL;
    switch ($tmp160) {
        case 0: goto $l184;
        case 2: goto $l204;
        case 4: goto $l257;
        case 3: goto $l244;
        case 1: goto $l191;
        case -1: goto $l261;
    }
    $l261:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result265 = NULL;
    panda$core$MutableString* $tmp266;
    panda$core$MutableString* $tmp267;
    org$pandalanguage$pandac$parser$Token token271;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13273;
    panda$core$String* str278 = NULL;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$Char8 $tmp282;
    panda$core$String* $finallyReturn284;
    panda$core$String* $tmp286;
    panda$core$String* $finallyReturn292;
    panda$core$String* $tmp294;
    org$pandalanguage$pandac$parser$Token escape301;
    panda$core$String* $finallyReturn304;
    panda$core$String* $tmp306;
    panda$core$String* escapeText310 = NULL;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$Char8 c314;
    panda$core$Object* $tmp315;
    panda$collections$ListView* $tmp316;
    panda$core$Char8 $match$221_21322;
    panda$core$Char8 $tmp323;
    panda$core$Char8 $tmp325;
    panda$core$Char8 $tmp326;
    panda$core$Char8 $tmp328;
    panda$core$Char8 $tmp329;
    panda$core$Char8 $tmp331;
    panda$core$Char8 $tmp332;
    panda$core$Char8 $tmp334;
    panda$core$Char8 $tmp335;
    panda$core$Char8 $tmp337;
    panda$core$Char8 $tmp338;
    panda$core$Char8 $tmp340;
    panda$core$Char8 $tmp341;
    panda$core$Char8 $tmp343;
    panda$core$Char8 $tmp344;
    panda$core$Char8 $tmp346;
    panda$core$String* $finallyReturn347;
    panda$core$String* $tmp349;
    panda$core$String* $tmp353;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp354;
    panda$core$String* $finallyReturn359;
    panda$core$String* $tmp361;
    panda$core$String* $tmp362;
    panda$core$String* $finallyReturn366;
    panda$core$String* $tmp368;
    panda$core$String* $tmp369;
    panda$core$String* $tmp373;
    int $tmp264;
    {
        panda$core$MutableString* $tmp268 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp268);
        $tmp267 = $tmp268;
        $tmp266 = $tmp267;
        result265 = $tmp266;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
        $l269:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp272 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token271 = $tmp272;
            {
                $match$202_13273 = token271.kind;
                panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13273.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp274.value) {
                {
                    int $tmp277;
                    {
                        panda$core$String* $tmp281 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token271);
                        $tmp280 = $tmp281;
                        $tmp279 = $tmp280;
                        str278 = $tmp279;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp282, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp283 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str278, $tmp282);
                        if ($tmp283.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token271, &$s284);
                            $tmp286 = NULL;
                            $finallyReturn284 = $tmp286;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                            $tmp277 = 0;
                            goto $l275;
                            $l287:;
                            $tmp264 = 0;
                            goto $l262;
                            $l288:;
                            return $finallyReturn284;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result265, str278);
                    }
                    $tmp277 = -1;
                    goto $l275;
                    $l275:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str278));
                    str278 = NULL;
                    switch ($tmp277) {
                        case -1: goto $l290;
                        case 0: goto $l287;
                    }
                    $l290:;
                }
                }
                else {
                panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13273.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp291.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token271, &$s292);
                    $tmp294 = NULL;
                    $finallyReturn292 = $tmp294;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                    $tmp264 = 1;
                    goto $l262;
                    $l295:;
                    return $finallyReturn292;
                }
                }
                else {
                panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13273.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp297.value) {
                {
                    int $tmp300;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp302 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape301 = $tmp302;
                        panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape301.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp303.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token271, &$s304);
                            $tmp306 = NULL;
                            $finallyReturn304 = $tmp306;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                            $tmp300 = 0;
                            goto $l298;
                            $l307:;
                            $tmp264 = 2;
                            goto $l262;
                            $l308:;
                            return $finallyReturn304;
                        }
                        }
                        panda$core$String* $tmp313 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape301);
                        $tmp312 = $tmp313;
                        $tmp311 = $tmp312;
                        escapeText310 = $tmp311;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp311));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
                        panda$collections$ListView* $tmp317 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText310);
                        $tmp316 = $tmp317;
                        ITable* $tmp318 = $tmp316->$class->itable;
                        while ($tmp318->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp318 = $tmp318->next;
                        }
                        $fn320 $tmp319 = $tmp318->methods[0];
                        panda$core$Object* $tmp321 = $tmp319($tmp316, ((panda$core$Int64) { 0 }));
                        $tmp315 = $tmp321;
                        c314 = ((panda$core$Char8$wrapper*) $tmp315)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp315);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                        {
                            $match$221_21322 = c314;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp323, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp324 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp323);
                            if ($tmp324.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp325);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp326, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp327 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp326);
                            if ($tmp327.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp328);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp330 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp329);
                            if ($tmp330.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp331);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp332, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp333 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp332);
                            if ($tmp333.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp334, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp334);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp335, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp336 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp335);
                            if ($tmp336.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp337, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp337);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp338, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp339 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp338);
                            if ($tmp339.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp340, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp340);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp341, ((panda$core$UInt8) { 58 }));
                            panda$core$Bit $tmp342 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp341);
                            if ($tmp342.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp343, ((panda$core$UInt8) { 58 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp343);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp344, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp345 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21322, $tmp344);
                            if ($tmp345.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp346, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result265, $tmp346);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token271, &$s347);
                                $tmp349 = NULL;
                                $finallyReturn347 = $tmp349;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
                                $tmp300 = 1;
                                goto $l298;
                                $l350:;
                                $tmp264 = 3;
                                goto $l262;
                                $l351:;
                                return $finallyReturn347;
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
                        panda$core$String$Index $tmp355 = panda$core$String$start$R$panda$core$String$Index(escapeText310);
                        panda$core$String$Index $tmp356 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText310, $tmp355);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp354, ((panda$core$String$Index$nullable) { $tmp356, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp357 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText310, $tmp354);
                        $tmp353 = $tmp357;
                        panda$core$MutableString$append$panda$core$String(result265, $tmp353);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                    }
                    $tmp300 = -1;
                    goto $l298;
                    $l298:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText310));
                    escapeText310 = NULL;
                    switch ($tmp300) {
                        case 1: goto $l350;
                        case 0: goto $l307;
                        case -1: goto $l358;
                    }
                    $l358:;
                }
                }
                else {
                panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13273.$rawValue, ((panda$core$Int64) { 95 }));
                if ($tmp359.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token271);
                    panda$core$String* $tmp363 = panda$core$MutableString$finish$R$panda$core$String(result265);
                    $tmp362 = $tmp363;
                    $tmp361 = $tmp362;
                    $finallyReturn359 = $tmp361;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
                    $tmp264 = 4;
                    goto $l262;
                    $l364:;
                    return $finallyReturn359;
                }
                }
                else {
                panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13273.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp366.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token271);
                    panda$core$String* $tmp370 = panda$core$MutableString$finish$R$panda$core$String(result265);
                    $tmp369 = $tmp370;
                    $tmp368 = $tmp369;
                    $finallyReturn366 = $tmp368;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                    $tmp264 = 5;
                    goto $l262;
                    $l371:;
                    return $finallyReturn366;
                }
                }
                else {
                {
                    panda$core$String* $tmp374 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token271);
                    $tmp373 = $tmp374;
                    panda$core$MutableString$append$panda$core$String(result265, $tmp373);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l270:;
    }
    $tmp264 = -1;
    goto $l262;
    $l262:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result265));
    result265 = NULL;
    switch ($tmp264) {
        case 0: goto $l288;
        case 4: goto $l364;
        case -1: goto $l375;
        case 5: goto $l371;
        case 2: goto $l308;
        case 3: goto $l351;
        case 1: goto $l295;
    }
    $l375:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot379 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp380;
    org$pandalanguage$pandac$ASTNode* $tmp381;
    org$pandalanguage$pandac$ASTNode* call386 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp387;
    org$pandalanguage$pandac$ASTNode* $tmp388;
    panda$collections$ImmutableArray* $tmp392;
    org$pandalanguage$pandac$ASTNode* stringType394 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp395;
    org$pandalanguage$pandac$ASTNode* $tmp396;
    org$pandalanguage$pandac$ASTNode* $finallyReturn400;
    org$pandalanguage$pandac$ASTNode* $tmp402;
    org$pandalanguage$pandac$ASTNode* $tmp403;
    org$pandalanguage$pandac$parser$Token$Kind $tmp407;
    int $tmp378;
    {
        org$pandalanguage$pandac$ASTNode* $tmp382 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp384 = (($fn383) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp382, ((panda$core$Int64) { 13 }), $tmp384, p_expr, &$s385);
        $tmp381 = $tmp382;
        $tmp380 = $tmp381;
        dot379 = $tmp380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        org$pandalanguage$pandac$ASTNode* $tmp389 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp391 = (($fn390) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp393 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp393);
        $tmp392 = $tmp393;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp389, ((panda$core$Int64) { 6 }), $tmp391, dot379, $tmp392);
        $tmp388 = $tmp389;
        $tmp387 = $tmp388;
        call386 = $tmp387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
        org$pandalanguage$pandac$ASTNode* $tmp397 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp399 = (($fn398) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp397, ((panda$core$Int64) { 36 }), $tmp399, &$s400);
        $tmp396 = $tmp397;
        $tmp395 = $tmp396;
        stringType394 = $tmp395;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
        org$pandalanguage$pandac$ASTNode* $tmp404 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp406 = (($fn405) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp407, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp404, ((panda$core$Int64) { 2 }), $tmp406, call386, $tmp407, stringType394);
        $tmp403 = $tmp404;
        $tmp402 = $tmp403;
        $finallyReturn400 = $tmp402;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
        $tmp378 = 0;
        goto $l376;
        $l408:;
        return $finallyReturn400;
    }
    $l376:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot379));
    dot379 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call386));
    call386 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType394));
    stringType394 = NULL;
    switch ($tmp378) {
        case 0: goto $l408;
    }
    $l410:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start414;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    panda$core$String* $tmp424;
    org$pandalanguage$pandac$ASTNode* $finallyReturn428;
    org$pandalanguage$pandac$ASTNode* $tmp430;
    org$pandalanguage$pandac$ASTNode* result433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp434;
    panda$core$MutableString* chunk435 = NULL;
    panda$core$MutableString* $tmp436;
    panda$core$MutableString* $tmp437;
    org$pandalanguage$pandac$parser$Token token441;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13444;
    panda$core$String* str449 = NULL;
    panda$core$String* $tmp450;
    panda$core$String* $tmp451;
    panda$core$Char8 $tmp453;
    org$pandalanguage$pandac$ASTNode* $finallyReturn455;
    org$pandalanguage$pandac$ASTNode* $tmp457;
    org$pandalanguage$pandac$ASTNode* $finallyReturn463;
    org$pandalanguage$pandac$ASTNode* $tmp465;
    org$pandalanguage$pandac$parser$Token escape472;
    org$pandalanguage$pandac$ASTNode* $finallyReturn475;
    org$pandalanguage$pandac$ASTNode* $tmp477;
    panda$core$String* escapeText481 = NULL;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$Char8 c485;
    panda$core$Object* $tmp486;
    panda$collections$ListView* $tmp487;
    panda$core$Char8 $match$287_21493;
    panda$core$Char8 $tmp494;
    panda$core$Char8 $tmp496;
    panda$core$Char8 $tmp497;
    panda$core$Char8 $tmp499;
    panda$core$Char8 $tmp500;
    panda$core$Char8 $tmp502;
    panda$core$Char8 $tmp503;
    panda$core$Char8 $tmp505;
    panda$core$Char8 $tmp506;
    panda$core$Char8 $tmp508;
    panda$core$Char8 $tmp509;
    panda$core$Char8 $tmp511;
    panda$core$Char8 $tmp512;
    org$pandalanguage$pandac$ASTNode* expr517 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp518;
    org$pandalanguage$pandac$ASTNode* $tmp519;
    org$pandalanguage$pandac$ASTNode* $finallyReturn520;
    org$pandalanguage$pandac$ASTNode* $tmp522;
    panda$core$String* align527 = NULL;
    panda$core$String* $tmp528;
    panda$core$String* format529 = NULL;
    panda$core$String* $tmp530;
    org$pandalanguage$pandac$parser$Token$Kind $tmp531;
    panda$core$String* $tmp533;
    panda$core$String* $tmp534;
    panda$core$String* $tmp535;
    org$pandalanguage$pandac$parser$Token$Kind $tmp537;
    panda$core$String* $tmp542;
    panda$core$String* $tmp543;
    panda$core$String* $tmp544;
    org$pandalanguage$pandac$ASTNode* $finallyReturn545;
    org$pandalanguage$pandac$ASTNode* $tmp547;
    org$pandalanguage$pandac$ASTNode* formattable553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp554;
    org$pandalanguage$pandac$ASTNode* $tmp555;
    org$pandalanguage$pandac$ASTNode* cast560 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp561;
    org$pandalanguage$pandac$ASTNode* $tmp562;
    org$pandalanguage$pandac$parser$Token$Kind $tmp566;
    org$pandalanguage$pandac$ASTNode* dot567 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp568;
    org$pandalanguage$pandac$ASTNode* $tmp569;
    panda$collections$Array* callArgs574 = NULL;
    panda$collections$Array* $tmp575;
    panda$collections$Array* $tmp576;
    org$pandalanguage$pandac$ASTNode* $tmp578;
    org$pandalanguage$pandac$ASTNode* $tmp580;
    org$pandalanguage$pandac$ASTNode* $tmp581;
    org$pandalanguage$pandac$ASTNode* $tmp582;
    panda$collections$ImmutableArray* $tmp586;
    org$pandalanguage$pandac$parser$Token$Kind $tmp589;
    org$pandalanguage$pandac$ASTNode* $finallyReturn591;
    org$pandalanguage$pandac$ASTNode* $tmp593;
    org$pandalanguage$pandac$ASTNode* $tmp601;
    org$pandalanguage$pandac$ASTNode* $tmp602;
    org$pandalanguage$pandac$ASTNode* $tmp603;
    org$pandalanguage$pandac$ASTNode* pandaType605 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp606;
    org$pandalanguage$pandac$ASTNode* $tmp607;
    org$pandalanguage$pandac$ASTNode* callTarget612 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp613;
    org$pandalanguage$pandac$ASTNode* $tmp614;
    panda$collections$Array* callArgs619 = NULL;
    panda$collections$Array* $tmp620;
    panda$collections$Array* $tmp621;
    org$pandalanguage$pandac$ASTNode* $tmp623;
    org$pandalanguage$pandac$ASTNode* $tmp625;
    org$pandalanguage$pandac$ASTNode* $tmp626;
    org$pandalanguage$pandac$ASTNode* $tmp627;
    panda$collections$ImmutableArray* $tmp631;
    panda$core$String* text634 = NULL;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$MutableString* $tmp638;
    panda$core$MutableString* $tmp639;
    panda$core$MutableString* $tmp640;
    org$pandalanguage$pandac$ASTNode* $tmp647;
    org$pandalanguage$pandac$ASTNode* $tmp648;
    org$pandalanguage$pandac$ASTNode* $tmp649;
    org$pandalanguage$pandac$ASTNode* $tmp650;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    org$pandalanguage$pandac$ASTNode* $tmp654;
    org$pandalanguage$pandac$ASTNode* $tmp655;
    org$pandalanguage$pandac$ASTNode* $tmp657;
    org$pandalanguage$pandac$ASTNode* $tmp658;
    org$pandalanguage$pandac$ASTNode* $tmp659;
    org$pandalanguage$pandac$ASTNode* $finallyReturn662;
    org$pandalanguage$pandac$ASTNode* $tmp664;
    panda$core$String* $tmp668;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp669;
    panda$core$String* $tmp674;
    org$pandalanguage$pandac$ASTNode* $finallyReturn675;
    org$pandalanguage$pandac$ASTNode* $tmp677;
    org$pandalanguage$pandac$ASTNode* $tmp678;
    org$pandalanguage$pandac$ASTNode* $tmp679;
    panda$core$String* $tmp681;
    int $tmp413;
    {
        org$pandalanguage$pandac$parser$Token $tmp415 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start414 = $tmp415;
        panda$core$Bit $tmp417 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start414.kind.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp416 = $tmp417.value;
        if (!$tmp416) goto $l418;
        panda$core$Bit $tmp419 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start414.kind.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp416 = $tmp419.value;
        $l418:;
        panda$core$Bit $tmp420 = { $tmp416 };
        if ($tmp420.value) {
        {
            panda$core$String* $tmp425 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start414);
            $tmp424 = $tmp425;
            panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s423, $tmp424);
            $tmp422 = $tmp426;
            panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s427);
            $tmp421 = $tmp428;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start414, $tmp421);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
            $tmp430 = NULL;
            $finallyReturn428 = $tmp430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
            $tmp413 = 0;
            goto $l411;
            $l431:;
            return $finallyReturn428;
        }
        }
        $tmp434 = NULL;
        result433 = $tmp434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
        panda$core$MutableString* $tmp438 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp438);
        $tmp437 = $tmp438;
        $tmp436 = $tmp437;
        chunk435 = $tmp436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
        $l439:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp442 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token441 = $tmp442;
            panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token441.kind.$rawValue, start414.kind.$rawValue);
            if ($tmp443.value) {
            {
                goto $l440;
            }
            }
            {
                $match$268_13444 = token441.kind;
                panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13444.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp445.value) {
                {
                    int $tmp448;
                    {
                        panda$core$String* $tmp452 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token441);
                        $tmp451 = $tmp452;
                        $tmp450 = $tmp451;
                        str449 = $tmp450;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp453, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp454 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str449, $tmp453);
                        if ($tmp454.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start414, &$s455);
                            $tmp457 = NULL;
                            $finallyReturn455 = $tmp457;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
                            $tmp448 = 0;
                            goto $l446;
                            $l458:;
                            $tmp413 = 1;
                            goto $l411;
                            $l459:;
                            return $finallyReturn455;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(chunk435, str449);
                    }
                    $tmp448 = -1;
                    goto $l446;
                    $l446:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str449));
                    str449 = NULL;
                    switch ($tmp448) {
                        case -1: goto $l461;
                        case 0: goto $l458;
                    }
                    $l461:;
                }
                }
                else {
                panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13444.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp462.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start414, &$s463);
                    $tmp465 = NULL;
                    $finallyReturn463 = $tmp465;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
                    $tmp413 = 2;
                    goto $l411;
                    $l466:;
                    return $finallyReturn463;
                }
                }
                else {
                panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13444.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp468.value) {
                {
                    int $tmp471;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp473 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape472 = $tmp473;
                        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape472.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp474.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start414, &$s475);
                            $tmp477 = NULL;
                            $finallyReturn475 = $tmp477;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
                            $tmp471 = 0;
                            goto $l469;
                            $l478:;
                            $tmp413 = 3;
                            goto $l411;
                            $l479:;
                            return $finallyReturn475;
                        }
                        }
                        panda$core$String* $tmp484 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape472);
                        $tmp483 = $tmp484;
                        $tmp482 = $tmp483;
                        escapeText481 = $tmp482;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
                        panda$collections$ListView* $tmp488 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText481);
                        $tmp487 = $tmp488;
                        ITable* $tmp489 = $tmp487->$class->itable;
                        while ($tmp489->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp489 = $tmp489->next;
                        }
                        $fn491 $tmp490 = $tmp489->methods[0];
                        panda$core$Object* $tmp492 = $tmp490($tmp487, ((panda$core$Int64) { 0 }));
                        $tmp486 = $tmp492;
                        c485 = ((panda$core$Char8$wrapper*) $tmp486)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp486);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                        {
                            $match$287_21493 = c485;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp494, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp495 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21493, $tmp494);
                            if ($tmp495.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp496, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk435, $tmp496);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp497, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp498 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21493, $tmp497);
                            if ($tmp498.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp499, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk435, $tmp499);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp500, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp501 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21493, $tmp500);
                            if ($tmp501.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp502, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk435, $tmp502);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp503, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp504 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21493, $tmp503);
                            if ($tmp504.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp505, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk435, $tmp505);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp506, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp507 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21493, $tmp506);
                            if ($tmp507.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp508, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk435, $tmp508);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp509, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp510 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21493, $tmp509);
                            if ($tmp510.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp511, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk435, $tmp511);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp512, ((panda$core$UInt8) { 123 }));
                            panda$core$Bit $tmp513 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21493, $tmp512);
                            if ($tmp513.value) {
                            {
                                {
                                    int $tmp516;
                                    {
                                        org$pandalanguage$pandac$ASTNode* $tmp520 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp519 = $tmp520;
                                        $tmp518 = $tmp519;
                                        expr517 = $tmp518;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
                                        if (((panda$core$Bit) { expr517 == NULL }).value) {
                                        {
                                            $tmp522 = NULL;
                                            $finallyReturn520 = $tmp522;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp522));
                                            $tmp516 = 0;
                                            goto $l514;
                                            $l523:;
                                            $tmp471 = 1;
                                            goto $l469;
                                            $l524:;
                                            $tmp413 = 4;
                                            goto $l411;
                                            $l525:;
                                            return $finallyReturn520;
                                        }
                                        }
                                        $tmp528 = NULL;
                                        align527 = $tmp528;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp528));
                                        $tmp530 = NULL;
                                        format529 = $tmp530;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp530));
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp531, ((panda$core$Int64) { 105 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp532 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp531);
                                        if (((panda$core$Bit) { $tmp532.nonnull }).value) {
                                        {
                                            {
                                                $tmp533 = align527;
                                                panda$core$String* $tmp536 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start414);
                                                $tmp535 = $tmp536;
                                                $tmp534 = $tmp535;
                                                align527 = $tmp534;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp534));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp533));
                                            }
                                        }
                                        }
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp537, ((panda$core$Int64) { 95 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp538 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp537);
                                        if (((panda$core$Bit) { $tmp538.nonnull }).value) {
                                        {
                                            int $tmp541;
                                            {
                                                {
                                                    $tmp542 = format529;
                                                    panda$core$String* $tmp545 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start414);
                                                    $tmp544 = $tmp545;
                                                    $tmp543 = $tmp544;
                                                    format529 = $tmp543;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp543));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                                                }
                                                if (((panda$core$Bit) { format529 == NULL }).value) {
                                                {
                                                    $tmp547 = NULL;
                                                    $finallyReturn545 = $tmp547;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
                                                    $tmp541 = 0;
                                                    goto $l539;
                                                    $l548:;
                                                    $tmp516 = 1;
                                                    goto $l514;
                                                    $l549:;
                                                    $tmp471 = 2;
                                                    goto $l469;
                                                    $l550:;
                                                    $tmp413 = 5;
                                                    goto $l411;
                                                    $l551:;
                                                    return $finallyReturn545;
                                                }
                                                }
                                                org$pandalanguage$pandac$ASTNode* $tmp556 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp558 = (($fn557) expr517->$class->vtable[2])(expr517);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp556, ((panda$core$Int64) { 36 }), $tmp558, &$s559);
                                                $tmp555 = $tmp556;
                                                $tmp554 = $tmp555;
                                                formattable553 = $tmp554;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                                                org$pandalanguage$pandac$ASTNode* $tmp563 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp565 = (($fn564) expr517->$class->vtable[2])(expr517);
                                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp566, ((panda$core$Int64) { 89 }));
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp563, ((panda$core$Int64) { 2 }), $tmp565, expr517, $tmp566, formattable553);
                                                $tmp562 = $tmp563;
                                                $tmp561 = $tmp562;
                                                cast560 = $tmp561;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
                                                org$pandalanguage$pandac$ASTNode* $tmp570 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp572 = (($fn571) expr517->$class->vtable[2])(expr517);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp570, ((panda$core$Int64) { 13 }), $tmp572, cast560, &$s573);
                                                $tmp569 = $tmp570;
                                                $tmp568 = $tmp569;
                                                dot567 = $tmp568;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp568));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                                                panda$collections$Array* $tmp577 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                panda$collections$Array$init($tmp577);
                                                $tmp576 = $tmp577;
                                                $tmp575 = $tmp576;
                                                callArgs574 = $tmp575;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                                                org$pandalanguage$pandac$ASTNode* $tmp579 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp579, ((panda$core$Int64) { 34 }), start414.position, format529);
                                                $tmp578 = $tmp579;
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs574, ((panda$core$Object*) $tmp578));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                                                {
                                                    $tmp580 = expr517;
                                                    org$pandalanguage$pandac$ASTNode* $tmp583 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp585 = (($fn584) expr517->$class->vtable[2])(expr517);
                                                    panda$collections$ImmutableArray* $tmp587 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs574);
                                                    $tmp586 = $tmp587;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp583, ((panda$core$Int64) { 6 }), $tmp585, dot567, $tmp586);
                                                    $tmp582 = $tmp583;
                                                    $tmp581 = $tmp582;
                                                    expr517 = $tmp581;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                                                }
                                            }
                                            $tmp541 = -1;
                                            goto $l539;
                                            $l539:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable553));
                                            formattable553 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast560));
                                            cast560 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot567));
                                            dot567 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs574));
                                            callArgs574 = NULL;
                                            switch ($tmp541) {
                                                case 0: goto $l548;
                                                case -1: goto $l588;
                                            }
                                            $l588:;
                                        }
                                        }
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp589, ((panda$core$Int64) { 100 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp591 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp589, &$s590);
                                        if (((panda$core$Bit) { !$tmp591.nonnull }).value) {
                                        {
                                            $tmp593 = NULL;
                                            $finallyReturn591 = $tmp593;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp593));
                                            $tmp516 = 2;
                                            goto $l514;
                                            $l594:;
                                            $tmp471 = 3;
                                            goto $l469;
                                            $l595:;
                                            $tmp413 = 6;
                                            goto $l411;
                                            $l596:;
                                            return $finallyReturn591;
                                        }
                                        }
                                        if (((panda$core$Bit) { align527 != NULL }).value) {
                                        {
                                            int $tmp600;
                                            {
                                                if (((panda$core$Bit) { format529 == NULL }).value) {
                                                {
                                                    {
                                                        $tmp601 = expr517;
                                                        org$pandalanguage$pandac$ASTNode* $tmp604 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr517);
                                                        $tmp603 = $tmp604;
                                                        $tmp602 = $tmp603;
                                                        expr517 = $tmp602;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                                                    }
                                                }
                                                }
                                                org$pandalanguage$pandac$ASTNode* $tmp608 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp610 = (($fn609) expr517->$class->vtable[2])(expr517);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp608, ((panda$core$Int64) { 36 }), $tmp610, &$s611);
                                                $tmp607 = $tmp608;
                                                $tmp606 = $tmp607;
                                                pandaType605 = $tmp606;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp606));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
                                                org$pandalanguage$pandac$ASTNode* $tmp615 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp617 = (($fn616) expr517->$class->vtable[2])(expr517);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp615, ((panda$core$Int64) { 13 }), $tmp617, pandaType605, &$s618);
                                                $tmp614 = $tmp615;
                                                $tmp613 = $tmp614;
                                                callTarget612 = $tmp613;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                                                panda$collections$Array* $tmp622 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                panda$collections$Array$init($tmp622);
                                                $tmp621 = $tmp622;
                                                $tmp620 = $tmp621;
                                                callArgs619 = $tmp620;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp620));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs619, ((panda$core$Object*) expr517));
                                                org$pandalanguage$pandac$ASTNode* $tmp624 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp624, ((panda$core$Int64) { 34 }), start414.position, align527);
                                                $tmp623 = $tmp624;
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs619, ((panda$core$Object*) $tmp623));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                                                {
                                                    $tmp625 = expr517;
                                                    org$pandalanguage$pandac$ASTNode* $tmp628 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp630 = (($fn629) expr517->$class->vtable[2])(expr517);
                                                    panda$collections$ImmutableArray* $tmp632 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs619);
                                                    $tmp631 = $tmp632;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp628, ((panda$core$Int64) { 6 }), $tmp630, callTarget612, $tmp631);
                                                    $tmp627 = $tmp628;
                                                    $tmp626 = $tmp627;
                                                    expr517 = $tmp626;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                                                }
                                            }
                                            $tmp600 = -1;
                                            goto $l598;
                                            $l598:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType605));
                                            pandaType605 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget612));
                                            callTarget612 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs619));
                                            callArgs619 = NULL;
                                            switch ($tmp600) {
                                                case -1: goto $l633;
                                            }
                                            $l633:;
                                        }
                                        }
                                        panda$core$String* $tmp637 = panda$core$MutableString$finish$R$panda$core$String(chunk435);
                                        $tmp636 = $tmp637;
                                        $tmp635 = $tmp636;
                                        text634 = $tmp635;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                                        {
                                            $tmp638 = chunk435;
                                            panda$core$MutableString* $tmp641 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                            panda$core$MutableString$init($tmp641);
                                            $tmp640 = $tmp641;
                                            $tmp639 = $tmp640;
                                            chunk435 = $tmp639;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp639));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                                        }
                                        panda$core$Bit $tmp644 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text634, &$s643);
                                        bool $tmp642 = $tmp644.value;
                                        if ($tmp642) goto $l645;
                                        $tmp642 = ((panda$core$Bit) { result433 != NULL }).value;
                                        $l645:;
                                        panda$core$Bit $tmp646 = { $tmp642 };
                                        if ($tmp646.value) {
                                        {
                                            {
                                                $tmp647 = result433;
                                                org$pandalanguage$pandac$ASTNode* $tmp651 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp651, ((panda$core$Int64) { 34 }), start414.position, text634);
                                                $tmp650 = $tmp651;
                                                org$pandalanguage$pandac$ASTNode* $tmp652 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result433, $tmp650);
                                                $tmp649 = $tmp652;
                                                $tmp648 = $tmp649;
                                                result433 = $tmp648;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                                            }
                                            {
                                                $tmp653 = result433;
                                                org$pandalanguage$pandac$ASTNode* $tmp656 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result433, expr517);
                                                $tmp655 = $tmp656;
                                                $tmp654 = $tmp655;
                                                result433 = $tmp654;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            {
                                                $tmp657 = result433;
                                                org$pandalanguage$pandac$ASTNode* $tmp660 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr517);
                                                $tmp659 = $tmp660;
                                                $tmp658 = $tmp659;
                                                result433 = $tmp658;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp658));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
                                            }
                                        }
                                        }
                                    }
                                    $tmp516 = -1;
                                    goto $l514;
                                    $l514:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr517));
                                    expr517 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align527));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format529));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text634));
                                    text634 = NULL;
                                    switch ($tmp516) {
                                        case 2: goto $l594;
                                        case 0: goto $l523;
                                        case 1: goto $l549;
                                        case -1: goto $l661;
                                    }
                                    $l661:;
                                }
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token441, &$s662);
                                $tmp664 = NULL;
                                $finallyReturn662 = $tmp664;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp664));
                                $tmp471 = 4;
                                goto $l469;
                                $l665:;
                                $tmp413 = 7;
                                goto $l411;
                                $l666:;
                                return $finallyReturn662;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp670 = panda$core$String$start$R$panda$core$String$Index(escapeText481);
                        panda$core$String$Index $tmp671 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText481, $tmp670);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp669, ((panda$core$String$Index$nullable) { $tmp671, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp672 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText481, $tmp669);
                        $tmp668 = $tmp672;
                        panda$core$MutableString$append$panda$core$String(chunk435, $tmp668);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
                    }
                    $tmp471 = -1;
                    goto $l469;
                    $l469:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText481));
                    escapeText481 = NULL;
                    switch ($tmp471) {
                        case 0: goto $l478;
                        case 2: goto $l550;
                        case -1: goto $l673;
                        case 1: goto $l524;
                        case 4: goto $l665;
                        case 3: goto $l595;
                    }
                    $l673:;
                }
                }
                else {
                {
                    panda$core$String* $tmp675 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token441);
                    $tmp674 = $tmp675;
                    panda$core$MutableString$append$panda$core$String(chunk435, $tmp674);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
                }
                }
                }
                }
            }
        }
        }
        $l440:;
        org$pandalanguage$pandac$ASTNode* $tmp680 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp682 = panda$core$MutableString$finish$R$panda$core$String(chunk435);
        $tmp681 = $tmp682;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp680, ((panda$core$Int64) { 34 }), start414.position, $tmp681);
        $tmp679 = $tmp680;
        org$pandalanguage$pandac$ASTNode* $tmp683 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result433, $tmp679);
        $tmp678 = $tmp683;
        $tmp677 = $tmp678;
        $finallyReturn675 = $tmp677;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp677));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
        $tmp413 = 8;
        goto $l411;
        $l684:;
        return $finallyReturn675;
    }
    $l411:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result433));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk435));
    chunk435 = NULL;
    switch ($tmp413) {
        case 2: goto $l466;
        case 0: goto $l431;
        case 4: goto $l525;
        case 8: goto $l684;
        case 3: goto $l479;
        case 7: goto $l666;
        case 1: goto $l459;
        case 6: goto $l596;
        case 5: goto $l551;
    }
    $l686:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t687;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9689;
    org$pandalanguage$pandac$ASTNode* $finallyReturn690;
    org$pandalanguage$pandac$ASTNode* $tmp692;
    org$pandalanguage$pandac$ASTNode* $tmp693;
    panda$core$String* $tmp695;
    org$pandalanguage$pandac$ASTNode* $finallyReturn698;
    org$pandalanguage$pandac$ASTNode* $tmp700;
    org$pandalanguage$pandac$ASTNode* $tmp701;
    panda$core$String* $tmp703;
    org$pandalanguage$pandac$ASTNode* $finallyReturn707;
    org$pandalanguage$pandac$ASTNode* $tmp709;
    org$pandalanguage$pandac$ASTNode* $tmp710;
    panda$core$String* $tmp712;
    panda$core$String* $tmp713;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp715;
    org$pandalanguage$pandac$ASTNode* $finallyReturn719;
    org$pandalanguage$pandac$ASTNode* $tmp721;
    org$pandalanguage$pandac$ASTNode* $tmp722;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp727;
    org$pandalanguage$pandac$ASTNode* $finallyReturn731;
    org$pandalanguage$pandac$ASTNode* $tmp733;
    org$pandalanguage$pandac$ASTNode* $tmp734;
    panda$core$String* $tmp736;
    org$pandalanguage$pandac$ASTNode* $finallyReturn740;
    org$pandalanguage$pandac$ASTNode* $tmp742;
    org$pandalanguage$pandac$ASTNode* $tmp743;
    org$pandalanguage$pandac$ASTNode* $finallyReturn746;
    org$pandalanguage$pandac$ASTNode* $tmp748;
    org$pandalanguage$pandac$ASTNode* $tmp749;
    org$pandalanguage$pandac$ASTNode* $finallyReturn752;
    org$pandalanguage$pandac$ASTNode* $tmp754;
    org$pandalanguage$pandac$ASTNode* $tmp755;
    org$pandalanguage$pandac$ASTNode* $finallyReturn758;
    org$pandalanguage$pandac$ASTNode* $tmp760;
    org$pandalanguage$pandac$ASTNode* $tmp761;
    org$pandalanguage$pandac$ASTNode* $finallyReturn764;
    org$pandalanguage$pandac$ASTNode* $tmp766;
    org$pandalanguage$pandac$ASTNode* $tmp767;
    org$pandalanguage$pandac$ASTNode* $finallyReturn774;
    org$pandalanguage$pandac$ASTNode* $tmp776;
    org$pandalanguage$pandac$ASTNode* $tmp777;
    org$pandalanguage$pandac$ASTNode* result784 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp785;
    org$pandalanguage$pandac$ASTNode* $tmp786;
    org$pandalanguage$pandac$ASTNode* $finallyReturn787;
    org$pandalanguage$pandac$ASTNode* $tmp789;
    org$pandalanguage$pandac$parser$Token$Kind $tmp792;
    org$pandalanguage$pandac$ASTNode* $finallyReturn794;
    org$pandalanguage$pandac$ASTNode* $tmp796;
    org$pandalanguage$pandac$ASTNode* $finallyReturn798;
    org$pandalanguage$pandac$ASTNode* $tmp800;
    panda$core$String* $tmp804;
    panda$core$String* $tmp805;
    panda$core$String* $tmp807;
    org$pandalanguage$pandac$ASTNode* $finallyReturn811;
    org$pandalanguage$pandac$ASTNode* $tmp813;
    org$pandalanguage$pandac$parser$Token $tmp688 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t687 = $tmp688;
    {
        $match$362_9689 = t687.kind;
        panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp690.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp694 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp696 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t687);
            $tmp695 = $tmp696;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp694, ((panda$core$Int64) { 18 }), t687.position, $tmp695);
            $tmp693 = $tmp694;
            $tmp692 = $tmp693;
            $finallyReturn690 = $tmp692;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp692));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
            return $finallyReturn690;
        }
        }
        else {
        panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp698.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp702 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp704 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t687);
            $tmp703 = $tmp704;
            panda$core$UInt64$nullable $tmp705 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp703);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp702, ((panda$core$Int64) { 20 }), t687.position, ((panda$core$UInt64) $tmp705.value));
            $tmp701 = $tmp702;
            $tmp700 = $tmp701;
            $finallyReturn698 = $tmp700;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp700));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
            return $finallyReturn698;
        }
        }
        else {
        panda$core$Bit $tmp707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp707.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp711 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp714 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t687);
            $tmp713 = $tmp714;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp715, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp716 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp713, $tmp715);
            $tmp712 = $tmp716;
            panda$core$UInt64$nullable $tmp717 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp712, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp711, ((panda$core$Int64) { 20 }), t687.position, ((panda$core$UInt64) $tmp717.value));
            $tmp710 = $tmp711;
            $tmp709 = $tmp710;
            $finallyReturn707 = $tmp709;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp709));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp710));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
            return $finallyReturn707;
        }
        }
        else {
        panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp719.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp723 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp726 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t687);
            $tmp725 = $tmp726;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp727, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp728 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp725, $tmp727);
            $tmp724 = $tmp728;
            panda$core$UInt64$nullable $tmp729 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp724, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp723, ((panda$core$Int64) { 20 }), t687.position, ((panda$core$UInt64) $tmp729.value));
            $tmp722 = $tmp723;
            $tmp721 = $tmp722;
            $finallyReturn719 = $tmp721;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp721));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp722));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
            return $finallyReturn719;
        }
        }
        else {
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp731.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp735 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp737 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t687);
            $tmp736 = $tmp737;
            panda$core$Real64$nullable $tmp738 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp736);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp735, ((panda$core$Int64) { 31 }), t687.position, ((panda$core$Real64) $tmp738.value));
            $tmp734 = $tmp735;
            $tmp733 = $tmp734;
            $finallyReturn731 = $tmp733;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
            return $finallyReturn731;
        }
        }
        else {
        panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp740.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp744 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp744, ((panda$core$Int64) { 33 }), t687.position);
            $tmp743 = $tmp744;
            $tmp742 = $tmp743;
            $finallyReturn740 = $tmp742;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
            return $finallyReturn740;
        }
        }
        else {
        panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp746.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp750 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp750, ((panda$core$Int64) { 35 }), t687.position);
            $tmp749 = $tmp750;
            $tmp748 = $tmp749;
            $finallyReturn746 = $tmp748;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
            return $finallyReturn746;
        }
        }
        else {
        panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp752.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp756 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp756, ((panda$core$Int64) { 25 }), t687.position);
            $tmp755 = $tmp756;
            $tmp754 = $tmp755;
            $finallyReturn752 = $tmp754;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp754));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
            return $finallyReturn752;
        }
        }
        else {
        panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp758.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp762 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp762, ((panda$core$Int64) { 3 }), t687.position, ((panda$core$Bit) { true }));
            $tmp761 = $tmp762;
            $tmp760 = $tmp761;
            $finallyReturn758 = $tmp760;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp760));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
            return $finallyReturn758;
        }
        }
        else {
        panda$core$Bit $tmp764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp764.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp768 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp768, ((panda$core$Int64) { 3 }), t687.position, ((panda$core$Bit) { false }));
            $tmp767 = $tmp768;
            $tmp766 = $tmp767;
            $finallyReturn764 = $tmp766;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
            return $finallyReturn764;
        }
        }
        else {
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp770 = $tmp771.value;
        if ($tmp770) goto $l772;
        panda$core$Bit $tmp773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp770 = $tmp773.value;
        $l772:;
        panda$core$Bit $tmp774 = { $tmp770 };
        if ($tmp774.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t687);
            org$pandalanguage$pandac$ASTNode* $tmp778 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp777 = $tmp778;
            $tmp776 = $tmp777;
            $finallyReturn774 = $tmp776;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp776));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp777));
            return $finallyReturn774;
        }
        }
        else {
        panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9689.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp780.value) {
        {
            int $tmp783;
            {
                org$pandalanguage$pandac$ASTNode* $tmp787 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp786 = $tmp787;
                $tmp785 = $tmp786;
                result784 = $tmp785;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                if (((panda$core$Bit) { result784 == NULL }).value) {
                {
                    $tmp789 = NULL;
                    $finallyReturn787 = $tmp789;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
                    $tmp783 = 0;
                    goto $l781;
                    $l790:;
                    return $finallyReturn787;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp792, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp794 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp792, &$s793);
                if (((panda$core$Bit) { !$tmp794.nonnull }).value) {
                {
                    $tmp796 = NULL;
                    $finallyReturn794 = $tmp796;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp796));
                    $tmp783 = 1;
                    goto $l781;
                    $l797:;
                    return $finallyReturn794;
                }
                }
                $tmp800 = result784;
                $finallyReturn798 = $tmp800;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp800));
                $tmp783 = 2;
                goto $l781;
                $l801:;
                return $finallyReturn798;
            }
            $l781:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result784));
            result784 = NULL;
            switch ($tmp783) {
                case 1: goto $l797;
                case 2: goto $l801;
                case 0: goto $l790;
            }
            $l803:;
        }
        }
        else {
        {
            panda$core$String* $tmp808 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t687);
            $tmp807 = $tmp808;
            panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s806, $tmp807);
            $tmp805 = $tmp809;
            panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp805, &$s810);
            $tmp804 = $tmp811;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t687, $tmp804);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
            $tmp813 = NULL;
            $finallyReturn811 = $tmp813;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp813));
            return $finallyReturn811;
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
    org$pandalanguage$pandac$ASTNode* $match$403_9818 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp819;
    panda$core$String* text821 = NULL;
    panda$core$String* $finallyReturn822;
    panda$core$String* $tmp824;
    org$pandalanguage$pandac$ASTNode* base828 = NULL;
    panda$core$String* field830 = NULL;
    panda$core$String* result835 = NULL;
    panda$core$String* $tmp836;
    panda$core$String* $tmp837;
    panda$core$String* $tmp839;
    panda$core$String* $tmp840;
    panda$core$String* $tmp841;
    panda$core$String* $tmp842;
    panda$core$String* $tmp843;
    panda$core$String* $finallyReturn846;
    panda$core$String* $tmp848;
    panda$core$String* $finallyReturn852;
    panda$core$String* $tmp854;
    int $tmp817;
    {
        $tmp819 = p_expr;
        $match$403_9818 = $tmp819;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp819));
        panda$core$Bit $tmp820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9818->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp820.value) {
        {
            panda$core$String** $tmp822 = ((panda$core$String**) ((char*) $match$403_9818->$data + 16));
            text821 = *$tmp822;
            $tmp824 = text821;
            $finallyReturn822 = $tmp824;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
            $tmp817 = 0;
            goto $l815;
            $l825:;
            return $finallyReturn822;
        }
        }
        else {
        panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9818->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp827.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp829 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9818->$data + 16));
            base828 = *$tmp829;
            panda$core$String** $tmp831 = ((panda$core$String**) ((char*) $match$403_9818->$data + 24));
            field830 = *$tmp831;
            int $tmp834;
            {
                panda$core$String* $tmp838 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base828);
                $tmp837 = $tmp838;
                $tmp836 = $tmp837;
                result835 = $tmp836;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp836));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
                if (((panda$core$Bit) { result835 != NULL }).value) {
                {
                    {
                        $tmp840 = result835;
                        $tmp839 = $tmp840;
                        panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s844, field830);
                        $tmp843 = $tmp845;
                        panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result835, $tmp843);
                        $tmp842 = $tmp846;
                        $tmp841 = $tmp842;
                        result835 = $tmp841;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp841));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp843));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp839));
                    }
                }
                }
                $tmp848 = result835;
                $finallyReturn846 = $tmp848;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                $tmp834 = 0;
                goto $l832;
                $l849:;
                $tmp817 = 1;
                goto $l815;
                $l850:;
                return $finallyReturn846;
            }
            $l832:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result835));
            result835 = NULL;
            switch ($tmp834) {
                case 0: goto $l849;
            }
            $l852:;
        }
        }
        else {
        {
            $tmp854 = NULL;
            $finallyReturn852 = $tmp854;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
            $tmp817 = 2;
            goto $l815;
            $l855:;
            return $finallyReturn852;
        }
        }
        }
    }
    $tmp817 = -1;
    goto $l815;
    $l815:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
    switch ($tmp817) {
        case 1: goto $l850;
        case 2: goto $l855;
        case -1: goto $l857;
        case 0: goto $l825;
    }
    $l857:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name858;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9860;
    panda$core$String* $finallyReturn945;
    panda$core$String* $tmp947;
    panda$core$String* $tmp948;
    org$pandalanguage$pandac$parser$Token token952;
    panda$core$String* $finallyReturn954;
    panda$core$String* $tmp956;
    panda$core$String* $finallyReturn958;
    panda$core$String* $tmp960;
    org$pandalanguage$pandac$parser$Token$Kind $tmp964;
    panda$core$String* $finallyReturn966;
    panda$core$String* $tmp968;
    org$pandalanguage$pandac$parser$Token$Kind $tmp970;
    panda$core$String* $finallyReturn971;
    panda$core$String* $tmp973;
    panda$core$String* $finallyReturn975;
    panda$core$String* $tmp977;
    panda$core$String* $tmp980;
    panda$core$String* $tmp981;
    panda$core$String* $tmp983;
    panda$core$String* $finallyReturn987;
    panda$core$String* $tmp989;
    org$pandalanguage$pandac$parser$Token $tmp859 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name858 = $tmp859;
    {
        $match$423_9860 = name858.kind;
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp881 = $tmp882.value;
        if ($tmp881) goto $l883;
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp881 = $tmp884.value;
        $l883:;
        panda$core$Bit $tmp885 = { $tmp881 };
        bool $tmp880 = $tmp885.value;
        if ($tmp880) goto $l886;
        panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp880 = $tmp887.value;
        $l886:;
        panda$core$Bit $tmp888 = { $tmp880 };
        bool $tmp879 = $tmp888.value;
        if ($tmp879) goto $l889;
        panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp879 = $tmp890.value;
        $l889:;
        panda$core$Bit $tmp891 = { $tmp879 };
        bool $tmp878 = $tmp891.value;
        if ($tmp878) goto $l892;
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp878 = $tmp893.value;
        $l892:;
        panda$core$Bit $tmp894 = { $tmp878 };
        bool $tmp877 = $tmp894.value;
        if ($tmp877) goto $l895;
        panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp877 = $tmp896.value;
        $l895:;
        panda$core$Bit $tmp897 = { $tmp877 };
        bool $tmp876 = $tmp897.value;
        if ($tmp876) goto $l898;
        panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp876 = $tmp899.value;
        $l898:;
        panda$core$Bit $tmp900 = { $tmp876 };
        bool $tmp875 = $tmp900.value;
        if ($tmp875) goto $l901;
        panda$core$Bit $tmp902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp875 = $tmp902.value;
        $l901:;
        panda$core$Bit $tmp903 = { $tmp875 };
        bool $tmp874 = $tmp903.value;
        if ($tmp874) goto $l904;
        panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp874 = $tmp905.value;
        $l904:;
        panda$core$Bit $tmp906 = { $tmp874 };
        bool $tmp873 = $tmp906.value;
        if ($tmp873) goto $l907;
        panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp873 = $tmp908.value;
        $l907:;
        panda$core$Bit $tmp909 = { $tmp873 };
        bool $tmp872 = $tmp909.value;
        if ($tmp872) goto $l910;
        panda$core$Bit $tmp911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp872 = $tmp911.value;
        $l910:;
        panda$core$Bit $tmp912 = { $tmp872 };
        bool $tmp871 = $tmp912.value;
        if ($tmp871) goto $l913;
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp871 = $tmp914.value;
        $l913:;
        panda$core$Bit $tmp915 = { $tmp871 };
        bool $tmp870 = $tmp915.value;
        if ($tmp870) goto $l916;
        panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp870 = $tmp917.value;
        $l916:;
        panda$core$Bit $tmp918 = { $tmp870 };
        bool $tmp869 = $tmp918.value;
        if ($tmp869) goto $l919;
        panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp869 = $tmp920.value;
        $l919:;
        panda$core$Bit $tmp921 = { $tmp869 };
        bool $tmp868 = $tmp921.value;
        if ($tmp868) goto $l922;
        panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp868 = $tmp923.value;
        $l922:;
        panda$core$Bit $tmp924 = { $tmp868 };
        bool $tmp867 = $tmp924.value;
        if ($tmp867) goto $l925;
        panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp867 = $tmp926.value;
        $l925:;
        panda$core$Bit $tmp927 = { $tmp867 };
        bool $tmp866 = $tmp927.value;
        if ($tmp866) goto $l928;
        panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp866 = $tmp929.value;
        $l928:;
        panda$core$Bit $tmp930 = { $tmp866 };
        bool $tmp865 = $tmp930.value;
        if ($tmp865) goto $l931;
        panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp865 = $tmp932.value;
        $l931:;
        panda$core$Bit $tmp933 = { $tmp865 };
        bool $tmp864 = $tmp933.value;
        if ($tmp864) goto $l934;
        panda$core$Bit $tmp935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp864 = $tmp935.value;
        $l934:;
        panda$core$Bit $tmp936 = { $tmp864 };
        bool $tmp863 = $tmp936.value;
        if ($tmp863) goto $l937;
        panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp863 = $tmp938.value;
        $l937:;
        panda$core$Bit $tmp939 = { $tmp863 };
        bool $tmp862 = $tmp939.value;
        if ($tmp862) goto $l940;
        panda$core$Bit $tmp941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp862 = $tmp941.value;
        $l940:;
        panda$core$Bit $tmp942 = { $tmp862 };
        bool $tmp861 = $tmp942.value;
        if ($tmp861) goto $l943;
        panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp861 = $tmp944.value;
        $l943:;
        panda$core$Bit $tmp945 = { $tmp861 };
        if ($tmp945.value) {
        {
            panda$core$String* $tmp949 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name858);
            $tmp948 = $tmp949;
            $tmp947 = $tmp948;
            $finallyReturn945 = $tmp947;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
            return $finallyReturn945;
        }
        }
        else {
        panda$core$Bit $tmp951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp951.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp953 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token952 = $tmp953;
            panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token952.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp954.value) {
            {
                $tmp956 = &$s957;
                $finallyReturn954 = $tmp956;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp956));
                return $finallyReturn954;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token952);
                $tmp960 = &$s961;
                $finallyReturn958 = $tmp960;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
                return $finallyReturn958;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9860.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp963.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp964, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp966 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp964, &$s965);
            if (((panda$core$Bit) { !$tmp966.nonnull }).value) {
            {
                $tmp968 = NULL;
                $finallyReturn966 = $tmp968;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
                return $finallyReturn966;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp970, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp971 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp970);
            if (((panda$core$Bit) { $tmp971.nonnull }).value) {
            {
                $tmp973 = &$s974;
                $finallyReturn971 = $tmp973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp973));
                return $finallyReturn971;
            }
            }
            $tmp977 = &$s978;
            $finallyReturn975 = $tmp977;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
            return $finallyReturn975;
        }
        }
        else {
        {
            panda$core$String* $tmp984 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name858);
            $tmp983 = $tmp984;
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s982, $tmp983);
            $tmp981 = $tmp985;
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, &$s986);
            $tmp980 = $tmp987;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name858, $tmp980);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
            $tmp989 = NULL;
            $finallyReturn987 = $tmp989;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp989));
            return $finallyReturn987;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $finallyReturn990;
    org$pandalanguage$pandac$ASTNode* $tmp992;
    org$pandalanguage$pandac$ASTNode* $tmp993;
    org$pandalanguage$pandac$ASTNode* $tmp994 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    $tmp993 = $tmp994;
    $tmp992 = $tmp993;
    $finallyReturn990 = $tmp992;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
    return $finallyReturn990;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start999;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1000;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1002;
    org$pandalanguage$pandac$ASTNode* $tmp1004;
    panda$core$MutableString* name1007 = NULL;
    panda$core$MutableString* $tmp1008;
    panda$core$MutableString* $tmp1009;
    panda$core$String* $tmp1011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1016;
    org$pandalanguage$pandac$parser$Token$nullable id1018;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1019;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1021;
    org$pandalanguage$pandac$ASTNode* $tmp1023;
    panda$core$Char8 $tmp1026;
    panda$core$String* $tmp1027;
    panda$core$String* finalName1029 = NULL;
    panda$core$String* $tmp1030;
    panda$core$String* $tmp1031;
    org$pandalanguage$pandac$ASTNode* result1033 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1034;
    org$pandalanguage$pandac$ASTNode* $tmp1035;
    panda$collections$Array* children1042 = NULL;
    panda$collections$Array* $tmp1043;
    panda$collections$Array* $tmp1044;
    org$pandalanguage$pandac$ASTNode* t1046 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1047;
    org$pandalanguage$pandac$ASTNode* $tmp1048;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1049;
    org$pandalanguage$pandac$ASTNode* $tmp1051;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1054;
    org$pandalanguage$pandac$ASTNode* $tmp1056;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1063;
    org$pandalanguage$pandac$ASTNode* $tmp1065;
    org$pandalanguage$pandac$ASTNode* $tmp1066;
    org$pandalanguage$pandac$ASTNode* $tmp1067;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1068;
    org$pandalanguage$pandac$ASTNode* $tmp1070;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1073;
    org$pandalanguage$pandac$ASTNode* $tmp1075;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1079;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1081;
    org$pandalanguage$pandac$ASTNode* $tmp1083;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1086;
    org$pandalanguage$pandac$ASTNode* $tmp1088;
    org$pandalanguage$pandac$ASTNode* $tmp1092;
    org$pandalanguage$pandac$ASTNode* $tmp1093;
    org$pandalanguage$pandac$ASTNode* $tmp1094;
    panda$collections$ImmutableArray* $tmp1096;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1099;
    org$pandalanguage$pandac$ASTNode* $tmp1101;
    org$pandalanguage$pandac$ASTNode* $tmp1102;
    org$pandalanguage$pandac$ASTNode* $tmp1103;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1104;
    org$pandalanguage$pandac$ASTNode* $tmp1106;
    int $tmp998;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1000, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1002 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1000, &$s1001);
        start999 = $tmp1002;
        if (((panda$core$Bit) { !start999.nonnull }).value) {
        {
            $tmp1004 = NULL;
            $finallyReturn1002 = $tmp1004;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1004));
            $tmp998 = 0;
            goto $l996;
            $l1005:;
            return $finallyReturn1002;
        }
        }
        panda$core$MutableString* $tmp1010 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1012 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start999.value));
        $tmp1011 = $tmp1012;
        panda$core$MutableString$init$panda$core$String($tmp1010, $tmp1011);
        $tmp1009 = $tmp1010;
        $tmp1008 = $tmp1009;
        name1007 = $tmp1008;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1011));
        $l1013:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1016, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1017 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1016);
        bool $tmp1015 = ((panda$core$Bit) { $tmp1017.nonnull }).value;
        if (!$tmp1015) goto $l1014;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1019, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1021 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1019, &$s1020);
            id1018 = $tmp1021;
            if (((panda$core$Bit) { !id1018.nonnull }).value) {
            {
                $tmp1023 = NULL;
                $finallyReturn1021 = $tmp1023;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1023));
                $tmp998 = 1;
                goto $l996;
                $l1024:;
                return $finallyReturn1021;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1026, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1007, $tmp1026);
            panda$core$String* $tmp1028 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1018.value));
            $tmp1027 = $tmp1028;
            panda$core$MutableString$append$panda$core$String(name1007, $tmp1027);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1027));
        }
        goto $l1013;
        $l1014:;
        panda$core$String* $tmp1032 = panda$core$MutableString$finish$R$panda$core$String(name1007);
        $tmp1031 = $tmp1032;
        $tmp1030 = $tmp1031;
        finalName1029 = $tmp1030;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1031));
        org$pandalanguage$pandac$ASTNode* $tmp1036 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1036, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, finalName1029);
        $tmp1035 = $tmp1036;
        $tmp1034 = $tmp1035;
        result1033 = $tmp1034;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
        org$pandalanguage$pandac$parser$Token $tmp1037 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1037.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1038.value) {
        {
            int $tmp1041;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1045 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1045);
                $tmp1044 = $tmp1045;
                $tmp1043 = $tmp1044;
                children1042 = $tmp1043;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1043));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1044));
                panda$collections$Array$add$panda$collections$Array$T(children1042, ((panda$core$Object*) result1033));
                org$pandalanguage$pandac$ASTNode* $tmp1049 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1048 = $tmp1049;
                $tmp1047 = $tmp1048;
                t1046 = $tmp1047;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                if (((panda$core$Bit) { t1046 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1051 = result1033;
                        $finallyReturn1049 = $tmp1051;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                        $tmp1041 = 0;
                        goto $l1039;
                        $l1052:;
                        $tmp998 = 2;
                        goto $l996;
                        $l1053:;
                        return $finallyReturn1049;
                    }
                    }
                    $tmp1056 = NULL;
                    $finallyReturn1054 = $tmp1056;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
                    $tmp1041 = 1;
                    goto $l1039;
                    $l1057:;
                    $tmp998 = 3;
                    goto $l996;
                    $l1058:;
                    return $finallyReturn1054;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1042, ((panda$core$Object*) t1046));
                $l1060:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1063, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1064 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1063);
                bool $tmp1062 = ((panda$core$Bit) { $tmp1064.nonnull }).value;
                if (!$tmp1062) goto $l1061;
                {
                    {
                        $tmp1065 = t1046;
                        org$pandalanguage$pandac$ASTNode* $tmp1068 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1067 = $tmp1068;
                        $tmp1066 = $tmp1067;
                        t1046 = $tmp1066;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1066));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1067));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
                    }
                    if (((panda$core$Bit) { t1046 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1070 = result1033;
                            $finallyReturn1068 = $tmp1070;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
                            $tmp1041 = 2;
                            goto $l1039;
                            $l1071:;
                            $tmp998 = 4;
                            goto $l996;
                            $l1072:;
                            return $finallyReturn1068;
                        }
                        }
                        $tmp1075 = NULL;
                        $finallyReturn1073 = $tmp1075;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                        $tmp1041 = 3;
                        goto $l1039;
                        $l1076:;
                        $tmp998 = 5;
                        goto $l996;
                        $l1077:;
                        return $finallyReturn1073;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1042, ((panda$core$Object*) t1046));
                }
                goto $l1060;
                $l1061:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1079, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1081 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1079, &$s1080);
                if (((panda$core$Bit) { !$tmp1081.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1083 = result1033;
                        $finallyReturn1081 = $tmp1083;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1083));
                        $tmp1041 = 4;
                        goto $l1039;
                        $l1084:;
                        $tmp998 = 6;
                        goto $l996;
                        $l1085:;
                        return $finallyReturn1081;
                    }
                    }
                    $tmp1088 = NULL;
                    $finallyReturn1086 = $tmp1088;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1088));
                    $tmp1041 = 5;
                    goto $l1039;
                    $l1089:;
                    $tmp998 = 7;
                    goto $l996;
                    $l1090:;
                    return $finallyReturn1086;
                }
                }
                {
                    $tmp1092 = result1033;
                    org$pandalanguage$pandac$ASTNode* $tmp1095 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1097 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1042);
                    $tmp1096 = $tmp1097;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1095, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, finalName1029, $tmp1096);
                    $tmp1094 = $tmp1095;
                    $tmp1093 = $tmp1094;
                    result1033 = $tmp1093;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1093));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1094));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1041 = -1;
            goto $l1039;
            $l1039:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1042));
            children1042 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1046));
            t1046 = NULL;
            switch ($tmp1041) {
                case 4: goto $l1084;
                case 2: goto $l1071;
                case 0: goto $l1052;
                case -1: goto $l1098;
                case 3: goto $l1076;
                case 5: goto $l1089;
                case 1: goto $l1057;
            }
            $l1098:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1099, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1100 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1099);
        if (((panda$core$Bit) { $tmp1100.nonnull }).value) {
        {
            {
                $tmp1101 = result1033;
                org$pandalanguage$pandac$ASTNode* $tmp1104 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1104, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, result1033);
                $tmp1103 = $tmp1104;
                $tmp1102 = $tmp1103;
                result1033 = $tmp1102;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1102));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1101));
            }
        }
        }
        $tmp1106 = result1033;
        $finallyReturn1104 = $tmp1106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1106));
        $tmp998 = 8;
        goto $l996;
        $l1107:;
        return $finallyReturn1104;
    }
    $l996:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1007));
    name1007 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1029));
    finalName1029 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1033));
    result1033 = NULL;
    switch ($tmp998) {
        case 5: goto $l1077;
        case 1: goto $l1024;
        case 4: goto $l1072;
        case 6: goto $l1085;
        case 2: goto $l1053;
        case 7: goto $l1090;
        case 3: goto $l1058;
        case 8: goto $l1107;
        case 0: goto $l1005;
    }
    $l1109:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1113 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1114;
    org$pandalanguage$pandac$ASTNode* $tmp1115;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1116;
    org$pandalanguage$pandac$ASTNode* $tmp1118;
    org$pandalanguage$pandac$parser$Token token1123;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_131125;
    panda$core$Object* $tmp1130;
    panda$collections$Array* args1132 = NULL;
    panda$collections$Array* $tmp1133;
    panda$collections$Array* $tmp1134;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1136;
    org$pandalanguage$pandac$ASTNode* expr1141 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1142;
    org$pandalanguage$pandac$ASTNode* $tmp1143;
    panda$core$Object* $tmp1145;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1146;
    org$pandalanguage$pandac$ASTNode* $tmp1148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1156;
    org$pandalanguage$pandac$ASTNode* $tmp1158;
    org$pandalanguage$pandac$ASTNode* $tmp1159;
    org$pandalanguage$pandac$ASTNode* $tmp1160;
    panda$core$Object* $tmp1162;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1163;
    org$pandalanguage$pandac$ASTNode* $tmp1165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1170;
    panda$core$Object* $tmp1173;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1174;
    org$pandalanguage$pandac$ASTNode* $tmp1176;
    panda$core$Object* $tmp1182;
    org$pandalanguage$pandac$ASTNode* $tmp1184;
    org$pandalanguage$pandac$ASTNode* $tmp1185;
    org$pandalanguage$pandac$ASTNode* $tmp1186;
    panda$collections$ImmutableArray* $tmp1188;
    org$pandalanguage$pandac$ASTNode* arg1195 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1196;
    org$pandalanguage$pandac$ASTNode* $tmp1197;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1198;
    org$pandalanguage$pandac$ASTNode* $tmp1200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1204;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1206;
    org$pandalanguage$pandac$ASTNode* $tmp1208;
    org$pandalanguage$pandac$ASTNode* $tmp1212;
    org$pandalanguage$pandac$ASTNode* $tmp1213;
    org$pandalanguage$pandac$ASTNode* $tmp1214;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1216;
    panda$core$String* name1222 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1223;
    panda$core$String* $tmp1225;
    panda$core$String* $tmp1226;
    panda$core$String* $tmp1228;
    panda$core$String* $tmp1229;
    panda$core$String* $tmp1230;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1231;
    org$pandalanguage$pandac$ASTNode* $tmp1233;
    org$pandalanguage$pandac$ASTNode* $tmp1237;
    org$pandalanguage$pandac$ASTNode* $tmp1238;
    org$pandalanguage$pandac$ASTNode* $tmp1239;
    org$pandalanguage$pandac$ASTNode* target1246 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1247;
    org$pandalanguage$pandac$ASTNode* $tmp1248;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1249;
    org$pandalanguage$pandac$ASTNode* $tmp1251;
    org$pandalanguage$pandac$ASTNode* $tmp1255;
    org$pandalanguage$pandac$ASTNode* $tmp1256;
    org$pandalanguage$pandac$ASTNode* $tmp1257;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1259;
    panda$core$String* name1265 = NULL;
    panda$core$String* $tmp1266;
    panda$core$String* $tmp1267;
    panda$core$MutableString* finalName1272 = NULL;
    panda$core$MutableString* $tmp1273;
    panda$core$MutableString* $tmp1274;
    panda$core$Char8 $tmp1276;
    panda$collections$Array* types1277 = NULL;
    panda$collections$Array* $tmp1278;
    panda$collections$Array* $tmp1279;
    org$pandalanguage$pandac$ASTNode* $tmp1281;
    org$pandalanguage$pandac$ASTNode* t1285 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1286;
    org$pandalanguage$pandac$ASTNode* $tmp1287;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1288;
    org$pandalanguage$pandac$ASTNode* $tmp1290;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1298;
    org$pandalanguage$pandac$ASTNode* $tmp1300;
    org$pandalanguage$pandac$ASTNode* $tmp1301;
    org$pandalanguage$pandac$ASTNode* $tmp1302;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1303;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1311;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1313;
    org$pandalanguage$pandac$ASTNode* $tmp1315;
    panda$core$Char8 $tmp1320;
    panda$core$Bit shouldAccept1321;
    panda$core$Object* $tmp1322;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_291324;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    org$pandalanguage$pandac$ASTNode* $tmp1340;
    org$pandalanguage$pandac$ASTNode* $tmp1341;
    panda$core$String* $tmp1345;
    panda$collections$ImmutableArray* $tmp1347;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1350;
    org$pandalanguage$pandac$ASTNode* $tmp1352;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1357;
    org$pandalanguage$pandac$ASTNode* $tmp1359;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1363;
    org$pandalanguage$pandac$ASTNode* $tmp1365;
    int $tmp1112;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1116 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1115 = $tmp1116;
        $tmp1114 = $tmp1115;
        result1113 = $tmp1114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1115));
        if (((panda$core$Bit) { result1113 == NULL }).value) {
        {
            $tmp1118 = NULL;
            $finallyReturn1116 = $tmp1118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
            $tmp1112 = 0;
            goto $l1110;
            $l1119:;
            return $finallyReturn1116;
        }
        }
        $l1121:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1124 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1123 = $tmp1124;
            {
                $match$540_131125 = token1123.kind;
                panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_131125.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1126.value) {
                {
                    int $tmp1129;
                    {
                        panda$core$Bit$wrapper* $tmp1131;
                        $tmp1131 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1131->value = ((panda$core$Bit) { true });
                        $tmp1130 = ((panda$core$Object*) $tmp1131);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1130);
                        panda$core$Panda$unref$panda$core$Object($tmp1130);
                        panda$collections$Array* $tmp1135 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1135);
                        $tmp1134 = $tmp1135;
                        $tmp1133 = $tmp1134;
                        args1132 = $tmp1133;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1134));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1136, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1137 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1136);
                        if (((panda$core$Bit) { !$tmp1137.nonnull }).value) {
                        {
                            int $tmp1140;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1144 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1143 = $tmp1144;
                                $tmp1142 = $tmp1143;
                                expr1141 = $tmp1142;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1142));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1143));
                                if (((panda$core$Bit) { expr1141 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1146 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1145 = $tmp1146;
                                    panda$core$Panda$unref$panda$core$Object($tmp1145);
                                    $tmp1148 = NULL;
                                    $finallyReturn1146 = $tmp1148;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1148));
                                    $tmp1140 = 0;
                                    goto $l1138;
                                    $l1149:;
                                    $tmp1129 = 0;
                                    goto $l1127;
                                    $l1150:;
                                    $tmp1112 = 1;
                                    goto $l1110;
                                    $l1151:;
                                    return $finallyReturn1146;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1132, ((panda$core$Object*) expr1141));
                                $l1153:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1156, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1157 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1156);
                                bool $tmp1155 = ((panda$core$Bit) { $tmp1157.nonnull }).value;
                                if (!$tmp1155) goto $l1154;
                                {
                                    {
                                        $tmp1158 = expr1141;
                                        org$pandalanguage$pandac$ASTNode* $tmp1161 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1160 = $tmp1161;
                                        $tmp1159 = $tmp1160;
                                        expr1141 = $tmp1159;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1159));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1158));
                                    }
                                    if (((panda$core$Bit) { expr1141 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1163 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1162 = $tmp1163;
                                        panda$core$Panda$unref$panda$core$Object($tmp1162);
                                        $tmp1165 = NULL;
                                        $finallyReturn1163 = $tmp1165;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1165));
                                        $tmp1140 = 1;
                                        goto $l1138;
                                        $l1166:;
                                        $tmp1129 = 1;
                                        goto $l1127;
                                        $l1167:;
                                        $tmp1112 = 2;
                                        goto $l1110;
                                        $l1168:;
                                        return $finallyReturn1163;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1132, ((panda$core$Object*) expr1141));
                                }
                                goto $l1153;
                                $l1154:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1170, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1172 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1170, &$s1171);
                                if (((panda$core$Bit) { !$tmp1172.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1174 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1173 = $tmp1174;
                                    panda$core$Panda$unref$panda$core$Object($tmp1173);
                                    $tmp1176 = NULL;
                                    $finallyReturn1174 = $tmp1176;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1176));
                                    $tmp1140 = 2;
                                    goto $l1138;
                                    $l1177:;
                                    $tmp1129 = 2;
                                    goto $l1127;
                                    $l1178:;
                                    $tmp1112 = 3;
                                    goto $l1110;
                                    $l1179:;
                                    return $finallyReturn1174;
                                }
                                }
                            }
                            $tmp1140 = -1;
                            goto $l1138;
                            $l1138:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1141));
                            expr1141 = NULL;
                            switch ($tmp1140) {
                                case -1: goto $l1181;
                                case 0: goto $l1149;
                                case 1: goto $l1166;
                                case 2: goto $l1177;
                            }
                            $l1181:;
                        }
                        }
                        panda$core$Object* $tmp1183 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1182 = $tmp1183;
                        panda$core$Panda$unref$panda$core$Object($tmp1182);
                        {
                            $tmp1184 = result1113;
                            org$pandalanguage$pandac$ASTNode* $tmp1187 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1189 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1132);
                            $tmp1188 = $tmp1189;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1187, ((panda$core$Int64) { 6 }), token1123.position, result1113, $tmp1188);
                            $tmp1186 = $tmp1187;
                            $tmp1185 = $tmp1186;
                            result1113 = $tmp1185;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1185));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
                        }
                    }
                    $tmp1129 = -1;
                    goto $l1127;
                    $l1127:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1132));
                    args1132 = NULL;
                    switch ($tmp1129) {
                        case 0: goto $l1150;
                        case 2: goto $l1178;
                        case 1: goto $l1167;
                        case -1: goto $l1190;
                    }
                    $l1190:;
                }
                }
                else {
                panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_131125.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1191.value) {
                {
                    int $tmp1194;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1198 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1197 = $tmp1198;
                        $tmp1196 = $tmp1197;
                        arg1195 = $tmp1196;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
                        if (((panda$core$Bit) { arg1195 == NULL }).value) {
                        {
                            $tmp1200 = NULL;
                            $finallyReturn1198 = $tmp1200;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1200));
                            $tmp1194 = 0;
                            goto $l1192;
                            $l1201:;
                            $tmp1112 = 4;
                            goto $l1110;
                            $l1202:;
                            return $finallyReturn1198;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1204, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1206 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1204, &$s1205);
                        if (((panda$core$Bit) { !$tmp1206.nonnull }).value) {
                        {
                            $tmp1208 = NULL;
                            $finallyReturn1206 = $tmp1208;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
                            $tmp1194 = 1;
                            goto $l1192;
                            $l1209:;
                            $tmp1112 = 5;
                            goto $l1110;
                            $l1210:;
                            return $finallyReturn1206;
                        }
                        }
                        {
                            $tmp1212 = result1113;
                            org$pandalanguage$pandac$ASTNode* $tmp1215 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1216, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1215, ((panda$core$Int64) { 2 }), token1123.position, result1113, $tmp1216, arg1195);
                            $tmp1214 = $tmp1215;
                            $tmp1213 = $tmp1214;
                            result1113 = $tmp1213;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1213));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1212));
                        }
                    }
                    $tmp1194 = -1;
                    goto $l1192;
                    $l1192:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1195));
                    arg1195 = NULL;
                    switch ($tmp1194) {
                        case 0: goto $l1201;
                        case -1: goto $l1217;
                        case 1: goto $l1209;
                    }
                    $l1217:;
                }
                }
                else {
                panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_131125.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1218.value) {
                {
                    int $tmp1221;
                    {
                        memset(&name1222, 0, sizeof(name1222));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1223, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1224 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1223);
                        if (((panda$core$Bit) { $tmp1224.nonnull }).value) {
                        {
                            {
                                $tmp1225 = name1222;
                                $tmp1226 = &$s1227;
                                name1222 = $tmp1226;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1225));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1228 = name1222;
                                panda$core$String* $tmp1231 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1230 = $tmp1231;
                                $tmp1229 = $tmp1230;
                                name1222 = $tmp1229;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1229));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1230));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
                            }
                            if (((panda$core$Bit) { name1222 == NULL }).value) {
                            {
                                $tmp1233 = NULL;
                                $finallyReturn1231 = $tmp1233;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
                                $tmp1221 = 0;
                                goto $l1219;
                                $l1234:;
                                $tmp1112 = 6;
                                goto $l1110;
                                $l1235:;
                                return $finallyReturn1231;
                            }
                            }
                        }
                        }
                        {
                            $tmp1237 = result1113;
                            org$pandalanguage$pandac$ASTNode* $tmp1240 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1240, ((panda$core$Int64) { 13 }), token1123.position, result1113, name1222);
                            $tmp1239 = $tmp1240;
                            $tmp1238 = $tmp1239;
                            result1113 = $tmp1238;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1238));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1239));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
                        }
                    }
                    $tmp1221 = -1;
                    goto $l1219;
                    $l1219:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1222));
                    switch ($tmp1221) {
                        case -1: goto $l1241;
                        case 0: goto $l1234;
                    }
                    $l1241:;
                }
                }
                else {
                panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_131125.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1242.value) {
                {
                    int $tmp1245;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1249 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1248 = $tmp1249;
                        $tmp1247 = $tmp1248;
                        target1246 = $tmp1247;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1247));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1248));
                        if (((panda$core$Bit) { target1246 == NULL }).value) {
                        {
                            $tmp1251 = NULL;
                            $finallyReturn1249 = $tmp1251;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
                            $tmp1245 = 0;
                            goto $l1243;
                            $l1252:;
                            $tmp1112 = 7;
                            goto $l1110;
                            $l1253:;
                            return $finallyReturn1249;
                        }
                        }
                        {
                            $tmp1255 = result1113;
                            org$pandalanguage$pandac$ASTNode* $tmp1258 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1259, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1258, ((panda$core$Int64) { 2 }), token1123.position, result1113, $tmp1259, target1246);
                            $tmp1257 = $tmp1258;
                            $tmp1256 = $tmp1257;
                            result1113 = $tmp1256;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1256));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1257));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
                        }
                    }
                    $tmp1245 = -1;
                    goto $l1243;
                    $l1243:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1246));
                    target1246 = NULL;
                    switch ($tmp1245) {
                        case 0: goto $l1252;
                        case -1: goto $l1260;
                    }
                    $l1260:;
                }
                }
                else {
                panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_131125.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1261.value) {
                {
                    int $tmp1264;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1123);
                        panda$core$String* $tmp1268 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1113);
                        $tmp1267 = $tmp1268;
                        $tmp1266 = $tmp1267;
                        name1265 = $tmp1266;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                        if (((panda$core$Bit) { name1265 != NULL }).value) {
                        {
                            int $tmp1271;
                            {
                                panda$core$MutableString* $tmp1275 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                panda$core$MutableString$init$panda$core$String($tmp1275, name1265);
                                $tmp1274 = $tmp1275;
                                $tmp1273 = $tmp1274;
                                finalName1272 = $tmp1273;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1273));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1274));
                                panda$core$Char8$init$panda$core$UInt8(&$tmp1276, ((panda$core$UInt8) { 60 }));
                                panda$core$MutableString$append$panda$core$Char8(finalName1272, $tmp1276);
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1280 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1280);
                                $tmp1279 = $tmp1280;
                                $tmp1278 = $tmp1279;
                                types1277 = $tmp1278;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                                org$pandalanguage$pandac$ASTNode* $tmp1282 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$Position $tmp1284 = (($fn1283) result1113->$class->vtable[2])(result1113);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1282, ((panda$core$Int64) { 36 }), $tmp1284, name1265);
                                $tmp1281 = $tmp1282;
                                panda$collections$Array$add$panda$collections$Array$T(types1277, ((panda$core$Object*) $tmp1281));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
                                org$pandalanguage$pandac$ASTNode* $tmp1288 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1287 = $tmp1288;
                                $tmp1286 = $tmp1287;
                                t1285 = $tmp1286;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
                                if (((panda$core$Bit) { t1285 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1290 = result1113;
                                    $finallyReturn1288 = $tmp1290;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1290));
                                    $tmp1271 = 0;
                                    goto $l1269;
                                    $l1291:;
                                    $tmp1264 = 0;
                                    goto $l1262;
                                    $l1292:;
                                    $tmp1112 = 8;
                                    goto $l1110;
                                    $l1293:;
                                    return $finallyReturn1288;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1277, ((panda$core$Object*) t1285));
                                panda$core$MutableString$append$panda$core$Object(finalName1272, ((panda$core$Object*) t1285));
                                $l1295:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1298, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1299 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1298);
                                bool $tmp1297 = ((panda$core$Bit) { $tmp1299.nonnull }).value;
                                if (!$tmp1297) goto $l1296;
                                {
                                    {
                                        $tmp1300 = t1285;
                                        org$pandalanguage$pandac$ASTNode* $tmp1303 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1302 = $tmp1303;
                                        $tmp1301 = $tmp1302;
                                        t1285 = $tmp1301;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1301));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
                                    }
                                    if (((panda$core$Bit) { t1285 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1305 = result1113;
                                        $finallyReturn1303 = $tmp1305;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                                        $tmp1271 = 1;
                                        goto $l1269;
                                        $l1306:;
                                        $tmp1264 = 1;
                                        goto $l1262;
                                        $l1307:;
                                        $tmp1112 = 9;
                                        goto $l1110;
                                        $l1308:;
                                        return $finallyReturn1303;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1277, ((panda$core$Object*) t1285));
                                    panda$core$MutableString$append$panda$core$String(finalName1272, &$s1310);
                                    panda$core$MutableString$append$panda$core$Object(finalName1272, ((panda$core$Object*) t1285));
                                }
                                goto $l1295;
                                $l1296:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1311, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1313 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1311, &$s1312);
                                if (((panda$core$Bit) { !$tmp1313.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1315 = result1113;
                                    $finallyReturn1313 = $tmp1315;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
                                    $tmp1271 = 2;
                                    goto $l1269;
                                    $l1316:;
                                    $tmp1264 = 2;
                                    goto $l1262;
                                    $l1317:;
                                    $tmp1112 = 10;
                                    goto $l1110;
                                    $l1318:;
                                    return $finallyReturn1313;
                                }
                                }
                                panda$core$Char8$init$panda$core$UInt8(&$tmp1320, ((panda$core$UInt8) { 62 }));
                                panda$core$MutableString$append$panda$core$Char8(finalName1272, $tmp1320);
                                memset(&shouldAccept1321, 0, sizeof(shouldAccept1321));
                                panda$core$Object* $tmp1323 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                $tmp1322 = $tmp1323;
                                panda$core$Panda$unref$panda$core$Object($tmp1322);
                                if (((panda$core$Bit$wrapper*) $tmp1322)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1325 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$652_291324 = $tmp1325.kind;
                                        panda$core$Bit $tmp1329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291324.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1328 = $tmp1329.value;
                                        if ($tmp1328) goto $l1330;
                                        panda$core$Bit $tmp1331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291324.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1328 = $tmp1331.value;
                                        $l1330:;
                                        panda$core$Bit $tmp1332 = { $tmp1328 };
                                        bool $tmp1327 = $tmp1332.value;
                                        if ($tmp1327) goto $l1333;
                                        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291324.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1327 = $tmp1334.value;
                                        $l1333:;
                                        panda$core$Bit $tmp1335 = { $tmp1327 };
                                        bool $tmp1326 = $tmp1335.value;
                                        if ($tmp1326) goto $l1336;
                                        panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_291324.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1326 = $tmp1337.value;
                                        $l1336:;
                                        panda$core$Bit $tmp1338 = { $tmp1326 };
                                        if ($tmp1338.value) {
                                        {
                                            shouldAccept1321 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1321 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1321 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1321.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1339 = result1113;
                                        org$pandalanguage$pandac$ASTNode* $tmp1342 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1344 = (($fn1343) result1113->$class->vtable[2])(result1113);
                                        panda$core$String* $tmp1346 = panda$core$MutableString$finish$R$panda$core$String(finalName1272);
                                        $tmp1345 = $tmp1346;
                                        panda$collections$ImmutableArray* $tmp1348 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1277);
                                        $tmp1347 = $tmp1348;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1342, ((panda$core$Int64) { 17 }), $tmp1344, $tmp1345, $tmp1347);
                                        $tmp1341 = $tmp1342;
                                        $tmp1340 = $tmp1341;
                                        result1113 = $tmp1340;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
                                    }
                                    $tmp1271 = 3;
                                    goto $l1269;
                                    $l1349:;
                                    $tmp1264 = 3;
                                    goto $l1262;
                                    $l1350:;
                                    goto $l1121;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1352 = result1113;
                                    $finallyReturn1350 = $tmp1352;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                                    $tmp1271 = 4;
                                    goto $l1269;
                                    $l1353:;
                                    $tmp1264 = 4;
                                    goto $l1262;
                                    $l1354:;
                                    $tmp1112 = 11;
                                    goto $l1110;
                                    $l1355:;
                                    return $finallyReturn1350;
                                }
                                }
                            }
                            $tmp1271 = -1;
                            goto $l1269;
                            $l1269:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1272));
                            finalName1272 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1277));
                            types1277 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1285));
                            t1285 = NULL;
                            switch ($tmp1271) {
                                case 4: goto $l1353;
                                case 0: goto $l1291;
                                case -1: goto $l1357;
                                case 1: goto $l1306;
                                case 2: goto $l1316;
                                case 3: goto $l1349;
                            }
                            $l1357:;
                        }
                        }
                        $tmp1359 = result1113;
                        $finallyReturn1357 = $tmp1359;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
                        $tmp1264 = 5;
                        goto $l1262;
                        $l1360:;
                        $tmp1112 = 12;
                        goto $l1110;
                        $l1361:;
                        return $finallyReturn1357;
                    }
                    $l1262:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1265));
                    name1265 = NULL;
                    switch ($tmp1264) {
                        case 1: goto $l1307;
                        case 3: goto $l1350;
                        case 2: goto $l1317;
                        case 4: goto $l1354;
                        case 0: goto $l1292;
                        case 5: goto $l1360;
                    }
                    $l1363:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1123);
                    $tmp1365 = result1113;
                    $finallyReturn1363 = $tmp1365;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
                    $tmp1112 = 13;
                    goto $l1110;
                    $l1366:;
                    return $finallyReturn1363;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1122:;
    }
    $tmp1112 = -1;
    goto $l1110;
    $l1110:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1113));
    result1113 = NULL;
    switch ($tmp1112) {
        case 3: goto $l1179;
        case -1: goto $l1368;
        case 6: goto $l1235;
        case 13: goto $l1366;
        case 1: goto $l1151;
        case 4: goto $l1202;
        case 8: goto $l1293;
        case 2: goto $l1168;
        case 10: goto $l1318;
        case 11: goto $l1355;
        case 12: goto $l1361;
        case 5: goto $l1210;
        case 7: goto $l1253;
        case 0: goto $l1119;
        case 9: goto $l1308;
    }
    $l1368:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1372 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1373;
    org$pandalanguage$pandac$ASTNode* $tmp1374;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1375;
    org$pandalanguage$pandac$ASTNode* $tmp1377;
    org$pandalanguage$pandac$parser$Token$nullable op1385;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1386;
    org$pandalanguage$pandac$ASTNode* next1389 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1390;
    org$pandalanguage$pandac$ASTNode* $tmp1391;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1392;
    org$pandalanguage$pandac$ASTNode* $tmp1394;
    org$pandalanguage$pandac$ASTNode* $tmp1398;
    org$pandalanguage$pandac$ASTNode* $tmp1399;
    org$pandalanguage$pandac$ASTNode* $tmp1400;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1402;
    org$pandalanguage$pandac$ASTNode* $tmp1404;
    int $tmp1371;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1375 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1374 = $tmp1375;
        $tmp1373 = $tmp1374;
        result1372 = $tmp1373;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
        if (((panda$core$Bit) { result1372 == NULL }).value) {
        {
            $tmp1377 = NULL;
            $finallyReturn1375 = $tmp1377;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
            $tmp1371 = 0;
            goto $l1369;
            $l1378:;
            return $finallyReturn1375;
        }
        }
        $l1380:;
        while (true) {
        {
            int $tmp1384;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1386, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1387 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1386);
                op1385 = $tmp1387;
                if (((panda$core$Bit) { !op1385.nonnull }).value) {
                {
                    $tmp1384 = 0;
                    goto $l1382;
                    $l1388:;
                    goto $l1381;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1392 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1391 = $tmp1392;
                $tmp1390 = $tmp1391;
                next1389 = $tmp1390;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
                if (((panda$core$Bit) { next1389 == NULL }).value) {
                {
                    $tmp1394 = NULL;
                    $finallyReturn1392 = $tmp1394;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                    $tmp1384 = 1;
                    goto $l1382;
                    $l1395:;
                    $tmp1371 = 1;
                    goto $l1369;
                    $l1396:;
                    return $finallyReturn1392;
                }
                }
                {
                    $tmp1398 = result1372;
                    org$pandalanguage$pandac$ASTNode* $tmp1401 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1401, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1385.value).position, result1372, ((org$pandalanguage$pandac$parser$Token) op1385.value).kind, next1389);
                    $tmp1400 = $tmp1401;
                    $tmp1399 = $tmp1400;
                    result1372 = $tmp1399;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1399));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
                }
            }
            $tmp1384 = -1;
            goto $l1382;
            $l1382:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1389));
            next1389 = NULL;
            switch ($tmp1384) {
                case 0: goto $l1388;
                case 1: goto $l1395;
                case -1: goto $l1402;
            }
            $l1402:;
        }
        }
        $l1381:;
        $tmp1404 = result1372;
        $finallyReturn1402 = $tmp1404;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1404));
        $tmp1371 = 2;
        goto $l1369;
        $l1405:;
        return $finallyReturn1402;
    }
    $l1369:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1372));
    result1372 = NULL;
    switch ($tmp1371) {
        case 2: goto $l1405;
        case 1: goto $l1396;
        case 0: goto $l1378;
    }
    $l1407:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1408;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_91410;
    org$pandalanguage$pandac$ASTNode* base1423 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1424;
    org$pandalanguage$pandac$ASTNode* $tmp1425;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1426;
    org$pandalanguage$pandac$ASTNode* $tmp1428;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1430;
    org$pandalanguage$pandac$ASTNode* $tmp1432;
    org$pandalanguage$pandac$ASTNode* $tmp1433;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1437;
    org$pandalanguage$pandac$ASTNode* $tmp1439;
    org$pandalanguage$pandac$ASTNode* $tmp1440;
    org$pandalanguage$pandac$parser$Token $tmp1409 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1408 = $tmp1409;
    {
        $match$709_91410 = op1408.kind;
        panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_91410.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1412 = $tmp1413.value;
        if ($tmp1412) goto $l1414;
        panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_91410.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1412 = $tmp1415.value;
        $l1414:;
        panda$core$Bit $tmp1416 = { $tmp1412 };
        bool $tmp1411 = $tmp1416.value;
        if ($tmp1411) goto $l1417;
        panda$core$Bit $tmp1418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_91410.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1411 = $tmp1418.value;
        $l1417:;
        panda$core$Bit $tmp1419 = { $tmp1411 };
        if ($tmp1419.value) {
        {
            int $tmp1422;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1426 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1425 = $tmp1426;
                $tmp1424 = $tmp1425;
                base1423 = $tmp1424;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
                if (((panda$core$Bit) { base1423 == NULL }).value) {
                {
                    $tmp1428 = NULL;
                    $finallyReturn1426 = $tmp1428;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1428));
                    $tmp1422 = 0;
                    goto $l1420;
                    $l1429:;
                    return $finallyReturn1426;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1434 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1434, ((panda$core$Int64) { 29 }), op1408.position, op1408.kind, base1423);
                $tmp1433 = $tmp1434;
                $tmp1432 = $tmp1433;
                $finallyReturn1430 = $tmp1432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
                $tmp1422 = 1;
                goto $l1420;
                $l1435:;
                return $finallyReturn1430;
            }
            $l1420:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1423));
            base1423 = NULL;
            switch ($tmp1422) {
                case 1: goto $l1435;
                case 0: goto $l1429;
            }
            $l1437:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1408);
            org$pandalanguage$pandac$ASTNode* $tmp1441 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1440 = $tmp1441;
            $tmp1439 = $tmp1440;
            $finallyReturn1437 = $tmp1439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
            return $finallyReturn1437;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1446 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1447;
    org$pandalanguage$pandac$ASTNode* $tmp1448;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1449;
    org$pandalanguage$pandac$ASTNode* $tmp1451;
    org$pandalanguage$pandac$parser$Token op1456;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_131458;
    org$pandalanguage$pandac$ASTNode* next1487 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1488;
    org$pandalanguage$pandac$ASTNode* $tmp1489;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1490;
    org$pandalanguage$pandac$ASTNode* $tmp1492;
    org$pandalanguage$pandac$ASTNode* $tmp1496;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    org$pandalanguage$pandac$ASTNode* $tmp1498;
    org$pandalanguage$pandac$parser$Token nextToken1502;
    org$pandalanguage$pandac$ASTNode* next1508 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1509;
    org$pandalanguage$pandac$ASTNode* $tmp1510;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1511;
    org$pandalanguage$pandac$ASTNode* $tmp1513;
    org$pandalanguage$pandac$ASTNode* $tmp1517;
    org$pandalanguage$pandac$ASTNode* $tmp1518;
    org$pandalanguage$pandac$ASTNode* $tmp1519;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1521;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1522;
    org$pandalanguage$pandac$ASTNode* $tmp1524;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1526;
    org$pandalanguage$pandac$ASTNode* $tmp1528;
    int $tmp1445;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1449 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1448 = $tmp1449;
        $tmp1447 = $tmp1448;
        result1446 = $tmp1447;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
        if (((panda$core$Bit) { result1446 == NULL }).value) {
        {
            $tmp1451 = NULL;
            $finallyReturn1449 = $tmp1451;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
            $tmp1445 = 0;
            goto $l1443;
            $l1452:;
            return $finallyReturn1449;
        }
        }
        $l1454:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1457 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1456 = $tmp1457;
            {
                $match$735_131458 = op1456.kind;
                panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1464 = $tmp1465.value;
                if ($tmp1464) goto $l1466;
                panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1464 = $tmp1467.value;
                $l1466:;
                panda$core$Bit $tmp1468 = { $tmp1464 };
                bool $tmp1463 = $tmp1468.value;
                if ($tmp1463) goto $l1469;
                panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1463 = $tmp1470.value;
                $l1469:;
                panda$core$Bit $tmp1471 = { $tmp1463 };
                bool $tmp1462 = $tmp1471.value;
                if ($tmp1462) goto $l1472;
                panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1462 = $tmp1473.value;
                $l1472:;
                panda$core$Bit $tmp1474 = { $tmp1462 };
                bool $tmp1461 = $tmp1474.value;
                if ($tmp1461) goto $l1475;
                panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1461 = $tmp1476.value;
                $l1475:;
                panda$core$Bit $tmp1477 = { $tmp1461 };
                bool $tmp1460 = $tmp1477.value;
                if ($tmp1460) goto $l1478;
                panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1460 = $tmp1479.value;
                $l1478:;
                panda$core$Bit $tmp1480 = { $tmp1460 };
                bool $tmp1459 = $tmp1480.value;
                if ($tmp1459) goto $l1481;
                panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1459 = $tmp1482.value;
                $l1481:;
                panda$core$Bit $tmp1483 = { $tmp1459 };
                if ($tmp1483.value) {
                {
                    int $tmp1486;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1490 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1489 = $tmp1490;
                        $tmp1488 = $tmp1489;
                        next1487 = $tmp1488;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1488));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1489));
                        if (((panda$core$Bit) { next1487 == NULL }).value) {
                        {
                            $tmp1492 = NULL;
                            $finallyReturn1490 = $tmp1492;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
                            $tmp1486 = 0;
                            goto $l1484;
                            $l1493:;
                            $tmp1445 = 1;
                            goto $l1443;
                            $l1494:;
                            return $finallyReturn1490;
                        }
                        }
                        {
                            $tmp1496 = result1446;
                            org$pandalanguage$pandac$ASTNode* $tmp1499 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1499, ((panda$core$Int64) { 2 }), op1456.position, result1446, op1456.kind, next1487);
                            $tmp1498 = $tmp1499;
                            $tmp1497 = $tmp1498;
                            result1446 = $tmp1497;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1498));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                        }
                    }
                    $tmp1486 = -1;
                    goto $l1484;
                    $l1484:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1487));
                    next1487 = NULL;
                    switch ($tmp1486) {
                        case 0: goto $l1493;
                        case -1: goto $l1500;
                    }
                    $l1500:;
                }
                }
                else {
                panda$core$Bit $tmp1501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_131458.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1501.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp1503 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken1502 = $tmp1503;
                    panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1502.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp1504.value) {
                    {
                        int $tmp1507;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1511 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1510 = $tmp1511;
                            $tmp1509 = $tmp1510;
                            next1508 = $tmp1509;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                            if (((panda$core$Bit) { next1508 == NULL }).value) {
                            {
                                $tmp1513 = NULL;
                                $finallyReturn1511 = $tmp1513;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                                $tmp1507 = 0;
                                goto $l1505;
                                $l1514:;
                                $tmp1445 = 2;
                                goto $l1443;
                                $l1515:;
                                return $finallyReturn1511;
                            }
                            }
                            {
                                $tmp1517 = result1446;
                                org$pandalanguage$pandac$ASTNode* $tmp1520 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1521, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1520, ((panda$core$Int64) { 2 }), op1456.position, result1446, $tmp1521, next1508);
                                $tmp1519 = $tmp1520;
                                $tmp1518 = $tmp1519;
                                result1446 = $tmp1518;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1518));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
                            }
                        }
                        $tmp1507 = -1;
                        goto $l1505;
                        $l1505:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1508));
                        next1508 = NULL;
                        switch ($tmp1507) {
                            case -1: goto $l1522;
                            case 0: goto $l1514;
                        }
                        $l1522:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1502);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1456);
                        $tmp1524 = result1446;
                        $finallyReturn1522 = $tmp1524;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
                        $tmp1445 = 3;
                        goto $l1443;
                        $l1525:;
                        return $finallyReturn1522;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1456);
                    $tmp1528 = result1446;
                    $finallyReturn1526 = $tmp1528;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
                    $tmp1445 = 4;
                    goto $l1443;
                    $l1529:;
                    return $finallyReturn1526;
                }
                }
                }
            }
        }
        }
        $l1455:;
    }
    $tmp1445 = -1;
    goto $l1443;
    $l1443:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1446));
    result1446 = NULL;
    switch ($tmp1445) {
        case 4: goto $l1529;
        case 2: goto $l1515;
        case -1: goto $l1531;
        case 3: goto $l1525;
        case 0: goto $l1452;
        case 1: goto $l1494;
    }
    $l1531:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1535 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1536;
    org$pandalanguage$pandac$ASTNode* $tmp1537;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1538;
    org$pandalanguage$pandac$ASTNode* $tmp1540;
    org$pandalanguage$pandac$parser$Token op1545;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_131547;
    org$pandalanguage$pandac$ASTNode* next1560 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1561;
    org$pandalanguage$pandac$ASTNode* $tmp1562;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1563;
    org$pandalanguage$pandac$ASTNode* $tmp1565;
    org$pandalanguage$pandac$ASTNode* $tmp1569;
    org$pandalanguage$pandac$ASTNode* $tmp1570;
    org$pandalanguage$pandac$ASTNode* $tmp1571;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1573;
    org$pandalanguage$pandac$ASTNode* $tmp1575;
    int $tmp1534;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1538 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1537 = $tmp1538;
        $tmp1536 = $tmp1537;
        result1535 = $tmp1536;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
        if (((panda$core$Bit) { result1535 == NULL }).value) {
        {
            $tmp1540 = NULL;
            $finallyReturn1538 = $tmp1540;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1540));
            $tmp1534 = 0;
            goto $l1532;
            $l1541:;
            return $finallyReturn1538;
        }
        }
        $l1543:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1546 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1545 = $tmp1546;
            {
                $match$776_131547 = op1545.kind;
                panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_131547.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp1549 = $tmp1550.value;
                if ($tmp1549) goto $l1551;
                panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_131547.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp1549 = $tmp1552.value;
                $l1551:;
                panda$core$Bit $tmp1553 = { $tmp1549 };
                bool $tmp1548 = $tmp1553.value;
                if ($tmp1548) goto $l1554;
                panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_131547.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp1548 = $tmp1555.value;
                $l1554:;
                panda$core$Bit $tmp1556 = { $tmp1548 };
                if ($tmp1556.value) {
                {
                    int $tmp1559;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1563 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1562 = $tmp1563;
                        $tmp1561 = $tmp1562;
                        next1560 = $tmp1561;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1561));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1562));
                        if (((panda$core$Bit) { next1560 == NULL }).value) {
                        {
                            $tmp1565 = NULL;
                            $finallyReturn1563 = $tmp1565;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                            $tmp1559 = 0;
                            goto $l1557;
                            $l1566:;
                            $tmp1534 = 1;
                            goto $l1532;
                            $l1567:;
                            return $finallyReturn1563;
                        }
                        }
                        {
                            $tmp1569 = result1535;
                            org$pandalanguage$pandac$ASTNode* $tmp1572 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1572, ((panda$core$Int64) { 2 }), op1545.position, result1535, op1545.kind, next1560);
                            $tmp1571 = $tmp1572;
                            $tmp1570 = $tmp1571;
                            result1535 = $tmp1570;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
                        }
                    }
                    $tmp1559 = -1;
                    goto $l1557;
                    $l1557:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1560));
                    next1560 = NULL;
                    switch ($tmp1559) {
                        case 0: goto $l1566;
                        case -1: goto $l1573;
                    }
                    $l1573:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1545);
                    $tmp1575 = result1535;
                    $finallyReturn1573 = $tmp1575;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1575));
                    $tmp1534 = 2;
                    goto $l1532;
                    $l1576:;
                    return $finallyReturn1573;
                }
                }
            }
        }
        }
        $l1544:;
    }
    $tmp1534 = -1;
    goto $l1532;
    $l1532:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1535));
    result1535 = NULL;
    switch ($tmp1534) {
        case 1: goto $l1567;
        case 2: goto $l1576;
        case 0: goto $l1541;
        case -1: goto $l1578;
    }
    $l1578:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1582 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_91583;
    org$pandalanguage$pandac$ASTNode* $tmp1590;
    org$pandalanguage$pandac$ASTNode* $tmp1591;
    org$pandalanguage$pandac$ASTNode* $tmp1592;
    org$pandalanguage$pandac$ASTNode* $tmp1593;
    org$pandalanguage$pandac$ASTNode* $tmp1594;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1595;
    org$pandalanguage$pandac$ASTNode* $tmp1597;
    org$pandalanguage$pandac$parser$Token op1600;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_91602;
    org$pandalanguage$pandac$parser$Token next1611;
    org$pandalanguage$pandac$ASTNode* right1613 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1623;
    org$pandalanguage$pandac$ASTNode* $tmp1624;
    org$pandalanguage$pandac$ASTNode* $tmp1625;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1626;
    org$pandalanguage$pandac$ASTNode* $tmp1628;
    org$pandalanguage$pandac$ASTNode* $tmp1632;
    org$pandalanguage$pandac$ASTNode* $tmp1633;
    org$pandalanguage$pandac$ASTNode* step1634 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1635;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    org$pandalanguage$pandac$ASTNode* $tmp1638;
    org$pandalanguage$pandac$ASTNode* $tmp1639;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1640;
    org$pandalanguage$pandac$ASTNode* $tmp1642;
    org$pandalanguage$pandac$ASTNode* $tmp1646;
    org$pandalanguage$pandac$ASTNode* $tmp1647;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1647;
    org$pandalanguage$pandac$ASTNode* $tmp1649;
    org$pandalanguage$pandac$ASTNode* $tmp1650;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1656;
    org$pandalanguage$pandac$ASTNode* $tmp1658;
    int $tmp1581;
    {
        memset(&result1582, 0, sizeof(result1582));
        {
            org$pandalanguage$pandac$parser$Token $tmp1584 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$796_91583 = $tmp1584.kind;
            panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_91583.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1585 = $tmp1586.value;
            if ($tmp1585) goto $l1587;
            panda$core$Bit $tmp1588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_91583.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1585 = $tmp1588.value;
            $l1587:;
            panda$core$Bit $tmp1589 = { $tmp1585 };
            if ($tmp1589.value) {
            {
                {
                    $tmp1590 = result1582;
                    $tmp1591 = NULL;
                    result1582 = $tmp1591;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1591));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
                }
            }
            }
            else {
            {
                {
                    $tmp1592 = result1582;
                    org$pandalanguage$pandac$ASTNode* $tmp1595 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1594 = $tmp1595;
                    $tmp1593 = $tmp1594;
                    result1582 = $tmp1593;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1593));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
                }
                if (((panda$core$Bit) { result1582 == NULL }).value) {
                {
                    $tmp1597 = NULL;
                    $finallyReturn1595 = $tmp1597;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1597));
                    $tmp1581 = 0;
                    goto $l1579;
                    $l1598:;
                    return $finallyReturn1595;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp1601 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1600 = $tmp1601;
        {
            $match$806_91602 = op1600.kind;
            panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_91602.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1603 = $tmp1604.value;
            if ($tmp1603) goto $l1605;
            panda$core$Bit $tmp1606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_91602.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1603 = $tmp1606.value;
            $l1605:;
            panda$core$Bit $tmp1607 = { $tmp1603 };
            if ($tmp1607.value) {
            {
                int $tmp1610;
                {
                    org$pandalanguage$pandac$parser$Token $tmp1612 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next1611 = $tmp1612;
                    memset(&right1613, 0, sizeof(right1613));
                    panda$core$Bit $tmp1616 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1611.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp1615 = $tmp1616.value;
                    if (!$tmp1615) goto $l1617;
                    panda$core$Bit $tmp1618 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1611.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp1615 = $tmp1618.value;
                    $l1617:;
                    panda$core$Bit $tmp1619 = { $tmp1615 };
                    bool $tmp1614 = $tmp1619.value;
                    if (!$tmp1614) goto $l1620;
                    panda$core$Bit $tmp1621 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1611.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp1614 = $tmp1621.value;
                    $l1620:;
                    panda$core$Bit $tmp1622 = { $tmp1614 };
                    if ($tmp1622.value) {
                    {
                        {
                            $tmp1623 = right1613;
                            org$pandalanguage$pandac$ASTNode* $tmp1626 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1625 = $tmp1626;
                            $tmp1624 = $tmp1625;
                            right1613 = $tmp1624;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1624));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1623));
                        }
                        if (((panda$core$Bit) { right1613 == NULL }).value) {
                        {
                            $tmp1628 = NULL;
                            $finallyReturn1626 = $tmp1628;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1628));
                            $tmp1610 = 0;
                            goto $l1608;
                            $l1629:;
                            $tmp1581 = 1;
                            goto $l1579;
                            $l1630:;
                            return $finallyReturn1626;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1632 = right1613;
                            $tmp1633 = NULL;
                            right1613 = $tmp1633;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1633));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1632));
                        }
                    }
                    }
                    memset(&step1634, 0, sizeof(step1634));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1635, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1636 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1635);
                    if (((panda$core$Bit) { $tmp1636.nonnull }).value) {
                    {
                        {
                            $tmp1637 = step1634;
                            org$pandalanguage$pandac$ASTNode* $tmp1640 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1639 = $tmp1640;
                            $tmp1638 = $tmp1639;
                            step1634 = $tmp1638;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1638));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                        }
                        if (((panda$core$Bit) { step1634 == NULL }).value) {
                        {
                            $tmp1642 = NULL;
                            $finallyReturn1640 = $tmp1642;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1642));
                            $tmp1610 = 1;
                            goto $l1608;
                            $l1643:;
                            $tmp1581 = 2;
                            goto $l1579;
                            $l1644:;
                            return $finallyReturn1640;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1646 = step1634;
                            $tmp1647 = NULL;
                            step1634 = $tmp1647;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1647));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1646));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1651 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op1600.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp1651, ((panda$core$Int64) { 30 }), op1600.position, result1582, right1613, $tmp1652, step1634);
                    $tmp1650 = $tmp1651;
                    $tmp1649 = $tmp1650;
                    $finallyReturn1647 = $tmp1649;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1650));
                    $tmp1610 = 2;
                    goto $l1608;
                    $l1653:;
                    $tmp1581 = 3;
                    goto $l1579;
                    $l1654:;
                    return $finallyReturn1647;
                }
                $l1608:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1613));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1634));
                switch ($tmp1610) {
                    case 1: goto $l1643;
                    case 0: goto $l1629;
                    case 2: goto $l1653;
                }
                $l1656:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1600);
                $tmp1658 = result1582;
                $finallyReturn1656 = $tmp1658;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1658));
                $tmp1581 = 4;
                goto $l1579;
                $l1659:;
                return $finallyReturn1656;
            }
            }
        }
    }
    $tmp1581 = -1;
    goto $l1579;
    $l1579:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1582));
    switch ($tmp1581) {
        case 0: goto $l1598;
        case -1: goto $l1661;
        case 3: goto $l1654;
        case 2: goto $l1644;
        case 1: goto $l1630;
        case 4: goto $l1659;
    }
    $l1661:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1665 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1666;
    org$pandalanguage$pandac$ASTNode* $tmp1667;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1668;
    org$pandalanguage$pandac$ASTNode* $tmp1670;
    org$pandalanguage$pandac$parser$Token op1675;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_131677;
    org$pandalanguage$pandac$ASTNode* next1710 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1711;
    org$pandalanguage$pandac$ASTNode* $tmp1712;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1713;
    org$pandalanguage$pandac$ASTNode* $tmp1715;
    org$pandalanguage$pandac$ASTNode* $tmp1719;
    org$pandalanguage$pandac$ASTNode* $tmp1720;
    org$pandalanguage$pandac$ASTNode* $tmp1721;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1723;
    org$pandalanguage$pandac$ASTNode* $tmp1725;
    int $tmp1664;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1668 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1667 = $tmp1668;
        $tmp1666 = $tmp1667;
        result1665 = $tmp1666;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1666));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
        if (((panda$core$Bit) { result1665 == NULL }).value) {
        {
            $tmp1670 = NULL;
            $finallyReturn1668 = $tmp1670;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
            $tmp1664 = 0;
            goto $l1662;
            $l1671:;
            return $finallyReturn1668;
        }
        }
        $l1673:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1676 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1675 = $tmp1676;
            {
                $match$849_131677 = op1675.kind;
                panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp1684 = $tmp1685.value;
                if ($tmp1684) goto $l1686;
                panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp1684 = $tmp1687.value;
                $l1686:;
                panda$core$Bit $tmp1688 = { $tmp1684 };
                bool $tmp1683 = $tmp1688.value;
                if ($tmp1683) goto $l1689;
                panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp1683 = $tmp1690.value;
                $l1689:;
                panda$core$Bit $tmp1691 = { $tmp1683 };
                bool $tmp1682 = $tmp1691.value;
                if ($tmp1682) goto $l1692;
                panda$core$Bit $tmp1693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp1682 = $tmp1693.value;
                $l1692:;
                panda$core$Bit $tmp1694 = { $tmp1682 };
                bool $tmp1681 = $tmp1694.value;
                if ($tmp1681) goto $l1695;
                panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp1681 = $tmp1696.value;
                $l1695:;
                panda$core$Bit $tmp1697 = { $tmp1681 };
                bool $tmp1680 = $tmp1697.value;
                if ($tmp1680) goto $l1698;
                panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp1680 = $tmp1699.value;
                $l1698:;
                panda$core$Bit $tmp1700 = { $tmp1680 };
                bool $tmp1679 = $tmp1700.value;
                if ($tmp1679) goto $l1701;
                panda$core$Bit $tmp1702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp1679 = $tmp1702.value;
                $l1701:;
                panda$core$Bit $tmp1703 = { $tmp1679 };
                bool $tmp1678 = $tmp1703.value;
                if ($tmp1678) goto $l1704;
                panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_131677.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp1678 = $tmp1705.value;
                $l1704:;
                panda$core$Bit $tmp1706 = { $tmp1678 };
                if ($tmp1706.value) {
                {
                    int $tmp1709;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1713 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1712 = $tmp1713;
                        $tmp1711 = $tmp1712;
                        next1710 = $tmp1711;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1711));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1712));
                        if (((panda$core$Bit) { next1710 == NULL }).value) {
                        {
                            $tmp1715 = NULL;
                            $finallyReturn1713 = $tmp1715;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1715));
                            $tmp1709 = 0;
                            goto $l1707;
                            $l1716:;
                            $tmp1664 = 1;
                            goto $l1662;
                            $l1717:;
                            return $finallyReturn1713;
                        }
                        }
                        {
                            $tmp1719 = result1665;
                            org$pandalanguage$pandac$ASTNode* $tmp1722 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1722, ((panda$core$Int64) { 2 }), op1675.position, result1665, op1675.kind, next1710);
                            $tmp1721 = $tmp1722;
                            $tmp1720 = $tmp1721;
                            result1665 = $tmp1720;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1719));
                        }
                    }
                    $tmp1709 = -1;
                    goto $l1707;
                    $l1707:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1710));
                    next1710 = NULL;
                    switch ($tmp1709) {
                        case -1: goto $l1723;
                        case 0: goto $l1716;
                    }
                    $l1723:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1675);
                    $tmp1725 = result1665;
                    $finallyReturn1723 = $tmp1725;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1725));
                    $tmp1664 = 2;
                    goto $l1662;
                    $l1726:;
                    return $finallyReturn1723;
                }
                }
            }
        }
        }
        $l1674:;
    }
    $tmp1664 = -1;
    goto $l1662;
    $l1662:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1665));
    result1665 = NULL;
    switch ($tmp1664) {
        case 2: goto $l1726;
        case 1: goto $l1717;
        case 0: goto $l1671;
        case -1: goto $l1728;
    }
    $l1728:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1732 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1733;
    org$pandalanguage$pandac$ASTNode* $tmp1734;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1735;
    org$pandalanguage$pandac$ASTNode* $tmp1737;
    org$pandalanguage$pandac$parser$Token op1742;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_131744;
    org$pandalanguage$pandac$ASTNode* next1753 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1754;
    org$pandalanguage$pandac$ASTNode* $tmp1755;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1756;
    org$pandalanguage$pandac$ASTNode* $tmp1758;
    org$pandalanguage$pandac$ASTNode* $tmp1762;
    org$pandalanguage$pandac$ASTNode* $tmp1763;
    org$pandalanguage$pandac$ASTNode* $tmp1764;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1766;
    org$pandalanguage$pandac$ASTNode* $tmp1768;
    int $tmp1731;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1735 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1734 = $tmp1735;
        $tmp1733 = $tmp1734;
        result1732 = $tmp1733;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1734));
        if (((panda$core$Bit) { result1732 == NULL }).value) {
        {
            $tmp1737 = NULL;
            $finallyReturn1735 = $tmp1737;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
            $tmp1731 = 0;
            goto $l1729;
            $l1738:;
            return $finallyReturn1735;
        }
        }
        $l1740:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1743 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1742 = $tmp1743;
            {
                $match$880_131744 = op1742.kind;
                panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131744.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp1745 = $tmp1746.value;
                if ($tmp1745) goto $l1747;
                panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_131744.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp1745 = $tmp1748.value;
                $l1747:;
                panda$core$Bit $tmp1749 = { $tmp1745 };
                if ($tmp1749.value) {
                {
                    int $tmp1752;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1756 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1755 = $tmp1756;
                        $tmp1754 = $tmp1755;
                        next1753 = $tmp1754;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1754));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
                        if (((panda$core$Bit) { next1753 == NULL }).value) {
                        {
                            $tmp1758 = NULL;
                            $finallyReturn1756 = $tmp1758;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
                            $tmp1752 = 0;
                            goto $l1750;
                            $l1759:;
                            $tmp1731 = 1;
                            goto $l1729;
                            $l1760:;
                            return $finallyReturn1756;
                        }
                        }
                        {
                            $tmp1762 = result1732;
                            org$pandalanguage$pandac$ASTNode* $tmp1765 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1765, ((panda$core$Int64) { 2 }), op1742.position, result1732, op1742.kind, next1753);
                            $tmp1764 = $tmp1765;
                            $tmp1763 = $tmp1764;
                            result1732 = $tmp1763;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1762));
                        }
                    }
                    $tmp1752 = -1;
                    goto $l1750;
                    $l1750:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1753));
                    next1753 = NULL;
                    switch ($tmp1752) {
                        case -1: goto $l1766;
                        case 0: goto $l1759;
                    }
                    $l1766:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1742);
                    $tmp1768 = result1732;
                    $finallyReturn1766 = $tmp1768;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
                    $tmp1731 = 2;
                    goto $l1729;
                    $l1769:;
                    return $finallyReturn1766;
                }
                }
            }
        }
        }
        $l1741:;
    }
    $tmp1731 = -1;
    goto $l1729;
    $l1729:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1732));
    result1732 = NULL;
    switch ($tmp1731) {
        case -1: goto $l1771;
        case 1: goto $l1760;
        case 2: goto $l1769;
        case 0: goto $l1738;
    }
    $l1771:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1775 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1776;
    org$pandalanguage$pandac$ASTNode* $tmp1777;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1778;
    org$pandalanguage$pandac$ASTNode* $tmp1780;
    org$pandalanguage$pandac$parser$Token$nullable op1788;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1789;
    org$pandalanguage$pandac$ASTNode* next1792 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1793;
    org$pandalanguage$pandac$ASTNode* $tmp1794;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1795;
    org$pandalanguage$pandac$ASTNode* $tmp1797;
    org$pandalanguage$pandac$ASTNode* $tmp1801;
    org$pandalanguage$pandac$ASTNode* $tmp1802;
    org$pandalanguage$pandac$ASTNode* $tmp1803;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1805;
    org$pandalanguage$pandac$ASTNode* $tmp1807;
    int $tmp1774;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1778 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1777 = $tmp1778;
        $tmp1776 = $tmp1777;
        result1775 = $tmp1776;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
        if (((panda$core$Bit) { result1775 == NULL }).value) {
        {
            $tmp1780 = NULL;
            $finallyReturn1778 = $tmp1780;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1780));
            $tmp1774 = 0;
            goto $l1772;
            $l1781:;
            return $finallyReturn1778;
        }
        }
        $l1783:;
        while (true) {
        {
            int $tmp1787;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1789, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1790 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1789);
                op1788 = $tmp1790;
                if (((panda$core$Bit) { !op1788.nonnull }).value) {
                {
                    $tmp1787 = 0;
                    goto $l1785;
                    $l1791:;
                    goto $l1784;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1795 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1794 = $tmp1795;
                $tmp1793 = $tmp1794;
                next1792 = $tmp1793;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                if (((panda$core$Bit) { next1792 == NULL }).value) {
                {
                    $tmp1797 = NULL;
                    $finallyReturn1795 = $tmp1797;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1797));
                    $tmp1787 = 1;
                    goto $l1785;
                    $l1798:;
                    $tmp1774 = 1;
                    goto $l1772;
                    $l1799:;
                    return $finallyReturn1795;
                }
                }
                {
                    $tmp1801 = result1775;
                    org$pandalanguage$pandac$ASTNode* $tmp1804 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1804, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1788.value).position, result1775, ((org$pandalanguage$pandac$parser$Token) op1788.value).kind, next1792);
                    $tmp1803 = $tmp1804;
                    $tmp1802 = $tmp1803;
                    result1775 = $tmp1802;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
                }
            }
            $tmp1787 = -1;
            goto $l1785;
            $l1785:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1792));
            next1792 = NULL;
            switch ($tmp1787) {
                case 1: goto $l1798;
                case -1: goto $l1805;
                case 0: goto $l1791;
            }
            $l1805:;
        }
        }
        $l1784:;
        $tmp1807 = result1775;
        $finallyReturn1805 = $tmp1807;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1807));
        $tmp1774 = 2;
        goto $l1772;
        $l1808:;
        return $finallyReturn1805;
    }
    $l1772:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1775));
    result1775 = NULL;
    switch ($tmp1774) {
        case 1: goto $l1799;
        case 2: goto $l1808;
        case 0: goto $l1781;
    }
    $l1810:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1814;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1815;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1817;
    org$pandalanguage$pandac$ASTNode* $tmp1819;
    org$pandalanguage$pandac$ASTNode* test1822 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1823;
    org$pandalanguage$pandac$ASTNode* $tmp1824;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1825;
    org$pandalanguage$pandac$ASTNode* $tmp1827;
    panda$collections$ImmutableArray* ifTrue1830 = NULL;
    panda$collections$ImmutableArray* $tmp1831;
    panda$collections$ImmutableArray* $tmp1832;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1833;
    org$pandalanguage$pandac$ASTNode* $tmp1835;
    org$pandalanguage$pandac$ASTNode* ifFalse1838 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1839;
    org$pandalanguage$pandac$ASTNode* $tmp1843;
    org$pandalanguage$pandac$ASTNode* $tmp1844;
    org$pandalanguage$pandac$ASTNode* $tmp1845;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1846;
    org$pandalanguage$pandac$ASTNode* $tmp1848;
    org$pandalanguage$pandac$ASTNode* $tmp1851;
    org$pandalanguage$pandac$ASTNode* $tmp1852;
    org$pandalanguage$pandac$ASTNode* $tmp1853;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1854;
    org$pandalanguage$pandac$ASTNode* $tmp1856;
    org$pandalanguage$pandac$ASTNode* $tmp1859;
    org$pandalanguage$pandac$ASTNode* $tmp1860;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1860;
    org$pandalanguage$pandac$ASTNode* $tmp1862;
    org$pandalanguage$pandac$ASTNode* $tmp1863;
    int $tmp1813;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1815, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1817 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1815, &$s1816);
        start1814 = $tmp1817;
        if (((panda$core$Bit) { !start1814.nonnull }).value) {
        {
            $tmp1819 = NULL;
            $finallyReturn1817 = $tmp1819;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
            $tmp1813 = 0;
            goto $l1811;
            $l1820:;
            return $finallyReturn1817;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1825 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1824 = $tmp1825;
        $tmp1823 = $tmp1824;
        test1822 = $tmp1823;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1823));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
        if (((panda$core$Bit) { test1822 == NULL }).value) {
        {
            $tmp1827 = NULL;
            $finallyReturn1825 = $tmp1827;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
            $tmp1813 = 1;
            goto $l1811;
            $l1828:;
            return $finallyReturn1825;
        }
        }
        panda$collections$ImmutableArray* $tmp1833 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1832 = $tmp1833;
        $tmp1831 = $tmp1832;
        ifTrue1830 = $tmp1831;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1831));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1832));
        if (((panda$core$Bit) { ifTrue1830 == NULL }).value) {
        {
            $tmp1835 = NULL;
            $finallyReturn1833 = $tmp1835;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1835));
            $tmp1813 = 2;
            goto $l1811;
            $l1836:;
            return $finallyReturn1833;
        }
        }
        memset(&ifFalse1838, 0, sizeof(ifFalse1838));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1839, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1840 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1839);
        if (((panda$core$Bit) { $tmp1840.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1841 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1841.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1842.value) {
            {
                {
                    $tmp1843 = ifFalse1838;
                    org$pandalanguage$pandac$ASTNode* $tmp1846 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1845 = $tmp1846;
                    $tmp1844 = $tmp1845;
                    ifFalse1838 = $tmp1844;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1844));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1843));
                }
                if (((panda$core$Bit) { ifFalse1838 == NULL }).value) {
                {
                    $tmp1848 = NULL;
                    $finallyReturn1846 = $tmp1848;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1848));
                    $tmp1813 = 3;
                    goto $l1811;
                    $l1849:;
                    return $finallyReturn1846;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp1851 = ifFalse1838;
                    org$pandalanguage$pandac$ASTNode* $tmp1854 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1853 = $tmp1854;
                    $tmp1852 = $tmp1853;
                    ifFalse1838 = $tmp1852;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1853));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
                }
                if (((panda$core$Bit) { ifFalse1838 == NULL }).value) {
                {
                    $tmp1856 = NULL;
                    $finallyReturn1854 = $tmp1856;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1856));
                    $tmp1813 = 4;
                    goto $l1811;
                    $l1857:;
                    return $finallyReturn1854;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp1859 = ifFalse1838;
                $tmp1860 = NULL;
                ifFalse1838 = $tmp1860;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1864 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1864, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1814.value).position, test1822, ifTrue1830, ifFalse1838);
        $tmp1863 = $tmp1864;
        $tmp1862 = $tmp1863;
        $finallyReturn1860 = $tmp1862;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
        $tmp1813 = 5;
        goto $l1811;
        $l1865:;
        return $finallyReturn1860;
    }
    $l1811:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1822));
    test1822 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1830));
    ifTrue1830 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1838));
    switch ($tmp1813) {
        case 2: goto $l1836;
        case 5: goto $l1865;
        case 3: goto $l1849;
        case 1: goto $l1828;
        case 4: goto $l1857;
        case 0: goto $l1820;
    }
    $l1867:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1868;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1870;
    org$pandalanguage$pandac$ASTNode* $tmp1872;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1873;
    org$pandalanguage$pandac$ASTNode* $tmp1875;
    org$pandalanguage$pandac$ASTNode* $tmp1876;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1868, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1870 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1868, &$s1869);
    if (((panda$core$Bit) { !$tmp1870.nonnull }).value) {
    {
        $tmp1872 = NULL;
        $finallyReturn1870 = $tmp1872;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1872));
        return $finallyReturn1870;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1877 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp1876 = $tmp1877;
    $tmp1875 = $tmp1876;
    $finallyReturn1873 = $tmp1875;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
    return $finallyReturn1873;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1879;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1880;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1882;
    org$pandalanguage$pandac$ASTNode* $tmp1884;
    org$pandalanguage$pandac$ASTNode* type1891 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1892;
    org$pandalanguage$pandac$ASTNode* $tmp1893;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1894;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1898;
    org$pandalanguage$pandac$ASTNode* $tmp1900;
    org$pandalanguage$pandac$ASTNode* $tmp1901;
    panda$core$String* $tmp1903;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1907;
    org$pandalanguage$pandac$ASTNode* $tmp1909;
    org$pandalanguage$pandac$ASTNode* $tmp1910;
    panda$core$String* $tmp1912;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1880, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1882 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1880, &$s1881);
    id1879 = $tmp1882;
    if (((panda$core$Bit) { !id1879.nonnull }).value) {
    {
        $tmp1884 = NULL;
        $finallyReturn1882 = $tmp1884;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
        return $finallyReturn1882;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1886 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1886.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1887.value) {
    {
        int $tmp1890;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1894 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1893 = $tmp1894;
            $tmp1892 = $tmp1893;
            type1891 = $tmp1892;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1892));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1893));
            if (((panda$core$Bit) { type1891 == NULL }).value) {
            {
                $tmp1896 = NULL;
                $finallyReturn1894 = $tmp1896;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1896));
                $tmp1890 = 0;
                goto $l1888;
                $l1897:;
                return $finallyReturn1894;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1902 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1904 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1879.value));
            $tmp1903 = $tmp1904;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1902, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id1879.value).position, $tmp1903, type1891);
            $tmp1901 = $tmp1902;
            $tmp1900 = $tmp1901;
            $finallyReturn1898 = $tmp1900;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1903));
            $tmp1890 = 1;
            goto $l1888;
            $l1905:;
            return $finallyReturn1898;
        }
        $l1888:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1891));
        type1891 = NULL;
        switch ($tmp1890) {
            case 1: goto $l1905;
            case 0: goto $l1897;
        }
        $l1907:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1911 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1913 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1879.value));
    $tmp1912 = $tmp1913;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1911, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1879.value).position, $tmp1912);
    $tmp1910 = $tmp1911;
    $tmp1909 = $tmp1910;
    $finallyReturn1907 = $tmp1909;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1909));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1910));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
    return $finallyReturn1907;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1918;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1919;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1921;
    org$pandalanguage$pandac$ASTNode* $tmp1923;
    org$pandalanguage$pandac$ASTNode* t1926 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1927;
    org$pandalanguage$pandac$ASTNode* $tmp1928;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1929;
    org$pandalanguage$pandac$ASTNode* $tmp1931;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1934;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1936;
    org$pandalanguage$pandac$ASTNode* $tmp1938;
    org$pandalanguage$pandac$ASTNode* list1941 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1942;
    org$pandalanguage$pandac$ASTNode* $tmp1943;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1944;
    org$pandalanguage$pandac$ASTNode* $tmp1946;
    panda$collections$ImmutableArray* block1949 = NULL;
    panda$collections$ImmutableArray* $tmp1950;
    panda$collections$ImmutableArray* $tmp1951;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1952;
    org$pandalanguage$pandac$ASTNode* $tmp1954;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1956;
    org$pandalanguage$pandac$ASTNode* $tmp1958;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    int $tmp1917;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1919, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1921 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1919, &$s1920);
        start1918 = $tmp1921;
        if (((panda$core$Bit) { !start1918.nonnull }).value) {
        {
            $tmp1923 = NULL;
            $finallyReturn1921 = $tmp1923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
            $tmp1917 = 0;
            goto $l1915;
            $l1924:;
            return $finallyReturn1921;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1929 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1928 = $tmp1929;
        $tmp1927 = $tmp1928;
        t1926 = $tmp1927;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1927));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1928));
        if (((panda$core$Bit) { t1926 == NULL }).value) {
        {
            $tmp1931 = NULL;
            $finallyReturn1929 = $tmp1931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
            $tmp1917 = 1;
            goto $l1915;
            $l1932:;
            return $finallyReturn1929;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1934, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1936 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1934, &$s1935);
        if (((panda$core$Bit) { !$tmp1936.nonnull }).value) {
        {
            $tmp1938 = NULL;
            $finallyReturn1936 = $tmp1938;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1938));
            $tmp1917 = 2;
            goto $l1915;
            $l1939:;
            return $finallyReturn1936;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1944 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1943 = $tmp1944;
        $tmp1942 = $tmp1943;
        list1941 = $tmp1942;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
        if (((panda$core$Bit) { list1941 == NULL }).value) {
        {
            $tmp1946 = NULL;
            $finallyReturn1944 = $tmp1946;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1946));
            $tmp1917 = 3;
            goto $l1915;
            $l1947:;
            return $finallyReturn1944;
        }
        }
        panda$collections$ImmutableArray* $tmp1952 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1951 = $tmp1952;
        $tmp1950 = $tmp1951;
        block1949 = $tmp1950;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1950));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
        if (((panda$core$Bit) { block1949 == NULL }).value) {
        {
            $tmp1954 = NULL;
            $finallyReturn1952 = $tmp1954;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
            $tmp1917 = 4;
            goto $l1915;
            $l1955:;
            return $finallyReturn1952;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1960 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1960, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1918.value).position, p_label, t1926, list1941, block1949);
        $tmp1959 = $tmp1960;
        $tmp1958 = $tmp1959;
        $finallyReturn1956 = $tmp1958;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1958));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1959));
        $tmp1917 = 5;
        goto $l1915;
        $l1961:;
        return $finallyReturn1956;
    }
    $l1915:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1926));
    t1926 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1941));
    list1941 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1949));
    block1949 = NULL;
    switch ($tmp1917) {
        case 3: goto $l1947;
        case 1: goto $l1932;
        case 5: goto $l1961;
        case 4: goto $l1955;
        case 2: goto $l1939;
        case 0: goto $l1924;
    }
    $l1963:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1968;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1970;
    org$pandalanguage$pandac$ASTNode* $tmp1972;
    org$pandalanguage$pandac$ASTNode* test1975 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1976;
    org$pandalanguage$pandac$ASTNode* $tmp1977;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1978;
    org$pandalanguage$pandac$ASTNode* $tmp1980;
    panda$collections$ImmutableArray* body1983 = NULL;
    panda$collections$ImmutableArray* $tmp1984;
    panda$collections$ImmutableArray* $tmp1985;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1986;
    org$pandalanguage$pandac$ASTNode* $tmp1988;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1990;
    org$pandalanguage$pandac$ASTNode* $tmp1992;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    int $tmp1966;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1968, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1970 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1968, &$s1969);
        start1967 = $tmp1970;
        if (((panda$core$Bit) { !start1967.nonnull }).value) {
        {
            $tmp1972 = NULL;
            $finallyReturn1970 = $tmp1972;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
            $tmp1966 = 0;
            goto $l1964;
            $l1973:;
            return $finallyReturn1970;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1978 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1977 = $tmp1978;
        $tmp1976 = $tmp1977;
        test1975 = $tmp1976;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1976));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
        if (((panda$core$Bit) { test1975 == NULL }).value) {
        {
            $tmp1980 = NULL;
            $finallyReturn1978 = $tmp1980;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
            $tmp1966 = 1;
            goto $l1964;
            $l1981:;
            return $finallyReturn1978;
        }
        }
        panda$collections$ImmutableArray* $tmp1986 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1985 = $tmp1986;
        $tmp1984 = $tmp1985;
        body1983 = $tmp1984;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1984));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
        if (((panda$core$Bit) { body1983 == NULL }).value) {
        {
            $tmp1988 = NULL;
            $finallyReturn1986 = $tmp1988;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1988));
            $tmp1966 = 2;
            goto $l1964;
            $l1989:;
            return $finallyReturn1986;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1994 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1994, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1967.value).position, p_label, test1975, body1983);
        $tmp1993 = $tmp1994;
        $tmp1992 = $tmp1993;
        $finallyReturn1990 = $tmp1992;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1992));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
        $tmp1966 = 3;
        goto $l1964;
        $l1995:;
        return $finallyReturn1990;
    }
    $l1964:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1975));
    test1975 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1983));
    body1983 = NULL;
    switch ($tmp1966) {
        case 1: goto $l1981;
        case 2: goto $l1989;
        case 0: goto $l1973;
        case 3: goto $l1995;
    }
    $l1997:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2001;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2002;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2004;
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    panda$collections$ImmutableArray* body2009 = NULL;
    panda$collections$ImmutableArray* $tmp2010;
    panda$collections$ImmutableArray* $tmp2011;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2012;
    org$pandalanguage$pandac$ASTNode* $tmp2014;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2017;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2019;
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    org$pandalanguage$pandac$ASTNode* test2024 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2025;
    org$pandalanguage$pandac$ASTNode* $tmp2026;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2027;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2031;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    org$pandalanguage$pandac$ASTNode* $tmp2034;
    int $tmp2000;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2002, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2002, &$s2003);
        start2001 = $tmp2004;
        if (((panda$core$Bit) { !start2001.nonnull }).value) {
        {
            $tmp2006 = NULL;
            $finallyReturn2004 = $tmp2006;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
            $tmp2000 = 0;
            goto $l1998;
            $l2007:;
            return $finallyReturn2004;
        }
        }
        panda$collections$ImmutableArray* $tmp2012 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2011 = $tmp2012;
        $tmp2010 = $tmp2011;
        body2009 = $tmp2010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
        if (((panda$core$Bit) { body2009 == NULL }).value) {
        {
            $tmp2014 = NULL;
            $finallyReturn2012 = $tmp2014;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2014));
            $tmp2000 = 1;
            goto $l1998;
            $l2015:;
            return $finallyReturn2012;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2017, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2019 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2017, &$s2018);
        if (((panda$core$Bit) { !$tmp2019.nonnull }).value) {
        {
            $tmp2021 = NULL;
            $finallyReturn2019 = $tmp2021;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
            $tmp2000 = 2;
            goto $l1998;
            $l2022:;
            return $finallyReturn2019;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2027 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2026 = $tmp2027;
        $tmp2025 = $tmp2026;
        test2024 = $tmp2025;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2025));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
        if (((panda$core$Bit) { test2024 == NULL }).value) {
        {
            $tmp2029 = NULL;
            $finallyReturn2027 = $tmp2029;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
            $tmp2000 = 3;
            goto $l1998;
            $l2030:;
            return $finallyReturn2027;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2035 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2035, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2001.value).position, p_label, body2009, test2024);
        $tmp2034 = $tmp2035;
        $tmp2033 = $tmp2034;
        $finallyReturn2031 = $tmp2033;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
        $tmp2000 = 4;
        goto $l1998;
        $l2036:;
        return $finallyReturn2031;
    }
    $l1998:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2009));
    body2009 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2024));
    test2024 = NULL;
    switch ($tmp2000) {
        case 1: goto $l2015;
        case 4: goto $l2036;
        case 2: goto $l2022;
        case 0: goto $l2007;
        case 3: goto $l2030;
    }
    $l2038:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2042;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2043;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2045;
    org$pandalanguage$pandac$ASTNode* $tmp2047;
    panda$collections$ImmutableArray* body2050 = NULL;
    panda$collections$ImmutableArray* $tmp2051;
    panda$collections$ImmutableArray* $tmp2052;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2053;
    org$pandalanguage$pandac$ASTNode* $tmp2055;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2057;
    org$pandalanguage$pandac$ASTNode* $tmp2059;
    org$pandalanguage$pandac$ASTNode* $tmp2060;
    int $tmp2041;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2043, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2045 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2043, &$s2044);
        start2042 = $tmp2045;
        if (((panda$core$Bit) { !start2042.nonnull }).value) {
        {
            $tmp2047 = NULL;
            $finallyReturn2045 = $tmp2047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2047));
            $tmp2041 = 0;
            goto $l2039;
            $l2048:;
            return $finallyReturn2045;
        }
        }
        panda$collections$ImmutableArray* $tmp2053 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2052 = $tmp2053;
        $tmp2051 = $tmp2052;
        body2050 = $tmp2051;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2051));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
        if (((panda$core$Bit) { body2050 == NULL }).value) {
        {
            $tmp2055 = NULL;
            $finallyReturn2053 = $tmp2055;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2055));
            $tmp2041 = 1;
            goto $l2039;
            $l2056:;
            return $finallyReturn2053;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2061 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2061, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start2042.value).position, p_label, body2050);
        $tmp2060 = $tmp2061;
        $tmp2059 = $tmp2060;
        $finallyReturn2057 = $tmp2059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
        $tmp2041 = 2;
        goto $l2039;
        $l2062:;
        return $finallyReturn2057;
    }
    $l2039:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2050));
    body2050 = NULL;
    switch ($tmp2041) {
        case 1: goto $l2056;
        case 2: goto $l2062;
        case 0: goto $l2048;
    }
    $l2064:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2068;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2069;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2071;
    org$pandalanguage$pandac$ASTNode* $tmp2073;
    org$pandalanguage$pandac$ASTNode* expr2076 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2077;
    org$pandalanguage$pandac$ASTNode* $tmp2078;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2079;
    org$pandalanguage$pandac$ASTNode* $tmp2081;
    org$pandalanguage$pandac$ASTNode* message2084 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2085;
    org$pandalanguage$pandac$ASTNode* $tmp2087;
    org$pandalanguage$pandac$ASTNode* $tmp2088;
    org$pandalanguage$pandac$ASTNode* $tmp2089;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2090;
    org$pandalanguage$pandac$ASTNode* $tmp2092;
    org$pandalanguage$pandac$ASTNode* $tmp2095;
    org$pandalanguage$pandac$ASTNode* $tmp2096;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2096;
    org$pandalanguage$pandac$ASTNode* $tmp2098;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    int $tmp2067;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2069, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2071 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2069, &$s2070);
        start2068 = $tmp2071;
        if (((panda$core$Bit) { !start2068.nonnull }).value) {
        {
            $tmp2073 = NULL;
            $finallyReturn2071 = $tmp2073;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2073));
            $tmp2067 = 0;
            goto $l2065;
            $l2074:;
            return $finallyReturn2071;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2079 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2078 = $tmp2079;
        $tmp2077 = $tmp2078;
        expr2076 = $tmp2077;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
        if (((panda$core$Bit) { expr2076 == NULL }).value) {
        {
            $tmp2081 = NULL;
            $finallyReturn2079 = $tmp2081;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2081));
            $tmp2067 = 1;
            goto $l2065;
            $l2082:;
            return $finallyReturn2079;
        }
        }
        memset(&message2084, 0, sizeof(message2084));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2085, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2086 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2085);
        if (((panda$core$Bit) { $tmp2086.nonnull }).value) {
        {
            {
                $tmp2087 = message2084;
                org$pandalanguage$pandac$ASTNode* $tmp2090 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2089 = $tmp2090;
                $tmp2088 = $tmp2089;
                message2084 = $tmp2088;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
            }
            if (((panda$core$Bit) { message2084 == NULL }).value) {
            {
                $tmp2092 = NULL;
                $finallyReturn2090 = $tmp2092;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2092));
                $tmp2067 = 2;
                goto $l2065;
                $l2093:;
                return $finallyReturn2090;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2095 = message2084;
                $tmp2096 = NULL;
                message2084 = $tmp2096;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2095));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2100 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2100, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2068.value).position, expr2076, message2084);
        $tmp2099 = $tmp2100;
        $tmp2098 = $tmp2099;
        $finallyReturn2096 = $tmp2098;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2098));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
        $tmp2067 = 3;
        goto $l2065;
        $l2101:;
        return $finallyReturn2096;
    }
    $l2065:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2076));
    expr2076 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2084));
    switch ($tmp2067) {
        case 2: goto $l2093;
        case 3: goto $l2101;
        case 0: goto $l2074;
        case 1: goto $l2082;
    }
    $l2103:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2108;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2110;
    org$pandalanguage$pandac$ASTNode* $tmp2112;
    panda$collections$Array* expressions2115 = NULL;
    panda$collections$Array* $tmp2116;
    panda$collections$Array* $tmp2117;
    org$pandalanguage$pandac$ASTNode* expr2119 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2120;
    org$pandalanguage$pandac$ASTNode* $tmp2121;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2122;
    org$pandalanguage$pandac$ASTNode* $tmp2124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2130;
    org$pandalanguage$pandac$ASTNode* $tmp2132;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    org$pandalanguage$pandac$ASTNode* $tmp2134;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2135;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2140;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2142;
    org$pandalanguage$pandac$ASTNode* $tmp2144;
    panda$collections$Array* statements2147 = NULL;
    panda$collections$Array* $tmp2148;
    panda$collections$Array* $tmp2149;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_132153;
    org$pandalanguage$pandac$ASTNode* stmt2176 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2178;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2179;
    org$pandalanguage$pandac$ASTNode* $tmp2181;
    org$pandalanguage$pandac$ASTNode* stmt2190 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2191;
    org$pandalanguage$pandac$ASTNode* $tmp2192;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2193;
    org$pandalanguage$pandac$ASTNode* $tmp2195;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2199;
    org$pandalanguage$pandac$ASTNode* $tmp2201;
    org$pandalanguage$pandac$ASTNode* $tmp2202;
    panda$collections$ImmutableArray* $tmp2204;
    panda$collections$ImmutableArray* $tmp2206;
    int $tmp2106;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2108, ((panda$core$Int64) { 39 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2110 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2108, &$s2109);
        start2107 = $tmp2110;
        if (((panda$core$Bit) { !start2107.nonnull }).value) {
        {
            $tmp2112 = NULL;
            $finallyReturn2110 = $tmp2112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
            $tmp2106 = 0;
            goto $l2104;
            $l2113:;
            return $finallyReturn2110;
        }
        }
        panda$collections$Array* $tmp2118 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2118);
        $tmp2117 = $tmp2118;
        $tmp2116 = $tmp2117;
        expressions2115 = $tmp2116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2117));
        org$pandalanguage$pandac$ASTNode* $tmp2122 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2121 = $tmp2122;
        $tmp2120 = $tmp2121;
        expr2119 = $tmp2120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
        if (((panda$core$Bit) { expr2119 == NULL }).value) {
        {
            $tmp2124 = NULL;
            $finallyReturn2122 = $tmp2124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2124));
            $tmp2106 = 1;
            goto $l2104;
            $l2125:;
            return $finallyReturn2122;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions2115, ((panda$core$Object*) expr2119));
        $l2127:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2130, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2131 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2130);
        bool $tmp2129 = ((panda$core$Bit) { $tmp2131.nonnull }).value;
        if (!$tmp2129) goto $l2128;
        {
            {
                $tmp2132 = expr2119;
                org$pandalanguage$pandac$ASTNode* $tmp2135 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2134 = $tmp2135;
                $tmp2133 = $tmp2134;
                expr2119 = $tmp2133;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2134));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
            }
            if (((panda$core$Bit) { expr2119 == NULL }).value) {
            {
                $tmp2137 = NULL;
                $finallyReturn2135 = $tmp2137;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2137));
                $tmp2106 = 2;
                goto $l2104;
                $l2138:;
                return $finallyReturn2135;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2115, ((panda$core$Object*) expr2119));
        }
        goto $l2127;
        $l2128:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2140, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2142 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2140, &$s2141);
        if (((panda$core$Bit) { !$tmp2142.nonnull }).value) {
        {
            $tmp2144 = NULL;
            $finallyReturn2142 = $tmp2144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2144));
            $tmp2106 = 3;
            goto $l2104;
            $l2145:;
            return $finallyReturn2142;
        }
        }
        panda$collections$Array* $tmp2150 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2150);
        $tmp2149 = $tmp2150;
        $tmp2148 = $tmp2149;
        statements2147 = $tmp2148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2149));
        $l2151:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2154 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1114_132153 = $tmp2154.kind;
                panda$core$Bit $tmp2157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_132153.$rawValue, ((panda$core$Int64) { 39 }));
                bool $tmp2156 = $tmp2157.value;
                if ($tmp2156) goto $l2158;
                panda$core$Bit $tmp2159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_132153.$rawValue, ((panda$core$Int64) { 40 }));
                $tmp2156 = $tmp2159.value;
                $l2158:;
                panda$core$Bit $tmp2160 = { $tmp2156 };
                bool $tmp2155 = $tmp2160.value;
                if ($tmp2155) goto $l2161;
                panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_132153.$rawValue, ((panda$core$Int64) { 100 }));
                $tmp2155 = $tmp2162.value;
                $l2161:;
                panda$core$Bit $tmp2163 = { $tmp2155 };
                if ($tmp2163.value) {
                {
                    goto $l2152;
                }
                }
                else {
                panda$core$Bit $tmp2166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_132153.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2165 = $tmp2166.value;
                if ($tmp2165) goto $l2167;
                panda$core$Bit $tmp2168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_132153.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2165 = $tmp2168.value;
                $l2167:;
                panda$core$Bit $tmp2169 = { $tmp2165 };
                bool $tmp2164 = $tmp2169.value;
                if ($tmp2164) goto $l2170;
                panda$core$Bit $tmp2171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_132153.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2164 = $tmp2171.value;
                $l2170:;
                panda$core$Bit $tmp2172 = { $tmp2164 };
                if ($tmp2172.value) {
                {
                    int $tmp2175;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2179 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2178 = $tmp2179;
                        $tmp2177 = $tmp2178;
                        stmt2176 = $tmp2177;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
                        if (((panda$core$Bit) { stmt2176 == NULL }).value) {
                        {
                            $tmp2181 = NULL;
                            $finallyReturn2179 = $tmp2181;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
                            $tmp2175 = 0;
                            goto $l2173;
                            $l2182:;
                            $tmp2106 = 4;
                            goto $l2104;
                            $l2183:;
                            return $finallyReturn2179;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements2147, ((panda$core$Object*) stmt2176));
                        $tmp2175 = 1;
                        goto $l2173;
                        $l2185:;
                        goto $l2152;
                    }
                    $l2173:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2176));
                    stmt2176 = NULL;
                    switch ($tmp2175) {
                        case 0: goto $l2182;
                        case 1: goto $l2185;
                    }
                    $l2186:;
                }
                }
                else {
                {
                    {
                        int $tmp2189;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2193 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2192 = $tmp2193;
                            $tmp2191 = $tmp2192;
                            stmt2190 = $tmp2191;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                            if (((panda$core$Bit) { stmt2190 == NULL }).value) {
                            {
                                $tmp2195 = NULL;
                                $finallyReturn2193 = $tmp2195;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2195));
                                $tmp2189 = 0;
                                goto $l2187;
                                $l2196:;
                                $tmp2106 = 5;
                                goto $l2104;
                                $l2197:;
                                return $finallyReturn2193;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2147, ((panda$core$Object*) stmt2190));
                        }
                        $tmp2189 = -1;
                        goto $l2187;
                        $l2187:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2190));
                        stmt2190 = NULL;
                        switch ($tmp2189) {
                            case -1: goto $l2199;
                            case 0: goto $l2196;
                        }
                        $l2199:;
                    }
                }
                }
                }
            }
        }
        }
        $l2152:;
        org$pandalanguage$pandac$ASTNode* $tmp2203 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2205 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2115);
        $tmp2204 = $tmp2205;
        panda$collections$ImmutableArray* $tmp2207 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2147);
        $tmp2206 = $tmp2207;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2203, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start2107.value).position, $tmp2204, $tmp2206);
        $tmp2202 = $tmp2203;
        $tmp2201 = $tmp2202;
        $finallyReturn2199 = $tmp2201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2204));
        $tmp2106 = 6;
        goto $l2104;
        $l2208:;
        return $finallyReturn2199;
    }
    $l2104:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2115));
    expressions2115 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2119));
    expr2119 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2147));
    statements2147 = NULL;
    switch ($tmp2106) {
        case 1: goto $l2125;
        case 4: goto $l2183;
        case 6: goto $l2208;
        case 5: goto $l2197;
        case 2: goto $l2138;
        case 0: goto $l2113;
        case 3: goto $l2145;
    }
    $l2210:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2214;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2215;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2217;
    org$pandalanguage$pandac$ASTNode* $tmp2219;
    org$pandalanguage$pandac$ASTNode* expr2222 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2223;
    org$pandalanguage$pandac$ASTNode* $tmp2224;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2225;
    org$pandalanguage$pandac$ASTNode* $tmp2227;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2230;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2232;
    org$pandalanguage$pandac$ASTNode* $tmp2234;
    panda$collections$Array* whens2237 = NULL;
    panda$collections$Array* $tmp2238;
    panda$collections$Array* $tmp2239;
    panda$collections$Array* other2241 = NULL;
    panda$collections$Array* $tmp2242;
    org$pandalanguage$pandac$parser$Token token2245;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_132247;
    org$pandalanguage$pandac$ASTNode* w2253 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2254;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2256;
    org$pandalanguage$pandac$ASTNode* $tmp2258;
    org$pandalanguage$pandac$parser$Token o2264;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2266;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2268;
    org$pandalanguage$pandac$ASTNode* $tmp2270;
    panda$collections$Array* $tmp2273;
    panda$collections$Array* $tmp2274;
    panda$collections$Array* $tmp2275;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_252279;
    org$pandalanguage$pandac$ASTNode* stmt2294 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2295;
    org$pandalanguage$pandac$ASTNode* $tmp2296;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2297;
    org$pandalanguage$pandac$ASTNode* $tmp2299;
    org$pandalanguage$pandac$ASTNode* stmt2308 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2309;
    org$pandalanguage$pandac$ASTNode* $tmp2310;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2311;
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    panda$core$String* $tmp2318;
    panda$core$String* $tmp2320;
    panda$core$String* $tmp2321;
    panda$core$String* $tmp2323;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2329;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2331;
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2335;
    org$pandalanguage$pandac$ASTNode* $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    panda$collections$ImmutableArray* $tmp2340;
    panda$collections$ImmutableArray* $tmp2342;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2345;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    org$pandalanguage$pandac$ASTNode* $tmp2348;
    panda$collections$ImmutableArray* $tmp2350;
    int $tmp2213;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2215, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2217 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2215, &$s2216);
        start2214 = $tmp2217;
        if (((panda$core$Bit) { !start2214.nonnull }).value) {
        {
            $tmp2219 = NULL;
            $finallyReturn2217 = $tmp2219;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
            $tmp2213 = 0;
            goto $l2211;
            $l2220:;
            return $finallyReturn2217;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2225 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2224 = $tmp2225;
        $tmp2223 = $tmp2224;
        expr2222 = $tmp2223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
        if (((panda$core$Bit) { expr2222 == NULL }).value) {
        {
            $tmp2227 = NULL;
            $finallyReturn2225 = $tmp2227;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2227));
            $tmp2213 = 1;
            goto $l2211;
            $l2228:;
            return $finallyReturn2225;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2230, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2232 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2230, &$s2231);
        if (((panda$core$Bit) { !$tmp2232.nonnull }).value) {
        {
            $tmp2234 = NULL;
            $finallyReturn2232 = $tmp2234;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2234));
            $tmp2213 = 2;
            goto $l2211;
            $l2235:;
            return $finallyReturn2232;
        }
        }
        panda$collections$Array* $tmp2240 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2240);
        $tmp2239 = $tmp2240;
        $tmp2238 = $tmp2239;
        whens2237 = $tmp2238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
        $tmp2242 = NULL;
        other2241 = $tmp2242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
        $l2243:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2246 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2245 = $tmp2246;
            {
                $match$1155_132247 = token2245.kind;
                panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_132247.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2248.value) {
                {
                    goto $l2244;
                }
                }
                else {
                panda$core$Bit $tmp2249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_132247.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2249.value) {
                {
                    int $tmp2252;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2256 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2255 = $tmp2256;
                        $tmp2254 = $tmp2255;
                        w2253 = $tmp2254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                        if (((panda$core$Bit) { w2253 == NULL }).value) {
                        {
                            $tmp2258 = NULL;
                            $finallyReturn2256 = $tmp2258;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2258));
                            $tmp2252 = 0;
                            goto $l2250;
                            $l2259:;
                            $tmp2213 = 3;
                            goto $l2211;
                            $l2260:;
                            return $finallyReturn2256;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2237, ((panda$core$Object*) w2253));
                    }
                    $tmp2252 = -1;
                    goto $l2250;
                    $l2250:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2253));
                    w2253 = NULL;
                    switch ($tmp2252) {
                        case 0: goto $l2259;
                        case -1: goto $l2262;
                    }
                    $l2262:;
                }
                }
                else {
                panda$core$Bit $tmp2263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_132247.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2263.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2265 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2264 = $tmp2265;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2266, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2268 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2266, &$s2267);
                    if (((panda$core$Bit) { !$tmp2268.nonnull }).value) {
                    {
                        $tmp2270 = NULL;
                        $finallyReturn2268 = $tmp2270;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
                        $tmp2213 = 4;
                        goto $l2211;
                        $l2271:;
                        return $finallyReturn2268;
                    }
                    }
                    {
                        $tmp2273 = other2241;
                        panda$collections$Array* $tmp2276 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2276);
                        $tmp2275 = $tmp2276;
                        $tmp2274 = $tmp2275;
                        other2241 = $tmp2274;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2274));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2275));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                    }
                    $l2277:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2280 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1171_252279 = $tmp2280.kind;
                            panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_252279.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2281.value) {
                            {
                                goto $l2278;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_252279.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2283 = $tmp2284.value;
                            if ($tmp2283) goto $l2285;
                            panda$core$Bit $tmp2286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_252279.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2283 = $tmp2286.value;
                            $l2285:;
                            panda$core$Bit $tmp2287 = { $tmp2283 };
                            bool $tmp2282 = $tmp2287.value;
                            if ($tmp2282) goto $l2288;
                            panda$core$Bit $tmp2289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_252279.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2282 = $tmp2289.value;
                            $l2288:;
                            panda$core$Bit $tmp2290 = { $tmp2282 };
                            if ($tmp2290.value) {
                            {
                                int $tmp2293;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2297 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2296 = $tmp2297;
                                    $tmp2295 = $tmp2296;
                                    stmt2294 = $tmp2295;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
                                    if (((panda$core$Bit) { stmt2294 == NULL }).value) {
                                    {
                                        $tmp2299 = NULL;
                                        $finallyReturn2297 = $tmp2299;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
                                        $tmp2293 = 0;
                                        goto $l2291;
                                        $l2300:;
                                        $tmp2213 = 5;
                                        goto $l2211;
                                        $l2301:;
                                        return $finallyReturn2297;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2241, ((panda$core$Object*) stmt2294));
                                    $tmp2293 = 1;
                                    goto $l2291;
                                    $l2303:;
                                    goto $l2278;
                                }
                                $l2291:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2294));
                                stmt2294 = NULL;
                                switch ($tmp2293) {
                                    case 0: goto $l2300;
                                    case 1: goto $l2303;
                                }
                                $l2304:;
                            }
                            }
                            else {
                            {
                                int $tmp2307;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2311 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2310 = $tmp2311;
                                    $tmp2309 = $tmp2310;
                                    stmt2308 = $tmp2309;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2309));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
                                    if (((panda$core$Bit) { stmt2308 == NULL }).value) {
                                    {
                                        $tmp2313 = NULL;
                                        $finallyReturn2311 = $tmp2313;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2313));
                                        $tmp2307 = 0;
                                        goto $l2305;
                                        $l2314:;
                                        $tmp2213 = 6;
                                        goto $l2211;
                                        $l2315:;
                                        return $finallyReturn2311;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2241, ((panda$core$Object*) stmt2308));
                                }
                                $tmp2307 = -1;
                                goto $l2305;
                                $l2305:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2308));
                                stmt2308 = NULL;
                                switch ($tmp2307) {
                                    case -1: goto $l2317;
                                    case 0: goto $l2314;
                                }
                                $l2317:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2278:;
                    goto $l2244;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2324 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2245);
                    $tmp2323 = $tmp2324;
                    panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2322, $tmp2323);
                    $tmp2321 = $tmp2325;
                    panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2321, &$s2326);
                    $tmp2320 = $tmp2327;
                    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2319, $tmp2320);
                    $tmp2318 = $tmp2328;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2245, $tmp2318);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2318));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2321));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2323));
                }
                }
                }
                }
            }
        }
        }
        $l2244:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2329, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2331 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2329, &$s2330);
        if (((panda$core$Bit) { !$tmp2331.nonnull }).value) {
        {
            $tmp2333 = NULL;
            $finallyReturn2331 = $tmp2333;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
            $tmp2213 = 7;
            goto $l2211;
            $l2334:;
            return $finallyReturn2331;
        }
        }
        if (((panda$core$Bit) { other2241 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2339 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2341 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2237);
            $tmp2340 = $tmp2341;
            panda$collections$ImmutableArray* $tmp2343 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2241);
            $tmp2342 = $tmp2343;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2339, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start2214.value).position, expr2222, $tmp2340, $tmp2342);
            $tmp2338 = $tmp2339;
            $tmp2337 = $tmp2338;
            $finallyReturn2335 = $tmp2337;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
            $tmp2213 = 8;
            goto $l2211;
            $l2344:;
            return $finallyReturn2335;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2349 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2351 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2237);
        $tmp2350 = $tmp2351;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2349, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start2214.value).position, expr2222, $tmp2350, NULL);
        $tmp2348 = $tmp2349;
        $tmp2347 = $tmp2348;
        $finallyReturn2345 = $tmp2347;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
        $tmp2213 = 9;
        goto $l2211;
        $l2352:;
        return $finallyReturn2345;
    }
    $l2211:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2222));
    expr2222 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2237));
    whens2237 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2241));
    switch ($tmp2213) {
        case 2: goto $l2235;
        case 3: goto $l2260;
        case 7: goto $l2334;
        case 9: goto $l2352;
        case 4: goto $l2271;
        case 5: goto $l2301;
        case 6: goto $l2315;
        case 8: goto $l2344;
        case 1: goto $l2228;
        case 0: goto $l2220;
    }
    $l2354:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2358;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2359;
    panda$collections$ImmutableArray* $finallyReturn2361;
    panda$collections$ImmutableArray* $tmp2363;
    panda$collections$Array* result2366 = NULL;
    panda$collections$Array* $tmp2367;
    panda$collections$Array* $tmp2368;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_132372;
    org$pandalanguage$pandac$ASTNode* stmt2387 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2388;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    panda$collections$ImmutableArray* $finallyReturn2390;
    panda$collections$ImmutableArray* $tmp2392;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2396;
    panda$collections$ImmutableArray* $finallyReturn2398;
    panda$collections$ImmutableArray* $tmp2400;
    org$pandalanguage$pandac$ASTNode* stmt2409 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2410;
    org$pandalanguage$pandac$ASTNode* $tmp2411;
    panda$collections$ImmutableArray* $finallyReturn2412;
    panda$collections$ImmutableArray* $tmp2414;
    panda$collections$ImmutableArray* $finallyReturn2418;
    panda$collections$ImmutableArray* $tmp2420;
    panda$collections$ImmutableArray* $tmp2421;
    int $tmp2357;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2359, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2361 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2359, &$s2360);
        start2358 = $tmp2361;
        if (((panda$core$Bit) { !start2358.nonnull }).value) {
        {
            $tmp2363 = NULL;
            $finallyReturn2361 = $tmp2363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
            $tmp2357 = 0;
            goto $l2355;
            $l2364:;
            return $finallyReturn2361;
        }
        }
        panda$collections$Array* $tmp2369 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2369);
        $tmp2368 = $tmp2369;
        $tmp2367 = $tmp2368;
        result2366 = $tmp2367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
        $l2370:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2373 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1215_132372 = $tmp2373.kind;
                panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_132372.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2374.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2371;
                }
                }
                else {
                panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_132372.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2376 = $tmp2377.value;
                if ($tmp2376) goto $l2378;
                panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_132372.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2376 = $tmp2379.value;
                $l2378:;
                panda$core$Bit $tmp2380 = { $tmp2376 };
                bool $tmp2375 = $tmp2380.value;
                if ($tmp2375) goto $l2381;
                panda$core$Bit $tmp2382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_132372.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2375 = $tmp2382.value;
                $l2381:;
                panda$core$Bit $tmp2383 = { $tmp2375 };
                if ($tmp2383.value) {
                {
                    int $tmp2386;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2390 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2389 = $tmp2390;
                        $tmp2388 = $tmp2389;
                        stmt2387 = $tmp2388;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
                        if (((panda$core$Bit) { stmt2387 == NULL }).value) {
                        {
                            $tmp2392 = NULL;
                            $finallyReturn2390 = $tmp2392;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
                            $tmp2386 = 0;
                            goto $l2384;
                            $l2393:;
                            $tmp2357 = 1;
                            goto $l2355;
                            $l2394:;
                            return $finallyReturn2390;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2396, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2398 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2396, &$s2397);
                        if (((panda$core$Bit) { !$tmp2398.nonnull }).value) {
                        {
                            $tmp2400 = NULL;
                            $finallyReturn2398 = $tmp2400;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2400));
                            $tmp2386 = 1;
                            goto $l2384;
                            $l2401:;
                            $tmp2357 = 2;
                            goto $l2355;
                            $l2402:;
                            return $finallyReturn2398;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2366, ((panda$core$Object*) stmt2387));
                        $tmp2386 = 2;
                        goto $l2384;
                        $l2404:;
                        goto $l2371;
                    }
                    $l2384:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2387));
                    stmt2387 = NULL;
                    switch ($tmp2386) {
                        case 2: goto $l2404;
                        case 1: goto $l2401;
                        case 0: goto $l2393;
                    }
                    $l2405:;
                }
                }
                else {
                {
                    int $tmp2408;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2412 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2411 = $tmp2412;
                        $tmp2410 = $tmp2411;
                        stmt2409 = $tmp2410;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2411));
                        if (((panda$core$Bit) { stmt2409 == NULL }).value) {
                        {
                            $tmp2414 = NULL;
                            $finallyReturn2412 = $tmp2414;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2414));
                            $tmp2408 = 0;
                            goto $l2406;
                            $l2415:;
                            $tmp2357 = 3;
                            goto $l2355;
                            $l2416:;
                            return $finallyReturn2412;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2366, ((panda$core$Object*) stmt2409));
                    }
                    $tmp2408 = -1;
                    goto $l2406;
                    $l2406:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2409));
                    stmt2409 = NULL;
                    switch ($tmp2408) {
                        case 0: goto $l2415;
                        case -1: goto $l2418;
                    }
                    $l2418:;
                }
                }
                }
            }
        }
        }
        $l2371:;
        panda$collections$ImmutableArray* $tmp2422 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2366);
        $tmp2421 = $tmp2422;
        $tmp2420 = $tmp2421;
        $finallyReturn2418 = $tmp2420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
        $tmp2357 = 4;
        goto $l2355;
        $l2423:;
        return $finallyReturn2418;
    }
    $l2355:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2366));
    result2366 = NULL;
    switch ($tmp2357) {
        case 2: goto $l2402;
        case 4: goto $l2423;
        case 3: goto $l2416;
        case 1: goto $l2394;
        case 0: goto $l2364;
    }
    $l2425:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2429 = NULL;
    panda$collections$ImmutableArray* $tmp2430;
    panda$collections$ImmutableArray* $tmp2431;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2432;
    org$pandalanguage$pandac$ASTNode* $tmp2434;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2436;
    org$pandalanguage$pandac$ASTNode* $tmp2438;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    org$pandalanguage$pandac$Position $tmp2441;
    int $tmp2428;
    {
        panda$collections$ImmutableArray* $tmp2432 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2431 = $tmp2432;
        $tmp2430 = $tmp2431;
        statements2429 = $tmp2430;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2431));
        if (((panda$core$Bit) { statements2429 == NULL }).value) {
        {
            $tmp2434 = NULL;
            $finallyReturn2432 = $tmp2434;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
            $tmp2428 = 0;
            goto $l2426;
            $l2435:;
            return $finallyReturn2432;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2440 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2441);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2440, ((panda$core$Int64) { 4 }), $tmp2441, statements2429);
        $tmp2439 = $tmp2440;
        $tmp2438 = $tmp2439;
        $finallyReturn2436 = $tmp2438;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2438));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
        $tmp2428 = 1;
        goto $l2426;
        $l2442:;
        return $finallyReturn2436;
    }
    $l2426:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2429));
    statements2429 = NULL;
    switch ($tmp2428) {
        case 1: goto $l2442;
        case 0: goto $l2435;
    }
    $l2444:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2448 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2449;
    org$pandalanguage$pandac$ASTNode* $tmp2450;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2451;
    org$pandalanguage$pandac$ASTNode* $tmp2453;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_92456;
    org$pandalanguage$pandac$parser$Token op2522;
    org$pandalanguage$pandac$ASTNode* rvalue2524 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2525;
    org$pandalanguage$pandac$ASTNode* $tmp2526;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2527;
    org$pandalanguage$pandac$ASTNode* $tmp2529;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2532;
    org$pandalanguage$pandac$ASTNode* $tmp2534;
    org$pandalanguage$pandac$ASTNode* $tmp2535;
    org$pandalanguage$pandac$parser$Token op2549;
    org$pandalanguage$pandac$ASTNode* rvalue2551 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2554;
    org$pandalanguage$pandac$ASTNode* $tmp2556;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2559;
    org$pandalanguage$pandac$ASTNode* $tmp2561;
    org$pandalanguage$pandac$ASTNode* $tmp2562;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2569;
    org$pandalanguage$pandac$ASTNode* $tmp2571;
    int $tmp2447;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2451 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2450 = $tmp2451;
        $tmp2449 = $tmp2450;
        start2448 = $tmp2449;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2450));
        if (((panda$core$Bit) { start2448 == NULL }).value) {
        {
            $tmp2453 = NULL;
            $finallyReturn2451 = $tmp2453;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
            $tmp2447 = 0;
            goto $l2445;
            $l2454:;
            return $finallyReturn2451;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2457 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1259_92456 = $tmp2457.kind;
            panda$core$Bit $tmp2473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2472 = $tmp2473.value;
            if ($tmp2472) goto $l2474;
            panda$core$Bit $tmp2475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2472 = $tmp2475.value;
            $l2474:;
            panda$core$Bit $tmp2476 = { $tmp2472 };
            bool $tmp2471 = $tmp2476.value;
            if ($tmp2471) goto $l2477;
            panda$core$Bit $tmp2478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2471 = $tmp2478.value;
            $l2477:;
            panda$core$Bit $tmp2479 = { $tmp2471 };
            bool $tmp2470 = $tmp2479.value;
            if ($tmp2470) goto $l2480;
            panda$core$Bit $tmp2481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2470 = $tmp2481.value;
            $l2480:;
            panda$core$Bit $tmp2482 = { $tmp2470 };
            bool $tmp2469 = $tmp2482.value;
            if ($tmp2469) goto $l2483;
            panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2469 = $tmp2484.value;
            $l2483:;
            panda$core$Bit $tmp2485 = { $tmp2469 };
            bool $tmp2468 = $tmp2485.value;
            if ($tmp2468) goto $l2486;
            panda$core$Bit $tmp2487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2468 = $tmp2487.value;
            $l2486:;
            panda$core$Bit $tmp2488 = { $tmp2468 };
            bool $tmp2467 = $tmp2488.value;
            if ($tmp2467) goto $l2489;
            panda$core$Bit $tmp2490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2467 = $tmp2490.value;
            $l2489:;
            panda$core$Bit $tmp2491 = { $tmp2467 };
            bool $tmp2466 = $tmp2491.value;
            if ($tmp2466) goto $l2492;
            panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2466 = $tmp2493.value;
            $l2492:;
            panda$core$Bit $tmp2494 = { $tmp2466 };
            bool $tmp2465 = $tmp2494.value;
            if ($tmp2465) goto $l2495;
            panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2465 = $tmp2496.value;
            $l2495:;
            panda$core$Bit $tmp2497 = { $tmp2465 };
            bool $tmp2464 = $tmp2497.value;
            if ($tmp2464) goto $l2498;
            panda$core$Bit $tmp2499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2464 = $tmp2499.value;
            $l2498:;
            panda$core$Bit $tmp2500 = { $tmp2464 };
            bool $tmp2463 = $tmp2500.value;
            if ($tmp2463) goto $l2501;
            panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2463 = $tmp2502.value;
            $l2501:;
            panda$core$Bit $tmp2503 = { $tmp2463 };
            bool $tmp2462 = $tmp2503.value;
            if ($tmp2462) goto $l2504;
            panda$core$Bit $tmp2505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2462 = $tmp2505.value;
            $l2504:;
            panda$core$Bit $tmp2506 = { $tmp2462 };
            bool $tmp2461 = $tmp2506.value;
            if ($tmp2461) goto $l2507;
            panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2461 = $tmp2508.value;
            $l2507:;
            panda$core$Bit $tmp2509 = { $tmp2461 };
            bool $tmp2460 = $tmp2509.value;
            if ($tmp2460) goto $l2510;
            panda$core$Bit $tmp2511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2460 = $tmp2511.value;
            $l2510:;
            panda$core$Bit $tmp2512 = { $tmp2460 };
            bool $tmp2459 = $tmp2512.value;
            if ($tmp2459) goto $l2513;
            panda$core$Bit $tmp2514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2459 = $tmp2514.value;
            $l2513:;
            panda$core$Bit $tmp2515 = { $tmp2459 };
            bool $tmp2458 = $tmp2515.value;
            if ($tmp2458) goto $l2516;
            panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2458 = $tmp2517.value;
            $l2516:;
            panda$core$Bit $tmp2518 = { $tmp2458 };
            if ($tmp2518.value) {
            {
                int $tmp2521;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2523 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2522 = $tmp2523;
                    org$pandalanguage$pandac$ASTNode* $tmp2527 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2526 = $tmp2527;
                    $tmp2525 = $tmp2526;
                    rvalue2524 = $tmp2525;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2525));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
                    if (((panda$core$Bit) { rvalue2524 == NULL }).value) {
                    {
                        $tmp2529 = NULL;
                        $finallyReturn2527 = $tmp2529;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2529));
                        $tmp2521 = 0;
                        goto $l2519;
                        $l2530:;
                        $tmp2447 = 1;
                        goto $l2445;
                        $l2531:;
                        return $finallyReturn2527;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2536 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2538 = (($fn2537) start2448->$class->vtable[2])(start2448);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2536, ((panda$core$Int64) { 2 }), $tmp2538, start2448, op2522.kind, rvalue2524);
                    $tmp2535 = $tmp2536;
                    $tmp2534 = $tmp2535;
                    $finallyReturn2532 = $tmp2534;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2534));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2535));
                    $tmp2521 = 1;
                    goto $l2519;
                    $l2539:;
                    $tmp2447 = 2;
                    goto $l2445;
                    $l2540:;
                    return $finallyReturn2532;
                }
                $l2519:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2524));
                rvalue2524 = NULL;
                switch ($tmp2521) {
                    case 0: goto $l2530;
                    case 1: goto $l2539;
                }
                $l2542:;
            }
            }
            else {
            panda$core$Bit $tmp2543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_92456.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2543.value) {
            {
                int $tmp2546;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2547 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2547, &$s2548);
                    org$pandalanguage$pandac$parser$Token $tmp2550 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2549 = $tmp2550;
                    org$pandalanguage$pandac$ASTNode* $tmp2554 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2553 = $tmp2554;
                    $tmp2552 = $tmp2553;
                    rvalue2551 = $tmp2552;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2553));
                    if (((panda$core$Bit) { rvalue2551 == NULL }).value) {
                    {
                        $tmp2556 = NULL;
                        $finallyReturn2554 = $tmp2556;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2556));
                        $tmp2546 = 0;
                        goto $l2544;
                        $l2557:;
                        $tmp2447 = 3;
                        goto $l2445;
                        $l2558:;
                        return $finallyReturn2554;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2563 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2565 = (($fn2564) start2448->$class->vtable[2])(start2448);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2563, ((panda$core$Int64) { 2 }), $tmp2565, start2448, op2549.kind, rvalue2551);
                    $tmp2562 = $tmp2563;
                    $tmp2561 = $tmp2562;
                    $finallyReturn2559 = $tmp2561;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2561));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2562));
                    $tmp2546 = 1;
                    goto $l2544;
                    $l2566:;
                    $tmp2447 = 4;
                    goto $l2445;
                    $l2567:;
                    return $finallyReturn2559;
                }
                $l2544:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2551));
                rvalue2551 = NULL;
                switch ($tmp2546) {
                    case 1: goto $l2566;
                    case 0: goto $l2557;
                }
                $l2569:;
            }
            }
            else {
            {
                $tmp2571 = start2448;
                $finallyReturn2569 = $tmp2571;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2571));
                $tmp2447 = 5;
                goto $l2445;
                $l2572:;
                return $finallyReturn2569;
            }
            }
            }
        }
    }
    $tmp2447 = -1;
    goto $l2445;
    $l2445:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2448));
    start2448 = NULL;
    switch ($tmp2447) {
        case 1: goto $l2531;
        case 2: goto $l2540;
        case 3: goto $l2558;
        case 4: goto $l2567;
        case 5: goto $l2572;
        case 0: goto $l2454;
        case -1: goto $l2574;
    }
    $l2574:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t2578 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2579;
    org$pandalanguage$pandac$ASTNode* $tmp2580;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2581;
    org$pandalanguage$pandac$ASTNode* $tmp2583;
    org$pandalanguage$pandac$ASTNode* value2586 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2587;
    org$pandalanguage$pandac$ASTNode* $tmp2589;
    org$pandalanguage$pandac$ASTNode* $tmp2590;
    org$pandalanguage$pandac$ASTNode* $tmp2591;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2592;
    org$pandalanguage$pandac$ASTNode* $tmp2594;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    org$pandalanguage$pandac$ASTNode* $tmp2602;
    org$pandalanguage$pandac$ASTNode* $tmp2603;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2604;
    org$pandalanguage$pandac$ASTNode* $tmp2606;
    org$pandalanguage$pandac$ASTNode* $tmp2609;
    org$pandalanguage$pandac$ASTNode* $tmp2610;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2610;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    org$pandalanguage$pandac$ASTNode* $tmp2613;
    int $tmp2577;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2581 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2580 = $tmp2581;
        $tmp2579 = $tmp2580;
        t2578 = $tmp2579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2580));
        if (((panda$core$Bit) { t2578 == NULL }).value) {
        {
            $tmp2583 = NULL;
            $finallyReturn2581 = $tmp2583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2583));
            $tmp2577 = 0;
            goto $l2575;
            $l2584:;
            return $finallyReturn2581;
        }
        }
        memset(&value2586, 0, sizeof(value2586));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2587, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2588 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2587);
        if (((panda$core$Bit) { $tmp2588.nonnull }).value) {
        {
            {
                $tmp2589 = value2586;
                org$pandalanguage$pandac$ASTNode* $tmp2592 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2591 = $tmp2592;
                $tmp2590 = $tmp2591;
                value2586 = $tmp2590;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2591));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
            }
            if (((panda$core$Bit) { value2586 == NULL }).value) {
            {
                $tmp2594 = NULL;
                $finallyReturn2592 = $tmp2594;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2594));
                $tmp2577 = 1;
                goto $l2575;
                $l2595:;
                return $finallyReturn2592;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp2597 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2597.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2598.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2599 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2599, &$s2600);
            {
                $tmp2601 = value2586;
                org$pandalanguage$pandac$ASTNode* $tmp2604 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2603 = $tmp2604;
                $tmp2602 = $tmp2603;
                value2586 = $tmp2602;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
            }
            if (((panda$core$Bit) { value2586 == NULL }).value) {
            {
                $tmp2606 = NULL;
                $finallyReturn2604 = $tmp2606;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2606));
                $tmp2577 = 2;
                goto $l2575;
                $l2607:;
                return $finallyReturn2604;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2609 = value2586;
                $tmp2610 = NULL;
                value2586 = $tmp2610;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2610));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2609));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2614 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2616 = (($fn2615) t2578->$class->vtable[2])(t2578);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2614, ((panda$core$Int64) { 11 }), $tmp2616, t2578, value2586);
        $tmp2613 = $tmp2614;
        $tmp2612 = $tmp2613;
        $finallyReturn2610 = $tmp2612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2613));
        $tmp2577 = 3;
        goto $l2575;
        $l2617:;
        return $finallyReturn2610;
    }
    $l2575:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2578));
    t2578 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2586));
    switch ($tmp2577) {
        case 3: goto $l2617;
        case 2: goto $l2607;
        case 1: goto $l2595;
        case 0: goto $l2584;
    }
    $l2619:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2623;
    org$pandalanguage$pandac$Variable$Kind kind2625;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_92626;
    org$pandalanguage$pandac$Variable$Kind $tmp2628;
    org$pandalanguage$pandac$Variable$Kind $tmp2630;
    org$pandalanguage$pandac$Variable$Kind $tmp2632;
    org$pandalanguage$pandac$Variable$Kind $tmp2634;
    panda$collections$Array* declarations2636 = NULL;
    panda$collections$Array* $tmp2637;
    panda$collections$Array* $tmp2638;
    org$pandalanguage$pandac$ASTNode* decl2640 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2641;
    org$pandalanguage$pandac$ASTNode* $tmp2642;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2643;
    org$pandalanguage$pandac$ASTNode* $tmp2645;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2651;
    org$pandalanguage$pandac$ASTNode* decl2656 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2659;
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2665;
    org$pandalanguage$pandac$ASTNode* $tmp2667;
    org$pandalanguage$pandac$ASTNode* $tmp2668;
    panda$collections$ImmutableArray* $tmp2670;
    int $tmp2622;
    {
        org$pandalanguage$pandac$parser$Token $tmp2624 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start2623 = $tmp2624;
        memset(&kind2625, 0, sizeof(kind2625));
        {
            $match$1318_92626 = start2623.kind;
            panda$core$Bit $tmp2627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92626.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2627.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2628, ((panda$core$Int64) { 0 }));
                kind2625 = $tmp2628;
            }
            }
            else {
            panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92626.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2629.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2630, ((panda$core$Int64) { 1 }));
                kind2625 = $tmp2630;
            }
            }
            else {
            panda$core$Bit $tmp2631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92626.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2631.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2632, ((panda$core$Int64) { 3 }));
                kind2625 = $tmp2632;
            }
            }
            else {
            panda$core$Bit $tmp2633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_92626.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2633.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2634, ((panda$core$Int64) { 2 }));
                kind2625 = $tmp2634;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start2623, &$s2635);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp2639 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2639);
        $tmp2638 = $tmp2639;
        $tmp2637 = $tmp2638;
        declarations2636 = $tmp2637;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2638));
        org$pandalanguage$pandac$ASTNode* $tmp2643 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2642 = $tmp2643;
        $tmp2641 = $tmp2642;
        decl2640 = $tmp2641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2642));
        if (((panda$core$Bit) { decl2640 == NULL }).value) {
        {
            $tmp2645 = NULL;
            $finallyReturn2643 = $tmp2645;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2645));
            $tmp2622 = 0;
            goto $l2620;
            $l2646:;
            return $finallyReturn2643;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations2636, ((panda$core$Object*) decl2640));
        $l2648:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2651, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2652 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2651);
        bool $tmp2650 = ((panda$core$Bit) { $tmp2652.nonnull }).value;
        if (!$tmp2650) goto $l2649;
        {
            int $tmp2655;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2659 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2658 = $tmp2659;
                $tmp2657 = $tmp2658;
                decl2656 = $tmp2657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2658));
                if (((panda$core$Bit) { decl2656 == NULL }).value) {
                {
                    $tmp2661 = NULL;
                    $finallyReturn2659 = $tmp2661;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
                    $tmp2655 = 0;
                    goto $l2653;
                    $l2662:;
                    $tmp2622 = 1;
                    goto $l2620;
                    $l2663:;
                    return $finallyReturn2659;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations2636, ((panda$core$Object*) decl2656));
            }
            $tmp2655 = -1;
            goto $l2653;
            $l2653:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2656));
            decl2656 = NULL;
            switch ($tmp2655) {
                case -1: goto $l2665;
                case 0: goto $l2662;
            }
            $l2665:;
        }
        goto $l2648;
        $l2649:;
        org$pandalanguage$pandac$ASTNode* $tmp2669 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2671 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations2636);
        $tmp2670 = $tmp2671;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2669, ((panda$core$Int64) { 39 }), start2623.position, kind2625, $tmp2670);
        $tmp2668 = $tmp2669;
        $tmp2667 = $tmp2668;
        $finallyReturn2665 = $tmp2667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2670));
        $tmp2622 = 2;
        goto $l2620;
        $l2672:;
        return $finallyReturn2665;
    }
    $l2620:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2636));
    declarations2636 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2640));
    decl2640 = NULL;
    switch ($tmp2622) {
        case 2: goto $l2672;
        case 1: goto $l2663;
        case 0: goto $l2646;
    }
    $l2674:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2678;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2679;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2681;
    org$pandalanguage$pandac$ASTNode* $tmp2683;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2686;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2688;
    org$pandalanguage$pandac$ASTNode* $tmp2690;
    panda$core$Object* $tmp2693;
    org$pandalanguage$pandac$ASTNode* target2695 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2696;
    org$pandalanguage$pandac$ASTNode* $tmp2697;
    panda$core$String* $tmp2699;
    panda$collections$Array* args2701 = NULL;
    panda$collections$Array* $tmp2702;
    panda$collections$Array* $tmp2703;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2705;
    org$pandalanguage$pandac$ASTNode* expr2710 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2711;
    org$pandalanguage$pandac$ASTNode* $tmp2712;
    panda$core$Object* $tmp2714;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2715;
    org$pandalanguage$pandac$ASTNode* $tmp2717;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2724;
    org$pandalanguage$pandac$ASTNode* $tmp2726;
    org$pandalanguage$pandac$ASTNode* $tmp2727;
    org$pandalanguage$pandac$ASTNode* $tmp2728;
    panda$core$Object* $tmp2730;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2731;
    org$pandalanguage$pandac$ASTNode* $tmp2733;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2737;
    panda$core$Object* $tmp2740;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2741;
    org$pandalanguage$pandac$ASTNode* $tmp2743;
    panda$core$Object* $tmp2748;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2749;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$ASTNode* $tmp2752;
    panda$collections$ImmutableArray* $tmp2754;
    int $tmp2677;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2679, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2681 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2679, &$s2680);
        start2678 = $tmp2681;
        if (((panda$core$Bit) { !start2678.nonnull }).value) {
        {
            $tmp2683 = NULL;
            $finallyReturn2681 = $tmp2683;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
            $tmp2677 = 0;
            goto $l2675;
            $l2684:;
            return $finallyReturn2681;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2686, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2688 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2686, &$s2687);
        if (((panda$core$Bit) { !$tmp2688.nonnull }).value) {
        {
            $tmp2690 = NULL;
            $finallyReturn2688 = $tmp2690;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2690));
            $tmp2677 = 1;
            goto $l2675;
            $l2691:;
            return $finallyReturn2688;
        }
        }
        panda$core$Bit$wrapper* $tmp2694;
        $tmp2694 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp2694->value = ((panda$core$Bit) { true });
        $tmp2693 = ((panda$core$Object*) $tmp2694);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2693);
        panda$core$Panda$unref$panda$core$Object($tmp2693);
        org$pandalanguage$pandac$ASTNode* $tmp2698 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2700 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2678.value));
        $tmp2699 = $tmp2700;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2698, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2678.value).position, $tmp2699);
        $tmp2697 = $tmp2698;
        $tmp2696 = $tmp2697;
        target2695 = $tmp2696;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2696));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2697));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2699));
        panda$collections$Array* $tmp2704 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2704);
        $tmp2703 = $tmp2704;
        $tmp2702 = $tmp2703;
        args2701 = $tmp2702;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2705, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2706 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2705);
        if (((panda$core$Bit) { !$tmp2706.nonnull }).value) {
        {
            int $tmp2709;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2713 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2712 = $tmp2713;
                $tmp2711 = $tmp2712;
                expr2710 = $tmp2711;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2712));
                if (((panda$core$Bit) { expr2710 == NULL }).value) {
                {
                    panda$core$Object* $tmp2715 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2714 = $tmp2715;
                    panda$core$Panda$unref$panda$core$Object($tmp2714);
                    $tmp2717 = NULL;
                    $finallyReturn2715 = $tmp2717;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2717));
                    $tmp2709 = 0;
                    goto $l2707;
                    $l2718:;
                    $tmp2677 = 2;
                    goto $l2675;
                    $l2719:;
                    return $finallyReturn2715;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args2701, ((panda$core$Object*) expr2710));
                $l2721:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2724, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2725 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2724);
                bool $tmp2723 = ((panda$core$Bit) { $tmp2725.nonnull }).value;
                if (!$tmp2723) goto $l2722;
                {
                    {
                        $tmp2726 = expr2710;
                        org$pandalanguage$pandac$ASTNode* $tmp2729 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2728 = $tmp2729;
                        $tmp2727 = $tmp2728;
                        expr2710 = $tmp2727;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2727));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2728));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2726));
                    }
                    if (((panda$core$Bit) { expr2710 == NULL }).value) {
                    {
                        panda$core$Object* $tmp2731 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2730 = $tmp2731;
                        panda$core$Panda$unref$panda$core$Object($tmp2730);
                        $tmp2733 = NULL;
                        $finallyReturn2731 = $tmp2733;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2733));
                        $tmp2709 = 1;
                        goto $l2707;
                        $l2734:;
                        $tmp2677 = 3;
                        goto $l2675;
                        $l2735:;
                        return $finallyReturn2731;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args2701, ((panda$core$Object*) expr2710));
                }
                goto $l2721;
                $l2722:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2737, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2739 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2737, &$s2738);
                if (((panda$core$Bit) { !$tmp2739.nonnull }).value) {
                {
                    panda$core$Object* $tmp2741 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2740 = $tmp2741;
                    panda$core$Panda$unref$panda$core$Object($tmp2740);
                    $tmp2743 = NULL;
                    $finallyReturn2741 = $tmp2743;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2743));
                    $tmp2709 = 2;
                    goto $l2707;
                    $l2744:;
                    $tmp2677 = 4;
                    goto $l2675;
                    $l2745:;
                    return $finallyReturn2741;
                }
                }
            }
            $tmp2709 = -1;
            goto $l2707;
            $l2707:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2710));
            expr2710 = NULL;
            switch ($tmp2709) {
                case 2: goto $l2744;
                case 0: goto $l2718;
                case 1: goto $l2734;
                case -1: goto $l2747;
            }
            $l2747:;
        }
        }
        panda$core$Object* $tmp2749 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp2748 = $tmp2749;
        panda$core$Panda$unref$panda$core$Object($tmp2748);
        org$pandalanguage$pandac$ASTNode* $tmp2753 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2755 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2701);
        $tmp2754 = $tmp2755;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2753, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start2678.value).position, target2695, $tmp2754);
        $tmp2752 = $tmp2753;
        $tmp2751 = $tmp2752;
        $finallyReturn2749 = $tmp2751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2752));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
        $tmp2677 = 5;
        goto $l2675;
        $l2756:;
        return $finallyReturn2749;
    }
    $l2675:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2695));
    target2695 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2701));
    args2701 = NULL;
    switch ($tmp2677) {
        case 3: goto $l2735;
        case 2: goto $l2719;
        case 4: goto $l2745;
        case 5: goto $l2756;
        case 0: goto $l2684;
        case 1: goto $l2691;
    }
    $l2758:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2759;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2760;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2762;
    org$pandalanguage$pandac$ASTNode* $tmp2764;
    org$pandalanguage$pandac$parser$Token$nullable label2766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2767;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2768;
    org$pandalanguage$pandac$ASTNode* $tmp2770;
    org$pandalanguage$pandac$ASTNode* $tmp2771;
    panda$core$String* $tmp2773;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2775;
    org$pandalanguage$pandac$ASTNode* $tmp2777;
    org$pandalanguage$pandac$ASTNode* $tmp2778;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2760, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2762 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2760, &$s2761);
    start2759 = $tmp2762;
    if (((panda$core$Bit) { !start2759.nonnull }).value) {
    {
        $tmp2764 = NULL;
        $finallyReturn2762 = $tmp2764;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2764));
        return $finallyReturn2762;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2767, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2768 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2767);
    label2766 = $tmp2768;
    if (((panda$core$Bit) { label2766.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2772 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2774 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2766.value));
        $tmp2773 = $tmp2774;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2772, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start2759.value).position, $tmp2773);
        $tmp2771 = $tmp2772;
        $tmp2770 = $tmp2771;
        $finallyReturn2768 = $tmp2770;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2770));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2771));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2773));
        return $finallyReturn2768;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2779 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2779, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start2759.value).position, NULL);
    $tmp2778 = $tmp2779;
    $tmp2777 = $tmp2778;
    $finallyReturn2775 = $tmp2777;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2777));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2778));
    return $finallyReturn2775;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2781;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2782;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2784;
    org$pandalanguage$pandac$ASTNode* $tmp2786;
    org$pandalanguage$pandac$parser$Token$nullable label2788;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2789;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2790;
    org$pandalanguage$pandac$ASTNode* $tmp2792;
    org$pandalanguage$pandac$ASTNode* $tmp2793;
    panda$core$String* $tmp2795;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2797;
    org$pandalanguage$pandac$ASTNode* $tmp2799;
    org$pandalanguage$pandac$ASTNode* $tmp2800;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2782, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2784 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2782, &$s2783);
    start2781 = $tmp2784;
    if (((panda$core$Bit) { !start2781.nonnull }).value) {
    {
        $tmp2786 = NULL;
        $finallyReturn2784 = $tmp2786;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2786));
        return $finallyReturn2784;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2789, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2790 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2789);
    label2788 = $tmp2790;
    if (((panda$core$Bit) { label2788.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2794 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2796 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2788.value));
        $tmp2795 = $tmp2796;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2794, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start2781.value).position, $tmp2795);
        $tmp2793 = $tmp2794;
        $tmp2792 = $tmp2793;
        $finallyReturn2790 = $tmp2792;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2792));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2793));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2795));
        return $finallyReturn2790;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2801 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2801, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start2781.value).position, NULL);
    $tmp2800 = $tmp2801;
    $tmp2799 = $tmp2800;
    $finallyReturn2797 = $tmp2799;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2799));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2800));
    return $finallyReturn2797;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2803;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2804;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2806;
    org$pandalanguage$pandac$ASTNode* $tmp2808;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_92810;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2820;
    org$pandalanguage$pandac$ASTNode* $tmp2822;
    org$pandalanguage$pandac$ASTNode* $tmp2823;
    panda$collections$Array* children2829 = NULL;
    panda$collections$Array* $tmp2830;
    panda$collections$Array* $tmp2831;
    org$pandalanguage$pandac$ASTNode* expr2833 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2834;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2836;
    org$pandalanguage$pandac$ASTNode* $tmp2838;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2840;
    org$pandalanguage$pandac$ASTNode* $tmp2842;
    org$pandalanguage$pandac$ASTNode* $tmp2843;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2804, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2806 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2804, &$s2805);
    start2803 = $tmp2806;
    if (((panda$core$Bit) { !start2803.nonnull }).value) {
    {
        $tmp2808 = NULL;
        $finallyReturn2806 = $tmp2808;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2808));
        return $finallyReturn2806;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2811 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_92810 = $tmp2811.kind;
        panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_92810.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp2813 = $tmp2814.value;
        if ($tmp2813) goto $l2815;
        panda$core$Bit $tmp2816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_92810.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp2813 = $tmp2816.value;
        $l2815:;
        panda$core$Bit $tmp2817 = { $tmp2813 };
        bool $tmp2812 = $tmp2817.value;
        if ($tmp2812) goto $l2818;
        panda$core$Bit $tmp2819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_92810.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp2812 = $tmp2819.value;
        $l2818:;
        panda$core$Bit $tmp2820 = { $tmp2812 };
        if ($tmp2820.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2824 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2824, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start2803.value).position, NULL);
            $tmp2823 = $tmp2824;
            $tmp2822 = $tmp2823;
            $finallyReturn2820 = $tmp2822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2823));
            return $finallyReturn2820;
        }
        }
        else {
        {
            int $tmp2828;
            {
                panda$collections$Array* $tmp2832 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2832);
                $tmp2831 = $tmp2832;
                $tmp2830 = $tmp2831;
                children2829 = $tmp2830;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2831));
                org$pandalanguage$pandac$ASTNode* $tmp2836 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2835 = $tmp2836;
                $tmp2834 = $tmp2835;
                expr2833 = $tmp2834;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2834));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2835));
                if (((panda$core$Bit) { expr2833 == NULL }).value) {
                {
                    $tmp2838 = NULL;
                    $finallyReturn2836 = $tmp2838;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2838));
                    $tmp2828 = 0;
                    goto $l2826;
                    $l2839:;
                    return $finallyReturn2836;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children2829, ((panda$core$Object*) expr2833));
                org$pandalanguage$pandac$ASTNode* $tmp2844 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2844, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start2803.value).position, expr2833);
                $tmp2843 = $tmp2844;
                $tmp2842 = $tmp2843;
                $finallyReturn2840 = $tmp2842;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2843));
                $tmp2828 = 1;
                goto $l2826;
                $l2845:;
                return $finallyReturn2840;
            }
            $l2826:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2829));
            children2829 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2833));
            expr2833 = NULL;
            switch ($tmp2828) {
                case 0: goto $l2839;
                case 1: goto $l2845;
            }
            $l2847:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_92848;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2850;
    org$pandalanguage$pandac$ASTNode* $tmp2852;
    org$pandalanguage$pandac$ASTNode* $tmp2853;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2856;
    org$pandalanguage$pandac$ASTNode* $tmp2858;
    org$pandalanguage$pandac$ASTNode* $tmp2859;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2862;
    org$pandalanguage$pandac$ASTNode* $tmp2864;
    org$pandalanguage$pandac$ASTNode* $tmp2865;
    {
        org$pandalanguage$pandac$parser$Token $tmp2849 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_92848 = $tmp2849.kind;
        panda$core$Bit $tmp2850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92848.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2850.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2854 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2853 = $tmp2854;
            $tmp2852 = $tmp2853;
            $finallyReturn2850 = $tmp2852;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2852));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2853));
            return $finallyReturn2850;
        }
        }
        else {
        panda$core$Bit $tmp2856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92848.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2856.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2860 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2859 = $tmp2860;
            $tmp2858 = $tmp2859;
            $finallyReturn2856 = $tmp2858;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2858));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2859));
            return $finallyReturn2856;
        }
        }
        else {
        panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92848.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2862.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2866 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2865 = $tmp2866;
            $tmp2864 = $tmp2865;
            $finallyReturn2862 = $tmp2864;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2865));
            return $finallyReturn2862;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_92868;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2870;
    org$pandalanguage$pandac$ASTNode* $tmp2872;
    org$pandalanguage$pandac$ASTNode* $tmp2873;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2876;
    org$pandalanguage$pandac$ASTNode* $tmp2878;
    org$pandalanguage$pandac$ASTNode* $tmp2879;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2882;
    org$pandalanguage$pandac$ASTNode* $tmp2884;
    org$pandalanguage$pandac$ASTNode* $tmp2885;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2888;
    org$pandalanguage$pandac$ASTNode* $tmp2890;
    org$pandalanguage$pandac$ASTNode* $tmp2891;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2894;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2895;
    org$pandalanguage$pandac$ASTNode* $tmp2897;
    {
        org$pandalanguage$pandac$parser$Token $tmp2869 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_92868 = $tmp2869.kind;
        panda$core$Bit $tmp2870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92868.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2870.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2874 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2873 = $tmp2874;
            $tmp2872 = $tmp2873;
            $finallyReturn2870 = $tmp2872;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2873));
            return $finallyReturn2870;
        }
        }
        else {
        panda$core$Bit $tmp2876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92868.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2876.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2880 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2879 = $tmp2880;
            $tmp2878 = $tmp2879;
            $finallyReturn2876 = $tmp2878;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2879));
            return $finallyReturn2876;
        }
        }
        else {
        panda$core$Bit $tmp2882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92868.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2882.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2886 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2885 = $tmp2886;
            $tmp2884 = $tmp2885;
            $finallyReturn2882 = $tmp2884;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2884));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2885));
            return $finallyReturn2882;
        }
        }
        else {
        panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_92868.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2888.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2892 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2891 = $tmp2892;
            $tmp2890 = $tmp2891;
            $finallyReturn2888 = $tmp2890;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
            return $finallyReturn2888;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2894, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2894, &$s2895);
            $tmp2897 = NULL;
            $finallyReturn2895 = $tmp2897;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2897));
            return $finallyReturn2895;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_92899;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2901;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2907;
    org$pandalanguage$pandac$ASTNode* $tmp2909;
    org$pandalanguage$pandac$ASTNode* $tmp2910;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2913;
    org$pandalanguage$pandac$ASTNode* $tmp2915;
    org$pandalanguage$pandac$ASTNode* $tmp2916;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2919;
    org$pandalanguage$pandac$ASTNode* $tmp2921;
    org$pandalanguage$pandac$ASTNode* $tmp2922;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2925;
    org$pandalanguage$pandac$ASTNode* $tmp2927;
    org$pandalanguage$pandac$ASTNode* $tmp2928;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2931;
    org$pandalanguage$pandac$ASTNode* $tmp2933;
    org$pandalanguage$pandac$ASTNode* $tmp2934;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2937;
    org$pandalanguage$pandac$ASTNode* $tmp2939;
    org$pandalanguage$pandac$ASTNode* $tmp2940;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2943;
    org$pandalanguage$pandac$ASTNode* $tmp2945;
    org$pandalanguage$pandac$ASTNode* $tmp2946;
    org$pandalanguage$pandac$parser$Token id2950;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2952;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2953;
    org$pandalanguage$pandac$ASTNode* $tmp2955;
    org$pandalanguage$pandac$ASTNode* $tmp2956;
    panda$core$String* $tmp2957;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2960;
    org$pandalanguage$pandac$ASTNode* $tmp2962;
    org$pandalanguage$pandac$ASTNode* $tmp2963;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2970;
    org$pandalanguage$pandac$ASTNode* $tmp2972;
    org$pandalanguage$pandac$ASTNode* $tmp2973;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2988;
    org$pandalanguage$pandac$ASTNode* $tmp2990;
    org$pandalanguage$pandac$ASTNode* $tmp2991;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2994;
    org$pandalanguage$pandac$ASTNode* $tmp2996;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3000;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3001;
    org$pandalanguage$pandac$ASTNode* $tmp3003;
    {
        org$pandalanguage$pandac$parser$Token $tmp2900 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_92899 = $tmp2900.kind;
        panda$core$Bit $tmp2901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2901.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2905 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2904 = $tmp2905;
            $tmp2903 = $tmp2904;
            $finallyReturn2901 = $tmp2903;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2904));
            return $finallyReturn2901;
        }
        }
        else {
        panda$core$Bit $tmp2907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2907.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2911 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2910 = $tmp2911;
            $tmp2909 = $tmp2910;
            $finallyReturn2907 = $tmp2909;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2910));
            return $finallyReturn2907;
        }
        }
        else {
        panda$core$Bit $tmp2913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2913.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2917 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2916 = $tmp2917;
            $tmp2915 = $tmp2916;
            $finallyReturn2913 = $tmp2915;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2916));
            return $finallyReturn2913;
        }
        }
        else {
        panda$core$Bit $tmp2919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2919.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2923 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2922 = $tmp2923;
            $tmp2921 = $tmp2922;
            $finallyReturn2919 = $tmp2921;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2922));
            return $finallyReturn2919;
        }
        }
        else {
        panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2925.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2929 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2928 = $tmp2929;
            $tmp2927 = $tmp2928;
            $finallyReturn2925 = $tmp2927;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2927));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2928));
            return $finallyReturn2925;
        }
        }
        else {
        panda$core$Bit $tmp2931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2931.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2935 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2934 = $tmp2935;
            $tmp2933 = $tmp2934;
            $finallyReturn2931 = $tmp2933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2934));
            return $finallyReturn2931;
        }
        }
        else {
        panda$core$Bit $tmp2937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2937.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2941 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2940 = $tmp2941;
            $tmp2939 = $tmp2940;
            $finallyReturn2937 = $tmp2939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2939));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2940));
            return $finallyReturn2937;
        }
        }
        else {
        panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp2943.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2947 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2946 = $tmp2947;
            $tmp2945 = $tmp2946;
            $finallyReturn2943 = $tmp2945;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2946));
            return $finallyReturn2943;
        }
        }
        else {
        panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2949.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2951 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id2950 = $tmp2951;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2952, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2953 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2952);
            if (((panda$core$Bit) { $tmp2953.nonnull }).value) {
            {
                panda$core$String* $tmp2958 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id2950);
                $tmp2957 = $tmp2958;
                org$pandalanguage$pandac$ASTNode* $tmp2959 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2957);
                $tmp2956 = $tmp2959;
                $tmp2955 = $tmp2956;
                $finallyReturn2953 = $tmp2955;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
                return $finallyReturn2953;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id2950);
            org$pandalanguage$pandac$ASTNode* $tmp2964 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2963 = $tmp2964;
            $tmp2962 = $tmp2963;
            $finallyReturn2960 = $tmp2962;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2962));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2963));
            return $finallyReturn2960;
        }
        }
        else {
        panda$core$Bit $tmp2967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp2966 = $tmp2967.value;
        if ($tmp2966) goto $l2968;
        panda$core$Bit $tmp2969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp2966 = $tmp2969.value;
        $l2968:;
        panda$core$Bit $tmp2970 = { $tmp2966 };
        if ($tmp2970.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2974 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2973 = $tmp2974;
            $tmp2972 = $tmp2973;
            $finallyReturn2970 = $tmp2972;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2972));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2973));
            return $finallyReturn2970;
        }
        }
        else {
        panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2978 = $tmp2979.value;
        if ($tmp2978) goto $l2980;
        panda$core$Bit $tmp2981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2978 = $tmp2981.value;
        $l2980:;
        panda$core$Bit $tmp2982 = { $tmp2978 };
        bool $tmp2977 = $tmp2982.value;
        if ($tmp2977) goto $l2983;
        panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2977 = $tmp2984.value;
        $l2983:;
        panda$core$Bit $tmp2985 = { $tmp2977 };
        bool $tmp2976 = $tmp2985.value;
        if ($tmp2976) goto $l2986;
        panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2976 = $tmp2987.value;
        $l2986:;
        panda$core$Bit $tmp2988 = { $tmp2976 };
        if ($tmp2988.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2992 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2991 = $tmp2992;
            $tmp2990 = $tmp2991;
            $finallyReturn2988 = $tmp2990;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2990));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2991));
            return $finallyReturn2988;
        }
        }
        else {
        panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_92899.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2994.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2998 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2997 = $tmp2998;
            $tmp2996 = $tmp2997;
            $finallyReturn2994 = $tmp2996;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2996));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2997));
            return $finallyReturn2994;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3000, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3000, &$s3001);
            $tmp3003 = NULL;
            $finallyReturn3001 = $tmp3003;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3003));
            return $finallyReturn3001;
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
    org$pandalanguage$pandac$parser$Token$nullable start3008;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3009;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3011;
    org$pandalanguage$pandac$ASTNode* $tmp3013;
    org$pandalanguage$pandac$parser$Token$nullable next3016;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3017;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3019;
    org$pandalanguage$pandac$ASTNode* $tmp3021;
    panda$core$MutableString* name3024 = NULL;
    panda$core$MutableString* $tmp3025;
    panda$core$MutableString* $tmp3026;
    panda$core$String* $tmp3028;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3032;
    panda$core$Char8 $tmp3034;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3035;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3037;
    org$pandalanguage$pandac$ASTNode* $tmp3039;
    panda$core$String* $tmp3042;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3043;
    org$pandalanguage$pandac$ASTNode* $tmp3045;
    org$pandalanguage$pandac$ASTNode* $tmp3046;
    panda$core$String* $tmp3048;
    int $tmp3007;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3009, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3011 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3009, &$s3010);
        start3008 = $tmp3011;
        if (((panda$core$Bit) { !start3008.nonnull }).value) {
        {
            $tmp3013 = NULL;
            $finallyReturn3011 = $tmp3013;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3013));
            $tmp3007 = 0;
            goto $l3005;
            $l3014:;
            return $finallyReturn3011;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3017, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3019 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3017, &$s3018);
        next3016 = $tmp3019;
        if (((panda$core$Bit) { !next3016.nonnull }).value) {
        {
            $tmp3021 = NULL;
            $finallyReturn3019 = $tmp3021;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3021));
            $tmp3007 = 1;
            goto $l3005;
            $l3022:;
            return $finallyReturn3019;
        }
        }
        panda$core$MutableString* $tmp3027 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3029 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3016.value));
        $tmp3028 = $tmp3029;
        panda$core$MutableString$init$panda$core$String($tmp3027, $tmp3028);
        $tmp3026 = $tmp3027;
        $tmp3025 = $tmp3026;
        name3024 = $tmp3025;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3025));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3026));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3028));
        $l3030:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3032, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3033 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3032);
            next3016 = $tmp3033;
            if (((panda$core$Bit) { !next3016.nonnull }).value) {
            {
                goto $l3031;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3034, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3024, $tmp3034);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3035, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3037 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3035, &$s3036);
            next3016 = $tmp3037;
            if (((panda$core$Bit) { !next3016.nonnull }).value) {
            {
                $tmp3039 = NULL;
                $finallyReturn3037 = $tmp3039;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3039));
                $tmp3007 = 2;
                goto $l3005;
                $l3040:;
                return $finallyReturn3037;
            }
            }
            panda$core$String* $tmp3043 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3016.value));
            $tmp3042 = $tmp3043;
            panda$core$MutableString$append$panda$core$String(name3024, $tmp3042);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3042));
        }
        }
        $l3031:;
        org$pandalanguage$pandac$ASTNode* $tmp3047 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3049 = panda$core$MutableString$finish$R$panda$core$String(name3024);
        $tmp3048 = $tmp3049;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3047, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start3008.value).position, $tmp3048);
        $tmp3046 = $tmp3047;
        $tmp3045 = $tmp3046;
        $finallyReturn3043 = $tmp3045;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3046));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
        $tmp3007 = 3;
        goto $l3005;
        $l3050:;
        return $finallyReturn3043;
    }
    $l3005:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3024));
    name3024 = NULL;
    switch ($tmp3007) {
        case 2: goto $l3040;
        case 1: goto $l3022;
        case 3: goto $l3050;
        case 0: goto $l3014;
    }
    $l3052:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3056;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3057;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3059;
    org$pandalanguage$pandac$ASTNode* $tmp3061;
    org$pandalanguage$pandac$parser$Token$nullable next3064;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3065;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3067;
    org$pandalanguage$pandac$ASTNode* $tmp3069;
    panda$core$MutableString* name3072 = NULL;
    panda$core$MutableString* $tmp3073;
    panda$core$MutableString* $tmp3074;
    panda$core$String* $tmp3076;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3080;
    panda$core$Char8 $tmp3082;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3083;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3085;
    org$pandalanguage$pandac$ASTNode* $tmp3087;
    panda$core$String* $tmp3090;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3091;
    org$pandalanguage$pandac$ASTNode* $tmp3093;
    org$pandalanguage$pandac$ASTNode* $tmp3094;
    panda$core$String* $tmp3096;
    int $tmp3055;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3057, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3059 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3057, &$s3058);
        start3056 = $tmp3059;
        if (((panda$core$Bit) { !start3056.nonnull }).value) {
        {
            $tmp3061 = NULL;
            $finallyReturn3059 = $tmp3061;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3061));
            $tmp3055 = 0;
            goto $l3053;
            $l3062:;
            return $finallyReturn3059;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3065, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3067 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3065, &$s3066);
        next3064 = $tmp3067;
        if (((panda$core$Bit) { !next3064.nonnull }).value) {
        {
            $tmp3069 = NULL;
            $finallyReturn3067 = $tmp3069;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3069));
            $tmp3055 = 1;
            goto $l3053;
            $l3070:;
            return $finallyReturn3067;
        }
        }
        panda$core$MutableString* $tmp3075 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3064.value));
        $tmp3076 = $tmp3077;
        panda$core$MutableString$init$panda$core$String($tmp3075, $tmp3076);
        $tmp3074 = $tmp3075;
        $tmp3073 = $tmp3074;
        name3072 = $tmp3073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3076));
        $l3078:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3080, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3081 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3080);
            next3064 = $tmp3081;
            if (((panda$core$Bit) { !next3064.nonnull }).value) {
            {
                goto $l3079;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3082, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3072, $tmp3082);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3083, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3085 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3083, &$s3084);
            next3064 = $tmp3085;
            if (((panda$core$Bit) { !next3064.nonnull }).value) {
            {
                $tmp3087 = NULL;
                $finallyReturn3085 = $tmp3087;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3087));
                $tmp3055 = 2;
                goto $l3053;
                $l3088:;
                return $finallyReturn3085;
            }
            }
            panda$core$String* $tmp3091 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3064.value));
            $tmp3090 = $tmp3091;
            panda$core$MutableString$append$panda$core$String(name3072, $tmp3090);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3090));
        }
        }
        $l3079:;
        org$pandalanguage$pandac$ASTNode* $tmp3095 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3097 = panda$core$MutableString$finish$R$panda$core$String(name3072);
        $tmp3096 = $tmp3097;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3095, ((panda$core$Int64) { 38 }), ((org$pandalanguage$pandac$parser$Token) start3056.value).position, $tmp3096);
        $tmp3094 = $tmp3095;
        $tmp3093 = $tmp3094;
        $finallyReturn3091 = $tmp3093;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3093));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3094));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
        $tmp3055 = 3;
        goto $l3053;
        $l3098:;
        return $finallyReturn3091;
    }
    $l3053:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3072));
    name3072 = NULL;
    switch ($tmp3055) {
        case 2: goto $l3088;
        case 1: goto $l3070;
        case 3: goto $l3098;
        case 0: goto $l3062;
    }
    $l3100:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3104;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3105;
    panda$collections$ImmutableArray* $finallyReturn3107;
    panda$collections$ImmutableArray* $tmp3109;
    org$pandalanguage$pandac$parser$Token$nullable id3112;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3113;
    panda$collections$ImmutableArray* $finallyReturn3115;
    panda$collections$ImmutableArray* $tmp3117;
    panda$collections$Array* parameters3120 = NULL;
    panda$collections$Array* $tmp3121;
    panda$collections$Array* $tmp3122;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3124;
    org$pandalanguage$pandac$ASTNode* t3129 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3130;
    org$pandalanguage$pandac$ASTNode* $tmp3131;
    panda$collections$ImmutableArray* $finallyReturn3132;
    panda$collections$ImmutableArray* $tmp3134;
    org$pandalanguage$pandac$ASTNode* $tmp3138;
    panda$core$String* $tmp3140;
    org$pandalanguage$pandac$ASTNode* $tmp3143;
    panda$core$String* $tmp3145;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3150;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3152;
    panda$collections$ImmutableArray* $finallyReturn3154;
    panda$collections$ImmutableArray* $tmp3156;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3159;
    org$pandalanguage$pandac$ASTNode* t3164 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3165;
    org$pandalanguage$pandac$ASTNode* $tmp3166;
    panda$collections$ImmutableArray* $finallyReturn3167;
    panda$collections$ImmutableArray* $tmp3169;
    org$pandalanguage$pandac$ASTNode* $tmp3173;
    panda$core$String* $tmp3175;
    org$pandalanguage$pandac$ASTNode* $tmp3178;
    panda$core$String* $tmp3180;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3182;
    panda$collections$ImmutableArray* $finallyReturn3184;
    panda$collections$ImmutableArray* $tmp3186;
    panda$collections$ImmutableArray* $finallyReturn3188;
    panda$collections$ImmutableArray* $tmp3190;
    panda$collections$ImmutableArray* $tmp3191;
    int $tmp3103;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3105, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3107 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3105, &$s3106);
        start3104 = $tmp3107;
        if (((panda$core$Bit) { !start3104.nonnull }).value) {
        {
            $tmp3109 = NULL;
            $finallyReturn3107 = $tmp3109;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3109));
            $tmp3103 = 0;
            goto $l3101;
            $l3110:;
            return $finallyReturn3107;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3113, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3115 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3113, &$s3114);
        id3112 = $tmp3115;
        if (((panda$core$Bit) { !id3112.nonnull }).value) {
        {
            $tmp3117 = NULL;
            $finallyReturn3115 = $tmp3117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3117));
            $tmp3103 = 1;
            goto $l3101;
            $l3118:;
            return $finallyReturn3115;
        }
        }
        panda$collections$Array* $tmp3123 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3123);
        $tmp3122 = $tmp3123;
        $tmp3121 = $tmp3122;
        parameters3120 = $tmp3121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3122));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3124, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3125 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3124);
        if (((panda$core$Bit) { $tmp3125.nonnull }).value) {
        {
            int $tmp3128;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3132 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3131 = $tmp3132;
                $tmp3130 = $tmp3131;
                t3129 = $tmp3130;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3130));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3131));
                if (((panda$core$Bit) { t3129 == NULL }).value) {
                {
                    $tmp3134 = NULL;
                    $finallyReturn3132 = $tmp3134;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3134));
                    $tmp3128 = 0;
                    goto $l3126;
                    $l3135:;
                    $tmp3103 = 2;
                    goto $l3101;
                    $l3136:;
                    return $finallyReturn3132;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3139 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3141 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3112.value));
                $tmp3140 = $tmp3141;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3139, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id3112.value).position, $tmp3140, t3129);
                $tmp3138 = $tmp3139;
                panda$collections$Array$add$panda$collections$Array$T(parameters3120, ((panda$core$Object*) $tmp3138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
            }
            $tmp3128 = -1;
            goto $l3126;
            $l3126:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3129));
            t3129 = NULL;
            switch ($tmp3128) {
                case -1: goto $l3142;
                case 0: goto $l3135;
            }
            $l3142:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3144 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3146 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3112.value));
            $tmp3145 = $tmp3146;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3144, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id3112.value).position, $tmp3145);
            $tmp3143 = $tmp3144;
            panda$collections$Array$add$panda$collections$Array$T(parameters3120, ((panda$core$Object*) $tmp3143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3145));
        }
        }
        $l3147:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3150, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3151 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3150);
        bool $tmp3149 = ((panda$core$Bit) { $tmp3151.nonnull }).value;
        if (!$tmp3149) goto $l3148;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3152, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3154 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3152, &$s3153);
            id3112 = $tmp3154;
            if (((panda$core$Bit) { !id3112.nonnull }).value) {
            {
                $tmp3156 = NULL;
                $finallyReturn3154 = $tmp3156;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3156));
                $tmp3103 = 3;
                goto $l3101;
                $l3157:;
                return $finallyReturn3154;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3159, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3160 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3159);
            if (((panda$core$Bit) { $tmp3160.nonnull }).value) {
            {
                int $tmp3163;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3167 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3166 = $tmp3167;
                    $tmp3165 = $tmp3166;
                    t3164 = $tmp3165;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3165));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3166));
                    if (((panda$core$Bit) { t3164 == NULL }).value) {
                    {
                        $tmp3169 = NULL;
                        $finallyReturn3167 = $tmp3169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3169));
                        $tmp3163 = 0;
                        goto $l3161;
                        $l3170:;
                        $tmp3103 = 4;
                        goto $l3101;
                        $l3171:;
                        return $finallyReturn3167;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3176 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3112.value));
                    $tmp3175 = $tmp3176;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3174, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id3112.value).position, $tmp3175, t3164);
                    $tmp3173 = $tmp3174;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3120, ((panda$core$Object*) $tmp3173));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3173));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3175));
                }
                $tmp3163 = -1;
                goto $l3161;
                $l3161:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3164));
                t3164 = NULL;
                switch ($tmp3163) {
                    case -1: goto $l3177;
                    case 0: goto $l3170;
                }
                $l3177:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3179 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3181 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3112.value));
                $tmp3180 = $tmp3181;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3179, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id3112.value).position, $tmp3180);
                $tmp3178 = $tmp3179;
                panda$collections$Array$add$panda$collections$Array$T(parameters3120, ((panda$core$Object*) $tmp3178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3180));
            }
            }
        }
        goto $l3147;
        $l3148:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3182, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3184 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3182, &$s3183);
        if (((panda$core$Bit) { !$tmp3184.nonnull }).value) {
        {
            $tmp3186 = NULL;
            $finallyReturn3184 = $tmp3186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
            $tmp3103 = 5;
            goto $l3101;
            $l3187:;
            return $finallyReturn3184;
        }
        }
        panda$collections$ImmutableArray* $tmp3192 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3120);
        $tmp3191 = $tmp3192;
        $tmp3190 = $tmp3191;
        $finallyReturn3188 = $tmp3190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3191));
        $tmp3103 = 6;
        goto $l3101;
        $l3193:;
        return $finallyReturn3188;
    }
    $l3101:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3120));
    parameters3120 = NULL;
    switch ($tmp3103) {
        case 2: goto $l3136;
        case 6: goto $l3193;
        case 1: goto $l3118;
        case 3: goto $l3157;
        case 5: goto $l3187;
        case 4: goto $l3171;
        case 0: goto $l3110;
    }
    $l3195:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3199;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3200;
    panda$collections$ImmutableArray* $finallyReturn3202;
    panda$collections$ImmutableArray* $tmp3204;
    panda$collections$Array* result3207 = NULL;
    panda$collections$Array* $tmp3208;
    panda$collections$Array* $tmp3209;
    org$pandalanguage$pandac$ASTNode* t3211 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3212;
    org$pandalanguage$pandac$ASTNode* $tmp3213;
    panda$collections$ImmutableArray* $finallyReturn3214;
    panda$collections$ImmutableArray* $tmp3216;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3222;
    org$pandalanguage$pandac$ASTNode* $tmp3224;
    org$pandalanguage$pandac$ASTNode* $tmp3225;
    org$pandalanguage$pandac$ASTNode* $tmp3226;
    panda$collections$ImmutableArray* $finallyReturn3227;
    panda$collections$ImmutableArray* $tmp3229;
    panda$collections$ImmutableArray* $finallyReturn3231;
    panda$collections$ImmutableArray* $tmp3233;
    panda$collections$ImmutableArray* $tmp3234;
    int $tmp3198;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3200, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3202 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3200, &$s3201);
        start3199 = $tmp3202;
        if (((panda$core$Bit) { !start3199.nonnull }).value) {
        {
            $tmp3204 = NULL;
            $finallyReturn3202 = $tmp3204;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3204));
            $tmp3198 = 0;
            goto $l3196;
            $l3205:;
            return $finallyReturn3202;
        }
        }
        panda$collections$Array* $tmp3210 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3210);
        $tmp3209 = $tmp3210;
        $tmp3208 = $tmp3209;
        result3207 = $tmp3208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3209));
        org$pandalanguage$pandac$ASTNode* $tmp3214 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3213 = $tmp3214;
        $tmp3212 = $tmp3213;
        t3211 = $tmp3212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3213));
        if (((panda$core$Bit) { t3211 == NULL }).value) {
        {
            $tmp3216 = NULL;
            $finallyReturn3214 = $tmp3216;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
            $tmp3198 = 1;
            goto $l3196;
            $l3217:;
            return $finallyReturn3214;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3207, ((panda$core$Object*) t3211));
        $l3219:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3222, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3223 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3222);
        bool $tmp3221 = ((panda$core$Bit) { $tmp3223.nonnull }).value;
        if (!$tmp3221) goto $l3220;
        {
            {
                $tmp3224 = t3211;
                org$pandalanguage$pandac$ASTNode* $tmp3227 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3226 = $tmp3227;
                $tmp3225 = $tmp3226;
                t3211 = $tmp3225;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
            }
            if (((panda$core$Bit) { t3211 == NULL }).value) {
            {
                $tmp3229 = NULL;
                $finallyReturn3227 = $tmp3229;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3229));
                $tmp3198 = 2;
                goto $l3196;
                $l3230:;
                return $finallyReturn3227;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3207, ((panda$core$Object*) t3211));
        }
        goto $l3219;
        $l3220:;
        panda$collections$ImmutableArray* $tmp3235 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3207);
        $tmp3234 = $tmp3235;
        $tmp3233 = $tmp3234;
        $finallyReturn3231 = $tmp3233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3234));
        $tmp3198 = 3;
        goto $l3196;
        $l3236:;
        return $finallyReturn3231;
    }
    $l3196:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3207));
    result3207 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3211));
    t3211 = NULL;
    switch ($tmp3198) {
        case 1: goto $l3217;
        case 2: goto $l3230;
        case 0: goto $l3205;
        case 3: goto $l3236;
    }
    $l3238:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3242 = NULL;
    panda$collections$Array* $tmp3243;
    panda$collections$Array* $tmp3244;
    org$pandalanguage$pandac$parser$Token$nullable next3248;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3249;
    org$pandalanguage$pandac$ASTNode* $tmp3251;
    panda$core$String* $tmp3253;
    panda$collections$ImmutableArray* $finallyReturn3254;
    panda$collections$ImmutableArray* $tmp3256;
    panda$collections$ImmutableArray* $tmp3257;
    int $tmp3241;
    {
        panda$collections$Array* $tmp3245 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3245);
        $tmp3244 = $tmp3245;
        $tmp3243 = $tmp3244;
        result3242 = $tmp3243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
        $l3246:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3249, ((panda$core$Int64) { 13 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3250 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3249);
            next3248 = $tmp3250;
            if (((panda$core$Bit) { !next3248.nonnull }).value) {
            {
                goto $l3247;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp3252 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3254 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3248.value));
            $tmp3253 = $tmp3254;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3252, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next3248.value).position, $tmp3253);
            $tmp3251 = $tmp3252;
            panda$collections$Array$add$panda$collections$Array$T(result3242, ((panda$core$Object*) $tmp3251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3253));
        }
        }
        $l3247:;
        panda$collections$ImmutableArray* $tmp3258 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3242);
        $tmp3257 = $tmp3258;
        $tmp3256 = $tmp3257;
        $finallyReturn3254 = $tmp3256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3257));
        $tmp3241 = 0;
        goto $l3239;
        $l3259:;
        return $finallyReturn3254;
    }
    $l3239:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3242));
    result3242 = NULL;
    switch ($tmp3241) {
        case 0: goto $l3259;
    }
    $l3261:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3265;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3266;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3268;
    org$pandalanguage$pandac$ASTNode* $tmp3270;
    panda$core$MutableString* result3273 = NULL;
    panda$core$MutableString* $tmp3274;
    panda$core$MutableString* $tmp3275;
    org$pandalanguage$pandac$parser$Token next3279;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3283;
    org$pandalanguage$pandac$ASTNode* $tmp3285;
    panda$core$String* $tmp3288;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3289;
    org$pandalanguage$pandac$ASTNode* $tmp3291;
    org$pandalanguage$pandac$ASTNode* $tmp3292;
    panda$core$String* $tmp3294;
    int $tmp3264;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3266, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3268 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3266, &$s3267);
        start3265 = $tmp3268;
        if (((panda$core$Bit) { !start3265.nonnull }).value) {
        {
            $tmp3270 = NULL;
            $finallyReturn3268 = $tmp3270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3270));
            $tmp3264 = 0;
            goto $l3262;
            $l3271:;
            return $finallyReturn3268;
        }
        }
        panda$core$MutableString* $tmp3276 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3276);
        $tmp3275 = $tmp3276;
        $tmp3274 = $tmp3275;
        result3273 = $tmp3274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3275));
        $l3277:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3280 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3279 = $tmp3280;
            panda$core$Bit $tmp3281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3279.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3281.value) {
            {
                goto $l3278;
            }
            }
            panda$core$Bit $tmp3282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3279.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3282.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3265.value), &$s3283);
                $tmp3285 = NULL;
                $finallyReturn3283 = $tmp3285;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3285));
                $tmp3264 = 1;
                goto $l3262;
                $l3286:;
                return $finallyReturn3283;
            }
            }
            panda$core$String* $tmp3289 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3279);
            $tmp3288 = $tmp3289;
            panda$core$MutableString$append$panda$core$String(result3273, $tmp3288);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3288));
        }
        }
        $l3278:;
        org$pandalanguage$pandac$ASTNode* $tmp3293 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3295 = panda$core$MutableString$finish$R$panda$core$String(result3273);
        $tmp3294 = $tmp3295;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3293, ((panda$core$Int64) { 34 }), ((org$pandalanguage$pandac$parser$Token) start3265.value).position, $tmp3294);
        $tmp3292 = $tmp3293;
        $tmp3291 = $tmp3292;
        $finallyReturn3289 = $tmp3291;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3291));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3292));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3294));
        $tmp3264 = 2;
        goto $l3262;
        $l3296:;
        return $finallyReturn3289;
    }
    $l3262:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3273));
    result3273 = NULL;
    switch ($tmp3264) {
        case 1: goto $l3286;
        case 2: goto $l3296;
        case 0: goto $l3271;
    }
    $l3298:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3302;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3303;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3305;
    org$pandalanguage$pandac$ASTNode* $tmp3307;
    org$pandalanguage$pandac$ASTNode* t3310 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3311;
    org$pandalanguage$pandac$ASTNode* $tmp3312;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3313;
    org$pandalanguage$pandac$ASTNode* $tmp3315;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3317;
    org$pandalanguage$pandac$ASTNode* $tmp3319;
    org$pandalanguage$pandac$ASTNode* $tmp3320;
    panda$core$String* $tmp3322;
    int $tmp3301;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3303, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3305 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3303, &$s3304);
        id3302 = $tmp3305;
        if (((panda$core$Bit) { !id3302.nonnull }).value) {
        {
            $tmp3307 = NULL;
            $finallyReturn3305 = $tmp3307;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3307));
            $tmp3301 = 0;
            goto $l3299;
            $l3308:;
            return $finallyReturn3305;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3313 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3312 = $tmp3313;
        $tmp3311 = $tmp3312;
        t3310 = $tmp3311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3312));
        if (((panda$core$Bit) { t3310 == NULL }).value) {
        {
            $tmp3315 = NULL;
            $finallyReturn3313 = $tmp3315;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3315));
            $tmp3301 = 1;
            goto $l3299;
            $l3316:;
            return $finallyReturn3313;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3321 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3323 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3302.value));
        $tmp3322 = $tmp3323;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3321, ((panda$core$Int64) { 28 }), ((org$pandalanguage$pandac$parser$Token) id3302.value).position, $tmp3322, t3310);
        $tmp3320 = $tmp3321;
        $tmp3319 = $tmp3320;
        $finallyReturn3317 = $tmp3319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3322));
        $tmp3301 = 2;
        goto $l3299;
        $l3324:;
        return $finallyReturn3317;
    }
    $l3299:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3310));
    t3310 = NULL;
    switch ($tmp3301) {
        case 2: goto $l3324;
        case 1: goto $l3316;
        case 0: goto $l3308;
    }
    $l3326:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3330;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3331;
    panda$collections$ImmutableArray* $finallyReturn3333;
    panda$collections$ImmutableArray* $tmp3335;
    panda$collections$Array* result3338 = NULL;
    panda$collections$Array* $tmp3339;
    panda$collections$Array* $tmp3340;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3342;
    org$pandalanguage$pandac$ASTNode* param3347 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3348;
    org$pandalanguage$pandac$ASTNode* $tmp3349;
    panda$collections$ImmutableArray* $finallyReturn3350;
    panda$collections$ImmutableArray* $tmp3352;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3359;
    org$pandalanguage$pandac$ASTNode* $tmp3361;
    org$pandalanguage$pandac$ASTNode* $tmp3362;
    org$pandalanguage$pandac$ASTNode* $tmp3363;
    panda$collections$ImmutableArray* $finallyReturn3364;
    panda$collections$ImmutableArray* $tmp3366;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3370;
    panda$collections$ImmutableArray* $finallyReturn3372;
    panda$collections$ImmutableArray* $tmp3374;
    panda$collections$ImmutableArray* $finallyReturn3378;
    panda$collections$ImmutableArray* $tmp3380;
    panda$collections$ImmutableArray* $tmp3381;
    int $tmp3329;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3331, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3333 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3331, &$s3332);
        start3330 = $tmp3333;
        if (((panda$core$Bit) { !start3330.nonnull }).value) {
        {
            $tmp3335 = NULL;
            $finallyReturn3333 = $tmp3335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
            $tmp3329 = 0;
            goto $l3327;
            $l3336:;
            return $finallyReturn3333;
        }
        }
        panda$collections$Array* $tmp3341 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3341);
        $tmp3340 = $tmp3341;
        $tmp3339 = $tmp3340;
        result3338 = $tmp3339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3340));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3342, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3343 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3342);
        if (((panda$core$Bit) { !$tmp3343.nonnull }).value) {
        {
            int $tmp3346;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3350 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3349 = $tmp3350;
                $tmp3348 = $tmp3349;
                param3347 = $tmp3348;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3349));
                if (((panda$core$Bit) { param3347 == NULL }).value) {
                {
                    $tmp3352 = NULL;
                    $finallyReturn3350 = $tmp3352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3352));
                    $tmp3346 = 0;
                    goto $l3344;
                    $l3353:;
                    $tmp3329 = 1;
                    goto $l3327;
                    $l3354:;
                    return $finallyReturn3350;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3338, ((panda$core$Object*) param3347));
                $l3356:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3359, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3360 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3359);
                bool $tmp3358 = ((panda$core$Bit) { $tmp3360.nonnull }).value;
                if (!$tmp3358) goto $l3357;
                {
                    {
                        $tmp3361 = param3347;
                        org$pandalanguage$pandac$ASTNode* $tmp3364 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3363 = $tmp3364;
                        $tmp3362 = $tmp3363;
                        param3347 = $tmp3362;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3362));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3363));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3361));
                    }
                    if (((panda$core$Bit) { param3347 == NULL }).value) {
                    {
                        $tmp3366 = NULL;
                        $finallyReturn3364 = $tmp3366;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
                        $tmp3346 = 1;
                        goto $l3344;
                        $l3367:;
                        $tmp3329 = 2;
                        goto $l3327;
                        $l3368:;
                        return $finallyReturn3364;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3338, ((panda$core$Object*) param3347));
                }
                goto $l3356;
                $l3357:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3370, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3372 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3370, &$s3371);
                if (((panda$core$Bit) { !$tmp3372.nonnull }).value) {
                {
                    $tmp3374 = NULL;
                    $finallyReturn3372 = $tmp3374;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3374));
                    $tmp3346 = 2;
                    goto $l3344;
                    $l3375:;
                    $tmp3329 = 3;
                    goto $l3327;
                    $l3376:;
                    return $finallyReturn3372;
                }
                }
            }
            $tmp3346 = -1;
            goto $l3344;
            $l3344:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3347));
            param3347 = NULL;
            switch ($tmp3346) {
                case 2: goto $l3375;
                case 1: goto $l3367;
                case -1: goto $l3378;
                case 0: goto $l3353;
            }
            $l3378:;
        }
        }
        panda$collections$ImmutableArray* $tmp3382 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3338);
        $tmp3381 = $tmp3382;
        $tmp3380 = $tmp3381;
        $finallyReturn3378 = $tmp3380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3381));
        $tmp3329 = 4;
        goto $l3327;
        $l3383:;
        return $finallyReturn3378;
    }
    $l3327:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3338));
    result3338 = NULL;
    switch ($tmp3329) {
        case 3: goto $l3376;
        case 4: goto $l3383;
        case 2: goto $l3368;
        case 1: goto $l3354;
        case 0: goto $l3336;
    }
    $l3385:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $finallyReturn3385;
    org$pandalanguage$pandac$ASTNode* $tmp3387;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    $tmp3387 = NULL;
    $finallyReturn3385 = $tmp3387;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3387));
    return $finallyReturn3385;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3392;
    org$pandalanguage$pandac$parser$Token$nullable start3393;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3394;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3396;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3398;
    org$pandalanguage$pandac$ASTNode* $tmp3400;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3403;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3404;
    panda$core$String* name3405 = NULL;
    panda$core$String* $tmp3406;
    panda$core$String* $tmp3407;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3408;
    org$pandalanguage$pandac$ASTNode* $tmp3410;
    panda$collections$ImmutableArray* params3413 = NULL;
    panda$collections$ImmutableArray* $tmp3414;
    panda$collections$ImmutableArray* $tmp3415;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3416;
    org$pandalanguage$pandac$ASTNode* $tmp3418;
    org$pandalanguage$pandac$ASTNode* returnType3421 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3424;
    org$pandalanguage$pandac$ASTNode* $tmp3425;
    org$pandalanguage$pandac$ASTNode* $tmp3426;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3427;
    org$pandalanguage$pandac$ASTNode* $tmp3429;
    org$pandalanguage$pandac$ASTNode* $tmp3432;
    org$pandalanguage$pandac$ASTNode* $tmp3433;
    panda$collections$ImmutableArray* body3434 = NULL;
    panda$collections$ImmutableArray* $tmp3437;
    panda$collections$ImmutableArray* $tmp3438;
    panda$collections$ImmutableArray* $tmp3439;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3440;
    org$pandalanguage$pandac$ASTNode* $tmp3442;
    panda$collections$ImmutableArray* $tmp3445;
    panda$collections$ImmutableArray* $tmp3446;
    org$pandalanguage$pandac$parser$Token token3447;
    panda$core$String* tokenText3449 = NULL;
    panda$core$String* $tmp3450;
    panda$core$String* $tmp3451;
    org$pandalanguage$pandac$ASTNode* post3467 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3468;
    org$pandalanguage$pandac$ASTNode* $tmp3469;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3470;
    org$pandalanguage$pandac$ASTNode* $tmp3472;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3476;
    org$pandalanguage$pandac$ASTNode* $tmp3478;
    org$pandalanguage$pandac$ASTNode* $tmp3479;
    int $tmp3391;
    {
        memset(&kind3392, 0, sizeof(kind3392));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3394, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3395 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3394);
        start3393 = $tmp3395;
        if (((panda$core$Bit) { !start3393.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3396, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3398 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3396, &$s3397);
            start3393 = $tmp3398;
            if (((panda$core$Bit) { !start3393.nonnull }).value) {
            {
                $tmp3400 = NULL;
                $finallyReturn3398 = $tmp3400;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3400));
                $tmp3391 = 0;
                goto $l3389;
                $l3401:;
                return $finallyReturn3398;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3403, ((panda$core$Int64) { 0 }));
            kind3392 = $tmp3403;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3404, ((panda$core$Int64) { 1 }));
            kind3392 = $tmp3404;
        }
        }
        panda$core$String* $tmp3408 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3407 = $tmp3408;
        $tmp3406 = $tmp3407;
        name3405 = $tmp3406;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3407));
        if (((panda$core$Bit) { name3405 == NULL }).value) {
        {
            $tmp3410 = NULL;
            $finallyReturn3408 = $tmp3410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3410));
            $tmp3391 = 1;
            goto $l3389;
            $l3411:;
            return $finallyReturn3408;
        }
        }
        panda$collections$ImmutableArray* $tmp3416 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3415 = $tmp3416;
        $tmp3414 = $tmp3415;
        params3413 = $tmp3414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3415));
        if (((panda$core$Bit) { params3413 == NULL }).value) {
        {
            $tmp3418 = NULL;
            $finallyReturn3416 = $tmp3418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3418));
            $tmp3391 = 2;
            goto $l3389;
            $l3419:;
            return $finallyReturn3416;
        }
        }
        memset(&returnType3421, 0, sizeof(returnType3421));
        org$pandalanguage$pandac$parser$Token $tmp3422 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3422.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3423.value) {
        {
            {
                $tmp3424 = returnType3421;
                org$pandalanguage$pandac$ASTNode* $tmp3427 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3426 = $tmp3427;
                $tmp3425 = $tmp3426;
                returnType3421 = $tmp3425;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3424));
            }
            if (((panda$core$Bit) { returnType3421 == NULL }).value) {
            {
                $tmp3429 = NULL;
                $finallyReturn3427 = $tmp3429;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3429));
                $tmp3391 = 3;
                goto $l3389;
                $l3430:;
                return $finallyReturn3427;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3432 = returnType3421;
                $tmp3433 = NULL;
                returnType3421 = $tmp3433;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3433));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3432));
            }
        }
        }
        memset(&body3434, 0, sizeof(body3434));
        org$pandalanguage$pandac$parser$Token $tmp3435 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3435.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3436.value) {
        {
            {
                $tmp3437 = body3434;
                panda$collections$ImmutableArray* $tmp3440 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3439 = $tmp3440;
                $tmp3438 = $tmp3439;
                body3434 = $tmp3438;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3437));
            }
            if (((panda$core$Bit) { body3434 == NULL }).value) {
            {
                $tmp3442 = NULL;
                $finallyReturn3440 = $tmp3442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3442));
                $tmp3391 = 4;
                goto $l3389;
                $l3443:;
                return $finallyReturn3440;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3445 = body3434;
                $tmp3446 = NULL;
                body3434 = $tmp3446;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3446));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3445));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3448 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3447 = $tmp3448;
        panda$core$String* $tmp3452 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3447);
        $tmp3451 = $tmp3452;
        $tmp3450 = $tmp3451;
        tokenText3449 = $tmp3450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3451));
        panda$core$Bit $tmp3454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3447.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3453 = $tmp3454.value;
        if (!$tmp3453) goto $l3455;
        panda$core$Bit $tmp3458 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3449, &$s3457);
        bool $tmp3456 = $tmp3458.value;
        if ($tmp3456) goto $l3459;
        panda$core$Bit $tmp3461 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3449, &$s3460);
        $tmp3456 = $tmp3461.value;
        $l3459:;
        panda$core$Bit $tmp3462 = { $tmp3456 };
        $tmp3453 = $tmp3462.value;
        $l3455:;
        panda$core$Bit $tmp3463 = { $tmp3453 };
        if ($tmp3463.value) {
        {
            int $tmp3466;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3470 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3469 = $tmp3470;
                $tmp3468 = $tmp3469;
                post3467 = $tmp3468;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3469));
                if (((panda$core$Bit) { post3467 == NULL }).value) {
                {
                    $tmp3472 = NULL;
                    $finallyReturn3470 = $tmp3472;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3472));
                    $tmp3466 = 0;
                    goto $l3464;
                    $l3473:;
                    $tmp3391 = 5;
                    goto $l3389;
                    $l3474:;
                    return $finallyReturn3470;
                }
                }
            }
            $tmp3466 = -1;
            goto $l3464;
            $l3464:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3467));
            post3467 = NULL;
            switch ($tmp3466) {
                case 0: goto $l3473;
                case -1: goto $l3476;
            }
            $l3476:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3480 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3480, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start3393.value).position, p_doccomment, p_annotations, kind3392, name3405, params3413, returnType3421, body3434);
        $tmp3479 = $tmp3480;
        $tmp3478 = $tmp3479;
        $finallyReturn3476 = $tmp3478;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3479));
        $tmp3391 = 6;
        goto $l3389;
        $l3481:;
        return $finallyReturn3476;
    }
    $l3389:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3405));
    name3405 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3413));
    params3413 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3421));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3449));
    tokenText3449 = NULL;
    switch ($tmp3391) {
        case 3: goto $l3430;
        case 6: goto $l3481;
        case 4: goto $l3443;
        case 2: goto $l3419;
        case 0: goto $l3401;
        case 5: goto $l3474;
        case 1: goto $l3411;
    }
    $l3483:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3487;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3488;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3490;
    org$pandalanguage$pandac$ASTNode* $tmp3492;
    panda$collections$ImmutableArray* params3495 = NULL;
    panda$collections$ImmutableArray* $tmp3496;
    panda$collections$ImmutableArray* $tmp3497;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3498;
    org$pandalanguage$pandac$ASTNode* $tmp3500;
    panda$collections$ImmutableArray* b3503 = NULL;
    panda$collections$ImmutableArray* $tmp3504;
    panda$collections$ImmutableArray* $tmp3505;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3506;
    org$pandalanguage$pandac$ASTNode* $tmp3508;
    org$pandalanguage$pandac$parser$Token token3511;
    panda$core$String* tokenText3513 = NULL;
    panda$core$String* $tmp3514;
    panda$core$String* $tmp3515;
    org$pandalanguage$pandac$ASTNode* post3531 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3532;
    org$pandalanguage$pandac$ASTNode* $tmp3533;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3534;
    org$pandalanguage$pandac$ASTNode* $tmp3536;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3540;
    org$pandalanguage$pandac$ASTNode* $tmp3542;
    org$pandalanguage$pandac$ASTNode* $tmp3543;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3545;
    int $tmp3486;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3488, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3490 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3488, &$s3489);
        start3487 = $tmp3490;
        if (((panda$core$Bit) { !start3487.nonnull }).value) {
        {
            $tmp3492 = NULL;
            $finallyReturn3490 = $tmp3492;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3492));
            $tmp3486 = 0;
            goto $l3484;
            $l3493:;
            return $finallyReturn3490;
        }
        }
        panda$collections$ImmutableArray* $tmp3498 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3497 = $tmp3498;
        $tmp3496 = $tmp3497;
        params3495 = $tmp3496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3497));
        if (((panda$core$Bit) { params3495 == NULL }).value) {
        {
            $tmp3500 = NULL;
            $finallyReturn3498 = $tmp3500;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3500));
            $tmp3486 = 1;
            goto $l3484;
            $l3501:;
            return $finallyReturn3498;
        }
        }
        panda$collections$ImmutableArray* $tmp3506 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3505 = $tmp3506;
        $tmp3504 = $tmp3505;
        b3503 = $tmp3504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3505));
        if (((panda$core$Bit) { b3503 == NULL }).value) {
        {
            $tmp3508 = NULL;
            $finallyReturn3506 = $tmp3508;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3508));
            $tmp3486 = 2;
            goto $l3484;
            $l3509:;
            return $finallyReturn3506;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3512 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3511 = $tmp3512;
        panda$core$String* $tmp3516 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3511);
        $tmp3515 = $tmp3516;
        $tmp3514 = $tmp3515;
        tokenText3513 = $tmp3514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3515));
        panda$core$Bit $tmp3518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3511.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3517 = $tmp3518.value;
        if (!$tmp3517) goto $l3519;
        panda$core$Bit $tmp3522 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3513, &$s3521);
        bool $tmp3520 = $tmp3522.value;
        if ($tmp3520) goto $l3523;
        panda$core$Bit $tmp3525 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3513, &$s3524);
        $tmp3520 = $tmp3525.value;
        $l3523:;
        panda$core$Bit $tmp3526 = { $tmp3520 };
        $tmp3517 = $tmp3526.value;
        $l3519:;
        panda$core$Bit $tmp3527 = { $tmp3517 };
        if ($tmp3527.value) {
        {
            int $tmp3530;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3534 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3533 = $tmp3534;
                $tmp3532 = $tmp3533;
                post3531 = $tmp3532;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3532));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3533));
                if (((panda$core$Bit) { post3531 == NULL }).value) {
                {
                    $tmp3536 = NULL;
                    $finallyReturn3534 = $tmp3536;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3536));
                    $tmp3530 = 0;
                    goto $l3528;
                    $l3537:;
                    $tmp3486 = 3;
                    goto $l3484;
                    $l3538:;
                    return $finallyReturn3534;
                }
                }
            }
            $tmp3530 = -1;
            goto $l3528;
            $l3528:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3531));
            post3531 = NULL;
            switch ($tmp3530) {
                case 0: goto $l3537;
                case -1: goto $l3540;
            }
            $l3540:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3544 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3545, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3544, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start3487.value).position, p_doccomment, p_annotations, $tmp3545, &$s3546, params3495, NULL, b3503);
        $tmp3543 = $tmp3544;
        $tmp3542 = $tmp3543;
        $finallyReturn3540 = $tmp3542;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3543));
        $tmp3486 = 4;
        goto $l3484;
        $l3547:;
        return $finallyReturn3540;
    }
    $l3484:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3495));
    params3495 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b3503));
    b3503 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3513));
    tokenText3513 = NULL;
    switch ($tmp3486) {
        case 4: goto $l3547;
        case 3: goto $l3538;
        case 1: goto $l3501;
        case 0: goto $l3493;
        case 2: goto $l3509;
    }
    $l3549:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl3553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3554;
    org$pandalanguage$pandac$ASTNode* $tmp3555;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3556;
    org$pandalanguage$pandac$ASTNode* $tmp3558;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3560;
    org$pandalanguage$pandac$ASTNode* $tmp3562;
    org$pandalanguage$pandac$ASTNode* $tmp3563;
    int $tmp3552;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3556 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3555 = $tmp3556;
        $tmp3554 = $tmp3555;
        decl3553 = $tmp3554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3555));
        if (((panda$core$Bit) { decl3553 == NULL }).value) {
        {
            $tmp3558 = NULL;
            $finallyReturn3556 = $tmp3558;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3558));
            $tmp3552 = 0;
            goto $l3550;
            $l3559:;
            return $finallyReturn3556;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3564 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3566 = (($fn3565) decl3553->$class->vtable[2])(decl3553);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3564, ((panda$core$Int64) { 14 }), $tmp3566, p_doccomment, p_annotations, decl3553);
        $tmp3563 = $tmp3564;
        $tmp3562 = $tmp3563;
        $finallyReturn3560 = $tmp3562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3562));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3563));
        $tmp3552 = 1;
        goto $l3550;
        $l3567:;
        return $finallyReturn3560;
    }
    $l3550:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3553));
    decl3553 = NULL;
    switch ($tmp3552) {
        case 1: goto $l3567;
        case 0: goto $l3559;
    }
    $l3569:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name3573;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3574;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3576;
    org$pandalanguage$pandac$ASTNode* $tmp3578;
    panda$collections$Array* fields3581 = NULL;
    panda$collections$Array* $tmp3582;
    panda$collections$Array* $tmp3583;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3585;
    org$pandalanguage$pandac$ASTNode* field3592 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3593;
    org$pandalanguage$pandac$ASTNode* $tmp3594;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3595;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3604;
    org$pandalanguage$pandac$ASTNode* $tmp3606;
    org$pandalanguage$pandac$ASTNode* $tmp3607;
    org$pandalanguage$pandac$ASTNode* $tmp3608;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3609;
    org$pandalanguage$pandac$ASTNode* $tmp3611;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3616;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3618;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3622;
    org$pandalanguage$pandac$ASTNode* $tmp3624;
    org$pandalanguage$pandac$ASTNode* $tmp3625;
    panda$core$String* $tmp3627;
    panda$collections$ImmutableArray* $tmp3629;
    int $tmp3572;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3574, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3576 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3574, &$s3575);
        name3573 = $tmp3576;
        if (((panda$core$Bit) { !name3573.nonnull }).value) {
        {
            $tmp3578 = NULL;
            $finallyReturn3576 = $tmp3578;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3578));
            $tmp3572 = 0;
            goto $l3570;
            $l3579:;
            return $finallyReturn3576;
        }
        }
        panda$collections$Array* $tmp3584 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3584);
        $tmp3583 = $tmp3584;
        $tmp3582 = $tmp3583;
        fields3581 = $tmp3582;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3583));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3585, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3586 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3585);
        if (((panda$core$Bit) { $tmp3586.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3587 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp3588 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3587.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp3588.value) {
            {
                int $tmp3591;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3595 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3594 = $tmp3595;
                    $tmp3593 = $tmp3594;
                    field3592 = $tmp3593;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3593));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3594));
                    if (((panda$core$Bit) { field3592 == NULL }).value) {
                    {
                        $tmp3597 = NULL;
                        $finallyReturn3595 = $tmp3597;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
                        $tmp3591 = 0;
                        goto $l3589;
                        $l3598:;
                        $tmp3572 = 1;
                        goto $l3570;
                        $l3599:;
                        return $finallyReturn3595;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields3581, ((panda$core$Object*) field3592));
                    $l3601:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3604, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3605 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3604);
                    bool $tmp3603 = ((panda$core$Bit) { $tmp3605.nonnull }).value;
                    if (!$tmp3603) goto $l3602;
                    {
                        {
                            $tmp3606 = field3592;
                            org$pandalanguage$pandac$ASTNode* $tmp3609 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3608 = $tmp3609;
                            $tmp3607 = $tmp3608;
                            field3592 = $tmp3607;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3607));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3608));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3606));
                        }
                        if (((panda$core$Bit) { field3592 == NULL }).value) {
                        {
                            $tmp3611 = NULL;
                            $finallyReturn3609 = $tmp3611;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3611));
                            $tmp3591 = 1;
                            goto $l3589;
                            $l3612:;
                            $tmp3572 = 2;
                            goto $l3570;
                            $l3613:;
                            return $finallyReturn3609;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields3581, ((panda$core$Object*) field3592));
                    }
                    goto $l3601;
                    $l3602:;
                }
                $tmp3591 = -1;
                goto $l3589;
                $l3589:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field3592));
                field3592 = NULL;
                switch ($tmp3591) {
                    case 0: goto $l3598;
                    case 1: goto $l3612;
                    case -1: goto $l3615;
                }
                $l3615:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3616, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3618 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3616, &$s3617);
            if (((panda$core$Bit) { !$tmp3618.nonnull }).value) {
            {
                $tmp3620 = NULL;
                $finallyReturn3618 = $tmp3620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3620));
                $tmp3572 = 3;
                goto $l3570;
                $l3621:;
                return $finallyReturn3618;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3626 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3628 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3573.value));
        $tmp3627 = $tmp3628;
        panda$collections$ImmutableArray* $tmp3630 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields3581);
        $tmp3629 = $tmp3630;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3626, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name3573.value).position, p_doccomment, $tmp3627, $tmp3629);
        $tmp3625 = $tmp3626;
        $tmp3624 = $tmp3625;
        $finallyReturn3622 = $tmp3624;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
        $tmp3572 = 4;
        goto $l3570;
        $l3631:;
        return $finallyReturn3622;
    }
    $l3570:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields3581));
    fields3581 = NULL;
    switch ($tmp3572) {
        case 1: goto $l3599;
        case 3: goto $l3621;
        case 2: goto $l3613;
        case 0: goto $l3579;
        case 4: goto $l3631;
    }
    $l3633:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3637;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3638;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3640;
    org$pandalanguage$pandac$ASTNode* $tmp3642;
    org$pandalanguage$pandac$parser$Token$nullable name3645;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3646;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3648;
    org$pandalanguage$pandac$ASTNode* $tmp3650;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3653;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3655;
    org$pandalanguage$pandac$ASTNode* $tmp3657;
    panda$collections$Array* members3660 = NULL;
    panda$collections$Array* $tmp3661;
    panda$collections$Array* $tmp3662;
    org$pandalanguage$pandac$ASTNode* dc3664 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3665;
    org$pandalanguage$pandac$parser$Token next3668;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_133670;
    panda$core$String* $tmp3709;
    panda$core$String* $tmp3710;
    panda$core$String* $tmp3712;
    org$pandalanguage$pandac$ASTNode* $tmp3717;
    org$pandalanguage$pandac$ASTNode* $tmp3718;
    org$pandalanguage$pandac$ASTNode* $tmp3719;
    org$pandalanguage$pandac$ASTNode* c3725 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3726;
    org$pandalanguage$pandac$ASTNode* $tmp3727;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3728;
    org$pandalanguage$pandac$ASTNode* $tmp3730;
    org$pandalanguage$pandac$ASTNode* $tmp3734;
    org$pandalanguage$pandac$ASTNode* $tmp3735;
    panda$collections$ImmutableArray* a3737 = NULL;
    panda$collections$ImmutableArray* $tmp3738;
    panda$collections$ImmutableArray* $tmp3739;
    org$pandalanguage$pandac$parser$Token next3743;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_133745;
    panda$core$String* $tmp3749;
    panda$core$String* $tmp3750;
    panda$core$String* $tmp3752;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3756;
    org$pandalanguage$pandac$ASTNode* $tmp3758;
    panda$collections$ImmutableArray* $tmp3761;
    panda$collections$ImmutableArray* $tmp3762;
    panda$collections$ImmutableArray* $tmp3763;
    panda$core$String* $tmp3771;
    panda$core$String* $tmp3772;
    panda$core$String* $tmp3774;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3778;
    org$pandalanguage$pandac$ASTNode* $tmp3780;
    org$pandalanguage$pandac$ASTNode* $tmp3783;
    org$pandalanguage$pandac$ASTNode* $tmp3784;
    org$pandalanguage$pandac$ASTNode* $tmp3785;
    org$pandalanguage$pandac$ASTNode* decl3791 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3792;
    org$pandalanguage$pandac$ASTNode* $tmp3793;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3794;
    org$pandalanguage$pandac$ASTNode* $tmp3796;
    org$pandalanguage$pandac$ASTNode* $tmp3800;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    panda$collections$ImmutableArray* $tmp3802;
    panda$collections$ImmutableArray* $tmp3803;
    panda$collections$ImmutableArray* $tmp3804;
    org$pandalanguage$pandac$ASTNode* decl3811 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3812;
    org$pandalanguage$pandac$ASTNode* $tmp3813;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3814;
    org$pandalanguage$pandac$ASTNode* $tmp3816;
    org$pandalanguage$pandac$ASTNode* $tmp3820;
    org$pandalanguage$pandac$ASTNode* $tmp3821;
    panda$collections$ImmutableArray* $tmp3822;
    panda$collections$ImmutableArray* $tmp3823;
    panda$collections$ImmutableArray* $tmp3824;
    org$pandalanguage$pandac$ASTNode* decl3831 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3832;
    org$pandalanguage$pandac$ASTNode* $tmp3833;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3834;
    org$pandalanguage$pandac$ASTNode* $tmp3836;
    org$pandalanguage$pandac$ASTNode* $tmp3840;
    org$pandalanguage$pandac$ASTNode* $tmp3841;
    panda$collections$ImmutableArray* $tmp3842;
    panda$collections$ImmutableArray* $tmp3843;
    panda$collections$ImmutableArray* $tmp3844;
    org$pandalanguage$pandac$ASTNode* decl3855 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3856;
    org$pandalanguage$pandac$ASTNode* $tmp3857;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3858;
    org$pandalanguage$pandac$ASTNode* $tmp3860;
    org$pandalanguage$pandac$ASTNode* $tmp3864;
    org$pandalanguage$pandac$ASTNode* $tmp3865;
    panda$collections$ImmutableArray* $tmp3866;
    panda$collections$ImmutableArray* $tmp3867;
    panda$collections$ImmutableArray* $tmp3868;
    org$pandalanguage$pandac$ASTNode* decl3887 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3888;
    org$pandalanguage$pandac$ASTNode* $tmp3889;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3890;
    org$pandalanguage$pandac$ASTNode* $tmp3892;
    org$pandalanguage$pandac$ASTNode* $tmp3896;
    org$pandalanguage$pandac$ASTNode* $tmp3897;
    panda$collections$ImmutableArray* $tmp3898;
    panda$collections$ImmutableArray* $tmp3899;
    panda$collections$ImmutableArray* $tmp3900;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3904;
    panda$core$String* $tmp3906;
    panda$core$String* $tmp3907;
    panda$core$String* $tmp3909;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3913;
    org$pandalanguage$pandac$ASTNode* $tmp3915;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3917;
    org$pandalanguage$pandac$ASTNode* $tmp3919;
    org$pandalanguage$pandac$ASTNode* $tmp3920;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3922;
    panda$core$String* $tmp3923;
    panda$collections$ImmutableArray* $tmp3925;
    int $tmp3636;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3638, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3640 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3638, &$s3639);
        start3637 = $tmp3640;
        if (((panda$core$Bit) { !start3637.nonnull }).value) {
        {
            $tmp3642 = NULL;
            $finallyReturn3640 = $tmp3642;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3642));
            $tmp3636 = 0;
            goto $l3634;
            $l3643:;
            return $finallyReturn3640;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3646, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3648 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3646, &$s3647);
        name3645 = $tmp3648;
        if (((panda$core$Bit) { !name3645.nonnull }).value) {
        {
            $tmp3650 = NULL;
            $finallyReturn3648 = $tmp3650;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3650));
            $tmp3636 = 1;
            goto $l3634;
            $l3651:;
            return $finallyReturn3648;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3653, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3655 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3653, &$s3654);
        if (((panda$core$Bit) { !$tmp3655.nonnull }).value) {
        {
            $tmp3657 = NULL;
            $finallyReturn3655 = $tmp3657;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3657));
            $tmp3636 = 2;
            goto $l3634;
            $l3658:;
            return $finallyReturn3655;
        }
        }
        panda$collections$Array* $tmp3663 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3663);
        $tmp3662 = $tmp3663;
        $tmp3661 = $tmp3662;
        members3660 = $tmp3661;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3661));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3662));
        $tmp3665 = NULL;
        dc3664 = $tmp3665;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3665));
        $l3666:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3669 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3668 = $tmp3669;
            {
                $match$1854_133670 = next3668.kind;
                panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp3679 = $tmp3680.value;
                if ($tmp3679) goto $l3681;
                panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp3679 = $tmp3682.value;
                $l3681:;
                panda$core$Bit $tmp3683 = { $tmp3679 };
                bool $tmp3678 = $tmp3683.value;
                if ($tmp3678) goto $l3684;
                panda$core$Bit $tmp3685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp3678 = $tmp3685.value;
                $l3684:;
                panda$core$Bit $tmp3686 = { $tmp3678 };
                bool $tmp3677 = $tmp3686.value;
                if ($tmp3677) goto $l3687;
                panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp3677 = $tmp3688.value;
                $l3687:;
                panda$core$Bit $tmp3689 = { $tmp3677 };
                bool $tmp3676 = $tmp3689.value;
                if ($tmp3676) goto $l3690;
                panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3676 = $tmp3691.value;
                $l3690:;
                panda$core$Bit $tmp3692 = { $tmp3676 };
                bool $tmp3675 = $tmp3692.value;
                if ($tmp3675) goto $l3693;
                panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp3675 = $tmp3694.value;
                $l3693:;
                panda$core$Bit $tmp3695 = { $tmp3675 };
                bool $tmp3674 = $tmp3695.value;
                if ($tmp3674) goto $l3696;
                panda$core$Bit $tmp3697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp3674 = $tmp3697.value;
                $l3696:;
                panda$core$Bit $tmp3698 = { $tmp3674 };
                bool $tmp3673 = $tmp3698.value;
                if ($tmp3673) goto $l3699;
                panda$core$Bit $tmp3700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3673 = $tmp3700.value;
                $l3699:;
                panda$core$Bit $tmp3701 = { $tmp3673 };
                bool $tmp3672 = $tmp3701.value;
                if ($tmp3672) goto $l3702;
                panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3672 = $tmp3703.value;
                $l3702:;
                panda$core$Bit $tmp3704 = { $tmp3672 };
                bool $tmp3671 = $tmp3704.value;
                if ($tmp3671) goto $l3705;
                panda$core$Bit $tmp3706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3671 = $tmp3706.value;
                $l3705:;
                panda$core$Bit $tmp3707 = { $tmp3671 };
                if ($tmp3707.value) {
                {
                    goto $l3667;
                }
                }
                else {
                panda$core$Bit $tmp3708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3708.value) {
                {
                    if (((panda$core$Bit) { dc3664 != NULL }).value) {
                    {
                        panda$core$String* $tmp3713 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3668);
                        $tmp3712 = $tmp3713;
                        panda$core$String* $tmp3714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3711, $tmp3712);
                        $tmp3710 = $tmp3714;
                        panda$core$String* $tmp3716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3710, &$s3715);
                        $tmp3709 = $tmp3716;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3668, $tmp3709);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3709));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3710));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3712));
                    }
                    }
                    {
                        $tmp3717 = dc3664;
                        org$pandalanguage$pandac$ASTNode* $tmp3720 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3719 = $tmp3720;
                        $tmp3718 = $tmp3719;
                        dc3664 = $tmp3718;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3718));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3719));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3717));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_133670.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp3721.value) {
                {
                    int $tmp3724;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3728 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3664);
                        $tmp3727 = $tmp3728;
                        $tmp3726 = $tmp3727;
                        c3725 = $tmp3726;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3726));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3727));
                        if (((panda$core$Bit) { c3725 == NULL }).value) {
                        {
                            $tmp3730 = NULL;
                            $finallyReturn3728 = $tmp3730;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3730));
                            $tmp3724 = 0;
                            goto $l3722;
                            $l3731:;
                            $tmp3636 = 3;
                            goto $l3634;
                            $l3732:;
                            return $finallyReturn3728;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3660, ((panda$core$Object*) c3725));
                        {
                            $tmp3734 = dc3664;
                            $tmp3735 = NULL;
                            dc3664 = $tmp3735;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3735));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3734));
                        }
                    }
                    $tmp3724 = -1;
                    goto $l3722;
                    $l3722:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3725));
                    c3725 = NULL;
                    switch ($tmp3724) {
                        case -1: goto $l3736;
                        case 0: goto $l3731;
                    }
                    $l3736:;
                }
                }
                else {
                {
                    goto $l3667;
                }
                }
                }
                }
            }
        }
        }
        $l3667:;
        panda$collections$ImmutableArray* $tmp3740 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3740);
        $tmp3739 = $tmp3740;
        $tmp3738 = $tmp3739;
        a3737 = $tmp3738;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3738));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3739));
        $l3741:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3744 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3743 = $tmp3744;
            {
                $match$1878_133745 = next3743.kind;
                panda$core$Bit $tmp3746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp3746.value) {
                {
                    panda$core$Int64 $tmp3747 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3737);
                    panda$core$Bit $tmp3748 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3747, ((panda$core$Int64) { 0 }));
                    if ($tmp3748.value) {
                    {
                        panda$core$String* $tmp3753 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3743);
                        $tmp3752 = $tmp3753;
                        panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3751, $tmp3752);
                        $tmp3750 = $tmp3754;
                        panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3750, &$s3755);
                        $tmp3749 = $tmp3756;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3743, $tmp3749);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3749));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3750));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3752));
                        $tmp3758 = NULL;
                        $finallyReturn3756 = $tmp3758;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3758));
                        $tmp3636 = 4;
                        goto $l3634;
                        $l3759:;
                        return $finallyReturn3756;
                    }
                    }
                    {
                        $tmp3761 = a3737;
                        panda$collections$ImmutableArray* $tmp3764 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp3763 = $tmp3764;
                        $tmp3762 = $tmp3763;
                        a3737 = $tmp3762;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3762));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3763));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3761));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3765.value) {
                {
                    bool $tmp3766 = ((panda$core$Bit) { dc3664 != NULL }).value;
                    if ($tmp3766) goto $l3767;
                    panda$core$Int64 $tmp3768 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3737);
                    panda$core$Bit $tmp3769 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3768, ((panda$core$Int64) { 0 }));
                    $tmp3766 = $tmp3769.value;
                    $l3767:;
                    panda$core$Bit $tmp3770 = { $tmp3766 };
                    if ($tmp3770.value) {
                    {
                        panda$core$String* $tmp3775 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3743);
                        $tmp3774 = $tmp3775;
                        panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3773, $tmp3774);
                        $tmp3772 = $tmp3776;
                        panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3777);
                        $tmp3771 = $tmp3778;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3743, $tmp3771);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3771));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3772));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3774));
                        $tmp3780 = NULL;
                        $finallyReturn3778 = $tmp3780;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3780));
                        $tmp3636 = 5;
                        goto $l3634;
                        $l3781:;
                        return $finallyReturn3778;
                    }
                    }
                    {
                        $tmp3783 = dc3664;
                        org$pandalanguage$pandac$ASTNode* $tmp3786 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3785 = $tmp3786;
                        $tmp3784 = $tmp3785;
                        dc3664 = $tmp3784;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3784));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3785));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3783));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp3787.value) {
                {
                    int $tmp3790;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3794 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3664, a3737);
                        $tmp3793 = $tmp3794;
                        $tmp3792 = $tmp3793;
                        decl3791 = $tmp3792;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3792));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3793));
                        if (((panda$core$Bit) { decl3791 == NULL }).value) {
                        {
                            $tmp3796 = NULL;
                            $finallyReturn3794 = $tmp3796;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3796));
                            $tmp3790 = 0;
                            goto $l3788;
                            $l3797:;
                            $tmp3636 = 6;
                            goto $l3634;
                            $l3798:;
                            return $finallyReturn3794;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3660, ((panda$core$Object*) decl3791));
                        {
                            $tmp3800 = dc3664;
                            $tmp3801 = NULL;
                            dc3664 = $tmp3801;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3801));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3800));
                        }
                        {
                            $tmp3802 = a3737;
                            panda$collections$ImmutableArray* $tmp3805 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3805);
                            $tmp3804 = $tmp3805;
                            $tmp3803 = $tmp3804;
                            a3737 = $tmp3803;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3803));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3804));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3802));
                        }
                    }
                    $tmp3790 = -1;
                    goto $l3788;
                    $l3788:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3791));
                    decl3791 = NULL;
                    switch ($tmp3790) {
                        case -1: goto $l3806;
                        case 0: goto $l3797;
                    }
                    $l3806:;
                }
                }
                else {
                panda$core$Bit $tmp3807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp3807.value) {
                {
                    int $tmp3810;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3814 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3664, a3737);
                        $tmp3813 = $tmp3814;
                        $tmp3812 = $tmp3813;
                        decl3811 = $tmp3812;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3812));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3813));
                        if (((panda$core$Bit) { decl3811 == NULL }).value) {
                        {
                            $tmp3816 = NULL;
                            $finallyReturn3814 = $tmp3816;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3816));
                            $tmp3810 = 0;
                            goto $l3808;
                            $l3817:;
                            $tmp3636 = 7;
                            goto $l3634;
                            $l3818:;
                            return $finallyReturn3814;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3660, ((panda$core$Object*) decl3811));
                        {
                            $tmp3820 = dc3664;
                            $tmp3821 = NULL;
                            dc3664 = $tmp3821;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3821));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3820));
                        }
                        {
                            $tmp3822 = a3737;
                            panda$collections$ImmutableArray* $tmp3825 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3825);
                            $tmp3824 = $tmp3825;
                            $tmp3823 = $tmp3824;
                            a3737 = $tmp3823;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3823));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3822));
                        }
                    }
                    $tmp3810 = -1;
                    goto $l3808;
                    $l3808:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3811));
                    decl3811 = NULL;
                    switch ($tmp3810) {
                        case 0: goto $l3817;
                        case -1: goto $l3826;
                    }
                    $l3826:;
                }
                }
                else {
                panda$core$Bit $tmp3827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp3827.value) {
                {
                    int $tmp3830;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3834 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3664, a3737);
                        $tmp3833 = $tmp3834;
                        $tmp3832 = $tmp3833;
                        decl3831 = $tmp3832;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3832));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3833));
                        if (((panda$core$Bit) { decl3831 == NULL }).value) {
                        {
                            $tmp3836 = NULL;
                            $finallyReturn3834 = $tmp3836;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3836));
                            $tmp3830 = 0;
                            goto $l3828;
                            $l3837:;
                            $tmp3636 = 8;
                            goto $l3634;
                            $l3838:;
                            return $finallyReturn3834;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3660, ((panda$core$Object*) decl3831));
                        {
                            $tmp3840 = dc3664;
                            $tmp3841 = NULL;
                            dc3664 = $tmp3841;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3841));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3840));
                        }
                        {
                            $tmp3842 = a3737;
                            panda$collections$ImmutableArray* $tmp3845 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3845);
                            $tmp3844 = $tmp3845;
                            $tmp3843 = $tmp3844;
                            a3737 = $tmp3843;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3843));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3844));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3842));
                        }
                    }
                    $tmp3830 = -1;
                    goto $l3828;
                    $l3828:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3831));
                    decl3831 = NULL;
                    switch ($tmp3830) {
                        case 0: goto $l3837;
                        case -1: goto $l3846;
                    }
                    $l3846:;
                }
                }
                else {
                panda$core$Bit $tmp3848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp3847 = $tmp3848.value;
                if ($tmp3847) goto $l3849;
                panda$core$Bit $tmp3850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3847 = $tmp3850.value;
                $l3849:;
                panda$core$Bit $tmp3851 = { $tmp3847 };
                if ($tmp3851.value) {
                {
                    int $tmp3854;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3858 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3664, a3737);
                        $tmp3857 = $tmp3858;
                        $tmp3856 = $tmp3857;
                        decl3855 = $tmp3856;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3856));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3857));
                        if (((panda$core$Bit) { decl3855 == NULL }).value) {
                        {
                            $tmp3860 = NULL;
                            $finallyReturn3858 = $tmp3860;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3860));
                            $tmp3854 = 0;
                            goto $l3852;
                            $l3861:;
                            $tmp3636 = 9;
                            goto $l3634;
                            $l3862:;
                            return $finallyReturn3858;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3660, ((panda$core$Object*) decl3855));
                        {
                            $tmp3864 = dc3664;
                            $tmp3865 = NULL;
                            dc3664 = $tmp3865;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3865));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3864));
                        }
                        {
                            $tmp3866 = a3737;
                            panda$collections$ImmutableArray* $tmp3869 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3869);
                            $tmp3868 = $tmp3869;
                            $tmp3867 = $tmp3868;
                            a3737 = $tmp3867;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3867));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3868));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3866));
                        }
                    }
                    $tmp3854 = -1;
                    goto $l3852;
                    $l3852:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3855));
                    decl3855 = NULL;
                    switch ($tmp3854) {
                        case 0: goto $l3861;
                        case -1: goto $l3870;
                    }
                    $l3870:;
                }
                }
                else {
                panda$core$Bit $tmp3874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp3873 = $tmp3874.value;
                if ($tmp3873) goto $l3875;
                panda$core$Bit $tmp3876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3873 = $tmp3876.value;
                $l3875:;
                panda$core$Bit $tmp3877 = { $tmp3873 };
                bool $tmp3872 = $tmp3877.value;
                if ($tmp3872) goto $l3878;
                panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3872 = $tmp3879.value;
                $l3878:;
                panda$core$Bit $tmp3880 = { $tmp3872 };
                bool $tmp3871 = $tmp3880.value;
                if ($tmp3871) goto $l3881;
                panda$core$Bit $tmp3882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3871 = $tmp3882.value;
                $l3881:;
                panda$core$Bit $tmp3883 = { $tmp3871 };
                if ($tmp3883.value) {
                {
                    int $tmp3886;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3890 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3664, a3737);
                        $tmp3889 = $tmp3890;
                        $tmp3888 = $tmp3889;
                        decl3887 = $tmp3888;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3888));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3889));
                        if (((panda$core$Bit) { decl3887 == NULL }).value) {
                        {
                            $tmp3892 = NULL;
                            $finallyReturn3890 = $tmp3892;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3892));
                            $tmp3886 = 0;
                            goto $l3884;
                            $l3893:;
                            $tmp3636 = 10;
                            goto $l3634;
                            $l3894:;
                            return $finallyReturn3890;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3660, ((panda$core$Object*) decl3887));
                        {
                            $tmp3896 = dc3664;
                            $tmp3897 = NULL;
                            dc3664 = $tmp3897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3897));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
                        }
                        {
                            $tmp3898 = a3737;
                            panda$collections$ImmutableArray* $tmp3901 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3901);
                            $tmp3900 = $tmp3901;
                            $tmp3899 = $tmp3900;
                            a3737 = $tmp3899;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3899));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3900));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3898));
                        }
                    }
                    $tmp3886 = -1;
                    goto $l3884;
                    $l3884:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3887));
                    decl3887 = NULL;
                    switch ($tmp3886) {
                        case 0: goto $l3893;
                        case -1: goto $l3902;
                    }
                    $l3902:;
                }
                }
                else {
                panda$core$Bit $tmp3903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_133745.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp3903.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3904, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3904, &$s3905);
                    goto $l3742;
                }
                }
                else {
                {
                    panda$core$String* $tmp3910 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3743);
                    $tmp3909 = $tmp3910;
                    panda$core$String* $tmp3911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3908, $tmp3909);
                    $tmp3907 = $tmp3911;
                    panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, &$s3912);
                    $tmp3906 = $tmp3913;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3743, $tmp3906);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3906));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3907));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3909));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp3915 = NULL;
                    $finallyReturn3913 = $tmp3915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3915));
                    $tmp3636 = 11;
                    goto $l3634;
                    $l3916:;
                    return $finallyReturn3913;
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
        $l3742:;
        org$pandalanguage$pandac$ASTNode* $tmp3921 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3922, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp3924 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3645.value));
        $tmp3923 = $tmp3924;
        panda$collections$ImmutableArray* $tmp3926 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3660);
        $tmp3925 = $tmp3926;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3921, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start3637.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp3922, $tmp3923, NULL, NULL, $tmp3925);
        $tmp3920 = $tmp3921;
        $tmp3919 = $tmp3920;
        $finallyReturn3917 = $tmp3919;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3919));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3920));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3925));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3923));
        $tmp3636 = 12;
        goto $l3634;
        $l3927:;
        return $finallyReturn3917;
    }
    $l3634:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3660));
    members3660 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3664));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3737));
    a3737 = NULL;
    switch ($tmp3636) {
        case 11: goto $l3916;
        case 3: goto $l3732;
        case 1: goto $l3651;
        case 2: goto $l3658;
        case 9: goto $l3862;
        case 6: goto $l3798;
        case 12: goto $l3927;
        case 4: goto $l3759;
        case 5: goto $l3781;
        case 8: goto $l3838;
        case 0: goto $l3643;
        case 7: goto $l3818;
        case 10: goto $l3894;
    }
    $l3929:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3933;
    org$pandalanguage$pandac$ASTNode* dc3935 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3937;
    org$pandalanguage$pandac$ASTNode* $tmp3938;
    org$pandalanguage$pandac$ASTNode* $tmp3939;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3940;
    org$pandalanguage$pandac$ASTNode* $tmp3942;
    org$pandalanguage$pandac$ASTNode* $tmp3945;
    org$pandalanguage$pandac$ASTNode* $tmp3946;
    panda$collections$ImmutableArray* a3947 = NULL;
    panda$collections$ImmutableArray* $tmp3948;
    panda$collections$ImmutableArray* $tmp3949;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3950;
    org$pandalanguage$pandac$ASTNode* $tmp3952;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_93955;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3957;
    org$pandalanguage$pandac$ASTNode* $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3960;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3964;
    org$pandalanguage$pandac$ASTNode* $tmp3966;
    org$pandalanguage$pandac$ASTNode* $tmp3967;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3971;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    org$pandalanguage$pandac$ASTNode* $tmp3974;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3982;
    org$pandalanguage$pandac$ASTNode* $tmp3984;
    org$pandalanguage$pandac$ASTNode* $tmp3985;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3989;
    org$pandalanguage$pandac$ASTNode* $tmp3991;
    org$pandalanguage$pandac$ASTNode* $tmp3992;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4008;
    org$pandalanguage$pandac$ASTNode* $tmp4010;
    org$pandalanguage$pandac$ASTNode* $tmp4011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4015;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4016;
    org$pandalanguage$pandac$ASTNode* $tmp4018;
    int $tmp3932;
    {
        org$pandalanguage$pandac$parser$Token $tmp3934 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start3933 = $tmp3934;
        memset(&dc3935, 0, sizeof(dc3935));
        panda$core$Bit $tmp3936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start3933.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3936.value) {
        {
            {
                $tmp3937 = dc3935;
                org$pandalanguage$pandac$ASTNode* $tmp3940 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3939 = $tmp3940;
                $tmp3938 = $tmp3939;
                dc3935 = $tmp3938;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3939));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3937));
            }
            if (((panda$core$Bit) { dc3935 == NULL }).value) {
            {
                $tmp3942 = NULL;
                $finallyReturn3940 = $tmp3942;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3942));
                $tmp3932 = 0;
                goto $l3930;
                $l3943:;
                return $finallyReturn3940;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3945 = dc3935;
                $tmp3946 = NULL;
                dc3935 = $tmp3946;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3945));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3950 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp3949 = $tmp3950;
        $tmp3948 = $tmp3949;
        a3947 = $tmp3948;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3948));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3949));
        if (((panda$core$Bit) { a3947 == NULL }).value) {
        {
            $tmp3952 = NULL;
            $finallyReturn3950 = $tmp3952;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3952));
            $tmp3932 = 1;
            goto $l3930;
            $l3953:;
            return $finallyReturn3950;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3956 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1964_93955 = $tmp3956.kind;
            panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3957.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3961 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3935, a3947);
                $tmp3960 = $tmp3961;
                $tmp3959 = $tmp3960;
                $finallyReturn3957 = $tmp3959;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3960));
                $tmp3932 = 2;
                goto $l3930;
                $l3962:;
                return $finallyReturn3957;
            }
            }
            else {
            panda$core$Bit $tmp3964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3964.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3968 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3935, a3947);
                $tmp3967 = $tmp3968;
                $tmp3966 = $tmp3967;
                $finallyReturn3964 = $tmp3966;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3967));
                $tmp3932 = 3;
                goto $l3930;
                $l3969:;
                return $finallyReturn3964;
            }
            }
            else {
            panda$core$Bit $tmp3971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3971.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3975 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3935, a3947);
                $tmp3974 = $tmp3975;
                $tmp3973 = $tmp3974;
                $finallyReturn3971 = $tmp3973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3974));
                $tmp3932 = 4;
                goto $l3930;
                $l3976:;
                return $finallyReturn3971;
            }
            }
            else {
            panda$core$Bit $tmp3979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp3978 = $tmp3979.value;
            if ($tmp3978) goto $l3980;
            panda$core$Bit $tmp3981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3978 = $tmp3981.value;
            $l3980:;
            panda$core$Bit $tmp3982 = { $tmp3978 };
            if ($tmp3982.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3986 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3935, a3947);
                $tmp3985 = $tmp3986;
                $tmp3984 = $tmp3985;
                $finallyReturn3982 = $tmp3984;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3985));
                $tmp3932 = 5;
                goto $l3930;
                $l3987:;
                return $finallyReturn3982;
            }
            }
            else {
            panda$core$Bit $tmp3989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp3989.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3993 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3935, a3947);
                $tmp3992 = $tmp3993;
                $tmp3991 = $tmp3992;
                $finallyReturn3989 = $tmp3991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3992));
                $tmp3932 = 6;
                goto $l3930;
                $l3994:;
                return $finallyReturn3989;
            }
            }
            else {
            panda$core$Bit $tmp3999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp3998 = $tmp3999.value;
            if ($tmp3998) goto $l4000;
            panda$core$Bit $tmp4001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp3998 = $tmp4001.value;
            $l4000:;
            panda$core$Bit $tmp4002 = { $tmp3998 };
            bool $tmp3997 = $tmp4002.value;
            if ($tmp3997) goto $l4003;
            panda$core$Bit $tmp4004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp3997 = $tmp4004.value;
            $l4003:;
            panda$core$Bit $tmp4005 = { $tmp3997 };
            bool $tmp3996 = $tmp4005.value;
            if ($tmp3996) goto $l4006;
            panda$core$Bit $tmp4007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_93955.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp3996 = $tmp4007.value;
            $l4006:;
            panda$core$Bit $tmp4008 = { $tmp3996 };
            if ($tmp4008.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4012 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3935, a3947);
                $tmp4011 = $tmp4012;
                $tmp4010 = $tmp4011;
                $finallyReturn4008 = $tmp4010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4011));
                $tmp3932 = 7;
                goto $l3930;
                $l4013:;
                return $finallyReturn4008;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4015, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4015, &$s4016);
                $tmp4018 = NULL;
                $finallyReturn4016 = $tmp4018;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4018));
                $tmp3932 = 8;
                goto $l3930;
                $l4019:;
                return $finallyReturn4016;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp3932 = -1;
    goto $l3930;
    $l3930:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3935));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3947));
    a3947 = NULL;
    switch ($tmp3932) {
        case 5: goto $l3987;
        case 2: goto $l3962;
        case -1: goto $l4021;
        case 3: goto $l3969;
        case 7: goto $l4013;
        case 6: goto $l3994;
        case 8: goto $l4019;
        case 1: goto $l3953;
        case 4: goto $l3976;
        case 0: goto $l3943;
    }
    $l4021:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4025;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4026;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4028;
    org$pandalanguage$pandac$ASTNode* $tmp4030;
    org$pandalanguage$pandac$parser$Token$nullable name4033;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4034;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4036;
    org$pandalanguage$pandac$ASTNode* $tmp4038;
    panda$collections$ImmutableArray* generics4041 = NULL;
    panda$collections$ImmutableArray* $tmp4044;
    panda$collections$ImmutableArray* $tmp4045;
    panda$collections$ImmutableArray* $tmp4046;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4047;
    org$pandalanguage$pandac$ASTNode* $tmp4049;
    panda$collections$ImmutableArray* $tmp4052;
    panda$collections$ImmutableArray* $tmp4053;
    panda$collections$ImmutableArray* stypes4054 = NULL;
    panda$collections$ImmutableArray* $tmp4057;
    panda$collections$ImmutableArray* $tmp4058;
    panda$collections$ImmutableArray* $tmp4059;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4060;
    org$pandalanguage$pandac$ASTNode* $tmp4062;
    panda$collections$ImmutableArray* $tmp4065;
    panda$collections$ImmutableArray* $tmp4066;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4067;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4069;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    panda$collections$Array* members4074 = NULL;
    panda$collections$Array* $tmp4075;
    panda$collections$Array* $tmp4076;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4081;
    org$pandalanguage$pandac$ASTNode* member4086 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4087;
    org$pandalanguage$pandac$ASTNode* $tmp4088;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4089;
    org$pandalanguage$pandac$ASTNode* $tmp4091;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4095;
    org$pandalanguage$pandac$ASTNode* $tmp4097;
    org$pandalanguage$pandac$ASTNode* $tmp4098;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4100;
    panda$core$String* $tmp4101;
    panda$collections$ImmutableArray* $tmp4103;
    int $tmp4024;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4026, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4028 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4026, &$s4027);
        start4025 = $tmp4028;
        if (((panda$core$Bit) { !start4025.nonnull }).value) {
        {
            $tmp4030 = NULL;
            $finallyReturn4028 = $tmp4030;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4030));
            $tmp4024 = 0;
            goto $l4022;
            $l4031:;
            return $finallyReturn4028;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4034, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4036 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4034, &$s4035);
        name4033 = $tmp4036;
        if (((panda$core$Bit) { !name4033.nonnull }).value) {
        {
            $tmp4038 = NULL;
            $finallyReturn4036 = $tmp4038;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4038));
            $tmp4024 = 1;
            goto $l4022;
            $l4039:;
            return $finallyReturn4036;
        }
        }
        memset(&generics4041, 0, sizeof(generics4041));
        org$pandalanguage$pandac$parser$Token $tmp4042 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4042.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4043.value) {
        {
            {
                $tmp4044 = generics4041;
                panda$collections$ImmutableArray* $tmp4047 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4046 = $tmp4047;
                $tmp4045 = $tmp4046;
                generics4041 = $tmp4045;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4045));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4044));
            }
            if (((panda$core$Bit) { generics4041 == NULL }).value) {
            {
                $tmp4049 = NULL;
                $finallyReturn4047 = $tmp4049;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4049));
                $tmp4024 = 2;
                goto $l4022;
                $l4050:;
                return $finallyReturn4047;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4052 = generics4041;
                $tmp4053 = NULL;
                generics4041 = $tmp4053;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4053));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4052));
            }
        }
        }
        memset(&stypes4054, 0, sizeof(stypes4054));
        org$pandalanguage$pandac$parser$Token $tmp4055 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4055.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4056.value) {
        {
            {
                $tmp4057 = stypes4054;
                panda$collections$ImmutableArray* $tmp4060 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4059 = $tmp4060;
                $tmp4058 = $tmp4059;
                stypes4054 = $tmp4058;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4059));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4057));
            }
            if (((panda$core$Bit) { stypes4054 == NULL }).value) {
            {
                $tmp4062 = NULL;
                $finallyReturn4060 = $tmp4062;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4062));
                $tmp4024 = 3;
                goto $l4022;
                $l4063:;
                return $finallyReturn4060;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4065 = stypes4054;
                $tmp4066 = NULL;
                stypes4054 = $tmp4066;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4065));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4067, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4069 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4067, &$s4068);
        if (((panda$core$Bit) { !$tmp4069.nonnull }).value) {
        {
            $tmp4071 = NULL;
            $finallyReturn4069 = $tmp4071;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4071));
            $tmp4024 = 4;
            goto $l4022;
            $l4072:;
            return $finallyReturn4069;
        }
        }
        panda$collections$Array* $tmp4077 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4077);
        $tmp4076 = $tmp4077;
        $tmp4075 = $tmp4076;
        members4074 = $tmp4075;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4076));
        $l4078:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4081, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4082 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4081);
        bool $tmp4080 = ((panda$core$Bit) { !$tmp4082.nonnull }).value;
        if (!$tmp4080) goto $l4079;
        {
            int $tmp4085;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4089 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4088 = $tmp4089;
                $tmp4087 = $tmp4088;
                member4086 = $tmp4087;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4088));
                if (((panda$core$Bit) { member4086 == NULL }).value) {
                {
                    $tmp4091 = NULL;
                    $finallyReturn4089 = $tmp4091;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4091));
                    $tmp4085 = 0;
                    goto $l4083;
                    $l4092:;
                    $tmp4024 = 5;
                    goto $l4022;
                    $l4093:;
                    return $finallyReturn4089;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4074, ((panda$core$Object*) member4086));
            }
            $tmp4085 = -1;
            goto $l4083;
            $l4083:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4086));
            member4086 = NULL;
            switch ($tmp4085) {
                case 0: goto $l4092;
                case -1: goto $l4095;
            }
            $l4095:;
        }
        goto $l4078;
        $l4079:;
        org$pandalanguage$pandac$ASTNode* $tmp4099 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4100, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4102 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4033.value));
        $tmp4101 = $tmp4102;
        panda$collections$ImmutableArray* $tmp4104 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4074);
        $tmp4103 = $tmp4104;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4099, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start4025.value).position, p_doccomment, p_annotations, $tmp4100, $tmp4101, generics4041, stypes4054, $tmp4103);
        $tmp4098 = $tmp4099;
        $tmp4097 = $tmp4098;
        $finallyReturn4095 = $tmp4097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4098));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4101));
        $tmp4024 = 6;
        goto $l4022;
        $l4105:;
        return $finallyReturn4095;
    }
    $l4022:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4041));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4054));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4074));
    members4074 = NULL;
    switch ($tmp4024) {
        case 6: goto $l4105;
        case 2: goto $l4050;
        case 3: goto $l4063;
        case 4: goto $l4072;
        case 5: goto $l4093;
        case 0: goto $l4031;
        case 1: goto $l4039;
    }
    $l4107:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4111;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4112;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4114;
    org$pandalanguage$pandac$ASTNode* $tmp4116;
    org$pandalanguage$pandac$parser$Token$nullable name4119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4120;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4122;
    org$pandalanguage$pandac$ASTNode* $tmp4124;
    panda$collections$ImmutableArray* generics4127 = NULL;
    panda$collections$ImmutableArray* $tmp4130;
    panda$collections$ImmutableArray* $tmp4131;
    panda$collections$ImmutableArray* $tmp4132;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4133;
    org$pandalanguage$pandac$ASTNode* $tmp4135;
    panda$collections$ImmutableArray* $tmp4138;
    panda$collections$ImmutableArray* $tmp4139;
    panda$collections$ImmutableArray* $tmp4140;
    panda$collections$Array* intfs4142 = NULL;
    panda$collections$Array* $tmp4143;
    panda$collections$Array* $tmp4144;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4146;
    org$pandalanguage$pandac$ASTNode* t4151 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4152;
    org$pandalanguage$pandac$ASTNode* $tmp4153;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4154;
    org$pandalanguage$pandac$ASTNode* $tmp4156;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4163;
    org$pandalanguage$pandac$ASTNode* $tmp4165;
    org$pandalanguage$pandac$ASTNode* $tmp4166;
    org$pandalanguage$pandac$ASTNode* $tmp4167;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4168;
    org$pandalanguage$pandac$ASTNode* $tmp4170;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4175;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4177;
    org$pandalanguage$pandac$ASTNode* $tmp4179;
    panda$collections$Array* members4182 = NULL;
    panda$collections$Array* $tmp4183;
    panda$collections$Array* $tmp4184;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4189;
    org$pandalanguage$pandac$ASTNode* member4194 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4195;
    org$pandalanguage$pandac$ASTNode* $tmp4196;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4197;
    org$pandalanguage$pandac$ASTNode* $tmp4199;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4203;
    org$pandalanguage$pandac$ASTNode* $tmp4205;
    org$pandalanguage$pandac$ASTNode* $tmp4206;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4208;
    panda$core$String* $tmp4209;
    panda$collections$ImmutableArray* $tmp4211;
    panda$collections$ImmutableArray* $tmp4213;
    int $tmp4110;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4112, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4114 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4112, &$s4113);
        start4111 = $tmp4114;
        if (((panda$core$Bit) { !start4111.nonnull }).value) {
        {
            $tmp4116 = NULL;
            $finallyReturn4114 = $tmp4116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4116));
            $tmp4110 = 0;
            goto $l4108;
            $l4117:;
            return $finallyReturn4114;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4120, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4122 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4120, &$s4121);
        name4119 = $tmp4122;
        if (((panda$core$Bit) { !name4119.nonnull }).value) {
        {
            $tmp4124 = NULL;
            $finallyReturn4122 = $tmp4124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4124));
            $tmp4110 = 1;
            goto $l4108;
            $l4125:;
            return $finallyReturn4122;
        }
        }
        memset(&generics4127, 0, sizeof(generics4127));
        org$pandalanguage$pandac$parser$Token $tmp4128 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4128.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4129.value) {
        {
            {
                $tmp4130 = generics4127;
                panda$collections$ImmutableArray* $tmp4133 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4132 = $tmp4133;
                $tmp4131 = $tmp4132;
                generics4127 = $tmp4131;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4131));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4130));
            }
            if (((panda$core$Bit) { generics4127 == NULL }).value) {
            {
                $tmp4135 = NULL;
                $finallyReturn4133 = $tmp4135;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4135));
                $tmp4110 = 2;
                goto $l4108;
                $l4136:;
                return $finallyReturn4133;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4138 = generics4127;
                panda$collections$ImmutableArray* $tmp4141 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4141);
                $tmp4140 = $tmp4141;
                $tmp4139 = $tmp4140;
                generics4127 = $tmp4139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4138));
            }
        }
        }
        panda$collections$Array* $tmp4145 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4145);
        $tmp4144 = $tmp4145;
        $tmp4143 = $tmp4144;
        intfs4142 = $tmp4143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4144));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4146, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4147 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4146);
        if (((panda$core$Bit) { $tmp4147.nonnull }).value) {
        {
            int $tmp4150;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4154 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4153 = $tmp4154;
                $tmp4152 = $tmp4153;
                t4151 = $tmp4152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4153));
                if (((panda$core$Bit) { t4151 == NULL }).value) {
                {
                    $tmp4156 = NULL;
                    $finallyReturn4154 = $tmp4156;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4156));
                    $tmp4150 = 0;
                    goto $l4148;
                    $l4157:;
                    $tmp4110 = 3;
                    goto $l4108;
                    $l4158:;
                    return $finallyReturn4154;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4142, ((panda$core$Object*) t4151));
                $l4160:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4163, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4164 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4163);
                bool $tmp4162 = ((panda$core$Bit) { $tmp4164.nonnull }).value;
                if (!$tmp4162) goto $l4161;
                {
                    {
                        $tmp4165 = t4151;
                        org$pandalanguage$pandac$ASTNode* $tmp4168 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4167 = $tmp4168;
                        $tmp4166 = $tmp4167;
                        t4151 = $tmp4166;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4166));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4165));
                    }
                    if (((panda$core$Bit) { t4151 == NULL }).value) {
                    {
                        $tmp4170 = NULL;
                        $finallyReturn4168 = $tmp4170;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4170));
                        $tmp4150 = 1;
                        goto $l4148;
                        $l4171:;
                        $tmp4110 = 4;
                        goto $l4108;
                        $l4172:;
                        return $finallyReturn4168;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4142, ((panda$core$Object*) t4151));
                }
                goto $l4160;
                $l4161:;
            }
            $tmp4150 = -1;
            goto $l4148;
            $l4148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4151));
            t4151 = NULL;
            switch ($tmp4150) {
                case -1: goto $l4174;
                case 1: goto $l4171;
                case 0: goto $l4157;
            }
            $l4174:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4175, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4177 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4175, &$s4176);
        if (((panda$core$Bit) { !$tmp4177.nonnull }).value) {
        {
            $tmp4179 = NULL;
            $finallyReturn4177 = $tmp4179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4179));
            $tmp4110 = 5;
            goto $l4108;
            $l4180:;
            return $finallyReturn4177;
        }
        }
        panda$collections$Array* $tmp4185 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4185);
        $tmp4184 = $tmp4185;
        $tmp4183 = $tmp4184;
        members4182 = $tmp4183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4184));
        $l4186:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4189, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4190 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4189);
        bool $tmp4188 = ((panda$core$Bit) { !$tmp4190.nonnull }).value;
        if (!$tmp4188) goto $l4187;
        {
            int $tmp4193;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4197 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4196 = $tmp4197;
                $tmp4195 = $tmp4196;
                member4194 = $tmp4195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4196));
                if (((panda$core$Bit) { member4194 == NULL }).value) {
                {
                    $tmp4199 = NULL;
                    $finallyReturn4197 = $tmp4199;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4199));
                    $tmp4193 = 0;
                    goto $l4191;
                    $l4200:;
                    $tmp4110 = 6;
                    goto $l4108;
                    $l4201:;
                    return $finallyReturn4197;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4182, ((panda$core$Object*) member4194));
            }
            $tmp4193 = -1;
            goto $l4191;
            $l4191:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4194));
            member4194 = NULL;
            switch ($tmp4193) {
                case 0: goto $l4200;
                case -1: goto $l4203;
            }
            $l4203:;
        }
        goto $l4186;
        $l4187:;
        org$pandalanguage$pandac$ASTNode* $tmp4207 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4208, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4210 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4119.value));
        $tmp4209 = $tmp4210;
        panda$collections$ImmutableArray* $tmp4212 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4142);
        $tmp4211 = $tmp4212;
        panda$collections$ImmutableArray* $tmp4214 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4182);
        $tmp4213 = $tmp4214;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4207, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start4111.value).position, p_doccomment, p_annotations, $tmp4208, $tmp4209, generics4127, $tmp4211, $tmp4213);
        $tmp4206 = $tmp4207;
        $tmp4205 = $tmp4206;
        $finallyReturn4203 = $tmp4205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4209));
        $tmp4110 = 7;
        goto $l4108;
        $l4215:;
        return $finallyReturn4203;
    }
    $l4108:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4142));
    intfs4142 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4182));
    members4182 = NULL;
    switch ($tmp4110) {
        case 4: goto $l4172;
        case 1: goto $l4125;
        case 6: goto $l4201;
        case 7: goto $l4215;
        case 5: goto $l4180;
        case 3: goto $l4158;
        case 2: goto $l4136;
        case 0: goto $l4117;
    }
    $l4217:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_94218;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4220;
    org$pandalanguage$pandac$ASTNode* $tmp4222;
    org$pandalanguage$pandac$ASTNode* $tmp4223;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4226;
    org$pandalanguage$pandac$ASTNode* $tmp4228;
    org$pandalanguage$pandac$ASTNode* $tmp4229;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4256;
    org$pandalanguage$pandac$ASTNode* $tmp4258;
    org$pandalanguage$pandac$ASTNode* $tmp4259;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4261;
    org$pandalanguage$pandac$ASTNode* $tmp4263;
    org$pandalanguage$pandac$ASTNode* $tmp4264;
    {
        org$pandalanguage$pandac$parser$Token $tmp4219 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_94218 = $tmp4219.kind;
        panda$core$Bit $tmp4220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4220.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4224 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4223 = $tmp4224;
            $tmp4222 = $tmp4223;
            $finallyReturn4220 = $tmp4222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4223));
            return $finallyReturn4220;
        }
        }
        else {
        panda$core$Bit $tmp4226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4226.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4230 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4229 = $tmp4230;
            $tmp4228 = $tmp4229;
            $finallyReturn4226 = $tmp4228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4228));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4229));
            return $finallyReturn4226;
        }
        }
        else {
        panda$core$Bit $tmp4238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp4237 = $tmp4238.value;
        if ($tmp4237) goto $l4239;
        panda$core$Bit $tmp4240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp4237 = $tmp4240.value;
        $l4239:;
        panda$core$Bit $tmp4241 = { $tmp4237 };
        bool $tmp4236 = $tmp4241.value;
        if ($tmp4236) goto $l4242;
        panda$core$Bit $tmp4243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp4236 = $tmp4243.value;
        $l4242:;
        panda$core$Bit $tmp4244 = { $tmp4236 };
        bool $tmp4235 = $tmp4244.value;
        if ($tmp4235) goto $l4245;
        panda$core$Bit $tmp4246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp4235 = $tmp4246.value;
        $l4245:;
        panda$core$Bit $tmp4247 = { $tmp4235 };
        bool $tmp4234 = $tmp4247.value;
        if ($tmp4234) goto $l4248;
        panda$core$Bit $tmp4249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp4234 = $tmp4249.value;
        $l4248:;
        panda$core$Bit $tmp4250 = { $tmp4234 };
        bool $tmp4233 = $tmp4250.value;
        if ($tmp4233) goto $l4251;
        panda$core$Bit $tmp4252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp4233 = $tmp4252.value;
        $l4251:;
        panda$core$Bit $tmp4253 = { $tmp4233 };
        bool $tmp4232 = $tmp4253.value;
        if ($tmp4232) goto $l4254;
        panda$core$Bit $tmp4255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_94218.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp4232 = $tmp4255.value;
        $l4254:;
        panda$core$Bit $tmp4256 = { $tmp4232 };
        if ($tmp4256.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4260 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4259 = $tmp4260;
            $tmp4258 = $tmp4259;
            $finallyReturn4256 = $tmp4258;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4258));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4259));
            return $finallyReturn4256;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4265 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4264 = $tmp4265;
            $tmp4263 = $tmp4264;
            $finallyReturn4261 = $tmp4263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4264));
            return $finallyReturn4261;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4270 = NULL;
    panda$collections$Array* $tmp4271;
    panda$collections$Array* $tmp4272;
    org$pandalanguage$pandac$ASTNode* entry4282 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4283;
    org$pandalanguage$pandac$ASTNode* $tmp4284;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4285;
    org$pandalanguage$pandac$ASTNode* $tmp4287;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4292;
    org$pandalanguage$pandac$ASTNode* $tmp4294;
    org$pandalanguage$pandac$ASTNode* $tmp4295;
    panda$collections$ImmutableArray* $tmp4297;
    int $tmp4269;
    {
        panda$collections$Array* $tmp4273 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4273);
        $tmp4272 = $tmp4273;
        $tmp4271 = $tmp4272;
        entries4270 = $tmp4271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4272));
        $l4274:;
        org$pandalanguage$pandac$parser$Token $tmp4277 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4278 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4277.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4276 = $tmp4278.value;
        if (!$tmp4276) goto $l4275;
        {
            int $tmp4281;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4285 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4284 = $tmp4285;
                $tmp4283 = $tmp4284;
                entry4282 = $tmp4283;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4284));
                if (((panda$core$Bit) { entry4282 == NULL }).value) {
                {
                    $tmp4287 = NULL;
                    $finallyReturn4285 = $tmp4287;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4287));
                    $tmp4281 = 0;
                    goto $l4279;
                    $l4288:;
                    $tmp4269 = 0;
                    goto $l4267;
                    $l4289:;
                    return $finallyReturn4285;
                }
                }
                panda$core$Bit $tmp4291 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4291.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4270, ((panda$core$Object*) entry4282));
            }
            $tmp4281 = -1;
            goto $l4279;
            $l4279:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4282));
            entry4282 = NULL;
            switch ($tmp4281) {
                case -1: goto $l4292;
                case 0: goto $l4288;
            }
            $l4292:;
        }
        goto $l4274;
        $l4275:;
        org$pandalanguage$pandac$ASTNode* $tmp4296 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4298 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4270);
        $tmp4297 = $tmp4298;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4296, ((panda$core$Int64) { 15 }), $tmp4297);
        $tmp4295 = $tmp4296;
        $tmp4294 = $tmp4295;
        $finallyReturn4292 = $tmp4294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4297));
        $tmp4269 = 1;
        goto $l4267;
        $l4299:;
        return $finallyReturn4292;
    }
    $l4267:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4270));
    entries4270 = NULL;
    switch ($tmp4269) {
        case 0: goto $l4289;
        case 1: goto $l4299;
    }
    $l4301:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4304;
    {
    }
    $tmp4304 = -1;
    goto $l4302;
    $l4302:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4304) {
        case -1: goto $l4305;
    }
    $l4305:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

