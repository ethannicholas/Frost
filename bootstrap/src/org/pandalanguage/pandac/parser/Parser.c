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
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

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
typedef org$pandalanguage$pandac$Position (*$fn1460)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2581)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2606)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2653)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3569)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp382, ((panda$core$Int64) { 40 }), $tmp384, &$s385);
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
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp536, ((panda$core$Int64) { 40 }), $tmp538, &$s539);
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
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp559, ((panda$core$Int64) { 37 }), start399.position, format510);
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
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp587, ((panda$core$Int64) { 40 }), $tmp589, &$s590);
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
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp603, ((panda$core$Int64) { 37 }), start399.position, align508);
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
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp630, ((panda$core$Int64) { 37 }), start399.position, text613);
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
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp657, ((panda$core$Int64) { 37 }), start399.position, $tmp658);
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
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp708, ((panda$core$Int64) { 34 }), t664.position, ((panda$core$Real64) $tmp711.value));
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
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp716, ((panda$core$Int64) { 36 }), t664.position);
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
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp721, ((panda$core$Int64) { 38 }), t664.position);
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
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp726, ((panda$core$Int64) { 28 }), t664.position);
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
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start999;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1000;
    org$pandalanguage$pandac$ASTNode* $returnValue1003;
    org$pandalanguage$pandac$ASTNode* $tmp1004;
    panda$collections$Array* subtypes1007 = NULL;
    panda$collections$Array* $tmp1008;
    panda$collections$Array* $tmp1009;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1011;
    org$pandalanguage$pandac$ASTNode* t1016 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1017;
    org$pandalanguage$pandac$ASTNode* $tmp1018;
    org$pandalanguage$pandac$ASTNode* $tmp1020;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1027;
    org$pandalanguage$pandac$ASTNode* $tmp1029;
    org$pandalanguage$pandac$ASTNode* $tmp1030;
    org$pandalanguage$pandac$ASTNode* $tmp1031;
    org$pandalanguage$pandac$ASTNode* $tmp1033;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1037;
    org$pandalanguage$pandac$parser$Token yields1040;
    org$pandalanguage$pandac$parser$Token$Kind $match$499_91042;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1059;
    org$pandalanguage$pandac$ASTNode* $tmp1062;
    panda$collections$Array* returnTypes1066 = NULL;
    panda$collections$Array* $tmp1067;
    panda$collections$Array* $tmp1068;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1070;
    org$pandalanguage$pandac$ASTNode* t1075 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1076;
    org$pandalanguage$pandac$ASTNode* $tmp1077;
    org$pandalanguage$pandac$ASTNode* $tmp1079;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1087;
    org$pandalanguage$pandac$ASTNode* $tmp1089;
    org$pandalanguage$pandac$ASTNode* $tmp1090;
    org$pandalanguage$pandac$ASTNode* $tmp1091;
    org$pandalanguage$pandac$ASTNode* $tmp1093;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1098;
    org$pandalanguage$pandac$ASTNode* returnType1101 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1104;
    org$pandalanguage$pandac$ASTNode* $tmp1105;
    org$pandalanguage$pandac$ASTNode* $tmp1108;
    org$pandalanguage$pandac$ASTNode* $tmp1109;
    panda$core$Object* $tmp1110;
    org$pandalanguage$pandac$ASTNode* $tmp1112;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    org$pandalanguage$pandac$ASTNode* $tmp1114;
    panda$collections$ImmutableArray* $tmp1116;
    org$pandalanguage$pandac$ASTNode* $tmp1118;
    org$pandalanguage$pandac$ASTNode* $tmp1119;
    panda$collections$ImmutableArray* $tmp1121;
    org$pandalanguage$pandac$ASTNode* $tmp1127;
    org$pandalanguage$pandac$ASTNode* $tmp1128;
    panda$collections$ImmutableArray* $tmp1130;
    int $tmp998;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1000, ((panda$core$Int64) { 103 }));
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
        panda$collections$Array* $tmp1010 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1010);
        $tmp1009 = $tmp1010;
        $tmp1008 = $tmp1009;
        subtypes1007 = $tmp1008;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1011, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1012 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1011);
        if (((panda$core$Bit) { !$tmp1012.nonnull }).value) {
        {
            int $tmp1015;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1019 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1018 = $tmp1019;
                $tmp1017 = $tmp1018;
                t1016 = $tmp1017;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1017));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1018));
                if (((panda$core$Bit) { t1016 == NULL }).value) {
                {
                    $tmp1020 = NULL;
                    $returnValue1003 = $tmp1020;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1020));
                    $tmp1015 = 0;
                    goto $l1013;
                    $l1021:;
                    $tmp998 = 1;
                    goto $l996;
                    $l1022:;
                    return $returnValue1003;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1007, ((panda$core$Object*) t1016));
                $l1024:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1027, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1028 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1027);
                bool $tmp1026 = ((panda$core$Bit) { $tmp1028.nonnull }).value;
                if (!$tmp1026) goto $l1025;
                {
                    {
                        $tmp1029 = t1016;
                        org$pandalanguage$pandac$ASTNode* $tmp1032 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1031 = $tmp1032;
                        $tmp1030 = $tmp1031;
                        t1016 = $tmp1030;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1030));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1031));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1029));
                    }
                    if (((panda$core$Bit) { t1016 == NULL }).value) {
                    {
                        $tmp1033 = NULL;
                        $returnValue1003 = $tmp1033;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                        $tmp1015 = 1;
                        goto $l1013;
                        $l1034:;
                        $tmp998 = 2;
                        goto $l996;
                        $l1035:;
                        return $returnValue1003;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1007, ((panda$core$Object*) t1016));
                }
                goto $l1024;
                $l1025:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1037, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1037, &$s1038);
            }
            $tmp1015 = -1;
            goto $l1013;
            $l1013:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1016));
            t1016 = NULL;
            switch ($tmp1015) {
                case -1: goto $l1039;
                case 1: goto $l1034;
                case 0: goto $l1021;
            }
            $l1039:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1041 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1040 = $tmp1041;
        {
            $match$499_91042 = yields1040.kind;
            panda$core$Bit $tmp1046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$499_91042.$rawValue, ((panda$core$Int64) { 90 }));
            bool $tmp1045 = $tmp1046.value;
            if ($tmp1045) goto $l1047;
            panda$core$Bit $tmp1048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$499_91042.$rawValue, ((panda$core$Int64) { 91 }));
            $tmp1045 = $tmp1048.value;
            $l1047:;
            panda$core$Bit $tmp1049 = { $tmp1045 };
            bool $tmp1044 = $tmp1049.value;
            if ($tmp1044) goto $l1050;
            panda$core$Bit $tmp1051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$499_91042.$rawValue, ((panda$core$Int64) { 92 }));
            $tmp1044 = $tmp1051.value;
            $l1050:;
            panda$core$Bit $tmp1052 = { $tmp1044 };
            bool $tmp1043 = $tmp1052.value;
            if ($tmp1043) goto $l1053;
            panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$499_91042.$rawValue, ((panda$core$Int64) { 93 }));
            $tmp1043 = $tmp1054.value;
            $l1053:;
            panda$core$Bit $tmp1055 = { $tmp1043 };
            if ($tmp1055.value) {
            {
                int $tmp1058;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1059, ((panda$core$Int64) { 103 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1061 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1059, &$s1060);
                    if (((panda$core$Bit) { !$tmp1061.nonnull }).value) {
                    {
                        $tmp1062 = NULL;
                        $returnValue1003 = $tmp1062;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
                        $tmp1058 = 0;
                        goto $l1056;
                        $l1063:;
                        $tmp998 = 3;
                        goto $l996;
                        $l1064:;
                        return $returnValue1003;
                    }
                    }
                    panda$collections$Array* $tmp1069 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1069);
                    $tmp1068 = $tmp1069;
                    $tmp1067 = $tmp1068;
                    returnTypes1066 = $tmp1067;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1067));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1070, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1071 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1070);
                    if (((panda$core$Bit) { !$tmp1071.nonnull }).value) {
                    {
                        int $tmp1074;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1078 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1077 = $tmp1078;
                            $tmp1076 = $tmp1077;
                            t1075 = $tmp1076;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1076));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1077));
                            if (((panda$core$Bit) { t1075 == NULL }).value) {
                            {
                                $tmp1079 = NULL;
                                $returnValue1003 = $tmp1079;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1079));
                                $tmp1074 = 0;
                                goto $l1072;
                                $l1080:;
                                $tmp1058 = 1;
                                goto $l1056;
                                $l1081:;
                                $tmp998 = 4;
                                goto $l996;
                                $l1082:;
                                return $returnValue1003;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1066, ((panda$core$Object*) t1075));
                            $l1084:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1087, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1088 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1087);
                            bool $tmp1086 = ((panda$core$Bit) { $tmp1088.nonnull }).value;
                            if (!$tmp1086) goto $l1085;
                            {
                                {
                                    $tmp1089 = t1075;
                                    org$pandalanguage$pandac$ASTNode* $tmp1092 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1091 = $tmp1092;
                                    $tmp1090 = $tmp1091;
                                    t1075 = $tmp1090;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
                                }
                                if (((panda$core$Bit) { t1075 == NULL }).value) {
                                {
                                    $tmp1093 = NULL;
                                    $returnValue1003 = $tmp1093;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1093));
                                    $tmp1074 = 1;
                                    goto $l1072;
                                    $l1094:;
                                    $tmp1058 = 2;
                                    goto $l1056;
                                    $l1095:;
                                    $tmp998 = 5;
                                    goto $l996;
                                    $l1096:;
                                    return $returnValue1003;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1066, ((panda$core$Object*) t1075));
                            }
                            goto $l1084;
                            $l1085:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1098, ((panda$core$Int64) { 104 }));
                            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1098, &$s1099);
                        }
                        $tmp1074 = -1;
                        goto $l1072;
                        $l1072:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1075));
                        t1075 = NULL;
                        switch ($tmp1074) {
                            case -1: goto $l1100;
                            case 1: goto $l1094;
                            case 0: goto $l1080;
                        }
                        $l1100:;
                    }
                    }
                    memset(&returnType1101, 0, sizeof(returnType1101));
                    panda$core$Int64 $tmp1102 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1066);
                    panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1102, ((panda$core$Int64) { 0 }));
                    if ($tmp1103.value) {
                    {
                        {
                            $tmp1104 = returnType1101;
                            $tmp1105 = NULL;
                            returnType1101 = $tmp1105;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1104));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1106 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1066);
                    panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1106, ((panda$core$Int64) { 1 }));
                    if ($tmp1107.value) {
                    {
                        {
                            $tmp1108 = returnType1101;
                            panda$core$Object* $tmp1111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1066, ((panda$core$Int64) { 0 }));
                            $tmp1110 = $tmp1111;
                            $tmp1109 = ((org$pandalanguage$pandac$ASTNode*) $tmp1110);
                            returnType1101 = $tmp1109;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1109));
                            panda$core$Panda$unref$panda$core$Object($tmp1110);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1108));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1112 = returnType1101;
                            org$pandalanguage$pandac$ASTNode* $tmp1115 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1117 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(returnTypes1066);
                            $tmp1116 = $tmp1117;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1115, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, $tmp1116);
                            $tmp1114 = $tmp1115;
                            $tmp1113 = $tmp1114;
                            returnType1101 = $tmp1113;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1113));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
                        }
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1120 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1122 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1007);
                    $tmp1121 = $tmp1122;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1120, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, yields1040.kind, $tmp1121, returnType1101);
                    $tmp1119 = $tmp1120;
                    $tmp1118 = $tmp1119;
                    $returnValue1003 = $tmp1118;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1118));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1119));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
                    $tmp1058 = 3;
                    goto $l1056;
                    $l1123:;
                    $tmp998 = 6;
                    goto $l996;
                    $l1124:;
                    return $returnValue1003;
                }
                $l1056:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1066));
                returnTypes1066 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1101));
                switch ($tmp1058) {
                    case 2: goto $l1095;
                    case 1: goto $l1081;
                    case 0: goto $l1063;
                    case 3: goto $l1123;
                }
                $l1126:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1129 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp1131 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1007);
                $tmp1130 = $tmp1131;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1129, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start999.value).position, $tmp1130);
                $tmp1128 = $tmp1129;
                $tmp1127 = $tmp1128;
                $returnValue1003 = $tmp1127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1130));
                $tmp998 = 7;
                goto $l996;
                $l1132:;
                return $returnValue1003;
            }
            }
        }
    }
    $tmp998 = -1;
    goto $l996;
    $l996:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1007));
    subtypes1007 = NULL;
    switch ($tmp998) {
        case 3: goto $l1064;
        case 1: goto $l1022;
        case 6: goto $l1124;
        case 7: goto $l1132;
        case 4: goto $l1082;
        case -1: goto $l1134;
        case 0: goto $l1005;
        case 5: goto $l1096;
        case 2: goto $l1035;
    }
    $l1134:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* $returnValue1140;
    org$pandalanguage$pandac$ASTNode* $tmp1141;
    org$pandalanguage$pandac$ASTNode* $tmp1142;
    org$pandalanguage$pandac$parser$Token$nullable start1146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1147;
    org$pandalanguage$pandac$ASTNode* $tmp1150;
    panda$core$MutableString* name1153 = NULL;
    panda$core$MutableString* $tmp1154;
    panda$core$MutableString* $tmp1155;
    panda$core$String* $tmp1157;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1162;
    org$pandalanguage$pandac$parser$Token$nullable id1164;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1165;
    org$pandalanguage$pandac$ASTNode* $tmp1168;
    panda$core$Char8 $tmp1171;
    panda$core$String* $tmp1172;
    panda$core$String* finalName1174 = NULL;
    panda$core$String* $tmp1175;
    panda$core$String* $tmp1176;
    org$pandalanguage$pandac$ASTNode* result1178 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1179;
    org$pandalanguage$pandac$ASTNode* $tmp1180;
    panda$collections$Array* children1187 = NULL;
    panda$collections$Array* $tmp1188;
    panda$collections$Array* $tmp1189;
    org$pandalanguage$pandac$ASTNode* t1191 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1192;
    org$pandalanguage$pandac$ASTNode* $tmp1193;
    org$pandalanguage$pandac$ASTNode* $tmp1195;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1206;
    org$pandalanguage$pandac$ASTNode* $tmp1208;
    org$pandalanguage$pandac$ASTNode* $tmp1209;
    org$pandalanguage$pandac$ASTNode* $tmp1210;
    org$pandalanguage$pandac$ASTNode* $tmp1212;
    org$pandalanguage$pandac$ASTNode* $tmp1216;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1220;
    org$pandalanguage$pandac$ASTNode* $tmp1223;
    org$pandalanguage$pandac$ASTNode* $tmp1227;
    org$pandalanguage$pandac$ASTNode* $tmp1231;
    org$pandalanguage$pandac$ASTNode* $tmp1232;
    org$pandalanguage$pandac$ASTNode* $tmp1233;
    panda$collections$ImmutableArray* $tmp1235;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1238;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    org$pandalanguage$pandac$ASTNode* $tmp1241;
    org$pandalanguage$pandac$ASTNode* $tmp1242;
    org$pandalanguage$pandac$ASTNode* $tmp1244;
    int $tmp1137;
    {
        org$pandalanguage$pandac$parser$Token $tmp1138 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1138.kind.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1139.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1143 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1142 = $tmp1143;
            $tmp1141 = $tmp1142;
            $returnValue1140 = $tmp1141;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1141));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1142));
            $tmp1137 = 0;
            goto $l1135;
            $l1144:;
            return $returnValue1140;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1147, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1149 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1147, &$s1148);
        start1146 = $tmp1149;
        if (((panda$core$Bit) { !start1146.nonnull }).value) {
        {
            $tmp1150 = NULL;
            $returnValue1140 = $tmp1150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1150));
            $tmp1137 = 1;
            goto $l1135;
            $l1151:;
            return $returnValue1140;
        }
        }
        panda$core$MutableString* $tmp1156 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1158 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1146.value));
        $tmp1157 = $tmp1158;
        panda$core$MutableString$init$panda$core$String($tmp1156, $tmp1157);
        $tmp1155 = $tmp1156;
        $tmp1154 = $tmp1155;
        name1153 = $tmp1154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
        $l1159:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1162, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1163 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1162);
        bool $tmp1161 = ((panda$core$Bit) { $tmp1163.nonnull }).value;
        if (!$tmp1161) goto $l1160;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1165, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1167 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1165, &$s1166);
            id1164 = $tmp1167;
            if (((panda$core$Bit) { !id1164.nonnull }).value) {
            {
                $tmp1168 = NULL;
                $returnValue1140 = $tmp1168;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1168));
                $tmp1137 = 2;
                goto $l1135;
                $l1169:;
                return $returnValue1140;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1171, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1153, $tmp1171);
            panda$core$String* $tmp1173 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1164.value));
            $tmp1172 = $tmp1173;
            panda$core$MutableString$append$panda$core$String(name1153, $tmp1172);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
        }
        goto $l1159;
        $l1160:;
        panda$core$String* $tmp1177 = panda$core$MutableString$finish$R$panda$core$String(name1153);
        $tmp1176 = $tmp1177;
        $tmp1175 = $tmp1176;
        finalName1174 = $tmp1175;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
        org$pandalanguage$pandac$ASTNode* $tmp1181 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1181, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1146.value).position, finalName1174);
        $tmp1180 = $tmp1181;
        $tmp1179 = $tmp1180;
        result1178 = $tmp1179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
        org$pandalanguage$pandac$parser$Token $tmp1182 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1182.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1183.value) {
        {
            int $tmp1186;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1190 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1190);
                $tmp1189 = $tmp1190;
                $tmp1188 = $tmp1189;
                children1187 = $tmp1188;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1188));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1189));
                org$pandalanguage$pandac$ASTNode* $tmp1194 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1193 = $tmp1194;
                $tmp1192 = $tmp1193;
                t1191 = $tmp1192;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1193));
                if (((panda$core$Bit) { t1191 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1195 = result1178;
                        $returnValue1140 = $tmp1195;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
                        $tmp1186 = 0;
                        goto $l1184;
                        $l1196:;
                        $tmp1137 = 3;
                        goto $l1135;
                        $l1197:;
                        return $returnValue1140;
                    }
                    }
                    $tmp1199 = NULL;
                    $returnValue1140 = $tmp1199;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                    $tmp1186 = 1;
                    goto $l1184;
                    $l1200:;
                    $tmp1137 = 4;
                    goto $l1135;
                    $l1201:;
                    return $returnValue1140;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1187, ((panda$core$Object*) t1191));
                $l1203:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1206, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1207 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1206);
                bool $tmp1205 = ((panda$core$Bit) { $tmp1207.nonnull }).value;
                if (!$tmp1205) goto $l1204;
                {
                    {
                        $tmp1208 = t1191;
                        org$pandalanguage$pandac$ASTNode* $tmp1211 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1210 = $tmp1211;
                        $tmp1209 = $tmp1210;
                        t1191 = $tmp1209;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
                    }
                    if (((panda$core$Bit) { t1191 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1212 = result1178;
                            $returnValue1140 = $tmp1212;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1212));
                            $tmp1186 = 2;
                            goto $l1184;
                            $l1213:;
                            $tmp1137 = 5;
                            goto $l1135;
                            $l1214:;
                            return $returnValue1140;
                        }
                        }
                        $tmp1216 = NULL;
                        $returnValue1140 = $tmp1216;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
                        $tmp1186 = 3;
                        goto $l1184;
                        $l1217:;
                        $tmp1137 = 6;
                        goto $l1135;
                        $l1218:;
                        return $returnValue1140;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1187, ((panda$core$Object*) t1191));
                }
                goto $l1203;
                $l1204:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1220, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1222 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1220, &$s1221);
                if (((panda$core$Bit) { !$tmp1222.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1223 = result1178;
                        $returnValue1140 = $tmp1223;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1223));
                        $tmp1186 = 4;
                        goto $l1184;
                        $l1224:;
                        $tmp1137 = 7;
                        goto $l1135;
                        $l1225:;
                        return $returnValue1140;
                    }
                    }
                    $tmp1227 = NULL;
                    $returnValue1140 = $tmp1227;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1227));
                    $tmp1186 = 5;
                    goto $l1184;
                    $l1228:;
                    $tmp1137 = 8;
                    goto $l1135;
                    $l1229:;
                    return $returnValue1140;
                }
                }
                {
                    $tmp1231 = result1178;
                    org$pandalanguage$pandac$ASTNode* $tmp1234 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1236 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1187);
                    $tmp1235 = $tmp1236;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1234, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1146.value).position, finalName1174, $tmp1235);
                    $tmp1233 = $tmp1234;
                    $tmp1232 = $tmp1233;
                    result1178 = $tmp1232;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1232));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1233));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1186 = -1;
            goto $l1184;
            $l1184:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1187));
            children1187 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1191));
            t1191 = NULL;
            switch ($tmp1186) {
                case 5: goto $l1228;
                case 2: goto $l1213;
                case -1: goto $l1237;
                case 0: goto $l1196;
                case 3: goto $l1217;
                case 1: goto $l1200;
                case 4: goto $l1224;
            }
            $l1237:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1238, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1239 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1238);
        if (((panda$core$Bit) { $tmp1239.nonnull }).value) {
        {
            {
                $tmp1240 = result1178;
                org$pandalanguage$pandac$ASTNode* $tmp1243 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1243, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$parser$Token) start1146.value).position, result1178);
                $tmp1242 = $tmp1243;
                $tmp1241 = $tmp1242;
                result1178 = $tmp1241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
            }
        }
        }
        $tmp1244 = result1178;
        $returnValue1140 = $tmp1244;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
        $tmp1137 = 9;
        goto $l1135;
        $l1245:;
        return $returnValue1140;
    }
    $l1135:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1153));
    name1153 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1174));
    finalName1174 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1178));
    result1178 = NULL;
    switch ($tmp1137) {
        case 2: goto $l1169;
        case 9: goto $l1245;
        case 7: goto $l1225;
        case 8: goto $l1229;
        case 5: goto $l1214;
        case 4: goto $l1201;
        case 0: goto $l1144;
        case 1: goto $l1151;
        case 6: goto $l1218;
        case 3: goto $l1197;
    }
    $l1247:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1251 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1252;
    org$pandalanguage$pandac$ASTNode* $tmp1253;
    org$pandalanguage$pandac$ASTNode* $returnValue1255;
    org$pandalanguage$pandac$ASTNode* $tmp1256;
    org$pandalanguage$pandac$parser$Token token1261;
    org$pandalanguage$pandac$parser$Token$Kind $match$622_131263;
    panda$core$Object* $tmp1268;
    panda$collections$Array* args1270 = NULL;
    panda$collections$Array* $tmp1271;
    panda$collections$Array* $tmp1272;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1274;
    org$pandalanguage$pandac$ASTNode* expr1279 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1280;
    org$pandalanguage$pandac$ASTNode* $tmp1281;
    panda$core$Object* $tmp1283;
    org$pandalanguage$pandac$ASTNode* $tmp1285;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1293;
    org$pandalanguage$pandac$ASTNode* $tmp1295;
    org$pandalanguage$pandac$ASTNode* $tmp1296;
    org$pandalanguage$pandac$ASTNode* $tmp1297;
    panda$core$Object* $tmp1299;
    org$pandalanguage$pandac$ASTNode* $tmp1301;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1306;
    panda$core$Object* $tmp1309;
    org$pandalanguage$pandac$ASTNode* $tmp1311;
    panda$core$Object* $tmp1317;
    org$pandalanguage$pandac$ASTNode* $tmp1319;
    org$pandalanguage$pandac$ASTNode* $tmp1320;
    org$pandalanguage$pandac$ASTNode* $tmp1321;
    panda$collections$ImmutableArray* $tmp1323;
    org$pandalanguage$pandac$ASTNode* arg1330 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1331;
    org$pandalanguage$pandac$ASTNode* $tmp1332;
    org$pandalanguage$pandac$ASTNode* $tmp1334;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1338;
    org$pandalanguage$pandac$ASTNode* $tmp1341;
    org$pandalanguage$pandac$ASTNode* $tmp1345;
    org$pandalanguage$pandac$ASTNode* $tmp1346;
    org$pandalanguage$pandac$ASTNode* $tmp1347;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1349;
    panda$core$String* name1355 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1356;
    panda$core$String* $tmp1358;
    panda$core$String* $tmp1359;
    panda$core$String* $tmp1361;
    panda$core$String* $tmp1362;
    panda$core$String* $tmp1363;
    org$pandalanguage$pandac$ASTNode* $tmp1365;
    org$pandalanguage$pandac$ASTNode* $tmp1369;
    org$pandalanguage$pandac$ASTNode* $tmp1370;
    org$pandalanguage$pandac$ASTNode* $tmp1371;
    org$pandalanguage$pandac$ASTNode* target1378 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1379;
    org$pandalanguage$pandac$ASTNode* $tmp1380;
    org$pandalanguage$pandac$ASTNode* $tmp1382;
    org$pandalanguage$pandac$ASTNode* $tmp1386;
    org$pandalanguage$pandac$ASTNode* $tmp1387;
    org$pandalanguage$pandac$ASTNode* $tmp1388;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1390;
    panda$core$String* name1396 = NULL;
    panda$core$String* $tmp1397;
    panda$core$String* $tmp1398;
    panda$collections$Array* types1403 = NULL;
    panda$collections$Array* $tmp1404;
    panda$collections$Array* $tmp1405;
    org$pandalanguage$pandac$ASTNode* t1407 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1408;
    org$pandalanguage$pandac$ASTNode* $tmp1409;
    org$pandalanguage$pandac$ASTNode* $tmp1411;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1419;
    org$pandalanguage$pandac$ASTNode* $tmp1421;
    org$pandalanguage$pandac$ASTNode* $tmp1422;
    org$pandalanguage$pandac$ASTNode* $tmp1423;
    org$pandalanguage$pandac$ASTNode* $tmp1425;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1430;
    org$pandalanguage$pandac$ASTNode* $tmp1433;
    panda$core$Bit shouldAccept1438;
    panda$core$Object* $tmp1439;
    org$pandalanguage$pandac$parser$Token$Kind $match$727_291441;
    org$pandalanguage$pandac$ASTNode* $tmp1456;
    org$pandalanguage$pandac$ASTNode* $tmp1457;
    org$pandalanguage$pandac$ASTNode* $tmp1458;
    panda$collections$ImmutableArray* $tmp1462;
    org$pandalanguage$pandac$ASTNode* $tmp1466;
    org$pandalanguage$pandac$ASTNode* $tmp1472;
    org$pandalanguage$pandac$ASTNode* $tmp1477;
    int $tmp1250;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1254 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1253 = $tmp1254;
        $tmp1252 = $tmp1253;
        result1251 = $tmp1252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1253));
        if (((panda$core$Bit) { result1251 == NULL }).value) {
        {
            $tmp1256 = NULL;
            $returnValue1255 = $tmp1256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1256));
            $tmp1250 = 0;
            goto $l1248;
            $l1257:;
            return $returnValue1255;
        }
        }
        $l1259:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1262 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1261 = $tmp1262;
            {
                $match$622_131263 = token1261.kind;
                panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$622_131263.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1264.value) {
                {
                    int $tmp1267;
                    {
                        panda$core$Bit$wrapper* $tmp1269;
                        $tmp1269 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1269->value = ((panda$core$Bit) { true });
                        $tmp1268 = ((panda$core$Object*) $tmp1269);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1268);
                        panda$core$Panda$unref$panda$core$Object($tmp1268);
                        panda$collections$Array* $tmp1273 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1273);
                        $tmp1272 = $tmp1273;
                        $tmp1271 = $tmp1272;
                        args1270 = $tmp1271;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1271));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1272));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1274, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1275 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1274);
                        if (((panda$core$Bit) { !$tmp1275.nonnull }).value) {
                        {
                            int $tmp1278;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1282 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1281 = $tmp1282;
                                $tmp1280 = $tmp1281;
                                expr1279 = $tmp1280;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
                                if (((panda$core$Bit) { expr1279 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1284 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1283 = $tmp1284;
                                    panda$core$Panda$unref$panda$core$Object($tmp1283);
                                    $tmp1285 = NULL;
                                    $returnValue1255 = $tmp1285;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1285));
                                    $tmp1278 = 0;
                                    goto $l1276;
                                    $l1286:;
                                    $tmp1267 = 0;
                                    goto $l1265;
                                    $l1287:;
                                    $tmp1250 = 1;
                                    goto $l1248;
                                    $l1288:;
                                    return $returnValue1255;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1270, ((panda$core$Object*) expr1279));
                                $l1290:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1293, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1294 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1293);
                                bool $tmp1292 = ((panda$core$Bit) { $tmp1294.nonnull }).value;
                                if (!$tmp1292) goto $l1291;
                                {
                                    {
                                        $tmp1295 = expr1279;
                                        org$pandalanguage$pandac$ASTNode* $tmp1298 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1297 = $tmp1298;
                                        $tmp1296 = $tmp1297;
                                        expr1279 = $tmp1296;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
                                    }
                                    if (((panda$core$Bit) { expr1279 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1300 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1299 = $tmp1300;
                                        panda$core$Panda$unref$panda$core$Object($tmp1299);
                                        $tmp1301 = NULL;
                                        $returnValue1255 = $tmp1301;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1301));
                                        $tmp1278 = 1;
                                        goto $l1276;
                                        $l1302:;
                                        $tmp1267 = 1;
                                        goto $l1265;
                                        $l1303:;
                                        $tmp1250 = 2;
                                        goto $l1248;
                                        $l1304:;
                                        return $returnValue1255;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1270, ((panda$core$Object*) expr1279));
                                }
                                goto $l1290;
                                $l1291:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1306, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1308 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1306, &$s1307);
                                if (((panda$core$Bit) { !$tmp1308.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1310 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1309 = $tmp1310;
                                    panda$core$Panda$unref$panda$core$Object($tmp1309);
                                    $tmp1311 = NULL;
                                    $returnValue1255 = $tmp1311;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                                    $tmp1278 = 2;
                                    goto $l1276;
                                    $l1312:;
                                    $tmp1267 = 2;
                                    goto $l1265;
                                    $l1313:;
                                    $tmp1250 = 3;
                                    goto $l1248;
                                    $l1314:;
                                    return $returnValue1255;
                                }
                                }
                            }
                            $tmp1278 = -1;
                            goto $l1276;
                            $l1276:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1279));
                            expr1279 = NULL;
                            switch ($tmp1278) {
                                case -1: goto $l1316;
                                case 0: goto $l1286;
                                case 1: goto $l1302;
                                case 2: goto $l1312;
                            }
                            $l1316:;
                        }
                        }
                        panda$core$Object* $tmp1318 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1317 = $tmp1318;
                        panda$core$Panda$unref$panda$core$Object($tmp1317);
                        {
                            $tmp1319 = result1251;
                            org$pandalanguage$pandac$ASTNode* $tmp1322 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1324 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1270);
                            $tmp1323 = $tmp1324;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1322, ((panda$core$Int64) { 8 }), token1261.position, result1251, $tmp1323);
                            $tmp1321 = $tmp1322;
                            $tmp1320 = $tmp1321;
                            result1251 = $tmp1320;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1320));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
                        }
                    }
                    $tmp1267 = -1;
                    goto $l1265;
                    $l1265:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1270));
                    args1270 = NULL;
                    switch ($tmp1267) {
                        case 2: goto $l1313;
                        case -1: goto $l1325;
                        case 1: goto $l1303;
                        case 0: goto $l1287;
                    }
                    $l1325:;
                }
                }
                else {
                panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$622_131263.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1326.value) {
                {
                    int $tmp1329;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1333 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1332 = $tmp1333;
                        $tmp1331 = $tmp1332;
                        arg1330 = $tmp1331;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1331));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1332));
                        if (((panda$core$Bit) { arg1330 == NULL }).value) {
                        {
                            $tmp1334 = NULL;
                            $returnValue1255 = $tmp1334;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1334));
                            $tmp1329 = 0;
                            goto $l1327;
                            $l1335:;
                            $tmp1250 = 4;
                            goto $l1248;
                            $l1336:;
                            return $returnValue1255;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1338, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1340 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1338, &$s1339);
                        if (((panda$core$Bit) { !$tmp1340.nonnull }).value) {
                        {
                            $tmp1341 = NULL;
                            $returnValue1255 = $tmp1341;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1341));
                            $tmp1329 = 1;
                            goto $l1327;
                            $l1342:;
                            $tmp1250 = 5;
                            goto $l1248;
                            $l1343:;
                            return $returnValue1255;
                        }
                        }
                        {
                            $tmp1345 = result1251;
                            org$pandalanguage$pandac$ASTNode* $tmp1348 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1349, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1348, ((panda$core$Int64) { 4 }), token1261.position, result1251, $tmp1349, arg1330);
                            $tmp1347 = $tmp1348;
                            $tmp1346 = $tmp1347;
                            result1251 = $tmp1346;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1346));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                        }
                    }
                    $tmp1329 = -1;
                    goto $l1327;
                    $l1327:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1330));
                    arg1330 = NULL;
                    switch ($tmp1329) {
                        case 0: goto $l1335;
                        case -1: goto $l1350;
                        case 1: goto $l1342;
                    }
                    $l1350:;
                }
                }
                else {
                panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$622_131263.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1351.value) {
                {
                    int $tmp1354;
                    {
                        memset(&name1355, 0, sizeof(name1355));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1356, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1357 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1356);
                        if (((panda$core$Bit) { $tmp1357.nonnull }).value) {
                        {
                            {
                                $tmp1358 = name1355;
                                $tmp1359 = &$s1360;
                                name1355 = $tmp1359;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1361 = name1355;
                                panda$core$String* $tmp1364 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1363 = $tmp1364;
                                $tmp1362 = $tmp1363;
                                name1355 = $tmp1362;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1362));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1363));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
                            }
                            if (((panda$core$Bit) { name1355 == NULL }).value) {
                            {
                                $tmp1365 = NULL;
                                $returnValue1255 = $tmp1365;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1365));
                                $tmp1354 = 0;
                                goto $l1352;
                                $l1366:;
                                $tmp1250 = 6;
                                goto $l1248;
                                $l1367:;
                                return $returnValue1255;
                            }
                            }
                        }
                        }
                        {
                            $tmp1369 = result1251;
                            org$pandalanguage$pandac$ASTNode* $tmp1372 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1372, ((panda$core$Int64) { 15 }), token1261.position, result1251, name1355);
                            $tmp1371 = $tmp1372;
                            $tmp1370 = $tmp1371;
                            result1251 = $tmp1370;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
                        }
                    }
                    $tmp1354 = -1;
                    goto $l1352;
                    $l1352:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1355));
                    switch ($tmp1354) {
                        case 0: goto $l1366;
                        case -1: goto $l1373;
                    }
                    $l1373:;
                }
                }
                else {
                panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$622_131263.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1374.value) {
                {
                    int $tmp1377;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1381 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1380 = $tmp1381;
                        $tmp1379 = $tmp1380;
                        target1378 = $tmp1379;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                        if (((panda$core$Bit) { target1378 == NULL }).value) {
                        {
                            $tmp1382 = NULL;
                            $returnValue1255 = $tmp1382;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1382));
                            $tmp1377 = 0;
                            goto $l1375;
                            $l1383:;
                            $tmp1250 = 7;
                            goto $l1248;
                            $l1384:;
                            return $returnValue1255;
                        }
                        }
                        {
                            $tmp1386 = result1251;
                            org$pandalanguage$pandac$ASTNode* $tmp1389 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1390, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1389, ((panda$core$Int64) { 4 }), token1261.position, result1251, $tmp1390, target1378);
                            $tmp1388 = $tmp1389;
                            $tmp1387 = $tmp1388;
                            result1251 = $tmp1387;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1387));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1386));
                        }
                    }
                    $tmp1377 = -1;
                    goto $l1375;
                    $l1375:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1378));
                    target1378 = NULL;
                    switch ($tmp1377) {
                        case -1: goto $l1391;
                        case 0: goto $l1383;
                    }
                    $l1391:;
                }
                }
                else {
                panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$622_131263.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1392.value) {
                {
                    int $tmp1395;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1261);
                        panda$core$String* $tmp1399 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1251);
                        $tmp1398 = $tmp1399;
                        $tmp1397 = $tmp1398;
                        name1396 = $tmp1397;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1397));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
                        if (((panda$core$Bit) { name1396 != NULL }).value) {
                        {
                            int $tmp1402;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1406 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1406);
                                $tmp1405 = $tmp1406;
                                $tmp1404 = $tmp1405;
                                types1403 = $tmp1404;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1404));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1405));
                                org$pandalanguage$pandac$ASTNode* $tmp1410 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1409 = $tmp1410;
                                $tmp1408 = $tmp1409;
                                t1407 = $tmp1408;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1409));
                                if (((panda$core$Bit) { t1407 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1411 = result1251;
                                    $returnValue1255 = $tmp1411;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1411));
                                    $tmp1402 = 0;
                                    goto $l1400;
                                    $l1412:;
                                    $tmp1395 = 0;
                                    goto $l1393;
                                    $l1413:;
                                    $tmp1250 = 8;
                                    goto $l1248;
                                    $l1414:;
                                    return $returnValue1255;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1403, ((panda$core$Object*) t1407));
                                $l1416:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1419, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1420 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1419);
                                bool $tmp1418 = ((panda$core$Bit) { $tmp1420.nonnull }).value;
                                if (!$tmp1418) goto $l1417;
                                {
                                    {
                                        $tmp1421 = t1407;
                                        org$pandalanguage$pandac$ASTNode* $tmp1424 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1423 = $tmp1424;
                                        $tmp1422 = $tmp1423;
                                        t1407 = $tmp1422;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1423));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
                                    }
                                    if (((panda$core$Bit) { t1407 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1425 = result1251;
                                        $returnValue1255 = $tmp1425;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1425));
                                        $tmp1402 = 1;
                                        goto $l1400;
                                        $l1426:;
                                        $tmp1395 = 1;
                                        goto $l1393;
                                        $l1427:;
                                        $tmp1250 = 9;
                                        goto $l1248;
                                        $l1428:;
                                        return $returnValue1255;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1403, ((panda$core$Object*) t1407));
                                }
                                goto $l1416;
                                $l1417:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1430, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1432 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1430, &$s1431);
                                if (((panda$core$Bit) { !$tmp1432.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1433 = result1251;
                                    $returnValue1255 = $tmp1433;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1433));
                                    $tmp1402 = 2;
                                    goto $l1400;
                                    $l1434:;
                                    $tmp1395 = 2;
                                    goto $l1393;
                                    $l1435:;
                                    $tmp1250 = 10;
                                    goto $l1248;
                                    $l1436:;
                                    return $returnValue1255;
                                }
                                }
                                memset(&shouldAccept1438, 0, sizeof(shouldAccept1438));
                                panda$core$Object* $tmp1440 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1439 = $tmp1440;
                                panda$core$Panda$unref$panda$core$Object($tmp1439);
                                if (((panda$core$Bit$wrapper*) $tmp1439)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1442 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$727_291441 = $tmp1442.kind;
                                        panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727_291441.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1445 = $tmp1446.value;
                                        if ($tmp1445) goto $l1447;
                                        panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727_291441.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1445 = $tmp1448.value;
                                        $l1447:;
                                        panda$core$Bit $tmp1449 = { $tmp1445 };
                                        bool $tmp1444 = $tmp1449.value;
                                        if ($tmp1444) goto $l1450;
                                        panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727_291441.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1444 = $tmp1451.value;
                                        $l1450:;
                                        panda$core$Bit $tmp1452 = { $tmp1444 };
                                        bool $tmp1443 = $tmp1452.value;
                                        if ($tmp1443) goto $l1453;
                                        panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727_291441.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1443 = $tmp1454.value;
                                        $l1453:;
                                        panda$core$Bit $tmp1455 = { $tmp1443 };
                                        if ($tmp1455.value) {
                                        {
                                            shouldAccept1438 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1438 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1438 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1438.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1456 = result1251;
                                        org$pandalanguage$pandac$ASTNode* $tmp1459 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1461 = (($fn1460) result1251->$class->vtable[2])(result1251);
                                        panda$collections$ImmutableArray* $tmp1463 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1403);
                                        $tmp1462 = $tmp1463;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1459, ((panda$core$Int64) { 19 }), $tmp1461, name1396, $tmp1462);
                                        $tmp1458 = $tmp1459;
                                        $tmp1457 = $tmp1458;
                                        result1251 = $tmp1457;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1458));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
                                    }
                                    $tmp1402 = 3;
                                    goto $l1400;
                                    $l1464:;
                                    $tmp1395 = 3;
                                    goto $l1393;
                                    $l1465:;
                                    goto $l1259;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1466 = result1251;
                                    $returnValue1255 = $tmp1466;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
                                    $tmp1402 = 4;
                                    goto $l1400;
                                    $l1467:;
                                    $tmp1395 = 4;
                                    goto $l1393;
                                    $l1468:;
                                    $tmp1250 = 11;
                                    goto $l1248;
                                    $l1469:;
                                    return $returnValue1255;
                                }
                                }
                            }
                            $tmp1402 = -1;
                            goto $l1400;
                            $l1400:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1403));
                            types1403 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1407));
                            t1407 = NULL;
                            switch ($tmp1402) {
                                case -1: goto $l1471;
                                case 4: goto $l1467;
                                case 3: goto $l1464;
                                case 1: goto $l1426;
                                case 0: goto $l1412;
                                case 2: goto $l1434;
                            }
                            $l1471:;
                        }
                        }
                        $tmp1472 = result1251;
                        $returnValue1255 = $tmp1472;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1472));
                        $tmp1395 = 5;
                        goto $l1393;
                        $l1473:;
                        $tmp1250 = 12;
                        goto $l1248;
                        $l1474:;
                        return $returnValue1255;
                    }
                    $l1393:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1396));
                    name1396 = NULL;
                    switch ($tmp1395) {
                        case 1: goto $l1427;
                        case 3: goto $l1465;
                        case 0: goto $l1413;
                        case 4: goto $l1468;
                        case 2: goto $l1435;
                        case 5: goto $l1473;
                    }
                    $l1476:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1261);
                    $tmp1477 = result1251;
                    $returnValue1255 = $tmp1477;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                    $tmp1250 = 13;
                    goto $l1248;
                    $l1478:;
                    return $returnValue1255;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1260:;
    }
    $tmp1250 = -1;
    goto $l1248;
    $l1248:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1251));
    result1251 = NULL;
    switch ($tmp1250) {
        case 6: goto $l1367;
        case 9: goto $l1428;
        case 8: goto $l1414;
        case 13: goto $l1478;
        case 3: goto $l1314;
        case -1: goto $l1480;
        case 12: goto $l1474;
        case 2: goto $l1304;
        case 11: goto $l1469;
        case 1: goto $l1288;
        case 7: goto $l1384;
        case 5: goto $l1343;
        case 10: goto $l1436;
        case 4: goto $l1336;
        case 0: goto $l1257;
    }
    $l1480:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1484 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    org$pandalanguage$pandac$ASTNode* $tmp1486;
    org$pandalanguage$pandac$ASTNode* $returnValue1488;
    org$pandalanguage$pandac$ASTNode* $tmp1489;
    org$pandalanguage$pandac$parser$Token$nullable op1497;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1498;
    org$pandalanguage$pandac$ASTNode* next1501 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1502;
    org$pandalanguage$pandac$ASTNode* $tmp1503;
    org$pandalanguage$pandac$ASTNode* $tmp1505;
    org$pandalanguage$pandac$ASTNode* $tmp1509;
    org$pandalanguage$pandac$ASTNode* $tmp1510;
    org$pandalanguage$pandac$ASTNode* $tmp1511;
    org$pandalanguage$pandac$ASTNode* $tmp1514;
    int $tmp1483;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1487 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1486 = $tmp1487;
        $tmp1485 = $tmp1486;
        result1484 = $tmp1485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
        if (((panda$core$Bit) { result1484 == NULL }).value) {
        {
            $tmp1489 = NULL;
            $returnValue1488 = $tmp1489;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
            $tmp1483 = 0;
            goto $l1481;
            $l1490:;
            return $returnValue1488;
        }
        }
        $l1492:;
        while (true) {
        {
            int $tmp1496;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1498, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1499 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1498);
                op1497 = $tmp1499;
                if (((panda$core$Bit) { !op1497.nonnull }).value) {
                {
                    $tmp1496 = 0;
                    goto $l1494;
                    $l1500:;
                    goto $l1493;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1504 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1503 = $tmp1504;
                $tmp1502 = $tmp1503;
                next1501 = $tmp1502;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                if (((panda$core$Bit) { next1501 == NULL }).value) {
                {
                    $tmp1505 = NULL;
                    $returnValue1488 = $tmp1505;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1505));
                    $tmp1496 = 1;
                    goto $l1494;
                    $l1506:;
                    $tmp1483 = 1;
                    goto $l1481;
                    $l1507:;
                    return $returnValue1488;
                }
                }
                {
                    $tmp1509 = result1484;
                    org$pandalanguage$pandac$ASTNode* $tmp1512 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1512, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1497.value).position, result1484, ((org$pandalanguage$pandac$parser$Token) op1497.value).kind, next1501);
                    $tmp1511 = $tmp1512;
                    $tmp1510 = $tmp1511;
                    result1484 = $tmp1510;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1510));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1509));
                }
            }
            $tmp1496 = -1;
            goto $l1494;
            $l1494:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1501));
            next1501 = NULL;
            switch ($tmp1496) {
                case -1: goto $l1513;
                case 1: goto $l1506;
                case 0: goto $l1500;
            }
            $l1513:;
        }
        }
        $l1493:;
        $tmp1514 = result1484;
        $returnValue1488 = $tmp1514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1514));
        $tmp1483 = 2;
        goto $l1481;
        $l1515:;
        return $returnValue1488;
    }
    $l1481:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1484));
    result1484 = NULL;
    switch ($tmp1483) {
        case 1: goto $l1507;
        case 0: goto $l1490;
        case 2: goto $l1515;
    }
    $l1517:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1518;
    org$pandalanguage$pandac$parser$Token$Kind $match$783_91520;
    org$pandalanguage$pandac$ASTNode* base1533 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1534;
    org$pandalanguage$pandac$ASTNode* $tmp1535;
    org$pandalanguage$pandac$ASTNode* $returnValue1537;
    org$pandalanguage$pandac$ASTNode* $tmp1538;
    org$pandalanguage$pandac$ASTNode* $tmp1541;
    org$pandalanguage$pandac$ASTNode* $tmp1542;
    org$pandalanguage$pandac$ASTNode* $tmp1547;
    org$pandalanguage$pandac$ASTNode* $tmp1548;
    org$pandalanguage$pandac$parser$Token $tmp1519 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1518 = $tmp1519;
    {
        $match$783_91520 = op1518.kind;
        panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$783_91520.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1522 = $tmp1523.value;
        if ($tmp1522) goto $l1524;
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$783_91520.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1522 = $tmp1525.value;
        $l1524:;
        panda$core$Bit $tmp1526 = { $tmp1522 };
        bool $tmp1521 = $tmp1526.value;
        if ($tmp1521) goto $l1527;
        panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$783_91520.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1521 = $tmp1528.value;
        $l1527:;
        panda$core$Bit $tmp1529 = { $tmp1521 };
        if ($tmp1529.value) {
        {
            int $tmp1532;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1536 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1535 = $tmp1536;
                $tmp1534 = $tmp1535;
                base1533 = $tmp1534;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                if (((panda$core$Bit) { base1533 == NULL }).value) {
                {
                    $tmp1538 = NULL;
                    $returnValue1537 = $tmp1538;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1538));
                    $tmp1532 = 0;
                    goto $l1530;
                    $l1539:;
                    return $returnValue1537;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1543 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1543, ((panda$core$Int64) { 32 }), op1518.position, op1518.kind, base1533);
                $tmp1542 = $tmp1543;
                $tmp1541 = $tmp1542;
                $returnValue1537 = $tmp1541;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1541));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1542));
                $tmp1532 = 1;
                goto $l1530;
                $l1544:;
                return $returnValue1537;
            }
            $l1530:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1533));
            base1533 = NULL;
            switch ($tmp1532) {
                case 1: goto $l1544;
                case 0: goto $l1539;
            }
            $l1546:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1518);
            org$pandalanguage$pandac$ASTNode* $tmp1549 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1548 = $tmp1549;
            $tmp1547 = $tmp1548;
            $returnValue1537 = $tmp1547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
            return $returnValue1537;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1554 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1555;
    org$pandalanguage$pandac$ASTNode* $tmp1556;
    org$pandalanguage$pandac$ASTNode* $returnValue1558;
    org$pandalanguage$pandac$ASTNode* $tmp1559;
    org$pandalanguage$pandac$parser$Token op1564;
    org$pandalanguage$pandac$parser$Token$Kind $match$809_131566;
    org$pandalanguage$pandac$ASTNode* next1595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1596;
    org$pandalanguage$pandac$ASTNode* $tmp1597;
    org$pandalanguage$pandac$ASTNode* $tmp1599;
    org$pandalanguage$pandac$ASTNode* $tmp1603;
    org$pandalanguage$pandac$ASTNode* $tmp1604;
    org$pandalanguage$pandac$ASTNode* $tmp1605;
    org$pandalanguage$pandac$parser$Token nextToken1609;
    org$pandalanguage$pandac$ASTNode* next1615 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1616;
    org$pandalanguage$pandac$ASTNode* $tmp1617;
    org$pandalanguage$pandac$ASTNode* $tmp1619;
    org$pandalanguage$pandac$ASTNode* $tmp1623;
    org$pandalanguage$pandac$ASTNode* $tmp1624;
    org$pandalanguage$pandac$ASTNode* $tmp1625;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1627;
    org$pandalanguage$pandac$ASTNode* $tmp1629;
    org$pandalanguage$pandac$ASTNode* $tmp1632;
    int $tmp1553;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1557 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1556 = $tmp1557;
        $tmp1555 = $tmp1556;
        result1554 = $tmp1555;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
        if (((panda$core$Bit) { result1554 == NULL }).value) {
        {
            $tmp1559 = NULL;
            $returnValue1558 = $tmp1559;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1559));
            $tmp1553 = 0;
            goto $l1551;
            $l1560:;
            return $returnValue1558;
        }
        }
        $l1562:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1565 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1564 = $tmp1565;
            {
                $match$809_131566 = op1564.kind;
                panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1572 = $tmp1573.value;
                if ($tmp1572) goto $l1574;
                panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1572 = $tmp1575.value;
                $l1574:;
                panda$core$Bit $tmp1576 = { $tmp1572 };
                bool $tmp1571 = $tmp1576.value;
                if ($tmp1571) goto $l1577;
                panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1571 = $tmp1578.value;
                $l1577:;
                panda$core$Bit $tmp1579 = { $tmp1571 };
                bool $tmp1570 = $tmp1579.value;
                if ($tmp1570) goto $l1580;
                panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1570 = $tmp1581.value;
                $l1580:;
                panda$core$Bit $tmp1582 = { $tmp1570 };
                bool $tmp1569 = $tmp1582.value;
                if ($tmp1569) goto $l1583;
                panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1569 = $tmp1584.value;
                $l1583:;
                panda$core$Bit $tmp1585 = { $tmp1569 };
                bool $tmp1568 = $tmp1585.value;
                if ($tmp1568) goto $l1586;
                panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1568 = $tmp1587.value;
                $l1586:;
                panda$core$Bit $tmp1588 = { $tmp1568 };
                bool $tmp1567 = $tmp1588.value;
                if ($tmp1567) goto $l1589;
                panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1567 = $tmp1590.value;
                $l1589:;
                panda$core$Bit $tmp1591 = { $tmp1567 };
                if ($tmp1591.value) {
                {
                    int $tmp1594;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1598 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1597 = $tmp1598;
                        $tmp1596 = $tmp1597;
                        next1595 = $tmp1596;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1596));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
                        if (((panda$core$Bit) { next1595 == NULL }).value) {
                        {
                            $tmp1599 = NULL;
                            $returnValue1558 = $tmp1599;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1599));
                            $tmp1594 = 0;
                            goto $l1592;
                            $l1600:;
                            $tmp1553 = 1;
                            goto $l1551;
                            $l1601:;
                            return $returnValue1558;
                        }
                        }
                        {
                            $tmp1603 = result1554;
                            org$pandalanguage$pandac$ASTNode* $tmp1606 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1606, ((panda$core$Int64) { 4 }), op1564.position, result1554, op1564.kind, next1595);
                            $tmp1605 = $tmp1606;
                            $tmp1604 = $tmp1605;
                            result1554 = $tmp1604;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1604));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1603));
                        }
                    }
                    $tmp1594 = -1;
                    goto $l1592;
                    $l1592:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1595));
                    next1595 = NULL;
                    switch ($tmp1594) {
                        case 0: goto $l1600;
                        case -1: goto $l1607;
                    }
                    $l1607:;
                }
                }
                else {
                panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$809_131566.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1608.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp1610 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken1609 = $tmp1610;
                    panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1609.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp1611.value) {
                    {
                        int $tmp1614;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1618 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1617 = $tmp1618;
                            $tmp1616 = $tmp1617;
                            next1615 = $tmp1616;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1616));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1617));
                            if (((panda$core$Bit) { next1615 == NULL }).value) {
                            {
                                $tmp1619 = NULL;
                                $returnValue1558 = $tmp1619;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1619));
                                $tmp1614 = 0;
                                goto $l1612;
                                $l1620:;
                                $tmp1553 = 2;
                                goto $l1551;
                                $l1621:;
                                return $returnValue1558;
                            }
                            }
                            {
                                $tmp1623 = result1554;
                                org$pandalanguage$pandac$ASTNode* $tmp1626 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1627, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1626, ((panda$core$Int64) { 4 }), op1564.position, result1554, $tmp1627, next1615);
                                $tmp1625 = $tmp1626;
                                $tmp1624 = $tmp1625;
                                result1554 = $tmp1624;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1624));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1623));
                            }
                        }
                        $tmp1614 = -1;
                        goto $l1612;
                        $l1612:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1615));
                        next1615 = NULL;
                        switch ($tmp1614) {
                            case 0: goto $l1620;
                            case -1: goto $l1628;
                        }
                        $l1628:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1609);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1564);
                        $tmp1629 = result1554;
                        $returnValue1558 = $tmp1629;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1629));
                        $tmp1553 = 3;
                        goto $l1551;
                        $l1630:;
                        return $returnValue1558;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1564);
                    $tmp1632 = result1554;
                    $returnValue1558 = $tmp1632;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1632));
                    $tmp1553 = 4;
                    goto $l1551;
                    $l1633:;
                    return $returnValue1558;
                }
                }
                }
            }
        }
        }
        $l1563:;
    }
    $tmp1553 = -1;
    goto $l1551;
    $l1551:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1554));
    result1554 = NULL;
    switch ($tmp1553) {
        case -1: goto $l1635;
        case 4: goto $l1633;
        case 2: goto $l1621;
        case 1: goto $l1601;
        case 0: goto $l1560;
        case 3: goto $l1630;
    }
    $l1635:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1639 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1640;
    org$pandalanguage$pandac$ASTNode* $tmp1641;
    org$pandalanguage$pandac$ASTNode* $returnValue1643;
    org$pandalanguage$pandac$ASTNode* $tmp1644;
    org$pandalanguage$pandac$parser$Token op1649;
    org$pandalanguage$pandac$parser$Token$Kind $match$850_131651;
    org$pandalanguage$pandac$ASTNode* next1664 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1665;
    org$pandalanguage$pandac$ASTNode* $tmp1666;
    org$pandalanguage$pandac$ASTNode* $tmp1668;
    org$pandalanguage$pandac$ASTNode* $tmp1672;
    org$pandalanguage$pandac$ASTNode* $tmp1673;
    org$pandalanguage$pandac$ASTNode* $tmp1674;
    org$pandalanguage$pandac$ASTNode* $tmp1677;
    int $tmp1638;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1642 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1641 = $tmp1642;
        $tmp1640 = $tmp1641;
        result1639 = $tmp1640;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1640));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
        if (((panda$core$Bit) { result1639 == NULL }).value) {
        {
            $tmp1644 = NULL;
            $returnValue1643 = $tmp1644;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1644));
            $tmp1638 = 0;
            goto $l1636;
            $l1645:;
            return $returnValue1643;
        }
        }
        $l1647:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1650 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1649 = $tmp1650;
            {
                $match$850_131651 = op1649.kind;
                panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$850_131651.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp1653 = $tmp1654.value;
                if ($tmp1653) goto $l1655;
                panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$850_131651.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp1653 = $tmp1656.value;
                $l1655:;
                panda$core$Bit $tmp1657 = { $tmp1653 };
                bool $tmp1652 = $tmp1657.value;
                if ($tmp1652) goto $l1658;
                panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$850_131651.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp1652 = $tmp1659.value;
                $l1658:;
                panda$core$Bit $tmp1660 = { $tmp1652 };
                if ($tmp1660.value) {
                {
                    int $tmp1663;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1667 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1666 = $tmp1667;
                        $tmp1665 = $tmp1666;
                        next1664 = $tmp1665;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1665));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1666));
                        if (((panda$core$Bit) { next1664 == NULL }).value) {
                        {
                            $tmp1668 = NULL;
                            $returnValue1643 = $tmp1668;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1668));
                            $tmp1663 = 0;
                            goto $l1661;
                            $l1669:;
                            $tmp1638 = 1;
                            goto $l1636;
                            $l1670:;
                            return $returnValue1643;
                        }
                        }
                        {
                            $tmp1672 = result1639;
                            org$pandalanguage$pandac$ASTNode* $tmp1675 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1675, ((panda$core$Int64) { 4 }), op1649.position, result1639, op1649.kind, next1664);
                            $tmp1674 = $tmp1675;
                            $tmp1673 = $tmp1674;
                            result1639 = $tmp1673;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1673));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1674));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
                        }
                    }
                    $tmp1663 = -1;
                    goto $l1661;
                    $l1661:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1664));
                    next1664 = NULL;
                    switch ($tmp1663) {
                        case -1: goto $l1676;
                        case 0: goto $l1669;
                    }
                    $l1676:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1649);
                    $tmp1677 = result1639;
                    $returnValue1643 = $tmp1677;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1677));
                    $tmp1638 = 2;
                    goto $l1636;
                    $l1678:;
                    return $returnValue1643;
                }
                }
            }
        }
        }
        $l1648:;
    }
    $tmp1638 = -1;
    goto $l1636;
    $l1636:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1639));
    result1639 = NULL;
    switch ($tmp1638) {
        case 1: goto $l1670;
        case -1: goto $l1680;
        case 2: goto $l1678;
        case 0: goto $l1645;
    }
    $l1680:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1684 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$870_91685;
    org$pandalanguage$pandac$ASTNode* $tmp1692;
    org$pandalanguage$pandac$ASTNode* $tmp1693;
    org$pandalanguage$pandac$ASTNode* $tmp1694;
    org$pandalanguage$pandac$ASTNode* $tmp1695;
    org$pandalanguage$pandac$ASTNode* $tmp1696;
    org$pandalanguage$pandac$ASTNode* $returnValue1698;
    org$pandalanguage$pandac$ASTNode* $tmp1699;
    org$pandalanguage$pandac$parser$Token op1702;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_91704;
    org$pandalanguage$pandac$parser$Token next1713;
    org$pandalanguage$pandac$ASTNode* right1715 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1725;
    org$pandalanguage$pandac$ASTNode* $tmp1726;
    org$pandalanguage$pandac$ASTNode* $tmp1727;
    org$pandalanguage$pandac$ASTNode* $tmp1729;
    org$pandalanguage$pandac$ASTNode* $tmp1733;
    org$pandalanguage$pandac$ASTNode* $tmp1734;
    org$pandalanguage$pandac$ASTNode* step1735 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1736;
    org$pandalanguage$pandac$ASTNode* $tmp1738;
    org$pandalanguage$pandac$ASTNode* $tmp1739;
    org$pandalanguage$pandac$ASTNode* $tmp1740;
    org$pandalanguage$pandac$ASTNode* $tmp1742;
    org$pandalanguage$pandac$ASTNode* $tmp1746;
    org$pandalanguage$pandac$ASTNode* $tmp1747;
    org$pandalanguage$pandac$ASTNode* $tmp1748;
    org$pandalanguage$pandac$ASTNode* $tmp1749;
    org$pandalanguage$pandac$ASTNode* $tmp1756;
    int $tmp1683;
    {
        memset(&result1684, 0, sizeof(result1684));
        {
            org$pandalanguage$pandac$parser$Token $tmp1686 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$870_91685 = $tmp1686.kind;
            panda$core$Bit $tmp1688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$870_91685.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1687 = $tmp1688.value;
            if ($tmp1687) goto $l1689;
            panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$870_91685.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1687 = $tmp1690.value;
            $l1689:;
            panda$core$Bit $tmp1691 = { $tmp1687 };
            if ($tmp1691.value) {
            {
                {
                    $tmp1692 = result1684;
                    $tmp1693 = NULL;
                    result1684 = $tmp1693;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1693));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1692));
                }
            }
            }
            else {
            {
                {
                    $tmp1694 = result1684;
                    org$pandalanguage$pandac$ASTNode* $tmp1697 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1696 = $tmp1697;
                    $tmp1695 = $tmp1696;
                    result1684 = $tmp1695;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1695));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1696));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
                }
                if (((panda$core$Bit) { result1684 == NULL }).value) {
                {
                    $tmp1699 = NULL;
                    $returnValue1698 = $tmp1699;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1699));
                    $tmp1683 = 0;
                    goto $l1681;
                    $l1700:;
                    return $returnValue1698;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp1703 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1702 = $tmp1703;
        {
            $match$880_91704 = op1702.kind;
            panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_91704.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1705 = $tmp1706.value;
            if ($tmp1705) goto $l1707;
            panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_91704.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1705 = $tmp1708.value;
            $l1707:;
            panda$core$Bit $tmp1709 = { $tmp1705 };
            if ($tmp1709.value) {
            {
                int $tmp1712;
                {
                    org$pandalanguage$pandac$parser$Token $tmp1714 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next1713 = $tmp1714;
                    memset(&right1715, 0, sizeof(right1715));
                    panda$core$Bit $tmp1718 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1713.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp1717 = $tmp1718.value;
                    if (!$tmp1717) goto $l1719;
                    panda$core$Bit $tmp1720 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1713.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp1717 = $tmp1720.value;
                    $l1719:;
                    panda$core$Bit $tmp1721 = { $tmp1717 };
                    bool $tmp1716 = $tmp1721.value;
                    if (!$tmp1716) goto $l1722;
                    panda$core$Bit $tmp1723 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1713.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp1716 = $tmp1723.value;
                    $l1722:;
                    panda$core$Bit $tmp1724 = { $tmp1716 };
                    if ($tmp1724.value) {
                    {
                        {
                            $tmp1725 = right1715;
                            org$pandalanguage$pandac$ASTNode* $tmp1728 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1727 = $tmp1728;
                            $tmp1726 = $tmp1727;
                            right1715 = $tmp1726;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1726));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1725));
                        }
                        if (((panda$core$Bit) { right1715 == NULL }).value) {
                        {
                            $tmp1729 = NULL;
                            $returnValue1698 = $tmp1729;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1729));
                            $tmp1712 = 0;
                            goto $l1710;
                            $l1730:;
                            $tmp1683 = 1;
                            goto $l1681;
                            $l1731:;
                            return $returnValue1698;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1733 = right1715;
                            $tmp1734 = NULL;
                            right1715 = $tmp1734;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1733));
                        }
                    }
                    }
                    memset(&step1735, 0, sizeof(step1735));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1736, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1737 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1736);
                    if (((panda$core$Bit) { $tmp1737.nonnull }).value) {
                    {
                        {
                            $tmp1738 = step1735;
                            org$pandalanguage$pandac$ASTNode* $tmp1741 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1740 = $tmp1741;
                            $tmp1739 = $tmp1740;
                            step1735 = $tmp1739;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1739));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1740));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
                        }
                        if (((panda$core$Bit) { step1735 == NULL }).value) {
                        {
                            $tmp1742 = NULL;
                            $returnValue1698 = $tmp1742;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1742));
                            $tmp1712 = 1;
                            goto $l1710;
                            $l1743:;
                            $tmp1683 = 2;
                            goto $l1681;
                            $l1744:;
                            return $returnValue1698;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1746 = step1735;
                            $tmp1747 = NULL;
                            step1735 = $tmp1747;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1746));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1750 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp1751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op1702.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp1750, ((panda$core$Int64) { 33 }), op1702.position, result1684, right1715, $tmp1751, step1735);
                    $tmp1749 = $tmp1750;
                    $tmp1748 = $tmp1749;
                    $returnValue1698 = $tmp1748;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
                    $tmp1712 = 2;
                    goto $l1710;
                    $l1752:;
                    $tmp1683 = 3;
                    goto $l1681;
                    $l1753:;
                    return $returnValue1698;
                }
                $l1710:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1715));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1735));
                switch ($tmp1712) {
                    case 0: goto $l1730;
                    case 1: goto $l1743;
                    case 2: goto $l1752;
                }
                $l1755:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1702);
                $tmp1756 = result1684;
                $returnValue1698 = $tmp1756;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
                $tmp1683 = 4;
                goto $l1681;
                $l1757:;
                return $returnValue1698;
            }
            }
        }
    }
    $tmp1683 = -1;
    goto $l1681;
    $l1681:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1684));
    switch ($tmp1683) {
        case 3: goto $l1753;
        case 2: goto $l1744;
        case 4: goto $l1757;
        case 1: goto $l1731;
        case -1: goto $l1759;
        case 0: goto $l1700;
    }
    $l1759:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1763 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1764;
    org$pandalanguage$pandac$ASTNode* $tmp1765;
    org$pandalanguage$pandac$ASTNode* $returnValue1767;
    org$pandalanguage$pandac$ASTNode* $tmp1768;
    org$pandalanguage$pandac$parser$Token op1773;
    org$pandalanguage$pandac$parser$Token$Kind $match$923_131775;
    org$pandalanguage$pandac$ASTNode* next1808 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1809;
    org$pandalanguage$pandac$ASTNode* $tmp1810;
    org$pandalanguage$pandac$ASTNode* $tmp1812;
    org$pandalanguage$pandac$ASTNode* $tmp1816;
    org$pandalanguage$pandac$ASTNode* $tmp1817;
    org$pandalanguage$pandac$ASTNode* $tmp1818;
    org$pandalanguage$pandac$ASTNode* $tmp1821;
    int $tmp1762;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1766 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1765 = $tmp1766;
        $tmp1764 = $tmp1765;
        result1763 = $tmp1764;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1764));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
        if (((panda$core$Bit) { result1763 == NULL }).value) {
        {
            $tmp1768 = NULL;
            $returnValue1767 = $tmp1768;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
            $tmp1762 = 0;
            goto $l1760;
            $l1769:;
            return $returnValue1767;
        }
        }
        $l1771:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1774 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1773 = $tmp1774;
            {
                $match$923_131775 = op1773.kind;
                panda$core$Bit $tmp1783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp1782 = $tmp1783.value;
                if ($tmp1782) goto $l1784;
                panda$core$Bit $tmp1785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp1782 = $tmp1785.value;
                $l1784:;
                panda$core$Bit $tmp1786 = { $tmp1782 };
                bool $tmp1781 = $tmp1786.value;
                if ($tmp1781) goto $l1787;
                panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp1781 = $tmp1788.value;
                $l1787:;
                panda$core$Bit $tmp1789 = { $tmp1781 };
                bool $tmp1780 = $tmp1789.value;
                if ($tmp1780) goto $l1790;
                panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp1780 = $tmp1791.value;
                $l1790:;
                panda$core$Bit $tmp1792 = { $tmp1780 };
                bool $tmp1779 = $tmp1792.value;
                if ($tmp1779) goto $l1793;
                panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp1779 = $tmp1794.value;
                $l1793:;
                panda$core$Bit $tmp1795 = { $tmp1779 };
                bool $tmp1778 = $tmp1795.value;
                if ($tmp1778) goto $l1796;
                panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp1778 = $tmp1797.value;
                $l1796:;
                panda$core$Bit $tmp1798 = { $tmp1778 };
                bool $tmp1777 = $tmp1798.value;
                if ($tmp1777) goto $l1799;
                panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp1777 = $tmp1800.value;
                $l1799:;
                panda$core$Bit $tmp1801 = { $tmp1777 };
                bool $tmp1776 = $tmp1801.value;
                if ($tmp1776) goto $l1802;
                panda$core$Bit $tmp1803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$923_131775.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp1776 = $tmp1803.value;
                $l1802:;
                panda$core$Bit $tmp1804 = { $tmp1776 };
                if ($tmp1804.value) {
                {
                    int $tmp1807;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1811 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1810 = $tmp1811;
                        $tmp1809 = $tmp1810;
                        next1808 = $tmp1809;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1809));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
                        if (((panda$core$Bit) { next1808 == NULL }).value) {
                        {
                            $tmp1812 = NULL;
                            $returnValue1767 = $tmp1812;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1812));
                            $tmp1807 = 0;
                            goto $l1805;
                            $l1813:;
                            $tmp1762 = 1;
                            goto $l1760;
                            $l1814:;
                            return $returnValue1767;
                        }
                        }
                        {
                            $tmp1816 = result1763;
                            org$pandalanguage$pandac$ASTNode* $tmp1819 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1819, ((panda$core$Int64) { 4 }), op1773.position, result1763, op1773.kind, next1808);
                            $tmp1818 = $tmp1819;
                            $tmp1817 = $tmp1818;
                            result1763 = $tmp1817;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1817));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
                        }
                    }
                    $tmp1807 = -1;
                    goto $l1805;
                    $l1805:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1808));
                    next1808 = NULL;
                    switch ($tmp1807) {
                        case -1: goto $l1820;
                        case 0: goto $l1813;
                    }
                    $l1820:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1773);
                    $tmp1821 = result1763;
                    $returnValue1767 = $tmp1821;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1821));
                    $tmp1762 = 2;
                    goto $l1760;
                    $l1822:;
                    return $returnValue1767;
                }
                }
            }
        }
        }
        $l1772:;
    }
    $tmp1762 = -1;
    goto $l1760;
    $l1760:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1763));
    result1763 = NULL;
    switch ($tmp1762) {
        case -1: goto $l1824;
        case 1: goto $l1814;
        case 2: goto $l1822;
        case 0: goto $l1769;
    }
    $l1824:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1828 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    org$pandalanguage$pandac$ASTNode* $tmp1830;
    org$pandalanguage$pandac$ASTNode* $returnValue1832;
    org$pandalanguage$pandac$ASTNode* $tmp1833;
    org$pandalanguage$pandac$parser$Token op1838;
    org$pandalanguage$pandac$parser$Token$Kind $match$954_131840;
    org$pandalanguage$pandac$ASTNode* next1849 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1850;
    org$pandalanguage$pandac$ASTNode* $tmp1851;
    org$pandalanguage$pandac$ASTNode* $tmp1853;
    org$pandalanguage$pandac$ASTNode* $tmp1857;
    org$pandalanguage$pandac$ASTNode* $tmp1858;
    org$pandalanguage$pandac$ASTNode* $tmp1859;
    org$pandalanguage$pandac$ASTNode* $tmp1862;
    int $tmp1827;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1831 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1830 = $tmp1831;
        $tmp1829 = $tmp1830;
        result1828 = $tmp1829;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
        if (((panda$core$Bit) { result1828 == NULL }).value) {
        {
            $tmp1833 = NULL;
            $returnValue1832 = $tmp1833;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1833));
            $tmp1827 = 0;
            goto $l1825;
            $l1834:;
            return $returnValue1832;
        }
        }
        $l1836:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1839 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1838 = $tmp1839;
            {
                $match$954_131840 = op1838.kind;
                panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$954_131840.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp1841 = $tmp1842.value;
                if ($tmp1841) goto $l1843;
                panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$954_131840.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp1841 = $tmp1844.value;
                $l1843:;
                panda$core$Bit $tmp1845 = { $tmp1841 };
                if ($tmp1845.value) {
                {
                    int $tmp1848;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1852 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1851 = $tmp1852;
                        $tmp1850 = $tmp1851;
                        next1849 = $tmp1850;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1850));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
                        if (((panda$core$Bit) { next1849 == NULL }).value) {
                        {
                            $tmp1853 = NULL;
                            $returnValue1832 = $tmp1853;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1853));
                            $tmp1848 = 0;
                            goto $l1846;
                            $l1854:;
                            $tmp1827 = 1;
                            goto $l1825;
                            $l1855:;
                            return $returnValue1832;
                        }
                        }
                        {
                            $tmp1857 = result1828;
                            org$pandalanguage$pandac$ASTNode* $tmp1860 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1860, ((panda$core$Int64) { 4 }), op1838.position, result1828, op1838.kind, next1849);
                            $tmp1859 = $tmp1860;
                            $tmp1858 = $tmp1859;
                            result1828 = $tmp1858;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1858));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                        }
                    }
                    $tmp1848 = -1;
                    goto $l1846;
                    $l1846:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1849));
                    next1849 = NULL;
                    switch ($tmp1848) {
                        case -1: goto $l1861;
                        case 0: goto $l1854;
                    }
                    $l1861:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1838);
                    $tmp1862 = result1828;
                    $returnValue1832 = $tmp1862;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
                    $tmp1827 = 2;
                    goto $l1825;
                    $l1863:;
                    return $returnValue1832;
                }
                }
            }
        }
        }
        $l1837:;
    }
    $tmp1827 = -1;
    goto $l1825;
    $l1825:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1828));
    result1828 = NULL;
    switch ($tmp1827) {
        case 2: goto $l1863;
        case 1: goto $l1855;
        case 0: goto $l1834;
        case -1: goto $l1865;
    }
    $l1865:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1869 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1870;
    org$pandalanguage$pandac$ASTNode* $tmp1871;
    org$pandalanguage$pandac$ASTNode* $returnValue1873;
    org$pandalanguage$pandac$ASTNode* $tmp1874;
    org$pandalanguage$pandac$parser$Token$nullable op1882;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1883;
    org$pandalanguage$pandac$ASTNode* next1886 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1887;
    org$pandalanguage$pandac$ASTNode* $tmp1888;
    org$pandalanguage$pandac$ASTNode* $tmp1890;
    org$pandalanguage$pandac$ASTNode* $tmp1894;
    org$pandalanguage$pandac$ASTNode* $tmp1895;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    org$pandalanguage$pandac$ASTNode* $tmp1899;
    int $tmp1868;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1872 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1871 = $tmp1872;
        $tmp1870 = $tmp1871;
        result1869 = $tmp1870;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1871));
        if (((panda$core$Bit) { result1869 == NULL }).value) {
        {
            $tmp1874 = NULL;
            $returnValue1873 = $tmp1874;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
            $tmp1868 = 0;
            goto $l1866;
            $l1875:;
            return $returnValue1873;
        }
        }
        $l1877:;
        while (true) {
        {
            int $tmp1881;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1883, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1884 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1883);
                op1882 = $tmp1884;
                if (((panda$core$Bit) { !op1882.nonnull }).value) {
                {
                    $tmp1881 = 0;
                    goto $l1879;
                    $l1885:;
                    goto $l1878;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1889 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1888 = $tmp1889;
                $tmp1887 = $tmp1888;
                next1886 = $tmp1887;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1888));
                if (((panda$core$Bit) { next1886 == NULL }).value) {
                {
                    $tmp1890 = NULL;
                    $returnValue1873 = $tmp1890;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1890));
                    $tmp1881 = 1;
                    goto $l1879;
                    $l1891:;
                    $tmp1868 = 1;
                    goto $l1866;
                    $l1892:;
                    return $returnValue1873;
                }
                }
                {
                    $tmp1894 = result1869;
                    org$pandalanguage$pandac$ASTNode* $tmp1897 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1897, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1882.value).position, result1869, ((org$pandalanguage$pandac$parser$Token) op1882.value).kind, next1886);
                    $tmp1896 = $tmp1897;
                    $tmp1895 = $tmp1896;
                    result1869 = $tmp1895;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                }
            }
            $tmp1881 = -1;
            goto $l1879;
            $l1879:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1886));
            next1886 = NULL;
            switch ($tmp1881) {
                case -1: goto $l1898;
                case 0: goto $l1885;
                case 1: goto $l1891;
            }
            $l1898:;
        }
        }
        $l1878:;
        $tmp1899 = result1869;
        $returnValue1873 = $tmp1899;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1899));
        $tmp1868 = 2;
        goto $l1866;
        $l1900:;
        return $returnValue1873;
    }
    $l1866:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1869));
    result1869 = NULL;
    switch ($tmp1868) {
        case 1: goto $l1892;
        case 2: goto $l1900;
        case 0: goto $l1875;
    }
    $l1902:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1906;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1907;
    org$pandalanguage$pandac$ASTNode* $returnValue1910;
    org$pandalanguage$pandac$ASTNode* $tmp1911;
    org$pandalanguage$pandac$ASTNode* test1914 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1915;
    org$pandalanguage$pandac$ASTNode* $tmp1916;
    org$pandalanguage$pandac$ASTNode* $tmp1918;
    panda$collections$ImmutableArray* ifTrue1921 = NULL;
    panda$collections$ImmutableArray* $tmp1922;
    panda$collections$ImmutableArray* $tmp1923;
    org$pandalanguage$pandac$ASTNode* $tmp1925;
    org$pandalanguage$pandac$ASTNode* ifFalse1928 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1929;
    org$pandalanguage$pandac$ASTNode* $tmp1933;
    org$pandalanguage$pandac$ASTNode* $tmp1934;
    org$pandalanguage$pandac$ASTNode* $tmp1935;
    org$pandalanguage$pandac$ASTNode* $tmp1937;
    org$pandalanguage$pandac$ASTNode* $tmp1940;
    org$pandalanguage$pandac$ASTNode* $tmp1941;
    org$pandalanguage$pandac$ASTNode* $tmp1942;
    org$pandalanguage$pandac$ASTNode* $tmp1944;
    org$pandalanguage$pandac$ASTNode* $tmp1947;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    org$pandalanguage$pandac$ASTNode* $tmp1949;
    org$pandalanguage$pandac$ASTNode* $tmp1950;
    int $tmp1905;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1907, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1909 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1907, &$s1908);
        start1906 = $tmp1909;
        if (((panda$core$Bit) { !start1906.nonnull }).value) {
        {
            $tmp1911 = NULL;
            $returnValue1910 = $tmp1911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
            $tmp1905 = 0;
            goto $l1903;
            $l1912:;
            return $returnValue1910;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1917 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1916 = $tmp1917;
        $tmp1915 = $tmp1916;
        test1914 = $tmp1915;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1915));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1916));
        if (((panda$core$Bit) { test1914 == NULL }).value) {
        {
            $tmp1918 = NULL;
            $returnValue1910 = $tmp1918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
            $tmp1905 = 1;
            goto $l1903;
            $l1919:;
            return $returnValue1910;
        }
        }
        panda$collections$ImmutableArray* $tmp1924 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1923 = $tmp1924;
        $tmp1922 = $tmp1923;
        ifTrue1921 = $tmp1922;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1923));
        if (((panda$core$Bit) { ifTrue1921 == NULL }).value) {
        {
            $tmp1925 = NULL;
            $returnValue1910 = $tmp1925;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1925));
            $tmp1905 = 2;
            goto $l1903;
            $l1926:;
            return $returnValue1910;
        }
        }
        memset(&ifFalse1928, 0, sizeof(ifFalse1928));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1929, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1930 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1929);
        if (((panda$core$Bit) { $tmp1930.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1931 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1931.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1932.value) {
            {
                {
                    $tmp1933 = ifFalse1928;
                    org$pandalanguage$pandac$ASTNode* $tmp1936 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1935 = $tmp1936;
                    $tmp1934 = $tmp1935;
                    ifFalse1928 = $tmp1934;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1934));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                }
                if (((panda$core$Bit) { ifFalse1928 == NULL }).value) {
                {
                    $tmp1937 = NULL;
                    $returnValue1910 = $tmp1937;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1937));
                    $tmp1905 = 3;
                    goto $l1903;
                    $l1938:;
                    return $returnValue1910;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp1940 = ifFalse1928;
                    org$pandalanguage$pandac$ASTNode* $tmp1943 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1942 = $tmp1943;
                    $tmp1941 = $tmp1942;
                    ifFalse1928 = $tmp1941;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1941));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1940));
                }
                if (((panda$core$Bit) { ifFalse1928 == NULL }).value) {
                {
                    $tmp1944 = NULL;
                    $returnValue1910 = $tmp1944;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1944));
                    $tmp1905 = 4;
                    goto $l1903;
                    $l1945:;
                    return $returnValue1910;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp1947 = ifFalse1928;
                $tmp1948 = NULL;
                ifFalse1928 = $tmp1948;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1947));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1951 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1951, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1906.value).position, test1914, ifTrue1921, ifFalse1928);
        $tmp1950 = $tmp1951;
        $tmp1949 = $tmp1950;
        $returnValue1910 = $tmp1949;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1949));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
        $tmp1905 = 5;
        goto $l1903;
        $l1952:;
        return $returnValue1910;
    }
    $l1903:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1914));
    test1914 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1921));
    ifTrue1921 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1928));
    switch ($tmp1905) {
        case 1: goto $l1919;
        case 3: goto $l1938;
        case 4: goto $l1945;
        case 5: goto $l1952;
        case 2: goto $l1926;
        case 0: goto $l1912;
    }
    $l1954:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1955;
    org$pandalanguage$pandac$ASTNode* $returnValue1958;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    org$pandalanguage$pandac$ASTNode* $tmp1961;
    org$pandalanguage$pandac$ASTNode* $tmp1962;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1955, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1957 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1955, &$s1956);
    if (((panda$core$Bit) { !$tmp1957.nonnull }).value) {
    {
        $tmp1959 = NULL;
        $returnValue1958 = $tmp1959;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
        return $returnValue1958;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1963 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp1962 = $tmp1963;
    $tmp1961 = $tmp1962;
    $returnValue1958 = $tmp1961;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
    return $returnValue1958;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1965;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1966;
    org$pandalanguage$pandac$ASTNode* $returnValue1969;
    org$pandalanguage$pandac$ASTNode* $tmp1970;
    org$pandalanguage$pandac$ASTNode* type1977 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1978;
    org$pandalanguage$pandac$ASTNode* $tmp1979;
    org$pandalanguage$pandac$ASTNode* $tmp1981;
    org$pandalanguage$pandac$ASTNode* $tmp1984;
    org$pandalanguage$pandac$ASTNode* $tmp1985;
    panda$core$String* $tmp1987;
    org$pandalanguage$pandac$ASTNode* $tmp1992;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    panda$core$String* $tmp1995;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1966, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1968 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1966, &$s1967);
    id1965 = $tmp1968;
    if (((panda$core$Bit) { !id1965.nonnull }).value) {
    {
        $tmp1970 = NULL;
        $returnValue1969 = $tmp1970;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
        return $returnValue1969;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1972 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1972.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1973.value) {
    {
        int $tmp1976;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1980 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1979 = $tmp1980;
            $tmp1978 = $tmp1979;
            type1977 = $tmp1978;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1978));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1979));
            if (((panda$core$Bit) { type1977 == NULL }).value) {
            {
                $tmp1981 = NULL;
                $returnValue1969 = $tmp1981;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1981));
                $tmp1976 = 0;
                goto $l1974;
                $l1982:;
                return $returnValue1969;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1986 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1988 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1965.value));
            $tmp1987 = $tmp1988;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1986, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id1965.value).position, $tmp1987, type1977);
            $tmp1985 = $tmp1986;
            $tmp1984 = $tmp1985;
            $returnValue1969 = $tmp1984;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1984));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
            $tmp1976 = 1;
            goto $l1974;
            $l1989:;
            return $returnValue1969;
        }
        $l1974:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1977));
        type1977 = NULL;
        switch ($tmp1976) {
            case 1: goto $l1989;
            case 0: goto $l1982;
        }
        $l1991:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1994 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1996 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1965.value));
    $tmp1995 = $tmp1996;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1994, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id1965.value).position, $tmp1995);
    $tmp1993 = $tmp1994;
    $tmp1992 = $tmp1993;
    $returnValue1969 = $tmp1992;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1992));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1995));
    return $returnValue1969;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2001;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2002;
    org$pandalanguage$pandac$ASTNode* $returnValue2005;
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    org$pandalanguage$pandac$ASTNode* t2009 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2010;
    org$pandalanguage$pandac$ASTNode* $tmp2011;
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2019;
    org$pandalanguage$pandac$ASTNode* list2022 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2023;
    org$pandalanguage$pandac$ASTNode* $tmp2024;
    org$pandalanguage$pandac$ASTNode* $tmp2026;
    panda$collections$ImmutableArray* block2029 = NULL;
    panda$collections$ImmutableArray* $tmp2030;
    panda$collections$ImmutableArray* $tmp2031;
    org$pandalanguage$pandac$ASTNode* $tmp2033;
    org$pandalanguage$pandac$ASTNode* $tmp2036;
    org$pandalanguage$pandac$ASTNode* $tmp2037;
    int $tmp2000;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2002, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2004 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2002, &$s2003);
        start2001 = $tmp2004;
        if (((panda$core$Bit) { !start2001.nonnull }).value) {
        {
            $tmp2006 = NULL;
            $returnValue2005 = $tmp2006;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
            $tmp2000 = 0;
            goto $l1998;
            $l2007:;
            return $returnValue2005;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2012 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2011 = $tmp2012;
        $tmp2010 = $tmp2011;
        t2009 = $tmp2010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
        if (((panda$core$Bit) { t2009 == NULL }).value) {
        {
            $tmp2013 = NULL;
            $returnValue2005 = $tmp2013;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2013));
            $tmp2000 = 1;
            goto $l1998;
            $l2014:;
            return $returnValue2005;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2016, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2018 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2016, &$s2017);
        if (((panda$core$Bit) { !$tmp2018.nonnull }).value) {
        {
            $tmp2019 = NULL;
            $returnValue2005 = $tmp2019;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
            $tmp2000 = 2;
            goto $l1998;
            $l2020:;
            return $returnValue2005;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2025 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2024 = $tmp2025;
        $tmp2023 = $tmp2024;
        list2022 = $tmp2023;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2024));
        if (((panda$core$Bit) { list2022 == NULL }).value) {
        {
            $tmp2026 = NULL;
            $returnValue2005 = $tmp2026;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2026));
            $tmp2000 = 3;
            goto $l1998;
            $l2027:;
            return $returnValue2005;
        }
        }
        panda$collections$ImmutableArray* $tmp2032 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2031 = $tmp2032;
        $tmp2030 = $tmp2031;
        block2029 = $tmp2030;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2030));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2031));
        if (((panda$core$Bit) { block2029 == NULL }).value) {
        {
            $tmp2033 = NULL;
            $returnValue2005 = $tmp2033;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2033));
            $tmp2000 = 4;
            goto $l1998;
            $l2034:;
            return $returnValue2005;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2038 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2038, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2001.value).position, p_label, t2009, list2022, block2029);
        $tmp2037 = $tmp2038;
        $tmp2036 = $tmp2037;
        $returnValue2005 = $tmp2036;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2036));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
        $tmp2000 = 5;
        goto $l1998;
        $l2039:;
        return $returnValue2005;
    }
    $l1998:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2009));
    t2009 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2022));
    list2022 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2029));
    block2029 = NULL;
    switch ($tmp2000) {
        case 1: goto $l2014;
        case 4: goto $l2034;
        case 5: goto $l2039;
        case 2: goto $l2020;
        case 3: goto $l2027;
        case 0: goto $l2007;
    }
    $l2041:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2045;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2046;
    org$pandalanguage$pandac$ASTNode* $returnValue2049;
    org$pandalanguage$pandac$ASTNode* $tmp2050;
    org$pandalanguage$pandac$ASTNode* test2053 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2054;
    org$pandalanguage$pandac$ASTNode* $tmp2055;
    org$pandalanguage$pandac$ASTNode* $tmp2057;
    panda$collections$ImmutableArray* body2060 = NULL;
    panda$collections$ImmutableArray* $tmp2061;
    panda$collections$ImmutableArray* $tmp2062;
    org$pandalanguage$pandac$ASTNode* $tmp2064;
    org$pandalanguage$pandac$ASTNode* $tmp2067;
    org$pandalanguage$pandac$ASTNode* $tmp2068;
    int $tmp2044;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2046, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2048 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2046, &$s2047);
        start2045 = $tmp2048;
        if (((panda$core$Bit) { !start2045.nonnull }).value) {
        {
            $tmp2050 = NULL;
            $returnValue2049 = $tmp2050;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
            $tmp2044 = 0;
            goto $l2042;
            $l2051:;
            return $returnValue2049;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2056 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2055 = $tmp2056;
        $tmp2054 = $tmp2055;
        test2053 = $tmp2054;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2054));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2055));
        if (((panda$core$Bit) { test2053 == NULL }).value) {
        {
            $tmp2057 = NULL;
            $returnValue2049 = $tmp2057;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
            $tmp2044 = 1;
            goto $l2042;
            $l2058:;
            return $returnValue2049;
        }
        }
        panda$collections$ImmutableArray* $tmp2063 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2062 = $tmp2063;
        $tmp2061 = $tmp2062;
        body2060 = $tmp2061;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2061));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2062));
        if (((panda$core$Bit) { body2060 == NULL }).value) {
        {
            $tmp2064 = NULL;
            $returnValue2049 = $tmp2064;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
            $tmp2044 = 2;
            goto $l2042;
            $l2065:;
            return $returnValue2049;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2069 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2069, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start2045.value).position, p_label, test2053, body2060);
        $tmp2068 = $tmp2069;
        $tmp2067 = $tmp2068;
        $returnValue2049 = $tmp2067;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
        $tmp2044 = 3;
        goto $l2042;
        $l2070:;
        return $returnValue2049;
    }
    $l2042:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2053));
    test2053 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2060));
    body2060 = NULL;
    switch ($tmp2044) {
        case 2: goto $l2065;
        case 1: goto $l2058;
        case 3: goto $l2070;
        case 0: goto $l2051;
    }
    $l2072:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2076;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2077;
    org$pandalanguage$pandac$ASTNode* $returnValue2080;
    org$pandalanguage$pandac$ASTNode* $tmp2081;
    panda$collections$ImmutableArray* body2084 = NULL;
    panda$collections$ImmutableArray* $tmp2085;
    panda$collections$ImmutableArray* $tmp2086;
    org$pandalanguage$pandac$ASTNode* $tmp2088;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2091;
    org$pandalanguage$pandac$ASTNode* $tmp2094;
    org$pandalanguage$pandac$ASTNode* test2097 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2098;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2101;
    org$pandalanguage$pandac$ASTNode* $tmp2104;
    org$pandalanguage$pandac$ASTNode* $tmp2105;
    int $tmp2075;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2077, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2079 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2077, &$s2078);
        start2076 = $tmp2079;
        if (((panda$core$Bit) { !start2076.nonnull }).value) {
        {
            $tmp2081 = NULL;
            $returnValue2080 = $tmp2081;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2081));
            $tmp2075 = 0;
            goto $l2073;
            $l2082:;
            return $returnValue2080;
        }
        }
        panda$collections$ImmutableArray* $tmp2087 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2086 = $tmp2087;
        $tmp2085 = $tmp2086;
        body2084 = $tmp2085;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
        if (((panda$core$Bit) { body2084 == NULL }).value) {
        {
            $tmp2088 = NULL;
            $returnValue2080 = $tmp2088;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
            $tmp2075 = 1;
            goto $l2073;
            $l2089:;
            return $returnValue2080;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2091, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2093 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2091, &$s2092);
        if (((panda$core$Bit) { !$tmp2093.nonnull }).value) {
        {
            $tmp2094 = NULL;
            $returnValue2080 = $tmp2094;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2094));
            $tmp2075 = 2;
            goto $l2073;
            $l2095:;
            return $returnValue2080;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2100 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2099 = $tmp2100;
        $tmp2098 = $tmp2099;
        test2097 = $tmp2098;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2098));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
        if (((panda$core$Bit) { test2097 == NULL }).value) {
        {
            $tmp2101 = NULL;
            $returnValue2080 = $tmp2101;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2101));
            $tmp2075 = 3;
            goto $l2073;
            $l2102:;
            return $returnValue2080;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2106 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2106, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$parser$Token) start2076.value).position, p_label, body2084, test2097);
        $tmp2105 = $tmp2106;
        $tmp2104 = $tmp2105;
        $returnValue2080 = $tmp2104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
        $tmp2075 = 4;
        goto $l2073;
        $l2107:;
        return $returnValue2080;
    }
    $l2073:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2084));
    body2084 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2097));
    test2097 = NULL;
    switch ($tmp2075) {
        case 1: goto $l2089;
        case 4: goto $l2107;
        case 2: goto $l2095;
        case 3: goto $l2102;
        case 0: goto $l2082;
    }
    $l2109:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2113;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2114;
    org$pandalanguage$pandac$ASTNode* $returnValue2117;
    org$pandalanguage$pandac$ASTNode* $tmp2118;
    panda$collections$ImmutableArray* body2121 = NULL;
    panda$collections$ImmutableArray* $tmp2122;
    panda$collections$ImmutableArray* $tmp2123;
    org$pandalanguage$pandac$ASTNode* $tmp2125;
    org$pandalanguage$pandac$ASTNode* $tmp2128;
    org$pandalanguage$pandac$ASTNode* $tmp2129;
    int $tmp2112;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2114, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2116 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2114, &$s2115);
        start2113 = $tmp2116;
        if (((panda$core$Bit) { !start2113.nonnull }).value) {
        {
            $tmp2118 = NULL;
            $returnValue2117 = $tmp2118;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
            $tmp2112 = 0;
            goto $l2110;
            $l2119:;
            return $returnValue2117;
        }
        }
        panda$collections$ImmutableArray* $tmp2124 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2123 = $tmp2124;
        $tmp2122 = $tmp2123;
        body2121 = $tmp2122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
        if (((panda$core$Bit) { body2121 == NULL }).value) {
        {
            $tmp2125 = NULL;
            $returnValue2117 = $tmp2125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2125));
            $tmp2112 = 1;
            goto $l2110;
            $l2126:;
            return $returnValue2117;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2130 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2130, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2113.value).position, p_label, body2121);
        $tmp2129 = $tmp2130;
        $tmp2128 = $tmp2129;
        $returnValue2117 = $tmp2128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
        $tmp2112 = 2;
        goto $l2110;
        $l2131:;
        return $returnValue2117;
    }
    $l2110:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2121));
    body2121 = NULL;
    switch ($tmp2112) {
        case 2: goto $l2131;
        case 0: goto $l2119;
        case 1: goto $l2126;
    }
    $l2133:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2137;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2138;
    org$pandalanguage$pandac$ASTNode* $returnValue2141;
    org$pandalanguage$pandac$ASTNode* $tmp2142;
    org$pandalanguage$pandac$ASTNode* expr2145 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2147;
    org$pandalanguage$pandac$ASTNode* $tmp2149;
    org$pandalanguage$pandac$ASTNode* message2152 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2155;
    org$pandalanguage$pandac$ASTNode* $tmp2156;
    org$pandalanguage$pandac$ASTNode* $tmp2157;
    org$pandalanguage$pandac$ASTNode* $tmp2159;
    org$pandalanguage$pandac$ASTNode* $tmp2162;
    org$pandalanguage$pandac$ASTNode* $tmp2163;
    org$pandalanguage$pandac$ASTNode* $tmp2164;
    org$pandalanguage$pandac$ASTNode* $tmp2165;
    int $tmp2136;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2138, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2140 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2138, &$s2139);
        start2137 = $tmp2140;
        if (((panda$core$Bit) { !start2137.nonnull }).value) {
        {
            $tmp2142 = NULL;
            $returnValue2141 = $tmp2142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2142));
            $tmp2136 = 0;
            goto $l2134;
            $l2143:;
            return $returnValue2141;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2148 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2147 = $tmp2148;
        $tmp2146 = $tmp2147;
        expr2145 = $tmp2146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2147));
        if (((panda$core$Bit) { expr2145 == NULL }).value) {
        {
            $tmp2149 = NULL;
            $returnValue2141 = $tmp2149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2149));
            $tmp2136 = 1;
            goto $l2134;
            $l2150:;
            return $returnValue2141;
        }
        }
        memset(&message2152, 0, sizeof(message2152));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2153, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2154 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2153);
        if (((panda$core$Bit) { $tmp2154.nonnull }).value) {
        {
            {
                $tmp2155 = message2152;
                org$pandalanguage$pandac$ASTNode* $tmp2158 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2157 = $tmp2158;
                $tmp2156 = $tmp2157;
                message2152 = $tmp2156;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
            }
            if (((panda$core$Bit) { message2152 == NULL }).value) {
            {
                $tmp2159 = NULL;
                $returnValue2141 = $tmp2159;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2159));
                $tmp2136 = 2;
                goto $l2134;
                $l2160:;
                return $returnValue2141;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2162 = message2152;
                $tmp2163 = NULL;
                message2152 = $tmp2163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2166 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2166, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2137.value).position, expr2145, message2152);
        $tmp2165 = $tmp2166;
        $tmp2164 = $tmp2165;
        $returnValue2141 = $tmp2164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
        $tmp2136 = 3;
        goto $l2134;
        $l2167:;
        return $returnValue2141;
    }
    $l2134:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2145));
    expr2145 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2152));
    switch ($tmp2136) {
        case 3: goto $l2167;
        case 2: goto $l2160;
        case 0: goto $l2143;
        case 1: goto $l2150;
    }
    $l2169:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2173;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2174;
    org$pandalanguage$pandac$ASTNode* $returnValue2177;
    org$pandalanguage$pandac$ASTNode* $tmp2178;
    panda$collections$Array* expressions2181 = NULL;
    panda$collections$Array* $tmp2182;
    panda$collections$Array* $tmp2183;
    org$pandalanguage$pandac$ASTNode* expr2185 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2186;
    org$pandalanguage$pandac$ASTNode* $tmp2187;
    org$pandalanguage$pandac$ASTNode* $tmp2189;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2195;
    org$pandalanguage$pandac$ASTNode* $tmp2197;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    org$pandalanguage$pandac$ASTNode* $tmp2199;
    org$pandalanguage$pandac$ASTNode* $tmp2201;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2204;
    org$pandalanguage$pandac$ASTNode* $tmp2207;
    panda$collections$Array* statements2210 = NULL;
    panda$collections$Array* $tmp2211;
    panda$collections$Array* $tmp2212;
    org$pandalanguage$pandac$parser$Token$Kind $match$1188_132216;
    org$pandalanguage$pandac$ASTNode* stmt2239 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    org$pandalanguage$pandac$ASTNode* $tmp2243;
    org$pandalanguage$pandac$ASTNode* stmt2252 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    org$pandalanguage$pandac$ASTNode* $tmp2254;
    org$pandalanguage$pandac$ASTNode* $tmp2256;
    org$pandalanguage$pandac$ASTNode* $tmp2261;
    org$pandalanguage$pandac$ASTNode* $tmp2262;
    panda$collections$ImmutableArray* $tmp2264;
    panda$collections$ImmutableArray* $tmp2266;
    int $tmp2172;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2174, ((panda$core$Int64) { 39 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2176 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2174, &$s2175);
        start2173 = $tmp2176;
        if (((panda$core$Bit) { !start2173.nonnull }).value) {
        {
            $tmp2178 = NULL;
            $returnValue2177 = $tmp2178;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
            $tmp2172 = 0;
            goto $l2170;
            $l2179:;
            return $returnValue2177;
        }
        }
        panda$collections$Array* $tmp2184 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2184);
        $tmp2183 = $tmp2184;
        $tmp2182 = $tmp2183;
        expressions2181 = $tmp2182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
        org$pandalanguage$pandac$ASTNode* $tmp2188 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2187 = $tmp2188;
        $tmp2186 = $tmp2187;
        expr2185 = $tmp2186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2187));
        if (((panda$core$Bit) { expr2185 == NULL }).value) {
        {
            $tmp2189 = NULL;
            $returnValue2177 = $tmp2189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2189));
            $tmp2172 = 1;
            goto $l2170;
            $l2190:;
            return $returnValue2177;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions2181, ((panda$core$Object*) expr2185));
        $l2192:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2195, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2196 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2195);
        bool $tmp2194 = ((panda$core$Bit) { $tmp2196.nonnull }).value;
        if (!$tmp2194) goto $l2193;
        {
            {
                $tmp2197 = expr2185;
                org$pandalanguage$pandac$ASTNode* $tmp2200 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2199 = $tmp2200;
                $tmp2198 = $tmp2199;
                expr2185 = $tmp2198;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2199));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2197));
            }
            if (((panda$core$Bit) { expr2185 == NULL }).value) {
            {
                $tmp2201 = NULL;
                $returnValue2177 = $tmp2201;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
                $tmp2172 = 2;
                goto $l2170;
                $l2202:;
                return $returnValue2177;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2181, ((panda$core$Object*) expr2185));
        }
        goto $l2192;
        $l2193:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2204, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2206 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2204, &$s2205);
        if (((panda$core$Bit) { !$tmp2206.nonnull }).value) {
        {
            $tmp2207 = NULL;
            $returnValue2177 = $tmp2207;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2207));
            $tmp2172 = 3;
            goto $l2170;
            $l2208:;
            return $returnValue2177;
        }
        }
        panda$collections$Array* $tmp2213 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2213);
        $tmp2212 = $tmp2213;
        $tmp2211 = $tmp2212;
        statements2210 = $tmp2211;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2211));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
        $l2214:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2217 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1188_132216 = $tmp2217.kind;
                panda$core$Bit $tmp2220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1188_132216.$rawValue, ((panda$core$Int64) { 39 }));
                bool $tmp2219 = $tmp2220.value;
                if ($tmp2219) goto $l2221;
                panda$core$Bit $tmp2222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1188_132216.$rawValue, ((panda$core$Int64) { 40 }));
                $tmp2219 = $tmp2222.value;
                $l2221:;
                panda$core$Bit $tmp2223 = { $tmp2219 };
                bool $tmp2218 = $tmp2223.value;
                if ($tmp2218) goto $l2224;
                panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1188_132216.$rawValue, ((panda$core$Int64) { 100 }));
                $tmp2218 = $tmp2225.value;
                $l2224:;
                panda$core$Bit $tmp2226 = { $tmp2218 };
                if ($tmp2226.value) {
                {
                    goto $l2215;
                }
                }
                else {
                panda$core$Bit $tmp2229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1188_132216.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2228 = $tmp2229.value;
                if ($tmp2228) goto $l2230;
                panda$core$Bit $tmp2231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1188_132216.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2228 = $tmp2231.value;
                $l2230:;
                panda$core$Bit $tmp2232 = { $tmp2228 };
                bool $tmp2227 = $tmp2232.value;
                if ($tmp2227) goto $l2233;
                panda$core$Bit $tmp2234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1188_132216.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2227 = $tmp2234.value;
                $l2233:;
                panda$core$Bit $tmp2235 = { $tmp2227 };
                if ($tmp2235.value) {
                {
                    int $tmp2238;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2242 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2241 = $tmp2242;
                        $tmp2240 = $tmp2241;
                        stmt2239 = $tmp2240;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2241));
                        if (((panda$core$Bit) { stmt2239 == NULL }).value) {
                        {
                            $tmp2243 = NULL;
                            $returnValue2177 = $tmp2243;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2243));
                            $tmp2238 = 0;
                            goto $l2236;
                            $l2244:;
                            $tmp2172 = 4;
                            goto $l2170;
                            $l2245:;
                            return $returnValue2177;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements2210, ((panda$core$Object*) stmt2239));
                        $tmp2238 = 1;
                        goto $l2236;
                        $l2247:;
                        goto $l2215;
                    }
                    $l2236:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2239));
                    stmt2239 = NULL;
                    switch ($tmp2238) {
                        case 1: goto $l2247;
                        case 0: goto $l2244;
                    }
                    $l2248:;
                }
                }
                else {
                {
                    {
                        int $tmp2251;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2255 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2254 = $tmp2255;
                            $tmp2253 = $tmp2254;
                            stmt2252 = $tmp2253;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2253));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2254));
                            if (((panda$core$Bit) { stmt2252 == NULL }).value) {
                            {
                                $tmp2256 = NULL;
                                $returnValue2177 = $tmp2256;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2256));
                                $tmp2251 = 0;
                                goto $l2249;
                                $l2257:;
                                $tmp2172 = 5;
                                goto $l2170;
                                $l2258:;
                                return $returnValue2177;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2210, ((panda$core$Object*) stmt2252));
                        }
                        $tmp2251 = -1;
                        goto $l2249;
                        $l2249:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2252));
                        stmt2252 = NULL;
                        switch ($tmp2251) {
                            case -1: goto $l2260;
                            case 0: goto $l2257;
                        }
                        $l2260:;
                    }
                }
                }
                }
            }
        }
        }
        $l2215:;
        org$pandalanguage$pandac$ASTNode* $tmp2263 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2265 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2181);
        $tmp2264 = $tmp2265;
        panda$collections$ImmutableArray* $tmp2267 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2210);
        $tmp2266 = $tmp2267;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2263, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) start2173.value).position, $tmp2264, $tmp2266);
        $tmp2262 = $tmp2263;
        $tmp2261 = $tmp2262;
        $returnValue2177 = $tmp2261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
        $tmp2172 = 6;
        goto $l2170;
        $l2268:;
        return $returnValue2177;
    }
    $l2170:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2181));
    expressions2181 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2185));
    expr2185 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2210));
    statements2210 = NULL;
    switch ($tmp2172) {
        case 6: goto $l2268;
        case 2: goto $l2202;
        case 5: goto $l2258;
        case 4: goto $l2245;
        case 3: goto $l2208;
        case 1: goto $l2190;
        case 0: goto $l2179;
    }
    $l2270:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2274;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2275;
    org$pandalanguage$pandac$ASTNode* $returnValue2278;
    org$pandalanguage$pandac$ASTNode* $tmp2279;
    org$pandalanguage$pandac$ASTNode* expr2282 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2283;
    org$pandalanguage$pandac$ASTNode* $tmp2284;
    org$pandalanguage$pandac$ASTNode* $tmp2286;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2289;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    panda$collections$Array* whens2295 = NULL;
    panda$collections$Array* $tmp2296;
    panda$collections$Array* $tmp2297;
    panda$collections$Array* other2299 = NULL;
    panda$collections$Array* $tmp2300;
    org$pandalanguage$pandac$parser$Token token2303;
    org$pandalanguage$pandac$parser$Token$Kind $match$1229_132305;
    org$pandalanguage$pandac$ASTNode* w2311 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2312;
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    org$pandalanguage$pandac$ASTNode* $tmp2315;
    org$pandalanguage$pandac$parser$Token o2321;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2323;
    org$pandalanguage$pandac$ASTNode* $tmp2326;
    panda$collections$Array* $tmp2329;
    panda$collections$Array* $tmp2330;
    panda$collections$Array* $tmp2331;
    org$pandalanguage$pandac$parser$Token$Kind $match$1245_252335;
    org$pandalanguage$pandac$ASTNode* stmt2350 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    org$pandalanguage$pandac$ASTNode* $tmp2352;
    org$pandalanguage$pandac$ASTNode* $tmp2354;
    org$pandalanguage$pandac$ASTNode* stmt2363 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2364;
    org$pandalanguage$pandac$ASTNode* $tmp2365;
    org$pandalanguage$pandac$ASTNode* $tmp2367;
    panda$core$String* $tmp2372;
    panda$core$String* $tmp2374;
    panda$core$String* $tmp2375;
    panda$core$String* $tmp2377;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2383;
    org$pandalanguage$pandac$ASTNode* $tmp2386;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    org$pandalanguage$pandac$ASTNode* $tmp2390;
    panda$collections$ImmutableArray* $tmp2392;
    panda$collections$ImmutableArray* $tmp2394;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    org$pandalanguage$pandac$ASTNode* $tmp2399;
    panda$collections$ImmutableArray* $tmp2401;
    int $tmp2273;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2275, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2277 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2275, &$s2276);
        start2274 = $tmp2277;
        if (((panda$core$Bit) { !start2274.nonnull }).value) {
        {
            $tmp2279 = NULL;
            $returnValue2278 = $tmp2279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2279));
            $tmp2273 = 0;
            goto $l2271;
            $l2280:;
            return $returnValue2278;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2285 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2284 = $tmp2285;
        $tmp2283 = $tmp2284;
        expr2282 = $tmp2283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
        if (((panda$core$Bit) { expr2282 == NULL }).value) {
        {
            $tmp2286 = NULL;
            $returnValue2278 = $tmp2286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
            $tmp2273 = 1;
            goto $l2271;
            $l2287:;
            return $returnValue2278;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2289, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2291 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2289, &$s2290);
        if (((panda$core$Bit) { !$tmp2291.nonnull }).value) {
        {
            $tmp2292 = NULL;
            $returnValue2278 = $tmp2292;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2292));
            $tmp2273 = 2;
            goto $l2271;
            $l2293:;
            return $returnValue2278;
        }
        }
        panda$collections$Array* $tmp2298 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2298);
        $tmp2297 = $tmp2298;
        $tmp2296 = $tmp2297;
        whens2295 = $tmp2296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2297));
        $tmp2300 = NULL;
        other2299 = $tmp2300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
        $l2301:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2304 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2303 = $tmp2304;
            {
                $match$1229_132305 = token2303.kind;
                panda$core$Bit $tmp2306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1229_132305.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2306.value) {
                {
                    goto $l2302;
                }
                }
                else {
                panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1229_132305.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2307.value) {
                {
                    int $tmp2310;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2314 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2313 = $tmp2314;
                        $tmp2312 = $tmp2313;
                        w2311 = $tmp2312;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2312));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
                        if (((panda$core$Bit) { w2311 == NULL }).value) {
                        {
                            $tmp2315 = NULL;
                            $returnValue2278 = $tmp2315;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
                            $tmp2310 = 0;
                            goto $l2308;
                            $l2316:;
                            $tmp2273 = 3;
                            goto $l2271;
                            $l2317:;
                            return $returnValue2278;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2295, ((panda$core$Object*) w2311));
                    }
                    $tmp2310 = -1;
                    goto $l2308;
                    $l2308:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2311));
                    w2311 = NULL;
                    switch ($tmp2310) {
                        case 0: goto $l2316;
                        case -1: goto $l2319;
                    }
                    $l2319:;
                }
                }
                else {
                panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1229_132305.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2320.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2322 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2321 = $tmp2322;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2323, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2325 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2323, &$s2324);
                    if (((panda$core$Bit) { !$tmp2325.nonnull }).value) {
                    {
                        $tmp2326 = NULL;
                        $returnValue2278 = $tmp2326;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2326));
                        $tmp2273 = 4;
                        goto $l2271;
                        $l2327:;
                        return $returnValue2278;
                    }
                    }
                    {
                        $tmp2329 = other2299;
                        panda$collections$Array* $tmp2332 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2332);
                        $tmp2331 = $tmp2332;
                        $tmp2330 = $tmp2331;
                        other2299 = $tmp2330;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2330));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
                    }
                    $l2333:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2336 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1245_252335 = $tmp2336.kind;
                            panda$core$Bit $tmp2337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1245_252335.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2337.value) {
                            {
                                goto $l2334;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1245_252335.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2339 = $tmp2340.value;
                            if ($tmp2339) goto $l2341;
                            panda$core$Bit $tmp2342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1245_252335.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2339 = $tmp2342.value;
                            $l2341:;
                            panda$core$Bit $tmp2343 = { $tmp2339 };
                            bool $tmp2338 = $tmp2343.value;
                            if ($tmp2338) goto $l2344;
                            panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1245_252335.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2338 = $tmp2345.value;
                            $l2344:;
                            panda$core$Bit $tmp2346 = { $tmp2338 };
                            if ($tmp2346.value) {
                            {
                                int $tmp2349;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2353 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2352 = $tmp2353;
                                    $tmp2351 = $tmp2352;
                                    stmt2350 = $tmp2351;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2351));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2352));
                                    if (((panda$core$Bit) { stmt2350 == NULL }).value) {
                                    {
                                        $tmp2354 = NULL;
                                        $returnValue2278 = $tmp2354;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
                                        $tmp2349 = 0;
                                        goto $l2347;
                                        $l2355:;
                                        $tmp2273 = 5;
                                        goto $l2271;
                                        $l2356:;
                                        return $returnValue2278;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2299, ((panda$core$Object*) stmt2350));
                                    $tmp2349 = 1;
                                    goto $l2347;
                                    $l2358:;
                                    goto $l2334;
                                }
                                $l2347:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2350));
                                stmt2350 = NULL;
                                switch ($tmp2349) {
                                    case 0: goto $l2355;
                                    case 1: goto $l2358;
                                }
                                $l2359:;
                            }
                            }
                            else {
                            {
                                int $tmp2362;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2366 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2365 = $tmp2366;
                                    $tmp2364 = $tmp2365;
                                    stmt2363 = $tmp2364;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2364));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
                                    if (((panda$core$Bit) { stmt2363 == NULL }).value) {
                                    {
                                        $tmp2367 = NULL;
                                        $returnValue2278 = $tmp2367;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
                                        $tmp2362 = 0;
                                        goto $l2360;
                                        $l2368:;
                                        $tmp2273 = 6;
                                        goto $l2271;
                                        $l2369:;
                                        return $returnValue2278;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2299, ((panda$core$Object*) stmt2363));
                                }
                                $tmp2362 = -1;
                                goto $l2360;
                                $l2360:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2363));
                                stmt2363 = NULL;
                                switch ($tmp2362) {
                                    case 0: goto $l2368;
                                    case -1: goto $l2371;
                                }
                                $l2371:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2334:;
                    goto $l2302;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2378 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2303);
                    $tmp2377 = $tmp2378;
                    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2376, $tmp2377);
                    $tmp2375 = $tmp2379;
                    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, &$s2380);
                    $tmp2374 = $tmp2381;
                    panda$core$String* $tmp2382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2373, $tmp2374);
                    $tmp2372 = $tmp2382;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2303, $tmp2372);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2375));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2377));
                }
                }
                }
                }
            }
        }
        }
        $l2302:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2383, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2385 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2383, &$s2384);
        if (((panda$core$Bit) { !$tmp2385.nonnull }).value) {
        {
            $tmp2386 = NULL;
            $returnValue2278 = $tmp2386;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2386));
            $tmp2273 = 7;
            goto $l2271;
            $l2387:;
            return $returnValue2278;
        }
        }
        if (((panda$core$Bit) { other2299 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2391 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2393 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2295);
            $tmp2392 = $tmp2393;
            panda$collections$ImmutableArray* $tmp2395 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2299);
            $tmp2394 = $tmp2395;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2391, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2274.value).position, expr2282, $tmp2392, $tmp2394);
            $tmp2390 = $tmp2391;
            $tmp2389 = $tmp2390;
            $returnValue2278 = $tmp2389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2390));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2392));
            $tmp2273 = 8;
            goto $l2271;
            $l2396:;
            return $returnValue2278;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2400 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2402 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2295);
        $tmp2401 = $tmp2402;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2400, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2274.value).position, expr2282, $tmp2401, NULL);
        $tmp2399 = $tmp2400;
        $tmp2398 = $tmp2399;
        $returnValue2278 = $tmp2398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2401));
        $tmp2273 = 9;
        goto $l2271;
        $l2403:;
        return $returnValue2278;
    }
    $l2271:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2282));
    expr2282 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2295));
    whens2295 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2299));
    switch ($tmp2273) {
        case 2: goto $l2293;
        case 8: goto $l2396;
        case 9: goto $l2403;
        case 6: goto $l2369;
        case 5: goto $l2356;
        case 7: goto $l2387;
        case 3: goto $l2317;
        case 4: goto $l2327;
        case 0: goto $l2280;
        case 1: goto $l2287;
    }
    $l2405:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2409;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2410;
    panda$collections$ImmutableArray* $returnValue2413;
    panda$collections$ImmutableArray* $tmp2414;
    panda$collections$Array* result2417 = NULL;
    panda$collections$Array* $tmp2418;
    panda$collections$Array* $tmp2419;
    org$pandalanguage$pandac$parser$Token$Kind $match$1289_132423;
    org$pandalanguage$pandac$ASTNode* stmt2438 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    org$pandalanguage$pandac$ASTNode* $tmp2440;
    panda$collections$ImmutableArray* $tmp2442;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2446;
    panda$collections$ImmutableArray* $tmp2449;
    org$pandalanguage$pandac$ASTNode* stmt2458 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2459;
    org$pandalanguage$pandac$ASTNode* $tmp2460;
    panda$collections$ImmutableArray* $tmp2462;
    panda$collections$ImmutableArray* $tmp2467;
    panda$collections$ImmutableArray* $tmp2468;
    int $tmp2408;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2410, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2412 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2410, &$s2411);
        start2409 = $tmp2412;
        if (((panda$core$Bit) { !start2409.nonnull }).value) {
        {
            $tmp2414 = NULL;
            $returnValue2413 = $tmp2414;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2414));
            $tmp2408 = 0;
            goto $l2406;
            $l2415:;
            return $returnValue2413;
        }
        }
        panda$collections$Array* $tmp2420 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2420);
        $tmp2419 = $tmp2420;
        $tmp2418 = $tmp2419;
        result2417 = $tmp2418;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2419));
        $l2421:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2424 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1289_132423 = $tmp2424.kind;
                panda$core$Bit $tmp2425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1289_132423.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2425.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2422;
                }
                }
                else {
                panda$core$Bit $tmp2428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1289_132423.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2427 = $tmp2428.value;
                if ($tmp2427) goto $l2429;
                panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1289_132423.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2427 = $tmp2430.value;
                $l2429:;
                panda$core$Bit $tmp2431 = { $tmp2427 };
                bool $tmp2426 = $tmp2431.value;
                if ($tmp2426) goto $l2432;
                panda$core$Bit $tmp2433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1289_132423.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2426 = $tmp2433.value;
                $l2432:;
                panda$core$Bit $tmp2434 = { $tmp2426 };
                if ($tmp2434.value) {
                {
                    int $tmp2437;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2441 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2440 = $tmp2441;
                        $tmp2439 = $tmp2440;
                        stmt2438 = $tmp2439;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2439));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
                        if (((panda$core$Bit) { stmt2438 == NULL }).value) {
                        {
                            $tmp2442 = NULL;
                            $returnValue2413 = $tmp2442;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2442));
                            $tmp2437 = 0;
                            goto $l2435;
                            $l2443:;
                            $tmp2408 = 1;
                            goto $l2406;
                            $l2444:;
                            return $returnValue2413;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2446, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2448 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2446, &$s2447);
                        if (((panda$core$Bit) { !$tmp2448.nonnull }).value) {
                        {
                            $tmp2449 = NULL;
                            $returnValue2413 = $tmp2449;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2449));
                            $tmp2437 = 1;
                            goto $l2435;
                            $l2450:;
                            $tmp2408 = 2;
                            goto $l2406;
                            $l2451:;
                            return $returnValue2413;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2417, ((panda$core$Object*) stmt2438));
                        $tmp2437 = 2;
                        goto $l2435;
                        $l2453:;
                        goto $l2422;
                    }
                    $l2435:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2438));
                    stmt2438 = NULL;
                    switch ($tmp2437) {
                        case 0: goto $l2443;
                        case 1: goto $l2450;
                        case 2: goto $l2453;
                    }
                    $l2454:;
                }
                }
                else {
                {
                    int $tmp2457;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2461 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2460 = $tmp2461;
                        $tmp2459 = $tmp2460;
                        stmt2458 = $tmp2459;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2459));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2460));
                        if (((panda$core$Bit) { stmt2458 == NULL }).value) {
                        {
                            $tmp2462 = NULL;
                            $returnValue2413 = $tmp2462;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2462));
                            $tmp2457 = 0;
                            goto $l2455;
                            $l2463:;
                            $tmp2408 = 3;
                            goto $l2406;
                            $l2464:;
                            return $returnValue2413;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2417, ((panda$core$Object*) stmt2458));
                    }
                    $tmp2457 = -1;
                    goto $l2455;
                    $l2455:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2458));
                    stmt2458 = NULL;
                    switch ($tmp2457) {
                        case -1: goto $l2466;
                        case 0: goto $l2463;
                    }
                    $l2466:;
                }
                }
                }
            }
        }
        }
        $l2422:;
        panda$collections$ImmutableArray* $tmp2469 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2417);
        $tmp2468 = $tmp2469;
        $tmp2467 = $tmp2468;
        $returnValue2413 = $tmp2467;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
        $tmp2408 = 4;
        goto $l2406;
        $l2470:;
        return $returnValue2413;
    }
    $l2406:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2417));
    result2417 = NULL;
    switch ($tmp2408) {
        case 3: goto $l2464;
        case 1: goto $l2444;
        case 2: goto $l2451;
        case 4: goto $l2470;
        case 0: goto $l2415;
    }
    $l2472:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2476 = NULL;
    panda$collections$ImmutableArray* $tmp2477;
    panda$collections$ImmutableArray* $tmp2478;
    org$pandalanguage$pandac$ASTNode* $returnValue2480;
    org$pandalanguage$pandac$ASTNode* $tmp2481;
    org$pandalanguage$pandac$ASTNode* $tmp2484;
    org$pandalanguage$pandac$ASTNode* $tmp2485;
    org$pandalanguage$pandac$Position $tmp2487;
    int $tmp2475;
    {
        panda$collections$ImmutableArray* $tmp2479 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2478 = $tmp2479;
        $tmp2477 = $tmp2478;
        statements2476 = $tmp2477;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2477));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
        if (((panda$core$Bit) { statements2476 == NULL }).value) {
        {
            $tmp2481 = NULL;
            $returnValue2480 = $tmp2481;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2481));
            $tmp2475 = 0;
            goto $l2473;
            $l2482:;
            return $returnValue2480;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2486 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2487);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2486, ((panda$core$Int64) { 6 }), $tmp2487, statements2476);
        $tmp2485 = $tmp2486;
        $tmp2484 = $tmp2485;
        $returnValue2480 = $tmp2484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2485));
        $tmp2475 = 1;
        goto $l2473;
        $l2488:;
        return $returnValue2480;
    }
    $l2473:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2476));
    statements2476 = NULL;
    switch ($tmp2475) {
        case 1: goto $l2488;
        case 0: goto $l2482;
    }
    $l2490:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2494 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $tmp2496;
    org$pandalanguage$pandac$ASTNode* $returnValue2498;
    org$pandalanguage$pandac$ASTNode* $tmp2499;
    org$pandalanguage$pandac$parser$Token$Kind $match$1333_92502;
    org$pandalanguage$pandac$parser$Token op2568;
    org$pandalanguage$pandac$ASTNode* rvalue2570 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2571;
    org$pandalanguage$pandac$ASTNode* $tmp2572;
    org$pandalanguage$pandac$ASTNode* $tmp2574;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    org$pandalanguage$pandac$ASTNode* $tmp2579;
    org$pandalanguage$pandac$parser$Token op2593;
    org$pandalanguage$pandac$ASTNode* rvalue2595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2596;
    org$pandalanguage$pandac$ASTNode* $tmp2597;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2603;
    org$pandalanguage$pandac$ASTNode* $tmp2604;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    int $tmp2493;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2497 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2496 = $tmp2497;
        $tmp2495 = $tmp2496;
        start2494 = $tmp2495;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2495));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2496));
        if (((panda$core$Bit) { start2494 == NULL }).value) {
        {
            $tmp2499 = NULL;
            $returnValue2498 = $tmp2499;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2499));
            $tmp2493 = 0;
            goto $l2491;
            $l2500:;
            return $returnValue2498;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2503 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1333_92502 = $tmp2503.kind;
            panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2518 = $tmp2519.value;
            if ($tmp2518) goto $l2520;
            panda$core$Bit $tmp2521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2518 = $tmp2521.value;
            $l2520:;
            panda$core$Bit $tmp2522 = { $tmp2518 };
            bool $tmp2517 = $tmp2522.value;
            if ($tmp2517) goto $l2523;
            panda$core$Bit $tmp2524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2517 = $tmp2524.value;
            $l2523:;
            panda$core$Bit $tmp2525 = { $tmp2517 };
            bool $tmp2516 = $tmp2525.value;
            if ($tmp2516) goto $l2526;
            panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2516 = $tmp2527.value;
            $l2526:;
            panda$core$Bit $tmp2528 = { $tmp2516 };
            bool $tmp2515 = $tmp2528.value;
            if ($tmp2515) goto $l2529;
            panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2515 = $tmp2530.value;
            $l2529:;
            panda$core$Bit $tmp2531 = { $tmp2515 };
            bool $tmp2514 = $tmp2531.value;
            if ($tmp2514) goto $l2532;
            panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2514 = $tmp2533.value;
            $l2532:;
            panda$core$Bit $tmp2534 = { $tmp2514 };
            bool $tmp2513 = $tmp2534.value;
            if ($tmp2513) goto $l2535;
            panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2513 = $tmp2536.value;
            $l2535:;
            panda$core$Bit $tmp2537 = { $tmp2513 };
            bool $tmp2512 = $tmp2537.value;
            if ($tmp2512) goto $l2538;
            panda$core$Bit $tmp2539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2512 = $tmp2539.value;
            $l2538:;
            panda$core$Bit $tmp2540 = { $tmp2512 };
            bool $tmp2511 = $tmp2540.value;
            if ($tmp2511) goto $l2541;
            panda$core$Bit $tmp2542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2511 = $tmp2542.value;
            $l2541:;
            panda$core$Bit $tmp2543 = { $tmp2511 };
            bool $tmp2510 = $tmp2543.value;
            if ($tmp2510) goto $l2544;
            panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2510 = $tmp2545.value;
            $l2544:;
            panda$core$Bit $tmp2546 = { $tmp2510 };
            bool $tmp2509 = $tmp2546.value;
            if ($tmp2509) goto $l2547;
            panda$core$Bit $tmp2548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2509 = $tmp2548.value;
            $l2547:;
            panda$core$Bit $tmp2549 = { $tmp2509 };
            bool $tmp2508 = $tmp2549.value;
            if ($tmp2508) goto $l2550;
            panda$core$Bit $tmp2551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2508 = $tmp2551.value;
            $l2550:;
            panda$core$Bit $tmp2552 = { $tmp2508 };
            bool $tmp2507 = $tmp2552.value;
            if ($tmp2507) goto $l2553;
            panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2507 = $tmp2554.value;
            $l2553:;
            panda$core$Bit $tmp2555 = { $tmp2507 };
            bool $tmp2506 = $tmp2555.value;
            if ($tmp2506) goto $l2556;
            panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2506 = $tmp2557.value;
            $l2556:;
            panda$core$Bit $tmp2558 = { $tmp2506 };
            bool $tmp2505 = $tmp2558.value;
            if ($tmp2505) goto $l2559;
            panda$core$Bit $tmp2560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2505 = $tmp2560.value;
            $l2559:;
            panda$core$Bit $tmp2561 = { $tmp2505 };
            bool $tmp2504 = $tmp2561.value;
            if ($tmp2504) goto $l2562;
            panda$core$Bit $tmp2563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2504 = $tmp2563.value;
            $l2562:;
            panda$core$Bit $tmp2564 = { $tmp2504 };
            if ($tmp2564.value) {
            {
                int $tmp2567;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2569 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2568 = $tmp2569;
                    org$pandalanguage$pandac$ASTNode* $tmp2573 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2572 = $tmp2573;
                    $tmp2571 = $tmp2572;
                    rvalue2570 = $tmp2571;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2571));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2572));
                    if (((panda$core$Bit) { rvalue2570 == NULL }).value) {
                    {
                        $tmp2574 = NULL;
                        $returnValue2498 = $tmp2574;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2574));
                        $tmp2567 = 0;
                        goto $l2565;
                        $l2575:;
                        $tmp2493 = 1;
                        goto $l2491;
                        $l2576:;
                        return $returnValue2498;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2580 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2582 = (($fn2581) start2494->$class->vtable[2])(start2494);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2580, ((panda$core$Int64) { 4 }), $tmp2582, start2494, op2568.kind, rvalue2570);
                    $tmp2579 = $tmp2580;
                    $tmp2578 = $tmp2579;
                    $returnValue2498 = $tmp2578;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2579));
                    $tmp2567 = 1;
                    goto $l2565;
                    $l2583:;
                    $tmp2493 = 2;
                    goto $l2491;
                    $l2584:;
                    return $returnValue2498;
                }
                $l2565:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2570));
                rvalue2570 = NULL;
                switch ($tmp2567) {
                    case 1: goto $l2583;
                    case 0: goto $l2575;
                }
                $l2586:;
            }
            }
            else {
            panda$core$Bit $tmp2587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1333_92502.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2587.value) {
            {
                int $tmp2590;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2591 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2591, &$s2592);
                    org$pandalanguage$pandac$parser$Token $tmp2594 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2593 = $tmp2594;
                    org$pandalanguage$pandac$ASTNode* $tmp2598 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2597 = $tmp2598;
                    $tmp2596 = $tmp2597;
                    rvalue2595 = $tmp2596;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2596));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                    if (((panda$core$Bit) { rvalue2595 == NULL }).value) {
                    {
                        $tmp2599 = NULL;
                        $returnValue2498 = $tmp2599;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2599));
                        $tmp2590 = 0;
                        goto $l2588;
                        $l2600:;
                        $tmp2493 = 3;
                        goto $l2491;
                        $l2601:;
                        return $returnValue2498;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2605 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2607 = (($fn2606) start2494->$class->vtable[2])(start2494);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2605, ((panda$core$Int64) { 4 }), $tmp2607, start2494, op2593.kind, rvalue2595);
                    $tmp2604 = $tmp2605;
                    $tmp2603 = $tmp2604;
                    $returnValue2498 = $tmp2603;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2603));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2604));
                    $tmp2590 = 1;
                    goto $l2588;
                    $l2608:;
                    $tmp2493 = 4;
                    goto $l2491;
                    $l2609:;
                    return $returnValue2498;
                }
                $l2588:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2595));
                rvalue2595 = NULL;
                switch ($tmp2590) {
                    case 1: goto $l2608;
                    case 0: goto $l2600;
                }
                $l2611:;
            }
            }
            else {
            {
                $tmp2612 = start2494;
                $returnValue2498 = $tmp2612;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2612));
                $tmp2493 = 5;
                goto $l2491;
                $l2613:;
                return $returnValue2498;
            }
            }
            }
        }
    }
    $tmp2493 = -1;
    goto $l2491;
    $l2491:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2494));
    start2494 = NULL;
    switch ($tmp2493) {
        case 1: goto $l2576;
        case 5: goto $l2613;
        case 4: goto $l2609;
        case 2: goto $l2584;
        case 0: goto $l2500;
        case -1: goto $l2615;
        case 3: goto $l2601;
    }
    $l2615:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t2619 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2620;
    org$pandalanguage$pandac$ASTNode* $tmp2621;
    org$pandalanguage$pandac$ASTNode* $returnValue2623;
    org$pandalanguage$pandac$ASTNode* $tmp2624;
    org$pandalanguage$pandac$ASTNode* value2627 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2628;
    org$pandalanguage$pandac$ASTNode* $tmp2630;
    org$pandalanguage$pandac$ASTNode* $tmp2631;
    org$pandalanguage$pandac$ASTNode* $tmp2632;
    org$pandalanguage$pandac$ASTNode* $tmp2634;
    org$pandalanguage$pandac$ASTNode* $tmp2641;
    org$pandalanguage$pandac$ASTNode* $tmp2642;
    org$pandalanguage$pandac$ASTNode* $tmp2643;
    org$pandalanguage$pandac$ASTNode* $tmp2645;
    org$pandalanguage$pandac$ASTNode* $tmp2648;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    org$pandalanguage$pandac$ASTNode* $tmp2650;
    org$pandalanguage$pandac$ASTNode* $tmp2651;
    int $tmp2618;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2622 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2621 = $tmp2622;
        $tmp2620 = $tmp2621;
        t2619 = $tmp2620;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2621));
        if (((panda$core$Bit) { t2619 == NULL }).value) {
        {
            $tmp2624 = NULL;
            $returnValue2623 = $tmp2624;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2624));
            $tmp2618 = 0;
            goto $l2616;
            $l2625:;
            return $returnValue2623;
        }
        }
        memset(&value2627, 0, sizeof(value2627));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2628, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2629 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2628);
        if (((panda$core$Bit) { $tmp2629.nonnull }).value) {
        {
            {
                $tmp2630 = value2627;
                org$pandalanguage$pandac$ASTNode* $tmp2633 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2632 = $tmp2633;
                $tmp2631 = $tmp2632;
                value2627 = $tmp2631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2632));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2630));
            }
            if (((panda$core$Bit) { value2627 == NULL }).value) {
            {
                $tmp2634 = NULL;
                $returnValue2623 = $tmp2634;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2634));
                $tmp2618 = 1;
                goto $l2616;
                $l2635:;
                return $returnValue2623;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp2637 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2637.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2638.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2639 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2639, &$s2640);
            {
                $tmp2641 = value2627;
                org$pandalanguage$pandac$ASTNode* $tmp2644 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2643 = $tmp2644;
                $tmp2642 = $tmp2643;
                value2627 = $tmp2642;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2642));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2643));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2641));
            }
            if (((panda$core$Bit) { value2627 == NULL }).value) {
            {
                $tmp2645 = NULL;
                $returnValue2623 = $tmp2645;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2645));
                $tmp2618 = 2;
                goto $l2616;
                $l2646:;
                return $returnValue2623;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2648 = value2627;
                $tmp2649 = NULL;
                value2627 = $tmp2649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2648));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2652 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2654 = (($fn2653) t2619->$class->vtable[2])(t2619);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2652, ((panda$core$Int64) { 13 }), $tmp2654, t2619, value2627);
        $tmp2651 = $tmp2652;
        $tmp2650 = $tmp2651;
        $returnValue2623 = $tmp2650;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2650));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
        $tmp2618 = 3;
        goto $l2616;
        $l2655:;
        return $returnValue2623;
    }
    $l2616:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2619));
    t2619 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2627));
    switch ($tmp2618) {
        case 3: goto $l2655;
        case 2: goto $l2646;
        case 0: goto $l2625;
        case 1: goto $l2635;
    }
    $l2657:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2661;
    org$pandalanguage$pandac$Variable$Kind kind2663;
    org$pandalanguage$pandac$parser$Token$Kind $match$1392_92664;
    org$pandalanguage$pandac$Variable$Kind $tmp2666;
    org$pandalanguage$pandac$Variable$Kind $tmp2668;
    org$pandalanguage$pandac$Variable$Kind $tmp2670;
    org$pandalanguage$pandac$Variable$Kind $tmp2672;
    panda$collections$Array* declarations2674 = NULL;
    panda$collections$Array* $tmp2675;
    panda$collections$Array* $tmp2676;
    org$pandalanguage$pandac$ASTNode* decl2678 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    org$pandalanguage$pandac$ASTNode* $tmp2680;
    org$pandalanguage$pandac$ASTNode* $returnValue2682;
    org$pandalanguage$pandac$ASTNode* $tmp2683;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2689;
    org$pandalanguage$pandac$ASTNode* decl2694 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2695;
    org$pandalanguage$pandac$ASTNode* $tmp2696;
    org$pandalanguage$pandac$ASTNode* $tmp2698;
    org$pandalanguage$pandac$ASTNode* $tmp2703;
    org$pandalanguage$pandac$ASTNode* $tmp2704;
    panda$collections$ImmutableArray* $tmp2706;
    int $tmp2660;
    {
        org$pandalanguage$pandac$parser$Token $tmp2662 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start2661 = $tmp2662;
        memset(&kind2663, 0, sizeof(kind2663));
        {
            $match$1392_92664 = start2661.kind;
            panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_92664.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2665.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2666, ((panda$core$Int64) { 0 }));
                kind2663 = $tmp2666;
            }
            }
            else {
            panda$core$Bit $tmp2667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_92664.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2667.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2668, ((panda$core$Int64) { 1 }));
                kind2663 = $tmp2668;
            }
            }
            else {
            panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_92664.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2669.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2670, ((panda$core$Int64) { 3 }));
                kind2663 = $tmp2670;
            }
            }
            else {
            panda$core$Bit $tmp2671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1392_92664.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2671.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2672, ((panda$core$Int64) { 2 }));
                kind2663 = $tmp2672;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start2661, &$s2673);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp2677 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2677);
        $tmp2676 = $tmp2677;
        $tmp2675 = $tmp2676;
        declarations2674 = $tmp2675;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2676));
        org$pandalanguage$pandac$ASTNode* $tmp2681 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2680 = $tmp2681;
        $tmp2679 = $tmp2680;
        decl2678 = $tmp2679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
        if (((panda$core$Bit) { decl2678 == NULL }).value) {
        {
            $tmp2683 = NULL;
            $returnValue2682 = $tmp2683;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
            $tmp2660 = 0;
            goto $l2658;
            $l2684:;
            return $returnValue2682;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations2674, ((panda$core$Object*) decl2678));
        $l2686:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2689, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2690 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2689);
        bool $tmp2688 = ((panda$core$Bit) { $tmp2690.nonnull }).value;
        if (!$tmp2688) goto $l2687;
        {
            int $tmp2693;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2697 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2696 = $tmp2697;
                $tmp2695 = $tmp2696;
                decl2694 = $tmp2695;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2695));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2696));
                if (((panda$core$Bit) { decl2694 == NULL }).value) {
                {
                    $tmp2698 = NULL;
                    $returnValue2682 = $tmp2698;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2698));
                    $tmp2693 = 0;
                    goto $l2691;
                    $l2699:;
                    $tmp2660 = 1;
                    goto $l2658;
                    $l2700:;
                    return $returnValue2682;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations2674, ((panda$core$Object*) decl2694));
            }
            $tmp2693 = -1;
            goto $l2691;
            $l2691:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2694));
            decl2694 = NULL;
            switch ($tmp2693) {
                case -1: goto $l2702;
                case 0: goto $l2699;
            }
            $l2702:;
        }
        goto $l2686;
        $l2687:;
        org$pandalanguage$pandac$ASTNode* $tmp2705 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2707 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations2674);
        $tmp2706 = $tmp2707;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2705, ((panda$core$Int64) { 43 }), start2661.position, kind2663, $tmp2706);
        $tmp2704 = $tmp2705;
        $tmp2703 = $tmp2704;
        $returnValue2682 = $tmp2703;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2706));
        $tmp2660 = 2;
        goto $l2658;
        $l2708:;
        return $returnValue2682;
    }
    $l2658:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2674));
    declarations2674 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2678));
    decl2678 = NULL;
    switch ($tmp2660) {
        case 2: goto $l2708;
        case 1: goto $l2700;
        case 0: goto $l2684;
    }
    $l2710:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2714;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2715;
    org$pandalanguage$pandac$ASTNode* $returnValue2718;
    org$pandalanguage$pandac$ASTNode* $tmp2719;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2722;
    org$pandalanguage$pandac$ASTNode* $tmp2725;
    panda$core$Object* $tmp2728;
    org$pandalanguage$pandac$ASTNode* target2730 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2731;
    org$pandalanguage$pandac$ASTNode* $tmp2732;
    panda$core$String* $tmp2734;
    panda$collections$Array* args2736 = NULL;
    panda$collections$Array* $tmp2737;
    panda$collections$Array* $tmp2738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2740;
    org$pandalanguage$pandac$ASTNode* expr2745 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2746;
    org$pandalanguage$pandac$ASTNode* $tmp2747;
    panda$core$Object* $tmp2749;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2758;
    org$pandalanguage$pandac$ASTNode* $tmp2760;
    org$pandalanguage$pandac$ASTNode* $tmp2761;
    org$pandalanguage$pandac$ASTNode* $tmp2762;
    panda$core$Object* $tmp2764;
    org$pandalanguage$pandac$ASTNode* $tmp2766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2770;
    panda$core$Object* $tmp2773;
    org$pandalanguage$pandac$ASTNode* $tmp2775;
    panda$core$Object* $tmp2780;
    org$pandalanguage$pandac$ASTNode* $tmp2782;
    org$pandalanguage$pandac$ASTNode* $tmp2783;
    panda$collections$ImmutableArray* $tmp2785;
    int $tmp2713;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2715, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2717 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2715, &$s2716);
        start2714 = $tmp2717;
        if (((panda$core$Bit) { !start2714.nonnull }).value) {
        {
            $tmp2719 = NULL;
            $returnValue2718 = $tmp2719;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2719));
            $tmp2713 = 0;
            goto $l2711;
            $l2720:;
            return $returnValue2718;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2722, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2724 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2722, &$s2723);
        if (((panda$core$Bit) { !$tmp2724.nonnull }).value) {
        {
            $tmp2725 = NULL;
            $returnValue2718 = $tmp2725;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2725));
            $tmp2713 = 1;
            goto $l2711;
            $l2726:;
            return $returnValue2718;
        }
        }
        panda$core$Bit$wrapper* $tmp2729;
        $tmp2729 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp2729->value = ((panda$core$Bit) { true });
        $tmp2728 = ((panda$core$Object*) $tmp2729);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2728);
        panda$core$Panda$unref$panda$core$Object($tmp2728);
        org$pandalanguage$pandac$ASTNode* $tmp2733 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2735 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2714.value));
        $tmp2734 = $tmp2735;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2733, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start2714.value).position, $tmp2734);
        $tmp2732 = $tmp2733;
        $tmp2731 = $tmp2732;
        target2730 = $tmp2731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2732));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2734));
        panda$collections$Array* $tmp2739 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2739);
        $tmp2738 = $tmp2739;
        $tmp2737 = $tmp2738;
        args2736 = $tmp2737;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2737));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2738));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2740, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2741 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2740);
        if (((panda$core$Bit) { !$tmp2741.nonnull }).value) {
        {
            int $tmp2744;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2748 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2747 = $tmp2748;
                $tmp2746 = $tmp2747;
                expr2745 = $tmp2746;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2746));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2747));
                if (((panda$core$Bit) { expr2745 == NULL }).value) {
                {
                    panda$core$Object* $tmp2750 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2749 = $tmp2750;
                    panda$core$Panda$unref$panda$core$Object($tmp2749);
                    $tmp2751 = NULL;
                    $returnValue2718 = $tmp2751;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
                    $tmp2744 = 0;
                    goto $l2742;
                    $l2752:;
                    $tmp2713 = 2;
                    goto $l2711;
                    $l2753:;
                    return $returnValue2718;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args2736, ((panda$core$Object*) expr2745));
                $l2755:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2758, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2759 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2758);
                bool $tmp2757 = ((panda$core$Bit) { $tmp2759.nonnull }).value;
                if (!$tmp2757) goto $l2756;
                {
                    {
                        $tmp2760 = expr2745;
                        org$pandalanguage$pandac$ASTNode* $tmp2763 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2762 = $tmp2763;
                        $tmp2761 = $tmp2762;
                        expr2745 = $tmp2761;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2761));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2762));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2760));
                    }
                    if (((panda$core$Bit) { expr2745 == NULL }).value) {
                    {
                        panda$core$Object* $tmp2765 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2764 = $tmp2765;
                        panda$core$Panda$unref$panda$core$Object($tmp2764);
                        $tmp2766 = NULL;
                        $returnValue2718 = $tmp2766;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2766));
                        $tmp2744 = 1;
                        goto $l2742;
                        $l2767:;
                        $tmp2713 = 3;
                        goto $l2711;
                        $l2768:;
                        return $returnValue2718;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args2736, ((panda$core$Object*) expr2745));
                }
                goto $l2755;
                $l2756:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2770, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2772 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2770, &$s2771);
                if (((panda$core$Bit) { !$tmp2772.nonnull }).value) {
                {
                    panda$core$Object* $tmp2774 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2773 = $tmp2774;
                    panda$core$Panda$unref$panda$core$Object($tmp2773);
                    $tmp2775 = NULL;
                    $returnValue2718 = $tmp2775;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2775));
                    $tmp2744 = 2;
                    goto $l2742;
                    $l2776:;
                    $tmp2713 = 4;
                    goto $l2711;
                    $l2777:;
                    return $returnValue2718;
                }
                }
            }
            $tmp2744 = -1;
            goto $l2742;
            $l2742:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2745));
            expr2745 = NULL;
            switch ($tmp2744) {
                case 1: goto $l2767;
                case 2: goto $l2776;
                case -1: goto $l2779;
                case 0: goto $l2752;
            }
            $l2779:;
        }
        }
        panda$core$Object* $tmp2781 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp2780 = $tmp2781;
        panda$core$Panda$unref$panda$core$Object($tmp2780);
        org$pandalanguage$pandac$ASTNode* $tmp2784 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2786 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2736);
        $tmp2785 = $tmp2786;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2784, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$parser$Token) start2714.value).position, target2730, $tmp2785);
        $tmp2783 = $tmp2784;
        $tmp2782 = $tmp2783;
        $returnValue2718 = $tmp2782;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2782));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2783));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2785));
        $tmp2713 = 5;
        goto $l2711;
        $l2787:;
        return $returnValue2718;
    }
    $l2711:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2730));
    target2730 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2736));
    args2736 = NULL;
    switch ($tmp2713) {
        case 1: goto $l2726;
        case 2: goto $l2753;
        case 4: goto $l2777;
        case 5: goto $l2787;
        case 3: goto $l2768;
        case 0: goto $l2720;
    }
    $l2789:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2790;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2791;
    org$pandalanguage$pandac$ASTNode* $returnValue2794;
    org$pandalanguage$pandac$ASTNode* $tmp2795;
    org$pandalanguage$pandac$parser$Token$nullable label2797;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2798;
    org$pandalanguage$pandac$ASTNode* $tmp2800;
    org$pandalanguage$pandac$ASTNode* $tmp2801;
    panda$core$String* $tmp2803;
    org$pandalanguage$pandac$ASTNode* $tmp2806;
    org$pandalanguage$pandac$ASTNode* $tmp2807;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2791, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2793 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2791, &$s2792);
    start2790 = $tmp2793;
    if (((panda$core$Bit) { !start2790.nonnull }).value) {
    {
        $tmp2795 = NULL;
        $returnValue2794 = $tmp2795;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2795));
        return $returnValue2794;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2798, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2799 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2798);
    label2797 = $tmp2799;
    if (((panda$core$Bit) { label2797.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2802 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2804 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2797.value));
        $tmp2803 = $tmp2804;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2802, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2790.value).position, $tmp2803);
        $tmp2801 = $tmp2802;
        $tmp2800 = $tmp2801;
        $returnValue2794 = $tmp2800;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2801));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2803));
        return $returnValue2794;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2808 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2808, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2790.value).position, NULL);
    $tmp2807 = $tmp2808;
    $tmp2806 = $tmp2807;
    $returnValue2794 = $tmp2806;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2806));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2807));
    return $returnValue2794;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2810;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2811;
    org$pandalanguage$pandac$ASTNode* $returnValue2814;
    org$pandalanguage$pandac$ASTNode* $tmp2815;
    org$pandalanguage$pandac$parser$Token$nullable label2817;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2818;
    org$pandalanguage$pandac$ASTNode* $tmp2820;
    org$pandalanguage$pandac$ASTNode* $tmp2821;
    panda$core$String* $tmp2823;
    org$pandalanguage$pandac$ASTNode* $tmp2826;
    org$pandalanguage$pandac$ASTNode* $tmp2827;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2811, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2813 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2811, &$s2812);
    start2810 = $tmp2813;
    if (((panda$core$Bit) { !start2810.nonnull }).value) {
    {
        $tmp2815 = NULL;
        $returnValue2814 = $tmp2815;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2815));
        return $returnValue2814;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2818, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2819 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2818);
    label2817 = $tmp2819;
    if (((panda$core$Bit) { label2817.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2822 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2824 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2817.value));
        $tmp2823 = $tmp2824;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2822, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2810.value).position, $tmp2823);
        $tmp2821 = $tmp2822;
        $tmp2820 = $tmp2821;
        $returnValue2814 = $tmp2820;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2820));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2821));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2823));
        return $returnValue2814;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2828 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2828, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2810.value).position, NULL);
    $tmp2827 = $tmp2828;
    $tmp2826 = $tmp2827;
    $returnValue2814 = $tmp2826;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2826));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2827));
    return $returnValue2814;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2830;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2831;
    org$pandalanguage$pandac$ASTNode* $returnValue2834;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    org$pandalanguage$pandac$parser$Token$Kind $match$1496_92837;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    org$pandalanguage$pandac$ASTNode* $tmp2849;
    panda$collections$Array* children2855 = NULL;
    panda$collections$Array* $tmp2856;
    panda$collections$Array* $tmp2857;
    org$pandalanguage$pandac$ASTNode* expr2859 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2860;
    org$pandalanguage$pandac$ASTNode* $tmp2861;
    org$pandalanguage$pandac$ASTNode* $tmp2863;
    org$pandalanguage$pandac$ASTNode* $tmp2866;
    org$pandalanguage$pandac$ASTNode* $tmp2867;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2831, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2833 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2831, &$s2832);
    start2830 = $tmp2833;
    if (((panda$core$Bit) { !start2830.nonnull }).value) {
    {
        $tmp2835 = NULL;
        $returnValue2834 = $tmp2835;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2835));
        return $returnValue2834;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2838 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1496_92837 = $tmp2838.kind;
        panda$core$Bit $tmp2841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1496_92837.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp2840 = $tmp2841.value;
        if ($tmp2840) goto $l2842;
        panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1496_92837.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp2840 = $tmp2843.value;
        $l2842:;
        panda$core$Bit $tmp2844 = { $tmp2840 };
        bool $tmp2839 = $tmp2844.value;
        if ($tmp2839) goto $l2845;
        panda$core$Bit $tmp2846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1496_92837.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp2839 = $tmp2846.value;
        $l2845:;
        panda$core$Bit $tmp2847 = { $tmp2839 };
        if ($tmp2847.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2850 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2850, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start2830.value).position, NULL);
            $tmp2849 = $tmp2850;
            $tmp2848 = $tmp2849;
            $returnValue2834 = $tmp2848;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2848));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2849));
            return $returnValue2834;
        }
        }
        else {
        {
            int $tmp2854;
            {
                panda$collections$Array* $tmp2858 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2858);
                $tmp2857 = $tmp2858;
                $tmp2856 = $tmp2857;
                children2855 = $tmp2856;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2857));
                org$pandalanguage$pandac$ASTNode* $tmp2862 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2861 = $tmp2862;
                $tmp2860 = $tmp2861;
                expr2859 = $tmp2860;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2861));
                if (((panda$core$Bit) { expr2859 == NULL }).value) {
                {
                    $tmp2863 = NULL;
                    $returnValue2834 = $tmp2863;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2863));
                    $tmp2854 = 0;
                    goto $l2852;
                    $l2864:;
                    return $returnValue2834;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children2855, ((panda$core$Object*) expr2859));
                org$pandalanguage$pandac$ASTNode* $tmp2868 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2868, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start2830.value).position, expr2859);
                $tmp2867 = $tmp2868;
                $tmp2866 = $tmp2867;
                $returnValue2834 = $tmp2866;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2866));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2867));
                $tmp2854 = 1;
                goto $l2852;
                $l2869:;
                return $returnValue2834;
            }
            $l2852:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2855));
            children2855 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2859));
            expr2859 = NULL;
            switch ($tmp2854) {
                case 0: goto $l2864;
                case 1: goto $l2869;
            }
            $l2871:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1514_92872;
    org$pandalanguage$pandac$ASTNode* $returnValue2875;
    org$pandalanguage$pandac$ASTNode* $tmp2876;
    org$pandalanguage$pandac$ASTNode* $tmp2877;
    org$pandalanguage$pandac$ASTNode* $tmp2881;
    org$pandalanguage$pandac$ASTNode* $tmp2882;
    org$pandalanguage$pandac$ASTNode* $tmp2886;
    org$pandalanguage$pandac$ASTNode* $tmp2887;
    {
        org$pandalanguage$pandac$parser$Token $tmp2873 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1514_92872 = $tmp2873.kind;
        panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1514_92872.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2874.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2878 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2877 = $tmp2878;
            $tmp2876 = $tmp2877;
            $returnValue2875 = $tmp2876;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2876));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2877));
            return $returnValue2875;
        }
        }
        else {
        panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1514_92872.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2880.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2883 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2882 = $tmp2883;
            $tmp2881 = $tmp2882;
            $returnValue2875 = $tmp2881;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2881));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2882));
            return $returnValue2875;
        }
        }
        else {
        panda$core$Bit $tmp2885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1514_92872.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2885.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2888 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2887 = $tmp2888;
            $tmp2886 = $tmp2887;
            $returnValue2875 = $tmp2886;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2886));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2887));
            return $returnValue2875;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1523_92890;
    org$pandalanguage$pandac$ASTNode* $returnValue2893;
    org$pandalanguage$pandac$ASTNode* $tmp2894;
    org$pandalanguage$pandac$ASTNode* $tmp2895;
    org$pandalanguage$pandac$ASTNode* $tmp2899;
    org$pandalanguage$pandac$ASTNode* $tmp2900;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    org$pandalanguage$pandac$ASTNode* $tmp2905;
    org$pandalanguage$pandac$ASTNode* $tmp2909;
    org$pandalanguage$pandac$ASTNode* $tmp2910;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2913;
    org$pandalanguage$pandac$ASTNode* $tmp2915;
    {
        org$pandalanguage$pandac$parser$Token $tmp2891 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1523_92890 = $tmp2891.kind;
        panda$core$Bit $tmp2892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1523_92890.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2892.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2896 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2895 = $tmp2896;
            $tmp2894 = $tmp2895;
            $returnValue2893 = $tmp2894;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2895));
            return $returnValue2893;
        }
        }
        else {
        panda$core$Bit $tmp2898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1523_92890.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2898.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2901 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2900 = $tmp2901;
            $tmp2899 = $tmp2900;
            $returnValue2893 = $tmp2899;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2899));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2900));
            return $returnValue2893;
        }
        }
        else {
        panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1523_92890.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2903.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2906 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2905 = $tmp2906;
            $tmp2904 = $tmp2905;
            $returnValue2893 = $tmp2904;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2905));
            return $returnValue2893;
        }
        }
        else {
        panda$core$Bit $tmp2908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1523_92890.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2908.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2911 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2910 = $tmp2911;
            $tmp2909 = $tmp2910;
            $returnValue2893 = $tmp2909;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2909));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2910));
            return $returnValue2893;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2913, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2913, &$s2914);
            $tmp2915 = NULL;
            $returnValue2893 = $tmp2915;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2915));
            return $returnValue2893;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1540_92917;
    org$pandalanguage$pandac$ASTNode* $returnValue2920;
    org$pandalanguage$pandac$ASTNode* $tmp2921;
    org$pandalanguage$pandac$ASTNode* $tmp2922;
    org$pandalanguage$pandac$ASTNode* $tmp2926;
    org$pandalanguage$pandac$ASTNode* $tmp2927;
    org$pandalanguage$pandac$ASTNode* $tmp2931;
    org$pandalanguage$pandac$ASTNode* $tmp2932;
    org$pandalanguage$pandac$ASTNode* $tmp2936;
    org$pandalanguage$pandac$ASTNode* $tmp2937;
    org$pandalanguage$pandac$ASTNode* $tmp2941;
    org$pandalanguage$pandac$ASTNode* $tmp2942;
    org$pandalanguage$pandac$ASTNode* $tmp2946;
    org$pandalanguage$pandac$ASTNode* $tmp2947;
    org$pandalanguage$pandac$ASTNode* $tmp2951;
    org$pandalanguage$pandac$ASTNode* $tmp2952;
    org$pandalanguage$pandac$ASTNode* $tmp2956;
    org$pandalanguage$pandac$ASTNode* $tmp2957;
    org$pandalanguage$pandac$parser$Token id2961;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2963;
    org$pandalanguage$pandac$ASTNode* $tmp2965;
    org$pandalanguage$pandac$ASTNode* $tmp2966;
    panda$core$String* $tmp2967;
    org$pandalanguage$pandac$ASTNode* $tmp2971;
    org$pandalanguage$pandac$ASTNode* $tmp2972;
    org$pandalanguage$pandac$ASTNode* $tmp2980;
    org$pandalanguage$pandac$ASTNode* $tmp2981;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    org$pandalanguage$pandac$ASTNode* $tmp2998;
    org$pandalanguage$pandac$ASTNode* $tmp3002;
    org$pandalanguage$pandac$ASTNode* $tmp3003;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3006;
    org$pandalanguage$pandac$ASTNode* $tmp3008;
    {
        org$pandalanguage$pandac$parser$Token $tmp2918 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1540_92917 = $tmp2918.kind;
        panda$core$Bit $tmp2919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2919.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2923 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2922 = $tmp2923;
            $tmp2921 = $tmp2922;
            $returnValue2920 = $tmp2921;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2922));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2925.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2928 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2927 = $tmp2928;
            $tmp2926 = $tmp2927;
            $returnValue2920 = $tmp2926;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2927));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2930.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2933 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2932 = $tmp2933;
            $tmp2931 = $tmp2932;
            $returnValue2920 = $tmp2931;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2932));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2935.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2938 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2937 = $tmp2938;
            $tmp2936 = $tmp2937;
            $returnValue2920 = $tmp2936;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2937));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2940.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2943 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2942 = $tmp2943;
            $tmp2941 = $tmp2942;
            $returnValue2920 = $tmp2941;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2941));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2942));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2945.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2948 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2947 = $tmp2948;
            $tmp2946 = $tmp2947;
            $returnValue2920 = $tmp2946;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2946));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2947));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2950.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2953 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2952 = $tmp2953;
            $tmp2951 = $tmp2952;
            $returnValue2920 = $tmp2951;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2951));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2952));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp2955.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2958 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2957 = $tmp2958;
            $tmp2956 = $tmp2957;
            $returnValue2920 = $tmp2956;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2956));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2960.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2962 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id2961 = $tmp2962;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2963, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2964 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2963);
            if (((panda$core$Bit) { $tmp2964.nonnull }).value) {
            {
                panda$core$String* $tmp2968 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id2961);
                $tmp2967 = $tmp2968;
                org$pandalanguage$pandac$ASTNode* $tmp2969 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2967);
                $tmp2966 = $tmp2969;
                $tmp2965 = $tmp2966;
                $returnValue2920 = $tmp2965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2967));
                return $returnValue2920;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id2961);
            org$pandalanguage$pandac$ASTNode* $tmp2973 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2972 = $tmp2973;
            $tmp2971 = $tmp2972;
            $returnValue2920 = $tmp2971;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2972));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp2975 = $tmp2976.value;
        if ($tmp2975) goto $l2977;
        panda$core$Bit $tmp2978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp2975 = $tmp2978.value;
        $l2977:;
        panda$core$Bit $tmp2979 = { $tmp2975 };
        if ($tmp2979.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2982 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2981 = $tmp2982;
            $tmp2980 = $tmp2981;
            $returnValue2920 = $tmp2980;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2980));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2981));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2986 = $tmp2987.value;
        if ($tmp2986) goto $l2988;
        panda$core$Bit $tmp2989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2986 = $tmp2989.value;
        $l2988:;
        panda$core$Bit $tmp2990 = { $tmp2986 };
        bool $tmp2985 = $tmp2990.value;
        if ($tmp2985) goto $l2991;
        panda$core$Bit $tmp2992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2985 = $tmp2992.value;
        $l2991:;
        panda$core$Bit $tmp2993 = { $tmp2985 };
        bool $tmp2984 = $tmp2993.value;
        if ($tmp2984) goto $l2994;
        panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2984 = $tmp2995.value;
        $l2994:;
        panda$core$Bit $tmp2996 = { $tmp2984 };
        if ($tmp2996.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2999 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2998 = $tmp2999;
            $tmp2997 = $tmp2998;
            $returnValue2920 = $tmp2997;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2997));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2998));
            return $returnValue2920;
        }
        }
        else {
        panda$core$Bit $tmp3001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1540_92917.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3001.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3004 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3003 = $tmp3004;
            $tmp3002 = $tmp3003;
            $returnValue2920 = $tmp3002;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3002));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3003));
            return $returnValue2920;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3006, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3006, &$s3007);
            $tmp3008 = NULL;
            $returnValue2920 = $tmp3008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3008));
            return $returnValue2920;
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
    org$pandalanguage$pandac$parser$Token$nullable start3013;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3014;
    org$pandalanguage$pandac$ASTNode* $returnValue3017;
    org$pandalanguage$pandac$ASTNode* $tmp3018;
    org$pandalanguage$pandac$parser$Token$nullable next3021;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3022;
    org$pandalanguage$pandac$ASTNode* $tmp3025;
    panda$core$MutableString* name3028 = NULL;
    panda$core$MutableString* $tmp3029;
    panda$core$MutableString* $tmp3030;
    panda$core$String* $tmp3032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3036;
    panda$core$Char8 $tmp3038;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3039;
    org$pandalanguage$pandac$ASTNode* $tmp3042;
    panda$core$String* $tmp3045;
    org$pandalanguage$pandac$ASTNode* $tmp3047;
    org$pandalanguage$pandac$ASTNode* $tmp3048;
    panda$core$String* $tmp3050;
    int $tmp3012;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3014, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3016 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3014, &$s3015);
        start3013 = $tmp3016;
        if (((panda$core$Bit) { !start3013.nonnull }).value) {
        {
            $tmp3018 = NULL;
            $returnValue3017 = $tmp3018;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3018));
            $tmp3012 = 0;
            goto $l3010;
            $l3019:;
            return $returnValue3017;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3022, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3024 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3022, &$s3023);
        next3021 = $tmp3024;
        if (((panda$core$Bit) { !next3021.nonnull }).value) {
        {
            $tmp3025 = NULL;
            $returnValue3017 = $tmp3025;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3025));
            $tmp3012 = 1;
            goto $l3010;
            $l3026:;
            return $returnValue3017;
        }
        }
        panda$core$MutableString* $tmp3031 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3033 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3021.value));
        $tmp3032 = $tmp3033;
        panda$core$MutableString$init$panda$core$String($tmp3031, $tmp3032);
        $tmp3030 = $tmp3031;
        $tmp3029 = $tmp3030;
        name3028 = $tmp3029;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3032));
        $l3034:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3036, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3037 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3036);
            next3021 = $tmp3037;
            if (((panda$core$Bit) { !next3021.nonnull }).value) {
            {
                goto $l3035;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3038, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3028, $tmp3038);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3039, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3041 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3039, &$s3040);
            next3021 = $tmp3041;
            if (((panda$core$Bit) { !next3021.nonnull }).value) {
            {
                $tmp3042 = NULL;
                $returnValue3017 = $tmp3042;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3042));
                $tmp3012 = 2;
                goto $l3010;
                $l3043:;
                return $returnValue3017;
            }
            }
            panda$core$String* $tmp3046 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3021.value));
            $tmp3045 = $tmp3046;
            panda$core$MutableString$append$panda$core$String(name3028, $tmp3045);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3045));
        }
        }
        $l3035:;
        org$pandalanguage$pandac$ASTNode* $tmp3049 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3051 = panda$core$MutableString$finish$R$panda$core$String(name3028);
        $tmp3050 = $tmp3051;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3049, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$parser$Token) start3013.value).position, $tmp3050);
        $tmp3048 = $tmp3049;
        $tmp3047 = $tmp3048;
        $returnValue3017 = $tmp3047;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3050));
        $tmp3012 = 3;
        goto $l3010;
        $l3052:;
        return $returnValue3017;
    }
    $l3010:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3028));
    name3028 = NULL;
    switch ($tmp3012) {
        case 1: goto $l3026;
        case 2: goto $l3043;
        case 3: goto $l3052;
        case 0: goto $l3019;
    }
    $l3054:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3058;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3059;
    org$pandalanguage$pandac$ASTNode* $returnValue3062;
    org$pandalanguage$pandac$ASTNode* $tmp3063;
    org$pandalanguage$pandac$parser$Token$nullable next3066;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3067;
    org$pandalanguage$pandac$ASTNode* $tmp3070;
    panda$core$MutableString* name3073 = NULL;
    panda$core$MutableString* $tmp3074;
    panda$core$MutableString* $tmp3075;
    panda$core$String* $tmp3077;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3081;
    panda$core$Char8 $tmp3083;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3084;
    org$pandalanguage$pandac$ASTNode* $tmp3087;
    panda$core$String* $tmp3090;
    org$pandalanguage$pandac$ASTNode* $tmp3092;
    org$pandalanguage$pandac$ASTNode* $tmp3093;
    panda$core$String* $tmp3095;
    int $tmp3057;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3059, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3061 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3059, &$s3060);
        start3058 = $tmp3061;
        if (((panda$core$Bit) { !start3058.nonnull }).value) {
        {
            $tmp3063 = NULL;
            $returnValue3062 = $tmp3063;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3063));
            $tmp3057 = 0;
            goto $l3055;
            $l3064:;
            return $returnValue3062;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3067, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3069 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3067, &$s3068);
        next3066 = $tmp3069;
        if (((panda$core$Bit) { !next3066.nonnull }).value) {
        {
            $tmp3070 = NULL;
            $returnValue3062 = $tmp3070;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3070));
            $tmp3057 = 1;
            goto $l3055;
            $l3071:;
            return $returnValue3062;
        }
        }
        panda$core$MutableString* $tmp3076 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3078 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3066.value));
        $tmp3077 = $tmp3078;
        panda$core$MutableString$init$panda$core$String($tmp3076, $tmp3077);
        $tmp3075 = $tmp3076;
        $tmp3074 = $tmp3075;
        name3073 = $tmp3074;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3077));
        $l3079:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3081, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3082 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3081);
            next3066 = $tmp3082;
            if (((panda$core$Bit) { !next3066.nonnull }).value) {
            {
                goto $l3080;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3083, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3073, $tmp3083);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3084, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3086 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3084, &$s3085);
            next3066 = $tmp3086;
            if (((panda$core$Bit) { !next3066.nonnull }).value) {
            {
                $tmp3087 = NULL;
                $returnValue3062 = $tmp3087;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3087));
                $tmp3057 = 2;
                goto $l3055;
                $l3088:;
                return $returnValue3062;
            }
            }
            panda$core$String* $tmp3091 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3066.value));
            $tmp3090 = $tmp3091;
            panda$core$MutableString$append$panda$core$String(name3073, $tmp3090);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3090));
        }
        }
        $l3080:;
        org$pandalanguage$pandac$ASTNode* $tmp3094 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3096 = panda$core$MutableString$finish$R$panda$core$String(name3073);
        $tmp3095 = $tmp3096;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3094, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start3058.value).position, $tmp3095);
        $tmp3093 = $tmp3094;
        $tmp3092 = $tmp3093;
        $returnValue3062 = $tmp3092;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3092));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3093));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3095));
        $tmp3057 = 3;
        goto $l3055;
        $l3097:;
        return $returnValue3062;
    }
    $l3055:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3073));
    name3073 = NULL;
    switch ($tmp3057) {
        case 3: goto $l3097;
        case 1: goto $l3071;
        case 2: goto $l3088;
        case 0: goto $l3064;
    }
    $l3099:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3103;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3104;
    panda$collections$ImmutableArray* $returnValue3107;
    panda$collections$ImmutableArray* $tmp3108;
    org$pandalanguage$pandac$parser$Token$nullable id3111;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3112;
    panda$collections$ImmutableArray* $tmp3115;
    panda$collections$Array* parameters3118 = NULL;
    panda$collections$Array* $tmp3119;
    panda$collections$Array* $tmp3120;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3122;
    org$pandalanguage$pandac$ASTNode* t3127 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3128;
    org$pandalanguage$pandac$ASTNode* $tmp3129;
    panda$collections$ImmutableArray* $tmp3131;
    org$pandalanguage$pandac$ASTNode* $tmp3135;
    panda$core$String* $tmp3137;
    org$pandalanguage$pandac$ASTNode* $tmp3140;
    panda$core$String* $tmp3142;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3147;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3149;
    panda$collections$ImmutableArray* $tmp3152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3155;
    org$pandalanguage$pandac$ASTNode* t3160 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3161;
    org$pandalanguage$pandac$ASTNode* $tmp3162;
    panda$collections$ImmutableArray* $tmp3164;
    org$pandalanguage$pandac$ASTNode* $tmp3168;
    panda$core$String* $tmp3170;
    org$pandalanguage$pandac$ASTNode* $tmp3173;
    panda$core$String* $tmp3175;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3177;
    panda$collections$ImmutableArray* $tmp3180;
    panda$collections$ImmutableArray* $tmp3183;
    panda$collections$ImmutableArray* $tmp3184;
    int $tmp3102;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3104, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3106 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3104, &$s3105);
        start3103 = $tmp3106;
        if (((panda$core$Bit) { !start3103.nonnull }).value) {
        {
            $tmp3108 = NULL;
            $returnValue3107 = $tmp3108;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3108));
            $tmp3102 = 0;
            goto $l3100;
            $l3109:;
            return $returnValue3107;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3112, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3114 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3112, &$s3113);
        id3111 = $tmp3114;
        if (((panda$core$Bit) { !id3111.nonnull }).value) {
        {
            $tmp3115 = NULL;
            $returnValue3107 = $tmp3115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3115));
            $tmp3102 = 1;
            goto $l3100;
            $l3116:;
            return $returnValue3107;
        }
        }
        panda$collections$Array* $tmp3121 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3121);
        $tmp3120 = $tmp3121;
        $tmp3119 = $tmp3120;
        parameters3118 = $tmp3119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3120));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3122, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3123 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3122);
        if (((panda$core$Bit) { $tmp3123.nonnull }).value) {
        {
            int $tmp3126;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3130 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3129 = $tmp3130;
                $tmp3128 = $tmp3129;
                t3127 = $tmp3128;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3129));
                if (((panda$core$Bit) { t3127 == NULL }).value) {
                {
                    $tmp3131 = NULL;
                    $returnValue3107 = $tmp3131;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3131));
                    $tmp3126 = 0;
                    goto $l3124;
                    $l3132:;
                    $tmp3102 = 2;
                    goto $l3100;
                    $l3133:;
                    return $returnValue3107;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3136 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3138 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3111.value));
                $tmp3137 = $tmp3138;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3136, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id3111.value).position, $tmp3137, t3127);
                $tmp3135 = $tmp3136;
                panda$collections$Array$add$panda$collections$Array$T(parameters3118, ((panda$core$Object*) $tmp3135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
            }
            $tmp3126 = -1;
            goto $l3124;
            $l3124:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3127));
            t3127 = NULL;
            switch ($tmp3126) {
                case -1: goto $l3139;
                case 0: goto $l3132;
            }
            $l3139:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3141 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3143 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3111.value));
            $tmp3142 = $tmp3143;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3141, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3111.value).position, $tmp3142);
            $tmp3140 = $tmp3141;
            panda$collections$Array$add$panda$collections$Array$T(parameters3118, ((panda$core$Object*) $tmp3140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3142));
        }
        }
        $l3144:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3147, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3148 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3147);
        bool $tmp3146 = ((panda$core$Bit) { $tmp3148.nonnull }).value;
        if (!$tmp3146) goto $l3145;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3149, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3151 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3149, &$s3150);
            id3111 = $tmp3151;
            if (((panda$core$Bit) { !id3111.nonnull }).value) {
            {
                $tmp3152 = NULL;
                $returnValue3107 = $tmp3152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3152));
                $tmp3102 = 3;
                goto $l3100;
                $l3153:;
                return $returnValue3107;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3155, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3156 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3155);
            if (((panda$core$Bit) { $tmp3156.nonnull }).value) {
            {
                int $tmp3159;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3163 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3162 = $tmp3163;
                    $tmp3161 = $tmp3162;
                    t3160 = $tmp3161;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3161));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3162));
                    if (((panda$core$Bit) { t3160 == NULL }).value) {
                    {
                        $tmp3164 = NULL;
                        $returnValue3107 = $tmp3164;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3164));
                        $tmp3159 = 0;
                        goto $l3157;
                        $l3165:;
                        $tmp3102 = 4;
                        goto $l3100;
                        $l3166:;
                        return $returnValue3107;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3169 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3171 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3111.value));
                    $tmp3170 = $tmp3171;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3169, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id3111.value).position, $tmp3170, t3160);
                    $tmp3168 = $tmp3169;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3118, ((panda$core$Object*) $tmp3168));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3168));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3170));
                }
                $tmp3159 = -1;
                goto $l3157;
                $l3157:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3160));
                t3160 = NULL;
                switch ($tmp3159) {
                    case 0: goto $l3165;
                    case -1: goto $l3172;
                }
                $l3172:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3176 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3111.value));
                $tmp3175 = $tmp3176;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3174, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3111.value).position, $tmp3175);
                $tmp3173 = $tmp3174;
                panda$collections$Array$add$panda$collections$Array$T(parameters3118, ((panda$core$Object*) $tmp3173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3175));
            }
            }
        }
        goto $l3144;
        $l3145:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3177, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3179 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3177, &$s3178);
        if (((panda$core$Bit) { !$tmp3179.nonnull }).value) {
        {
            $tmp3180 = NULL;
            $returnValue3107 = $tmp3180;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3180));
            $tmp3102 = 5;
            goto $l3100;
            $l3181:;
            return $returnValue3107;
        }
        }
        panda$collections$ImmutableArray* $tmp3185 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3118);
        $tmp3184 = $tmp3185;
        $tmp3183 = $tmp3184;
        $returnValue3107 = $tmp3183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3184));
        $tmp3102 = 6;
        goto $l3100;
        $l3186:;
        return $returnValue3107;
    }
    $l3100:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3118));
    parameters3118 = NULL;
    switch ($tmp3102) {
        case 4: goto $l3166;
        case 2: goto $l3133;
        case 1: goto $l3116;
        case 5: goto $l3181;
        case 0: goto $l3109;
        case 6: goto $l3186;
        case 3: goto $l3153;
    }
    $l3188:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3192;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3193;
    panda$collections$ImmutableArray* $returnValue3196;
    panda$collections$ImmutableArray* $tmp3197;
    panda$collections$Array* result3200 = NULL;
    panda$collections$Array* $tmp3201;
    panda$collections$Array* $tmp3202;
    org$pandalanguage$pandac$ASTNode* t3204 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3205;
    org$pandalanguage$pandac$ASTNode* $tmp3206;
    panda$collections$ImmutableArray* $tmp3208;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3214;
    org$pandalanguage$pandac$ASTNode* $tmp3216;
    org$pandalanguage$pandac$ASTNode* $tmp3217;
    org$pandalanguage$pandac$ASTNode* $tmp3218;
    panda$collections$ImmutableArray* $tmp3220;
    panda$collections$ImmutableArray* $tmp3223;
    panda$collections$ImmutableArray* $tmp3224;
    int $tmp3191;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3193, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3193, &$s3194);
        start3192 = $tmp3195;
        if (((panda$core$Bit) { !start3192.nonnull }).value) {
        {
            $tmp3197 = NULL;
            $returnValue3196 = $tmp3197;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3197));
            $tmp3191 = 0;
            goto $l3189;
            $l3198:;
            return $returnValue3196;
        }
        }
        panda$collections$Array* $tmp3203 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3203);
        $tmp3202 = $tmp3203;
        $tmp3201 = $tmp3202;
        result3200 = $tmp3201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3202));
        org$pandalanguage$pandac$ASTNode* $tmp3207 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3206 = $tmp3207;
        $tmp3205 = $tmp3206;
        t3204 = $tmp3205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3206));
        if (((panda$core$Bit) { t3204 == NULL }).value) {
        {
            $tmp3208 = NULL;
            $returnValue3196 = $tmp3208;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3208));
            $tmp3191 = 1;
            goto $l3189;
            $l3209:;
            return $returnValue3196;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3200, ((panda$core$Object*) t3204));
        $l3211:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3214, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3215 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3214);
        bool $tmp3213 = ((panda$core$Bit) { $tmp3215.nonnull }).value;
        if (!$tmp3213) goto $l3212;
        {
            {
                $tmp3216 = t3204;
                org$pandalanguage$pandac$ASTNode* $tmp3219 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3218 = $tmp3219;
                $tmp3217 = $tmp3218;
                t3204 = $tmp3217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3216));
            }
            if (((panda$core$Bit) { t3204 == NULL }).value) {
            {
                $tmp3220 = NULL;
                $returnValue3196 = $tmp3220;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
                $tmp3191 = 2;
                goto $l3189;
                $l3221:;
                return $returnValue3196;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3200, ((panda$core$Object*) t3204));
        }
        goto $l3211;
        $l3212:;
        panda$collections$ImmutableArray* $tmp3225 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3200);
        $tmp3224 = $tmp3225;
        $tmp3223 = $tmp3224;
        $returnValue3196 = $tmp3223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
        $tmp3191 = 3;
        goto $l3189;
        $l3226:;
        return $returnValue3196;
    }
    $l3189:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3200));
    result3200 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3204));
    t3204 = NULL;
    switch ($tmp3191) {
        case 1: goto $l3209;
        case 2: goto $l3221;
        case 3: goto $l3226;
        case 0: goto $l3198;
    }
    $l3228:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3232;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3233;
    org$pandalanguage$pandac$ASTNode* expr3236 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3237;
    org$pandalanguage$pandac$ASTNode* $tmp3239;
    org$pandalanguage$pandac$ASTNode* $tmp3240;
    org$pandalanguage$pandac$ASTNode* $tmp3241;
    org$pandalanguage$pandac$ASTNode* $returnValue3243;
    org$pandalanguage$pandac$ASTNode* $tmp3244;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3247;
    org$pandalanguage$pandac$ASTNode* $tmp3249;
    org$pandalanguage$pandac$ASTNode* $tmp3250;
    panda$core$String* $tmp3252;
    int $tmp3231;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3233, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3235 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3233, &$s3234);
        a3232 = $tmp3235;
        memset(&expr3236, 0, sizeof(expr3236));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3237, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3238 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3237);
        if (((panda$core$Bit) { $tmp3238.nonnull }).value) {
        {
            {
                $tmp3239 = expr3236;
                org$pandalanguage$pandac$ASTNode* $tmp3242 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3241 = $tmp3242;
                $tmp3240 = $tmp3241;
                expr3236 = $tmp3240;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3240));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3239));
            }
            if (((panda$core$Bit) { expr3236 == NULL }).value) {
            {
                $tmp3244 = NULL;
                $returnValue3243 = $tmp3244;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3244));
                $tmp3231 = 0;
                goto $l3229;
                $l3245:;
                return $returnValue3243;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3247, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3247, &$s3248);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3251 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3253 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3232.value));
        $tmp3252 = $tmp3253;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3251, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3232.value).position, $tmp3252, expr3236);
        $tmp3250 = $tmp3251;
        $tmp3249 = $tmp3250;
        $returnValue3243 = $tmp3249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3250));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3252));
        $tmp3231 = 1;
        goto $l3229;
        $l3254:;
        return $returnValue3243;
    }
    $l3229:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3236));
    switch ($tmp3231) {
        case 1: goto $l3254;
        case 0: goto $l3245;
    }
    $l3256:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3260 = NULL;
    panda$collections$Array* $tmp3261;
    panda$collections$Array* $tmp3262;
    org$pandalanguage$pandac$ASTNode* a3272 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3273;
    org$pandalanguage$pandac$ASTNode* $tmp3274;
    panda$collections$ImmutableArray* $returnValue3278;
    panda$collections$ImmutableArray* $tmp3279;
    panda$collections$ImmutableArray* $tmp3280;
    int $tmp3259;
    {
        panda$collections$Array* $tmp3263 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3263);
        $tmp3262 = $tmp3263;
        $tmp3261 = $tmp3262;
        result3260 = $tmp3261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3262));
        $l3264:;
        org$pandalanguage$pandac$parser$Token $tmp3267 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3267.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3266 = $tmp3268.value;
        if (!$tmp3266) goto $l3265;
        {
            int $tmp3271;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3275 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3274 = $tmp3275;
                $tmp3273 = $tmp3274;
                a3272 = $tmp3273;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3274));
                if (((panda$core$Bit) { a3272 == NULL }).value) {
                {
                    $tmp3271 = 0;
                    goto $l3269;
                    $l3276:;
                    goto $l3265;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3260, ((panda$core$Object*) a3272));
            }
            $tmp3271 = -1;
            goto $l3269;
            $l3269:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3272));
            a3272 = NULL;
            switch ($tmp3271) {
                case 0: goto $l3276;
                case -1: goto $l3277;
            }
            $l3277:;
        }
        goto $l3264;
        $l3265:;
        panda$collections$ImmutableArray* $tmp3281 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3260);
        $tmp3280 = $tmp3281;
        $tmp3279 = $tmp3280;
        $returnValue3278 = $tmp3279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3280));
        $tmp3259 = 0;
        goto $l3257;
        $l3282:;
        return $returnValue3278;
    }
    $l3257:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3260));
    result3260 = NULL;
    switch ($tmp3259) {
        case 0: goto $l3282;
    }
    $l3284:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3288;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3289;
    org$pandalanguage$pandac$ASTNode* $returnValue3292;
    org$pandalanguage$pandac$ASTNode* $tmp3293;
    panda$core$MutableString* result3296 = NULL;
    panda$core$MutableString* $tmp3297;
    panda$core$MutableString* $tmp3298;
    org$pandalanguage$pandac$parser$Token next3302;
    org$pandalanguage$pandac$ASTNode* $tmp3307;
    panda$core$String* $tmp3310;
    org$pandalanguage$pandac$ASTNode* $tmp3312;
    org$pandalanguage$pandac$ASTNode* $tmp3313;
    panda$core$String* $tmp3315;
    int $tmp3287;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3289, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3291 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3289, &$s3290);
        start3288 = $tmp3291;
        if (((panda$core$Bit) { !start3288.nonnull }).value) {
        {
            $tmp3293 = NULL;
            $returnValue3292 = $tmp3293;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3293));
            $tmp3287 = 0;
            goto $l3285;
            $l3294:;
            return $returnValue3292;
        }
        }
        panda$core$MutableString* $tmp3299 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3299);
        $tmp3298 = $tmp3299;
        $tmp3297 = $tmp3298;
        result3296 = $tmp3297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3298));
        $l3300:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3303 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3302 = $tmp3303;
            panda$core$Bit $tmp3304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3302.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3304.value) {
            {
                goto $l3301;
            }
            }
            panda$core$Bit $tmp3305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3302.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3305.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3288.value), &$s3306);
                $tmp3307 = NULL;
                $returnValue3292 = $tmp3307;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3307));
                $tmp3287 = 1;
                goto $l3285;
                $l3308:;
                return $returnValue3292;
            }
            }
            panda$core$String* $tmp3311 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3302);
            $tmp3310 = $tmp3311;
            panda$core$MutableString$append$panda$core$String(result3296, $tmp3310);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
        }
        }
        $l3301:;
        org$pandalanguage$pandac$ASTNode* $tmp3314 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3316 = panda$core$MutableString$finish$R$panda$core$String(result3296);
        $tmp3315 = $tmp3316;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3314, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start3288.value).position, $tmp3315);
        $tmp3313 = $tmp3314;
        $tmp3312 = $tmp3313;
        $returnValue3292 = $tmp3312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3315));
        $tmp3287 = 2;
        goto $l3285;
        $l3317:;
        return $returnValue3292;
    }
    $l3285:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3296));
    result3296 = NULL;
    switch ($tmp3287) {
        case 1: goto $l3308;
        case 2: goto $l3317;
        case 0: goto $l3294;
    }
    $l3319:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3323;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3324;
    org$pandalanguage$pandac$ASTNode* $returnValue3327;
    org$pandalanguage$pandac$ASTNode* $tmp3328;
    org$pandalanguage$pandac$ASTNode* t3331 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3332;
    org$pandalanguage$pandac$ASTNode* $tmp3333;
    org$pandalanguage$pandac$ASTNode* $tmp3335;
    org$pandalanguage$pandac$ASTNode* $tmp3338;
    org$pandalanguage$pandac$ASTNode* $tmp3339;
    panda$core$String* $tmp3341;
    int $tmp3322;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3324, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3326 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3324, &$s3325);
        id3323 = $tmp3326;
        if (((panda$core$Bit) { !id3323.nonnull }).value) {
        {
            $tmp3328 = NULL;
            $returnValue3327 = $tmp3328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
            $tmp3322 = 0;
            goto $l3320;
            $l3329:;
            return $returnValue3327;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3334 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3333 = $tmp3334;
        $tmp3332 = $tmp3333;
        t3331 = $tmp3332;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3333));
        if (((panda$core$Bit) { t3331 == NULL }).value) {
        {
            $tmp3335 = NULL;
            $returnValue3327 = $tmp3335;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
            $tmp3322 = 1;
            goto $l3320;
            $l3336:;
            return $returnValue3327;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3340 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3342 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3323.value));
        $tmp3341 = $tmp3342;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3340, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) id3323.value).position, $tmp3341, t3331);
        $tmp3339 = $tmp3340;
        $tmp3338 = $tmp3339;
        $returnValue3327 = $tmp3338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3341));
        $tmp3322 = 2;
        goto $l3320;
        $l3343:;
        return $returnValue3327;
    }
    $l3320:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3331));
    t3331 = NULL;
    switch ($tmp3322) {
        case 1: goto $l3336;
        case 2: goto $l3343;
        case 0: goto $l3329;
    }
    $l3345:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3349;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3350;
    panda$collections$ImmutableArray* $returnValue3353;
    panda$collections$ImmutableArray* $tmp3354;
    panda$collections$Array* result3357 = NULL;
    panda$collections$Array* $tmp3358;
    panda$collections$Array* $tmp3359;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3361;
    org$pandalanguage$pandac$ASTNode* param3366 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3367;
    org$pandalanguage$pandac$ASTNode* $tmp3368;
    panda$collections$ImmutableArray* $tmp3370;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3377;
    org$pandalanguage$pandac$ASTNode* $tmp3379;
    org$pandalanguage$pandac$ASTNode* $tmp3380;
    org$pandalanguage$pandac$ASTNode* $tmp3381;
    panda$collections$ImmutableArray* $tmp3383;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3387;
    panda$collections$ImmutableArray* $tmp3390;
    panda$collections$ImmutableArray* $tmp3395;
    panda$collections$ImmutableArray* $tmp3396;
    int $tmp3348;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3350, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3352 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3350, &$s3351);
        start3349 = $tmp3352;
        if (((panda$core$Bit) { !start3349.nonnull }).value) {
        {
            $tmp3354 = NULL;
            $returnValue3353 = $tmp3354;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3354));
            $tmp3348 = 0;
            goto $l3346;
            $l3355:;
            return $returnValue3353;
        }
        }
        panda$collections$Array* $tmp3360 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3360);
        $tmp3359 = $tmp3360;
        $tmp3358 = $tmp3359;
        result3357 = $tmp3358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3359));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3361, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3362 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3361);
        if (((panda$core$Bit) { !$tmp3362.nonnull }).value) {
        {
            int $tmp3365;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3369 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3368 = $tmp3369;
                $tmp3367 = $tmp3368;
                param3366 = $tmp3367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3368));
                if (((panda$core$Bit) { param3366 == NULL }).value) {
                {
                    $tmp3370 = NULL;
                    $returnValue3353 = $tmp3370;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3370));
                    $tmp3365 = 0;
                    goto $l3363;
                    $l3371:;
                    $tmp3348 = 1;
                    goto $l3346;
                    $l3372:;
                    return $returnValue3353;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3357, ((panda$core$Object*) param3366));
                $l3374:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3377, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3378 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3377);
                bool $tmp3376 = ((panda$core$Bit) { $tmp3378.nonnull }).value;
                if (!$tmp3376) goto $l3375;
                {
                    {
                        $tmp3379 = param3366;
                        org$pandalanguage$pandac$ASTNode* $tmp3382 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3381 = $tmp3382;
                        $tmp3380 = $tmp3381;
                        param3366 = $tmp3380;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3380));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3381));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3379));
                    }
                    if (((panda$core$Bit) { param3366 == NULL }).value) {
                    {
                        $tmp3383 = NULL;
                        $returnValue3353 = $tmp3383;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3383));
                        $tmp3365 = 1;
                        goto $l3363;
                        $l3384:;
                        $tmp3348 = 2;
                        goto $l3346;
                        $l3385:;
                        return $returnValue3353;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3357, ((panda$core$Object*) param3366));
                }
                goto $l3374;
                $l3375:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3387, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3389 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3387, &$s3388);
                if (((panda$core$Bit) { !$tmp3389.nonnull }).value) {
                {
                    $tmp3390 = NULL;
                    $returnValue3353 = $tmp3390;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3390));
                    $tmp3365 = 2;
                    goto $l3363;
                    $l3391:;
                    $tmp3348 = 3;
                    goto $l3346;
                    $l3392:;
                    return $returnValue3353;
                }
                }
            }
            $tmp3365 = -1;
            goto $l3363;
            $l3363:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3366));
            param3366 = NULL;
            switch ($tmp3365) {
                case 2: goto $l3391;
                case 0: goto $l3371;
                case 1: goto $l3384;
                case -1: goto $l3394;
            }
            $l3394:;
        }
        }
        panda$collections$ImmutableArray* $tmp3397 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3357);
        $tmp3396 = $tmp3397;
        $tmp3395 = $tmp3396;
        $returnValue3353 = $tmp3395;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3395));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3396));
        $tmp3348 = 4;
        goto $l3346;
        $l3398:;
        return $returnValue3353;
    }
    $l3346:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3357));
    result3357 = NULL;
    switch ($tmp3348) {
        case 2: goto $l3385;
        case 4: goto $l3398;
        case 0: goto $l3355;
        case 3: goto $l3392;
        case 1: goto $l3372;
    }
    $l3400:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue3401;
    org$pandalanguage$pandac$ASTNode* $tmp3402;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    $tmp3402 = NULL;
    $returnValue3401 = $tmp3402;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3402));
    return $returnValue3401;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3407;
    org$pandalanguage$pandac$parser$Token$nullable start3408;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3409;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3411;
    org$pandalanguage$pandac$ASTNode* $returnValue3414;
    org$pandalanguage$pandac$ASTNode* $tmp3415;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3418;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3419;
    panda$core$String* name3420 = NULL;
    panda$core$String* $tmp3421;
    panda$core$String* $tmp3422;
    org$pandalanguage$pandac$ASTNode* $tmp3424;
    panda$collections$ImmutableArray* params3427 = NULL;
    panda$collections$ImmutableArray* $tmp3428;
    panda$collections$ImmutableArray* $tmp3429;
    org$pandalanguage$pandac$ASTNode* $tmp3431;
    org$pandalanguage$pandac$ASTNode* returnType3434 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3437;
    org$pandalanguage$pandac$ASTNode* $tmp3438;
    org$pandalanguage$pandac$ASTNode* $tmp3439;
    org$pandalanguage$pandac$ASTNode* $tmp3441;
    org$pandalanguage$pandac$ASTNode* $tmp3444;
    org$pandalanguage$pandac$ASTNode* $tmp3445;
    panda$collections$ImmutableArray* body3446 = NULL;
    panda$collections$ImmutableArray* $tmp3449;
    panda$collections$ImmutableArray* $tmp3450;
    panda$collections$ImmutableArray* $tmp3451;
    org$pandalanguage$pandac$ASTNode* $tmp3453;
    panda$collections$ImmutableArray* $tmp3456;
    panda$collections$ImmutableArray* $tmp3457;
    org$pandalanguage$pandac$parser$Token token3458;
    panda$core$String* tokenText3460 = NULL;
    panda$core$String* $tmp3461;
    panda$core$String* $tmp3462;
    org$pandalanguage$pandac$ASTNode* post3478 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3479;
    org$pandalanguage$pandac$ASTNode* $tmp3480;
    org$pandalanguage$pandac$ASTNode* $tmp3482;
    org$pandalanguage$pandac$ASTNode* $tmp3487;
    org$pandalanguage$pandac$ASTNode* $tmp3488;
    int $tmp3406;
    {
        memset(&kind3407, 0, sizeof(kind3407));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3409, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3410 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3409);
        start3408 = $tmp3410;
        if (((panda$core$Bit) { !start3408.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3411, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3413 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3411, &$s3412);
            start3408 = $tmp3413;
            if (((panda$core$Bit) { !start3408.nonnull }).value) {
            {
                $tmp3415 = NULL;
                $returnValue3414 = $tmp3415;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3415));
                $tmp3406 = 0;
                goto $l3404;
                $l3416:;
                return $returnValue3414;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3418, ((panda$core$Int64) { 0 }));
            kind3407 = $tmp3418;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3419, ((panda$core$Int64) { 1 }));
            kind3407 = $tmp3419;
        }
        }
        panda$core$String* $tmp3423 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3422 = $tmp3423;
        $tmp3421 = $tmp3422;
        name3420 = $tmp3421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3422));
        if (((panda$core$Bit) { name3420 == NULL }).value) {
        {
            $tmp3424 = NULL;
            $returnValue3414 = $tmp3424;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3424));
            $tmp3406 = 1;
            goto $l3404;
            $l3425:;
            return $returnValue3414;
        }
        }
        panda$collections$ImmutableArray* $tmp3430 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3429 = $tmp3430;
        $tmp3428 = $tmp3429;
        params3427 = $tmp3428;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3429));
        if (((panda$core$Bit) { params3427 == NULL }).value) {
        {
            $tmp3431 = NULL;
            $returnValue3414 = $tmp3431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3431));
            $tmp3406 = 2;
            goto $l3404;
            $l3432:;
            return $returnValue3414;
        }
        }
        memset(&returnType3434, 0, sizeof(returnType3434));
        org$pandalanguage$pandac$parser$Token $tmp3435 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3435.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3436.value) {
        {
            {
                $tmp3437 = returnType3434;
                org$pandalanguage$pandac$ASTNode* $tmp3440 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3439 = $tmp3440;
                $tmp3438 = $tmp3439;
                returnType3434 = $tmp3438;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3437));
            }
            if (((panda$core$Bit) { returnType3434 == NULL }).value) {
            {
                $tmp3441 = NULL;
                $returnValue3414 = $tmp3441;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3441));
                $tmp3406 = 3;
                goto $l3404;
                $l3442:;
                return $returnValue3414;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3444 = returnType3434;
                $tmp3445 = NULL;
                returnType3434 = $tmp3445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3445));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3444));
            }
        }
        }
        memset(&body3446, 0, sizeof(body3446));
        org$pandalanguage$pandac$parser$Token $tmp3447 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3447.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3448.value) {
        {
            {
                $tmp3449 = body3446;
                panda$collections$ImmutableArray* $tmp3452 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3451 = $tmp3452;
                $tmp3450 = $tmp3451;
                body3446 = $tmp3450;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3449));
            }
            if (((panda$core$Bit) { body3446 == NULL }).value) {
            {
                $tmp3453 = NULL;
                $returnValue3414 = $tmp3453;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3453));
                $tmp3406 = 4;
                goto $l3404;
                $l3454:;
                return $returnValue3414;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3456 = body3446;
                $tmp3457 = NULL;
                body3446 = $tmp3457;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3457));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3456));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3459 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3458 = $tmp3459;
        panda$core$String* $tmp3463 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3458);
        $tmp3462 = $tmp3463;
        $tmp3461 = $tmp3462;
        tokenText3460 = $tmp3461;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3461));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3462));
        panda$core$Bit $tmp3465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3458.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3464 = $tmp3465.value;
        if (!$tmp3464) goto $l3466;
        panda$core$Bit $tmp3469 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3460, &$s3468);
        bool $tmp3467 = $tmp3469.value;
        if ($tmp3467) goto $l3470;
        panda$core$Bit $tmp3472 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3460, &$s3471);
        $tmp3467 = $tmp3472.value;
        $l3470:;
        panda$core$Bit $tmp3473 = { $tmp3467 };
        $tmp3464 = $tmp3473.value;
        $l3466:;
        panda$core$Bit $tmp3474 = { $tmp3464 };
        if ($tmp3474.value) {
        {
            int $tmp3477;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3481 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3480 = $tmp3481;
                $tmp3479 = $tmp3480;
                post3478 = $tmp3479;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3479));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3480));
                if (((panda$core$Bit) { post3478 == NULL }).value) {
                {
                    $tmp3482 = NULL;
                    $returnValue3414 = $tmp3482;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3482));
                    $tmp3477 = 0;
                    goto $l3475;
                    $l3483:;
                    $tmp3406 = 5;
                    goto $l3404;
                    $l3484:;
                    return $returnValue3414;
                }
                }
            }
            $tmp3477 = -1;
            goto $l3475;
            $l3475:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3478));
            post3478 = NULL;
            switch ($tmp3477) {
                case 0: goto $l3483;
                case -1: goto $l3486;
            }
            $l3486:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3489 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3489, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3408.value).position, p_doccomment, p_annotations, kind3407, name3420, params3427, returnType3434, body3446);
        $tmp3488 = $tmp3489;
        $tmp3487 = $tmp3488;
        $returnValue3414 = $tmp3487;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3487));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3488));
        $tmp3406 = 6;
        goto $l3404;
        $l3490:;
        return $returnValue3414;
    }
    $l3404:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3420));
    name3420 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3427));
    params3427 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3446));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3460));
    tokenText3460 = NULL;
    switch ($tmp3406) {
        case 5: goto $l3484;
        case 2: goto $l3432;
        case 4: goto $l3454;
        case 6: goto $l3490;
        case 0: goto $l3416;
        case 1: goto $l3425;
        case 3: goto $l3442;
    }
    $l3492:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3496;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3497;
    org$pandalanguage$pandac$ASTNode* $returnValue3500;
    org$pandalanguage$pandac$ASTNode* $tmp3501;
    panda$collections$ImmutableArray* params3504 = NULL;
    panda$collections$ImmutableArray* $tmp3505;
    panda$collections$ImmutableArray* $tmp3506;
    org$pandalanguage$pandac$ASTNode* $tmp3508;
    panda$collections$ImmutableArray* b3511 = NULL;
    panda$collections$ImmutableArray* $tmp3512;
    panda$collections$ImmutableArray* $tmp3513;
    org$pandalanguage$pandac$ASTNode* $tmp3515;
    org$pandalanguage$pandac$parser$Token token3518;
    panda$core$String* tokenText3520 = NULL;
    panda$core$String* $tmp3521;
    panda$core$String* $tmp3522;
    org$pandalanguage$pandac$ASTNode* post3538 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3539;
    org$pandalanguage$pandac$ASTNode* $tmp3540;
    org$pandalanguage$pandac$ASTNode* $tmp3542;
    org$pandalanguage$pandac$ASTNode* $tmp3547;
    org$pandalanguage$pandac$ASTNode* $tmp3548;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3550;
    int $tmp3495;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3497, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3499 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3497, &$s3498);
        start3496 = $tmp3499;
        if (((panda$core$Bit) { !start3496.nonnull }).value) {
        {
            $tmp3501 = NULL;
            $returnValue3500 = $tmp3501;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3501));
            $tmp3495 = 0;
            goto $l3493;
            $l3502:;
            return $returnValue3500;
        }
        }
        panda$collections$ImmutableArray* $tmp3507 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3506 = $tmp3507;
        $tmp3505 = $tmp3506;
        params3504 = $tmp3505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3506));
        if (((panda$core$Bit) { params3504 == NULL }).value) {
        {
            $tmp3508 = NULL;
            $returnValue3500 = $tmp3508;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3508));
            $tmp3495 = 1;
            goto $l3493;
            $l3509:;
            return $returnValue3500;
        }
        }
        panda$collections$ImmutableArray* $tmp3514 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3513 = $tmp3514;
        $tmp3512 = $tmp3513;
        b3511 = $tmp3512;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3513));
        if (((panda$core$Bit) { b3511 == NULL }).value) {
        {
            $tmp3515 = NULL;
            $returnValue3500 = $tmp3515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3515));
            $tmp3495 = 2;
            goto $l3493;
            $l3516:;
            return $returnValue3500;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3519 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3518 = $tmp3519;
        panda$core$String* $tmp3523 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3518);
        $tmp3522 = $tmp3523;
        $tmp3521 = $tmp3522;
        tokenText3520 = $tmp3521;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3521));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3522));
        panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3518.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3524 = $tmp3525.value;
        if (!$tmp3524) goto $l3526;
        panda$core$Bit $tmp3529 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3520, &$s3528);
        bool $tmp3527 = $tmp3529.value;
        if ($tmp3527) goto $l3530;
        panda$core$Bit $tmp3532 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3520, &$s3531);
        $tmp3527 = $tmp3532.value;
        $l3530:;
        panda$core$Bit $tmp3533 = { $tmp3527 };
        $tmp3524 = $tmp3533.value;
        $l3526:;
        panda$core$Bit $tmp3534 = { $tmp3524 };
        if ($tmp3534.value) {
        {
            int $tmp3537;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3541 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3540 = $tmp3541;
                $tmp3539 = $tmp3540;
                post3538 = $tmp3539;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3539));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3540));
                if (((panda$core$Bit) { post3538 == NULL }).value) {
                {
                    $tmp3542 = NULL;
                    $returnValue3500 = $tmp3542;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3542));
                    $tmp3537 = 0;
                    goto $l3535;
                    $l3543:;
                    $tmp3495 = 3;
                    goto $l3493;
                    $l3544:;
                    return $returnValue3500;
                }
                }
            }
            $tmp3537 = -1;
            goto $l3535;
            $l3535:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3538));
            post3538 = NULL;
            switch ($tmp3537) {
                case 0: goto $l3543;
                case -1: goto $l3546;
            }
            $l3546:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3549 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3550, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3549, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3496.value).position, p_doccomment, p_annotations, $tmp3550, &$s3551, params3504, NULL, b3511);
        $tmp3548 = $tmp3549;
        $tmp3547 = $tmp3548;
        $returnValue3500 = $tmp3547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3548));
        $tmp3495 = 4;
        goto $l3493;
        $l3552:;
        return $returnValue3500;
    }
    $l3493:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3504));
    params3504 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b3511));
    b3511 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3520));
    tokenText3520 = NULL;
    switch ($tmp3495) {
        case 2: goto $l3516;
        case 3: goto $l3544;
        case 4: goto $l3552;
        case 0: goto $l3502;
        case 1: goto $l3509;
    }
    $l3554:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl3558 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3559;
    org$pandalanguage$pandac$ASTNode* $tmp3560;
    org$pandalanguage$pandac$ASTNode* $returnValue3562;
    org$pandalanguage$pandac$ASTNode* $tmp3563;
    org$pandalanguage$pandac$ASTNode* $tmp3566;
    org$pandalanguage$pandac$ASTNode* $tmp3567;
    int $tmp3557;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3561 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3560 = $tmp3561;
        $tmp3559 = $tmp3560;
        decl3558 = $tmp3559;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3559));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3560));
        if (((panda$core$Bit) { decl3558 == NULL }).value) {
        {
            $tmp3563 = NULL;
            $returnValue3562 = $tmp3563;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3563));
            $tmp3557 = 0;
            goto $l3555;
            $l3564:;
            return $returnValue3562;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3568 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3570 = (($fn3569) decl3558->$class->vtable[2])(decl3558);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3568, ((panda$core$Int64) { 16 }), $tmp3570, p_doccomment, p_annotations, decl3558);
        $tmp3567 = $tmp3568;
        $tmp3566 = $tmp3567;
        $returnValue3562 = $tmp3566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3567));
        $tmp3557 = 1;
        goto $l3555;
        $l3571:;
        return $returnValue3562;
    }
    $l3555:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3558));
    decl3558 = NULL;
    switch ($tmp3557) {
        case 1: goto $l3571;
        case 0: goto $l3564;
    }
    $l3573:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name3577;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3578;
    org$pandalanguage$pandac$ASTNode* $returnValue3581;
    org$pandalanguage$pandac$ASTNode* $tmp3582;
    panda$collections$Array* fields3585 = NULL;
    panda$collections$Array* $tmp3586;
    panda$collections$Array* $tmp3587;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3589;
    org$pandalanguage$pandac$ASTNode* field3596 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    org$pandalanguage$pandac$ASTNode* $tmp3598;
    org$pandalanguage$pandac$ASTNode* $tmp3600;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3607;
    org$pandalanguage$pandac$ASTNode* $tmp3609;
    org$pandalanguage$pandac$ASTNode* $tmp3610;
    org$pandalanguage$pandac$ASTNode* $tmp3611;
    org$pandalanguage$pandac$ASTNode* $tmp3613;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3618;
    org$pandalanguage$pandac$ASTNode* $tmp3621;
    org$pandalanguage$pandac$ASTNode* $tmp3624;
    org$pandalanguage$pandac$ASTNode* $tmp3625;
    panda$core$String* $tmp3627;
    panda$collections$ImmutableArray* $tmp3629;
    int $tmp3576;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3578, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3580 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3578, &$s3579);
        name3577 = $tmp3580;
        if (((panda$core$Bit) { !name3577.nonnull }).value) {
        {
            $tmp3582 = NULL;
            $returnValue3581 = $tmp3582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3582));
            $tmp3576 = 0;
            goto $l3574;
            $l3583:;
            return $returnValue3581;
        }
        }
        panda$collections$Array* $tmp3588 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3588);
        $tmp3587 = $tmp3588;
        $tmp3586 = $tmp3587;
        fields3585 = $tmp3586;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3586));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3587));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3589, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3590 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3589);
        if (((panda$core$Bit) { $tmp3590.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3591 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp3592 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3591.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp3592.value) {
            {
                int $tmp3595;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3599 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3598 = $tmp3599;
                    $tmp3597 = $tmp3598;
                    field3596 = $tmp3597;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3598));
                    if (((panda$core$Bit) { field3596 == NULL }).value) {
                    {
                        $tmp3600 = NULL;
                        $returnValue3581 = $tmp3600;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3600));
                        $tmp3595 = 0;
                        goto $l3593;
                        $l3601:;
                        $tmp3576 = 1;
                        goto $l3574;
                        $l3602:;
                        return $returnValue3581;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields3585, ((panda$core$Object*) field3596));
                    $l3604:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3607, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3608 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3607);
                    bool $tmp3606 = ((panda$core$Bit) { $tmp3608.nonnull }).value;
                    if (!$tmp3606) goto $l3605;
                    {
                        {
                            $tmp3609 = field3596;
                            org$pandalanguage$pandac$ASTNode* $tmp3612 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3611 = $tmp3612;
                            $tmp3610 = $tmp3611;
                            field3596 = $tmp3610;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3610));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3611));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3609));
                        }
                        if (((panda$core$Bit) { field3596 == NULL }).value) {
                        {
                            $tmp3613 = NULL;
                            $returnValue3581 = $tmp3613;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3613));
                            $tmp3595 = 1;
                            goto $l3593;
                            $l3614:;
                            $tmp3576 = 2;
                            goto $l3574;
                            $l3615:;
                            return $returnValue3581;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields3585, ((panda$core$Object*) field3596));
                    }
                    goto $l3604;
                    $l3605:;
                }
                $tmp3595 = -1;
                goto $l3593;
                $l3593:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field3596));
                field3596 = NULL;
                switch ($tmp3595) {
                    case 0: goto $l3601;
                    case 1: goto $l3614;
                    case -1: goto $l3617;
                }
                $l3617:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3618, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3620 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3618, &$s3619);
            if (((panda$core$Bit) { !$tmp3620.nonnull }).value) {
            {
                $tmp3621 = NULL;
                $returnValue3581 = $tmp3621;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3621));
                $tmp3576 = 3;
                goto $l3574;
                $l3622:;
                return $returnValue3581;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3626 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3628 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3577.value));
        $tmp3627 = $tmp3628;
        panda$collections$ImmutableArray* $tmp3630 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields3585);
        $tmp3629 = $tmp3630;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3626, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) name3577.value).position, p_doccomment, $tmp3627, $tmp3629);
        $tmp3625 = $tmp3626;
        $tmp3624 = $tmp3625;
        $returnValue3581 = $tmp3624;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3625));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3629));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
        $tmp3576 = 4;
        goto $l3574;
        $l3631:;
        return $returnValue3581;
    }
    $l3574:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields3585));
    fields3585 = NULL;
    switch ($tmp3576) {
        case 1: goto $l3602;
        case 2: goto $l3615;
        case 3: goto $l3622;
        case 4: goto $l3631;
        case 0: goto $l3583;
    }
    $l3633:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3637;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3638;
    org$pandalanguage$pandac$ASTNode* $returnValue3641;
    org$pandalanguage$pandac$ASTNode* $tmp3642;
    org$pandalanguage$pandac$parser$Token$nullable name3645;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3646;
    org$pandalanguage$pandac$ASTNode* $tmp3649;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3652;
    org$pandalanguage$pandac$ASTNode* $tmp3655;
    panda$collections$Array* members3658 = NULL;
    panda$collections$Array* $tmp3659;
    panda$collections$Array* $tmp3660;
    org$pandalanguage$pandac$ASTNode* dc3662 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3663;
    org$pandalanguage$pandac$parser$Token next3666;
    org$pandalanguage$pandac$parser$Token$Kind $match$1944_133668;
    panda$core$String* $tmp3707;
    panda$core$String* $tmp3708;
    panda$core$String* $tmp3710;
    org$pandalanguage$pandac$ASTNode* $tmp3715;
    org$pandalanguage$pandac$ASTNode* $tmp3716;
    org$pandalanguage$pandac$ASTNode* $tmp3717;
    org$pandalanguage$pandac$ASTNode* c3723 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3724;
    org$pandalanguage$pandac$ASTNode* $tmp3725;
    org$pandalanguage$pandac$ASTNode* $tmp3727;
    org$pandalanguage$pandac$ASTNode* $tmp3731;
    org$pandalanguage$pandac$ASTNode* $tmp3732;
    panda$collections$ImmutableArray* a3734 = NULL;
    panda$collections$ImmutableArray* $tmp3735;
    panda$collections$ImmutableArray* $tmp3736;
    org$pandalanguage$pandac$parser$Token next3740;
    org$pandalanguage$pandac$parser$Token$Kind $match$1968_133742;
    panda$core$String* $tmp3746;
    panda$core$String* $tmp3747;
    panda$core$String* $tmp3749;
    org$pandalanguage$pandac$ASTNode* $tmp3754;
    panda$collections$ImmutableArray* $tmp3757;
    panda$collections$ImmutableArray* $tmp3758;
    panda$collections$ImmutableArray* $tmp3759;
    panda$core$String* $tmp3767;
    panda$core$String* $tmp3768;
    panda$core$String* $tmp3770;
    org$pandalanguage$pandac$ASTNode* $tmp3775;
    org$pandalanguage$pandac$ASTNode* $tmp3778;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    org$pandalanguage$pandac$ASTNode* $tmp3780;
    org$pandalanguage$pandac$ASTNode* decl3786 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3787;
    org$pandalanguage$pandac$ASTNode* $tmp3788;
    org$pandalanguage$pandac$ASTNode* $tmp3790;
    org$pandalanguage$pandac$ASTNode* $tmp3794;
    org$pandalanguage$pandac$ASTNode* $tmp3795;
    panda$collections$ImmutableArray* $tmp3796;
    panda$collections$ImmutableArray* $tmp3797;
    panda$collections$ImmutableArray* $tmp3798;
    org$pandalanguage$pandac$ASTNode* decl3805 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    org$pandalanguage$pandac$ASTNode* $tmp3809;
    org$pandalanguage$pandac$ASTNode* $tmp3813;
    org$pandalanguage$pandac$ASTNode* $tmp3814;
    panda$collections$ImmutableArray* $tmp3815;
    panda$collections$ImmutableArray* $tmp3816;
    panda$collections$ImmutableArray* $tmp3817;
    org$pandalanguage$pandac$ASTNode* decl3824 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3825;
    org$pandalanguage$pandac$ASTNode* $tmp3826;
    org$pandalanguage$pandac$ASTNode* $tmp3828;
    org$pandalanguage$pandac$ASTNode* $tmp3832;
    org$pandalanguage$pandac$ASTNode* $tmp3833;
    panda$collections$ImmutableArray* $tmp3834;
    panda$collections$ImmutableArray* $tmp3835;
    panda$collections$ImmutableArray* $tmp3836;
    org$pandalanguage$pandac$ASTNode* decl3847 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3848;
    org$pandalanguage$pandac$ASTNode* $tmp3849;
    org$pandalanguage$pandac$ASTNode* $tmp3851;
    org$pandalanguage$pandac$ASTNode* $tmp3855;
    org$pandalanguage$pandac$ASTNode* $tmp3856;
    panda$collections$ImmutableArray* $tmp3857;
    panda$collections$ImmutableArray* $tmp3858;
    panda$collections$ImmutableArray* $tmp3859;
    org$pandalanguage$pandac$ASTNode* decl3878 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3879;
    org$pandalanguage$pandac$ASTNode* $tmp3880;
    org$pandalanguage$pandac$ASTNode* $tmp3882;
    org$pandalanguage$pandac$ASTNode* $tmp3886;
    org$pandalanguage$pandac$ASTNode* $tmp3887;
    panda$collections$ImmutableArray* $tmp3888;
    panda$collections$ImmutableArray* $tmp3889;
    panda$collections$ImmutableArray* $tmp3890;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3894;
    panda$core$String* $tmp3896;
    panda$core$String* $tmp3897;
    panda$core$String* $tmp3899;
    org$pandalanguage$pandac$ASTNode* $tmp3904;
    org$pandalanguage$pandac$ASTNode* $tmp3907;
    org$pandalanguage$pandac$ASTNode* $tmp3908;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3910;
    panda$core$String* $tmp3911;
    panda$collections$ImmutableArray* $tmp3913;
    int $tmp3636;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3638, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3640 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3638, &$s3639);
        start3637 = $tmp3640;
        if (((panda$core$Bit) { !start3637.nonnull }).value) {
        {
            $tmp3642 = NULL;
            $returnValue3641 = $tmp3642;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3642));
            $tmp3636 = 0;
            goto $l3634;
            $l3643:;
            return $returnValue3641;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3646, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3648 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3646, &$s3647);
        name3645 = $tmp3648;
        if (((panda$core$Bit) { !name3645.nonnull }).value) {
        {
            $tmp3649 = NULL;
            $returnValue3641 = $tmp3649;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3649));
            $tmp3636 = 1;
            goto $l3634;
            $l3650:;
            return $returnValue3641;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3652, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3654 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3652, &$s3653);
        if (((panda$core$Bit) { !$tmp3654.nonnull }).value) {
        {
            $tmp3655 = NULL;
            $returnValue3641 = $tmp3655;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3655));
            $tmp3636 = 2;
            goto $l3634;
            $l3656:;
            return $returnValue3641;
        }
        }
        panda$collections$Array* $tmp3661 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3661);
        $tmp3660 = $tmp3661;
        $tmp3659 = $tmp3660;
        members3658 = $tmp3659;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3659));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3660));
        $tmp3663 = NULL;
        dc3662 = $tmp3663;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3663));
        $l3664:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3667 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3666 = $tmp3667;
            {
                $match$1944_133668 = next3666.kind;
                panda$core$Bit $tmp3678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp3677 = $tmp3678.value;
                if ($tmp3677) goto $l3679;
                panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp3677 = $tmp3680.value;
                $l3679:;
                panda$core$Bit $tmp3681 = { $tmp3677 };
                bool $tmp3676 = $tmp3681.value;
                if ($tmp3676) goto $l3682;
                panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp3676 = $tmp3683.value;
                $l3682:;
                panda$core$Bit $tmp3684 = { $tmp3676 };
                bool $tmp3675 = $tmp3684.value;
                if ($tmp3675) goto $l3685;
                panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp3675 = $tmp3686.value;
                $l3685:;
                panda$core$Bit $tmp3687 = { $tmp3675 };
                bool $tmp3674 = $tmp3687.value;
                if ($tmp3674) goto $l3688;
                panda$core$Bit $tmp3689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3674 = $tmp3689.value;
                $l3688:;
                panda$core$Bit $tmp3690 = { $tmp3674 };
                bool $tmp3673 = $tmp3690.value;
                if ($tmp3673) goto $l3691;
                panda$core$Bit $tmp3692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp3673 = $tmp3692.value;
                $l3691:;
                panda$core$Bit $tmp3693 = { $tmp3673 };
                bool $tmp3672 = $tmp3693.value;
                if ($tmp3672) goto $l3694;
                panda$core$Bit $tmp3695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp3672 = $tmp3695.value;
                $l3694:;
                panda$core$Bit $tmp3696 = { $tmp3672 };
                bool $tmp3671 = $tmp3696.value;
                if ($tmp3671) goto $l3697;
                panda$core$Bit $tmp3698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3671 = $tmp3698.value;
                $l3697:;
                panda$core$Bit $tmp3699 = { $tmp3671 };
                bool $tmp3670 = $tmp3699.value;
                if ($tmp3670) goto $l3700;
                panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3670 = $tmp3701.value;
                $l3700:;
                panda$core$Bit $tmp3702 = { $tmp3670 };
                bool $tmp3669 = $tmp3702.value;
                if ($tmp3669) goto $l3703;
                panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3669 = $tmp3704.value;
                $l3703:;
                panda$core$Bit $tmp3705 = { $tmp3669 };
                if ($tmp3705.value) {
                {
                    goto $l3665;
                }
                }
                else {
                panda$core$Bit $tmp3706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3706.value) {
                {
                    if (((panda$core$Bit) { dc3662 != NULL }).value) {
                    {
                        panda$core$String* $tmp3711 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3666);
                        $tmp3710 = $tmp3711;
                        panda$core$String* $tmp3712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3709, $tmp3710);
                        $tmp3708 = $tmp3712;
                        panda$core$String* $tmp3714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3708, &$s3713);
                        $tmp3707 = $tmp3714;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3666, $tmp3707);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3707));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3708));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3710));
                    }
                    }
                    {
                        $tmp3715 = dc3662;
                        org$pandalanguage$pandac$ASTNode* $tmp3718 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3717 = $tmp3718;
                        $tmp3716 = $tmp3717;
                        dc3662 = $tmp3716;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3716));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3717));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1944_133668.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp3719.value) {
                {
                    int $tmp3722;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3726 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3662);
                        $tmp3725 = $tmp3726;
                        $tmp3724 = $tmp3725;
                        c3723 = $tmp3724;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3724));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3725));
                        if (((panda$core$Bit) { c3723 == NULL }).value) {
                        {
                            $tmp3727 = NULL;
                            $returnValue3641 = $tmp3727;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3727));
                            $tmp3722 = 0;
                            goto $l3720;
                            $l3728:;
                            $tmp3636 = 3;
                            goto $l3634;
                            $l3729:;
                            return $returnValue3641;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3658, ((panda$core$Object*) c3723));
                        {
                            $tmp3731 = dc3662;
                            $tmp3732 = NULL;
                            dc3662 = $tmp3732;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3732));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3731));
                        }
                    }
                    $tmp3722 = -1;
                    goto $l3720;
                    $l3720:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3723));
                    c3723 = NULL;
                    switch ($tmp3722) {
                        case -1: goto $l3733;
                        case 0: goto $l3728;
                    }
                    $l3733:;
                }
                }
                else {
                {
                    goto $l3665;
                }
                }
                }
                }
            }
        }
        }
        $l3665:;
        panda$collections$ImmutableArray* $tmp3737 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3737);
        $tmp3736 = $tmp3737;
        $tmp3735 = $tmp3736;
        a3734 = $tmp3735;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3735));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3736));
        $l3738:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3741 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3740 = $tmp3741;
            {
                $match$1968_133742 = next3740.kind;
                panda$core$Bit $tmp3743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp3743.value) {
                {
                    panda$core$Int64 $tmp3744 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3734);
                    panda$core$Bit $tmp3745 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3744, ((panda$core$Int64) { 0 }));
                    if ($tmp3745.value) {
                    {
                        panda$core$String* $tmp3750 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3740);
                        $tmp3749 = $tmp3750;
                        panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3748, $tmp3749);
                        $tmp3747 = $tmp3751;
                        panda$core$String* $tmp3753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3747, &$s3752);
                        $tmp3746 = $tmp3753;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3740, $tmp3746);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3746));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3747));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3749));
                        $tmp3754 = NULL;
                        $returnValue3641 = $tmp3754;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3754));
                        $tmp3636 = 4;
                        goto $l3634;
                        $l3755:;
                        return $returnValue3641;
                    }
                    }
                    {
                        $tmp3757 = a3734;
                        panda$collections$ImmutableArray* $tmp3760 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp3759 = $tmp3760;
                        $tmp3758 = $tmp3759;
                        a3734 = $tmp3758;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3758));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3759));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3757));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3761.value) {
                {
                    bool $tmp3762 = ((panda$core$Bit) { dc3662 != NULL }).value;
                    if ($tmp3762) goto $l3763;
                    panda$core$Int64 $tmp3764 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3734);
                    panda$core$Bit $tmp3765 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3764, ((panda$core$Int64) { 0 }));
                    $tmp3762 = $tmp3765.value;
                    $l3763:;
                    panda$core$Bit $tmp3766 = { $tmp3762 };
                    if ($tmp3766.value) {
                    {
                        panda$core$String* $tmp3771 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3740);
                        $tmp3770 = $tmp3771;
                        panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3769, $tmp3770);
                        $tmp3768 = $tmp3772;
                        panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, &$s3773);
                        $tmp3767 = $tmp3774;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3740, $tmp3767);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3767));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3768));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3770));
                        $tmp3775 = NULL;
                        $returnValue3641 = $tmp3775;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3775));
                        $tmp3636 = 5;
                        goto $l3634;
                        $l3776:;
                        return $returnValue3641;
                    }
                    }
                    {
                        $tmp3778 = dc3662;
                        org$pandalanguage$pandac$ASTNode* $tmp3781 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3780 = $tmp3781;
                        $tmp3779 = $tmp3780;
                        dc3662 = $tmp3779;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3779));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3780));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3778));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp3782.value) {
                {
                    int $tmp3785;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3789 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3662, a3734);
                        $tmp3788 = $tmp3789;
                        $tmp3787 = $tmp3788;
                        decl3786 = $tmp3787;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3787));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3788));
                        if (((panda$core$Bit) { decl3786 == NULL }).value) {
                        {
                            $tmp3790 = NULL;
                            $returnValue3641 = $tmp3790;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3790));
                            $tmp3785 = 0;
                            goto $l3783;
                            $l3791:;
                            $tmp3636 = 6;
                            goto $l3634;
                            $l3792:;
                            return $returnValue3641;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3658, ((panda$core$Object*) decl3786));
                        {
                            $tmp3794 = dc3662;
                            $tmp3795 = NULL;
                            dc3662 = $tmp3795;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3795));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3794));
                        }
                        {
                            $tmp3796 = a3734;
                            panda$collections$ImmutableArray* $tmp3799 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3799);
                            $tmp3798 = $tmp3799;
                            $tmp3797 = $tmp3798;
                            a3734 = $tmp3797;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3797));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3798));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3796));
                        }
                    }
                    $tmp3785 = -1;
                    goto $l3783;
                    $l3783:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3786));
                    decl3786 = NULL;
                    switch ($tmp3785) {
                        case -1: goto $l3800;
                        case 0: goto $l3791;
                    }
                    $l3800:;
                }
                }
                else {
                panda$core$Bit $tmp3801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp3801.value) {
                {
                    int $tmp3804;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3808 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3662, a3734);
                        $tmp3807 = $tmp3808;
                        $tmp3806 = $tmp3807;
                        decl3805 = $tmp3806;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3806));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3807));
                        if (((panda$core$Bit) { decl3805 == NULL }).value) {
                        {
                            $tmp3809 = NULL;
                            $returnValue3641 = $tmp3809;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3809));
                            $tmp3804 = 0;
                            goto $l3802;
                            $l3810:;
                            $tmp3636 = 7;
                            goto $l3634;
                            $l3811:;
                            return $returnValue3641;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3658, ((panda$core$Object*) decl3805));
                        {
                            $tmp3813 = dc3662;
                            $tmp3814 = NULL;
                            dc3662 = $tmp3814;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3814));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3813));
                        }
                        {
                            $tmp3815 = a3734;
                            panda$collections$ImmutableArray* $tmp3818 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3818);
                            $tmp3817 = $tmp3818;
                            $tmp3816 = $tmp3817;
                            a3734 = $tmp3816;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3816));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3817));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3815));
                        }
                    }
                    $tmp3804 = -1;
                    goto $l3802;
                    $l3802:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3805));
                    decl3805 = NULL;
                    switch ($tmp3804) {
                        case -1: goto $l3819;
                        case 0: goto $l3810;
                    }
                    $l3819:;
                }
                }
                else {
                panda$core$Bit $tmp3820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp3820.value) {
                {
                    int $tmp3823;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3827 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3662, a3734);
                        $tmp3826 = $tmp3827;
                        $tmp3825 = $tmp3826;
                        decl3824 = $tmp3825;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3825));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3826));
                        if (((panda$core$Bit) { decl3824 == NULL }).value) {
                        {
                            $tmp3828 = NULL;
                            $returnValue3641 = $tmp3828;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3828));
                            $tmp3823 = 0;
                            goto $l3821;
                            $l3829:;
                            $tmp3636 = 8;
                            goto $l3634;
                            $l3830:;
                            return $returnValue3641;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3658, ((panda$core$Object*) decl3824));
                        {
                            $tmp3832 = dc3662;
                            $tmp3833 = NULL;
                            dc3662 = $tmp3833;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3833));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3832));
                        }
                        {
                            $tmp3834 = a3734;
                            panda$collections$ImmutableArray* $tmp3837 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3837);
                            $tmp3836 = $tmp3837;
                            $tmp3835 = $tmp3836;
                            a3734 = $tmp3835;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3835));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3836));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3834));
                        }
                    }
                    $tmp3823 = -1;
                    goto $l3821;
                    $l3821:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3824));
                    decl3824 = NULL;
                    switch ($tmp3823) {
                        case -1: goto $l3838;
                        case 0: goto $l3829;
                    }
                    $l3838:;
                }
                }
                else {
                panda$core$Bit $tmp3840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp3839 = $tmp3840.value;
                if ($tmp3839) goto $l3841;
                panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3839 = $tmp3842.value;
                $l3841:;
                panda$core$Bit $tmp3843 = { $tmp3839 };
                if ($tmp3843.value) {
                {
                    int $tmp3846;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3850 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3662, a3734);
                        $tmp3849 = $tmp3850;
                        $tmp3848 = $tmp3849;
                        decl3847 = $tmp3848;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3848));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3849));
                        if (((panda$core$Bit) { decl3847 == NULL }).value) {
                        {
                            $tmp3851 = NULL;
                            $returnValue3641 = $tmp3851;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3851));
                            $tmp3846 = 0;
                            goto $l3844;
                            $l3852:;
                            $tmp3636 = 9;
                            goto $l3634;
                            $l3853:;
                            return $returnValue3641;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3658, ((panda$core$Object*) decl3847));
                        {
                            $tmp3855 = dc3662;
                            $tmp3856 = NULL;
                            dc3662 = $tmp3856;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3856));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3855));
                        }
                        {
                            $tmp3857 = a3734;
                            panda$collections$ImmutableArray* $tmp3860 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3860);
                            $tmp3859 = $tmp3860;
                            $tmp3858 = $tmp3859;
                            a3734 = $tmp3858;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3858));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3859));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3857));
                        }
                    }
                    $tmp3846 = -1;
                    goto $l3844;
                    $l3844:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3847));
                    decl3847 = NULL;
                    switch ($tmp3846) {
                        case 0: goto $l3852;
                        case -1: goto $l3861;
                    }
                    $l3861:;
                }
                }
                else {
                panda$core$Bit $tmp3865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp3864 = $tmp3865.value;
                if ($tmp3864) goto $l3866;
                panda$core$Bit $tmp3867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3864 = $tmp3867.value;
                $l3866:;
                panda$core$Bit $tmp3868 = { $tmp3864 };
                bool $tmp3863 = $tmp3868.value;
                if ($tmp3863) goto $l3869;
                panda$core$Bit $tmp3870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3863 = $tmp3870.value;
                $l3869:;
                panda$core$Bit $tmp3871 = { $tmp3863 };
                bool $tmp3862 = $tmp3871.value;
                if ($tmp3862) goto $l3872;
                panda$core$Bit $tmp3873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3862 = $tmp3873.value;
                $l3872:;
                panda$core$Bit $tmp3874 = { $tmp3862 };
                if ($tmp3874.value) {
                {
                    int $tmp3877;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3881 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3662, a3734);
                        $tmp3880 = $tmp3881;
                        $tmp3879 = $tmp3880;
                        decl3878 = $tmp3879;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3879));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3880));
                        if (((panda$core$Bit) { decl3878 == NULL }).value) {
                        {
                            $tmp3882 = NULL;
                            $returnValue3641 = $tmp3882;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3882));
                            $tmp3877 = 0;
                            goto $l3875;
                            $l3883:;
                            $tmp3636 = 10;
                            goto $l3634;
                            $l3884:;
                            return $returnValue3641;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3658, ((panda$core$Object*) decl3878));
                        {
                            $tmp3886 = dc3662;
                            $tmp3887 = NULL;
                            dc3662 = $tmp3887;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3887));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3886));
                        }
                        {
                            $tmp3888 = a3734;
                            panda$collections$ImmutableArray* $tmp3891 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3891);
                            $tmp3890 = $tmp3891;
                            $tmp3889 = $tmp3890;
                            a3734 = $tmp3889;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3889));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3890));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3888));
                        }
                    }
                    $tmp3877 = -1;
                    goto $l3875;
                    $l3875:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3878));
                    decl3878 = NULL;
                    switch ($tmp3877) {
                        case 0: goto $l3883;
                        case -1: goto $l3892;
                    }
                    $l3892:;
                }
                }
                else {
                panda$core$Bit $tmp3893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1968_133742.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp3893.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3894, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3894, &$s3895);
                    goto $l3739;
                }
                }
                else {
                {
                    panda$core$String* $tmp3900 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3740);
                    $tmp3899 = $tmp3900;
                    panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3898, $tmp3899);
                    $tmp3897 = $tmp3901;
                    panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, &$s3902);
                    $tmp3896 = $tmp3903;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3740, $tmp3896);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3897));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3899));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp3904 = NULL;
                    $returnValue3641 = $tmp3904;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3904));
                    $tmp3636 = 11;
                    goto $l3634;
                    $l3905:;
                    return $returnValue3641;
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
        $l3739:;
        org$pandalanguage$pandac$ASTNode* $tmp3909 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3910, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp3912 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3645.value));
        $tmp3911 = $tmp3912;
        panda$collections$ImmutableArray* $tmp3914 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3658);
        $tmp3913 = $tmp3914;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3909, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start3637.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp3910, $tmp3911, NULL, NULL, $tmp3913);
        $tmp3908 = $tmp3909;
        $tmp3907 = $tmp3908;
        $returnValue3641 = $tmp3907;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3907));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3911));
        $tmp3636 = 12;
        goto $l3634;
        $l3915:;
        return $returnValue3641;
    }
    $l3634:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3658));
    members3658 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3662));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3734));
    a3734 = NULL;
    switch ($tmp3636) {
        case 6: goto $l3792;
        case 7: goto $l3811;
        case 1: goto $l3650;
        case 9: goto $l3853;
        case 10: goto $l3884;
        case 2: goto $l3656;
        case 11: goto $l3905;
        case 8: goto $l3830;
        case 3: goto $l3729;
        case 0: goto $l3643;
        case 5: goto $l3776;
        case 4: goto $l3755;
        case 12: goto $l3915;
    }
    $l3917:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3921;
    org$pandalanguage$pandac$ASTNode* dc3923 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3925;
    org$pandalanguage$pandac$ASTNode* $tmp3926;
    org$pandalanguage$pandac$ASTNode* $tmp3927;
    org$pandalanguage$pandac$ASTNode* $returnValue3929;
    org$pandalanguage$pandac$ASTNode* $tmp3930;
    org$pandalanguage$pandac$ASTNode* $tmp3933;
    org$pandalanguage$pandac$ASTNode* $tmp3934;
    panda$collections$ImmutableArray* a3935 = NULL;
    panda$collections$ImmutableArray* $tmp3936;
    panda$collections$ImmutableArray* $tmp3937;
    org$pandalanguage$pandac$ASTNode* $tmp3939;
    org$pandalanguage$pandac$parser$Token$Kind $match$2054_93942;
    org$pandalanguage$pandac$ASTNode* $tmp3945;
    org$pandalanguage$pandac$ASTNode* $tmp3946;
    org$pandalanguage$pandac$ASTNode* $tmp3951;
    org$pandalanguage$pandac$ASTNode* $tmp3952;
    org$pandalanguage$pandac$ASTNode* $tmp3957;
    org$pandalanguage$pandac$ASTNode* $tmp3958;
    org$pandalanguage$pandac$ASTNode* $tmp3967;
    org$pandalanguage$pandac$ASTNode* $tmp3968;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    org$pandalanguage$pandac$ASTNode* $tmp3974;
    org$pandalanguage$pandac$ASTNode* $tmp3991;
    org$pandalanguage$pandac$ASTNode* $tmp3992;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3996;
    org$pandalanguage$pandac$ASTNode* $tmp3998;
    int $tmp3920;
    {
        org$pandalanguage$pandac$parser$Token $tmp3922 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start3921 = $tmp3922;
        memset(&dc3923, 0, sizeof(dc3923));
        panda$core$Bit $tmp3924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start3921.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3924.value) {
        {
            {
                $tmp3925 = dc3923;
                org$pandalanguage$pandac$ASTNode* $tmp3928 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3927 = $tmp3928;
                $tmp3926 = $tmp3927;
                dc3923 = $tmp3926;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3925));
            }
            if (((panda$core$Bit) { dc3923 == NULL }).value) {
            {
                $tmp3930 = NULL;
                $returnValue3929 = $tmp3930;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3930));
                $tmp3920 = 0;
                goto $l3918;
                $l3931:;
                return $returnValue3929;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3933 = dc3923;
                $tmp3934 = NULL;
                dc3923 = $tmp3934;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3933));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3938 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp3937 = $tmp3938;
        $tmp3936 = $tmp3937;
        a3935 = $tmp3936;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3936));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3937));
        if (((panda$core$Bit) { a3935 == NULL }).value) {
        {
            $tmp3939 = NULL;
            $returnValue3929 = $tmp3939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3939));
            $tmp3920 = 1;
            goto $l3918;
            $l3940:;
            return $returnValue3929;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3943 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2054_93942 = $tmp3943.kind;
            panda$core$Bit $tmp3944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3944.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3947 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3923, a3935);
                $tmp3946 = $tmp3947;
                $tmp3945 = $tmp3946;
                $returnValue3929 = $tmp3945;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3945));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3946));
                $tmp3920 = 2;
                goto $l3918;
                $l3948:;
                return $returnValue3929;
            }
            }
            else {
            panda$core$Bit $tmp3950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3950.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3953 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3923, a3935);
                $tmp3952 = $tmp3953;
                $tmp3951 = $tmp3952;
                $returnValue3929 = $tmp3951;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3952));
                $tmp3920 = 3;
                goto $l3918;
                $l3954:;
                return $returnValue3929;
            }
            }
            else {
            panda$core$Bit $tmp3956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3956.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3959 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3923, a3935);
                $tmp3958 = $tmp3959;
                $tmp3957 = $tmp3958;
                $returnValue3929 = $tmp3957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3958));
                $tmp3920 = 4;
                goto $l3918;
                $l3960:;
                return $returnValue3929;
            }
            }
            else {
            panda$core$Bit $tmp3963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp3962 = $tmp3963.value;
            if ($tmp3962) goto $l3964;
            panda$core$Bit $tmp3965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3962 = $tmp3965.value;
            $l3964:;
            panda$core$Bit $tmp3966 = { $tmp3962 };
            if ($tmp3966.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3969 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3923, a3935);
                $tmp3968 = $tmp3969;
                $tmp3967 = $tmp3968;
                $returnValue3929 = $tmp3967;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3967));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3968));
                $tmp3920 = 5;
                goto $l3918;
                $l3970:;
                return $returnValue3929;
            }
            }
            else {
            panda$core$Bit $tmp3972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp3972.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3975 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3923, a3935);
                $tmp3974 = $tmp3975;
                $tmp3973 = $tmp3974;
                $returnValue3929 = $tmp3973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3974));
                $tmp3920 = 6;
                goto $l3918;
                $l3976:;
                return $returnValue3929;
            }
            }
            else {
            panda$core$Bit $tmp3981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp3980 = $tmp3981.value;
            if ($tmp3980) goto $l3982;
            panda$core$Bit $tmp3983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp3980 = $tmp3983.value;
            $l3982:;
            panda$core$Bit $tmp3984 = { $tmp3980 };
            bool $tmp3979 = $tmp3984.value;
            if ($tmp3979) goto $l3985;
            panda$core$Bit $tmp3986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp3979 = $tmp3986.value;
            $l3985:;
            panda$core$Bit $tmp3987 = { $tmp3979 };
            bool $tmp3978 = $tmp3987.value;
            if ($tmp3978) goto $l3988;
            panda$core$Bit $tmp3989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2054_93942.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp3978 = $tmp3989.value;
            $l3988:;
            panda$core$Bit $tmp3990 = { $tmp3978 };
            if ($tmp3990.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3993 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3923, a3935);
                $tmp3992 = $tmp3993;
                $tmp3991 = $tmp3992;
                $returnValue3929 = $tmp3991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3992));
                $tmp3920 = 7;
                goto $l3918;
                $l3994:;
                return $returnValue3929;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3996, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3996, &$s3997);
                $tmp3998 = NULL;
                $returnValue3929 = $tmp3998;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3998));
                $tmp3920 = 8;
                goto $l3918;
                $l3999:;
                return $returnValue3929;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp3920 = -1;
    goto $l3918;
    $l3918:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3923));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3935));
    a3935 = NULL;
    switch ($tmp3920) {
        case 4: goto $l3960;
        case 2: goto $l3948;
        case 8: goto $l3999;
        case 1: goto $l3940;
        case 5: goto $l3970;
        case -1: goto $l4001;
        case 6: goto $l3976;
        case 7: goto $l3994;
        case 3: goto $l3954;
        case 0: goto $l3931;
    }
    $l4001:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4005;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4006;
    org$pandalanguage$pandac$ASTNode* $returnValue4009;
    org$pandalanguage$pandac$ASTNode* $tmp4010;
    org$pandalanguage$pandac$parser$Token$nullable name4013;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4014;
    org$pandalanguage$pandac$ASTNode* $tmp4017;
    panda$collections$ImmutableArray* generics4020 = NULL;
    panda$collections$ImmutableArray* $tmp4023;
    panda$collections$ImmutableArray* $tmp4024;
    panda$collections$ImmutableArray* $tmp4025;
    org$pandalanguage$pandac$ASTNode* $tmp4027;
    panda$collections$ImmutableArray* $tmp4030;
    panda$collections$ImmutableArray* $tmp4031;
    panda$collections$ImmutableArray* stypes4032 = NULL;
    panda$collections$ImmutableArray* $tmp4035;
    panda$collections$ImmutableArray* $tmp4036;
    panda$collections$ImmutableArray* $tmp4037;
    org$pandalanguage$pandac$ASTNode* $tmp4039;
    panda$collections$ImmutableArray* $tmp4042;
    panda$collections$ImmutableArray* $tmp4043;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4044;
    org$pandalanguage$pandac$ASTNode* $tmp4047;
    panda$collections$Array* members4050 = NULL;
    panda$collections$Array* $tmp4051;
    panda$collections$Array* $tmp4052;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4057;
    org$pandalanguage$pandac$ASTNode* member4062 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4063;
    org$pandalanguage$pandac$ASTNode* $tmp4064;
    org$pandalanguage$pandac$ASTNode* $tmp4066;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    org$pandalanguage$pandac$ASTNode* $tmp4072;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4074;
    panda$core$String* $tmp4075;
    panda$collections$ImmutableArray* $tmp4077;
    int $tmp4004;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4006, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4008 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4006, &$s4007);
        start4005 = $tmp4008;
        if (((panda$core$Bit) { !start4005.nonnull }).value) {
        {
            $tmp4010 = NULL;
            $returnValue4009 = $tmp4010;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4010));
            $tmp4004 = 0;
            goto $l4002;
            $l4011:;
            return $returnValue4009;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4014, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4016 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4014, &$s4015);
        name4013 = $tmp4016;
        if (((panda$core$Bit) { !name4013.nonnull }).value) {
        {
            $tmp4017 = NULL;
            $returnValue4009 = $tmp4017;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4017));
            $tmp4004 = 1;
            goto $l4002;
            $l4018:;
            return $returnValue4009;
        }
        }
        memset(&generics4020, 0, sizeof(generics4020));
        org$pandalanguage$pandac$parser$Token $tmp4021 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4021.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4022.value) {
        {
            {
                $tmp4023 = generics4020;
                panda$collections$ImmutableArray* $tmp4026 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4025 = $tmp4026;
                $tmp4024 = $tmp4025;
                generics4020 = $tmp4024;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4024));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4025));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4023));
            }
            if (((panda$core$Bit) { generics4020 == NULL }).value) {
            {
                $tmp4027 = NULL;
                $returnValue4009 = $tmp4027;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4027));
                $tmp4004 = 2;
                goto $l4002;
                $l4028:;
                return $returnValue4009;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4030 = generics4020;
                $tmp4031 = NULL;
                generics4020 = $tmp4031;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4031));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4030));
            }
        }
        }
        memset(&stypes4032, 0, sizeof(stypes4032));
        org$pandalanguage$pandac$parser$Token $tmp4033 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4033.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4034.value) {
        {
            {
                $tmp4035 = stypes4032;
                panda$collections$ImmutableArray* $tmp4038 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4037 = $tmp4038;
                $tmp4036 = $tmp4037;
                stypes4032 = $tmp4036;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4036));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4037));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4035));
            }
            if (((panda$core$Bit) { stypes4032 == NULL }).value) {
            {
                $tmp4039 = NULL;
                $returnValue4009 = $tmp4039;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4039));
                $tmp4004 = 3;
                goto $l4002;
                $l4040:;
                return $returnValue4009;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4042 = stypes4032;
                $tmp4043 = NULL;
                stypes4032 = $tmp4043;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4043));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4042));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4044, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4046 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4044, &$s4045);
        if (((panda$core$Bit) { !$tmp4046.nonnull }).value) {
        {
            $tmp4047 = NULL;
            $returnValue4009 = $tmp4047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4047));
            $tmp4004 = 4;
            goto $l4002;
            $l4048:;
            return $returnValue4009;
        }
        }
        panda$collections$Array* $tmp4053 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4053);
        $tmp4052 = $tmp4053;
        $tmp4051 = $tmp4052;
        members4050 = $tmp4051;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4051));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4052));
        $l4054:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4057, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4058 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4057);
        bool $tmp4056 = ((panda$core$Bit) { !$tmp4058.nonnull }).value;
        if (!$tmp4056) goto $l4055;
        {
            int $tmp4061;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4065 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4064 = $tmp4065;
                $tmp4063 = $tmp4064;
                member4062 = $tmp4063;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4063));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4064));
                if (((panda$core$Bit) { member4062 == NULL }).value) {
                {
                    $tmp4066 = NULL;
                    $returnValue4009 = $tmp4066;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4066));
                    $tmp4061 = 0;
                    goto $l4059;
                    $l4067:;
                    $tmp4004 = 5;
                    goto $l4002;
                    $l4068:;
                    return $returnValue4009;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4050, ((panda$core$Object*) member4062));
            }
            $tmp4061 = -1;
            goto $l4059;
            $l4059:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4062));
            member4062 = NULL;
            switch ($tmp4061) {
                case -1: goto $l4070;
                case 0: goto $l4067;
            }
            $l4070:;
        }
        goto $l4054;
        $l4055:;
        org$pandalanguage$pandac$ASTNode* $tmp4073 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4074, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4076 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4013.value));
        $tmp4075 = $tmp4076;
        panda$collections$ImmutableArray* $tmp4078 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4050);
        $tmp4077 = $tmp4078;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4073, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4005.value).position, p_doccomment, p_annotations, $tmp4074, $tmp4075, generics4020, stypes4032, $tmp4077);
        $tmp4072 = $tmp4073;
        $tmp4071 = $tmp4072;
        $returnValue4009 = $tmp4071;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4071));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4075));
        $tmp4004 = 6;
        goto $l4002;
        $l4079:;
        return $returnValue4009;
    }
    $l4002:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4020));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4032));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4050));
    members4050 = NULL;
    switch ($tmp4004) {
        case 2: goto $l4028;
        case 3: goto $l4040;
        case 5: goto $l4068;
        case 6: goto $l4079;
        case 4: goto $l4048;
        case 1: goto $l4018;
        case 0: goto $l4011;
    }
    $l4081:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4085;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4086;
    org$pandalanguage$pandac$ASTNode* $returnValue4089;
    org$pandalanguage$pandac$ASTNode* $tmp4090;
    org$pandalanguage$pandac$parser$Token$nullable name4093;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4094;
    org$pandalanguage$pandac$ASTNode* $tmp4097;
    panda$collections$ImmutableArray* generics4100 = NULL;
    panda$collections$ImmutableArray* $tmp4103;
    panda$collections$ImmutableArray* $tmp4104;
    panda$collections$ImmutableArray* $tmp4105;
    org$pandalanguage$pandac$ASTNode* $tmp4107;
    panda$collections$ImmutableArray* $tmp4110;
    panda$collections$ImmutableArray* $tmp4111;
    panda$collections$ImmutableArray* $tmp4112;
    panda$collections$Array* intfs4114 = NULL;
    panda$collections$Array* $tmp4115;
    panda$collections$Array* $tmp4116;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4118;
    org$pandalanguage$pandac$ASTNode* t4123 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4124;
    org$pandalanguage$pandac$ASTNode* $tmp4125;
    org$pandalanguage$pandac$ASTNode* $tmp4127;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4134;
    org$pandalanguage$pandac$ASTNode* $tmp4136;
    org$pandalanguage$pandac$ASTNode* $tmp4137;
    org$pandalanguage$pandac$ASTNode* $tmp4138;
    org$pandalanguage$pandac$ASTNode* $tmp4140;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4145;
    org$pandalanguage$pandac$ASTNode* $tmp4148;
    panda$collections$Array* members4151 = NULL;
    panda$collections$Array* $tmp4152;
    panda$collections$Array* $tmp4153;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4158;
    org$pandalanguage$pandac$ASTNode* member4163 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4164;
    org$pandalanguage$pandac$ASTNode* $tmp4165;
    org$pandalanguage$pandac$ASTNode* $tmp4167;
    org$pandalanguage$pandac$ASTNode* $tmp4172;
    org$pandalanguage$pandac$ASTNode* $tmp4173;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4175;
    panda$core$String* $tmp4176;
    panda$collections$ImmutableArray* $tmp4178;
    panda$collections$ImmutableArray* $tmp4180;
    int $tmp4084;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4086, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4088 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4086, &$s4087);
        start4085 = $tmp4088;
        if (((panda$core$Bit) { !start4085.nonnull }).value) {
        {
            $tmp4090 = NULL;
            $returnValue4089 = $tmp4090;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4090));
            $tmp4084 = 0;
            goto $l4082;
            $l4091:;
            return $returnValue4089;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4094, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4096 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4094, &$s4095);
        name4093 = $tmp4096;
        if (((panda$core$Bit) { !name4093.nonnull }).value) {
        {
            $tmp4097 = NULL;
            $returnValue4089 = $tmp4097;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4097));
            $tmp4084 = 1;
            goto $l4082;
            $l4098:;
            return $returnValue4089;
        }
        }
        memset(&generics4100, 0, sizeof(generics4100));
        org$pandalanguage$pandac$parser$Token $tmp4101 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4101.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4102.value) {
        {
            {
                $tmp4103 = generics4100;
                panda$collections$ImmutableArray* $tmp4106 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4105 = $tmp4106;
                $tmp4104 = $tmp4105;
                generics4100 = $tmp4104;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4104));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4105));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4103));
            }
            if (((panda$core$Bit) { generics4100 == NULL }).value) {
            {
                $tmp4107 = NULL;
                $returnValue4089 = $tmp4107;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4107));
                $tmp4084 = 2;
                goto $l4082;
                $l4108:;
                return $returnValue4089;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4110 = generics4100;
                panda$collections$ImmutableArray* $tmp4113 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4113);
                $tmp4112 = $tmp4113;
                $tmp4111 = $tmp4112;
                generics4100 = $tmp4111;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4110));
            }
        }
        }
        panda$collections$Array* $tmp4117 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4117);
        $tmp4116 = $tmp4117;
        $tmp4115 = $tmp4116;
        intfs4114 = $tmp4115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4116));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4118, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4119 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4118);
        if (((panda$core$Bit) { $tmp4119.nonnull }).value) {
        {
            int $tmp4122;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4126 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4125 = $tmp4126;
                $tmp4124 = $tmp4125;
                t4123 = $tmp4124;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4125));
                if (((panda$core$Bit) { t4123 == NULL }).value) {
                {
                    $tmp4127 = NULL;
                    $returnValue4089 = $tmp4127;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4127));
                    $tmp4122 = 0;
                    goto $l4120;
                    $l4128:;
                    $tmp4084 = 3;
                    goto $l4082;
                    $l4129:;
                    return $returnValue4089;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4114, ((panda$core$Object*) t4123));
                $l4131:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4134, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4135 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4134);
                bool $tmp4133 = ((panda$core$Bit) { $tmp4135.nonnull }).value;
                if (!$tmp4133) goto $l4132;
                {
                    {
                        $tmp4136 = t4123;
                        org$pandalanguage$pandac$ASTNode* $tmp4139 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4138 = $tmp4139;
                        $tmp4137 = $tmp4138;
                        t4123 = $tmp4137;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4137));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4138));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4136));
                    }
                    if (((panda$core$Bit) { t4123 == NULL }).value) {
                    {
                        $tmp4140 = NULL;
                        $returnValue4089 = $tmp4140;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4140));
                        $tmp4122 = 1;
                        goto $l4120;
                        $l4141:;
                        $tmp4084 = 4;
                        goto $l4082;
                        $l4142:;
                        return $returnValue4089;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4114, ((panda$core$Object*) t4123));
                }
                goto $l4131;
                $l4132:;
            }
            $tmp4122 = -1;
            goto $l4120;
            $l4120:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4123));
            t4123 = NULL;
            switch ($tmp4122) {
                case 1: goto $l4141;
                case -1: goto $l4144;
                case 0: goto $l4128;
            }
            $l4144:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4145, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4147 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4145, &$s4146);
        if (((panda$core$Bit) { !$tmp4147.nonnull }).value) {
        {
            $tmp4148 = NULL;
            $returnValue4089 = $tmp4148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4148));
            $tmp4084 = 5;
            goto $l4082;
            $l4149:;
            return $returnValue4089;
        }
        }
        panda$collections$Array* $tmp4154 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4154);
        $tmp4153 = $tmp4154;
        $tmp4152 = $tmp4153;
        members4151 = $tmp4152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4153));
        $l4155:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4158, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4159 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4158);
        bool $tmp4157 = ((panda$core$Bit) { !$tmp4159.nonnull }).value;
        if (!$tmp4157) goto $l4156;
        {
            int $tmp4162;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4166 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4165 = $tmp4166;
                $tmp4164 = $tmp4165;
                member4163 = $tmp4164;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4165));
                if (((panda$core$Bit) { member4163 == NULL }).value) {
                {
                    $tmp4167 = NULL;
                    $returnValue4089 = $tmp4167;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4167));
                    $tmp4162 = 0;
                    goto $l4160;
                    $l4168:;
                    $tmp4084 = 6;
                    goto $l4082;
                    $l4169:;
                    return $returnValue4089;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4151, ((panda$core$Object*) member4163));
            }
            $tmp4162 = -1;
            goto $l4160;
            $l4160:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4163));
            member4163 = NULL;
            switch ($tmp4162) {
                case 0: goto $l4168;
                case -1: goto $l4171;
            }
            $l4171:;
        }
        goto $l4155;
        $l4156:;
        org$pandalanguage$pandac$ASTNode* $tmp4174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4175, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4177 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4093.value));
        $tmp4176 = $tmp4177;
        panda$collections$ImmutableArray* $tmp4179 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4114);
        $tmp4178 = $tmp4179;
        panda$collections$ImmutableArray* $tmp4181 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4151);
        $tmp4180 = $tmp4181;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4174, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4085.value).position, p_doccomment, p_annotations, $tmp4175, $tmp4176, generics4100, $tmp4178, $tmp4180);
        $tmp4173 = $tmp4174;
        $tmp4172 = $tmp4173;
        $returnValue4089 = $tmp4172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4176));
        $tmp4084 = 7;
        goto $l4082;
        $l4182:;
        return $returnValue4089;
    }
    $l4082:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4100));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4114));
    intfs4114 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4151));
    members4151 = NULL;
    switch ($tmp4084) {
        case 4: goto $l4142;
        case 3: goto $l4129;
        case 2: goto $l4108;
        case 5: goto $l4149;
        case 7: goto $l4182;
        case 6: goto $l4169;
        case 1: goto $l4098;
        case 0: goto $l4091;
    }
    $l4184:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2178_94185;
    org$pandalanguage$pandac$ASTNode* $returnValue4188;
    org$pandalanguage$pandac$ASTNode* $tmp4189;
    org$pandalanguage$pandac$ASTNode* $tmp4190;
    org$pandalanguage$pandac$ASTNode* $tmp4194;
    org$pandalanguage$pandac$ASTNode* $tmp4195;
    org$pandalanguage$pandac$ASTNode* $tmp4223;
    org$pandalanguage$pandac$ASTNode* $tmp4224;
    org$pandalanguage$pandac$ASTNode* $tmp4227;
    org$pandalanguage$pandac$ASTNode* $tmp4228;
    {
        org$pandalanguage$pandac$parser$Token $tmp4186 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2178_94185 = $tmp4186.kind;
        panda$core$Bit $tmp4187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4187.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4191 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4190 = $tmp4191;
            $tmp4189 = $tmp4190;
            $returnValue4188 = $tmp4189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4190));
            return $returnValue4188;
        }
        }
        else {
        panda$core$Bit $tmp4193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4193.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4196 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4195 = $tmp4196;
            $tmp4194 = $tmp4195;
            $returnValue4188 = $tmp4194;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4194));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4195));
            return $returnValue4188;
        }
        }
        else {
        panda$core$Bit $tmp4204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp4203 = $tmp4204.value;
        if ($tmp4203) goto $l4205;
        panda$core$Bit $tmp4206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp4203 = $tmp4206.value;
        $l4205:;
        panda$core$Bit $tmp4207 = { $tmp4203 };
        bool $tmp4202 = $tmp4207.value;
        if ($tmp4202) goto $l4208;
        panda$core$Bit $tmp4209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp4202 = $tmp4209.value;
        $l4208:;
        panda$core$Bit $tmp4210 = { $tmp4202 };
        bool $tmp4201 = $tmp4210.value;
        if ($tmp4201) goto $l4211;
        panda$core$Bit $tmp4212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp4201 = $tmp4212.value;
        $l4211:;
        panda$core$Bit $tmp4213 = { $tmp4201 };
        bool $tmp4200 = $tmp4213.value;
        if ($tmp4200) goto $l4214;
        panda$core$Bit $tmp4215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp4200 = $tmp4215.value;
        $l4214:;
        panda$core$Bit $tmp4216 = { $tmp4200 };
        bool $tmp4199 = $tmp4216.value;
        if ($tmp4199) goto $l4217;
        panda$core$Bit $tmp4218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp4199 = $tmp4218.value;
        $l4217:;
        panda$core$Bit $tmp4219 = { $tmp4199 };
        bool $tmp4198 = $tmp4219.value;
        if ($tmp4198) goto $l4220;
        panda$core$Bit $tmp4221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2178_94185.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp4198 = $tmp4221.value;
        $l4220:;
        panda$core$Bit $tmp4222 = { $tmp4198 };
        if ($tmp4222.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4225 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4224 = $tmp4225;
            $tmp4223 = $tmp4224;
            $returnValue4188 = $tmp4223;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4224));
            return $returnValue4188;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4229 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4228 = $tmp4229;
            $tmp4227 = $tmp4228;
            $returnValue4188 = $tmp4227;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4227));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4228));
            return $returnValue4188;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4234 = NULL;
    panda$collections$Array* $tmp4235;
    panda$collections$Array* $tmp4236;
    org$pandalanguage$pandac$ASTNode* entry4246 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4247;
    org$pandalanguage$pandac$ASTNode* $tmp4248;
    org$pandalanguage$pandac$ASTNode* $returnValue4250;
    org$pandalanguage$pandac$ASTNode* $tmp4251;
    org$pandalanguage$pandac$ASTNode* $tmp4257;
    org$pandalanguage$pandac$ASTNode* $tmp4258;
    panda$collections$ImmutableArray* $tmp4260;
    int $tmp4233;
    {
        panda$collections$Array* $tmp4237 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4237);
        $tmp4236 = $tmp4237;
        $tmp4235 = $tmp4236;
        entries4234 = $tmp4235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4235));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4236));
        $l4238:;
        org$pandalanguage$pandac$parser$Token $tmp4241 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4242 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4241.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4240 = $tmp4242.value;
        if (!$tmp4240) goto $l4239;
        {
            int $tmp4245;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4249 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4248 = $tmp4249;
                $tmp4247 = $tmp4248;
                entry4246 = $tmp4247;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4248));
                if (((panda$core$Bit) { entry4246 == NULL }).value) {
                {
                    $tmp4251 = NULL;
                    $returnValue4250 = $tmp4251;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4251));
                    $tmp4245 = 0;
                    goto $l4243;
                    $l4252:;
                    $tmp4233 = 0;
                    goto $l4231;
                    $l4253:;
                    return $returnValue4250;
                }
                }
                panda$core$Bit $tmp4255 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4255.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4234, ((panda$core$Object*) entry4246));
            }
            $tmp4245 = -1;
            goto $l4243;
            $l4243:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4246));
            entry4246 = NULL;
            switch ($tmp4245) {
                case -1: goto $l4256;
                case 0: goto $l4252;
            }
            $l4256:;
        }
        goto $l4238;
        $l4239:;
        org$pandalanguage$pandac$ASTNode* $tmp4259 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4261 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4234);
        $tmp4260 = $tmp4261;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4259, ((panda$core$Int64) { 17 }), $tmp4260);
        $tmp4258 = $tmp4259;
        $tmp4257 = $tmp4258;
        $returnValue4250 = $tmp4257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4260));
        $tmp4233 = 1;
        goto $l4231;
        $l4262:;
        return $returnValue4250;
    }
    $l4231:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4234));
    entries4234 = NULL;
    switch ($tmp4233) {
        case 0: goto $l4253;
        case 1: goto $l4262;
    }
    $l4264:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4267;
    {
    }
    $tmp4267 = -1;
    goto $l4265;
    $l4265:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4267) {
        case -1: goto $l4268;
    }
    $l4268:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

