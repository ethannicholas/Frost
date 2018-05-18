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
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn101)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn148)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn208)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn308)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn368)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn375)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn383)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn390)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn473)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn537)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn544)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn551)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn564)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn588)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn595)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn608)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1314)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2435)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2460)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2507)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3423)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s3869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s3949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    org$pandalanguage$pandac$parser$Token $returnValue29;
    org$pandalanguage$pandac$parser$Token result31;
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
        $returnValue29 = result27;
        return $returnValue29;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp32 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result31 = $tmp32;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result31);
    }
    }
    $returnValue29 = result31;
    return $returnValue29;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result36;
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1338;
    org$pandalanguage$pandac$parser$Token next43;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2545;
    panda$core$String* $tmp47;
    panda$core$Char8 $tmp49;
    org$pandalanguage$pandac$parser$Token $returnValue52;
    org$pandalanguage$pandac$parser$Token next57;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2559;
    $l34:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp37 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result36 = $tmp37;
        {
            $match$57_1338 = result36.kind;
            panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1338.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp39.value) {
            {
                goto $l34;
            }
            }
            else {
            panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1338.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp40.value) {
            {
                $l41:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp44 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next43 = $tmp44;
                    {
                        $match$63_2545 = next43.kind;
                        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2545.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp46.value) {
                        {
                            panda$core$String* $tmp48 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next43);
                            $tmp47 = $tmp48;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp49, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp50 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp47, $tmp49);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
                            if ($tmp50.value) {
                            {
                                goto $l34;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2545.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp51.value) {
                        {
                            $returnValue52 = next43;
                            return $returnValue52;
                        }
                        }
                        }
                    }
                }
                }
                $l42:;
            }
            }
            else {
            panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1338.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp54.value) {
            {
                $l55:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp58 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next57 = $tmp58;
                    {
                        $match$75_2559 = next57.kind;
                        panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2559.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp60.value) {
                        {
                            goto $l34;
                        }
                        }
                        else {
                        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2559.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp61.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result36, &$s62);
                            $returnValue52 = next57;
                            return $returnValue52;
                        }
                        }
                        }
                    }
                }
                }
                $l56:;
            }
            }
            else {
            {
                $returnValue52 = result36;
                return $returnValue52;
            }
            }
            }
            }
        }
    }
    }
    $l35:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token $returnValue68;
    panda$core$Int64 $tmp65 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp65, ((panda$core$Int64) { 0 }));
    if ($tmp66.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp67 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp67);
    }
    }
    panda$core$Int64 $tmp69 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp70 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp69, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp71 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp70);
    $returnValue68 = $tmp71;
    return $returnValue68;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result73;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue76;
    org$pandalanguage$pandac$parser$Token $tmp74 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result73 = $tmp74;
    panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result73.kind.$rawValue, p_kind.$rawValue);
    if ($tmp75.value) {
    {
        $returnValue76 = ((org$pandalanguage$pandac$parser$Token$nullable) { result73, true });
        return $returnValue76;
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result73);
    $returnValue76 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue76;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result79;
    org$pandalanguage$pandac$parser$Token$nullable $returnValue82;
    panda$core$String* $tmp84;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$String* $tmp92;
    org$pandalanguage$pandac$parser$Token $tmp80 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result79 = $tmp80;
    panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result79.kind.$rawValue, p_kind.$rawValue);
    if ($tmp81.value) {
    {
        $returnValue82 = ((org$pandalanguage$pandac$parser$Token$nullable) { result79, true });
        return $returnValue82;
    }
    }
    panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s88, p_expected);
    $tmp87 = $tmp89;
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s90);
    $tmp86 = $tmp91;
    panda$core$String* $tmp93 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result79);
    $tmp92 = $tmp93;
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp86, $tmp92);
    $tmp85 = $tmp94;
    panda$core$String* $tmp96 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp85, &$s95);
    $tmp84 = $tmp96;
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result79, $tmp84);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
    $returnValue82 = ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
    return $returnValue82;
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp98 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp98.value) {
    {
        ITable* $tmp99 = self->errors->$class->itable;
        while ($tmp99->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp99 = $tmp99->next;
        }
        $fn101 $tmp100 = $tmp99->methods[0];
        $tmp100(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp102 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp102.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp103;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp104 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp105 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp104, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp103, $tmp105, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp107 = $tmp103.start.value;
    panda$core$Int64 i106 = { $tmp107 };
    int64_t $tmp109 = $tmp103.end.value;
    int64_t $tmp110 = $tmp103.step.value;
    bool $tmp111 = $tmp103.inclusive.value;
    bool $tmp118 = $tmp110 > 0;
    if ($tmp118) goto $l116; else goto $l117;
    $l116:;
    if ($tmp111) goto $l119; else goto $l120;
    $l119:;
    if ($tmp107 <= $tmp109) goto $l112; else goto $l114;
    $l120:;
    if ($tmp107 < $tmp109) goto $l112; else goto $l114;
    $l117:;
    if ($tmp111) goto $l121; else goto $l122;
    $l121:;
    if ($tmp107 >= $tmp109) goto $l112; else goto $l114;
    $l122:;
    if ($tmp107 > $tmp109) goto $l112; else goto $l114;
    $l112:;
    {
        org$pandalanguage$pandac$parser$Token $tmp124 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i106);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp124);
    }
    $l115:;
    if ($tmp118) goto $l126; else goto $l127;
    $l126:;
    int64_t $tmp128 = $tmp109 - i106.value;
    if ($tmp111) goto $l129; else goto $l130;
    $l129:;
    if ((uint64_t) $tmp128 >= $tmp110) goto $l125; else goto $l114;
    $l130:;
    if ((uint64_t) $tmp128 > $tmp110) goto $l125; else goto $l114;
    $l127:;
    int64_t $tmp132 = i106.value - $tmp109;
    if ($tmp111) goto $l133; else goto $l134;
    $l133:;
    if ((uint64_t) $tmp132 >= -$tmp110) goto $l125; else goto $l114;
    $l134:;
    if ((uint64_t) $tmp132 > -$tmp110) goto $l125; else goto $l114;
    $l125:;
    i106.value += $tmp110;
    goto $l112;
    $l114:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue136;
    panda$core$String* $tmp137;
    panda$core$String* $tmp138;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp139;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp139, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp140 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp139);
    $tmp138 = $tmp140;
    $tmp137 = $tmp138;
    $returnValue136 = $tmp137;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
    return $returnValue136;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue142;
    org$pandalanguage$pandac$ASTNode* $tmp143;
    org$pandalanguage$pandac$ASTNode* $tmp145;
    org$pandalanguage$pandac$ASTNode* $tmp146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp150;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp143 = p_chunk;
        $returnValue142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        return $returnValue142;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp147 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp149 = (($fn148) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp150, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp147, ((panda$core$Int64) { 4 }), $tmp149, p_string, $tmp150, p_chunk);
    $tmp146 = $tmp147;
    $tmp145 = $tmp146;
    $returnValue142 = $tmp145;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
    return $returnValue142;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result155 = NULL;
    panda$core$MutableString* $tmp156;
    panda$core$MutableString* $tmp157;
    org$pandalanguage$pandac$parser$Token token161;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13163;
    panda$core$String* str168 = NULL;
    panda$core$String* $tmp169;
    panda$core$String* $tmp170;
    panda$core$Char8 $tmp172;
    panda$core$String* $returnValue175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp183;
    org$pandalanguage$pandac$parser$Token escape190;
    panda$core$String* $tmp194;
    panda$core$String* escapeText198 = NULL;
    panda$core$String* $tmp199;
    panda$core$String* $tmp200;
    panda$core$Char8 c202;
    panda$core$Object* $tmp203;
    panda$collections$ListView* $tmp204;
    panda$core$Char8 $match$176_21210;
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
    panda$core$String* $tmp233;
    panda$core$String* $tmp237;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp238;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp249;
    int $tmp154;
    {
        panda$core$MutableString* $tmp158 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp158);
        $tmp157 = $tmp158;
        $tmp156 = $tmp157;
        result155 = $tmp156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
        $l159:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp162 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token161 = $tmp162;
            {
                $match$157_13163 = token161.kind;
                panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13163.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp164.value) {
                {
                    int $tmp167;
                    {
                        panda$core$String* $tmp171 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token161);
                        $tmp170 = $tmp171;
                        $tmp169 = $tmp170;
                        str168 = $tmp169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp172, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp173 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str168, $tmp172);
                        if ($tmp173.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token161, &$s174);
                            $tmp176 = NULL;
                            $returnValue175 = $tmp176;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
                            $tmp167 = 0;
                            goto $l165;
                            $l177:;
                            $tmp154 = 0;
                            goto $l152;
                            $l178:;
                            return $returnValue175;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result155, str168);
                    }
                    $tmp167 = -1;
                    goto $l165;
                    $l165:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str168));
                    str168 = NULL;
                    switch ($tmp167) {
                        case 0: goto $l177;
                        case -1: goto $l180;
                    }
                    $l180:;
                }
                }
                else {
                panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13163.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp181.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token161, &$s182);
                    $tmp183 = NULL;
                    $returnValue175 = $tmp183;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
                    $tmp154 = 1;
                    goto $l152;
                    $l184:;
                    return $returnValue175;
                }
                }
                else {
                panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13163.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp186.value) {
                {
                    int $tmp189;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp191 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape190 = $tmp191;
                        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape190.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp192.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token161, &$s193);
                            $tmp194 = NULL;
                            $returnValue175 = $tmp194;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
                            $tmp189 = 0;
                            goto $l187;
                            $l195:;
                            $tmp154 = 2;
                            goto $l152;
                            $l196:;
                            return $returnValue175;
                        }
                        }
                        panda$core$String* $tmp201 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape190);
                        $tmp200 = $tmp201;
                        $tmp199 = $tmp200;
                        escapeText198 = $tmp199;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
                        panda$collections$ListView* $tmp205 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText198);
                        $tmp204 = $tmp205;
                        ITable* $tmp206 = $tmp204->$class->itable;
                        while ($tmp206->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp206 = $tmp206->next;
                        }
                        $fn208 $tmp207 = $tmp206->methods[0];
                        panda$core$Object* $tmp209 = $tmp207($tmp204, ((panda$core$Int64) { 0 }));
                        $tmp203 = $tmp209;
                        c202 = ((panda$core$Char8$wrapper*) $tmp203)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp203);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
                        {
                            $match$176_21210 = c202;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp211, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp212 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21210, $tmp211);
                            if ($tmp212.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result155, $tmp213);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp214, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp215 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21210, $tmp214);
                            if ($tmp215.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result155, $tmp216);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp217, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp218 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21210, $tmp217);
                            if ($tmp218.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result155, $tmp219);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp220, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp221 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21210, $tmp220);
                            if ($tmp221.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result155, $tmp222);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp223, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp224 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21210, $tmp223);
                            if ($tmp224.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result155, $tmp225);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp226, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp227 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21210, $tmp226);
                            if ($tmp227.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result155, $tmp228);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp229, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp230 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21210, $tmp229);
                            if ($tmp230.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp231, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result155, $tmp231);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token161, &$s232);
                                $tmp233 = NULL;
                                $returnValue175 = $tmp233;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
                                $tmp189 = 1;
                                goto $l187;
                                $l234:;
                                $tmp154 = 3;
                                goto $l152;
                                $l235:;
                                return $returnValue175;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp239 = panda$core$String$start$R$panda$core$String$Index(escapeText198);
                        panda$core$String$Index $tmp240 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText198, $tmp239);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp238, ((panda$core$String$Index$nullable) { $tmp240, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp241 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText198, $tmp238);
                        $tmp237 = $tmp241;
                        panda$core$MutableString$append$panda$core$String(result155, $tmp237);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
                    }
                    $tmp189 = -1;
                    goto $l187;
                    $l187:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText198));
                    escapeText198 = NULL;
                    switch ($tmp189) {
                        case 0: goto $l195;
                        case -1: goto $l242;
                        case 1: goto $l234;
                    }
                    $l242:;
                }
                }
                else {
                panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13163.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp243.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token161);
                    panda$core$String* $tmp246 = panda$core$MutableString$finish$R$panda$core$String(result155);
                    $tmp245 = $tmp246;
                    $tmp244 = $tmp245;
                    $returnValue175 = $tmp244;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                    $tmp154 = 4;
                    goto $l152;
                    $l247:;
                    return $returnValue175;
                }
                }
                else {
                {
                    panda$core$String* $tmp250 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token161);
                    $tmp249 = $tmp250;
                    panda$core$MutableString$append$panda$core$String(result155, $tmp249);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
                }
                }
                }
                }
                }
            }
        }
        }
        $l160:;
    }
    $tmp154 = -1;
    goto $l152;
    $l152:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result155));
    result155 = NULL;
    switch ($tmp154) {
        case -1: goto $l251;
        case 4: goto $l247;
        case 3: goto $l235;
        case 0: goto $l178;
        case 2: goto $l196;
        case 1: goto $l184;
    }
    $l251:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result255 = NULL;
    panda$core$MutableString* $tmp256;
    panda$core$MutableString* $tmp257;
    org$pandalanguage$pandac$parser$Token token261;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13263;
    panda$core$String* str268 = NULL;
    panda$core$String* $tmp269;
    panda$core$String* $tmp270;
    panda$core$Char8 $tmp272;
    panda$core$String* $returnValue275;
    panda$core$String* $tmp276;
    panda$core$String* $tmp283;
    org$pandalanguage$pandac$parser$Token escape290;
    panda$core$String* $tmp294;
    panda$core$String* escapeText298 = NULL;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$Char8 c302;
    panda$core$Object* $tmp303;
    panda$collections$ListView* $tmp304;
    panda$core$Char8 $match$221_21310;
    panda$core$Char8 $tmp311;
    panda$core$Char8 $tmp313;
    panda$core$Char8 $tmp314;
    panda$core$Char8 $tmp316;
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
    panda$core$String* $tmp336;
    panda$core$String* $tmp340;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp341;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp358;
    int $tmp254;
    {
        panda$core$MutableString* $tmp258 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp258);
        $tmp257 = $tmp258;
        $tmp256 = $tmp257;
        result255 = $tmp256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
        $l259:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp262 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token261 = $tmp262;
            {
                $match$202_13263 = token261.kind;
                panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13263.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp264.value) {
                {
                    int $tmp267;
                    {
                        panda$core$String* $tmp271 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token261);
                        $tmp270 = $tmp271;
                        $tmp269 = $tmp270;
                        str268 = $tmp269;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp272, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp273 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str268, $tmp272);
                        if ($tmp273.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token261, &$s274);
                            $tmp276 = NULL;
                            $returnValue275 = $tmp276;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
                            $tmp267 = 0;
                            goto $l265;
                            $l277:;
                            $tmp254 = 0;
                            goto $l252;
                            $l278:;
                            return $returnValue275;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result255, str268);
                    }
                    $tmp267 = -1;
                    goto $l265;
                    $l265:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str268));
                    str268 = NULL;
                    switch ($tmp267) {
                        case -1: goto $l280;
                        case 0: goto $l277;
                    }
                    $l280:;
                }
                }
                else {
                panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13263.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp281.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token261, &$s282);
                    $tmp283 = NULL;
                    $returnValue275 = $tmp283;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
                    $tmp254 = 1;
                    goto $l252;
                    $l284:;
                    return $returnValue275;
                }
                }
                else {
                panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13263.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp286.value) {
                {
                    int $tmp289;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp291 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape290 = $tmp291;
                        panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape290.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp292.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token261, &$s293);
                            $tmp294 = NULL;
                            $returnValue275 = $tmp294;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
                            $tmp289 = 0;
                            goto $l287;
                            $l295:;
                            $tmp254 = 2;
                            goto $l252;
                            $l296:;
                            return $returnValue275;
                        }
                        }
                        panda$core$String* $tmp301 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape290);
                        $tmp300 = $tmp301;
                        $tmp299 = $tmp300;
                        escapeText298 = $tmp299;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
                        panda$collections$ListView* $tmp305 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText298);
                        $tmp304 = $tmp305;
                        ITable* $tmp306 = $tmp304->$class->itable;
                        while ($tmp306->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp306 = $tmp306->next;
                        }
                        $fn308 $tmp307 = $tmp306->methods[0];
                        panda$core$Object* $tmp309 = $tmp307($tmp304, ((panda$core$Int64) { 0 }));
                        $tmp303 = $tmp309;
                        c302 = ((panda$core$Char8$wrapper*) $tmp303)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp303);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                        {
                            $match$221_21310 = c302;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp311, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp312 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp311);
                            if ($tmp312.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp313, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp313);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp314, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp315 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp314);
                            if ($tmp315.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp316, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp316);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp318 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp317);
                            if ($tmp318.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp319);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp320, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp321 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp320);
                            if ($tmp321.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp322);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp323, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp324 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp323);
                            if ($tmp324.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp325);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp326, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp327 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp326);
                            if ($tmp327.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp328);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp329, ((panda$core$UInt8) { 58 }));
                            panda$core$Bit $tmp330 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp329);
                            if ($tmp330.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 58 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp331);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp332, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp333 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21310, $tmp332);
                            if ($tmp333.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp334, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result255, $tmp334);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token261, &$s335);
                                $tmp336 = NULL;
                                $returnValue275 = $tmp336;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
                                $tmp289 = 1;
                                goto $l287;
                                $l337:;
                                $tmp254 = 3;
                                goto $l252;
                                $l338:;
                                return $returnValue275;
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
                        panda$core$String$Index $tmp342 = panda$core$String$start$R$panda$core$String$Index(escapeText298);
                        panda$core$String$Index $tmp343 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText298, $tmp342);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp341, ((panda$core$String$Index$nullable) { $tmp343, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp344 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText298, $tmp341);
                        $tmp340 = $tmp344;
                        panda$core$MutableString$append$panda$core$String(result255, $tmp340);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                    }
                    $tmp289 = -1;
                    goto $l287;
                    $l287:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText298));
                    escapeText298 = NULL;
                    switch ($tmp289) {
                        case -1: goto $l345;
                        case 1: goto $l337;
                        case 0: goto $l295;
                    }
                    $l345:;
                }
                }
                else {
                panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13263.$rawValue, ((panda$core$Int64) { 95 }));
                if ($tmp346.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token261);
                    panda$core$String* $tmp349 = panda$core$MutableString$finish$R$panda$core$String(result255);
                    $tmp348 = $tmp349;
                    $tmp347 = $tmp348;
                    $returnValue275 = $tmp347;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
                    $tmp254 = 4;
                    goto $l252;
                    $l350:;
                    return $returnValue275;
                }
                }
                else {
                panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13263.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp352.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token261);
                    panda$core$String* $tmp355 = panda$core$MutableString$finish$R$panda$core$String(result255);
                    $tmp354 = $tmp355;
                    $tmp353 = $tmp354;
                    $returnValue275 = $tmp353;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                    $tmp254 = 5;
                    goto $l252;
                    $l356:;
                    return $returnValue275;
                }
                }
                else {
                {
                    panda$core$String* $tmp359 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token261);
                    $tmp358 = $tmp359;
                    panda$core$MutableString$append$panda$core$String(result255, $tmp358);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l260:;
    }
    $tmp254 = -1;
    goto $l252;
    $l252:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result255));
    result255 = NULL;
    switch ($tmp254) {
        case 4: goto $l350;
        case 0: goto $l278;
        case 3: goto $l338;
        case 2: goto $l296;
        case 5: goto $l356;
        case 1: goto $l284;
        case -1: goto $l360;
    }
    $l360:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot364 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp365;
    org$pandalanguage$pandac$ASTNode* $tmp366;
    org$pandalanguage$pandac$ASTNode* call371 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp372;
    org$pandalanguage$pandac$ASTNode* $tmp373;
    panda$collections$ImmutableArray* $tmp377;
    org$pandalanguage$pandac$ASTNode* stringType379 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp380;
    org$pandalanguage$pandac$ASTNode* $tmp381;
    org$pandalanguage$pandac$ASTNode* $returnValue386;
    org$pandalanguage$pandac$ASTNode* $tmp387;
    org$pandalanguage$pandac$ASTNode* $tmp388;
    org$pandalanguage$pandac$parser$Token$Kind $tmp392;
    int $tmp363;
    {
        org$pandalanguage$pandac$ASTNode* $tmp367 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp369 = (($fn368) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp367, ((panda$core$Int64) { 15 }), $tmp369, p_expr, &$s370);
        $tmp366 = $tmp367;
        $tmp365 = $tmp366;
        dot364 = $tmp365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
        org$pandalanguage$pandac$ASTNode* $tmp374 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp376 = (($fn375) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp378 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp378);
        $tmp377 = $tmp378;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp374, ((panda$core$Int64) { 8 }), $tmp376, dot364, $tmp377);
        $tmp373 = $tmp374;
        $tmp372 = $tmp373;
        call371 = $tmp372;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
        org$pandalanguage$pandac$ASTNode* $tmp382 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp384 = (($fn383) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp382, ((panda$core$Int64) { 38 }), $tmp384, &$s385);
        $tmp381 = $tmp382;
        $tmp380 = $tmp381;
        stringType379 = $tmp380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
        org$pandalanguage$pandac$ASTNode* $tmp389 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp391 = (($fn390) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp392, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp389, ((panda$core$Int64) { 4 }), $tmp391, call371, $tmp392, stringType379);
        $tmp388 = $tmp389;
        $tmp387 = $tmp388;
        $returnValue386 = $tmp387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
        $tmp363 = 0;
        goto $l361;
        $l393:;
        return $returnValue386;
    }
    $l361:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot364));
    dot364 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call371));
    call371 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType379));
    stringType379 = NULL;
    switch ($tmp363) {
        case 0: goto $l393;
    }
    $l395:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start399;
    panda$core$String* $tmp406;
    panda$core$String* $tmp407;
    panda$core$String* $tmp409;
    org$pandalanguage$pandac$ASTNode* $returnValue414;
    org$pandalanguage$pandac$ASTNode* $tmp415;
    org$pandalanguage$pandac$ASTNode* result418 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp419;
    panda$core$MutableString* chunk420 = NULL;
    panda$core$MutableString* $tmp421;
    panda$core$MutableString* $tmp422;
    org$pandalanguage$pandac$parser$Token token426;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13429;
    panda$core$String* str434 = NULL;
    panda$core$String* $tmp435;
    panda$core$String* $tmp436;
    panda$core$Char8 $tmp438;
    org$pandalanguage$pandac$ASTNode* $tmp441;
    org$pandalanguage$pandac$ASTNode* $tmp448;
    org$pandalanguage$pandac$parser$Token escape455;
    org$pandalanguage$pandac$ASTNode* $tmp459;
    panda$core$String* escapeText463 = NULL;
    panda$core$String* $tmp464;
    panda$core$String* $tmp465;
    panda$core$Char8 c467;
    panda$core$Object* $tmp468;
    panda$collections$ListView* $tmp469;
    panda$core$Char8 $match$287_21475;
    panda$core$Char8 $tmp476;
    panda$core$Char8 $tmp478;
    panda$core$Char8 $tmp479;
    panda$core$Char8 $tmp481;
    panda$core$Char8 $tmp482;
    panda$core$Char8 $tmp484;
    panda$core$Char8 $tmp485;
    panda$core$Char8 $tmp487;
    panda$core$Char8 $tmp488;
    panda$core$Char8 $tmp490;
    panda$core$Char8 $tmp491;
    panda$core$Char8 $tmp493;
    panda$core$Char8 $tmp494;
    org$pandalanguage$pandac$ASTNode* expr499 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp500;
    org$pandalanguage$pandac$ASTNode* $tmp501;
    org$pandalanguage$pandac$ASTNode* $tmp503;
    panda$core$String* align508 = NULL;
    panda$core$String* $tmp509;
    panda$core$String* format510 = NULL;
    panda$core$String* $tmp511;
    org$pandalanguage$pandac$parser$Token$Kind $tmp512;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    panda$core$String* $tmp516;
    org$pandalanguage$pandac$parser$Token$Kind $tmp518;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    panda$core$String* $tmp525;
    org$pandalanguage$pandac$ASTNode* $tmp527;
    org$pandalanguage$pandac$ASTNode* formattable533 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp534;
    org$pandalanguage$pandac$ASTNode* $tmp535;
    org$pandalanguage$pandac$ASTNode* cast540 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp541;
    org$pandalanguage$pandac$ASTNode* $tmp542;
    org$pandalanguage$pandac$parser$Token$Kind $tmp546;
    org$pandalanguage$pandac$ASTNode* dot547 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp548;
    org$pandalanguage$pandac$ASTNode* $tmp549;
    panda$collections$Array* callArgs554 = NULL;
    panda$collections$Array* $tmp555;
    panda$collections$Array* $tmp556;
    org$pandalanguage$pandac$ASTNode* $tmp558;
    org$pandalanguage$pandac$ASTNode* $tmp560;
    org$pandalanguage$pandac$ASTNode* $tmp561;
    org$pandalanguage$pandac$ASTNode* $tmp562;
    panda$collections$ImmutableArray* $tmp566;
    org$pandalanguage$pandac$parser$Token$Kind $tmp569;
    org$pandalanguage$pandac$ASTNode* $tmp572;
    org$pandalanguage$pandac$ASTNode* $tmp580;
    org$pandalanguage$pandac$ASTNode* $tmp581;
    org$pandalanguage$pandac$ASTNode* $tmp582;
    org$pandalanguage$pandac$ASTNode* pandaType584 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp585;
    org$pandalanguage$pandac$ASTNode* $tmp586;
    org$pandalanguage$pandac$ASTNode* callTarget591 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp592;
    org$pandalanguage$pandac$ASTNode* $tmp593;
    panda$collections$Array* callArgs598 = NULL;
    panda$collections$Array* $tmp599;
    panda$collections$Array* $tmp600;
    org$pandalanguage$pandac$ASTNode* $tmp602;
    org$pandalanguage$pandac$ASTNode* $tmp604;
    org$pandalanguage$pandac$ASTNode* $tmp605;
    org$pandalanguage$pandac$ASTNode* $tmp606;
    panda$collections$ImmutableArray* $tmp610;
    panda$core$String* text613 = NULL;
    panda$core$String* $tmp614;
    panda$core$String* $tmp615;
    panda$core$MutableString* $tmp617;
    panda$core$MutableString* $tmp618;
    panda$core$MutableString* $tmp619;
    org$pandalanguage$pandac$ASTNode* $tmp626;
    org$pandalanguage$pandac$ASTNode* $tmp627;
    org$pandalanguage$pandac$ASTNode* $tmp628;
    org$pandalanguage$pandac$ASTNode* $tmp629;
    org$pandalanguage$pandac$ASTNode* $tmp632;
    org$pandalanguage$pandac$ASTNode* $tmp633;
    org$pandalanguage$pandac$ASTNode* $tmp634;
    org$pandalanguage$pandac$ASTNode* $tmp636;
    org$pandalanguage$pandac$ASTNode* $tmp637;
    org$pandalanguage$pandac$ASTNode* $tmp638;
    org$pandalanguage$pandac$ASTNode* $tmp642;
    panda$core$String* $tmp646;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp647;
    panda$core$String* $tmp652;
    org$pandalanguage$pandac$ASTNode* $tmp654;
    org$pandalanguage$pandac$ASTNode* $tmp655;
    org$pandalanguage$pandac$ASTNode* $tmp656;
    panda$core$String* $tmp658;
    int $tmp398;
    {
        org$pandalanguage$pandac$parser$Token $tmp400 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start399 = $tmp400;
        panda$core$Bit $tmp402 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start399.kind.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp401 = $tmp402.value;
        if (!$tmp401) goto $l403;
        panda$core$Bit $tmp404 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start399.kind.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp401 = $tmp404.value;
        $l403:;
        panda$core$Bit $tmp405 = { $tmp401 };
        if ($tmp405.value) {
        {
            panda$core$String* $tmp410 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start399);
            $tmp409 = $tmp410;
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s408, $tmp409);
            $tmp407 = $tmp411;
            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s412);
            $tmp406 = $tmp413;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start399, $tmp406);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
            $tmp415 = NULL;
            $returnValue414 = $tmp415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
            $tmp398 = 0;
            goto $l396;
            $l416:;
            return $returnValue414;
        }
        }
        $tmp419 = NULL;
        result418 = $tmp419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp419));
        panda$core$MutableString* $tmp423 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp423);
        $tmp422 = $tmp423;
        $tmp421 = $tmp422;
        chunk420 = $tmp421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        $l424:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp427 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token426 = $tmp427;
            panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token426.kind.$rawValue, start399.kind.$rawValue);
            if ($tmp428.value) {
            {
                goto $l425;
            }
            }
            {
                $match$268_13429 = token426.kind;
                panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13429.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp430.value) {
                {
                    int $tmp433;
                    {
                        panda$core$String* $tmp437 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token426);
                        $tmp436 = $tmp437;
                        $tmp435 = $tmp436;
                        str434 = $tmp435;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp435));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp438, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp439 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str434, $tmp438);
                        if ($tmp439.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start399, &$s440);
                            $tmp441 = NULL;
                            $returnValue414 = $tmp441;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp441));
                            $tmp433 = 0;
                            goto $l431;
                            $l442:;
                            $tmp398 = 1;
                            goto $l396;
                            $l443:;
                            return $returnValue414;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(chunk420, str434);
                    }
                    $tmp433 = -1;
                    goto $l431;
                    $l431:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str434));
                    str434 = NULL;
                    switch ($tmp433) {
                        case 0: goto $l442;
                        case -1: goto $l445;
                    }
                    $l445:;
                }
                }
                else {
                panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13429.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp446.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start399, &$s447);
                    $tmp448 = NULL;
                    $returnValue414 = $tmp448;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
                    $tmp398 = 2;
                    goto $l396;
                    $l449:;
                    return $returnValue414;
                }
                }
                else {
                panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13429.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp451.value) {
                {
                    int $tmp454;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp456 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape455 = $tmp456;
                        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape455.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp457.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start399, &$s458);
                            $tmp459 = NULL;
                            $returnValue414 = $tmp459;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
                            $tmp454 = 0;
                            goto $l452;
                            $l460:;
                            $tmp398 = 3;
                            goto $l396;
                            $l461:;
                            return $returnValue414;
                        }
                        }
                        panda$core$String* $tmp466 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape455);
                        $tmp465 = $tmp466;
                        $tmp464 = $tmp465;
                        escapeText463 = $tmp464;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp464));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp465));
                        panda$collections$ListView* $tmp470 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText463);
                        $tmp469 = $tmp470;
                        ITable* $tmp471 = $tmp469->$class->itable;
                        while ($tmp471->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp471 = $tmp471->next;
                        }
                        $fn473 $tmp472 = $tmp471->methods[0];
                        panda$core$Object* $tmp474 = $tmp472($tmp469, ((panda$core$Int64) { 0 }));
                        $tmp468 = $tmp474;
                        c467 = ((panda$core$Char8$wrapper*) $tmp468)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp468);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                        {
                            $match$287_21475 = c467;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp476, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp477 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21475, $tmp476);
                            if ($tmp477.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp478, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk420, $tmp478);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp479, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp480 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21475, $tmp479);
                            if ($tmp480.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp481, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk420, $tmp481);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp482, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp483 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21475, $tmp482);
                            if ($tmp483.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp484, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk420, $tmp484);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp485, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp486 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21475, $tmp485);
                            if ($tmp486.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp487, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk420, $tmp487);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp488, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp489 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21475, $tmp488);
                            if ($tmp489.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp490, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk420, $tmp490);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp491, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp492 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21475, $tmp491);
                            if ($tmp492.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp493, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk420, $tmp493);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp494, ((panda$core$UInt8) { 123 }));
                            panda$core$Bit $tmp495 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21475, $tmp494);
                            if ($tmp495.value) {
                            {
                                {
                                    int $tmp498;
                                    {
                                        org$pandalanguage$pandac$ASTNode* $tmp502 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp501 = $tmp502;
                                        $tmp500 = $tmp501;
                                        expr499 = $tmp500;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
                                        if (((panda$core$Bit) { expr499 == NULL }).value) {
                                        {
                                            $tmp503 = NULL;
                                            $returnValue414 = $tmp503;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp503));
                                            $tmp498 = 0;
                                            goto $l496;
                                            $l504:;
                                            $tmp454 = 1;
                                            goto $l452;
                                            $l505:;
                                            $tmp398 = 4;
                                            goto $l396;
                                            $l506:;
                                            return $returnValue414;
                                        }
                                        }
                                        $tmp509 = NULL;
                                        align508 = $tmp509;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
                                        $tmp511 = NULL;
                                        format510 = $tmp511;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp512, ((panda$core$Int64) { 105 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp513 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp512);
                                        if (((panda$core$Bit) { $tmp513.nonnull }).value) {
                                        {
                                            {
                                                $tmp514 = align508;
                                                panda$core$String* $tmp517 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start399);
                                                $tmp516 = $tmp517;
                                                $tmp515 = $tmp516;
                                                align508 = $tmp515;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
                                            }
                                        }
                                        }
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp518, ((panda$core$Int64) { 95 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp519 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp518);
                                        if (((panda$core$Bit) { $tmp519.nonnull }).value) {
                                        {
                                            int $tmp522;
                                            {
                                                {
                                                    $tmp523 = format510;
                                                    panda$core$String* $tmp526 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start399);
                                                    $tmp525 = $tmp526;
                                                    $tmp524 = $tmp525;
                                                    format510 = $tmp524;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp524));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
                                                }
                                                if (((panda$core$Bit) { format510 == NULL }).value) {
                                                {
                                                    $tmp527 = NULL;
                                                    $returnValue414 = $tmp527;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp527));
                                                    $tmp522 = 0;
                                                    goto $l520;
                                                    $l528:;
                                                    $tmp498 = 1;
                                                    goto $l496;
                                                    $l529:;
                                                    $tmp454 = 2;
                                                    goto $l452;
                                                    $l530:;
                                                    $tmp398 = 5;
                                                    goto $l396;
                                                    $l531:;
                                                    return $returnValue414;
                                                }
                                                }
                                                org$pandalanguage$pandac$ASTNode* $tmp536 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp538 = (($fn537) expr499->$class->vtable[2])(expr499);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp536, ((panda$core$Int64) { 38 }), $tmp538, &$s539);
                                                $tmp535 = $tmp536;
                                                $tmp534 = $tmp535;
                                                formattable533 = $tmp534;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp534));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp535));
                                                org$pandalanguage$pandac$ASTNode* $tmp543 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp545 = (($fn544) expr499->$class->vtable[2])(expr499);
                                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp546, ((panda$core$Int64) { 89 }));
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp543, ((panda$core$Int64) { 4 }), $tmp545, expr499, $tmp546, formattable533);
                                                $tmp542 = $tmp543;
                                                $tmp541 = $tmp542;
                                                cast540 = $tmp541;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                                                org$pandalanguage$pandac$ASTNode* $tmp550 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp552 = (($fn551) expr499->$class->vtable[2])(expr499);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp550, ((panda$core$Int64) { 15 }), $tmp552, cast540, &$s553);
                                                $tmp549 = $tmp550;
                                                $tmp548 = $tmp549;
                                                dot547 = $tmp548;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                                                panda$collections$Array* $tmp557 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                panda$collections$Array$init($tmp557);
                                                $tmp556 = $tmp557;
                                                $tmp555 = $tmp556;
                                                callArgs554 = $tmp555;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                                                org$pandalanguage$pandac$ASTNode* $tmp559 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp559, ((panda$core$Int64) { 36 }), start399.position, format510);
                                                $tmp558 = $tmp559;
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs554, ((panda$core$Object*) $tmp558));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
                                                {
                                                    $tmp560 = expr499;
                                                    org$pandalanguage$pandac$ASTNode* $tmp563 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp565 = (($fn564) expr499->$class->vtable[2])(expr499);
                                                    panda$collections$ImmutableArray* $tmp567 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs554);
                                                    $tmp566 = $tmp567;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp563, ((panda$core$Int64) { 8 }), $tmp565, dot547, $tmp566);
                                                    $tmp562 = $tmp563;
                                                    $tmp561 = $tmp562;
                                                    expr499 = $tmp561;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp561));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp562));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
                                                }
                                            }
                                            $tmp522 = -1;
                                            goto $l520;
                                            $l520:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable533));
                                            formattable533 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast540));
                                            cast540 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot547));
                                            dot547 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs554));
                                            callArgs554 = NULL;
                                            switch ($tmp522) {
                                                case -1: goto $l568;
                                                case 0: goto $l528;
                                            }
                                            $l568:;
                                        }
                                        }
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp569, ((panda$core$Int64) { 100 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp571 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp569, &$s570);
                                        if (((panda$core$Bit) { !$tmp571.nonnull }).value) {
                                        {
                                            $tmp572 = NULL;
                                            $returnValue414 = $tmp572;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
                                            $tmp498 = 2;
                                            goto $l496;
                                            $l573:;
                                            $tmp454 = 3;
                                            goto $l452;
                                            $l574:;
                                            $tmp398 = 6;
                                            goto $l396;
                                            $l575:;
                                            return $returnValue414;
                                        }
                                        }
                                        if (((panda$core$Bit) { align508 != NULL }).value) {
                                        {
                                            int $tmp579;
                                            {
                                                if (((panda$core$Bit) { format510 == NULL }).value) {
                                                {
                                                    {
                                                        $tmp580 = expr499;
                                                        org$pandalanguage$pandac$ASTNode* $tmp583 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr499);
                                                        $tmp582 = $tmp583;
                                                        $tmp581 = $tmp582;
                                                        expr499 = $tmp581;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                                                    }
                                                }
                                                }
                                                org$pandalanguage$pandac$ASTNode* $tmp587 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp589 = (($fn588) expr499->$class->vtable[2])(expr499);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp587, ((panda$core$Int64) { 38 }), $tmp589, &$s590);
                                                $tmp586 = $tmp587;
                                                $tmp585 = $tmp586;
                                                pandaType584 = $tmp585;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                                                org$pandalanguage$pandac$ASTNode* $tmp594 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp596 = (($fn595) expr499->$class->vtable[2])(expr499);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp594, ((panda$core$Int64) { 15 }), $tmp596, pandaType584, &$s597);
                                                $tmp593 = $tmp594;
                                                $tmp592 = $tmp593;
                                                callTarget591 = $tmp592;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp592));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                                                panda$collections$Array* $tmp601 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                panda$collections$Array$init($tmp601);
                                                $tmp600 = $tmp601;
                                                $tmp599 = $tmp600;
                                                callArgs598 = $tmp599;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs598, ((panda$core$Object*) expr499));
                                                org$pandalanguage$pandac$ASTNode* $tmp603 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp603, ((panda$core$Int64) { 36 }), start399.position, align508);
                                                $tmp602 = $tmp603;
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs598, ((panda$core$Object*) $tmp602));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
                                                {
                                                    $tmp604 = expr499;
                                                    org$pandalanguage$pandac$ASTNode* $tmp607 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp609 = (($fn608) expr499->$class->vtable[2])(expr499);
                                                    panda$collections$ImmutableArray* $tmp611 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs598);
                                                    $tmp610 = $tmp611;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp607, ((panda$core$Int64) { 8 }), $tmp609, callTarget591, $tmp610);
                                                    $tmp606 = $tmp607;
                                                    $tmp605 = $tmp606;
                                                    expr499 = $tmp605;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                                                }
                                            }
                                            $tmp579 = -1;
                                            goto $l577;
                                            $l577:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType584));
                                            pandaType584 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget591));
                                            callTarget591 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs598));
                                            callArgs598 = NULL;
                                            switch ($tmp579) {
                                                case -1: goto $l612;
                                            }
                                            $l612:;
                                        }
                                        }
                                        panda$core$String* $tmp616 = panda$core$MutableString$finish$R$panda$core$String(chunk420);
                                        $tmp615 = $tmp616;
                                        $tmp614 = $tmp615;
                                        text613 = $tmp614;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                                        {
                                            $tmp617 = chunk420;
                                            panda$core$MutableString* $tmp620 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                            panda$core$MutableString$init($tmp620);
                                            $tmp619 = $tmp620;
                                            $tmp618 = $tmp619;
                                            chunk420 = $tmp618;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp618));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp617));
                                        }
                                        panda$core$Bit $tmp623 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text613, &$s622);
                                        bool $tmp621 = $tmp623.value;
                                        if ($tmp621) goto $l624;
                                        $tmp621 = ((panda$core$Bit) { result418 != NULL }).value;
                                        $l624:;
                                        panda$core$Bit $tmp625 = { $tmp621 };
                                        if ($tmp625.value) {
                                        {
                                            {
                                                $tmp626 = result418;
                                                org$pandalanguage$pandac$ASTNode* $tmp630 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp630, ((panda$core$Int64) { 36 }), start399.position, text613);
                                                $tmp629 = $tmp630;
                                                org$pandalanguage$pandac$ASTNode* $tmp631 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result418, $tmp629);
                                                $tmp628 = $tmp631;
                                                $tmp627 = $tmp628;
                                                result418 = $tmp627;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp626));
                                            }
                                            {
                                                $tmp632 = result418;
                                                org$pandalanguage$pandac$ASTNode* $tmp635 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result418, expr499);
                                                $tmp634 = $tmp635;
                                                $tmp633 = $tmp634;
                                                result418 = $tmp633;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            {
                                                $tmp636 = result418;
                                                org$pandalanguage$pandac$ASTNode* $tmp639 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr499);
                                                $tmp638 = $tmp639;
                                                $tmp637 = $tmp638;
                                                result418 = $tmp637;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                                            }
                                        }
                                        }
                                    }
                                    $tmp498 = -1;
                                    goto $l496;
                                    $l496:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr499));
                                    expr499 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align508));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format510));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text613));
                                    text613 = NULL;
                                    switch ($tmp498) {
                                        case 1: goto $l529;
                                        case 0: goto $l504;
                                        case 2: goto $l573;
                                        case -1: goto $l640;
                                    }
                                    $l640:;
                                }
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token426, &$s641);
                                $tmp642 = NULL;
                                $returnValue414 = $tmp642;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp642));
                                $tmp454 = 4;
                                goto $l452;
                                $l643:;
                                $tmp398 = 7;
                                goto $l396;
                                $l644:;
                                return $returnValue414;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp648 = panda$core$String$start$R$panda$core$String$Index(escapeText463);
                        panda$core$String$Index $tmp649 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText463, $tmp648);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp647, ((panda$core$String$Index$nullable) { $tmp649, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp650 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText463, $tmp647);
                        $tmp646 = $tmp650;
                        panda$core$MutableString$append$panda$core$String(chunk420, $tmp646);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                    }
                    $tmp454 = -1;
                    goto $l452;
                    $l452:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText463));
                    escapeText463 = NULL;
                    switch ($tmp454) {
                        case 2: goto $l530;
                        case 0: goto $l460;
                        case 4: goto $l643;
                        case 3: goto $l574;
                        case 1: goto $l505;
                        case -1: goto $l651;
                    }
                    $l651:;
                }
                }
                else {
                {
                    panda$core$String* $tmp653 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token426);
                    $tmp652 = $tmp653;
                    panda$core$MutableString$append$panda$core$String(chunk420, $tmp652);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp652));
                }
                }
                }
                }
            }
        }
        }
        $l425:;
        org$pandalanguage$pandac$ASTNode* $tmp657 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp659 = panda$core$MutableString$finish$R$panda$core$String(chunk420);
        $tmp658 = $tmp659;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp657, ((panda$core$Int64) { 36 }), start399.position, $tmp658);
        $tmp656 = $tmp657;
        org$pandalanguage$pandac$ASTNode* $tmp660 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result418, $tmp656);
        $tmp655 = $tmp660;
        $tmp654 = $tmp655;
        $returnValue414 = $tmp654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp656));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
        $tmp398 = 8;
        goto $l396;
        $l661:;
        return $returnValue414;
    }
    $l396:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result418));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk420));
    chunk420 = NULL;
    switch ($tmp398) {
        case 0: goto $l416;
        case 5: goto $l531;
        case 2: goto $l449;
        case 1: goto $l443;
        case 6: goto $l575;
        case 4: goto $l506;
        case 7: goto $l644;
        case 8: goto $l661;
        case 3: goto $l461;
    }
    $l663:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t664;
    org$pandalanguage$pandac$parser$Token$Kind $match$363_9666;
    org$pandalanguage$pandac$ASTNode* $returnValue668;
    org$pandalanguage$pandac$ASTNode* $tmp669;
    org$pandalanguage$pandac$ASTNode* $tmp670;
    panda$core$String* $tmp672;
    org$pandalanguage$pandac$ASTNode* $tmp676;
    org$pandalanguage$pandac$ASTNode* $tmp677;
    panda$core$String* $tmp679;
    org$pandalanguage$pandac$ASTNode* $tmp684;
    org$pandalanguage$pandac$ASTNode* $tmp685;
    panda$core$String* $tmp687;
    panda$core$String* $tmp688;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp690;
    org$pandalanguage$pandac$ASTNode* $tmp695;
    org$pandalanguage$pandac$ASTNode* $tmp696;
    panda$core$String* $tmp698;
    panda$core$String* $tmp699;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp701;
    org$pandalanguage$pandac$ASTNode* $tmp706;
    org$pandalanguage$pandac$ASTNode* $tmp707;
    panda$core$String* $tmp709;
    org$pandalanguage$pandac$ASTNode* $tmp714;
    org$pandalanguage$pandac$ASTNode* $tmp715;
    org$pandalanguage$pandac$ASTNode* $tmp719;
    org$pandalanguage$pandac$ASTNode* $tmp720;
    org$pandalanguage$pandac$ASTNode* $tmp724;
    org$pandalanguage$pandac$ASTNode* $tmp725;
    org$pandalanguage$pandac$ASTNode* $tmp729;
    org$pandalanguage$pandac$ASTNode* $tmp730;
    org$pandalanguage$pandac$ASTNode* $tmp734;
    org$pandalanguage$pandac$ASTNode* $tmp735;
    org$pandalanguage$pandac$ASTNode* $tmp743;
    org$pandalanguage$pandac$ASTNode* $tmp744;
    org$pandalanguage$pandac$ASTNode* result751 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp752;
    org$pandalanguage$pandac$ASTNode* $tmp753;
    org$pandalanguage$pandac$ASTNode* $tmp755;
    org$pandalanguage$pandac$parser$Token$Kind $tmp758;
    org$pandalanguage$pandac$ASTNode* $tmp761;
    org$pandalanguage$pandac$ASTNode* $tmp764;
    panda$core$String* name772 = NULL;
    panda$core$String* $tmp773;
    panda$core$String* $tmp774;
    org$pandalanguage$pandac$parser$Token$Kind $tmp781;
    org$pandalanguage$pandac$ASTNode* expr783 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp784;
    org$pandalanguage$pandac$ASTNode* $tmp785;
    org$pandalanguage$pandac$parser$Token$Kind $tmp787;
    org$pandalanguage$pandac$ASTNode* $tmp789;
    org$pandalanguage$pandac$ASTNode* $tmp790;
    org$pandalanguage$pandac$ASTNode* $tmp798;
    org$pandalanguage$pandac$ASTNode* $tmp799;
    panda$core$String* $tmp803;
    panda$core$String* $tmp804;
    org$pandalanguage$pandac$ASTNode* $tmp809;
    panda$core$String* $tmp813;
    panda$core$String* $tmp814;
    panda$core$String* $tmp816;
    org$pandalanguage$pandac$ASTNode* $tmp821;
    org$pandalanguage$pandac$parser$Token $tmp665 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t664 = $tmp665;
    {
        $match$363_9666 = t664.kind;
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp667.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp671 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp673 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t664);
            $tmp672 = $tmp673;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp671, ((panda$core$Int64) { 20 }), t664.position, $tmp672);
            $tmp670 = $tmp671;
            $tmp669 = $tmp670;
            $returnValue668 = $tmp669;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp675.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp678 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp680 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t664);
            $tmp679 = $tmp680;
            panda$core$UInt64$nullable $tmp681 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp679);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp678, ((panda$core$Int64) { 22 }), t664.position, ((panda$core$UInt64) $tmp681.value));
            $tmp677 = $tmp678;
            $tmp676 = $tmp677;
            $returnValue668 = $tmp676;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp683.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp686 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp689 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t664);
            $tmp688 = $tmp689;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp690, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp691 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp688, $tmp690);
            $tmp687 = $tmp691;
            panda$core$UInt64$nullable $tmp692 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp687, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp686, ((panda$core$Int64) { 22 }), t664.position, ((panda$core$UInt64) $tmp692.value));
            $tmp685 = $tmp686;
            $tmp684 = $tmp685;
            $returnValue668 = $tmp684;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp684));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp688));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp694.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp697 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp700 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t664);
            $tmp699 = $tmp700;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp701, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp702 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp699, $tmp701);
            $tmp698 = $tmp702;
            panda$core$UInt64$nullable $tmp703 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp698, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp697, ((panda$core$Int64) { 22 }), t664.position, ((panda$core$UInt64) $tmp703.value));
            $tmp696 = $tmp697;
            $tmp695 = $tmp696;
            $returnValue668 = $tmp695;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp696));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp705.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp708 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp710 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t664);
            $tmp709 = $tmp710;
            panda$core$Real64$nullable $tmp711 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp709);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp708, ((panda$core$Int64) { 33 }), t664.position, ((panda$core$Real64) $tmp711.value));
            $tmp707 = $tmp708;
            $tmp706 = $tmp707;
            $returnValue668 = $tmp706;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp706));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp713.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp716 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp716, ((panda$core$Int64) { 35 }), t664.position);
            $tmp715 = $tmp716;
            $tmp714 = $tmp715;
            $returnValue668 = $tmp714;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp714));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp718.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp721 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp721, ((panda$core$Int64) { 37 }), t664.position);
            $tmp720 = $tmp721;
            $tmp719 = $tmp720;
            $returnValue668 = $tmp719;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp720));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp723.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp726 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp726, ((panda$core$Int64) { 27 }), t664.position);
            $tmp725 = $tmp726;
            $tmp724 = $tmp725;
            $returnValue668 = $tmp724;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp728.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp731 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp731, ((panda$core$Int64) { 5 }), t664.position, ((panda$core$Bit) { true }));
            $tmp730 = $tmp731;
            $tmp729 = $tmp730;
            $returnValue668 = $tmp729;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp729));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp733.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp736 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp736, ((panda$core$Int64) { 5 }), t664.position, ((panda$core$Bit) { false }));
            $tmp735 = $tmp736;
            $tmp734 = $tmp735;
            $returnValue668 = $tmp734;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp735));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp738 = $tmp739.value;
        if ($tmp738) goto $l740;
        panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp738 = $tmp741.value;
        $l740:;
        panda$core$Bit $tmp742 = { $tmp738 };
        if ($tmp742.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t664);
            org$pandalanguage$pandac$ASTNode* $tmp745 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp744 = $tmp745;
            $tmp743 = $tmp744;
            $returnValue668 = $tmp743;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp744));
            return $returnValue668;
        }
        }
        else {
        panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp747.value) {
        {
            int $tmp750;
            {
                org$pandalanguage$pandac$ASTNode* $tmp754 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp753 = $tmp754;
                $tmp752 = $tmp753;
                result751 = $tmp752;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                if (((panda$core$Bit) { result751 == NULL }).value) {
                {
                    $tmp755 = NULL;
                    $returnValue668 = $tmp755;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp755));
                    $tmp750 = 0;
                    goto $l748;
                    $l756:;
                    return $returnValue668;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp758, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp760 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp758, &$s759);
                if (((panda$core$Bit) { !$tmp760.nonnull }).value) {
                {
                    $tmp761 = NULL;
                    $returnValue668 = $tmp761;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                    $tmp750 = 1;
                    goto $l748;
                    $l762:;
                    return $returnValue668;
                }
                }
                $tmp764 = result751;
                $returnValue668 = $tmp764;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                $tmp750 = 2;
                goto $l748;
                $l765:;
                return $returnValue668;
            }
            $l748:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result751));
            result751 = NULL;
            switch ($tmp750) {
                case 1: goto $l762;
                case 2: goto $l765;
                case 0: goto $l756;
            }
            $l767:;
        }
        }
        else {
        panda$core$Bit $tmp768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$363_9666.$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp768.value) {
        {
            int $tmp771;
            {
                panda$core$String* $tmp775 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t664);
                $tmp774 = $tmp775;
                $tmp773 = $tmp774;
                name772 = $tmp773;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
                panda$core$Bit $tmp777 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name772, &$s776);
                if ($tmp777.value) {
                {
                    int $tmp780;
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp781, ((panda$core$Int64) { 103 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp781, &$s782);
                        org$pandalanguage$pandac$ASTNode* $tmp786 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp785 = $tmp786;
                        $tmp784 = $tmp785;
                        expr783 = $tmp784;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp787, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp787, &$s788);
                        org$pandalanguage$pandac$ASTNode* $tmp791 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp791, ((panda$core$Int64) { 2 }), t664.position, expr783);
                        $tmp790 = $tmp791;
                        $tmp789 = $tmp790;
                        $returnValue668 = $tmp789;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp790));
                        $tmp780 = 0;
                        goto $l778;
                        $l792:;
                        $tmp771 = 0;
                        goto $l769;
                        $l793:;
                        return $returnValue668;
                    }
                    $l778:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr783));
                    expr783 = NULL;
                    switch ($tmp780) {
                        case 0: goto $l792;
                    }
                    $l795:;
                }
                }
                else {
                panda$core$Bit $tmp797 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name772, &$s796);
                if ($tmp797.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp800 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp800, ((panda$core$Int64) { 3 }), t664.position);
                    $tmp799 = $tmp800;
                    $tmp798 = $tmp799;
                    $returnValue668 = $tmp798;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp798));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                    $tmp771 = 1;
                    goto $l769;
                    $l801:;
                    return $returnValue668;
                }
                }
                }
                panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s805, name772);
                $tmp804 = $tmp806;
                panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp804, &$s807);
                $tmp803 = $tmp808;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t664, $tmp803);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                $tmp809 = NULL;
                $returnValue668 = $tmp809;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp809));
                $tmp771 = 2;
                goto $l769;
                $l810:;
                return $returnValue668;
            }
            $l769:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name772));
            name772 = NULL;
            switch ($tmp771) {
                case 0: goto $l793;
                case 2: goto $l810;
                case 1: goto $l801;
            }
            $l812:;
        }
        }
        else {
        {
            panda$core$String* $tmp817 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t664);
            $tmp816 = $tmp817;
            panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s815, $tmp816);
            $tmp814 = $tmp818;
            panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s819);
            $tmp813 = $tmp820;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t664, $tmp813);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp816));
            $tmp821 = NULL;
            $returnValue668 = $tmp821;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
            return $returnValue668;
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
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$417_9826 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp827;
    panda$core$String* text829 = NULL;
    panda$core$String* $returnValue831;
    panda$core$String* $tmp832;
    org$pandalanguage$pandac$ASTNode* base836 = NULL;
    panda$core$String* field838 = NULL;
    panda$core$String* result843 = NULL;
    panda$core$String* $tmp844;
    panda$core$String* $tmp845;
    panda$core$String* $tmp847;
    panda$core$String* $tmp848;
    panda$core$String* $tmp849;
    panda$core$String* $tmp850;
    panda$core$String* $tmp851;
    panda$core$String* $tmp855;
    panda$core$String* $tmp860;
    int $tmp825;
    {
        $tmp827 = p_expr;
        $match$417_9826 = $tmp827;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$417_9826->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp828.value) {
        {
            panda$core$String** $tmp830 = ((panda$core$String**) ((char*) $match$417_9826->$data + 16));
            text829 = *$tmp830;
            $tmp832 = text829;
            $returnValue831 = $tmp832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp832));
            $tmp825 = 0;
            goto $l823;
            $l833:;
            return $returnValue831;
        }
        }
        else {
        panda$core$Bit $tmp835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$417_9826->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp835.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp837 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$417_9826->$data + 16));
            base836 = *$tmp837;
            panda$core$String** $tmp839 = ((panda$core$String**) ((char*) $match$417_9826->$data + 24));
            field838 = *$tmp839;
            int $tmp842;
            {
                panda$core$String* $tmp846 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base836);
                $tmp845 = $tmp846;
                $tmp844 = $tmp845;
                result843 = $tmp844;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp844));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
                if (((panda$core$Bit) { result843 != NULL }).value) {
                {
                    {
                        $tmp848 = result843;
                        $tmp847 = $tmp848;
                        panda$core$String* $tmp853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s852, field838);
                        $tmp851 = $tmp853;
                        panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result843, $tmp851);
                        $tmp850 = $tmp854;
                        $tmp849 = $tmp850;
                        result843 = $tmp849;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
                    }
                }
                }
                $tmp855 = result843;
                $returnValue831 = $tmp855;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp855));
                $tmp842 = 0;
                goto $l840;
                $l856:;
                $tmp825 = 1;
                goto $l823;
                $l857:;
                return $returnValue831;
            }
            $l840:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result843));
            result843 = NULL;
            switch ($tmp842) {
                case 0: goto $l856;
            }
            $l859:;
        }
        }
        else {
        {
            $tmp860 = NULL;
            $returnValue831 = $tmp860;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
            $tmp825 = 2;
            goto $l823;
            $l861:;
            return $returnValue831;
        }
        }
        }
    }
    $tmp825 = -1;
    goto $l823;
    $l823:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp827));
    switch ($tmp825) {
        case -1: goto $l863;
        case 1: goto $l857;
        case 0: goto $l833;
        case 2: goto $l861;
    }
    $l863:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name864;
    org$pandalanguage$pandac$parser$Token$Kind $match$437_9866;
    panda$core$String* $returnValue952;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    org$pandalanguage$pandac$parser$Token token958;
    panda$core$String* $tmp961;
    panda$core$String* $tmp964;
    org$pandalanguage$pandac$parser$Token$Kind $tmp968;
    panda$core$String* $tmp971;
    org$pandalanguage$pandac$parser$Token$Kind $tmp973;
    panda$core$String* $tmp975;
    panda$core$String* $tmp978;
    panda$core$String* $tmp981;
    panda$core$String* $tmp982;
    panda$core$String* $tmp984;
    panda$core$String* $tmp989;
    org$pandalanguage$pandac$parser$Token $tmp865 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name864 = $tmp865;
    {
        $match$437_9866 = name864.kind;
        panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp887 = $tmp888.value;
        if ($tmp887) goto $l889;
        panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp887 = $tmp890.value;
        $l889:;
        panda$core$Bit $tmp891 = { $tmp887 };
        bool $tmp886 = $tmp891.value;
        if ($tmp886) goto $l892;
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp886 = $tmp893.value;
        $l892:;
        panda$core$Bit $tmp894 = { $tmp886 };
        bool $tmp885 = $tmp894.value;
        if ($tmp885) goto $l895;
        panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp885 = $tmp896.value;
        $l895:;
        panda$core$Bit $tmp897 = { $tmp885 };
        bool $tmp884 = $tmp897.value;
        if ($tmp884) goto $l898;
        panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp884 = $tmp899.value;
        $l898:;
        panda$core$Bit $tmp900 = { $tmp884 };
        bool $tmp883 = $tmp900.value;
        if ($tmp883) goto $l901;
        panda$core$Bit $tmp902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp883 = $tmp902.value;
        $l901:;
        panda$core$Bit $tmp903 = { $tmp883 };
        bool $tmp882 = $tmp903.value;
        if ($tmp882) goto $l904;
        panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp882 = $tmp905.value;
        $l904:;
        panda$core$Bit $tmp906 = { $tmp882 };
        bool $tmp881 = $tmp906.value;
        if ($tmp881) goto $l907;
        panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp881 = $tmp908.value;
        $l907:;
        panda$core$Bit $tmp909 = { $tmp881 };
        bool $tmp880 = $tmp909.value;
        if ($tmp880) goto $l910;
        panda$core$Bit $tmp911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp880 = $tmp911.value;
        $l910:;
        panda$core$Bit $tmp912 = { $tmp880 };
        bool $tmp879 = $tmp912.value;
        if ($tmp879) goto $l913;
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp879 = $tmp914.value;
        $l913:;
        panda$core$Bit $tmp915 = { $tmp879 };
        bool $tmp878 = $tmp915.value;
        if ($tmp878) goto $l916;
        panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp878 = $tmp917.value;
        $l916:;
        panda$core$Bit $tmp918 = { $tmp878 };
        bool $tmp877 = $tmp918.value;
        if ($tmp877) goto $l919;
        panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp877 = $tmp920.value;
        $l919:;
        panda$core$Bit $tmp921 = { $tmp877 };
        bool $tmp876 = $tmp921.value;
        if ($tmp876) goto $l922;
        panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp876 = $tmp923.value;
        $l922:;
        panda$core$Bit $tmp924 = { $tmp876 };
        bool $tmp875 = $tmp924.value;
        if ($tmp875) goto $l925;
        panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp875 = $tmp926.value;
        $l925:;
        panda$core$Bit $tmp927 = { $tmp875 };
        bool $tmp874 = $tmp927.value;
        if ($tmp874) goto $l928;
        panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp874 = $tmp929.value;
        $l928:;
        panda$core$Bit $tmp930 = { $tmp874 };
        bool $tmp873 = $tmp930.value;
        if ($tmp873) goto $l931;
        panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp873 = $tmp932.value;
        $l931:;
        panda$core$Bit $tmp933 = { $tmp873 };
        bool $tmp872 = $tmp933.value;
        if ($tmp872) goto $l934;
        panda$core$Bit $tmp935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp872 = $tmp935.value;
        $l934:;
        panda$core$Bit $tmp936 = { $tmp872 };
        bool $tmp871 = $tmp936.value;
        if ($tmp871) goto $l937;
        panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp871 = $tmp938.value;
        $l937:;
        panda$core$Bit $tmp939 = { $tmp871 };
        bool $tmp870 = $tmp939.value;
        if ($tmp870) goto $l940;
        panda$core$Bit $tmp941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp870 = $tmp941.value;
        $l940:;
        panda$core$Bit $tmp942 = { $tmp870 };
        bool $tmp869 = $tmp942.value;
        if ($tmp869) goto $l943;
        panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp869 = $tmp944.value;
        $l943:;
        panda$core$Bit $tmp945 = { $tmp869 };
        bool $tmp868 = $tmp945.value;
        if ($tmp868) goto $l946;
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp868 = $tmp947.value;
        $l946:;
        panda$core$Bit $tmp948 = { $tmp868 };
        bool $tmp867 = $tmp948.value;
        if ($tmp867) goto $l949;
        panda$core$Bit $tmp950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp867 = $tmp950.value;
        $l949:;
        panda$core$Bit $tmp951 = { $tmp867 };
        if ($tmp951.value) {
        {
            panda$core$String* $tmp955 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name864);
            $tmp954 = $tmp955;
            $tmp953 = $tmp954;
            $returnValue952 = $tmp953;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
            return $returnValue952;
        }
        }
        else {
        panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp957.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp959 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token958 = $tmp959;
            panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token958.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp960.value) {
            {
                $tmp961 = &$s962;
                $returnValue952 = $tmp961;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp961));
                return $returnValue952;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token958);
                $tmp964 = &$s965;
                $returnValue952 = $tmp964;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
                return $returnValue952;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$437_9866.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp967.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp968, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp970 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp968, &$s969);
            if (((panda$core$Bit) { !$tmp970.nonnull }).value) {
            {
                $tmp971 = NULL;
                $returnValue952 = $tmp971;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp971));
                return $returnValue952;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp973, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp974 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp973);
            if (((panda$core$Bit) { $tmp974.nonnull }).value) {
            {
                $tmp975 = &$s976;
                $returnValue952 = $tmp975;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp975));
                return $returnValue952;
            }
            }
            $tmp978 = &$s979;
            $returnValue952 = $tmp978;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp978));
            return $returnValue952;
        }
        }
        else {
        {
            panda$core$String* $tmp985 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name864);
            $tmp984 = $tmp985;
            panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s983, $tmp984);
            $tmp982 = $tmp986;
            panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp982, &$s987);
            $tmp981 = $tmp988;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name864, $tmp981);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp982));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp984));
            $tmp989 = NULL;
            $returnValue952 = $tmp989;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp989));
            return $returnValue952;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue991;
    org$pandalanguage$pandac$ASTNode* $tmp992;
    org$pandalanguage$pandac$ASTNode* $tmp993;
    org$pandalanguage$pandac$ASTNode* $tmp994 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    $tmp993 = $tmp994;
    $tmp992 = $tmp993;
    $returnValue991 = $tmp992;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp993));
    return $returnValue991;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start999;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1000;
    org$pandalanguage$pandac$ASTNode* $returnValue1003;
    org$pandalanguage$pandac$ASTNode* $tmp1004;
    panda$core$MutableString* name1007 = NULL;
    panda$core$MutableString* $tmp1008;
    panda$core$MutableString* $tmp1009;
    panda$core$String* $tmp1011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1016;
    org$pandalanguage$pandac$parser$Token$nullable id1018;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1019;
    org$pandalanguage$pandac$ASTNode* $tmp1022;
    panda$core$Char8 $tmp1025;
    panda$core$String* $tmp1026;
    panda$core$String* finalName1028 = NULL;
    panda$core$String* $tmp1029;
    panda$core$String* $tmp1030;
    org$pandalanguage$pandac$ASTNode* result1032 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1033;
    org$pandalanguage$pandac$ASTNode* $tmp1034;
    panda$collections$Array* children1041 = NULL;
    panda$collections$Array* $tmp1042;
    panda$collections$Array* $tmp1043;
    org$pandalanguage$pandac$ASTNode* t1045 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1046;
    org$pandalanguage$pandac$ASTNode* $tmp1047;
    org$pandalanguage$pandac$ASTNode* $tmp1049;
    org$pandalanguage$pandac$ASTNode* $tmp1053;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1060;
    org$pandalanguage$pandac$ASTNode* $tmp1062;
    org$pandalanguage$pandac$ASTNode* $tmp1063;
    org$pandalanguage$pandac$ASTNode* $tmp1064;
    org$pandalanguage$pandac$ASTNode* $tmp1066;
    org$pandalanguage$pandac$ASTNode* $tmp1070;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1074;
    org$pandalanguage$pandac$ASTNode* $tmp1077;
    org$pandalanguage$pandac$ASTNode* $tmp1081;
    org$pandalanguage$pandac$ASTNode* $tmp1085;
    org$pandalanguage$pandac$ASTNode* $tmp1086;
    org$pandalanguage$pandac$ASTNode* $tmp1087;
    panda$collections$ImmutableArray* $tmp1089;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1092;
    org$pandalanguage$pandac$ASTNode* $tmp1094;
    org$pandalanguage$pandac$ASTNode* $tmp1095;
    org$pandalanguage$pandac$ASTNode* $tmp1096;
    org$pandalanguage$pandac$ASTNode* $tmp1098;
    int $tmp998;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1000, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1002 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1000, &$s1001);
        start999 = $tmp1002;
        if (((panda$core$Bit) { !start999.nonnull }).value) {
        {
            $tmp1004 = NULL;
            $returnValue1003 = $tmp1004;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1004));
            $tmp998 = 0;
            goto $l996;
            $l1005:;
            return $returnValue1003;
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
                $tmp1022 = NULL;
                $returnValue1003 = $tmp1022;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
                $tmp998 = 1;
                goto $l996;
                $l1023:;
                return $returnValue1003;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1025, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1007, $tmp1025);
            panda$core$String* $tmp1027 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1018.value));
            $tmp1026 = $tmp1027;
            panda$core$MutableString$append$panda$core$String(name1007, $tmp1026);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
        }
        goto $l1013;
        $l1014:;
        panda$core$String* $tmp1031 = panda$core$MutableString$finish$R$panda$core$String(name1007);
        $tmp1030 = $tmp1031;
        $tmp1029 = $tmp1030;
        finalName1028 = $tmp1029;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
        org$pandalanguage$pandac$ASTNode* $tmp1035 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1035, ((panda$core$Int64) { 38 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, finalName1028);
        $tmp1034 = $tmp1035;
        $tmp1033 = $tmp1034;
        result1032 = $tmp1033;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
        org$pandalanguage$pandac$parser$Token $tmp1036 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1036.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1037.value) {
        {
            int $tmp1040;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1044 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1044);
                $tmp1043 = $tmp1044;
                $tmp1042 = $tmp1043;
                children1041 = $tmp1042;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1042));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                org$pandalanguage$pandac$ASTNode* $tmp1048 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1047 = $tmp1048;
                $tmp1046 = $tmp1047;
                t1045 = $tmp1046;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
                if (((panda$core$Bit) { t1045 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1049 = result1032;
                        $returnValue1003 = $tmp1049;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
                        $tmp1040 = 0;
                        goto $l1038;
                        $l1050:;
                        $tmp998 = 2;
                        goto $l996;
                        $l1051:;
                        return $returnValue1003;
                    }
                    }
                    $tmp1053 = NULL;
                    $returnValue1003 = $tmp1053;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
                    $tmp1040 = 1;
                    goto $l1038;
                    $l1054:;
                    $tmp998 = 3;
                    goto $l996;
                    $l1055:;
                    return $returnValue1003;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1041, ((panda$core$Object*) t1045));
                $l1057:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1060, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1061 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1060);
                bool $tmp1059 = ((panda$core$Bit) { $tmp1061.nonnull }).value;
                if (!$tmp1059) goto $l1058;
                {
                    {
                        $tmp1062 = t1045;
                        org$pandalanguage$pandac$ASTNode* $tmp1065 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1064 = $tmp1065;
                        $tmp1063 = $tmp1064;
                        t1045 = $tmp1063;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1063));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1064));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
                    }
                    if (((panda$core$Bit) { t1045 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1066 = result1032;
                            $returnValue1003 = $tmp1066;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1066));
                            $tmp1040 = 2;
                            goto $l1038;
                            $l1067:;
                            $tmp998 = 4;
                            goto $l996;
                            $l1068:;
                            return $returnValue1003;
                        }
                        }
                        $tmp1070 = NULL;
                        $returnValue1003 = $tmp1070;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
                        $tmp1040 = 3;
                        goto $l1038;
                        $l1071:;
                        $tmp998 = 5;
                        goto $l996;
                        $l1072:;
                        return $returnValue1003;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1041, ((panda$core$Object*) t1045));
                }
                goto $l1057;
                $l1058:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1074, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1076 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1074, &$s1075);
                if (((panda$core$Bit) { !$tmp1076.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1077 = result1032;
                        $returnValue1003 = $tmp1077;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
                        $tmp1040 = 4;
                        goto $l1038;
                        $l1078:;
                        $tmp998 = 6;
                        goto $l996;
                        $l1079:;
                        return $returnValue1003;
                    }
                    }
                    $tmp1081 = NULL;
                    $returnValue1003 = $tmp1081;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1081));
                    $tmp1040 = 5;
                    goto $l1038;
                    $l1082:;
                    $tmp998 = 7;
                    goto $l996;
                    $l1083:;
                    return $returnValue1003;
                }
                }
                {
                    $tmp1085 = result1032;
                    org$pandalanguage$pandac$ASTNode* $tmp1088 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1090 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1041);
                    $tmp1089 = $tmp1090;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1088, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, finalName1028, $tmp1089);
                    $tmp1087 = $tmp1088;
                    $tmp1086 = $tmp1087;
                    result1032 = $tmp1086;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1087));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1040 = -1;
            goto $l1038;
            $l1038:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1041));
            children1041 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1045));
            t1045 = NULL;
            switch ($tmp1040) {
                case 0: goto $l1050;
                case -1: goto $l1091;
                case 1: goto $l1054;
                case 3: goto $l1071;
                case 2: goto $l1067;
                case 4: goto $l1078;
                case 5: goto $l1082;
            }
            $l1091:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1092, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1093 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1092);
        if (((panda$core$Bit) { $tmp1093.nonnull }).value) {
        {
            {
                $tmp1094 = result1032;
                org$pandalanguage$pandac$ASTNode* $tmp1097 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1097, ((panda$core$Int64) { 28 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, result1032);
                $tmp1096 = $tmp1097;
                $tmp1095 = $tmp1096;
                result1032 = $tmp1095;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1094));
            }
        }
        }
        $tmp1098 = result1032;
        $returnValue1003 = $tmp1098;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
        $tmp998 = 8;
        goto $l996;
        $l1099:;
        return $returnValue1003;
    }
    $l996:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1007));
    name1007 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1028));
    finalName1028 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1032));
    result1032 = NULL;
    switch ($tmp998) {
        case 8: goto $l1099;
        case 2: goto $l1051;
        case 1: goto $l1023;
        case 5: goto $l1072;
        case 3: goto $l1055;
        case 7: goto $l1083;
        case 6: goto $l1079;
        case 4: goto $l1068;
        case 0: goto $l1005;
    }
    $l1101:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1105 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1106;
    org$pandalanguage$pandac$ASTNode* $tmp1107;
    org$pandalanguage$pandac$ASTNode* $returnValue1109;
    org$pandalanguage$pandac$ASTNode* $tmp1110;
    org$pandalanguage$pandac$parser$Token token1115;
    org$pandalanguage$pandac$parser$Token$Kind $match$553_131117;
    panda$core$Object* $tmp1122;
    panda$collections$Array* args1124 = NULL;
    panda$collections$Array* $tmp1125;
    panda$collections$Array* $tmp1126;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1128;
    org$pandalanguage$pandac$ASTNode* expr1133 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1134;
    org$pandalanguage$pandac$ASTNode* $tmp1135;
    panda$core$Object* $tmp1137;
    org$pandalanguage$pandac$ASTNode* $tmp1139;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1147;
    org$pandalanguage$pandac$ASTNode* $tmp1149;
    org$pandalanguage$pandac$ASTNode* $tmp1150;
    org$pandalanguage$pandac$ASTNode* $tmp1151;
    panda$core$Object* $tmp1153;
    org$pandalanguage$pandac$ASTNode* $tmp1155;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1160;
    panda$core$Object* $tmp1163;
    org$pandalanguage$pandac$ASTNode* $tmp1165;
    panda$core$Object* $tmp1171;
    org$pandalanguage$pandac$ASTNode* $tmp1173;
    org$pandalanguage$pandac$ASTNode* $tmp1174;
    org$pandalanguage$pandac$ASTNode* $tmp1175;
    panda$collections$ImmutableArray* $tmp1177;
    org$pandalanguage$pandac$ASTNode* arg1184 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1185;
    org$pandalanguage$pandac$ASTNode* $tmp1186;
    org$pandalanguage$pandac$ASTNode* $tmp1188;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1192;
    org$pandalanguage$pandac$ASTNode* $tmp1195;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    org$pandalanguage$pandac$ASTNode* $tmp1200;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1203;
    panda$core$String* name1209 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1210;
    panda$core$String* $tmp1212;
    panda$core$String* $tmp1213;
    panda$core$String* $tmp1215;
    panda$core$String* $tmp1216;
    panda$core$String* $tmp1217;
    org$pandalanguage$pandac$ASTNode* $tmp1219;
    org$pandalanguage$pandac$ASTNode* $tmp1223;
    org$pandalanguage$pandac$ASTNode* $tmp1224;
    org$pandalanguage$pandac$ASTNode* $tmp1225;
    org$pandalanguage$pandac$ASTNode* target1232 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1233;
    org$pandalanguage$pandac$ASTNode* $tmp1234;
    org$pandalanguage$pandac$ASTNode* $tmp1236;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    org$pandalanguage$pandac$ASTNode* $tmp1241;
    org$pandalanguage$pandac$ASTNode* $tmp1242;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1244;
    panda$core$String* name1250 = NULL;
    panda$core$String* $tmp1251;
    panda$core$String* $tmp1252;
    panda$collections$Array* types1257 = NULL;
    panda$collections$Array* $tmp1258;
    panda$collections$Array* $tmp1259;
    org$pandalanguage$pandac$ASTNode* t1261 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1262;
    org$pandalanguage$pandac$ASTNode* $tmp1263;
    org$pandalanguage$pandac$ASTNode* $tmp1265;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1273;
    org$pandalanguage$pandac$ASTNode* $tmp1275;
    org$pandalanguage$pandac$ASTNode* $tmp1276;
    org$pandalanguage$pandac$ASTNode* $tmp1277;
    org$pandalanguage$pandac$ASTNode* $tmp1279;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1284;
    org$pandalanguage$pandac$ASTNode* $tmp1287;
    panda$core$Bit shouldAccept1292;
    panda$core$Object* $tmp1293;
    org$pandalanguage$pandac$parser$Token$Kind $match$658_291295;
    org$pandalanguage$pandac$ASTNode* $tmp1310;
    org$pandalanguage$pandac$ASTNode* $tmp1311;
    org$pandalanguage$pandac$ASTNode* $tmp1312;
    panda$collections$ImmutableArray* $tmp1316;
    org$pandalanguage$pandac$ASTNode* $tmp1320;
    org$pandalanguage$pandac$ASTNode* $tmp1326;
    org$pandalanguage$pandac$ASTNode* $tmp1331;
    int $tmp1104;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1108 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1107 = $tmp1108;
        $tmp1106 = $tmp1107;
        result1105 = $tmp1106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1107));
        if (((panda$core$Bit) { result1105 == NULL }).value) {
        {
            $tmp1110 = NULL;
            $returnValue1109 = $tmp1110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1110));
            $tmp1104 = 0;
            goto $l1102;
            $l1111:;
            return $returnValue1109;
        }
        }
        $l1113:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1116 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1115 = $tmp1116;
            {
                $match$553_131117 = token1115.kind;
                panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553_131117.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1118.value) {
                {
                    int $tmp1121;
                    {
                        panda$core$Bit$wrapper* $tmp1123;
                        $tmp1123 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1123->value = ((panda$core$Bit) { true });
                        $tmp1122 = ((panda$core$Object*) $tmp1123);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1122);
                        panda$core$Panda$unref$panda$core$Object($tmp1122);
                        panda$collections$Array* $tmp1127 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1127);
                        $tmp1126 = $tmp1127;
                        $tmp1125 = $tmp1126;
                        args1124 = $tmp1125;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1128, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1129 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1128);
                        if (((panda$core$Bit) { !$tmp1129.nonnull }).value) {
                        {
                            int $tmp1132;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1136 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1135 = $tmp1136;
                                $tmp1134 = $tmp1135;
                                expr1133 = $tmp1134;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1134));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1135));
                                if (((panda$core$Bit) { expr1133 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1138 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1137 = $tmp1138;
                                    panda$core$Panda$unref$panda$core$Object($tmp1137);
                                    $tmp1139 = NULL;
                                    $returnValue1109 = $tmp1139;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                                    $tmp1132 = 0;
                                    goto $l1130;
                                    $l1140:;
                                    $tmp1121 = 0;
                                    goto $l1119;
                                    $l1141:;
                                    $tmp1104 = 1;
                                    goto $l1102;
                                    $l1142:;
                                    return $returnValue1109;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1124, ((panda$core$Object*) expr1133));
                                $l1144:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1147, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1148 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1147);
                                bool $tmp1146 = ((panda$core$Bit) { $tmp1148.nonnull }).value;
                                if (!$tmp1146) goto $l1145;
                                {
                                    {
                                        $tmp1149 = expr1133;
                                        org$pandalanguage$pandac$ASTNode* $tmp1152 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1151 = $tmp1152;
                                        $tmp1150 = $tmp1151;
                                        expr1133 = $tmp1150;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1150));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1151));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1149));
                                    }
                                    if (((panda$core$Bit) { expr1133 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1154 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1153 = $tmp1154;
                                        panda$core$Panda$unref$panda$core$Object($tmp1153);
                                        $tmp1155 = NULL;
                                        $returnValue1109 = $tmp1155;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1155));
                                        $tmp1132 = 1;
                                        goto $l1130;
                                        $l1156:;
                                        $tmp1121 = 1;
                                        goto $l1119;
                                        $l1157:;
                                        $tmp1104 = 2;
                                        goto $l1102;
                                        $l1158:;
                                        return $returnValue1109;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1124, ((panda$core$Object*) expr1133));
                                }
                                goto $l1144;
                                $l1145:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1160, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1162 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1160, &$s1161);
                                if (((panda$core$Bit) { !$tmp1162.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1164 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1163 = $tmp1164;
                                    panda$core$Panda$unref$panda$core$Object($tmp1163);
                                    $tmp1165 = NULL;
                                    $returnValue1109 = $tmp1165;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1165));
                                    $tmp1132 = 2;
                                    goto $l1130;
                                    $l1166:;
                                    $tmp1121 = 2;
                                    goto $l1119;
                                    $l1167:;
                                    $tmp1104 = 3;
                                    goto $l1102;
                                    $l1168:;
                                    return $returnValue1109;
                                }
                                }
                            }
                            $tmp1132 = -1;
                            goto $l1130;
                            $l1130:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1133));
                            expr1133 = NULL;
                            switch ($tmp1132) {
                                case 2: goto $l1166;
                                case 0: goto $l1140;
                                case -1: goto $l1170;
                                case 1: goto $l1156;
                            }
                            $l1170:;
                        }
                        }
                        panda$core$Object* $tmp1172 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1171 = $tmp1172;
                        panda$core$Panda$unref$panda$core$Object($tmp1171);
                        {
                            $tmp1173 = result1105;
                            org$pandalanguage$pandac$ASTNode* $tmp1176 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1178 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1124);
                            $tmp1177 = $tmp1178;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1176, ((panda$core$Int64) { 8 }), token1115.position, result1105, $tmp1177);
                            $tmp1175 = $tmp1176;
                            $tmp1174 = $tmp1175;
                            result1105 = $tmp1174;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1174));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1177));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1173));
                        }
                    }
                    $tmp1121 = -1;
                    goto $l1119;
                    $l1119:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1124));
                    args1124 = NULL;
                    switch ($tmp1121) {
                        case 0: goto $l1141;
                        case 2: goto $l1167;
                        case -1: goto $l1179;
                        case 1: goto $l1157;
                    }
                    $l1179:;
                }
                }
                else {
                panda$core$Bit $tmp1180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553_131117.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1180.value) {
                {
                    int $tmp1183;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1187 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1186 = $tmp1187;
                        $tmp1185 = $tmp1186;
                        arg1184 = $tmp1185;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1186));
                        if (((panda$core$Bit) { arg1184 == NULL }).value) {
                        {
                            $tmp1188 = NULL;
                            $returnValue1109 = $tmp1188;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
                            $tmp1183 = 0;
                            goto $l1181;
                            $l1189:;
                            $tmp1104 = 4;
                            goto $l1102;
                            $l1190:;
                            return $returnValue1109;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1192, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1194 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1192, &$s1193);
                        if (((panda$core$Bit) { !$tmp1194.nonnull }).value) {
                        {
                            $tmp1195 = NULL;
                            $returnValue1109 = $tmp1195;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
                            $tmp1183 = 1;
                            goto $l1181;
                            $l1196:;
                            $tmp1104 = 5;
                            goto $l1102;
                            $l1197:;
                            return $returnValue1109;
                        }
                        }
                        {
                            $tmp1199 = result1105;
                            org$pandalanguage$pandac$ASTNode* $tmp1202 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1203, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1202, ((panda$core$Int64) { 4 }), token1115.position, result1105, $tmp1203, arg1184);
                            $tmp1201 = $tmp1202;
                            $tmp1200 = $tmp1201;
                            result1105 = $tmp1200;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1200));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1199));
                        }
                    }
                    $tmp1183 = -1;
                    goto $l1181;
                    $l1181:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1184));
                    arg1184 = NULL;
                    switch ($tmp1183) {
                        case 1: goto $l1196;
                        case 0: goto $l1189;
                        case -1: goto $l1204;
                    }
                    $l1204:;
                }
                }
                else {
                panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553_131117.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1205.value) {
                {
                    int $tmp1208;
                    {
                        memset(&name1209, 0, sizeof(name1209));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1210, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1211 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1210);
                        if (((panda$core$Bit) { $tmp1211.nonnull }).value) {
                        {
                            {
                                $tmp1212 = name1209;
                                $tmp1213 = &$s1214;
                                name1209 = $tmp1213;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1213));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1212));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1215 = name1209;
                                panda$core$String* $tmp1218 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1217 = $tmp1218;
                                $tmp1216 = $tmp1217;
                                name1209 = $tmp1216;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
                            }
                            if (((panda$core$Bit) { name1209 == NULL }).value) {
                            {
                                $tmp1219 = NULL;
                                $returnValue1109 = $tmp1219;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1219));
                                $tmp1208 = 0;
                                goto $l1206;
                                $l1220:;
                                $tmp1104 = 6;
                                goto $l1102;
                                $l1221:;
                                return $returnValue1109;
                            }
                            }
                        }
                        }
                        {
                            $tmp1223 = result1105;
                            org$pandalanguage$pandac$ASTNode* $tmp1226 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1226, ((panda$core$Int64) { 15 }), token1115.position, result1105, name1209);
                            $tmp1225 = $tmp1226;
                            $tmp1224 = $tmp1225;
                            result1105 = $tmp1224;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1225));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1223));
                        }
                    }
                    $tmp1208 = -1;
                    goto $l1206;
                    $l1206:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1209));
                    switch ($tmp1208) {
                        case -1: goto $l1227;
                        case 0: goto $l1220;
                    }
                    $l1227:;
                }
                }
                else {
                panda$core$Bit $tmp1228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553_131117.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1228.value) {
                {
                    int $tmp1231;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1235 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1234 = $tmp1235;
                        $tmp1233 = $tmp1234;
                        target1232 = $tmp1233;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1233));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
                        if (((panda$core$Bit) { target1232 == NULL }).value) {
                        {
                            $tmp1236 = NULL;
                            $returnValue1109 = $tmp1236;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
                            $tmp1231 = 0;
                            goto $l1229;
                            $l1237:;
                            $tmp1104 = 7;
                            goto $l1102;
                            $l1238:;
                            return $returnValue1109;
                        }
                        }
                        {
                            $tmp1240 = result1105;
                            org$pandalanguage$pandac$ASTNode* $tmp1243 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1244, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1243, ((panda$core$Int64) { 4 }), token1115.position, result1105, $tmp1244, target1232);
                            $tmp1242 = $tmp1243;
                            $tmp1241 = $tmp1242;
                            result1105 = $tmp1241;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
                        }
                    }
                    $tmp1231 = -1;
                    goto $l1229;
                    $l1229:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1232));
                    target1232 = NULL;
                    switch ($tmp1231) {
                        case -1: goto $l1245;
                        case 0: goto $l1237;
                    }
                    $l1245:;
                }
                }
                else {
                panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$553_131117.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1246.value) {
                {
                    int $tmp1249;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1115);
                        panda$core$String* $tmp1253 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1105);
                        $tmp1252 = $tmp1253;
                        $tmp1251 = $tmp1252;
                        name1250 = $tmp1251;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1252));
                        if (((panda$core$Bit) { name1250 != NULL }).value) {
                        {
                            int $tmp1256;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1260 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1260);
                                $tmp1259 = $tmp1260;
                                $tmp1258 = $tmp1259;
                                types1257 = $tmp1258;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                                org$pandalanguage$pandac$ASTNode* $tmp1264 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1263 = $tmp1264;
                                $tmp1262 = $tmp1263;
                                t1261 = $tmp1262;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1262));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
                                if (((panda$core$Bit) { t1261 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1265 = result1105;
                                    $returnValue1109 = $tmp1265;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1265));
                                    $tmp1256 = 0;
                                    goto $l1254;
                                    $l1266:;
                                    $tmp1249 = 0;
                                    goto $l1247;
                                    $l1267:;
                                    $tmp1104 = 8;
                                    goto $l1102;
                                    $l1268:;
                                    return $returnValue1109;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1257, ((panda$core$Object*) t1261));
                                $l1270:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1273, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1274 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1273);
                                bool $tmp1272 = ((panda$core$Bit) { $tmp1274.nonnull }).value;
                                if (!$tmp1272) goto $l1271;
                                {
                                    {
                                        $tmp1275 = t1261;
                                        org$pandalanguage$pandac$ASTNode* $tmp1278 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1277 = $tmp1278;
                                        $tmp1276 = $tmp1277;
                                        t1261 = $tmp1276;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1277));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
                                    }
                                    if (((panda$core$Bit) { t1261 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1279 = result1105;
                                        $returnValue1109 = $tmp1279;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                                        $tmp1256 = 1;
                                        goto $l1254;
                                        $l1280:;
                                        $tmp1249 = 1;
                                        goto $l1247;
                                        $l1281:;
                                        $tmp1104 = 9;
                                        goto $l1102;
                                        $l1282:;
                                        return $returnValue1109;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1257, ((panda$core$Object*) t1261));
                                }
                                goto $l1270;
                                $l1271:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1284, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1286 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1284, &$s1285);
                                if (((panda$core$Bit) { !$tmp1286.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1287 = result1105;
                                    $returnValue1109 = $tmp1287;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1287));
                                    $tmp1256 = 2;
                                    goto $l1254;
                                    $l1288:;
                                    $tmp1249 = 2;
                                    goto $l1247;
                                    $l1289:;
                                    $tmp1104 = 10;
                                    goto $l1102;
                                    $l1290:;
                                    return $returnValue1109;
                                }
                                }
                                memset(&shouldAccept1292, 0, sizeof(shouldAccept1292));
                                panda$core$Object* $tmp1294 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1293 = $tmp1294;
                                panda$core$Panda$unref$panda$core$Object($tmp1293);
                                if (((panda$core$Bit$wrapper*) $tmp1293)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1296 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$658_291295 = $tmp1296.kind;
                                        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$658_291295.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1299 = $tmp1300.value;
                                        if ($tmp1299) goto $l1301;
                                        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$658_291295.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1299 = $tmp1302.value;
                                        $l1301:;
                                        panda$core$Bit $tmp1303 = { $tmp1299 };
                                        bool $tmp1298 = $tmp1303.value;
                                        if ($tmp1298) goto $l1304;
                                        panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$658_291295.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1298 = $tmp1305.value;
                                        $l1304:;
                                        panda$core$Bit $tmp1306 = { $tmp1298 };
                                        bool $tmp1297 = $tmp1306.value;
                                        if ($tmp1297) goto $l1307;
                                        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$658_291295.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1297 = $tmp1308.value;
                                        $l1307:;
                                        panda$core$Bit $tmp1309 = { $tmp1297 };
                                        if ($tmp1309.value) {
                                        {
                                            shouldAccept1292 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1292 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1292 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1292.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1310 = result1105;
                                        org$pandalanguage$pandac$ASTNode* $tmp1313 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1315 = (($fn1314) result1105->$class->vtable[2])(result1105);
                                        panda$collections$ImmutableArray* $tmp1317 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1257);
                                        $tmp1316 = $tmp1317;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1313, ((panda$core$Int64) { 19 }), $tmp1315, name1250, $tmp1316);
                                        $tmp1312 = $tmp1313;
                                        $tmp1311 = $tmp1312;
                                        result1105 = $tmp1311;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
                                    }
                                    $tmp1256 = 3;
                                    goto $l1254;
                                    $l1318:;
                                    $tmp1249 = 3;
                                    goto $l1247;
                                    $l1319:;
                                    goto $l1113;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1320 = result1105;
                                    $returnValue1109 = $tmp1320;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1320));
                                    $tmp1256 = 4;
                                    goto $l1254;
                                    $l1321:;
                                    $tmp1249 = 4;
                                    goto $l1247;
                                    $l1322:;
                                    $tmp1104 = 11;
                                    goto $l1102;
                                    $l1323:;
                                    return $returnValue1109;
                                }
                                }
                            }
                            $tmp1256 = -1;
                            goto $l1254;
                            $l1254:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1257));
                            types1257 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1261));
                            t1261 = NULL;
                            switch ($tmp1256) {
                                case 1: goto $l1280;
                                case 2: goto $l1288;
                                case 4: goto $l1321;
                                case 0: goto $l1266;
                                case -1: goto $l1325;
                                case 3: goto $l1318;
                            }
                            $l1325:;
                        }
                        }
                        $tmp1326 = result1105;
                        $returnValue1109 = $tmp1326;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
                        $tmp1249 = 5;
                        goto $l1247;
                        $l1327:;
                        $tmp1104 = 12;
                        goto $l1102;
                        $l1328:;
                        return $returnValue1109;
                    }
                    $l1247:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1250));
                    name1250 = NULL;
                    switch ($tmp1249) {
                        case 1: goto $l1281;
                        case 5: goto $l1327;
                        case 3: goto $l1319;
                        case 0: goto $l1267;
                        case 2: goto $l1289;
                        case 4: goto $l1322;
                    }
                    $l1330:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1115);
                    $tmp1331 = result1105;
                    $returnValue1109 = $tmp1331;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
                    $tmp1104 = 13;
                    goto $l1102;
                    $l1332:;
                    return $returnValue1109;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1114:;
    }
    $tmp1104 = -1;
    goto $l1102;
    $l1102:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1105));
    result1105 = NULL;
    switch ($tmp1104) {
        case 6: goto $l1221;
        case -1: goto $l1334;
        case 7: goto $l1238;
        case 3: goto $l1168;
        case 11: goto $l1323;
        case 1: goto $l1142;
        case 2: goto $l1158;
        case 5: goto $l1197;
        case 12: goto $l1328;
        case 9: goto $l1282;
        case 4: goto $l1190;
        case 10: goto $l1290;
        case 13: goto $l1332;
        case 8: goto $l1268;
        case 0: goto $l1111;
    }
    $l1334:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1338 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    org$pandalanguage$pandac$ASTNode* $tmp1340;
    org$pandalanguage$pandac$ASTNode* $returnValue1342;
    org$pandalanguage$pandac$ASTNode* $tmp1343;
    org$pandalanguage$pandac$parser$Token$nullable op1351;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1352;
    org$pandalanguage$pandac$ASTNode* next1355 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1356;
    org$pandalanguage$pandac$ASTNode* $tmp1357;
    org$pandalanguage$pandac$ASTNode* $tmp1359;
    org$pandalanguage$pandac$ASTNode* $tmp1363;
    org$pandalanguage$pandac$ASTNode* $tmp1364;
    org$pandalanguage$pandac$ASTNode* $tmp1365;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    int $tmp1337;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1341 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1340 = $tmp1341;
        $tmp1339 = $tmp1340;
        result1338 = $tmp1339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
        if (((panda$core$Bit) { result1338 == NULL }).value) {
        {
            $tmp1343 = NULL;
            $returnValue1342 = $tmp1343;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1343));
            $tmp1337 = 0;
            goto $l1335;
            $l1344:;
            return $returnValue1342;
        }
        }
        $l1346:;
        while (true) {
        {
            int $tmp1350;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1352, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1353 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1352);
                op1351 = $tmp1353;
                if (((panda$core$Bit) { !op1351.nonnull }).value) {
                {
                    $tmp1350 = 0;
                    goto $l1348;
                    $l1354:;
                    goto $l1347;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1358 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1357 = $tmp1358;
                $tmp1356 = $tmp1357;
                next1355 = $tmp1356;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1357));
                if (((panda$core$Bit) { next1355 == NULL }).value) {
                {
                    $tmp1359 = NULL;
                    $returnValue1342 = $tmp1359;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
                    $tmp1350 = 1;
                    goto $l1348;
                    $l1360:;
                    $tmp1337 = 1;
                    goto $l1335;
                    $l1361:;
                    return $returnValue1342;
                }
                }
                {
                    $tmp1363 = result1338;
                    org$pandalanguage$pandac$ASTNode* $tmp1366 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1366, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1351.value).position, result1338, ((org$pandalanguage$pandac$parser$Token) op1351.value).kind, next1355);
                    $tmp1365 = $tmp1366;
                    $tmp1364 = $tmp1365;
                    result1338 = $tmp1364;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1363));
                }
            }
            $tmp1350 = -1;
            goto $l1348;
            $l1348:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1355));
            next1355 = NULL;
            switch ($tmp1350) {
                case 0: goto $l1354;
                case -1: goto $l1367;
                case 1: goto $l1360;
            }
            $l1367:;
        }
        }
        $l1347:;
        $tmp1368 = result1338;
        $returnValue1342 = $tmp1368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1368));
        $tmp1337 = 2;
        goto $l1335;
        $l1369:;
        return $returnValue1342;
    }
    $l1335:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1338));
    result1338 = NULL;
    switch ($tmp1337) {
        case 2: goto $l1369;
        case 1: goto $l1361;
        case 0: goto $l1344;
    }
    $l1371:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1372;
    org$pandalanguage$pandac$parser$Token$Kind $match$714_91374;
    org$pandalanguage$pandac$ASTNode* base1387 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1388;
    org$pandalanguage$pandac$ASTNode* $tmp1389;
    org$pandalanguage$pandac$ASTNode* $returnValue1391;
    org$pandalanguage$pandac$ASTNode* $tmp1392;
    org$pandalanguage$pandac$ASTNode* $tmp1395;
    org$pandalanguage$pandac$ASTNode* $tmp1396;
    org$pandalanguage$pandac$ASTNode* $tmp1401;
    org$pandalanguage$pandac$ASTNode* $tmp1402;
    org$pandalanguage$pandac$parser$Token $tmp1373 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1372 = $tmp1373;
    {
        $match$714_91374 = op1372.kind;
        panda$core$Bit $tmp1377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$714_91374.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1376 = $tmp1377.value;
        if ($tmp1376) goto $l1378;
        panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$714_91374.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1376 = $tmp1379.value;
        $l1378:;
        panda$core$Bit $tmp1380 = { $tmp1376 };
        bool $tmp1375 = $tmp1380.value;
        if ($tmp1375) goto $l1381;
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$714_91374.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1375 = $tmp1382.value;
        $l1381:;
        panda$core$Bit $tmp1383 = { $tmp1375 };
        if ($tmp1383.value) {
        {
            int $tmp1386;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1390 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1389 = $tmp1390;
                $tmp1388 = $tmp1389;
                base1387 = $tmp1388;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1388));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                if (((panda$core$Bit) { base1387 == NULL }).value) {
                {
                    $tmp1392 = NULL;
                    $returnValue1391 = $tmp1392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
                    $tmp1386 = 0;
                    goto $l1384;
                    $l1393:;
                    return $returnValue1391;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1397 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1397, ((panda$core$Int64) { 31 }), op1372.position, op1372.kind, base1387);
                $tmp1396 = $tmp1397;
                $tmp1395 = $tmp1396;
                $returnValue1391 = $tmp1395;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
                $tmp1386 = 1;
                goto $l1384;
                $l1398:;
                return $returnValue1391;
            }
            $l1384:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1387));
            base1387 = NULL;
            switch ($tmp1386) {
                case 0: goto $l1393;
                case 1: goto $l1398;
            }
            $l1400:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1372);
            org$pandalanguage$pandac$ASTNode* $tmp1403 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1402 = $tmp1403;
            $tmp1401 = $tmp1402;
            $returnValue1391 = $tmp1401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
            return $returnValue1391;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1408 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1409;
    org$pandalanguage$pandac$ASTNode* $tmp1410;
    org$pandalanguage$pandac$ASTNode* $returnValue1412;
    org$pandalanguage$pandac$ASTNode* $tmp1413;
    org$pandalanguage$pandac$parser$Token op1418;
    org$pandalanguage$pandac$parser$Token$Kind $match$740_131420;
    org$pandalanguage$pandac$ASTNode* next1449 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1450;
    org$pandalanguage$pandac$ASTNode* $tmp1451;
    org$pandalanguage$pandac$ASTNode* $tmp1453;
    org$pandalanguage$pandac$ASTNode* $tmp1457;
    org$pandalanguage$pandac$ASTNode* $tmp1458;
    org$pandalanguage$pandac$ASTNode* $tmp1459;
    org$pandalanguage$pandac$parser$Token nextToken1463;
    org$pandalanguage$pandac$ASTNode* next1469 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1470;
    org$pandalanguage$pandac$ASTNode* $tmp1471;
    org$pandalanguage$pandac$ASTNode* $tmp1473;
    org$pandalanguage$pandac$ASTNode* $tmp1477;
    org$pandalanguage$pandac$ASTNode* $tmp1478;
    org$pandalanguage$pandac$ASTNode* $tmp1479;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1481;
    org$pandalanguage$pandac$ASTNode* $tmp1483;
    org$pandalanguage$pandac$ASTNode* $tmp1486;
    int $tmp1407;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1411 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1410 = $tmp1411;
        $tmp1409 = $tmp1410;
        result1408 = $tmp1409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1409));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
        if (((panda$core$Bit) { result1408 == NULL }).value) {
        {
            $tmp1413 = NULL;
            $returnValue1412 = $tmp1413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
            $tmp1407 = 0;
            goto $l1405;
            $l1414:;
            return $returnValue1412;
        }
        }
        $l1416:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1419 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1418 = $tmp1419;
            {
                $match$740_131420 = op1418.kind;
                panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1426 = $tmp1427.value;
                if ($tmp1426) goto $l1428;
                panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1426 = $tmp1429.value;
                $l1428:;
                panda$core$Bit $tmp1430 = { $tmp1426 };
                bool $tmp1425 = $tmp1430.value;
                if ($tmp1425) goto $l1431;
                panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1425 = $tmp1432.value;
                $l1431:;
                panda$core$Bit $tmp1433 = { $tmp1425 };
                bool $tmp1424 = $tmp1433.value;
                if ($tmp1424) goto $l1434;
                panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1424 = $tmp1435.value;
                $l1434:;
                panda$core$Bit $tmp1436 = { $tmp1424 };
                bool $tmp1423 = $tmp1436.value;
                if ($tmp1423) goto $l1437;
                panda$core$Bit $tmp1438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1423 = $tmp1438.value;
                $l1437:;
                panda$core$Bit $tmp1439 = { $tmp1423 };
                bool $tmp1422 = $tmp1439.value;
                if ($tmp1422) goto $l1440;
                panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1422 = $tmp1441.value;
                $l1440:;
                panda$core$Bit $tmp1442 = { $tmp1422 };
                bool $tmp1421 = $tmp1442.value;
                if ($tmp1421) goto $l1443;
                panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1421 = $tmp1444.value;
                $l1443:;
                panda$core$Bit $tmp1445 = { $tmp1421 };
                if ($tmp1445.value) {
                {
                    int $tmp1448;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1452 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1451 = $tmp1452;
                        $tmp1450 = $tmp1451;
                        next1449 = $tmp1450;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
                        if (((panda$core$Bit) { next1449 == NULL }).value) {
                        {
                            $tmp1453 = NULL;
                            $returnValue1412 = $tmp1453;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                            $tmp1448 = 0;
                            goto $l1446;
                            $l1454:;
                            $tmp1407 = 1;
                            goto $l1405;
                            $l1455:;
                            return $returnValue1412;
                        }
                        }
                        {
                            $tmp1457 = result1408;
                            org$pandalanguage$pandac$ASTNode* $tmp1460 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1460, ((panda$core$Int64) { 4 }), op1418.position, result1408, op1418.kind, next1449);
                            $tmp1459 = $tmp1460;
                            $tmp1458 = $tmp1459;
                            result1408 = $tmp1458;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1458));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
                        }
                    }
                    $tmp1448 = -1;
                    goto $l1446;
                    $l1446:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1449));
                    next1449 = NULL;
                    switch ($tmp1448) {
                        case -1: goto $l1461;
                        case 0: goto $l1454;
                    }
                    $l1461:;
                }
                }
                else {
                panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$740_131420.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1462.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp1464 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken1463 = $tmp1464;
                    panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1463.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp1465.value) {
                    {
                        int $tmp1468;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1472 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1471 = $tmp1472;
                            $tmp1470 = $tmp1471;
                            next1469 = $tmp1470;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1470));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1471));
                            if (((panda$core$Bit) { next1469 == NULL }).value) {
                            {
                                $tmp1473 = NULL;
                                $returnValue1412 = $tmp1473;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
                                $tmp1468 = 0;
                                goto $l1466;
                                $l1474:;
                                $tmp1407 = 2;
                                goto $l1405;
                                $l1475:;
                                return $returnValue1412;
                            }
                            }
                            {
                                $tmp1477 = result1408;
                                org$pandalanguage$pandac$ASTNode* $tmp1480 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1481, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1480, ((panda$core$Int64) { 4 }), op1418.position, result1408, $tmp1481, next1469);
                                $tmp1479 = $tmp1480;
                                $tmp1478 = $tmp1479;
                                result1408 = $tmp1478;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1477));
                            }
                        }
                        $tmp1468 = -1;
                        goto $l1466;
                        $l1466:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1469));
                        next1469 = NULL;
                        switch ($tmp1468) {
                            case -1: goto $l1482;
                            case 0: goto $l1474;
                        }
                        $l1482:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1463);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1418);
                        $tmp1483 = result1408;
                        $returnValue1412 = $tmp1483;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
                        $tmp1407 = 3;
                        goto $l1405;
                        $l1484:;
                        return $returnValue1412;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1418);
                    $tmp1486 = result1408;
                    $returnValue1412 = $tmp1486;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
                    $tmp1407 = 4;
                    goto $l1405;
                    $l1487:;
                    return $returnValue1412;
                }
                }
                }
            }
        }
        }
        $l1417:;
    }
    $tmp1407 = -1;
    goto $l1405;
    $l1405:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1408));
    result1408 = NULL;
    switch ($tmp1407) {
        case 2: goto $l1475;
        case 1: goto $l1455;
        case 4: goto $l1487;
        case 0: goto $l1414;
        case 3: goto $l1484;
        case -1: goto $l1489;
    }
    $l1489:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1493 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1494;
    org$pandalanguage$pandac$ASTNode* $tmp1495;
    org$pandalanguage$pandac$ASTNode* $returnValue1497;
    org$pandalanguage$pandac$ASTNode* $tmp1498;
    org$pandalanguage$pandac$parser$Token op1503;
    org$pandalanguage$pandac$parser$Token$Kind $match$781_131505;
    org$pandalanguage$pandac$ASTNode* next1518 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1519;
    org$pandalanguage$pandac$ASTNode* $tmp1520;
    org$pandalanguage$pandac$ASTNode* $tmp1522;
    org$pandalanguage$pandac$ASTNode* $tmp1526;
    org$pandalanguage$pandac$ASTNode* $tmp1527;
    org$pandalanguage$pandac$ASTNode* $tmp1528;
    org$pandalanguage$pandac$ASTNode* $tmp1531;
    int $tmp1492;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1496 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1495 = $tmp1496;
        $tmp1494 = $tmp1495;
        result1493 = $tmp1494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
        if (((panda$core$Bit) { result1493 == NULL }).value) {
        {
            $tmp1498 = NULL;
            $returnValue1497 = $tmp1498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
            $tmp1492 = 0;
            goto $l1490;
            $l1499:;
            return $returnValue1497;
        }
        }
        $l1501:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1504 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1503 = $tmp1504;
            {
                $match$781_131505 = op1503.kind;
                panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$781_131505.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp1507 = $tmp1508.value;
                if ($tmp1507) goto $l1509;
                panda$core$Bit $tmp1510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$781_131505.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp1507 = $tmp1510.value;
                $l1509:;
                panda$core$Bit $tmp1511 = { $tmp1507 };
                bool $tmp1506 = $tmp1511.value;
                if ($tmp1506) goto $l1512;
                panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$781_131505.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp1506 = $tmp1513.value;
                $l1512:;
                panda$core$Bit $tmp1514 = { $tmp1506 };
                if ($tmp1514.value) {
                {
                    int $tmp1517;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1521 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1520 = $tmp1521;
                        $tmp1519 = $tmp1520;
                        next1518 = $tmp1519;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1519));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1520));
                        if (((panda$core$Bit) { next1518 == NULL }).value) {
                        {
                            $tmp1522 = NULL;
                            $returnValue1497 = $tmp1522;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
                            $tmp1517 = 0;
                            goto $l1515;
                            $l1523:;
                            $tmp1492 = 1;
                            goto $l1490;
                            $l1524:;
                            return $returnValue1497;
                        }
                        }
                        {
                            $tmp1526 = result1493;
                            org$pandalanguage$pandac$ASTNode* $tmp1529 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1529, ((panda$core$Int64) { 4 }), op1503.position, result1493, op1503.kind, next1518);
                            $tmp1528 = $tmp1529;
                            $tmp1527 = $tmp1528;
                            result1493 = $tmp1527;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1527));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
                        }
                    }
                    $tmp1517 = -1;
                    goto $l1515;
                    $l1515:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1518));
                    next1518 = NULL;
                    switch ($tmp1517) {
                        case -1: goto $l1530;
                        case 0: goto $l1523;
                    }
                    $l1530:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1503);
                    $tmp1531 = result1493;
                    $returnValue1497 = $tmp1531;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
                    $tmp1492 = 2;
                    goto $l1490;
                    $l1532:;
                    return $returnValue1497;
                }
                }
            }
        }
        }
        $l1502:;
    }
    $tmp1492 = -1;
    goto $l1490;
    $l1490:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1493));
    result1493 = NULL;
    switch ($tmp1492) {
        case 1: goto $l1524;
        case -1: goto $l1534;
        case 2: goto $l1532;
        case 0: goto $l1499;
    }
    $l1534:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1538 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$801_91539;
    org$pandalanguage$pandac$ASTNode* $tmp1546;
    org$pandalanguage$pandac$ASTNode* $tmp1547;
    org$pandalanguage$pandac$ASTNode* $tmp1548;
    org$pandalanguage$pandac$ASTNode* $tmp1549;
    org$pandalanguage$pandac$ASTNode* $tmp1550;
    org$pandalanguage$pandac$ASTNode* $returnValue1552;
    org$pandalanguage$pandac$ASTNode* $tmp1553;
    org$pandalanguage$pandac$parser$Token op1556;
    org$pandalanguage$pandac$parser$Token$Kind $match$811_91558;
    org$pandalanguage$pandac$parser$Token next1567;
    org$pandalanguage$pandac$ASTNode* right1569 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1579;
    org$pandalanguage$pandac$ASTNode* $tmp1580;
    org$pandalanguage$pandac$ASTNode* $tmp1581;
    org$pandalanguage$pandac$ASTNode* $tmp1583;
    org$pandalanguage$pandac$ASTNode* $tmp1587;
    org$pandalanguage$pandac$ASTNode* $tmp1588;
    org$pandalanguage$pandac$ASTNode* step1589 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1590;
    org$pandalanguage$pandac$ASTNode* $tmp1592;
    org$pandalanguage$pandac$ASTNode* $tmp1593;
    org$pandalanguage$pandac$ASTNode* $tmp1594;
    org$pandalanguage$pandac$ASTNode* $tmp1596;
    org$pandalanguage$pandac$ASTNode* $tmp1600;
    org$pandalanguage$pandac$ASTNode* $tmp1601;
    org$pandalanguage$pandac$ASTNode* $tmp1602;
    org$pandalanguage$pandac$ASTNode* $tmp1603;
    org$pandalanguage$pandac$ASTNode* $tmp1610;
    int $tmp1537;
    {
        memset(&result1538, 0, sizeof(result1538));
        {
            org$pandalanguage$pandac$parser$Token $tmp1540 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$801_91539 = $tmp1540.kind;
            panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$801_91539.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1541 = $tmp1542.value;
            if ($tmp1541) goto $l1543;
            panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$801_91539.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1541 = $tmp1544.value;
            $l1543:;
            panda$core$Bit $tmp1545 = { $tmp1541 };
            if ($tmp1545.value) {
            {
                {
                    $tmp1546 = result1538;
                    $tmp1547 = NULL;
                    result1538 = $tmp1547;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1546));
                }
            }
            }
            else {
            {
                {
                    $tmp1548 = result1538;
                    org$pandalanguage$pandac$ASTNode* $tmp1551 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1550 = $tmp1551;
                    $tmp1549 = $tmp1550;
                    result1538 = $tmp1549;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
                }
                if (((panda$core$Bit) { result1538 == NULL }).value) {
                {
                    $tmp1553 = NULL;
                    $returnValue1552 = $tmp1553;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
                    $tmp1537 = 0;
                    goto $l1535;
                    $l1554:;
                    return $returnValue1552;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp1557 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1556 = $tmp1557;
        {
            $match$811_91558 = op1556.kind;
            panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$811_91558.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1559 = $tmp1560.value;
            if ($tmp1559) goto $l1561;
            panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$811_91558.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1559 = $tmp1562.value;
            $l1561:;
            panda$core$Bit $tmp1563 = { $tmp1559 };
            if ($tmp1563.value) {
            {
                int $tmp1566;
                {
                    org$pandalanguage$pandac$parser$Token $tmp1568 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next1567 = $tmp1568;
                    memset(&right1569, 0, sizeof(right1569));
                    panda$core$Bit $tmp1572 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1567.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp1571 = $tmp1572.value;
                    if (!$tmp1571) goto $l1573;
                    panda$core$Bit $tmp1574 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1567.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp1571 = $tmp1574.value;
                    $l1573:;
                    panda$core$Bit $tmp1575 = { $tmp1571 };
                    bool $tmp1570 = $tmp1575.value;
                    if (!$tmp1570) goto $l1576;
                    panda$core$Bit $tmp1577 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1567.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp1570 = $tmp1577.value;
                    $l1576:;
                    panda$core$Bit $tmp1578 = { $tmp1570 };
                    if ($tmp1578.value) {
                    {
                        {
                            $tmp1579 = right1569;
                            org$pandalanguage$pandac$ASTNode* $tmp1582 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1581 = $tmp1582;
                            $tmp1580 = $tmp1581;
                            right1569 = $tmp1580;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1579));
                        }
                        if (((panda$core$Bit) { right1569 == NULL }).value) {
                        {
                            $tmp1583 = NULL;
                            $returnValue1552 = $tmp1583;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
                            $tmp1566 = 0;
                            goto $l1564;
                            $l1584:;
                            $tmp1537 = 1;
                            goto $l1535;
                            $l1585:;
                            return $returnValue1552;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1587 = right1569;
                            $tmp1588 = NULL;
                            right1569 = $tmp1588;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
                        }
                    }
                    }
                    memset(&step1589, 0, sizeof(step1589));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1590, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1591 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1590);
                    if (((panda$core$Bit) { $tmp1591.nonnull }).value) {
                    {
                        {
                            $tmp1592 = step1589;
                            org$pandalanguage$pandac$ASTNode* $tmp1595 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1594 = $tmp1595;
                            $tmp1593 = $tmp1594;
                            step1589 = $tmp1593;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1593));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
                        }
                        if (((panda$core$Bit) { step1589 == NULL }).value) {
                        {
                            $tmp1596 = NULL;
                            $returnValue1552 = $tmp1596;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
                            $tmp1566 = 1;
                            goto $l1564;
                            $l1597:;
                            $tmp1537 = 2;
                            goto $l1535;
                            $l1598:;
                            return $returnValue1552;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1600 = step1589;
                            $tmp1601 = NULL;
                            step1589 = $tmp1601;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1601));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1604 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp1605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op1556.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp1604, ((panda$core$Int64) { 32 }), op1556.position, result1538, right1569, $tmp1605, step1589);
                    $tmp1603 = $tmp1604;
                    $tmp1602 = $tmp1603;
                    $returnValue1552 = $tmp1602;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1602));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1603));
                    $tmp1566 = 2;
                    goto $l1564;
                    $l1606:;
                    $tmp1537 = 3;
                    goto $l1535;
                    $l1607:;
                    return $returnValue1552;
                }
                $l1564:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1589));
                switch ($tmp1566) {
                    case 1: goto $l1597;
                    case 0: goto $l1584;
                    case 2: goto $l1606;
                }
                $l1609:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1556);
                $tmp1610 = result1538;
                $returnValue1552 = $tmp1610;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1610));
                $tmp1537 = 4;
                goto $l1535;
                $l1611:;
                return $returnValue1552;
            }
            }
        }
    }
    $tmp1537 = -1;
    goto $l1535;
    $l1535:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1538));
    switch ($tmp1537) {
        case 3: goto $l1607;
        case 4: goto $l1611;
        case -1: goto $l1613;
        case 2: goto $l1598;
        case 1: goto $l1585;
        case 0: goto $l1554;
    }
    $l1613:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1617 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1618;
    org$pandalanguage$pandac$ASTNode* $tmp1619;
    org$pandalanguage$pandac$ASTNode* $returnValue1621;
    org$pandalanguage$pandac$ASTNode* $tmp1622;
    org$pandalanguage$pandac$parser$Token op1627;
    org$pandalanguage$pandac$parser$Token$Kind $match$854_131629;
    org$pandalanguage$pandac$ASTNode* next1662 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1663;
    org$pandalanguage$pandac$ASTNode* $tmp1664;
    org$pandalanguage$pandac$ASTNode* $tmp1666;
    org$pandalanguage$pandac$ASTNode* $tmp1670;
    org$pandalanguage$pandac$ASTNode* $tmp1671;
    org$pandalanguage$pandac$ASTNode* $tmp1672;
    org$pandalanguage$pandac$ASTNode* $tmp1675;
    int $tmp1616;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1620 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1619 = $tmp1620;
        $tmp1618 = $tmp1619;
        result1617 = $tmp1618;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
        if (((panda$core$Bit) { result1617 == NULL }).value) {
        {
            $tmp1622 = NULL;
            $returnValue1621 = $tmp1622;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1622));
            $tmp1616 = 0;
            goto $l1614;
            $l1623:;
            return $returnValue1621;
        }
        }
        $l1625:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1628 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1627 = $tmp1628;
            {
                $match$854_131629 = op1627.kind;
                panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp1636 = $tmp1637.value;
                if ($tmp1636) goto $l1638;
                panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp1636 = $tmp1639.value;
                $l1638:;
                panda$core$Bit $tmp1640 = { $tmp1636 };
                bool $tmp1635 = $tmp1640.value;
                if ($tmp1635) goto $l1641;
                panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp1635 = $tmp1642.value;
                $l1641:;
                panda$core$Bit $tmp1643 = { $tmp1635 };
                bool $tmp1634 = $tmp1643.value;
                if ($tmp1634) goto $l1644;
                panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp1634 = $tmp1645.value;
                $l1644:;
                panda$core$Bit $tmp1646 = { $tmp1634 };
                bool $tmp1633 = $tmp1646.value;
                if ($tmp1633) goto $l1647;
                panda$core$Bit $tmp1648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp1633 = $tmp1648.value;
                $l1647:;
                panda$core$Bit $tmp1649 = { $tmp1633 };
                bool $tmp1632 = $tmp1649.value;
                if ($tmp1632) goto $l1650;
                panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp1632 = $tmp1651.value;
                $l1650:;
                panda$core$Bit $tmp1652 = { $tmp1632 };
                bool $tmp1631 = $tmp1652.value;
                if ($tmp1631) goto $l1653;
                panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp1631 = $tmp1654.value;
                $l1653:;
                panda$core$Bit $tmp1655 = { $tmp1631 };
                bool $tmp1630 = $tmp1655.value;
                if ($tmp1630) goto $l1656;
                panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131629.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp1630 = $tmp1657.value;
                $l1656:;
                panda$core$Bit $tmp1658 = { $tmp1630 };
                if ($tmp1658.value) {
                {
                    int $tmp1661;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1665 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1664 = $tmp1665;
                        $tmp1663 = $tmp1664;
                        next1662 = $tmp1663;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1663));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1664));
                        if (((panda$core$Bit) { next1662 == NULL }).value) {
                        {
                            $tmp1666 = NULL;
                            $returnValue1621 = $tmp1666;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1666));
                            $tmp1661 = 0;
                            goto $l1659;
                            $l1667:;
                            $tmp1616 = 1;
                            goto $l1614;
                            $l1668:;
                            return $returnValue1621;
                        }
                        }
                        {
                            $tmp1670 = result1617;
                            org$pandalanguage$pandac$ASTNode* $tmp1673 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1673, ((panda$core$Int64) { 4 }), op1627.position, result1617, op1627.kind, next1662);
                            $tmp1672 = $tmp1673;
                            $tmp1671 = $tmp1672;
                            result1617 = $tmp1671;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1671));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1670));
                        }
                    }
                    $tmp1661 = -1;
                    goto $l1659;
                    $l1659:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1662));
                    next1662 = NULL;
                    switch ($tmp1661) {
                        case -1: goto $l1674;
                        case 0: goto $l1667;
                    }
                    $l1674:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1627);
                    $tmp1675 = result1617;
                    $returnValue1621 = $tmp1675;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                    $tmp1616 = 2;
                    goto $l1614;
                    $l1676:;
                    return $returnValue1621;
                }
                }
            }
        }
        }
        $l1626:;
    }
    $tmp1616 = -1;
    goto $l1614;
    $l1614:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1617));
    result1617 = NULL;
    switch ($tmp1616) {
        case 1: goto $l1668;
        case -1: goto $l1678;
        case 0: goto $l1623;
        case 2: goto $l1676;
    }
    $l1678:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1682 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1683;
    org$pandalanguage$pandac$ASTNode* $tmp1684;
    org$pandalanguage$pandac$ASTNode* $returnValue1686;
    org$pandalanguage$pandac$ASTNode* $tmp1687;
    org$pandalanguage$pandac$parser$Token op1692;
    org$pandalanguage$pandac$parser$Token$Kind $match$885_131694;
    org$pandalanguage$pandac$ASTNode* next1703 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1704;
    org$pandalanguage$pandac$ASTNode* $tmp1705;
    org$pandalanguage$pandac$ASTNode* $tmp1707;
    org$pandalanguage$pandac$ASTNode* $tmp1711;
    org$pandalanguage$pandac$ASTNode* $tmp1712;
    org$pandalanguage$pandac$ASTNode* $tmp1713;
    org$pandalanguage$pandac$ASTNode* $tmp1716;
    int $tmp1681;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1685 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1684 = $tmp1685;
        $tmp1683 = $tmp1684;
        result1682 = $tmp1683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
        if (((panda$core$Bit) { result1682 == NULL }).value) {
        {
            $tmp1687 = NULL;
            $returnValue1686 = $tmp1687;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1687));
            $tmp1681 = 0;
            goto $l1679;
            $l1688:;
            return $returnValue1686;
        }
        }
        $l1690:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1693 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1692 = $tmp1693;
            {
                $match$885_131694 = op1692.kind;
                panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$885_131694.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp1695 = $tmp1696.value;
                if ($tmp1695) goto $l1697;
                panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$885_131694.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp1695 = $tmp1698.value;
                $l1697:;
                panda$core$Bit $tmp1699 = { $tmp1695 };
                if ($tmp1699.value) {
                {
                    int $tmp1702;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1706 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1705 = $tmp1706;
                        $tmp1704 = $tmp1705;
                        next1703 = $tmp1704;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
                        if (((panda$core$Bit) { next1703 == NULL }).value) {
                        {
                            $tmp1707 = NULL;
                            $returnValue1686 = $tmp1707;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1707));
                            $tmp1702 = 0;
                            goto $l1700;
                            $l1708:;
                            $tmp1681 = 1;
                            goto $l1679;
                            $l1709:;
                            return $returnValue1686;
                        }
                        }
                        {
                            $tmp1711 = result1682;
                            org$pandalanguage$pandac$ASTNode* $tmp1714 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1714, ((panda$core$Int64) { 4 }), op1692.position, result1682, op1692.kind, next1703);
                            $tmp1713 = $tmp1714;
                            $tmp1712 = $tmp1713;
                            result1682 = $tmp1712;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1712));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1711));
                        }
                    }
                    $tmp1702 = -1;
                    goto $l1700;
                    $l1700:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1703));
                    next1703 = NULL;
                    switch ($tmp1702) {
                        case 0: goto $l1708;
                        case -1: goto $l1715;
                    }
                    $l1715:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1692);
                    $tmp1716 = result1682;
                    $returnValue1686 = $tmp1716;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1716));
                    $tmp1681 = 2;
                    goto $l1679;
                    $l1717:;
                    return $returnValue1686;
                }
                }
            }
        }
        }
        $l1691:;
    }
    $tmp1681 = -1;
    goto $l1679;
    $l1679:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1682));
    result1682 = NULL;
    switch ($tmp1681) {
        case 2: goto $l1717;
        case -1: goto $l1719;
        case 1: goto $l1709;
        case 0: goto $l1688;
    }
    $l1719:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1723 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1724;
    org$pandalanguage$pandac$ASTNode* $tmp1725;
    org$pandalanguage$pandac$ASTNode* $returnValue1727;
    org$pandalanguage$pandac$ASTNode* $tmp1728;
    org$pandalanguage$pandac$parser$Token$nullable op1736;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1737;
    org$pandalanguage$pandac$ASTNode* next1740 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1741;
    org$pandalanguage$pandac$ASTNode* $tmp1742;
    org$pandalanguage$pandac$ASTNode* $tmp1744;
    org$pandalanguage$pandac$ASTNode* $tmp1748;
    org$pandalanguage$pandac$ASTNode* $tmp1749;
    org$pandalanguage$pandac$ASTNode* $tmp1750;
    org$pandalanguage$pandac$ASTNode* $tmp1753;
    int $tmp1722;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1726 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1725 = $tmp1726;
        $tmp1724 = $tmp1725;
        result1723 = $tmp1724;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1724));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1725));
        if (((panda$core$Bit) { result1723 == NULL }).value) {
        {
            $tmp1728 = NULL;
            $returnValue1727 = $tmp1728;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
            $tmp1722 = 0;
            goto $l1720;
            $l1729:;
            return $returnValue1727;
        }
        }
        $l1731:;
        while (true) {
        {
            int $tmp1735;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1737, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1738 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1737);
                op1736 = $tmp1738;
                if (((panda$core$Bit) { !op1736.nonnull }).value) {
                {
                    $tmp1735 = 0;
                    goto $l1733;
                    $l1739:;
                    goto $l1732;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1743 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1742 = $tmp1743;
                $tmp1741 = $tmp1742;
                next1740 = $tmp1741;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                if (((panda$core$Bit) { next1740 == NULL }).value) {
                {
                    $tmp1744 = NULL;
                    $returnValue1727 = $tmp1744;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1744));
                    $tmp1735 = 1;
                    goto $l1733;
                    $l1745:;
                    $tmp1722 = 1;
                    goto $l1720;
                    $l1746:;
                    return $returnValue1727;
                }
                }
                {
                    $tmp1748 = result1723;
                    org$pandalanguage$pandac$ASTNode* $tmp1751 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1751, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1736.value).position, result1723, ((org$pandalanguage$pandac$parser$Token) op1736.value).kind, next1740);
                    $tmp1750 = $tmp1751;
                    $tmp1749 = $tmp1750;
                    result1723 = $tmp1749;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1749));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1750));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
                }
            }
            $tmp1735 = -1;
            goto $l1733;
            $l1733:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1740));
            next1740 = NULL;
            switch ($tmp1735) {
                case -1: goto $l1752;
                case 0: goto $l1739;
                case 1: goto $l1745;
            }
            $l1752:;
        }
        }
        $l1732:;
        $tmp1753 = result1723;
        $returnValue1727 = $tmp1753;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1753));
        $tmp1722 = 2;
        goto $l1720;
        $l1754:;
        return $returnValue1727;
    }
    $l1720:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1723));
    result1723 = NULL;
    switch ($tmp1722) {
        case 1: goto $l1746;
        case 2: goto $l1754;
        case 0: goto $l1729;
    }
    $l1756:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1760;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1761;
    org$pandalanguage$pandac$ASTNode* $returnValue1764;
    org$pandalanguage$pandac$ASTNode* $tmp1765;
    org$pandalanguage$pandac$ASTNode* test1768 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1769;
    org$pandalanguage$pandac$ASTNode* $tmp1770;
    org$pandalanguage$pandac$ASTNode* $tmp1772;
    panda$collections$ImmutableArray* ifTrue1775 = NULL;
    panda$collections$ImmutableArray* $tmp1776;
    panda$collections$ImmutableArray* $tmp1777;
    org$pandalanguage$pandac$ASTNode* $tmp1779;
    org$pandalanguage$pandac$ASTNode* ifFalse1782 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1783;
    org$pandalanguage$pandac$ASTNode* $tmp1787;
    org$pandalanguage$pandac$ASTNode* $tmp1788;
    org$pandalanguage$pandac$ASTNode* $tmp1789;
    org$pandalanguage$pandac$ASTNode* $tmp1791;
    org$pandalanguage$pandac$ASTNode* $tmp1794;
    org$pandalanguage$pandac$ASTNode* $tmp1795;
    org$pandalanguage$pandac$ASTNode* $tmp1796;
    org$pandalanguage$pandac$ASTNode* $tmp1798;
    org$pandalanguage$pandac$ASTNode* $tmp1801;
    org$pandalanguage$pandac$ASTNode* $tmp1802;
    org$pandalanguage$pandac$ASTNode* $tmp1803;
    org$pandalanguage$pandac$ASTNode* $tmp1804;
    int $tmp1759;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1761, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1763 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1761, &$s1762);
        start1760 = $tmp1763;
        if (((panda$core$Bit) { !start1760.nonnull }).value) {
        {
            $tmp1765 = NULL;
            $returnValue1764 = $tmp1765;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1765));
            $tmp1759 = 0;
            goto $l1757;
            $l1766:;
            return $returnValue1764;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1771 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1770 = $tmp1771;
        $tmp1769 = $tmp1770;
        test1768 = $tmp1769;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1769));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
        if (((panda$core$Bit) { test1768 == NULL }).value) {
        {
            $tmp1772 = NULL;
            $returnValue1764 = $tmp1772;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1772));
            $tmp1759 = 1;
            goto $l1757;
            $l1773:;
            return $returnValue1764;
        }
        }
        panda$collections$ImmutableArray* $tmp1778 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1777 = $tmp1778;
        $tmp1776 = $tmp1777;
        ifTrue1775 = $tmp1776;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
        if (((panda$core$Bit) { ifTrue1775 == NULL }).value) {
        {
            $tmp1779 = NULL;
            $returnValue1764 = $tmp1779;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1779));
            $tmp1759 = 2;
            goto $l1757;
            $l1780:;
            return $returnValue1764;
        }
        }
        memset(&ifFalse1782, 0, sizeof(ifFalse1782));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1783, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1784 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1783);
        if (((panda$core$Bit) { $tmp1784.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1785 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1785.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1786.value) {
            {
                {
                    $tmp1787 = ifFalse1782;
                    org$pandalanguage$pandac$ASTNode* $tmp1790 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1789 = $tmp1790;
                    $tmp1788 = $tmp1789;
                    ifFalse1782 = $tmp1788;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1787));
                }
                if (((panda$core$Bit) { ifFalse1782 == NULL }).value) {
                {
                    $tmp1791 = NULL;
                    $returnValue1764 = $tmp1791;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
                    $tmp1759 = 3;
                    goto $l1757;
                    $l1792:;
                    return $returnValue1764;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp1794 = ifFalse1782;
                    org$pandalanguage$pandac$ASTNode* $tmp1797 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1796 = $tmp1797;
                    $tmp1795 = $tmp1796;
                    ifFalse1782 = $tmp1795;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1795));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1796));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                }
                if (((panda$core$Bit) { ifFalse1782 == NULL }).value) {
                {
                    $tmp1798 = NULL;
                    $returnValue1764 = $tmp1798;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1798));
                    $tmp1759 = 4;
                    goto $l1757;
                    $l1799:;
                    return $returnValue1764;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp1801 = ifFalse1782;
                $tmp1802 = NULL;
                ifFalse1782 = $tmp1802;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1802));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1805 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1805, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1760.value).position, test1768, ifTrue1775, ifFalse1782);
        $tmp1804 = $tmp1805;
        $tmp1803 = $tmp1804;
        $returnValue1764 = $tmp1803;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1803));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
        $tmp1759 = 5;
        goto $l1757;
        $l1806:;
        return $returnValue1764;
    }
    $l1757:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1768));
    test1768 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1775));
    ifTrue1775 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1782));
    switch ($tmp1759) {
        case 3: goto $l1792;
        case 4: goto $l1799;
        case 5: goto $l1806;
        case 2: goto $l1780;
        case 1: goto $l1773;
        case 0: goto $l1766;
    }
    $l1808:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1809;
    org$pandalanguage$pandac$ASTNode* $returnValue1812;
    org$pandalanguage$pandac$ASTNode* $tmp1813;
    org$pandalanguage$pandac$ASTNode* $tmp1815;
    org$pandalanguage$pandac$ASTNode* $tmp1816;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1809, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1811 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1809, &$s1810);
    if (((panda$core$Bit) { !$tmp1811.nonnull }).value) {
    {
        $tmp1813 = NULL;
        $returnValue1812 = $tmp1813;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
        return $returnValue1812;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1817 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp1816 = $tmp1817;
    $tmp1815 = $tmp1816;
    $returnValue1812 = $tmp1815;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1815));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
    return $returnValue1812;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1819;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1820;
    org$pandalanguage$pandac$ASTNode* $returnValue1823;
    org$pandalanguage$pandac$ASTNode* $tmp1824;
    org$pandalanguage$pandac$ASTNode* type1831 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1832;
    org$pandalanguage$pandac$ASTNode* $tmp1833;
    org$pandalanguage$pandac$ASTNode* $tmp1835;
    org$pandalanguage$pandac$ASTNode* $tmp1838;
    org$pandalanguage$pandac$ASTNode* $tmp1839;
    panda$core$String* $tmp1841;
    org$pandalanguage$pandac$ASTNode* $tmp1846;
    org$pandalanguage$pandac$ASTNode* $tmp1847;
    panda$core$String* $tmp1849;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1820, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1822 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1820, &$s1821);
    id1819 = $tmp1822;
    if (((panda$core$Bit) { !id1819.nonnull }).value) {
    {
        $tmp1824 = NULL;
        $returnValue1823 = $tmp1824;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1824));
        return $returnValue1823;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1826 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1826.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1827.value) {
    {
        int $tmp1830;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1834 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1833 = $tmp1834;
            $tmp1832 = $tmp1833;
            type1831 = $tmp1832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
            if (((panda$core$Bit) { type1831 == NULL }).value) {
            {
                $tmp1835 = NULL;
                $returnValue1823 = $tmp1835;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1835));
                $tmp1830 = 0;
                goto $l1828;
                $l1836:;
                return $returnValue1823;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1840 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1842 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1819.value));
            $tmp1841 = $tmp1842;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1840, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) id1819.value).position, $tmp1841, type1831);
            $tmp1839 = $tmp1840;
            $tmp1838 = $tmp1839;
            $returnValue1823 = $tmp1838;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1838));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1839));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1841));
            $tmp1830 = 1;
            goto $l1828;
            $l1843:;
            return $returnValue1823;
        }
        $l1828:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1831));
        type1831 = NULL;
        switch ($tmp1830) {
            case 1: goto $l1843;
            case 0: goto $l1836;
        }
        $l1845:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1848 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1850 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1819.value));
    $tmp1849 = $tmp1850;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1848, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id1819.value).position, $tmp1849);
    $tmp1847 = $tmp1848;
    $tmp1846 = $tmp1847;
    $returnValue1823 = $tmp1846;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1846));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1847));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1849));
    return $returnValue1823;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1855;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1856;
    org$pandalanguage$pandac$ASTNode* $returnValue1859;
    org$pandalanguage$pandac$ASTNode* $tmp1860;
    org$pandalanguage$pandac$ASTNode* t1863 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1864;
    org$pandalanguage$pandac$ASTNode* $tmp1865;
    org$pandalanguage$pandac$ASTNode* $tmp1867;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1870;
    org$pandalanguage$pandac$ASTNode* $tmp1873;
    org$pandalanguage$pandac$ASTNode* list1876 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1877;
    org$pandalanguage$pandac$ASTNode* $tmp1878;
    org$pandalanguage$pandac$ASTNode* $tmp1880;
    panda$collections$ImmutableArray* block1883 = NULL;
    panda$collections$ImmutableArray* $tmp1884;
    panda$collections$ImmutableArray* $tmp1885;
    org$pandalanguage$pandac$ASTNode* $tmp1887;
    org$pandalanguage$pandac$ASTNode* $tmp1890;
    org$pandalanguage$pandac$ASTNode* $tmp1891;
    int $tmp1854;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1856, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1858 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1856, &$s1857);
        start1855 = $tmp1858;
        if (((panda$core$Bit) { !start1855.nonnull }).value) {
        {
            $tmp1860 = NULL;
            $returnValue1859 = $tmp1860;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1860));
            $tmp1854 = 0;
            goto $l1852;
            $l1861:;
            return $returnValue1859;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1866 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1865 = $tmp1866;
        $tmp1864 = $tmp1865;
        t1863 = $tmp1864;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1864));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
        if (((panda$core$Bit) { t1863 == NULL }).value) {
        {
            $tmp1867 = NULL;
            $returnValue1859 = $tmp1867;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1867));
            $tmp1854 = 1;
            goto $l1852;
            $l1868:;
            return $returnValue1859;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1870, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1872 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1870, &$s1871);
        if (((panda$core$Bit) { !$tmp1872.nonnull }).value) {
        {
            $tmp1873 = NULL;
            $returnValue1859 = $tmp1873;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1873));
            $tmp1854 = 2;
            goto $l1852;
            $l1874:;
            return $returnValue1859;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1879 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1878 = $tmp1879;
        $tmp1877 = $tmp1878;
        list1876 = $tmp1877;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1878));
        if (((panda$core$Bit) { list1876 == NULL }).value) {
        {
            $tmp1880 = NULL;
            $returnValue1859 = $tmp1880;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1880));
            $tmp1854 = 3;
            goto $l1852;
            $l1881:;
            return $returnValue1859;
        }
        }
        panda$collections$ImmutableArray* $tmp1886 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1885 = $tmp1886;
        $tmp1884 = $tmp1885;
        block1883 = $tmp1884;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1885));
        if (((panda$core$Bit) { block1883 == NULL }).value) {
        {
            $tmp1887 = NULL;
            $returnValue1859 = $tmp1887;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
            $tmp1854 = 4;
            goto $l1852;
            $l1888:;
            return $returnValue1859;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1892 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1892, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1855.value).position, p_label, t1863, list1876, block1883);
        $tmp1891 = $tmp1892;
        $tmp1890 = $tmp1891;
        $returnValue1859 = $tmp1890;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1890));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
        $tmp1854 = 5;
        goto $l1852;
        $l1893:;
        return $returnValue1859;
    }
    $l1852:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1863));
    t1863 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1876));
    list1876 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1883));
    block1883 = NULL;
    switch ($tmp1854) {
        case 4: goto $l1888;
        case 1: goto $l1868;
        case 3: goto $l1881;
        case 0: goto $l1861;
        case 5: goto $l1893;
        case 2: goto $l1874;
    }
    $l1895:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1899;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1900;
    org$pandalanguage$pandac$ASTNode* $returnValue1903;
    org$pandalanguage$pandac$ASTNode* $tmp1904;
    org$pandalanguage$pandac$ASTNode* test1907 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1908;
    org$pandalanguage$pandac$ASTNode* $tmp1909;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    panda$collections$ImmutableArray* body1914 = NULL;
    panda$collections$ImmutableArray* $tmp1915;
    panda$collections$ImmutableArray* $tmp1916;
    org$pandalanguage$pandac$ASTNode* $tmp1918;
    org$pandalanguage$pandac$ASTNode* $tmp1921;
    org$pandalanguage$pandac$ASTNode* $tmp1922;
    int $tmp1898;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1900, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1902 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1900, &$s1901);
        start1899 = $tmp1902;
        if (((panda$core$Bit) { !start1899.nonnull }).value) {
        {
            $tmp1904 = NULL;
            $returnValue1903 = $tmp1904;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1904));
            $tmp1898 = 0;
            goto $l1896;
            $l1905:;
            return $returnValue1903;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1910 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1909 = $tmp1910;
        $tmp1908 = $tmp1909;
        test1907 = $tmp1908;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
        if (((panda$core$Bit) { test1907 == NULL }).value) {
        {
            $tmp1911 = NULL;
            $returnValue1903 = $tmp1911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
            $tmp1898 = 1;
            goto $l1896;
            $l1912:;
            return $returnValue1903;
        }
        }
        panda$collections$ImmutableArray* $tmp1917 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1916 = $tmp1917;
        $tmp1915 = $tmp1916;
        body1914 = $tmp1915;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1915));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1916));
        if (((panda$core$Bit) { body1914 == NULL }).value) {
        {
            $tmp1918 = NULL;
            $returnValue1903 = $tmp1918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
            $tmp1898 = 2;
            goto $l1896;
            $l1919:;
            return $returnValue1903;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1923 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1923, ((panda$core$Int64) { 43 }), ((org$pandalanguage$pandac$parser$Token) start1899.value).position, p_label, test1907, body1914);
        $tmp1922 = $tmp1923;
        $tmp1921 = $tmp1922;
        $returnValue1903 = $tmp1921;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1921));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1922));
        $tmp1898 = 3;
        goto $l1896;
        $l1924:;
        return $returnValue1903;
    }
    $l1896:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1907));
    test1907 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1914));
    body1914 = NULL;
    switch ($tmp1898) {
        case 2: goto $l1919;
        case 1: goto $l1912;
        case 3: goto $l1924;
        case 0: goto $l1905;
    }
    $l1926:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1930;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1931;
    org$pandalanguage$pandac$ASTNode* $returnValue1934;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    panda$collections$ImmutableArray* body1938 = NULL;
    panda$collections$ImmutableArray* $tmp1939;
    panda$collections$ImmutableArray* $tmp1940;
    org$pandalanguage$pandac$ASTNode* $tmp1942;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1945;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    org$pandalanguage$pandac$ASTNode* test1951 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1952;
    org$pandalanguage$pandac$ASTNode* $tmp1953;
    org$pandalanguage$pandac$ASTNode* $tmp1955;
    org$pandalanguage$pandac$ASTNode* $tmp1958;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    int $tmp1929;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1931, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1933 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1931, &$s1932);
        start1930 = $tmp1933;
        if (((panda$core$Bit) { !start1930.nonnull }).value) {
        {
            $tmp1935 = NULL;
            $returnValue1934 = $tmp1935;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
            $tmp1929 = 0;
            goto $l1927;
            $l1936:;
            return $returnValue1934;
        }
        }
        panda$collections$ImmutableArray* $tmp1941 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1940 = $tmp1941;
        $tmp1939 = $tmp1940;
        body1938 = $tmp1939;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1940));
        if (((panda$core$Bit) { body1938 == NULL }).value) {
        {
            $tmp1942 = NULL;
            $returnValue1934 = $tmp1942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
            $tmp1929 = 1;
            goto $l1927;
            $l1943:;
            return $returnValue1934;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1945, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1947 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1945, &$s1946);
        if (((panda$core$Bit) { !$tmp1947.nonnull }).value) {
        {
            $tmp1948 = NULL;
            $returnValue1934 = $tmp1948;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
            $tmp1929 = 2;
            goto $l1927;
            $l1949:;
            return $returnValue1934;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1954 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1953 = $tmp1954;
        $tmp1952 = $tmp1953;
        test1951 = $tmp1952;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
        if (((panda$core$Bit) { test1951 == NULL }).value) {
        {
            $tmp1955 = NULL;
            $returnValue1934 = $tmp1955;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1955));
            $tmp1929 = 3;
            goto $l1927;
            $l1956:;
            return $returnValue1934;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1960 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1960, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$parser$Token) start1930.value).position, p_label, body1938, test1951);
        $tmp1959 = $tmp1960;
        $tmp1958 = $tmp1959;
        $returnValue1934 = $tmp1958;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1958));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1959));
        $tmp1929 = 4;
        goto $l1927;
        $l1961:;
        return $returnValue1934;
    }
    $l1927:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1938));
    body1938 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1951));
    test1951 = NULL;
    switch ($tmp1929) {
        case 1: goto $l1943;
        case 3: goto $l1956;
        case 2: goto $l1949;
        case 4: goto $l1961;
        case 0: goto $l1936;
    }
    $l1963:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1967;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1968;
    org$pandalanguage$pandac$ASTNode* $returnValue1971;
    org$pandalanguage$pandac$ASTNode* $tmp1972;
    panda$collections$ImmutableArray* body1975 = NULL;
    panda$collections$ImmutableArray* $tmp1976;
    panda$collections$ImmutableArray* $tmp1977;
    org$pandalanguage$pandac$ASTNode* $tmp1979;
    org$pandalanguage$pandac$ASTNode* $tmp1982;
    org$pandalanguage$pandac$ASTNode* $tmp1983;
    int $tmp1966;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1968, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1970 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1968, &$s1969);
        start1967 = $tmp1970;
        if (((panda$core$Bit) { !start1967.nonnull }).value) {
        {
            $tmp1972 = NULL;
            $returnValue1971 = $tmp1972;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
            $tmp1966 = 0;
            goto $l1964;
            $l1973:;
            return $returnValue1971;
        }
        }
        panda$collections$ImmutableArray* $tmp1978 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1977 = $tmp1978;
        $tmp1976 = $tmp1977;
        body1975 = $tmp1976;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1976));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
        if (((panda$core$Bit) { body1975 == NULL }).value) {
        {
            $tmp1979 = NULL;
            $returnValue1971 = $tmp1979;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
            $tmp1966 = 1;
            goto $l1964;
            $l1980:;
            return $returnValue1971;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1984 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1984, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start1967.value).position, p_label, body1975);
        $tmp1983 = $tmp1984;
        $tmp1982 = $tmp1983;
        $returnValue1971 = $tmp1982;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1982));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1983));
        $tmp1966 = 2;
        goto $l1964;
        $l1985:;
        return $returnValue1971;
    }
    $l1964:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1975));
    body1975 = NULL;
    switch ($tmp1966) {
        case 1: goto $l1980;
        case 2: goto $l1985;
        case 0: goto $l1973;
    }
    $l1987:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1991;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1992;
    org$pandalanguage$pandac$ASTNode* $returnValue1995;
    org$pandalanguage$pandac$ASTNode* $tmp1996;
    org$pandalanguage$pandac$ASTNode* expr1999 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2000;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    org$pandalanguage$pandac$ASTNode* $tmp2003;
    org$pandalanguage$pandac$ASTNode* message2006 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2007;
    org$pandalanguage$pandac$ASTNode* $tmp2009;
    org$pandalanguage$pandac$ASTNode* $tmp2010;
    org$pandalanguage$pandac$ASTNode* $tmp2011;
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2017;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    org$pandalanguage$pandac$ASTNode* $tmp2019;
    int $tmp1990;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1992, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1994 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1992, &$s1993);
        start1991 = $tmp1994;
        if (((panda$core$Bit) { !start1991.nonnull }).value) {
        {
            $tmp1996 = NULL;
            $returnValue1995 = $tmp1996;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1996));
            $tmp1990 = 0;
            goto $l1988;
            $l1997:;
            return $returnValue1995;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2002 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2001 = $tmp2002;
        $tmp2000 = $tmp2001;
        expr1999 = $tmp2000;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2000));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2001));
        if (((panda$core$Bit) { expr1999 == NULL }).value) {
        {
            $tmp2003 = NULL;
            $returnValue1995 = $tmp2003;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2003));
            $tmp1990 = 1;
            goto $l1988;
            $l2004:;
            return $returnValue1995;
        }
        }
        memset(&message2006, 0, sizeof(message2006));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2007, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2008 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2007);
        if (((panda$core$Bit) { $tmp2008.nonnull }).value) {
        {
            {
                $tmp2009 = message2006;
                org$pandalanguage$pandac$ASTNode* $tmp2012 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2011 = $tmp2012;
                $tmp2010 = $tmp2011;
                message2006 = $tmp2010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
            }
            if (((panda$core$Bit) { message2006 == NULL }).value) {
            {
                $tmp2013 = NULL;
                $returnValue1995 = $tmp2013;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2013));
                $tmp1990 = 2;
                goto $l1988;
                $l2014:;
                return $returnValue1995;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2016 = message2006;
                $tmp2017 = NULL;
                message2006 = $tmp2017;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2017));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2016));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2020 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2020, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1991.value).position, expr1999, message2006);
        $tmp2019 = $tmp2020;
        $tmp2018 = $tmp2019;
        $returnValue1995 = $tmp2018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2019));
        $tmp1990 = 3;
        goto $l1988;
        $l2021:;
        return $returnValue1995;
    }
    $l1988:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1999));
    expr1999 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2006));
    switch ($tmp1990) {
        case 1: goto $l2004;
        case 3: goto $l2021;
        case 2: goto $l2014;
        case 0: goto $l1997;
    }
    $l2023:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2027;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2028;
    org$pandalanguage$pandac$ASTNode* $returnValue2031;
    org$pandalanguage$pandac$ASTNode* $tmp2032;
    panda$collections$Array* expressions2035 = NULL;
    panda$collections$Array* $tmp2036;
    panda$collections$Array* $tmp2037;
    org$pandalanguage$pandac$ASTNode* expr2039 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2040;
    org$pandalanguage$pandac$ASTNode* $tmp2041;
    org$pandalanguage$pandac$ASTNode* $tmp2043;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2049;
    org$pandalanguage$pandac$ASTNode* $tmp2051;
    org$pandalanguage$pandac$ASTNode* $tmp2052;
    org$pandalanguage$pandac$ASTNode* $tmp2053;
    org$pandalanguage$pandac$ASTNode* $tmp2055;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2058;
    org$pandalanguage$pandac$ASTNode* $tmp2061;
    panda$collections$Array* statements2064 = NULL;
    panda$collections$Array* $tmp2065;
    panda$collections$Array* $tmp2066;
    org$pandalanguage$pandac$parser$Token$Kind $match$1119_132070;
    org$pandalanguage$pandac$ASTNode* stmt2093 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2094;
    org$pandalanguage$pandac$ASTNode* $tmp2095;
    org$pandalanguage$pandac$ASTNode* $tmp2097;
    org$pandalanguage$pandac$ASTNode* stmt2106 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2107;
    org$pandalanguage$pandac$ASTNode* $tmp2108;
    org$pandalanguage$pandac$ASTNode* $tmp2110;
    org$pandalanguage$pandac$ASTNode* $tmp2115;
    org$pandalanguage$pandac$ASTNode* $tmp2116;
    panda$collections$ImmutableArray* $tmp2118;
    panda$collections$ImmutableArray* $tmp2120;
    int $tmp2026;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2028, ((panda$core$Int64) { 39 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2030 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2028, &$s2029);
        start2027 = $tmp2030;
        if (((panda$core$Bit) { !start2027.nonnull }).value) {
        {
            $tmp2032 = NULL;
            $returnValue2031 = $tmp2032;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
            $tmp2026 = 0;
            goto $l2024;
            $l2033:;
            return $returnValue2031;
        }
        }
        panda$collections$Array* $tmp2038 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2038);
        $tmp2037 = $tmp2038;
        $tmp2036 = $tmp2037;
        expressions2035 = $tmp2036;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
        org$pandalanguage$pandac$ASTNode* $tmp2042 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2041 = $tmp2042;
        $tmp2040 = $tmp2041;
        expr2039 = $tmp2040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2041));
        if (((panda$core$Bit) { expr2039 == NULL }).value) {
        {
            $tmp2043 = NULL;
            $returnValue2031 = $tmp2043;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2043));
            $tmp2026 = 1;
            goto $l2024;
            $l2044:;
            return $returnValue2031;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions2035, ((panda$core$Object*) expr2039));
        $l2046:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2049, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2050 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2049);
        bool $tmp2048 = ((panda$core$Bit) { $tmp2050.nonnull }).value;
        if (!$tmp2048) goto $l2047;
        {
            {
                $tmp2051 = expr2039;
                org$pandalanguage$pandac$ASTNode* $tmp2054 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2053 = $tmp2054;
                $tmp2052 = $tmp2053;
                expr2039 = $tmp2052;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2052));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
            }
            if (((panda$core$Bit) { expr2039 == NULL }).value) {
            {
                $tmp2055 = NULL;
                $returnValue2031 = $tmp2055;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2055));
                $tmp2026 = 2;
                goto $l2024;
                $l2056:;
                return $returnValue2031;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2035, ((panda$core$Object*) expr2039));
        }
        goto $l2046;
        $l2047:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2058, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2060 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2058, &$s2059);
        if (((panda$core$Bit) { !$tmp2060.nonnull }).value) {
        {
            $tmp2061 = NULL;
            $returnValue2031 = $tmp2061;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2061));
            $tmp2026 = 3;
            goto $l2024;
            $l2062:;
            return $returnValue2031;
        }
        }
        panda$collections$Array* $tmp2067 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2067);
        $tmp2066 = $tmp2067;
        $tmp2065 = $tmp2066;
        statements2064 = $tmp2065;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
        $l2068:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2071 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1119_132070 = $tmp2071.kind;
                panda$core$Bit $tmp2074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1119_132070.$rawValue, ((panda$core$Int64) { 39 }));
                bool $tmp2073 = $tmp2074.value;
                if ($tmp2073) goto $l2075;
                panda$core$Bit $tmp2076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1119_132070.$rawValue, ((panda$core$Int64) { 40 }));
                $tmp2073 = $tmp2076.value;
                $l2075:;
                panda$core$Bit $tmp2077 = { $tmp2073 };
                bool $tmp2072 = $tmp2077.value;
                if ($tmp2072) goto $l2078;
                panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1119_132070.$rawValue, ((panda$core$Int64) { 100 }));
                $tmp2072 = $tmp2079.value;
                $l2078:;
                panda$core$Bit $tmp2080 = { $tmp2072 };
                if ($tmp2080.value) {
                {
                    goto $l2069;
                }
                }
                else {
                panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1119_132070.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2082 = $tmp2083.value;
                if ($tmp2082) goto $l2084;
                panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1119_132070.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2082 = $tmp2085.value;
                $l2084:;
                panda$core$Bit $tmp2086 = { $tmp2082 };
                bool $tmp2081 = $tmp2086.value;
                if ($tmp2081) goto $l2087;
                panda$core$Bit $tmp2088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1119_132070.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2081 = $tmp2088.value;
                $l2087:;
                panda$core$Bit $tmp2089 = { $tmp2081 };
                if ($tmp2089.value) {
                {
                    int $tmp2092;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2096 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2095 = $tmp2096;
                        $tmp2094 = $tmp2095;
                        stmt2093 = $tmp2094;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2094));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2095));
                        if (((panda$core$Bit) { stmt2093 == NULL }).value) {
                        {
                            $tmp2097 = NULL;
                            $returnValue2031 = $tmp2097;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
                            $tmp2092 = 0;
                            goto $l2090;
                            $l2098:;
                            $tmp2026 = 4;
                            goto $l2024;
                            $l2099:;
                            return $returnValue2031;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements2064, ((panda$core$Object*) stmt2093));
                        $tmp2092 = 1;
                        goto $l2090;
                        $l2101:;
                        goto $l2069;
                    }
                    $l2090:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2093));
                    stmt2093 = NULL;
                    switch ($tmp2092) {
                        case 1: goto $l2101;
                        case 0: goto $l2098;
                    }
                    $l2102:;
                }
                }
                else {
                {
                    {
                        int $tmp2105;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2109 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2108 = $tmp2109;
                            $tmp2107 = $tmp2108;
                            stmt2106 = $tmp2107;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2107));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
                            if (((panda$core$Bit) { stmt2106 == NULL }).value) {
                            {
                                $tmp2110 = NULL;
                                $returnValue2031 = $tmp2110;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2110));
                                $tmp2105 = 0;
                                goto $l2103;
                                $l2111:;
                                $tmp2026 = 5;
                                goto $l2024;
                                $l2112:;
                                return $returnValue2031;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2064, ((panda$core$Object*) stmt2106));
                        }
                        $tmp2105 = -1;
                        goto $l2103;
                        $l2103:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2106));
                        stmt2106 = NULL;
                        switch ($tmp2105) {
                            case 0: goto $l2111;
                            case -1: goto $l2114;
                        }
                        $l2114:;
                    }
                }
                }
                }
            }
        }
        }
        $l2069:;
        org$pandalanguage$pandac$ASTNode* $tmp2117 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2119 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2035);
        $tmp2118 = $tmp2119;
        panda$collections$ImmutableArray* $tmp2121 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2064);
        $tmp2120 = $tmp2121;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2117, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start2027.value).position, $tmp2118, $tmp2120);
        $tmp2116 = $tmp2117;
        $tmp2115 = $tmp2116;
        $returnValue2031 = $tmp2115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
        $tmp2026 = 6;
        goto $l2024;
        $l2122:;
        return $returnValue2031;
    }
    $l2024:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2035));
    expressions2035 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2039));
    expr2039 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2064));
    statements2064 = NULL;
    switch ($tmp2026) {
        case 4: goto $l2099;
        case 2: goto $l2056;
        case 3: goto $l2062;
        case 6: goto $l2122;
        case 5: goto $l2112;
        case 0: goto $l2033;
        case 1: goto $l2044;
    }
    $l2124:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2129;
    org$pandalanguage$pandac$ASTNode* $returnValue2132;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    org$pandalanguage$pandac$ASTNode* expr2136 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    org$pandalanguage$pandac$ASTNode* $tmp2138;
    org$pandalanguage$pandac$ASTNode* $tmp2140;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2143;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    panda$collections$Array* whens2149 = NULL;
    panda$collections$Array* $tmp2150;
    panda$collections$Array* $tmp2151;
    panda$collections$Array* other2153 = NULL;
    panda$collections$Array* $tmp2154;
    org$pandalanguage$pandac$parser$Token token2157;
    org$pandalanguage$pandac$parser$Token$Kind $match$1160_132159;
    org$pandalanguage$pandac$ASTNode* w2165 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2166;
    org$pandalanguage$pandac$ASTNode* $tmp2167;
    org$pandalanguage$pandac$ASTNode* $tmp2169;
    org$pandalanguage$pandac$parser$Token o2175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2180;
    panda$collections$Array* $tmp2183;
    panda$collections$Array* $tmp2184;
    panda$collections$Array* $tmp2185;
    org$pandalanguage$pandac$parser$Token$Kind $match$1176_252189;
    org$pandalanguage$pandac$ASTNode* stmt2204 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    org$pandalanguage$pandac$ASTNode* $tmp2208;
    org$pandalanguage$pandac$ASTNode* stmt2217 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2218;
    org$pandalanguage$pandac$ASTNode* $tmp2219;
    org$pandalanguage$pandac$ASTNode* $tmp2221;
    panda$core$String* $tmp2226;
    panda$core$String* $tmp2228;
    panda$core$String* $tmp2229;
    panda$core$String* $tmp2231;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2237;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2243;
    org$pandalanguage$pandac$ASTNode* $tmp2244;
    panda$collections$ImmutableArray* $tmp2246;
    panda$collections$ImmutableArray* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    panda$collections$ImmutableArray* $tmp2255;
    int $tmp2127;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2129, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2131 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2129, &$s2130);
        start2128 = $tmp2131;
        if (((panda$core$Bit) { !start2128.nonnull }).value) {
        {
            $tmp2133 = NULL;
            $returnValue2132 = $tmp2133;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
            $tmp2127 = 0;
            goto $l2125;
            $l2134:;
            return $returnValue2132;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2139 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2138 = $tmp2139;
        $tmp2137 = $tmp2138;
        expr2136 = $tmp2137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
        if (((panda$core$Bit) { expr2136 == NULL }).value) {
        {
            $tmp2140 = NULL;
            $returnValue2132 = $tmp2140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2140));
            $tmp2127 = 1;
            goto $l2125;
            $l2141:;
            return $returnValue2132;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2143, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2145 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2143, &$s2144);
        if (((panda$core$Bit) { !$tmp2145.nonnull }).value) {
        {
            $tmp2146 = NULL;
            $returnValue2132 = $tmp2146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2146));
            $tmp2127 = 2;
            goto $l2125;
            $l2147:;
            return $returnValue2132;
        }
        }
        panda$collections$Array* $tmp2152 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2152);
        $tmp2151 = $tmp2152;
        $tmp2150 = $tmp2151;
        whens2149 = $tmp2150;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2151));
        $tmp2154 = NULL;
        other2153 = $tmp2154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2154));
        $l2155:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2158 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2157 = $tmp2158;
            {
                $match$1160_132159 = token2157.kind;
                panda$core$Bit $tmp2160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1160_132159.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2160.value) {
                {
                    goto $l2156;
                }
                }
                else {
                panda$core$Bit $tmp2161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1160_132159.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2161.value) {
                {
                    int $tmp2164;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2168 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2167 = $tmp2168;
                        $tmp2166 = $tmp2167;
                        w2165 = $tmp2166;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2166));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
                        if (((panda$core$Bit) { w2165 == NULL }).value) {
                        {
                            $tmp2169 = NULL;
                            $returnValue2132 = $tmp2169;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2169));
                            $tmp2164 = 0;
                            goto $l2162;
                            $l2170:;
                            $tmp2127 = 3;
                            goto $l2125;
                            $l2171:;
                            return $returnValue2132;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2149, ((panda$core$Object*) w2165));
                    }
                    $tmp2164 = -1;
                    goto $l2162;
                    $l2162:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2165));
                    w2165 = NULL;
                    switch ($tmp2164) {
                        case -1: goto $l2173;
                        case 0: goto $l2170;
                    }
                    $l2173:;
                }
                }
                else {
                panda$core$Bit $tmp2174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1160_132159.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2174.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2176 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2175 = $tmp2176;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2177, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2179 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2177, &$s2178);
                    if (((panda$core$Bit) { !$tmp2179.nonnull }).value) {
                    {
                        $tmp2180 = NULL;
                        $returnValue2132 = $tmp2180;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
                        $tmp2127 = 4;
                        goto $l2125;
                        $l2181:;
                        return $returnValue2132;
                    }
                    }
                    {
                        $tmp2183 = other2153;
                        panda$collections$Array* $tmp2186 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2186);
                        $tmp2185 = $tmp2186;
                        $tmp2184 = $tmp2185;
                        other2153 = $tmp2184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
                    }
                    $l2187:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2190 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1176_252189 = $tmp2190.kind;
                            panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1176_252189.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2191.value) {
                            {
                                goto $l2188;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1176_252189.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2193 = $tmp2194.value;
                            if ($tmp2193) goto $l2195;
                            panda$core$Bit $tmp2196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1176_252189.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2193 = $tmp2196.value;
                            $l2195:;
                            panda$core$Bit $tmp2197 = { $tmp2193 };
                            bool $tmp2192 = $tmp2197.value;
                            if ($tmp2192) goto $l2198;
                            panda$core$Bit $tmp2199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1176_252189.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2192 = $tmp2199.value;
                            $l2198:;
                            panda$core$Bit $tmp2200 = { $tmp2192 };
                            if ($tmp2200.value) {
                            {
                                int $tmp2203;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2207 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2206 = $tmp2207;
                                    $tmp2205 = $tmp2206;
                                    stmt2204 = $tmp2205;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2205));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2206));
                                    if (((panda$core$Bit) { stmt2204 == NULL }).value) {
                                    {
                                        $tmp2208 = NULL;
                                        $returnValue2132 = $tmp2208;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2208));
                                        $tmp2203 = 0;
                                        goto $l2201;
                                        $l2209:;
                                        $tmp2127 = 5;
                                        goto $l2125;
                                        $l2210:;
                                        return $returnValue2132;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2153, ((panda$core$Object*) stmt2204));
                                    $tmp2203 = 1;
                                    goto $l2201;
                                    $l2212:;
                                    goto $l2188;
                                }
                                $l2201:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2204));
                                stmt2204 = NULL;
                                switch ($tmp2203) {
                                    case 1: goto $l2212;
                                    case 0: goto $l2209;
                                }
                                $l2213:;
                            }
                            }
                            else {
                            {
                                int $tmp2216;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2220 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2219 = $tmp2220;
                                    $tmp2218 = $tmp2219;
                                    stmt2217 = $tmp2218;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
                                    if (((panda$core$Bit) { stmt2217 == NULL }).value) {
                                    {
                                        $tmp2221 = NULL;
                                        $returnValue2132 = $tmp2221;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
                                        $tmp2216 = 0;
                                        goto $l2214;
                                        $l2222:;
                                        $tmp2127 = 6;
                                        goto $l2125;
                                        $l2223:;
                                        return $returnValue2132;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2153, ((panda$core$Object*) stmt2217));
                                }
                                $tmp2216 = -1;
                                goto $l2214;
                                $l2214:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2217));
                                stmt2217 = NULL;
                                switch ($tmp2216) {
                                    case 0: goto $l2222;
                                    case -1: goto $l2225;
                                }
                                $l2225:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2188:;
                    goto $l2156;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2232 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2157);
                    $tmp2231 = $tmp2232;
                    panda$core$String* $tmp2233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2230, $tmp2231);
                    $tmp2229 = $tmp2233;
                    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2234);
                    $tmp2228 = $tmp2235;
                    panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2227, $tmp2228);
                    $tmp2226 = $tmp2236;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2157, $tmp2226);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
                }
                }
                }
                }
            }
        }
        }
        $l2156:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2237, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2239 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2237, &$s2238);
        if (((panda$core$Bit) { !$tmp2239.nonnull }).value) {
        {
            $tmp2240 = NULL;
            $returnValue2132 = $tmp2240;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
            $tmp2127 = 7;
            goto $l2125;
            $l2241:;
            return $returnValue2132;
        }
        }
        if (((panda$core$Bit) { other2153 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2245 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2247 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2149);
            $tmp2246 = $tmp2247;
            panda$collections$ImmutableArray* $tmp2249 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2153);
            $tmp2248 = $tmp2249;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2245, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2128.value).position, expr2136, $tmp2246, $tmp2248);
            $tmp2244 = $tmp2245;
            $tmp2243 = $tmp2244;
            $returnValue2132 = $tmp2243;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
            $tmp2127 = 8;
            goto $l2125;
            $l2250:;
            return $returnValue2132;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2254 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2256 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2149);
        $tmp2255 = $tmp2256;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2254, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2128.value).position, expr2136, $tmp2255, NULL);
        $tmp2253 = $tmp2254;
        $tmp2252 = $tmp2253;
        $returnValue2132 = $tmp2252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
        $tmp2127 = 9;
        goto $l2125;
        $l2257:;
        return $returnValue2132;
    }
    $l2125:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2136));
    expr2136 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2149));
    whens2149 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2153));
    switch ($tmp2127) {
        case 3: goto $l2171;
        case 8: goto $l2250;
        case 6: goto $l2223;
        case 4: goto $l2181;
        case 5: goto $l2210;
        case 9: goto $l2257;
        case 1: goto $l2141;
        case 7: goto $l2241;
        case 2: goto $l2147;
        case 0: goto $l2134;
    }
    $l2259:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2263;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2264;
    panda$collections$ImmutableArray* $returnValue2267;
    panda$collections$ImmutableArray* $tmp2268;
    panda$collections$Array* result2271 = NULL;
    panda$collections$Array* $tmp2272;
    panda$collections$Array* $tmp2273;
    org$pandalanguage$pandac$parser$Token$Kind $match$1220_132277;
    org$pandalanguage$pandac$ASTNode* stmt2292 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2293;
    org$pandalanguage$pandac$ASTNode* $tmp2294;
    panda$collections$ImmutableArray* $tmp2296;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2300;
    panda$collections$ImmutableArray* $tmp2303;
    org$pandalanguage$pandac$ASTNode* stmt2312 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    org$pandalanguage$pandac$ASTNode* $tmp2314;
    panda$collections$ImmutableArray* $tmp2316;
    panda$collections$ImmutableArray* $tmp2321;
    panda$collections$ImmutableArray* $tmp2322;
    int $tmp2262;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2264, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2266 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2264, &$s2265);
        start2263 = $tmp2266;
        if (((panda$core$Bit) { !start2263.nonnull }).value) {
        {
            $tmp2268 = NULL;
            $returnValue2267 = $tmp2268;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2268));
            $tmp2262 = 0;
            goto $l2260;
            $l2269:;
            return $returnValue2267;
        }
        }
        panda$collections$Array* $tmp2274 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2274);
        $tmp2273 = $tmp2274;
        $tmp2272 = $tmp2273;
        result2271 = $tmp2272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
        $l2275:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2278 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1220_132277 = $tmp2278.kind;
                panda$core$Bit $tmp2279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_132277.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2279.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2276;
                }
                }
                else {
                panda$core$Bit $tmp2282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_132277.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2281 = $tmp2282.value;
                if ($tmp2281) goto $l2283;
                panda$core$Bit $tmp2284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_132277.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2281 = $tmp2284.value;
                $l2283:;
                panda$core$Bit $tmp2285 = { $tmp2281 };
                bool $tmp2280 = $tmp2285.value;
                if ($tmp2280) goto $l2286;
                panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1220_132277.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2280 = $tmp2287.value;
                $l2286:;
                panda$core$Bit $tmp2288 = { $tmp2280 };
                if ($tmp2288.value) {
                {
                    int $tmp2291;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2295 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2294 = $tmp2295;
                        $tmp2293 = $tmp2294;
                        stmt2292 = $tmp2293;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2293));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
                        if (((panda$core$Bit) { stmt2292 == NULL }).value) {
                        {
                            $tmp2296 = NULL;
                            $returnValue2267 = $tmp2296;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2296));
                            $tmp2291 = 0;
                            goto $l2289;
                            $l2297:;
                            $tmp2262 = 1;
                            goto $l2260;
                            $l2298:;
                            return $returnValue2267;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2300, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2302 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2300, &$s2301);
                        if (((panda$core$Bit) { !$tmp2302.nonnull }).value) {
                        {
                            $tmp2303 = NULL;
                            $returnValue2267 = $tmp2303;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
                            $tmp2291 = 1;
                            goto $l2289;
                            $l2304:;
                            $tmp2262 = 2;
                            goto $l2260;
                            $l2305:;
                            return $returnValue2267;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2271, ((panda$core$Object*) stmt2292));
                        $tmp2291 = 2;
                        goto $l2289;
                        $l2307:;
                        goto $l2276;
                    }
                    $l2289:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2292));
                    stmt2292 = NULL;
                    switch ($tmp2291) {
                        case 1: goto $l2304;
                        case 0: goto $l2297;
                        case 2: goto $l2307;
                    }
                    $l2308:;
                }
                }
                else {
                {
                    int $tmp2311;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2315 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2314 = $tmp2315;
                        $tmp2313 = $tmp2314;
                        stmt2312 = $tmp2313;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2313));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
                        if (((panda$core$Bit) { stmt2312 == NULL }).value) {
                        {
                            $tmp2316 = NULL;
                            $returnValue2267 = $tmp2316;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2316));
                            $tmp2311 = 0;
                            goto $l2309;
                            $l2317:;
                            $tmp2262 = 3;
                            goto $l2260;
                            $l2318:;
                            return $returnValue2267;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2271, ((panda$core$Object*) stmt2312));
                    }
                    $tmp2311 = -1;
                    goto $l2309;
                    $l2309:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2312));
                    stmt2312 = NULL;
                    switch ($tmp2311) {
                        case -1: goto $l2320;
                        case 0: goto $l2317;
                    }
                    $l2320:;
                }
                }
                }
            }
        }
        }
        $l2276:;
        panda$collections$ImmutableArray* $tmp2323 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2271);
        $tmp2322 = $tmp2323;
        $tmp2321 = $tmp2322;
        $returnValue2267 = $tmp2321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2322));
        $tmp2262 = 4;
        goto $l2260;
        $l2324:;
        return $returnValue2267;
    }
    $l2260:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2271));
    result2271 = NULL;
    switch ($tmp2262) {
        case 1: goto $l2298;
        case 4: goto $l2324;
        case 3: goto $l2318;
        case 2: goto $l2305;
        case 0: goto $l2269;
    }
    $l2326:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2330 = NULL;
    panda$collections$ImmutableArray* $tmp2331;
    panda$collections$ImmutableArray* $tmp2332;
    org$pandalanguage$pandac$ASTNode* $returnValue2334;
    org$pandalanguage$pandac$ASTNode* $tmp2335;
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    org$pandalanguage$pandac$ASTNode* $tmp2339;
    org$pandalanguage$pandac$Position $tmp2341;
    int $tmp2329;
    {
        panda$collections$ImmutableArray* $tmp2333 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2332 = $tmp2333;
        $tmp2331 = $tmp2332;
        statements2330 = $tmp2331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2332));
        if (((panda$core$Bit) { statements2330 == NULL }).value) {
        {
            $tmp2335 = NULL;
            $returnValue2334 = $tmp2335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2335));
            $tmp2329 = 0;
            goto $l2327;
            $l2336:;
            return $returnValue2334;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2340 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2341);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2340, ((panda$core$Int64) { 6 }), $tmp2341, statements2330);
        $tmp2339 = $tmp2340;
        $tmp2338 = $tmp2339;
        $returnValue2334 = $tmp2338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
        $tmp2329 = 1;
        goto $l2327;
        $l2342:;
        return $returnValue2334;
    }
    $l2327:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2330));
    statements2330 = NULL;
    switch ($tmp2329) {
        case 1: goto $l2342;
        case 0: goto $l2336;
    }
    $l2344:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2348 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2349;
    org$pandalanguage$pandac$ASTNode* $tmp2350;
    org$pandalanguage$pandac$ASTNode* $returnValue2352;
    org$pandalanguage$pandac$ASTNode* $tmp2353;
    org$pandalanguage$pandac$parser$Token$Kind $match$1264_92356;
    org$pandalanguage$pandac$parser$Token op2422;
    org$pandalanguage$pandac$ASTNode* rvalue2424 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2425;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2432;
    org$pandalanguage$pandac$ASTNode* $tmp2433;
    org$pandalanguage$pandac$parser$Token op2447;
    org$pandalanguage$pandac$ASTNode* rvalue2449 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2450;
    org$pandalanguage$pandac$ASTNode* $tmp2451;
    org$pandalanguage$pandac$ASTNode* $tmp2453;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    org$pandalanguage$pandac$ASTNode* $tmp2458;
    org$pandalanguage$pandac$ASTNode* $tmp2466;
    int $tmp2347;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2351 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2350 = $tmp2351;
        $tmp2349 = $tmp2350;
        start2348 = $tmp2349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
        if (((panda$core$Bit) { start2348 == NULL }).value) {
        {
            $tmp2353 = NULL;
            $returnValue2352 = $tmp2353;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
            $tmp2347 = 0;
            goto $l2345;
            $l2354:;
            return $returnValue2352;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2357 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1264_92356 = $tmp2357.kind;
            panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2372 = $tmp2373.value;
            if ($tmp2372) goto $l2374;
            panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2372 = $tmp2375.value;
            $l2374:;
            panda$core$Bit $tmp2376 = { $tmp2372 };
            bool $tmp2371 = $tmp2376.value;
            if ($tmp2371) goto $l2377;
            panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2371 = $tmp2378.value;
            $l2377:;
            panda$core$Bit $tmp2379 = { $tmp2371 };
            bool $tmp2370 = $tmp2379.value;
            if ($tmp2370) goto $l2380;
            panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2370 = $tmp2381.value;
            $l2380:;
            panda$core$Bit $tmp2382 = { $tmp2370 };
            bool $tmp2369 = $tmp2382.value;
            if ($tmp2369) goto $l2383;
            panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2369 = $tmp2384.value;
            $l2383:;
            panda$core$Bit $tmp2385 = { $tmp2369 };
            bool $tmp2368 = $tmp2385.value;
            if ($tmp2368) goto $l2386;
            panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2368 = $tmp2387.value;
            $l2386:;
            panda$core$Bit $tmp2388 = { $tmp2368 };
            bool $tmp2367 = $tmp2388.value;
            if ($tmp2367) goto $l2389;
            panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2367 = $tmp2390.value;
            $l2389:;
            panda$core$Bit $tmp2391 = { $tmp2367 };
            bool $tmp2366 = $tmp2391.value;
            if ($tmp2366) goto $l2392;
            panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2366 = $tmp2393.value;
            $l2392:;
            panda$core$Bit $tmp2394 = { $tmp2366 };
            bool $tmp2365 = $tmp2394.value;
            if ($tmp2365) goto $l2395;
            panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2365 = $tmp2396.value;
            $l2395:;
            panda$core$Bit $tmp2397 = { $tmp2365 };
            bool $tmp2364 = $tmp2397.value;
            if ($tmp2364) goto $l2398;
            panda$core$Bit $tmp2399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2364 = $tmp2399.value;
            $l2398:;
            panda$core$Bit $tmp2400 = { $tmp2364 };
            bool $tmp2363 = $tmp2400.value;
            if ($tmp2363) goto $l2401;
            panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2363 = $tmp2402.value;
            $l2401:;
            panda$core$Bit $tmp2403 = { $tmp2363 };
            bool $tmp2362 = $tmp2403.value;
            if ($tmp2362) goto $l2404;
            panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2362 = $tmp2405.value;
            $l2404:;
            panda$core$Bit $tmp2406 = { $tmp2362 };
            bool $tmp2361 = $tmp2406.value;
            if ($tmp2361) goto $l2407;
            panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2361 = $tmp2408.value;
            $l2407:;
            panda$core$Bit $tmp2409 = { $tmp2361 };
            bool $tmp2360 = $tmp2409.value;
            if ($tmp2360) goto $l2410;
            panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2360 = $tmp2411.value;
            $l2410:;
            panda$core$Bit $tmp2412 = { $tmp2360 };
            bool $tmp2359 = $tmp2412.value;
            if ($tmp2359) goto $l2413;
            panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2359 = $tmp2414.value;
            $l2413:;
            panda$core$Bit $tmp2415 = { $tmp2359 };
            bool $tmp2358 = $tmp2415.value;
            if ($tmp2358) goto $l2416;
            panda$core$Bit $tmp2417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2358 = $tmp2417.value;
            $l2416:;
            panda$core$Bit $tmp2418 = { $tmp2358 };
            if ($tmp2418.value) {
            {
                int $tmp2421;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2423 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2422 = $tmp2423;
                    org$pandalanguage$pandac$ASTNode* $tmp2427 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2426 = $tmp2427;
                    $tmp2425 = $tmp2426;
                    rvalue2424 = $tmp2425;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
                    if (((panda$core$Bit) { rvalue2424 == NULL }).value) {
                    {
                        $tmp2428 = NULL;
                        $returnValue2352 = $tmp2428;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2428));
                        $tmp2421 = 0;
                        goto $l2419;
                        $l2429:;
                        $tmp2347 = 1;
                        goto $l2345;
                        $l2430:;
                        return $returnValue2352;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2434 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2436 = (($fn2435) start2348->$class->vtable[2])(start2348);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2434, ((panda$core$Int64) { 4 }), $tmp2436, start2348, op2422.kind, rvalue2424);
                    $tmp2433 = $tmp2434;
                    $tmp2432 = $tmp2433;
                    $returnValue2352 = $tmp2432;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2432));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2433));
                    $tmp2421 = 1;
                    goto $l2419;
                    $l2437:;
                    $tmp2347 = 2;
                    goto $l2345;
                    $l2438:;
                    return $returnValue2352;
                }
                $l2419:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2424));
                rvalue2424 = NULL;
                switch ($tmp2421) {
                    case 0: goto $l2429;
                    case 1: goto $l2437;
                }
                $l2440:;
            }
            }
            else {
            panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1264_92356.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2441.value) {
            {
                int $tmp2444;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2445 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2445, &$s2446);
                    org$pandalanguage$pandac$parser$Token $tmp2448 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2447 = $tmp2448;
                    org$pandalanguage$pandac$ASTNode* $tmp2452 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2451 = $tmp2452;
                    $tmp2450 = $tmp2451;
                    rvalue2449 = $tmp2450;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
                    if (((panda$core$Bit) { rvalue2449 == NULL }).value) {
                    {
                        $tmp2453 = NULL;
                        $returnValue2352 = $tmp2453;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
                        $tmp2444 = 0;
                        goto $l2442;
                        $l2454:;
                        $tmp2347 = 3;
                        goto $l2345;
                        $l2455:;
                        return $returnValue2352;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2459 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2461 = (($fn2460) start2348->$class->vtable[2])(start2348);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2459, ((panda$core$Int64) { 4 }), $tmp2461, start2348, op2447.kind, rvalue2449);
                    $tmp2458 = $tmp2459;
                    $tmp2457 = $tmp2458;
                    $returnValue2352 = $tmp2457;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2457));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2458));
                    $tmp2444 = 1;
                    goto $l2442;
                    $l2462:;
                    $tmp2347 = 4;
                    goto $l2345;
                    $l2463:;
                    return $returnValue2352;
                }
                $l2442:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2449));
                rvalue2449 = NULL;
                switch ($tmp2444) {
                    case 1: goto $l2462;
                    case 0: goto $l2454;
                }
                $l2465:;
            }
            }
            else {
            {
                $tmp2466 = start2348;
                $returnValue2352 = $tmp2466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2466));
                $tmp2347 = 5;
                goto $l2345;
                $l2467:;
                return $returnValue2352;
            }
            }
            }
        }
    }
    $tmp2347 = -1;
    goto $l2345;
    $l2345:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2348));
    start2348 = NULL;
    switch ($tmp2347) {
        case 3: goto $l2455;
        case 5: goto $l2467;
        case -1: goto $l2469;
        case 2: goto $l2438;
        case 1: goto $l2430;
        case 0: goto $l2354;
        case 4: goto $l2463;
    }
    $l2469:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t2473 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2474;
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    org$pandalanguage$pandac$ASTNode* $returnValue2477;
    org$pandalanguage$pandac$ASTNode* $tmp2478;
    org$pandalanguage$pandac$ASTNode* value2481 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2482;
    org$pandalanguage$pandac$ASTNode* $tmp2484;
    org$pandalanguage$pandac$ASTNode* $tmp2485;
    org$pandalanguage$pandac$ASTNode* $tmp2486;
    org$pandalanguage$pandac$ASTNode* $tmp2488;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $tmp2496;
    org$pandalanguage$pandac$ASTNode* $tmp2497;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    org$pandalanguage$pandac$ASTNode* $tmp2502;
    org$pandalanguage$pandac$ASTNode* $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2504;
    org$pandalanguage$pandac$ASTNode* $tmp2505;
    int $tmp2472;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2476 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2475 = $tmp2476;
        $tmp2474 = $tmp2475;
        t2473 = $tmp2474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2475));
        if (((panda$core$Bit) { t2473 == NULL }).value) {
        {
            $tmp2478 = NULL;
            $returnValue2477 = $tmp2478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2478));
            $tmp2472 = 0;
            goto $l2470;
            $l2479:;
            return $returnValue2477;
        }
        }
        memset(&value2481, 0, sizeof(value2481));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2482, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2483 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2482);
        if (((panda$core$Bit) { $tmp2483.nonnull }).value) {
        {
            {
                $tmp2484 = value2481;
                org$pandalanguage$pandac$ASTNode* $tmp2487 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2486 = $tmp2487;
                $tmp2485 = $tmp2486;
                value2481 = $tmp2485;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2485));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2484));
            }
            if (((panda$core$Bit) { value2481 == NULL }).value) {
            {
                $tmp2488 = NULL;
                $returnValue2477 = $tmp2488;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2488));
                $tmp2472 = 1;
                goto $l2470;
                $l2489:;
                return $returnValue2477;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp2491 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp2492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2491.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2492.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2493 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2493, &$s2494);
            {
                $tmp2495 = value2481;
                org$pandalanguage$pandac$ASTNode* $tmp2498 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2497 = $tmp2498;
                $tmp2496 = $tmp2497;
                value2481 = $tmp2496;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
            }
            if (((panda$core$Bit) { value2481 == NULL }).value) {
            {
                $tmp2499 = NULL;
                $returnValue2477 = $tmp2499;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
                $tmp2472 = 2;
                goto $l2470;
                $l2500:;
                return $returnValue2477;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2502 = value2481;
                $tmp2503 = NULL;
                value2481 = $tmp2503;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2503));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2502));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2506 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2508 = (($fn2507) t2473->$class->vtable[2])(t2473);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2506, ((panda$core$Int64) { 13 }), $tmp2508, t2473, value2481);
        $tmp2505 = $tmp2506;
        $tmp2504 = $tmp2505;
        $returnValue2477 = $tmp2504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2505));
        $tmp2472 = 3;
        goto $l2470;
        $l2509:;
        return $returnValue2477;
    }
    $l2470:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2473));
    t2473 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2481));
    switch ($tmp2472) {
        case 1: goto $l2489;
        case 3: goto $l2509;
        case 2: goto $l2500;
        case 0: goto $l2479;
    }
    $l2511:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2515;
    org$pandalanguage$pandac$Variable$Kind kind2517;
    org$pandalanguage$pandac$parser$Token$Kind $match$1323_92518;
    org$pandalanguage$pandac$Variable$Kind $tmp2520;
    org$pandalanguage$pandac$Variable$Kind $tmp2522;
    org$pandalanguage$pandac$Variable$Kind $tmp2524;
    org$pandalanguage$pandac$Variable$Kind $tmp2526;
    panda$collections$Array* declarations2528 = NULL;
    panda$collections$Array* $tmp2529;
    panda$collections$Array* $tmp2530;
    org$pandalanguage$pandac$ASTNode* decl2532 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2533;
    org$pandalanguage$pandac$ASTNode* $tmp2534;
    org$pandalanguage$pandac$ASTNode* $returnValue2536;
    org$pandalanguage$pandac$ASTNode* $tmp2537;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2543;
    org$pandalanguage$pandac$ASTNode* decl2548 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2549;
    org$pandalanguage$pandac$ASTNode* $tmp2550;
    org$pandalanguage$pandac$ASTNode* $tmp2552;
    org$pandalanguage$pandac$ASTNode* $tmp2557;
    org$pandalanguage$pandac$ASTNode* $tmp2558;
    panda$collections$ImmutableArray* $tmp2560;
    int $tmp2514;
    {
        org$pandalanguage$pandac$parser$Token $tmp2516 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start2515 = $tmp2516;
        memset(&kind2517, 0, sizeof(kind2517));
        {
            $match$1323_92518 = start2515.kind;
            panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1323_92518.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2519.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2520, ((panda$core$Int64) { 0 }));
                kind2517 = $tmp2520;
            }
            }
            else {
            panda$core$Bit $tmp2521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1323_92518.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2521.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2522, ((panda$core$Int64) { 1 }));
                kind2517 = $tmp2522;
            }
            }
            else {
            panda$core$Bit $tmp2523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1323_92518.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2523.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2524, ((panda$core$Int64) { 3 }));
                kind2517 = $tmp2524;
            }
            }
            else {
            panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1323_92518.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2525.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2526, ((panda$core$Int64) { 2 }));
                kind2517 = $tmp2526;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start2515, &$s2527);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp2531 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2531);
        $tmp2530 = $tmp2531;
        $tmp2529 = $tmp2530;
        declarations2528 = $tmp2529;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
        org$pandalanguage$pandac$ASTNode* $tmp2535 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2534 = $tmp2535;
        $tmp2533 = $tmp2534;
        decl2532 = $tmp2533;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2534));
        if (((panda$core$Bit) { decl2532 == NULL }).value) {
        {
            $tmp2537 = NULL;
            $returnValue2536 = $tmp2537;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2537));
            $tmp2514 = 0;
            goto $l2512;
            $l2538:;
            return $returnValue2536;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations2528, ((panda$core$Object*) decl2532));
        $l2540:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2543, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2544 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2543);
        bool $tmp2542 = ((panda$core$Bit) { $tmp2544.nonnull }).value;
        if (!$tmp2542) goto $l2541;
        {
            int $tmp2547;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2551 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2550 = $tmp2551;
                $tmp2549 = $tmp2550;
                decl2548 = $tmp2549;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2550));
                if (((panda$core$Bit) { decl2548 == NULL }).value) {
                {
                    $tmp2552 = NULL;
                    $returnValue2536 = $tmp2552;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2552));
                    $tmp2547 = 0;
                    goto $l2545;
                    $l2553:;
                    $tmp2514 = 1;
                    goto $l2512;
                    $l2554:;
                    return $returnValue2536;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations2528, ((panda$core$Object*) decl2548));
            }
            $tmp2547 = -1;
            goto $l2545;
            $l2545:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2548));
            decl2548 = NULL;
            switch ($tmp2547) {
                case 0: goto $l2553;
                case -1: goto $l2556;
            }
            $l2556:;
        }
        goto $l2540;
        $l2541:;
        org$pandalanguage$pandac$ASTNode* $tmp2559 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2561 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations2528);
        $tmp2560 = $tmp2561;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2559, ((panda$core$Int64) { 41 }), start2515.position, kind2517, $tmp2560);
        $tmp2558 = $tmp2559;
        $tmp2557 = $tmp2558;
        $returnValue2536 = $tmp2557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
        $tmp2514 = 2;
        goto $l2512;
        $l2562:;
        return $returnValue2536;
    }
    $l2512:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2528));
    declarations2528 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2532));
    decl2532 = NULL;
    switch ($tmp2514) {
        case 2: goto $l2562;
        case 1: goto $l2554;
        case 0: goto $l2538;
    }
    $l2564:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2568;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2569;
    org$pandalanguage$pandac$ASTNode* $returnValue2572;
    org$pandalanguage$pandac$ASTNode* $tmp2573;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2576;
    org$pandalanguage$pandac$ASTNode* $tmp2579;
    panda$core$Object* $tmp2582;
    org$pandalanguage$pandac$ASTNode* target2584 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2585;
    org$pandalanguage$pandac$ASTNode* $tmp2586;
    panda$core$String* $tmp2588;
    panda$collections$Array* args2590 = NULL;
    panda$collections$Array* $tmp2591;
    panda$collections$Array* $tmp2592;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2594;
    org$pandalanguage$pandac$ASTNode* expr2599 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2600;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    panda$core$Object* $tmp2603;
    org$pandalanguage$pandac$ASTNode* $tmp2605;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2612;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$ASTNode* $tmp2615;
    org$pandalanguage$pandac$ASTNode* $tmp2616;
    panda$core$Object* $tmp2618;
    org$pandalanguage$pandac$ASTNode* $tmp2620;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2624;
    panda$core$Object* $tmp2627;
    org$pandalanguage$pandac$ASTNode* $tmp2629;
    panda$core$Object* $tmp2634;
    org$pandalanguage$pandac$ASTNode* $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2637;
    panda$collections$ImmutableArray* $tmp2639;
    int $tmp2567;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2569, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2571 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2569, &$s2570);
        start2568 = $tmp2571;
        if (((panda$core$Bit) { !start2568.nonnull }).value) {
        {
            $tmp2573 = NULL;
            $returnValue2572 = $tmp2573;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2573));
            $tmp2567 = 0;
            goto $l2565;
            $l2574:;
            return $returnValue2572;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2576, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2578 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2576, &$s2577);
        if (((panda$core$Bit) { !$tmp2578.nonnull }).value) {
        {
            $tmp2579 = NULL;
            $returnValue2572 = $tmp2579;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2579));
            $tmp2567 = 1;
            goto $l2565;
            $l2580:;
            return $returnValue2572;
        }
        }
        panda$core$Bit$wrapper* $tmp2583;
        $tmp2583 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp2583->value = ((panda$core$Bit) { true });
        $tmp2582 = ((panda$core$Object*) $tmp2583);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2582);
        panda$core$Panda$unref$panda$core$Object($tmp2582);
        org$pandalanguage$pandac$ASTNode* $tmp2587 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2589 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2568.value));
        $tmp2588 = $tmp2589;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2587, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start2568.value).position, $tmp2588);
        $tmp2586 = $tmp2587;
        $tmp2585 = $tmp2586;
        target2584 = $tmp2585;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
        panda$collections$Array* $tmp2593 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2593);
        $tmp2592 = $tmp2593;
        $tmp2591 = $tmp2592;
        args2590 = $tmp2591;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2591));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2594, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2595 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2594);
        if (((panda$core$Bit) { !$tmp2595.nonnull }).value) {
        {
            int $tmp2598;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2602 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2601 = $tmp2602;
                $tmp2600 = $tmp2601;
                expr2599 = $tmp2600;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
                if (((panda$core$Bit) { expr2599 == NULL }).value) {
                {
                    panda$core$Object* $tmp2604 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2603 = $tmp2604;
                    panda$core$Panda$unref$panda$core$Object($tmp2603);
                    $tmp2605 = NULL;
                    $returnValue2572 = $tmp2605;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2605));
                    $tmp2598 = 0;
                    goto $l2596;
                    $l2606:;
                    $tmp2567 = 2;
                    goto $l2565;
                    $l2607:;
                    return $returnValue2572;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args2590, ((panda$core$Object*) expr2599));
                $l2609:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2612, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2613 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2612);
                bool $tmp2611 = ((panda$core$Bit) { $tmp2613.nonnull }).value;
                if (!$tmp2611) goto $l2610;
                {
                    {
                        $tmp2614 = expr2599;
                        org$pandalanguage$pandac$ASTNode* $tmp2617 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2616 = $tmp2617;
                        $tmp2615 = $tmp2616;
                        expr2599 = $tmp2615;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2615));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2616));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
                    }
                    if (((panda$core$Bit) { expr2599 == NULL }).value) {
                    {
                        panda$core$Object* $tmp2619 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2618 = $tmp2619;
                        panda$core$Panda$unref$panda$core$Object($tmp2618);
                        $tmp2620 = NULL;
                        $returnValue2572 = $tmp2620;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2620));
                        $tmp2598 = 1;
                        goto $l2596;
                        $l2621:;
                        $tmp2567 = 3;
                        goto $l2565;
                        $l2622:;
                        return $returnValue2572;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args2590, ((panda$core$Object*) expr2599));
                }
                goto $l2609;
                $l2610:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2624, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2626 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2624, &$s2625);
                if (((panda$core$Bit) { !$tmp2626.nonnull }).value) {
                {
                    panda$core$Object* $tmp2628 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2627 = $tmp2628;
                    panda$core$Panda$unref$panda$core$Object($tmp2627);
                    $tmp2629 = NULL;
                    $returnValue2572 = $tmp2629;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2629));
                    $tmp2598 = 2;
                    goto $l2596;
                    $l2630:;
                    $tmp2567 = 4;
                    goto $l2565;
                    $l2631:;
                    return $returnValue2572;
                }
                }
            }
            $tmp2598 = -1;
            goto $l2596;
            $l2596:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2599));
            expr2599 = NULL;
            switch ($tmp2598) {
                case -1: goto $l2633;
                case 2: goto $l2630;
                case 0: goto $l2606;
                case 1: goto $l2621;
            }
            $l2633:;
        }
        }
        panda$core$Object* $tmp2635 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp2634 = $tmp2635;
        panda$core$Panda$unref$panda$core$Object($tmp2634);
        org$pandalanguage$pandac$ASTNode* $tmp2638 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2640 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2590);
        $tmp2639 = $tmp2640;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2638, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$parser$Token) start2568.value).position, target2584, $tmp2639);
        $tmp2637 = $tmp2638;
        $tmp2636 = $tmp2637;
        $returnValue2572 = $tmp2636;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2636));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
        $tmp2567 = 5;
        goto $l2565;
        $l2641:;
        return $returnValue2572;
    }
    $l2565:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2584));
    target2584 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2590));
    args2590 = NULL;
    switch ($tmp2567) {
        case 4: goto $l2631;
        case 5: goto $l2641;
        case 3: goto $l2622;
        case 2: goto $l2607;
        case 1: goto $l2580;
        case 0: goto $l2574;
    }
    $l2643:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2644;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2645;
    org$pandalanguage$pandac$ASTNode* $returnValue2648;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    org$pandalanguage$pandac$parser$Token$nullable label2651;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2652;
    org$pandalanguage$pandac$ASTNode* $tmp2654;
    org$pandalanguage$pandac$ASTNode* $tmp2655;
    panda$core$String* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $tmp2660;
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2645, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2647 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2645, &$s2646);
    start2644 = $tmp2647;
    if (((panda$core$Bit) { !start2644.nonnull }).value) {
    {
        $tmp2649 = NULL;
        $returnValue2648 = $tmp2649;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2649));
        return $returnValue2648;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2652, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2653 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2652);
    label2651 = $tmp2653;
    if (((panda$core$Bit) { label2651.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2656 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2658 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2651.value));
        $tmp2657 = $tmp2658;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2656, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2644.value).position, $tmp2657);
        $tmp2655 = $tmp2656;
        $tmp2654 = $tmp2655;
        $returnValue2648 = $tmp2654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2657));
        return $returnValue2648;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2662 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2662, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2644.value).position, NULL);
    $tmp2661 = $tmp2662;
    $tmp2660 = $tmp2661;
    $returnValue2648 = $tmp2660;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2660));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2661));
    return $returnValue2648;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2664;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2665;
    org$pandalanguage$pandac$ASTNode* $returnValue2668;
    org$pandalanguage$pandac$ASTNode* $tmp2669;
    org$pandalanguage$pandac$parser$Token$nullable label2671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2672;
    org$pandalanguage$pandac$ASTNode* $tmp2674;
    org$pandalanguage$pandac$ASTNode* $tmp2675;
    panda$core$String* $tmp2677;
    org$pandalanguage$pandac$ASTNode* $tmp2680;
    org$pandalanguage$pandac$ASTNode* $tmp2681;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2665, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2667 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2665, &$s2666);
    start2664 = $tmp2667;
    if (((panda$core$Bit) { !start2664.nonnull }).value) {
    {
        $tmp2669 = NULL;
        $returnValue2668 = $tmp2669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2669));
        return $returnValue2668;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2672, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2673 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2672);
    label2671 = $tmp2673;
    if (((panda$core$Bit) { label2671.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2676 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2678 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2671.value));
        $tmp2677 = $tmp2678;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2676, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2664.value).position, $tmp2677);
        $tmp2675 = $tmp2676;
        $tmp2674 = $tmp2675;
        $returnValue2668 = $tmp2674;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2677));
        return $returnValue2668;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2682 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2682, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2664.value).position, NULL);
    $tmp2681 = $tmp2682;
    $tmp2680 = $tmp2681;
    $returnValue2668 = $tmp2680;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2680));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2681));
    return $returnValue2668;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2684;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2685;
    org$pandalanguage$pandac$ASTNode* $returnValue2688;
    org$pandalanguage$pandac$ASTNode* $tmp2689;
    org$pandalanguage$pandac$parser$Token$Kind $match$1427_92691;
    org$pandalanguage$pandac$ASTNode* $tmp2702;
    org$pandalanguage$pandac$ASTNode* $tmp2703;
    panda$collections$Array* children2709 = NULL;
    panda$collections$Array* $tmp2710;
    panda$collections$Array* $tmp2711;
    org$pandalanguage$pandac$ASTNode* expr2713 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2714;
    org$pandalanguage$pandac$ASTNode* $tmp2715;
    org$pandalanguage$pandac$ASTNode* $tmp2717;
    org$pandalanguage$pandac$ASTNode* $tmp2720;
    org$pandalanguage$pandac$ASTNode* $tmp2721;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2685, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2687 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2685, &$s2686);
    start2684 = $tmp2687;
    if (((panda$core$Bit) { !start2684.nonnull }).value) {
    {
        $tmp2689 = NULL;
        $returnValue2688 = $tmp2689;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2689));
        return $returnValue2688;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2692 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1427_92691 = $tmp2692.kind;
        panda$core$Bit $tmp2695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1427_92691.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp2694 = $tmp2695.value;
        if ($tmp2694) goto $l2696;
        panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1427_92691.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp2694 = $tmp2697.value;
        $l2696:;
        panda$core$Bit $tmp2698 = { $tmp2694 };
        bool $tmp2693 = $tmp2698.value;
        if ($tmp2693) goto $l2699;
        panda$core$Bit $tmp2700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1427_92691.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp2693 = $tmp2700.value;
        $l2699:;
        panda$core$Bit $tmp2701 = { $tmp2693 };
        if ($tmp2701.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2704 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2704, ((panda$core$Int64) { 34 }), ((org$pandalanguage$pandac$parser$Token) start2684.value).position, NULL);
            $tmp2703 = $tmp2704;
            $tmp2702 = $tmp2703;
            $returnValue2688 = $tmp2702;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2702));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
            return $returnValue2688;
        }
        }
        else {
        {
            int $tmp2708;
            {
                panda$collections$Array* $tmp2712 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2712);
                $tmp2711 = $tmp2712;
                $tmp2710 = $tmp2711;
                children2709 = $tmp2710;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2711));
                org$pandalanguage$pandac$ASTNode* $tmp2716 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2715 = $tmp2716;
                $tmp2714 = $tmp2715;
                expr2713 = $tmp2714;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2715));
                if (((panda$core$Bit) { expr2713 == NULL }).value) {
                {
                    $tmp2717 = NULL;
                    $returnValue2688 = $tmp2717;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2717));
                    $tmp2708 = 0;
                    goto $l2706;
                    $l2718:;
                    return $returnValue2688;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children2709, ((panda$core$Object*) expr2713));
                org$pandalanguage$pandac$ASTNode* $tmp2722 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2722, ((panda$core$Int64) { 34 }), ((org$pandalanguage$pandac$parser$Token) start2684.value).position, expr2713);
                $tmp2721 = $tmp2722;
                $tmp2720 = $tmp2721;
                $returnValue2688 = $tmp2720;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2721));
                $tmp2708 = 1;
                goto $l2706;
                $l2723:;
                return $returnValue2688;
            }
            $l2706:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2709));
            children2709 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2713));
            expr2713 = NULL;
            switch ($tmp2708) {
                case 1: goto $l2723;
                case 0: goto $l2718;
            }
            $l2725:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1445_92726;
    org$pandalanguage$pandac$ASTNode* $returnValue2729;
    org$pandalanguage$pandac$ASTNode* $tmp2730;
    org$pandalanguage$pandac$ASTNode* $tmp2731;
    org$pandalanguage$pandac$ASTNode* $tmp2735;
    org$pandalanguage$pandac$ASTNode* $tmp2736;
    org$pandalanguage$pandac$ASTNode* $tmp2740;
    org$pandalanguage$pandac$ASTNode* $tmp2741;
    {
        org$pandalanguage$pandac$parser$Token $tmp2727 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1445_92726 = $tmp2727.kind;
        panda$core$Bit $tmp2728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1445_92726.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2728.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2732 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2731 = $tmp2732;
            $tmp2730 = $tmp2731;
            $returnValue2729 = $tmp2730;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2730));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2731));
            return $returnValue2729;
        }
        }
        else {
        panda$core$Bit $tmp2734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1445_92726.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2734.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2737 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2736 = $tmp2737;
            $tmp2735 = $tmp2736;
            $returnValue2729 = $tmp2735;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2735));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2736));
            return $returnValue2729;
        }
        }
        else {
        panda$core$Bit $tmp2739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1445_92726.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2739.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2742 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2741 = $tmp2742;
            $tmp2740 = $tmp2741;
            $returnValue2729 = $tmp2740;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2740));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2741));
            return $returnValue2729;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1454_92744;
    org$pandalanguage$pandac$ASTNode* $returnValue2747;
    org$pandalanguage$pandac$ASTNode* $tmp2748;
    org$pandalanguage$pandac$ASTNode* $tmp2749;
    org$pandalanguage$pandac$ASTNode* $tmp2753;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$ASTNode* $tmp2758;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$ASTNode* $tmp2763;
    org$pandalanguage$pandac$ASTNode* $tmp2764;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2767;
    org$pandalanguage$pandac$ASTNode* $tmp2769;
    {
        org$pandalanguage$pandac$parser$Token $tmp2745 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1454_92744 = $tmp2745.kind;
        panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1454_92744.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2746.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2750 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2749 = $tmp2750;
            $tmp2748 = $tmp2749;
            $returnValue2747 = $tmp2748;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2748));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2749));
            return $returnValue2747;
        }
        }
        else {
        panda$core$Bit $tmp2752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1454_92744.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2752.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2755 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2754 = $tmp2755;
            $tmp2753 = $tmp2754;
            $returnValue2747 = $tmp2753;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2753));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
            return $returnValue2747;
        }
        }
        else {
        panda$core$Bit $tmp2757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1454_92744.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2757.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2760 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2759 = $tmp2760;
            $tmp2758 = $tmp2759;
            $returnValue2747 = $tmp2758;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2758));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2759));
            return $returnValue2747;
        }
        }
        else {
        panda$core$Bit $tmp2762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1454_92744.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2762.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2765 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2764 = $tmp2765;
            $tmp2763 = $tmp2764;
            $returnValue2747 = $tmp2763;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2763));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2764));
            return $returnValue2747;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2767, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2767, &$s2768);
            $tmp2769 = NULL;
            $returnValue2747 = $tmp2769;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2769));
            return $returnValue2747;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1471_92771;
    org$pandalanguage$pandac$ASTNode* $returnValue2774;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    org$pandalanguage$pandac$ASTNode* $tmp2776;
    org$pandalanguage$pandac$ASTNode* $tmp2780;
    org$pandalanguage$pandac$ASTNode* $tmp2781;
    org$pandalanguage$pandac$ASTNode* $tmp2785;
    org$pandalanguage$pandac$ASTNode* $tmp2786;
    org$pandalanguage$pandac$ASTNode* $tmp2790;
    org$pandalanguage$pandac$ASTNode* $tmp2791;
    org$pandalanguage$pandac$ASTNode* $tmp2795;
    org$pandalanguage$pandac$ASTNode* $tmp2796;
    org$pandalanguage$pandac$ASTNode* $tmp2800;
    org$pandalanguage$pandac$ASTNode* $tmp2801;
    org$pandalanguage$pandac$ASTNode* $tmp2805;
    org$pandalanguage$pandac$ASTNode* $tmp2806;
    org$pandalanguage$pandac$ASTNode* $tmp2810;
    org$pandalanguage$pandac$ASTNode* $tmp2811;
    org$pandalanguage$pandac$parser$Token id2815;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2817;
    org$pandalanguage$pandac$ASTNode* $tmp2819;
    org$pandalanguage$pandac$ASTNode* $tmp2820;
    panda$core$String* $tmp2821;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    org$pandalanguage$pandac$ASTNode* $tmp2826;
    org$pandalanguage$pandac$ASTNode* $tmp2834;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    org$pandalanguage$pandac$ASTNode* $tmp2851;
    org$pandalanguage$pandac$ASTNode* $tmp2852;
    org$pandalanguage$pandac$ASTNode* $tmp2856;
    org$pandalanguage$pandac$ASTNode* $tmp2857;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2860;
    org$pandalanguage$pandac$ASTNode* $tmp2862;
    {
        org$pandalanguage$pandac$parser$Token $tmp2772 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1471_92771 = $tmp2772.kind;
        panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2773.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2777 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2776 = $tmp2777;
            $tmp2775 = $tmp2776;
            $returnValue2774 = $tmp2775;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2776));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2779.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2782 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2781 = $tmp2782;
            $tmp2780 = $tmp2781;
            $returnValue2774 = $tmp2780;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2781));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2784.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2787 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2786 = $tmp2787;
            $tmp2785 = $tmp2786;
            $returnValue2774 = $tmp2785;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2785));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2786));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2789.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2792 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2791 = $tmp2792;
            $tmp2790 = $tmp2791;
            $returnValue2774 = $tmp2790;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2790));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2791));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2794.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2797 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2796 = $tmp2797;
            $tmp2795 = $tmp2796;
            $returnValue2774 = $tmp2795;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2795));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2796));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2799.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2802 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2801 = $tmp2802;
            $tmp2800 = $tmp2801;
            $returnValue2774 = $tmp2800;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2800));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2801));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2804.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2807 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2806 = $tmp2807;
            $tmp2805 = $tmp2806;
            $returnValue2774 = $tmp2805;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2805));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2806));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp2809.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2812 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2811 = $tmp2812;
            $tmp2810 = $tmp2811;
            $returnValue2774 = $tmp2810;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2810));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2811));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2814.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2816 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id2815 = $tmp2816;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2817, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2818 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2817);
            if (((panda$core$Bit) { $tmp2818.nonnull }).value) {
            {
                panda$core$String* $tmp2822 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id2815);
                $tmp2821 = $tmp2822;
                org$pandalanguage$pandac$ASTNode* $tmp2823 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2821);
                $tmp2820 = $tmp2823;
                $tmp2819 = $tmp2820;
                $returnValue2774 = $tmp2819;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2819));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2820));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2821));
                return $returnValue2774;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id2815);
            org$pandalanguage$pandac$ASTNode* $tmp2827 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2826 = $tmp2827;
            $tmp2825 = $tmp2826;
            $returnValue2774 = $tmp2825;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2825));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2826));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp2829 = $tmp2830.value;
        if ($tmp2829) goto $l2831;
        panda$core$Bit $tmp2832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp2829 = $tmp2832.value;
        $l2831:;
        panda$core$Bit $tmp2833 = { $tmp2829 };
        if ($tmp2833.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2836 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2835 = $tmp2836;
            $tmp2834 = $tmp2835;
            $returnValue2774 = $tmp2834;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2834));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2835));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2840 = $tmp2841.value;
        if ($tmp2840) goto $l2842;
        panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2840 = $tmp2843.value;
        $l2842:;
        panda$core$Bit $tmp2844 = { $tmp2840 };
        bool $tmp2839 = $tmp2844.value;
        if ($tmp2839) goto $l2845;
        panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2839 = $tmp2846.value;
        $l2845:;
        panda$core$Bit $tmp2847 = { $tmp2839 };
        bool $tmp2838 = $tmp2847.value;
        if ($tmp2838) goto $l2848;
        panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2838 = $tmp2849.value;
        $l2848:;
        panda$core$Bit $tmp2850 = { $tmp2838 };
        if ($tmp2850.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2853 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2852 = $tmp2853;
            $tmp2851 = $tmp2852;
            $returnValue2774 = $tmp2851;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2851));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2852));
            return $returnValue2774;
        }
        }
        else {
        panda$core$Bit $tmp2855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1471_92771.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2855.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2858 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2857 = $tmp2858;
            $tmp2856 = $tmp2857;
            $returnValue2774 = $tmp2856;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2856));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2857));
            return $returnValue2774;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2860, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2860, &$s2861);
            $tmp2862 = NULL;
            $returnValue2774 = $tmp2862;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2862));
            return $returnValue2774;
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
    org$pandalanguage$pandac$parser$Token$nullable start2867;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2868;
    org$pandalanguage$pandac$ASTNode* $returnValue2871;
    org$pandalanguage$pandac$ASTNode* $tmp2872;
    org$pandalanguage$pandac$parser$Token$nullable next2875;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2876;
    org$pandalanguage$pandac$ASTNode* $tmp2879;
    panda$core$MutableString* name2882 = NULL;
    panda$core$MutableString* $tmp2883;
    panda$core$MutableString* $tmp2884;
    panda$core$String* $tmp2886;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2890;
    panda$core$Char8 $tmp2892;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2893;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    panda$core$String* $tmp2899;
    org$pandalanguage$pandac$ASTNode* $tmp2901;
    org$pandalanguage$pandac$ASTNode* $tmp2902;
    panda$core$String* $tmp2904;
    int $tmp2866;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2868, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2870 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2868, &$s2869);
        start2867 = $tmp2870;
        if (((panda$core$Bit) { !start2867.nonnull }).value) {
        {
            $tmp2872 = NULL;
            $returnValue2871 = $tmp2872;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2872));
            $tmp2866 = 0;
            goto $l2864;
            $l2873:;
            return $returnValue2871;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2876, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2878 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2876, &$s2877);
        next2875 = $tmp2878;
        if (((panda$core$Bit) { !next2875.nonnull }).value) {
        {
            $tmp2879 = NULL;
            $returnValue2871 = $tmp2879;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2879));
            $tmp2866 = 1;
            goto $l2864;
            $l2880:;
            return $returnValue2871;
        }
        }
        panda$core$MutableString* $tmp2885 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp2887 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2875.value));
        $tmp2886 = $tmp2887;
        panda$core$MutableString$init$panda$core$String($tmp2885, $tmp2886);
        $tmp2884 = $tmp2885;
        $tmp2883 = $tmp2884;
        name2882 = $tmp2883;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2883));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2884));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2886));
        $l2888:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2890, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2891 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2890);
            next2875 = $tmp2891;
            if (((panda$core$Bit) { !next2875.nonnull }).value) {
            {
                goto $l2889;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp2892, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name2882, $tmp2892);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2893, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2895 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2893, &$s2894);
            next2875 = $tmp2895;
            if (((panda$core$Bit) { !next2875.nonnull }).value) {
            {
                $tmp2896 = NULL;
                $returnValue2871 = $tmp2896;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2896));
                $tmp2866 = 2;
                goto $l2864;
                $l2897:;
                return $returnValue2871;
            }
            }
            panda$core$String* $tmp2900 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2875.value));
            $tmp2899 = $tmp2900;
            panda$core$MutableString$append$panda$core$String(name2882, $tmp2899);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2899));
        }
        }
        $l2889:;
        org$pandalanguage$pandac$ASTNode* $tmp2903 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2905 = panda$core$MutableString$finish$R$panda$core$String(name2882);
        $tmp2904 = $tmp2905;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2903, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$parser$Token) start2867.value).position, $tmp2904);
        $tmp2902 = $tmp2903;
        $tmp2901 = $tmp2902;
        $returnValue2871 = $tmp2901;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2901));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2902));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2904));
        $tmp2866 = 3;
        goto $l2864;
        $l2906:;
        return $returnValue2871;
    }
    $l2864:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2882));
    name2882 = NULL;
    switch ($tmp2866) {
        case 1: goto $l2880;
        case 2: goto $l2897;
        case 3: goto $l2906;
        case 0: goto $l2873;
    }
    $l2908:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2912;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2913;
    org$pandalanguage$pandac$ASTNode* $returnValue2916;
    org$pandalanguage$pandac$ASTNode* $tmp2917;
    org$pandalanguage$pandac$parser$Token$nullable next2920;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2921;
    org$pandalanguage$pandac$ASTNode* $tmp2924;
    panda$core$MutableString* name2927 = NULL;
    panda$core$MutableString* $tmp2928;
    panda$core$MutableString* $tmp2929;
    panda$core$String* $tmp2931;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2935;
    panda$core$Char8 $tmp2937;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2938;
    org$pandalanguage$pandac$ASTNode* $tmp2941;
    panda$core$String* $tmp2944;
    org$pandalanguage$pandac$ASTNode* $tmp2946;
    org$pandalanguage$pandac$ASTNode* $tmp2947;
    panda$core$String* $tmp2949;
    int $tmp2911;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2913, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2915 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2913, &$s2914);
        start2912 = $tmp2915;
        if (((panda$core$Bit) { !start2912.nonnull }).value) {
        {
            $tmp2917 = NULL;
            $returnValue2916 = $tmp2917;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2917));
            $tmp2911 = 0;
            goto $l2909;
            $l2918:;
            return $returnValue2916;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2921, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2923 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2921, &$s2922);
        next2920 = $tmp2923;
        if (((panda$core$Bit) { !next2920.nonnull }).value) {
        {
            $tmp2924 = NULL;
            $returnValue2916 = $tmp2924;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2924));
            $tmp2911 = 1;
            goto $l2909;
            $l2925:;
            return $returnValue2916;
        }
        }
        panda$core$MutableString* $tmp2930 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp2932 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2920.value));
        $tmp2931 = $tmp2932;
        panda$core$MutableString$init$panda$core$String($tmp2930, $tmp2931);
        $tmp2929 = $tmp2930;
        $tmp2928 = $tmp2929;
        name2927 = $tmp2928;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2928));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2929));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2931));
        $l2933:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2935, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2936 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2935);
            next2920 = $tmp2936;
            if (((panda$core$Bit) { !next2920.nonnull }).value) {
            {
                goto $l2934;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp2937, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name2927, $tmp2937);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2938, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2940 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2938, &$s2939);
            next2920 = $tmp2940;
            if (((panda$core$Bit) { !next2920.nonnull }).value) {
            {
                $tmp2941 = NULL;
                $returnValue2916 = $tmp2941;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2941));
                $tmp2911 = 2;
                goto $l2909;
                $l2942:;
                return $returnValue2916;
            }
            }
            panda$core$String* $tmp2945 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next2920.value));
            $tmp2944 = $tmp2945;
            panda$core$MutableString$append$panda$core$String(name2927, $tmp2944);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2944));
        }
        }
        $l2934:;
        org$pandalanguage$pandac$ASTNode* $tmp2948 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2950 = panda$core$MutableString$finish$R$panda$core$String(name2927);
        $tmp2949 = $tmp2950;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2948, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start2912.value).position, $tmp2949);
        $tmp2947 = $tmp2948;
        $tmp2946 = $tmp2947;
        $returnValue2916 = $tmp2946;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2946));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2949));
        $tmp2911 = 3;
        goto $l2909;
        $l2951:;
        return $returnValue2916;
    }
    $l2909:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name2927));
    name2927 = NULL;
    switch ($tmp2911) {
        case 0: goto $l2918;
        case 3: goto $l2951;
        case 1: goto $l2925;
        case 2: goto $l2942;
    }
    $l2953:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2957;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2958;
    panda$collections$ImmutableArray* $returnValue2961;
    panda$collections$ImmutableArray* $tmp2962;
    org$pandalanguage$pandac$parser$Token$nullable id2965;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2966;
    panda$collections$ImmutableArray* $tmp2969;
    panda$collections$Array* parameters2972 = NULL;
    panda$collections$Array* $tmp2973;
    panda$collections$Array* $tmp2974;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2976;
    org$pandalanguage$pandac$ASTNode* t2981 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2982;
    org$pandalanguage$pandac$ASTNode* $tmp2983;
    panda$collections$ImmutableArray* $tmp2985;
    org$pandalanguage$pandac$ASTNode* $tmp2989;
    panda$core$String* $tmp2991;
    org$pandalanguage$pandac$ASTNode* $tmp2994;
    panda$core$String* $tmp2996;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3001;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3003;
    panda$collections$ImmutableArray* $tmp3006;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3009;
    org$pandalanguage$pandac$ASTNode* t3014 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3015;
    org$pandalanguage$pandac$ASTNode* $tmp3016;
    panda$collections$ImmutableArray* $tmp3018;
    org$pandalanguage$pandac$ASTNode* $tmp3022;
    panda$core$String* $tmp3024;
    org$pandalanguage$pandac$ASTNode* $tmp3027;
    panda$core$String* $tmp3029;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3031;
    panda$collections$ImmutableArray* $tmp3034;
    panda$collections$ImmutableArray* $tmp3037;
    panda$collections$ImmutableArray* $tmp3038;
    int $tmp2956;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2958, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2960 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2958, &$s2959);
        start2957 = $tmp2960;
        if (((panda$core$Bit) { !start2957.nonnull }).value) {
        {
            $tmp2962 = NULL;
            $returnValue2961 = $tmp2962;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2962));
            $tmp2956 = 0;
            goto $l2954;
            $l2963:;
            return $returnValue2961;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2966, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2968 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2966, &$s2967);
        id2965 = $tmp2968;
        if (((panda$core$Bit) { !id2965.nonnull }).value) {
        {
            $tmp2969 = NULL;
            $returnValue2961 = $tmp2969;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2969));
            $tmp2956 = 1;
            goto $l2954;
            $l2970:;
            return $returnValue2961;
        }
        }
        panda$collections$Array* $tmp2975 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2975);
        $tmp2974 = $tmp2975;
        $tmp2973 = $tmp2974;
        parameters2972 = $tmp2973;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2973));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2974));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2976, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2977 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2976);
        if (((panda$core$Bit) { $tmp2977.nonnull }).value) {
        {
            int $tmp2980;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2984 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2983 = $tmp2984;
                $tmp2982 = $tmp2983;
                t2981 = $tmp2982;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2982));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2983));
                if (((panda$core$Bit) { t2981 == NULL }).value) {
                {
                    $tmp2985 = NULL;
                    $returnValue2961 = $tmp2985;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2985));
                    $tmp2980 = 0;
                    goto $l2978;
                    $l2986:;
                    $tmp2956 = 2;
                    goto $l2954;
                    $l2987:;
                    return $returnValue2961;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp2990 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp2992 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2965.value));
                $tmp2991 = $tmp2992;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp2990, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) id2965.value).position, $tmp2991, t2981);
                $tmp2989 = $tmp2990;
                panda$collections$Array$add$panda$collections$Array$T(parameters2972, ((panda$core$Object*) $tmp2989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2991));
            }
            $tmp2980 = -1;
            goto $l2978;
            $l2978:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2981));
            t2981 = NULL;
            switch ($tmp2980) {
                case -1: goto $l2993;
                case 0: goto $l2986;
            }
            $l2993:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2995 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp2997 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2965.value));
            $tmp2996 = $tmp2997;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2995, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id2965.value).position, $tmp2996);
            $tmp2994 = $tmp2995;
            panda$collections$Array$add$panda$collections$Array$T(parameters2972, ((panda$core$Object*) $tmp2994));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2994));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2996));
        }
        }
        $l2998:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3001, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3002 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3001);
        bool $tmp3000 = ((panda$core$Bit) { $tmp3002.nonnull }).value;
        if (!$tmp3000) goto $l2999;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3003, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3005 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3003, &$s3004);
            id2965 = $tmp3005;
            if (((panda$core$Bit) { !id2965.nonnull }).value) {
            {
                $tmp3006 = NULL;
                $returnValue2961 = $tmp3006;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3006));
                $tmp2956 = 3;
                goto $l2954;
                $l3007:;
                return $returnValue2961;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3009, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3010 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3009);
            if (((panda$core$Bit) { $tmp3010.nonnull }).value) {
            {
                int $tmp3013;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3017 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3016 = $tmp3017;
                    $tmp3015 = $tmp3016;
                    t3014 = $tmp3015;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3015));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3016));
                    if (((panda$core$Bit) { t3014 == NULL }).value) {
                    {
                        $tmp3018 = NULL;
                        $returnValue2961 = $tmp3018;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3018));
                        $tmp3013 = 0;
                        goto $l3011;
                        $l3019:;
                        $tmp2956 = 4;
                        goto $l2954;
                        $l3020:;
                        return $returnValue2961;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3023 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3025 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2965.value));
                    $tmp3024 = $tmp3025;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3023, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) id2965.value).position, $tmp3024, t3014);
                    $tmp3022 = $tmp3023;
                    panda$collections$Array$add$panda$collections$Array$T(parameters2972, ((panda$core$Object*) $tmp3022));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3022));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3024));
                }
                $tmp3013 = -1;
                goto $l3011;
                $l3011:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3014));
                t3014 = NULL;
                switch ($tmp3013) {
                    case -1: goto $l3026;
                    case 0: goto $l3019;
                }
                $l3026:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3028 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3030 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id2965.value));
                $tmp3029 = $tmp3030;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3028, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id2965.value).position, $tmp3029);
                $tmp3027 = $tmp3028;
                panda$collections$Array$add$panda$collections$Array$T(parameters2972, ((panda$core$Object*) $tmp3027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3029));
            }
            }
        }
        goto $l2998;
        $l2999:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3031, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3033 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3031, &$s3032);
        if (((panda$core$Bit) { !$tmp3033.nonnull }).value) {
        {
            $tmp3034 = NULL;
            $returnValue2961 = $tmp3034;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
            $tmp2956 = 5;
            goto $l2954;
            $l3035:;
            return $returnValue2961;
        }
        }
        panda$collections$ImmutableArray* $tmp3039 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters2972);
        $tmp3038 = $tmp3039;
        $tmp3037 = $tmp3038;
        $returnValue2961 = $tmp3037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3038));
        $tmp2956 = 6;
        goto $l2954;
        $l3040:;
        return $returnValue2961;
    }
    $l2954:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters2972));
    parameters2972 = NULL;
    switch ($tmp2956) {
        case 4: goto $l3020;
        case 5: goto $l3035;
        case 3: goto $l3007;
        case 2: goto $l2987;
        case 1: goto $l2970;
        case 6: goto $l3040;
        case 0: goto $l2963;
    }
    $l3042:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3046;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3047;
    panda$collections$ImmutableArray* $returnValue3050;
    panda$collections$ImmutableArray* $tmp3051;
    panda$collections$Array* result3054 = NULL;
    panda$collections$Array* $tmp3055;
    panda$collections$Array* $tmp3056;
    org$pandalanguage$pandac$ASTNode* t3058 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3059;
    org$pandalanguage$pandac$ASTNode* $tmp3060;
    panda$collections$ImmutableArray* $tmp3062;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3068;
    org$pandalanguage$pandac$ASTNode* $tmp3070;
    org$pandalanguage$pandac$ASTNode* $tmp3071;
    org$pandalanguage$pandac$ASTNode* $tmp3072;
    panda$collections$ImmutableArray* $tmp3074;
    panda$collections$ImmutableArray* $tmp3077;
    panda$collections$ImmutableArray* $tmp3078;
    int $tmp3045;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3047, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3049 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3047, &$s3048);
        start3046 = $tmp3049;
        if (((panda$core$Bit) { !start3046.nonnull }).value) {
        {
            $tmp3051 = NULL;
            $returnValue3050 = $tmp3051;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3051));
            $tmp3045 = 0;
            goto $l3043;
            $l3052:;
            return $returnValue3050;
        }
        }
        panda$collections$Array* $tmp3057 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3057);
        $tmp3056 = $tmp3057;
        $tmp3055 = $tmp3056;
        result3054 = $tmp3055;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3055));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3056));
        org$pandalanguage$pandac$ASTNode* $tmp3061 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3060 = $tmp3061;
        $tmp3059 = $tmp3060;
        t3058 = $tmp3059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3060));
        if (((panda$core$Bit) { t3058 == NULL }).value) {
        {
            $tmp3062 = NULL;
            $returnValue3050 = $tmp3062;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3062));
            $tmp3045 = 1;
            goto $l3043;
            $l3063:;
            return $returnValue3050;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3054, ((panda$core$Object*) t3058));
        $l3065:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3068, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3069 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3068);
        bool $tmp3067 = ((panda$core$Bit) { $tmp3069.nonnull }).value;
        if (!$tmp3067) goto $l3066;
        {
            {
                $tmp3070 = t3058;
                org$pandalanguage$pandac$ASTNode* $tmp3073 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3072 = $tmp3073;
                $tmp3071 = $tmp3072;
                t3058 = $tmp3071;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3071));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3070));
            }
            if (((panda$core$Bit) { t3058 == NULL }).value) {
            {
                $tmp3074 = NULL;
                $returnValue3050 = $tmp3074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3074));
                $tmp3045 = 2;
                goto $l3043;
                $l3075:;
                return $returnValue3050;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3054, ((panda$core$Object*) t3058));
        }
        goto $l3065;
        $l3066:;
        panda$collections$ImmutableArray* $tmp3079 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3054);
        $tmp3078 = $tmp3079;
        $tmp3077 = $tmp3078;
        $returnValue3050 = $tmp3077;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3078));
        $tmp3045 = 3;
        goto $l3043;
        $l3080:;
        return $returnValue3050;
    }
    $l3043:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3054));
    result3054 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3058));
    t3058 = NULL;
    switch ($tmp3045) {
        case 2: goto $l3075;
        case 0: goto $l3052;
        case 3: goto $l3080;
        case 1: goto $l3063;
    }
    $l3082:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3086;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3087;
    org$pandalanguage$pandac$ASTNode* expr3090 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3091;
    org$pandalanguage$pandac$ASTNode* $tmp3093;
    org$pandalanguage$pandac$ASTNode* $tmp3094;
    org$pandalanguage$pandac$ASTNode* $tmp3095;
    org$pandalanguage$pandac$ASTNode* $returnValue3097;
    org$pandalanguage$pandac$ASTNode* $tmp3098;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3101;
    org$pandalanguage$pandac$ASTNode* $tmp3103;
    org$pandalanguage$pandac$ASTNode* $tmp3104;
    panda$core$String* $tmp3106;
    int $tmp3085;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3087, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3089 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3087, &$s3088);
        a3086 = $tmp3089;
        memset(&expr3090, 0, sizeof(expr3090));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3091, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3092 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3091);
        if (((panda$core$Bit) { $tmp3092.nonnull }).value) {
        {
            {
                $tmp3093 = expr3090;
                org$pandalanguage$pandac$ASTNode* $tmp3096 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3095 = $tmp3096;
                $tmp3094 = $tmp3095;
                expr3090 = $tmp3094;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3094));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3093));
            }
            if (((panda$core$Bit) { expr3090 == NULL }).value) {
            {
                $tmp3098 = NULL;
                $returnValue3097 = $tmp3098;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3098));
                $tmp3085 = 0;
                goto $l3083;
                $l3099:;
                return $returnValue3097;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3101, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3101, &$s3102);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3105 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3107 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3086.value));
        $tmp3106 = $tmp3107;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3105, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3086.value).position, $tmp3106, expr3090);
        $tmp3104 = $tmp3105;
        $tmp3103 = $tmp3104;
        $returnValue3097 = $tmp3103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3106));
        $tmp3085 = 1;
        goto $l3083;
        $l3108:;
        return $returnValue3097;
    }
    $l3083:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3090));
    switch ($tmp3085) {
        case 1: goto $l3108;
        case 0: goto $l3099;
    }
    $l3110:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3114 = NULL;
    panda$collections$Array* $tmp3115;
    panda$collections$Array* $tmp3116;
    org$pandalanguage$pandac$ASTNode* a3126 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3127;
    org$pandalanguage$pandac$ASTNode* $tmp3128;
    panda$collections$ImmutableArray* $returnValue3132;
    panda$collections$ImmutableArray* $tmp3133;
    panda$collections$ImmutableArray* $tmp3134;
    int $tmp3113;
    {
        panda$collections$Array* $tmp3117 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3117);
        $tmp3116 = $tmp3117;
        $tmp3115 = $tmp3116;
        result3114 = $tmp3115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
        $l3118:;
        org$pandalanguage$pandac$parser$Token $tmp3121 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3121.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3120 = $tmp3122.value;
        if (!$tmp3120) goto $l3119;
        {
            int $tmp3125;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3129 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3128 = $tmp3129;
                $tmp3127 = $tmp3128;
                a3126 = $tmp3127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3128));
                if (((panda$core$Bit) { a3126 == NULL }).value) {
                {
                    $tmp3125 = 0;
                    goto $l3123;
                    $l3130:;
                    goto $l3119;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3114, ((panda$core$Object*) a3126));
            }
            $tmp3125 = -1;
            goto $l3123;
            $l3123:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3126));
            a3126 = NULL;
            switch ($tmp3125) {
                case -1: goto $l3131;
                case 0: goto $l3130;
            }
            $l3131:;
        }
        goto $l3118;
        $l3119:;
        panda$collections$ImmutableArray* $tmp3135 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3114);
        $tmp3134 = $tmp3135;
        $tmp3133 = $tmp3134;
        $returnValue3132 = $tmp3133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3134));
        $tmp3113 = 0;
        goto $l3111;
        $l3136:;
        return $returnValue3132;
    }
    $l3111:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3114));
    result3114 = NULL;
    switch ($tmp3113) {
        case 0: goto $l3136;
    }
    $l3138:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3143;
    org$pandalanguage$pandac$ASTNode* $returnValue3146;
    org$pandalanguage$pandac$ASTNode* $tmp3147;
    panda$core$MutableString* result3150 = NULL;
    panda$core$MutableString* $tmp3151;
    panda$core$MutableString* $tmp3152;
    org$pandalanguage$pandac$parser$Token next3156;
    org$pandalanguage$pandac$ASTNode* $tmp3161;
    panda$core$String* $tmp3164;
    org$pandalanguage$pandac$ASTNode* $tmp3166;
    org$pandalanguage$pandac$ASTNode* $tmp3167;
    panda$core$String* $tmp3169;
    int $tmp3141;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3143, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3145 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3143, &$s3144);
        start3142 = $tmp3145;
        if (((panda$core$Bit) { !start3142.nonnull }).value) {
        {
            $tmp3147 = NULL;
            $returnValue3146 = $tmp3147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3147));
            $tmp3141 = 0;
            goto $l3139;
            $l3148:;
            return $returnValue3146;
        }
        }
        panda$core$MutableString* $tmp3153 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3153);
        $tmp3152 = $tmp3153;
        $tmp3151 = $tmp3152;
        result3150 = $tmp3151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3152));
        $l3154:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3157 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3156 = $tmp3157;
            panda$core$Bit $tmp3158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3156.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3158.value) {
            {
                goto $l3155;
            }
            }
            panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3156.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3159.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3142.value), &$s3160);
                $tmp3161 = NULL;
                $returnValue3146 = $tmp3161;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3161));
                $tmp3141 = 1;
                goto $l3139;
                $l3162:;
                return $returnValue3146;
            }
            }
            panda$core$String* $tmp3165 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3156);
            $tmp3164 = $tmp3165;
            panda$core$MutableString$append$panda$core$String(result3150, $tmp3164);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3164));
        }
        }
        $l3155:;
        org$pandalanguage$pandac$ASTNode* $tmp3168 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3170 = panda$core$MutableString$finish$R$panda$core$String(result3150);
        $tmp3169 = $tmp3170;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3168, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) start3142.value).position, $tmp3169);
        $tmp3167 = $tmp3168;
        $tmp3166 = $tmp3167;
        $returnValue3146 = $tmp3166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3169));
        $tmp3141 = 2;
        goto $l3139;
        $l3171:;
        return $returnValue3146;
    }
    $l3139:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3150));
    result3150 = NULL;
    switch ($tmp3141) {
        case 2: goto $l3171;
        case 1: goto $l3162;
        case 0: goto $l3148;
    }
    $l3173:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3177;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3178;
    org$pandalanguage$pandac$ASTNode* $returnValue3181;
    org$pandalanguage$pandac$ASTNode* $tmp3182;
    org$pandalanguage$pandac$ASTNode* t3185 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3186;
    org$pandalanguage$pandac$ASTNode* $tmp3187;
    org$pandalanguage$pandac$ASTNode* $tmp3189;
    org$pandalanguage$pandac$ASTNode* $tmp3192;
    org$pandalanguage$pandac$ASTNode* $tmp3193;
    panda$core$String* $tmp3195;
    int $tmp3176;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3178, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3180 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3178, &$s3179);
        id3177 = $tmp3180;
        if (((panda$core$Bit) { !id3177.nonnull }).value) {
        {
            $tmp3182 = NULL;
            $returnValue3181 = $tmp3182;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3182));
            $tmp3176 = 0;
            goto $l3174;
            $l3183:;
            return $returnValue3181;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3188 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3187 = $tmp3188;
        $tmp3186 = $tmp3187;
        t3185 = $tmp3186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3187));
        if (((panda$core$Bit) { t3185 == NULL }).value) {
        {
            $tmp3189 = NULL;
            $returnValue3181 = $tmp3189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3189));
            $tmp3176 = 1;
            goto $l3174;
            $l3190:;
            return $returnValue3181;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3194 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3196 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3177.value));
        $tmp3195 = $tmp3196;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3194, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$parser$Token) id3177.value).position, $tmp3195, t3185);
        $tmp3193 = $tmp3194;
        $tmp3192 = $tmp3193;
        $returnValue3181 = $tmp3192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3192));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3195));
        $tmp3176 = 2;
        goto $l3174;
        $l3197:;
        return $returnValue3181;
    }
    $l3174:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3185));
    t3185 = NULL;
    switch ($tmp3176) {
        case 1: goto $l3190;
        case 2: goto $l3197;
        case 0: goto $l3183;
    }
    $l3199:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3203;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3204;
    panda$collections$ImmutableArray* $returnValue3207;
    panda$collections$ImmutableArray* $tmp3208;
    panda$collections$Array* result3211 = NULL;
    panda$collections$Array* $tmp3212;
    panda$collections$Array* $tmp3213;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3215;
    org$pandalanguage$pandac$ASTNode* param3220 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3221;
    org$pandalanguage$pandac$ASTNode* $tmp3222;
    panda$collections$ImmutableArray* $tmp3224;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3231;
    org$pandalanguage$pandac$ASTNode* $tmp3233;
    org$pandalanguage$pandac$ASTNode* $tmp3234;
    org$pandalanguage$pandac$ASTNode* $tmp3235;
    panda$collections$ImmutableArray* $tmp3237;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3241;
    panda$collections$ImmutableArray* $tmp3244;
    panda$collections$ImmutableArray* $tmp3249;
    panda$collections$ImmutableArray* $tmp3250;
    int $tmp3202;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3204, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3206 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3204, &$s3205);
        start3203 = $tmp3206;
        if (((panda$core$Bit) { !start3203.nonnull }).value) {
        {
            $tmp3208 = NULL;
            $returnValue3207 = $tmp3208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
            $tmp3202 = 0;
            goto $l3200;
            $l3209:;
            return $returnValue3207;
        }
        }
        panda$collections$Array* $tmp3214 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3214);
        $tmp3213 = $tmp3214;
        $tmp3212 = $tmp3213;
        result3211 = $tmp3212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3213));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3215, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3216 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3215);
        if (((panda$core$Bit) { !$tmp3216.nonnull }).value) {
        {
            int $tmp3219;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3223 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3222 = $tmp3223;
                $tmp3221 = $tmp3222;
                param3220 = $tmp3221;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3221));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3222));
                if (((panda$core$Bit) { param3220 == NULL }).value) {
                {
                    $tmp3224 = NULL;
                    $returnValue3207 = $tmp3224;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3224));
                    $tmp3219 = 0;
                    goto $l3217;
                    $l3225:;
                    $tmp3202 = 1;
                    goto $l3200;
                    $l3226:;
                    return $returnValue3207;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3211, ((panda$core$Object*) param3220));
                $l3228:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3231, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3232 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3231);
                bool $tmp3230 = ((panda$core$Bit) { $tmp3232.nonnull }).value;
                if (!$tmp3230) goto $l3229;
                {
                    {
                        $tmp3233 = param3220;
                        org$pandalanguage$pandac$ASTNode* $tmp3236 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3235 = $tmp3236;
                        $tmp3234 = $tmp3235;
                        param3220 = $tmp3234;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3234));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3235));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3233));
                    }
                    if (((panda$core$Bit) { param3220 == NULL }).value) {
                    {
                        $tmp3237 = NULL;
                        $returnValue3207 = $tmp3237;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3237));
                        $tmp3219 = 1;
                        goto $l3217;
                        $l3238:;
                        $tmp3202 = 2;
                        goto $l3200;
                        $l3239:;
                        return $returnValue3207;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3211, ((panda$core$Object*) param3220));
                }
                goto $l3228;
                $l3229:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3241, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3243 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3241, &$s3242);
                if (((panda$core$Bit) { !$tmp3243.nonnull }).value) {
                {
                    $tmp3244 = NULL;
                    $returnValue3207 = $tmp3244;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3244));
                    $tmp3219 = 2;
                    goto $l3217;
                    $l3245:;
                    $tmp3202 = 3;
                    goto $l3200;
                    $l3246:;
                    return $returnValue3207;
                }
                }
            }
            $tmp3219 = -1;
            goto $l3217;
            $l3217:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3220));
            param3220 = NULL;
            switch ($tmp3219) {
                case 1: goto $l3238;
                case 2: goto $l3245;
                case 0: goto $l3225;
                case -1: goto $l3248;
            }
            $l3248:;
        }
        }
        panda$collections$ImmutableArray* $tmp3251 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3211);
        $tmp3250 = $tmp3251;
        $tmp3249 = $tmp3250;
        $returnValue3207 = $tmp3249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3250));
        $tmp3202 = 4;
        goto $l3200;
        $l3252:;
        return $returnValue3207;
    }
    $l3200:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3211));
    result3211 = NULL;
    switch ($tmp3202) {
        case 2: goto $l3239;
        case 3: goto $l3246;
        case 4: goto $l3252;
        case 1: goto $l3226;
        case 0: goto $l3209;
    }
    $l3254:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue3255;
    org$pandalanguage$pandac$ASTNode* $tmp3256;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    $tmp3256 = NULL;
    $returnValue3255 = $tmp3256;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3256));
    return $returnValue3255;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3261;
    org$pandalanguage$pandac$parser$Token$nullable start3262;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3263;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3265;
    org$pandalanguage$pandac$ASTNode* $returnValue3268;
    org$pandalanguage$pandac$ASTNode* $tmp3269;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3272;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3273;
    panda$core$String* name3274 = NULL;
    panda$core$String* $tmp3275;
    panda$core$String* $tmp3276;
    org$pandalanguage$pandac$ASTNode* $tmp3278;
    panda$collections$ImmutableArray* params3281 = NULL;
    panda$collections$ImmutableArray* $tmp3282;
    panda$collections$ImmutableArray* $tmp3283;
    org$pandalanguage$pandac$ASTNode* $tmp3285;
    org$pandalanguage$pandac$ASTNode* returnType3288 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3291;
    org$pandalanguage$pandac$ASTNode* $tmp3292;
    org$pandalanguage$pandac$ASTNode* $tmp3293;
    org$pandalanguage$pandac$ASTNode* $tmp3295;
    org$pandalanguage$pandac$ASTNode* $tmp3298;
    org$pandalanguage$pandac$ASTNode* $tmp3299;
    panda$collections$ImmutableArray* body3300 = NULL;
    panda$collections$ImmutableArray* $tmp3303;
    panda$collections$ImmutableArray* $tmp3304;
    panda$collections$ImmutableArray* $tmp3305;
    org$pandalanguage$pandac$ASTNode* $tmp3307;
    panda$collections$ImmutableArray* $tmp3310;
    panda$collections$ImmutableArray* $tmp3311;
    org$pandalanguage$pandac$parser$Token token3312;
    panda$core$String* tokenText3314 = NULL;
    panda$core$String* $tmp3315;
    panda$core$String* $tmp3316;
    org$pandalanguage$pandac$ASTNode* post3332 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3333;
    org$pandalanguage$pandac$ASTNode* $tmp3334;
    org$pandalanguage$pandac$ASTNode* $tmp3336;
    org$pandalanguage$pandac$ASTNode* $tmp3341;
    org$pandalanguage$pandac$ASTNode* $tmp3342;
    int $tmp3260;
    {
        memset(&kind3261, 0, sizeof(kind3261));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3263, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3264 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3263);
        start3262 = $tmp3264;
        if (((panda$core$Bit) { !start3262.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3265, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3267 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3265, &$s3266);
            start3262 = $tmp3267;
            if (((panda$core$Bit) { !start3262.nonnull }).value) {
            {
                $tmp3269 = NULL;
                $returnValue3268 = $tmp3269;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3269));
                $tmp3260 = 0;
                goto $l3258;
                $l3270:;
                return $returnValue3268;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3272, ((panda$core$Int64) { 0 }));
            kind3261 = $tmp3272;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3273, ((panda$core$Int64) { 1 }));
            kind3261 = $tmp3273;
        }
        }
        panda$core$String* $tmp3277 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3276 = $tmp3277;
        $tmp3275 = $tmp3276;
        name3274 = $tmp3275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3276));
        if (((panda$core$Bit) { name3274 == NULL }).value) {
        {
            $tmp3278 = NULL;
            $returnValue3268 = $tmp3278;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3278));
            $tmp3260 = 1;
            goto $l3258;
            $l3279:;
            return $returnValue3268;
        }
        }
        panda$collections$ImmutableArray* $tmp3284 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3283 = $tmp3284;
        $tmp3282 = $tmp3283;
        params3281 = $tmp3282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3283));
        if (((panda$core$Bit) { params3281 == NULL }).value) {
        {
            $tmp3285 = NULL;
            $returnValue3268 = $tmp3285;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3285));
            $tmp3260 = 2;
            goto $l3258;
            $l3286:;
            return $returnValue3268;
        }
        }
        memset(&returnType3288, 0, sizeof(returnType3288));
        org$pandalanguage$pandac$parser$Token $tmp3289 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3289.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3290.value) {
        {
            {
                $tmp3291 = returnType3288;
                org$pandalanguage$pandac$ASTNode* $tmp3294 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3293 = $tmp3294;
                $tmp3292 = $tmp3293;
                returnType3288 = $tmp3292;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3292));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3293));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3291));
            }
            if (((panda$core$Bit) { returnType3288 == NULL }).value) {
            {
                $tmp3295 = NULL;
                $returnValue3268 = $tmp3295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3295));
                $tmp3260 = 3;
                goto $l3258;
                $l3296:;
                return $returnValue3268;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3298 = returnType3288;
                $tmp3299 = NULL;
                returnType3288 = $tmp3299;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3298));
            }
        }
        }
        memset(&body3300, 0, sizeof(body3300));
        org$pandalanguage$pandac$parser$Token $tmp3301 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3301.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3302.value) {
        {
            {
                $tmp3303 = body3300;
                panda$collections$ImmutableArray* $tmp3306 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3305 = $tmp3306;
                $tmp3304 = $tmp3305;
                body3300 = $tmp3304;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3303));
            }
            if (((panda$core$Bit) { body3300 == NULL }).value) {
            {
                $tmp3307 = NULL;
                $returnValue3268 = $tmp3307;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3307));
                $tmp3260 = 4;
                goto $l3258;
                $l3308:;
                return $returnValue3268;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3310 = body3300;
                $tmp3311 = NULL;
                body3300 = $tmp3311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3313 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3312 = $tmp3313;
        panda$core$String* $tmp3317 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3312);
        $tmp3316 = $tmp3317;
        $tmp3315 = $tmp3316;
        tokenText3314 = $tmp3315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3316));
        panda$core$Bit $tmp3319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3312.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3318 = $tmp3319.value;
        if (!$tmp3318) goto $l3320;
        panda$core$Bit $tmp3323 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3314, &$s3322);
        bool $tmp3321 = $tmp3323.value;
        if ($tmp3321) goto $l3324;
        panda$core$Bit $tmp3326 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3314, &$s3325);
        $tmp3321 = $tmp3326.value;
        $l3324:;
        panda$core$Bit $tmp3327 = { $tmp3321 };
        $tmp3318 = $tmp3327.value;
        $l3320:;
        panda$core$Bit $tmp3328 = { $tmp3318 };
        if ($tmp3328.value) {
        {
            int $tmp3331;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3335 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3334 = $tmp3335;
                $tmp3333 = $tmp3334;
                post3332 = $tmp3333;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3334));
                if (((panda$core$Bit) { post3332 == NULL }).value) {
                {
                    $tmp3336 = NULL;
                    $returnValue3268 = $tmp3336;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3336));
                    $tmp3331 = 0;
                    goto $l3329;
                    $l3337:;
                    $tmp3260 = 5;
                    goto $l3258;
                    $l3338:;
                    return $returnValue3268;
                }
                }
            }
            $tmp3331 = -1;
            goto $l3329;
            $l3329:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3332));
            post3332 = NULL;
            switch ($tmp3331) {
                case 0: goto $l3337;
                case -1: goto $l3340;
            }
            $l3340:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3343 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3343, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3262.value).position, p_doccomment, p_annotations, kind3261, name3274, params3281, returnType3288, body3300);
        $tmp3342 = $tmp3343;
        $tmp3341 = $tmp3342;
        $returnValue3268 = $tmp3341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
        $tmp3260 = 6;
        goto $l3258;
        $l3344:;
        return $returnValue3268;
    }
    $l3258:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3274));
    name3274 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3281));
    params3281 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3288));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3300));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3314));
    tokenText3314 = NULL;
    switch ($tmp3260) {
        case 4: goto $l3308;
        case 1: goto $l3279;
        case 2: goto $l3286;
        case 6: goto $l3344;
        case 5: goto $l3338;
        case 0: goto $l3270;
        case 3: goto $l3296;
    }
    $l3346:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3350;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3351;
    org$pandalanguage$pandac$ASTNode* $returnValue3354;
    org$pandalanguage$pandac$ASTNode* $tmp3355;
    panda$collections$ImmutableArray* params3358 = NULL;
    panda$collections$ImmutableArray* $tmp3359;
    panda$collections$ImmutableArray* $tmp3360;
    org$pandalanguage$pandac$ASTNode* $tmp3362;
    panda$collections$ImmutableArray* b3365 = NULL;
    panda$collections$ImmutableArray* $tmp3366;
    panda$collections$ImmutableArray* $tmp3367;
    org$pandalanguage$pandac$ASTNode* $tmp3369;
    org$pandalanguage$pandac$parser$Token token3372;
    panda$core$String* tokenText3374 = NULL;
    panda$core$String* $tmp3375;
    panda$core$String* $tmp3376;
    org$pandalanguage$pandac$ASTNode* post3392 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3393;
    org$pandalanguage$pandac$ASTNode* $tmp3394;
    org$pandalanguage$pandac$ASTNode* $tmp3396;
    org$pandalanguage$pandac$ASTNode* $tmp3401;
    org$pandalanguage$pandac$ASTNode* $tmp3402;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3404;
    int $tmp3349;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3351, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3353 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3351, &$s3352);
        start3350 = $tmp3353;
        if (((panda$core$Bit) { !start3350.nonnull }).value) {
        {
            $tmp3355 = NULL;
            $returnValue3354 = $tmp3355;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3355));
            $tmp3349 = 0;
            goto $l3347;
            $l3356:;
            return $returnValue3354;
        }
        }
        panda$collections$ImmutableArray* $tmp3361 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3360 = $tmp3361;
        $tmp3359 = $tmp3360;
        params3358 = $tmp3359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3359));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3360));
        if (((panda$core$Bit) { params3358 == NULL }).value) {
        {
            $tmp3362 = NULL;
            $returnValue3354 = $tmp3362;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3362));
            $tmp3349 = 1;
            goto $l3347;
            $l3363:;
            return $returnValue3354;
        }
        }
        panda$collections$ImmutableArray* $tmp3368 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3367 = $tmp3368;
        $tmp3366 = $tmp3367;
        b3365 = $tmp3366;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
        if (((panda$core$Bit) { b3365 == NULL }).value) {
        {
            $tmp3369 = NULL;
            $returnValue3354 = $tmp3369;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3369));
            $tmp3349 = 2;
            goto $l3347;
            $l3370:;
            return $returnValue3354;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3373 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3372 = $tmp3373;
        panda$core$String* $tmp3377 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3372);
        $tmp3376 = $tmp3377;
        $tmp3375 = $tmp3376;
        tokenText3374 = $tmp3375;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3376));
        panda$core$Bit $tmp3379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3372.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3378 = $tmp3379.value;
        if (!$tmp3378) goto $l3380;
        panda$core$Bit $tmp3383 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3374, &$s3382);
        bool $tmp3381 = $tmp3383.value;
        if ($tmp3381) goto $l3384;
        panda$core$Bit $tmp3386 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3374, &$s3385);
        $tmp3381 = $tmp3386.value;
        $l3384:;
        panda$core$Bit $tmp3387 = { $tmp3381 };
        $tmp3378 = $tmp3387.value;
        $l3380:;
        panda$core$Bit $tmp3388 = { $tmp3378 };
        if ($tmp3388.value) {
        {
            int $tmp3391;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3395 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3394 = $tmp3395;
                $tmp3393 = $tmp3394;
                post3392 = $tmp3393;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3394));
                if (((panda$core$Bit) { post3392 == NULL }).value) {
                {
                    $tmp3396 = NULL;
                    $returnValue3354 = $tmp3396;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3396));
                    $tmp3391 = 0;
                    goto $l3389;
                    $l3397:;
                    $tmp3349 = 3;
                    goto $l3347;
                    $l3398:;
                    return $returnValue3354;
                }
                }
            }
            $tmp3391 = -1;
            goto $l3389;
            $l3389:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3392));
            post3392 = NULL;
            switch ($tmp3391) {
                case -1: goto $l3400;
                case 0: goto $l3397;
            }
            $l3400:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3403 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3404, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3403, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3350.value).position, p_doccomment, p_annotations, $tmp3404, &$s3405, params3358, NULL, b3365);
        $tmp3402 = $tmp3403;
        $tmp3401 = $tmp3402;
        $returnValue3354 = $tmp3401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3402));
        $tmp3349 = 4;
        goto $l3347;
        $l3406:;
        return $returnValue3354;
    }
    $l3347:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3358));
    params3358 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b3365));
    b3365 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3374));
    tokenText3374 = NULL;
    switch ($tmp3349) {
        case 2: goto $l3370;
        case 1: goto $l3363;
        case 3: goto $l3398;
        case 0: goto $l3356;
        case 4: goto $l3406;
    }
    $l3408:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl3412 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3413;
    org$pandalanguage$pandac$ASTNode* $tmp3414;
    org$pandalanguage$pandac$ASTNode* $returnValue3416;
    org$pandalanguage$pandac$ASTNode* $tmp3417;
    org$pandalanguage$pandac$ASTNode* $tmp3420;
    org$pandalanguage$pandac$ASTNode* $tmp3421;
    int $tmp3411;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3415 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3414 = $tmp3415;
        $tmp3413 = $tmp3414;
        decl3412 = $tmp3413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3414));
        if (((panda$core$Bit) { decl3412 == NULL }).value) {
        {
            $tmp3417 = NULL;
            $returnValue3416 = $tmp3417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3417));
            $tmp3411 = 0;
            goto $l3409;
            $l3418:;
            return $returnValue3416;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3422 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3424 = (($fn3423) decl3412->$class->vtable[2])(decl3412);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3422, ((panda$core$Int64) { 16 }), $tmp3424, p_doccomment, p_annotations, decl3412);
        $tmp3421 = $tmp3422;
        $tmp3420 = $tmp3421;
        $returnValue3416 = $tmp3420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3421));
        $tmp3411 = 1;
        goto $l3409;
        $l3425:;
        return $returnValue3416;
    }
    $l3409:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3412));
    decl3412 = NULL;
    switch ($tmp3411) {
        case 1: goto $l3425;
        case 0: goto $l3418;
    }
    $l3427:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name3431;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3432;
    org$pandalanguage$pandac$ASTNode* $returnValue3435;
    org$pandalanguage$pandac$ASTNode* $tmp3436;
    panda$collections$Array* fields3439 = NULL;
    panda$collections$Array* $tmp3440;
    panda$collections$Array* $tmp3441;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3443;
    org$pandalanguage$pandac$ASTNode* field3450 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3451;
    org$pandalanguage$pandac$ASTNode* $tmp3452;
    org$pandalanguage$pandac$ASTNode* $tmp3454;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3461;
    org$pandalanguage$pandac$ASTNode* $tmp3463;
    org$pandalanguage$pandac$ASTNode* $tmp3464;
    org$pandalanguage$pandac$ASTNode* $tmp3465;
    org$pandalanguage$pandac$ASTNode* $tmp3467;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3472;
    org$pandalanguage$pandac$ASTNode* $tmp3475;
    org$pandalanguage$pandac$ASTNode* $tmp3478;
    org$pandalanguage$pandac$ASTNode* $tmp3479;
    panda$core$String* $tmp3481;
    panda$collections$ImmutableArray* $tmp3483;
    int $tmp3430;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3432, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3434 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3432, &$s3433);
        name3431 = $tmp3434;
        if (((panda$core$Bit) { !name3431.nonnull }).value) {
        {
            $tmp3436 = NULL;
            $returnValue3435 = $tmp3436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3436));
            $tmp3430 = 0;
            goto $l3428;
            $l3437:;
            return $returnValue3435;
        }
        }
        panda$collections$Array* $tmp3442 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3442);
        $tmp3441 = $tmp3442;
        $tmp3440 = $tmp3441;
        fields3439 = $tmp3440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3441));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3443, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3444 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3443);
        if (((panda$core$Bit) { $tmp3444.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3445 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp3446 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3445.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp3446.value) {
            {
                int $tmp3449;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3453 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3452 = $tmp3453;
                    $tmp3451 = $tmp3452;
                    field3450 = $tmp3451;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3451));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3452));
                    if (((panda$core$Bit) { field3450 == NULL }).value) {
                    {
                        $tmp3454 = NULL;
                        $returnValue3435 = $tmp3454;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3454));
                        $tmp3449 = 0;
                        goto $l3447;
                        $l3455:;
                        $tmp3430 = 1;
                        goto $l3428;
                        $l3456:;
                        return $returnValue3435;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields3439, ((panda$core$Object*) field3450));
                    $l3458:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3461, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3462 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3461);
                    bool $tmp3460 = ((panda$core$Bit) { $tmp3462.nonnull }).value;
                    if (!$tmp3460) goto $l3459;
                    {
                        {
                            $tmp3463 = field3450;
                            org$pandalanguage$pandac$ASTNode* $tmp3466 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3465 = $tmp3466;
                            $tmp3464 = $tmp3465;
                            field3450 = $tmp3464;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3464));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3465));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3463));
                        }
                        if (((panda$core$Bit) { field3450 == NULL }).value) {
                        {
                            $tmp3467 = NULL;
                            $returnValue3435 = $tmp3467;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3467));
                            $tmp3449 = 1;
                            goto $l3447;
                            $l3468:;
                            $tmp3430 = 2;
                            goto $l3428;
                            $l3469:;
                            return $returnValue3435;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields3439, ((panda$core$Object*) field3450));
                    }
                    goto $l3458;
                    $l3459:;
                }
                $tmp3449 = -1;
                goto $l3447;
                $l3447:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field3450));
                field3450 = NULL;
                switch ($tmp3449) {
                    case -1: goto $l3471;
                    case 0: goto $l3455;
                    case 1: goto $l3468;
                }
                $l3471:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3472, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3474 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3472, &$s3473);
            if (((panda$core$Bit) { !$tmp3474.nonnull }).value) {
            {
                $tmp3475 = NULL;
                $returnValue3435 = $tmp3475;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3475));
                $tmp3430 = 3;
                goto $l3428;
                $l3476:;
                return $returnValue3435;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3480 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3482 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3431.value));
        $tmp3481 = $tmp3482;
        panda$collections$ImmutableArray* $tmp3484 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields3439);
        $tmp3483 = $tmp3484;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3480, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) name3431.value).position, p_doccomment, $tmp3481, $tmp3483);
        $tmp3479 = $tmp3480;
        $tmp3478 = $tmp3479;
        $returnValue3435 = $tmp3478;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3481));
        $tmp3430 = 4;
        goto $l3428;
        $l3485:;
        return $returnValue3435;
    }
    $l3428:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields3439));
    fields3439 = NULL;
    switch ($tmp3430) {
        case 1: goto $l3456;
        case 2: goto $l3469;
        case 4: goto $l3485;
        case 3: goto $l3476;
        case 0: goto $l3437;
    }
    $l3487:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3491;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3492;
    org$pandalanguage$pandac$ASTNode* $returnValue3495;
    org$pandalanguage$pandac$ASTNode* $tmp3496;
    org$pandalanguage$pandac$parser$Token$nullable name3499;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3500;
    org$pandalanguage$pandac$ASTNode* $tmp3503;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3506;
    org$pandalanguage$pandac$ASTNode* $tmp3509;
    panda$collections$Array* members3512 = NULL;
    panda$collections$Array* $tmp3513;
    panda$collections$Array* $tmp3514;
    org$pandalanguage$pandac$ASTNode* dc3516 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3517;
    org$pandalanguage$pandac$parser$Token next3520;
    org$pandalanguage$pandac$parser$Token$Kind $match$1875_133522;
    panda$core$String* $tmp3561;
    panda$core$String* $tmp3562;
    panda$core$String* $tmp3564;
    org$pandalanguage$pandac$ASTNode* $tmp3569;
    org$pandalanguage$pandac$ASTNode* $tmp3570;
    org$pandalanguage$pandac$ASTNode* $tmp3571;
    org$pandalanguage$pandac$ASTNode* c3577 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3578;
    org$pandalanguage$pandac$ASTNode* $tmp3579;
    org$pandalanguage$pandac$ASTNode* $tmp3581;
    org$pandalanguage$pandac$ASTNode* $tmp3585;
    org$pandalanguage$pandac$ASTNode* $tmp3586;
    panda$collections$ImmutableArray* a3588 = NULL;
    panda$collections$ImmutableArray* $tmp3589;
    panda$collections$ImmutableArray* $tmp3590;
    org$pandalanguage$pandac$parser$Token next3594;
    org$pandalanguage$pandac$parser$Token$Kind $match$1899_133596;
    panda$core$String* $tmp3600;
    panda$core$String* $tmp3601;
    panda$core$String* $tmp3603;
    org$pandalanguage$pandac$ASTNode* $tmp3608;
    panda$collections$ImmutableArray* $tmp3611;
    panda$collections$ImmutableArray* $tmp3612;
    panda$collections$ImmutableArray* $tmp3613;
    panda$core$String* $tmp3621;
    panda$core$String* $tmp3622;
    panda$core$String* $tmp3624;
    org$pandalanguage$pandac$ASTNode* $tmp3629;
    org$pandalanguage$pandac$ASTNode* $tmp3632;
    org$pandalanguage$pandac$ASTNode* $tmp3633;
    org$pandalanguage$pandac$ASTNode* $tmp3634;
    org$pandalanguage$pandac$ASTNode* decl3640 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3641;
    org$pandalanguage$pandac$ASTNode* $tmp3642;
    org$pandalanguage$pandac$ASTNode* $tmp3644;
    org$pandalanguage$pandac$ASTNode* $tmp3648;
    org$pandalanguage$pandac$ASTNode* $tmp3649;
    panda$collections$ImmutableArray* $tmp3650;
    panda$collections$ImmutableArray* $tmp3651;
    panda$collections$ImmutableArray* $tmp3652;
    org$pandalanguage$pandac$ASTNode* decl3659 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3660;
    org$pandalanguage$pandac$ASTNode* $tmp3661;
    org$pandalanguage$pandac$ASTNode* $tmp3663;
    org$pandalanguage$pandac$ASTNode* $tmp3667;
    org$pandalanguage$pandac$ASTNode* $tmp3668;
    panda$collections$ImmutableArray* $tmp3669;
    panda$collections$ImmutableArray* $tmp3670;
    panda$collections$ImmutableArray* $tmp3671;
    org$pandalanguage$pandac$ASTNode* decl3678 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3679;
    org$pandalanguage$pandac$ASTNode* $tmp3680;
    org$pandalanguage$pandac$ASTNode* $tmp3682;
    org$pandalanguage$pandac$ASTNode* $tmp3686;
    org$pandalanguage$pandac$ASTNode* $tmp3687;
    panda$collections$ImmutableArray* $tmp3688;
    panda$collections$ImmutableArray* $tmp3689;
    panda$collections$ImmutableArray* $tmp3690;
    org$pandalanguage$pandac$ASTNode* decl3701 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3702;
    org$pandalanguage$pandac$ASTNode* $tmp3703;
    org$pandalanguage$pandac$ASTNode* $tmp3705;
    org$pandalanguage$pandac$ASTNode* $tmp3709;
    org$pandalanguage$pandac$ASTNode* $tmp3710;
    panda$collections$ImmutableArray* $tmp3711;
    panda$collections$ImmutableArray* $tmp3712;
    panda$collections$ImmutableArray* $tmp3713;
    org$pandalanguage$pandac$ASTNode* decl3732 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3733;
    org$pandalanguage$pandac$ASTNode* $tmp3734;
    org$pandalanguage$pandac$ASTNode* $tmp3736;
    org$pandalanguage$pandac$ASTNode* $tmp3740;
    org$pandalanguage$pandac$ASTNode* $tmp3741;
    panda$collections$ImmutableArray* $tmp3742;
    panda$collections$ImmutableArray* $tmp3743;
    panda$collections$ImmutableArray* $tmp3744;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3748;
    panda$core$String* $tmp3750;
    panda$core$String* $tmp3751;
    panda$core$String* $tmp3753;
    org$pandalanguage$pandac$ASTNode* $tmp3758;
    org$pandalanguage$pandac$ASTNode* $tmp3761;
    org$pandalanguage$pandac$ASTNode* $tmp3762;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3764;
    panda$core$String* $tmp3765;
    panda$collections$ImmutableArray* $tmp3767;
    int $tmp3490;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3492, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3494 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3492, &$s3493);
        start3491 = $tmp3494;
        if (((panda$core$Bit) { !start3491.nonnull }).value) {
        {
            $tmp3496 = NULL;
            $returnValue3495 = $tmp3496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3496));
            $tmp3490 = 0;
            goto $l3488;
            $l3497:;
            return $returnValue3495;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3500, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3502 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3500, &$s3501);
        name3499 = $tmp3502;
        if (((panda$core$Bit) { !name3499.nonnull }).value) {
        {
            $tmp3503 = NULL;
            $returnValue3495 = $tmp3503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3503));
            $tmp3490 = 1;
            goto $l3488;
            $l3504:;
            return $returnValue3495;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3506, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3508 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3506, &$s3507);
        if (((panda$core$Bit) { !$tmp3508.nonnull }).value) {
        {
            $tmp3509 = NULL;
            $returnValue3495 = $tmp3509;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3509));
            $tmp3490 = 2;
            goto $l3488;
            $l3510:;
            return $returnValue3495;
        }
        }
        panda$collections$Array* $tmp3515 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3515);
        $tmp3514 = $tmp3515;
        $tmp3513 = $tmp3514;
        members3512 = $tmp3513;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3514));
        $tmp3517 = NULL;
        dc3516 = $tmp3517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3517));
        $l3518:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3521 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3520 = $tmp3521;
            {
                $match$1875_133522 = next3520.kind;
                panda$core$Bit $tmp3532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp3531 = $tmp3532.value;
                if ($tmp3531) goto $l3533;
                panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp3531 = $tmp3534.value;
                $l3533:;
                panda$core$Bit $tmp3535 = { $tmp3531 };
                bool $tmp3530 = $tmp3535.value;
                if ($tmp3530) goto $l3536;
                panda$core$Bit $tmp3537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp3530 = $tmp3537.value;
                $l3536:;
                panda$core$Bit $tmp3538 = { $tmp3530 };
                bool $tmp3529 = $tmp3538.value;
                if ($tmp3529) goto $l3539;
                panda$core$Bit $tmp3540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp3529 = $tmp3540.value;
                $l3539:;
                panda$core$Bit $tmp3541 = { $tmp3529 };
                bool $tmp3528 = $tmp3541.value;
                if ($tmp3528) goto $l3542;
                panda$core$Bit $tmp3543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3528 = $tmp3543.value;
                $l3542:;
                panda$core$Bit $tmp3544 = { $tmp3528 };
                bool $tmp3527 = $tmp3544.value;
                if ($tmp3527) goto $l3545;
                panda$core$Bit $tmp3546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp3527 = $tmp3546.value;
                $l3545:;
                panda$core$Bit $tmp3547 = { $tmp3527 };
                bool $tmp3526 = $tmp3547.value;
                if ($tmp3526) goto $l3548;
                panda$core$Bit $tmp3549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp3526 = $tmp3549.value;
                $l3548:;
                panda$core$Bit $tmp3550 = { $tmp3526 };
                bool $tmp3525 = $tmp3550.value;
                if ($tmp3525) goto $l3551;
                panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3525 = $tmp3552.value;
                $l3551:;
                panda$core$Bit $tmp3553 = { $tmp3525 };
                bool $tmp3524 = $tmp3553.value;
                if ($tmp3524) goto $l3554;
                panda$core$Bit $tmp3555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3524 = $tmp3555.value;
                $l3554:;
                panda$core$Bit $tmp3556 = { $tmp3524 };
                bool $tmp3523 = $tmp3556.value;
                if ($tmp3523) goto $l3557;
                panda$core$Bit $tmp3558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3523 = $tmp3558.value;
                $l3557:;
                panda$core$Bit $tmp3559 = { $tmp3523 };
                if ($tmp3559.value) {
                {
                    goto $l3519;
                }
                }
                else {
                panda$core$Bit $tmp3560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3560.value) {
                {
                    if (((panda$core$Bit) { dc3516 != NULL }).value) {
                    {
                        panda$core$String* $tmp3565 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3520);
                        $tmp3564 = $tmp3565;
                        panda$core$String* $tmp3566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3563, $tmp3564);
                        $tmp3562 = $tmp3566;
                        panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3567);
                        $tmp3561 = $tmp3568;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3520, $tmp3561);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3561));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3562));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3564));
                    }
                    }
                    {
                        $tmp3569 = dc3516;
                        org$pandalanguage$pandac$ASTNode* $tmp3572 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3571 = $tmp3572;
                        $tmp3570 = $tmp3571;
                        dc3516 = $tmp3570;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3570));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3571));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3569));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1875_133522.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp3573.value) {
                {
                    int $tmp3576;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3580 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3516);
                        $tmp3579 = $tmp3580;
                        $tmp3578 = $tmp3579;
                        c3577 = $tmp3578;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3578));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3579));
                        if (((panda$core$Bit) { c3577 == NULL }).value) {
                        {
                            $tmp3581 = NULL;
                            $returnValue3495 = $tmp3581;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3581));
                            $tmp3576 = 0;
                            goto $l3574;
                            $l3582:;
                            $tmp3490 = 3;
                            goto $l3488;
                            $l3583:;
                            return $returnValue3495;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3512, ((panda$core$Object*) c3577));
                        {
                            $tmp3585 = dc3516;
                            $tmp3586 = NULL;
                            dc3516 = $tmp3586;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3586));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3585));
                        }
                    }
                    $tmp3576 = -1;
                    goto $l3574;
                    $l3574:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3577));
                    c3577 = NULL;
                    switch ($tmp3576) {
                        case 0: goto $l3582;
                        case -1: goto $l3587;
                    }
                    $l3587:;
                }
                }
                else {
                {
                    goto $l3519;
                }
                }
                }
                }
            }
        }
        }
        $l3519:;
        panda$collections$ImmutableArray* $tmp3591 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3591);
        $tmp3590 = $tmp3591;
        $tmp3589 = $tmp3590;
        a3588 = $tmp3589;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3590));
        $l3592:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3595 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3594 = $tmp3595;
            {
                $match$1899_133596 = next3594.kind;
                panda$core$Bit $tmp3597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp3597.value) {
                {
                    panda$core$Int64 $tmp3598 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3588);
                    panda$core$Bit $tmp3599 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3598, ((panda$core$Int64) { 0 }));
                    if ($tmp3599.value) {
                    {
                        panda$core$String* $tmp3604 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3594);
                        $tmp3603 = $tmp3604;
                        panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3602, $tmp3603);
                        $tmp3601 = $tmp3605;
                        panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3606);
                        $tmp3600 = $tmp3607;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3594, $tmp3600);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3600));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3601));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3603));
                        $tmp3608 = NULL;
                        $returnValue3495 = $tmp3608;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3608));
                        $tmp3490 = 4;
                        goto $l3488;
                        $l3609:;
                        return $returnValue3495;
                    }
                    }
                    {
                        $tmp3611 = a3588;
                        panda$collections$ImmutableArray* $tmp3614 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp3613 = $tmp3614;
                        $tmp3612 = $tmp3613;
                        a3588 = $tmp3612;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3612));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3613));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3611));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3615.value) {
                {
                    bool $tmp3616 = ((panda$core$Bit) { dc3516 != NULL }).value;
                    if ($tmp3616) goto $l3617;
                    panda$core$Int64 $tmp3618 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3588);
                    panda$core$Bit $tmp3619 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3618, ((panda$core$Int64) { 0 }));
                    $tmp3616 = $tmp3619.value;
                    $l3617:;
                    panda$core$Bit $tmp3620 = { $tmp3616 };
                    if ($tmp3620.value) {
                    {
                        panda$core$String* $tmp3625 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3594);
                        $tmp3624 = $tmp3625;
                        panda$core$String* $tmp3626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3623, $tmp3624);
                        $tmp3622 = $tmp3626;
                        panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3622, &$s3627);
                        $tmp3621 = $tmp3628;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3594, $tmp3621);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3621));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3622));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3624));
                        $tmp3629 = NULL;
                        $returnValue3495 = $tmp3629;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3629));
                        $tmp3490 = 5;
                        goto $l3488;
                        $l3630:;
                        return $returnValue3495;
                    }
                    }
                    {
                        $tmp3632 = dc3516;
                        org$pandalanguage$pandac$ASTNode* $tmp3635 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3634 = $tmp3635;
                        $tmp3633 = $tmp3634;
                        dc3516 = $tmp3633;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3633));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3634));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3632));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp3636.value) {
                {
                    int $tmp3639;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3643 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3516, a3588);
                        $tmp3642 = $tmp3643;
                        $tmp3641 = $tmp3642;
                        decl3640 = $tmp3641;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3641));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3642));
                        if (((panda$core$Bit) { decl3640 == NULL }).value) {
                        {
                            $tmp3644 = NULL;
                            $returnValue3495 = $tmp3644;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3644));
                            $tmp3639 = 0;
                            goto $l3637;
                            $l3645:;
                            $tmp3490 = 6;
                            goto $l3488;
                            $l3646:;
                            return $returnValue3495;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3512, ((panda$core$Object*) decl3640));
                        {
                            $tmp3648 = dc3516;
                            $tmp3649 = NULL;
                            dc3516 = $tmp3649;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3649));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3648));
                        }
                        {
                            $tmp3650 = a3588;
                            panda$collections$ImmutableArray* $tmp3653 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3653);
                            $tmp3652 = $tmp3653;
                            $tmp3651 = $tmp3652;
                            a3588 = $tmp3651;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3651));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3652));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3650));
                        }
                    }
                    $tmp3639 = -1;
                    goto $l3637;
                    $l3637:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3640));
                    decl3640 = NULL;
                    switch ($tmp3639) {
                        case -1: goto $l3654;
                        case 0: goto $l3645;
                    }
                    $l3654:;
                }
                }
                else {
                panda$core$Bit $tmp3655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp3655.value) {
                {
                    int $tmp3658;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3662 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3516, a3588);
                        $tmp3661 = $tmp3662;
                        $tmp3660 = $tmp3661;
                        decl3659 = $tmp3660;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3660));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3661));
                        if (((panda$core$Bit) { decl3659 == NULL }).value) {
                        {
                            $tmp3663 = NULL;
                            $returnValue3495 = $tmp3663;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3663));
                            $tmp3658 = 0;
                            goto $l3656;
                            $l3664:;
                            $tmp3490 = 7;
                            goto $l3488;
                            $l3665:;
                            return $returnValue3495;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3512, ((panda$core$Object*) decl3659));
                        {
                            $tmp3667 = dc3516;
                            $tmp3668 = NULL;
                            dc3516 = $tmp3668;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3668));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3667));
                        }
                        {
                            $tmp3669 = a3588;
                            panda$collections$ImmutableArray* $tmp3672 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3672);
                            $tmp3671 = $tmp3672;
                            $tmp3670 = $tmp3671;
                            a3588 = $tmp3670;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3670));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3671));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3669));
                        }
                    }
                    $tmp3658 = -1;
                    goto $l3656;
                    $l3656:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3659));
                    decl3659 = NULL;
                    switch ($tmp3658) {
                        case -1: goto $l3673;
                        case 0: goto $l3664;
                    }
                    $l3673:;
                }
                }
                else {
                panda$core$Bit $tmp3674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp3674.value) {
                {
                    int $tmp3677;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3681 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3516, a3588);
                        $tmp3680 = $tmp3681;
                        $tmp3679 = $tmp3680;
                        decl3678 = $tmp3679;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3679));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3680));
                        if (((panda$core$Bit) { decl3678 == NULL }).value) {
                        {
                            $tmp3682 = NULL;
                            $returnValue3495 = $tmp3682;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3682));
                            $tmp3677 = 0;
                            goto $l3675;
                            $l3683:;
                            $tmp3490 = 8;
                            goto $l3488;
                            $l3684:;
                            return $returnValue3495;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3512, ((panda$core$Object*) decl3678));
                        {
                            $tmp3686 = dc3516;
                            $tmp3687 = NULL;
                            dc3516 = $tmp3687;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3687));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3686));
                        }
                        {
                            $tmp3688 = a3588;
                            panda$collections$ImmutableArray* $tmp3691 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3691);
                            $tmp3690 = $tmp3691;
                            $tmp3689 = $tmp3690;
                            a3588 = $tmp3689;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3689));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3690));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3688));
                        }
                    }
                    $tmp3677 = -1;
                    goto $l3675;
                    $l3675:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3678));
                    decl3678 = NULL;
                    switch ($tmp3677) {
                        case -1: goto $l3692;
                        case 0: goto $l3683;
                    }
                    $l3692:;
                }
                }
                else {
                panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp3693 = $tmp3694.value;
                if ($tmp3693) goto $l3695;
                panda$core$Bit $tmp3696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3693 = $tmp3696.value;
                $l3695:;
                panda$core$Bit $tmp3697 = { $tmp3693 };
                if ($tmp3697.value) {
                {
                    int $tmp3700;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3704 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3516, a3588);
                        $tmp3703 = $tmp3704;
                        $tmp3702 = $tmp3703;
                        decl3701 = $tmp3702;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3702));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3703));
                        if (((panda$core$Bit) { decl3701 == NULL }).value) {
                        {
                            $tmp3705 = NULL;
                            $returnValue3495 = $tmp3705;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3705));
                            $tmp3700 = 0;
                            goto $l3698;
                            $l3706:;
                            $tmp3490 = 9;
                            goto $l3488;
                            $l3707:;
                            return $returnValue3495;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3512, ((panda$core$Object*) decl3701));
                        {
                            $tmp3709 = dc3516;
                            $tmp3710 = NULL;
                            dc3516 = $tmp3710;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3710));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3709));
                        }
                        {
                            $tmp3711 = a3588;
                            panda$collections$ImmutableArray* $tmp3714 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3714);
                            $tmp3713 = $tmp3714;
                            $tmp3712 = $tmp3713;
                            a3588 = $tmp3712;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3712));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3713));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3711));
                        }
                    }
                    $tmp3700 = -1;
                    goto $l3698;
                    $l3698:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3701));
                    decl3701 = NULL;
                    switch ($tmp3700) {
                        case 0: goto $l3706;
                        case -1: goto $l3715;
                    }
                    $l3715:;
                }
                }
                else {
                panda$core$Bit $tmp3719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp3718 = $tmp3719.value;
                if ($tmp3718) goto $l3720;
                panda$core$Bit $tmp3721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3718 = $tmp3721.value;
                $l3720:;
                panda$core$Bit $tmp3722 = { $tmp3718 };
                bool $tmp3717 = $tmp3722.value;
                if ($tmp3717) goto $l3723;
                panda$core$Bit $tmp3724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3717 = $tmp3724.value;
                $l3723:;
                panda$core$Bit $tmp3725 = { $tmp3717 };
                bool $tmp3716 = $tmp3725.value;
                if ($tmp3716) goto $l3726;
                panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3716 = $tmp3727.value;
                $l3726:;
                panda$core$Bit $tmp3728 = { $tmp3716 };
                if ($tmp3728.value) {
                {
                    int $tmp3731;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3735 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3516, a3588);
                        $tmp3734 = $tmp3735;
                        $tmp3733 = $tmp3734;
                        decl3732 = $tmp3733;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3733));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3734));
                        if (((panda$core$Bit) { decl3732 == NULL }).value) {
                        {
                            $tmp3736 = NULL;
                            $returnValue3495 = $tmp3736;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3736));
                            $tmp3731 = 0;
                            goto $l3729;
                            $l3737:;
                            $tmp3490 = 10;
                            goto $l3488;
                            $l3738:;
                            return $returnValue3495;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3512, ((panda$core$Object*) decl3732));
                        {
                            $tmp3740 = dc3516;
                            $tmp3741 = NULL;
                            dc3516 = $tmp3741;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3741));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3740));
                        }
                        {
                            $tmp3742 = a3588;
                            panda$collections$ImmutableArray* $tmp3745 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3745);
                            $tmp3744 = $tmp3745;
                            $tmp3743 = $tmp3744;
                            a3588 = $tmp3743;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3743));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3744));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3742));
                        }
                    }
                    $tmp3731 = -1;
                    goto $l3729;
                    $l3729:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3732));
                    decl3732 = NULL;
                    switch ($tmp3731) {
                        case 0: goto $l3737;
                        case -1: goto $l3746;
                    }
                    $l3746:;
                }
                }
                else {
                panda$core$Bit $tmp3747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1899_133596.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp3747.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3748, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3748, &$s3749);
                    goto $l3593;
                }
                }
                else {
                {
                    panda$core$String* $tmp3754 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3594);
                    $tmp3753 = $tmp3754;
                    panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3752, $tmp3753);
                    $tmp3751 = $tmp3755;
                    panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, &$s3756);
                    $tmp3750 = $tmp3757;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3594, $tmp3750);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3750));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3751));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3753));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp3758 = NULL;
                    $returnValue3495 = $tmp3758;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3758));
                    $tmp3490 = 11;
                    goto $l3488;
                    $l3759:;
                    return $returnValue3495;
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
        $l3593:;
        org$pandalanguage$pandac$ASTNode* $tmp3763 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3764, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp3766 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3499.value));
        $tmp3765 = $tmp3766;
        panda$collections$ImmutableArray* $tmp3768 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3512);
        $tmp3767 = $tmp3768;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3763, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start3491.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp3764, $tmp3765, NULL, NULL, $tmp3767);
        $tmp3762 = $tmp3763;
        $tmp3761 = $tmp3762;
        $returnValue3495 = $tmp3761;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3761));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3762));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3767));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3765));
        $tmp3490 = 12;
        goto $l3488;
        $l3769:;
        return $returnValue3495;
    }
    $l3488:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3512));
    members3512 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3516));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3588));
    a3588 = NULL;
    switch ($tmp3490) {
        case 1: goto $l3504;
        case 7: goto $l3665;
        case 5: goto $l3630;
        case 6: goto $l3646;
        case 8: goto $l3684;
        case 2: goto $l3510;
        case 3: goto $l3583;
        case 4: goto $l3609;
        case 12: goto $l3769;
        case 11: goto $l3759;
        case 0: goto $l3497;
        case 10: goto $l3738;
        case 9: goto $l3707;
    }
    $l3771:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3775;
    org$pandalanguage$pandac$ASTNode* dc3777 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    org$pandalanguage$pandac$ASTNode* $tmp3780;
    org$pandalanguage$pandac$ASTNode* $tmp3781;
    org$pandalanguage$pandac$ASTNode* $returnValue3783;
    org$pandalanguage$pandac$ASTNode* $tmp3784;
    org$pandalanguage$pandac$ASTNode* $tmp3787;
    org$pandalanguage$pandac$ASTNode* $tmp3788;
    panda$collections$ImmutableArray* a3789 = NULL;
    panda$collections$ImmutableArray* $tmp3790;
    panda$collections$ImmutableArray* $tmp3791;
    org$pandalanguage$pandac$ASTNode* $tmp3793;
    org$pandalanguage$pandac$parser$Token$Kind $match$1985_93796;
    org$pandalanguage$pandac$ASTNode* $tmp3799;
    org$pandalanguage$pandac$ASTNode* $tmp3800;
    org$pandalanguage$pandac$ASTNode* $tmp3805;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    org$pandalanguage$pandac$ASTNode* $tmp3811;
    org$pandalanguage$pandac$ASTNode* $tmp3812;
    org$pandalanguage$pandac$ASTNode* $tmp3821;
    org$pandalanguage$pandac$ASTNode* $tmp3822;
    org$pandalanguage$pandac$ASTNode* $tmp3827;
    org$pandalanguage$pandac$ASTNode* $tmp3828;
    org$pandalanguage$pandac$ASTNode* $tmp3845;
    org$pandalanguage$pandac$ASTNode* $tmp3846;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3850;
    org$pandalanguage$pandac$ASTNode* $tmp3852;
    int $tmp3774;
    {
        org$pandalanguage$pandac$parser$Token $tmp3776 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start3775 = $tmp3776;
        memset(&dc3777, 0, sizeof(dc3777));
        panda$core$Bit $tmp3778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start3775.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3778.value) {
        {
            {
                $tmp3779 = dc3777;
                org$pandalanguage$pandac$ASTNode* $tmp3782 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3781 = $tmp3782;
                $tmp3780 = $tmp3781;
                dc3777 = $tmp3780;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3780));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3779));
            }
            if (((panda$core$Bit) { dc3777 == NULL }).value) {
            {
                $tmp3784 = NULL;
                $returnValue3783 = $tmp3784;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3784));
                $tmp3774 = 0;
                goto $l3772;
                $l3785:;
                return $returnValue3783;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3787 = dc3777;
                $tmp3788 = NULL;
                dc3777 = $tmp3788;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3787));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3792 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp3791 = $tmp3792;
        $tmp3790 = $tmp3791;
        a3789 = $tmp3790;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3790));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3791));
        if (((panda$core$Bit) { a3789 == NULL }).value) {
        {
            $tmp3793 = NULL;
            $returnValue3783 = $tmp3793;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3793));
            $tmp3774 = 1;
            goto $l3772;
            $l3794:;
            return $returnValue3783;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3797 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1985_93796 = $tmp3797.kind;
            panda$core$Bit $tmp3798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3798.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3801 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3777, a3789);
                $tmp3800 = $tmp3801;
                $tmp3799 = $tmp3800;
                $returnValue3783 = $tmp3799;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3799));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3800));
                $tmp3774 = 2;
                goto $l3772;
                $l3802:;
                return $returnValue3783;
            }
            }
            else {
            panda$core$Bit $tmp3804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3804.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3807 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3777, a3789);
                $tmp3806 = $tmp3807;
                $tmp3805 = $tmp3806;
                $returnValue3783 = $tmp3805;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3806));
                $tmp3774 = 3;
                goto $l3772;
                $l3808:;
                return $returnValue3783;
            }
            }
            else {
            panda$core$Bit $tmp3810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3810.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3813 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3777, a3789);
                $tmp3812 = $tmp3813;
                $tmp3811 = $tmp3812;
                $returnValue3783 = $tmp3811;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3812));
                $tmp3774 = 4;
                goto $l3772;
                $l3814:;
                return $returnValue3783;
            }
            }
            else {
            panda$core$Bit $tmp3817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp3816 = $tmp3817.value;
            if ($tmp3816) goto $l3818;
            panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3816 = $tmp3819.value;
            $l3818:;
            panda$core$Bit $tmp3820 = { $tmp3816 };
            if ($tmp3820.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3823 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3777, a3789);
                $tmp3822 = $tmp3823;
                $tmp3821 = $tmp3822;
                $returnValue3783 = $tmp3821;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3822));
                $tmp3774 = 5;
                goto $l3772;
                $l3824:;
                return $returnValue3783;
            }
            }
            else {
            panda$core$Bit $tmp3826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp3826.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3829 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3777, a3789);
                $tmp3828 = $tmp3829;
                $tmp3827 = $tmp3828;
                $returnValue3783 = $tmp3827;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3827));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3828));
                $tmp3774 = 6;
                goto $l3772;
                $l3830:;
                return $returnValue3783;
            }
            }
            else {
            panda$core$Bit $tmp3835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp3834 = $tmp3835.value;
            if ($tmp3834) goto $l3836;
            panda$core$Bit $tmp3837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp3834 = $tmp3837.value;
            $l3836:;
            panda$core$Bit $tmp3838 = { $tmp3834 };
            bool $tmp3833 = $tmp3838.value;
            if ($tmp3833) goto $l3839;
            panda$core$Bit $tmp3840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp3833 = $tmp3840.value;
            $l3839:;
            panda$core$Bit $tmp3841 = { $tmp3833 };
            bool $tmp3832 = $tmp3841.value;
            if ($tmp3832) goto $l3842;
            panda$core$Bit $tmp3843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_93796.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp3832 = $tmp3843.value;
            $l3842:;
            panda$core$Bit $tmp3844 = { $tmp3832 };
            if ($tmp3844.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3847 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3777, a3789);
                $tmp3846 = $tmp3847;
                $tmp3845 = $tmp3846;
                $returnValue3783 = $tmp3845;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3845));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3846));
                $tmp3774 = 7;
                goto $l3772;
                $l3848:;
                return $returnValue3783;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3850, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3850, &$s3851);
                $tmp3852 = NULL;
                $returnValue3783 = $tmp3852;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3852));
                $tmp3774 = 8;
                goto $l3772;
                $l3853:;
                return $returnValue3783;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp3774 = -1;
    goto $l3772;
    $l3772:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3777));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3789));
    a3789 = NULL;
    switch ($tmp3774) {
        case 1: goto $l3794;
        case 6: goto $l3830;
        case 4: goto $l3814;
        case 8: goto $l3853;
        case 2: goto $l3802;
        case 5: goto $l3824;
        case -1: goto $l3855;
        case 0: goto $l3785;
        case 7: goto $l3848;
        case 3: goto $l3808;
    }
    $l3855:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3859;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3860;
    org$pandalanguage$pandac$ASTNode* $returnValue3863;
    org$pandalanguage$pandac$ASTNode* $tmp3864;
    org$pandalanguage$pandac$parser$Token$nullable name3867;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3868;
    org$pandalanguage$pandac$ASTNode* $tmp3871;
    panda$collections$ImmutableArray* generics3874 = NULL;
    panda$collections$ImmutableArray* $tmp3877;
    panda$collections$ImmutableArray* $tmp3878;
    panda$collections$ImmutableArray* $tmp3879;
    org$pandalanguage$pandac$ASTNode* $tmp3881;
    panda$collections$ImmutableArray* $tmp3884;
    panda$collections$ImmutableArray* $tmp3885;
    panda$collections$ImmutableArray* stypes3886 = NULL;
    panda$collections$ImmutableArray* $tmp3889;
    panda$collections$ImmutableArray* $tmp3890;
    panda$collections$ImmutableArray* $tmp3891;
    org$pandalanguage$pandac$ASTNode* $tmp3893;
    panda$collections$ImmutableArray* $tmp3896;
    panda$collections$ImmutableArray* $tmp3897;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3898;
    org$pandalanguage$pandac$ASTNode* $tmp3901;
    panda$collections$Array* members3904 = NULL;
    panda$collections$Array* $tmp3905;
    panda$collections$Array* $tmp3906;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3911;
    org$pandalanguage$pandac$ASTNode* member3916 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3917;
    org$pandalanguage$pandac$ASTNode* $tmp3918;
    org$pandalanguage$pandac$ASTNode* $tmp3920;
    org$pandalanguage$pandac$ASTNode* $tmp3925;
    org$pandalanguage$pandac$ASTNode* $tmp3926;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3928;
    panda$core$String* $tmp3929;
    panda$collections$ImmutableArray* $tmp3931;
    int $tmp3858;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3860, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3862 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3860, &$s3861);
        start3859 = $tmp3862;
        if (((panda$core$Bit) { !start3859.nonnull }).value) {
        {
            $tmp3864 = NULL;
            $returnValue3863 = $tmp3864;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3864));
            $tmp3858 = 0;
            goto $l3856;
            $l3865:;
            return $returnValue3863;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3868, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3870 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3868, &$s3869);
        name3867 = $tmp3870;
        if (((panda$core$Bit) { !name3867.nonnull }).value) {
        {
            $tmp3871 = NULL;
            $returnValue3863 = $tmp3871;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3871));
            $tmp3858 = 1;
            goto $l3856;
            $l3872:;
            return $returnValue3863;
        }
        }
        memset(&generics3874, 0, sizeof(generics3874));
        org$pandalanguage$pandac$parser$Token $tmp3875 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3875.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp3876.value) {
        {
            {
                $tmp3877 = generics3874;
                panda$collections$ImmutableArray* $tmp3880 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3879 = $tmp3880;
                $tmp3878 = $tmp3879;
                generics3874 = $tmp3878;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3879));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3877));
            }
            if (((panda$core$Bit) { generics3874 == NULL }).value) {
            {
                $tmp3881 = NULL;
                $returnValue3863 = $tmp3881;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3881));
                $tmp3858 = 2;
                goto $l3856;
                $l3882:;
                return $returnValue3863;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3884 = generics3874;
                $tmp3885 = NULL;
                generics3874 = $tmp3885;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3885));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3884));
            }
        }
        }
        memset(&stypes3886, 0, sizeof(stypes3886));
        org$pandalanguage$pandac$parser$Token $tmp3887 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3887.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3888.value) {
        {
            {
                $tmp3889 = stypes3886;
                panda$collections$ImmutableArray* $tmp3892 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3891 = $tmp3892;
                $tmp3890 = $tmp3891;
                stypes3886 = $tmp3890;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3890));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3891));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3889));
            }
            if (((panda$core$Bit) { stypes3886 == NULL }).value) {
            {
                $tmp3893 = NULL;
                $returnValue3863 = $tmp3893;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3893));
                $tmp3858 = 3;
                goto $l3856;
                $l3894:;
                return $returnValue3863;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3896 = stypes3886;
                $tmp3897 = NULL;
                stypes3886 = $tmp3897;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3897));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3898, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3900 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3898, &$s3899);
        if (((panda$core$Bit) { !$tmp3900.nonnull }).value) {
        {
            $tmp3901 = NULL;
            $returnValue3863 = $tmp3901;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3901));
            $tmp3858 = 4;
            goto $l3856;
            $l3902:;
            return $returnValue3863;
        }
        }
        panda$collections$Array* $tmp3907 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3907);
        $tmp3906 = $tmp3907;
        $tmp3905 = $tmp3906;
        members3904 = $tmp3905;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3905));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3906));
        $l3908:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3911, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3912 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3911);
        bool $tmp3910 = ((panda$core$Bit) { !$tmp3912.nonnull }).value;
        if (!$tmp3910) goto $l3909;
        {
            int $tmp3915;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3919 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3918 = $tmp3919;
                $tmp3917 = $tmp3918;
                member3916 = $tmp3917;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3917));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3918));
                if (((panda$core$Bit) { member3916 == NULL }).value) {
                {
                    $tmp3920 = NULL;
                    $returnValue3863 = $tmp3920;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3920));
                    $tmp3915 = 0;
                    goto $l3913;
                    $l3921:;
                    $tmp3858 = 5;
                    goto $l3856;
                    $l3922:;
                    return $returnValue3863;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members3904, ((panda$core$Object*) member3916));
            }
            $tmp3915 = -1;
            goto $l3913;
            $l3913:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member3916));
            member3916 = NULL;
            switch ($tmp3915) {
                case -1: goto $l3924;
                case 0: goto $l3921;
            }
            $l3924:;
        }
        goto $l3908;
        $l3909:;
        org$pandalanguage$pandac$ASTNode* $tmp3927 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3928, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3930 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3867.value));
        $tmp3929 = $tmp3930;
        panda$collections$ImmutableArray* $tmp3932 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3904);
        $tmp3931 = $tmp3932;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3927, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start3859.value).position, p_doccomment, p_annotations, $tmp3928, $tmp3929, generics3874, stypes3886, $tmp3931);
        $tmp3926 = $tmp3927;
        $tmp3925 = $tmp3926;
        $returnValue3863 = $tmp3925;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3925));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3926));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3931));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3929));
        $tmp3858 = 6;
        goto $l3856;
        $l3933:;
        return $returnValue3863;
    }
    $l3856:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3874));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes3886));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3904));
    members3904 = NULL;
    switch ($tmp3858) {
        case 5: goto $l3922;
        case 2: goto $l3882;
        case 3: goto $l3894;
        case 6: goto $l3933;
        case 4: goto $l3902;
        case 0: goto $l3865;
        case 1: goto $l3872;
    }
    $l3935:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3939;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3940;
    org$pandalanguage$pandac$ASTNode* $returnValue3943;
    org$pandalanguage$pandac$ASTNode* $tmp3944;
    org$pandalanguage$pandac$parser$Token$nullable name3947;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3948;
    org$pandalanguage$pandac$ASTNode* $tmp3951;
    panda$collections$ImmutableArray* generics3954 = NULL;
    panda$collections$ImmutableArray* $tmp3957;
    panda$collections$ImmutableArray* $tmp3958;
    panda$collections$ImmutableArray* $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3961;
    panda$collections$ImmutableArray* $tmp3964;
    panda$collections$ImmutableArray* $tmp3965;
    panda$collections$ImmutableArray* $tmp3966;
    panda$collections$Array* intfs3968 = NULL;
    panda$collections$Array* $tmp3969;
    panda$collections$Array* $tmp3970;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3972;
    org$pandalanguage$pandac$ASTNode* t3977 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3978;
    org$pandalanguage$pandac$ASTNode* $tmp3979;
    org$pandalanguage$pandac$ASTNode* $tmp3981;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3988;
    org$pandalanguage$pandac$ASTNode* $tmp3990;
    org$pandalanguage$pandac$ASTNode* $tmp3991;
    org$pandalanguage$pandac$ASTNode* $tmp3992;
    org$pandalanguage$pandac$ASTNode* $tmp3994;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3999;
    org$pandalanguage$pandac$ASTNode* $tmp4002;
    panda$collections$Array* members4005 = NULL;
    panda$collections$Array* $tmp4006;
    panda$collections$Array* $tmp4007;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4012;
    org$pandalanguage$pandac$ASTNode* member4017 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4018;
    org$pandalanguage$pandac$ASTNode* $tmp4019;
    org$pandalanguage$pandac$ASTNode* $tmp4021;
    org$pandalanguage$pandac$ASTNode* $tmp4026;
    org$pandalanguage$pandac$ASTNode* $tmp4027;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4029;
    panda$core$String* $tmp4030;
    panda$collections$ImmutableArray* $tmp4032;
    panda$collections$ImmutableArray* $tmp4034;
    int $tmp3938;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3940, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3942 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3940, &$s3941);
        start3939 = $tmp3942;
        if (((panda$core$Bit) { !start3939.nonnull }).value) {
        {
            $tmp3944 = NULL;
            $returnValue3943 = $tmp3944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3944));
            $tmp3938 = 0;
            goto $l3936;
            $l3945:;
            return $returnValue3943;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3948, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3950 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3948, &$s3949);
        name3947 = $tmp3950;
        if (((panda$core$Bit) { !name3947.nonnull }).value) {
        {
            $tmp3951 = NULL;
            $returnValue3943 = $tmp3951;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3951));
            $tmp3938 = 1;
            goto $l3936;
            $l3952:;
            return $returnValue3943;
        }
        }
        memset(&generics3954, 0, sizeof(generics3954));
        org$pandalanguage$pandac$parser$Token $tmp3955 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3955.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp3956.value) {
        {
            {
                $tmp3957 = generics3954;
                panda$collections$ImmutableArray* $tmp3960 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3959 = $tmp3960;
                $tmp3958 = $tmp3959;
                generics3954 = $tmp3958;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3957));
            }
            if (((panda$core$Bit) { generics3954 == NULL }).value) {
            {
                $tmp3961 = NULL;
                $returnValue3943 = $tmp3961;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3961));
                $tmp3938 = 2;
                goto $l3936;
                $l3962:;
                return $returnValue3943;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3964 = generics3954;
                panda$collections$ImmutableArray* $tmp3967 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp3967);
                $tmp3966 = $tmp3967;
                $tmp3965 = $tmp3966;
                generics3954 = $tmp3965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3964));
            }
        }
        }
        panda$collections$Array* $tmp3971 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3971);
        $tmp3970 = $tmp3971;
        $tmp3969 = $tmp3970;
        intfs3968 = $tmp3969;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3970));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3972, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3973 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3972);
        if (((panda$core$Bit) { $tmp3973.nonnull }).value) {
        {
            int $tmp3976;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3980 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3979 = $tmp3980;
                $tmp3978 = $tmp3979;
                t3977 = $tmp3978;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3979));
                if (((panda$core$Bit) { t3977 == NULL }).value) {
                {
                    $tmp3981 = NULL;
                    $returnValue3943 = $tmp3981;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3981));
                    $tmp3976 = 0;
                    goto $l3974;
                    $l3982:;
                    $tmp3938 = 3;
                    goto $l3936;
                    $l3983:;
                    return $returnValue3943;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs3968, ((panda$core$Object*) t3977));
                $l3985:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3988, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3989 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3988);
                bool $tmp3987 = ((panda$core$Bit) { $tmp3989.nonnull }).value;
                if (!$tmp3987) goto $l3986;
                {
                    {
                        $tmp3990 = t3977;
                        org$pandalanguage$pandac$ASTNode* $tmp3993 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3992 = $tmp3993;
                        $tmp3991 = $tmp3992;
                        t3977 = $tmp3991;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3991));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3992));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3990));
                    }
                    if (((panda$core$Bit) { t3977 == NULL }).value) {
                    {
                        $tmp3994 = NULL;
                        $returnValue3943 = $tmp3994;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3994));
                        $tmp3976 = 1;
                        goto $l3974;
                        $l3995:;
                        $tmp3938 = 4;
                        goto $l3936;
                        $l3996:;
                        return $returnValue3943;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs3968, ((panda$core$Object*) t3977));
                }
                goto $l3985;
                $l3986:;
            }
            $tmp3976 = -1;
            goto $l3974;
            $l3974:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3977));
            t3977 = NULL;
            switch ($tmp3976) {
                case 0: goto $l3982;
                case 1: goto $l3995;
                case -1: goto $l3998;
            }
            $l3998:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3999, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4001 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3999, &$s4000);
        if (((panda$core$Bit) { !$tmp4001.nonnull }).value) {
        {
            $tmp4002 = NULL;
            $returnValue3943 = $tmp4002;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4002));
            $tmp3938 = 5;
            goto $l3936;
            $l4003:;
            return $returnValue3943;
        }
        }
        panda$collections$Array* $tmp4008 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4008);
        $tmp4007 = $tmp4008;
        $tmp4006 = $tmp4007;
        members4005 = $tmp4006;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4007));
        $l4009:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4012, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4013 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4012);
        bool $tmp4011 = ((panda$core$Bit) { !$tmp4013.nonnull }).value;
        if (!$tmp4011) goto $l4010;
        {
            int $tmp4016;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4020 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4019 = $tmp4020;
                $tmp4018 = $tmp4019;
                member4017 = $tmp4018;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4019));
                if (((panda$core$Bit) { member4017 == NULL }).value) {
                {
                    $tmp4021 = NULL;
                    $returnValue3943 = $tmp4021;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4021));
                    $tmp4016 = 0;
                    goto $l4014;
                    $l4022:;
                    $tmp3938 = 6;
                    goto $l3936;
                    $l4023:;
                    return $returnValue3943;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4005, ((panda$core$Object*) member4017));
            }
            $tmp4016 = -1;
            goto $l4014;
            $l4014:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4017));
            member4017 = NULL;
            switch ($tmp4016) {
                case 0: goto $l4022;
                case -1: goto $l4025;
            }
            $l4025:;
        }
        goto $l4009;
        $l4010:;
        org$pandalanguage$pandac$ASTNode* $tmp4028 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4029, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4031 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3947.value));
        $tmp4030 = $tmp4031;
        panda$collections$ImmutableArray* $tmp4033 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs3968);
        $tmp4032 = $tmp4033;
        panda$collections$ImmutableArray* $tmp4035 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4005);
        $tmp4034 = $tmp4035;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4028, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start3939.value).position, p_doccomment, p_annotations, $tmp4029, $tmp4030, generics3954, $tmp4032, $tmp4034);
        $tmp4027 = $tmp4028;
        $tmp4026 = $tmp4027;
        $returnValue3943 = $tmp4026;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4026));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4027));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4034));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4030));
        $tmp3938 = 7;
        goto $l3936;
        $l4036:;
        return $returnValue3943;
    }
    $l3936:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics3954));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs3968));
    intfs3968 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4005));
    members4005 = NULL;
    switch ($tmp3938) {
        case 6: goto $l4023;
        case 4: goto $l3996;
        case 3: goto $l3983;
        case 2: goto $l3962;
        case 5: goto $l4003;
        case 7: goto $l4036;
        case 0: goto $l3945;
        case 1: goto $l3952;
    }
    $l4038:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2109_94039;
    org$pandalanguage$pandac$ASTNode* $returnValue4042;
    org$pandalanguage$pandac$ASTNode* $tmp4043;
    org$pandalanguage$pandac$ASTNode* $tmp4044;
    org$pandalanguage$pandac$ASTNode* $tmp4048;
    org$pandalanguage$pandac$ASTNode* $tmp4049;
    org$pandalanguage$pandac$ASTNode* $tmp4077;
    org$pandalanguage$pandac$ASTNode* $tmp4078;
    org$pandalanguage$pandac$ASTNode* $tmp4081;
    org$pandalanguage$pandac$ASTNode* $tmp4082;
    {
        org$pandalanguage$pandac$parser$Token $tmp4040 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2109_94039 = $tmp4040.kind;
        panda$core$Bit $tmp4041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4041.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4045 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4044 = $tmp4045;
            $tmp4043 = $tmp4044;
            $returnValue4042 = $tmp4043;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4043));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4044));
            return $returnValue4042;
        }
        }
        else {
        panda$core$Bit $tmp4047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4047.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4050 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4049 = $tmp4050;
            $tmp4048 = $tmp4049;
            $returnValue4042 = $tmp4048;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4048));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4049));
            return $returnValue4042;
        }
        }
        else {
        panda$core$Bit $tmp4058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp4057 = $tmp4058.value;
        if ($tmp4057) goto $l4059;
        panda$core$Bit $tmp4060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp4057 = $tmp4060.value;
        $l4059:;
        panda$core$Bit $tmp4061 = { $tmp4057 };
        bool $tmp4056 = $tmp4061.value;
        if ($tmp4056) goto $l4062;
        panda$core$Bit $tmp4063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp4056 = $tmp4063.value;
        $l4062:;
        panda$core$Bit $tmp4064 = { $tmp4056 };
        bool $tmp4055 = $tmp4064.value;
        if ($tmp4055) goto $l4065;
        panda$core$Bit $tmp4066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp4055 = $tmp4066.value;
        $l4065:;
        panda$core$Bit $tmp4067 = { $tmp4055 };
        bool $tmp4054 = $tmp4067.value;
        if ($tmp4054) goto $l4068;
        panda$core$Bit $tmp4069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp4054 = $tmp4069.value;
        $l4068:;
        panda$core$Bit $tmp4070 = { $tmp4054 };
        bool $tmp4053 = $tmp4070.value;
        if ($tmp4053) goto $l4071;
        panda$core$Bit $tmp4072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp4053 = $tmp4072.value;
        $l4071:;
        panda$core$Bit $tmp4073 = { $tmp4053 };
        bool $tmp4052 = $tmp4073.value;
        if ($tmp4052) goto $l4074;
        panda$core$Bit $tmp4075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2109_94039.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp4052 = $tmp4075.value;
        $l4074:;
        panda$core$Bit $tmp4076 = { $tmp4052 };
        if ($tmp4076.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4079 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4078 = $tmp4079;
            $tmp4077 = $tmp4078;
            $returnValue4042 = $tmp4077;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4077));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4078));
            return $returnValue4042;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4083 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4082 = $tmp4083;
            $tmp4081 = $tmp4082;
            $returnValue4042 = $tmp4081;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4081));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4082));
            return $returnValue4042;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4088 = NULL;
    panda$collections$Array* $tmp4089;
    panda$collections$Array* $tmp4090;
    org$pandalanguage$pandac$ASTNode* entry4100 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4101;
    org$pandalanguage$pandac$ASTNode* $tmp4102;
    org$pandalanguage$pandac$ASTNode* $returnValue4104;
    org$pandalanguage$pandac$ASTNode* $tmp4105;
    org$pandalanguage$pandac$ASTNode* $tmp4111;
    org$pandalanguage$pandac$ASTNode* $tmp4112;
    panda$collections$ImmutableArray* $tmp4114;
    int $tmp4087;
    {
        panda$collections$Array* $tmp4091 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4091);
        $tmp4090 = $tmp4091;
        $tmp4089 = $tmp4090;
        entries4088 = $tmp4089;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4089));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4090));
        $l4092:;
        org$pandalanguage$pandac$parser$Token $tmp4095 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4096 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4095.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4094 = $tmp4096.value;
        if (!$tmp4094) goto $l4093;
        {
            int $tmp4099;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4103 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4102 = $tmp4103;
                $tmp4101 = $tmp4102;
                entry4100 = $tmp4101;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4102));
                if (((panda$core$Bit) { entry4100 == NULL }).value) {
                {
                    $tmp4105 = NULL;
                    $returnValue4104 = $tmp4105;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4105));
                    $tmp4099 = 0;
                    goto $l4097;
                    $l4106:;
                    $tmp4087 = 0;
                    goto $l4085;
                    $l4107:;
                    return $returnValue4104;
                }
                }
                panda$core$Bit $tmp4109 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4109.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4088, ((panda$core$Object*) entry4100));
            }
            $tmp4099 = -1;
            goto $l4097;
            $l4097:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4100));
            entry4100 = NULL;
            switch ($tmp4099) {
                case -1: goto $l4110;
                case 0: goto $l4106;
            }
            $l4110:;
        }
        goto $l4092;
        $l4093:;
        org$pandalanguage$pandac$ASTNode* $tmp4113 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4115 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4088);
        $tmp4114 = $tmp4115;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4113, ((panda$core$Int64) { 17 }), $tmp4114);
        $tmp4112 = $tmp4113;
        $tmp4111 = $tmp4112;
        $returnValue4104 = $tmp4111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4114));
        $tmp4087 = 1;
        goto $l4085;
        $l4116:;
        return $returnValue4104;
    }
    $l4085:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4088));
    entries4088 = NULL;
    switch ($tmp4087) {
        case 0: goto $l4107;
        case 1: goto $l4116;
    }
    $l4118:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4121;
    {
    }
    $tmp4121 = -1;
    goto $l4119;
    $l4119:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4121) {
        case -1: goto $l4122;
    }
    $l4122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

