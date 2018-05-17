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
typedef org$pandalanguage$pandac$Position (*$fn1332)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2524)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2551)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2602)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3586)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s2882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    org$pandalanguage$pandac$parser$Token$Kind $match$539_131125;
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
    panda$collections$Array* types1272 = NULL;
    panda$collections$Array* $tmp1273;
    panda$collections$Array* $tmp1274;
    org$pandalanguage$pandac$ASTNode* t1276 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1277;
    org$pandalanguage$pandac$ASTNode* $tmp1278;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1279;
    org$pandalanguage$pandac$ASTNode* $tmp1281;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1289;
    org$pandalanguage$pandac$ASTNode* $tmp1291;
    org$pandalanguage$pandac$ASTNode* $tmp1292;
    org$pandalanguage$pandac$ASTNode* $tmp1293;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1294;
    org$pandalanguage$pandac$ASTNode* $tmp1296;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1301;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1303;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    panda$core$Bit shouldAccept1310;
    panda$core$Object* $tmp1311;
    org$pandalanguage$pandac$parser$Token$Kind $match$644_291313;
    org$pandalanguage$pandac$ASTNode* $tmp1328;
    org$pandalanguage$pandac$ASTNode* $tmp1329;
    org$pandalanguage$pandac$ASTNode* $tmp1330;
    panda$collections$ImmutableArray* $tmp1334;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1337;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1344;
    org$pandalanguage$pandac$ASTNode* $tmp1346;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1350;
    org$pandalanguage$pandac$ASTNode* $tmp1352;
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
                $match$539_131125 = token1123.kind;
                panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_131125.$rawValue, ((panda$core$Int64) { 103 }));
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
                panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_131125.$rawValue, ((panda$core$Int64) { 101 }));
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
                panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_131125.$rawValue, ((panda$core$Int64) { 98 }));
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
                panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_131125.$rawValue, ((panda$core$Int64) { 89 }));
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
                panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$539_131125.$rawValue, ((panda$core$Int64) { 62 }));
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
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1275 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1275);
                                $tmp1274 = $tmp1275;
                                $tmp1273 = $tmp1274;
                                types1272 = $tmp1273;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1273));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1274));
                                org$pandalanguage$pandac$ASTNode* $tmp1279 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1278 = $tmp1279;
                                $tmp1277 = $tmp1278;
                                t1276 = $tmp1277;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1277));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1278));
                                if (((panda$core$Bit) { t1276 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1281 = result1113;
                                    $finallyReturn1279 = $tmp1281;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
                                    $tmp1271 = 0;
                                    goto $l1269;
                                    $l1282:;
                                    $tmp1264 = 0;
                                    goto $l1262;
                                    $l1283:;
                                    $tmp1112 = 8;
                                    goto $l1110;
                                    $l1284:;
                                    return $finallyReturn1279;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1272, ((panda$core$Object*) t1276));
                                $l1286:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1289, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1290 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1289);
                                bool $tmp1288 = ((panda$core$Bit) { $tmp1290.nonnull }).value;
                                if (!$tmp1288) goto $l1287;
                                {
                                    {
                                        $tmp1291 = t1276;
                                        org$pandalanguage$pandac$ASTNode* $tmp1294 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1293 = $tmp1294;
                                        $tmp1292 = $tmp1293;
                                        t1276 = $tmp1292;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1292));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1293));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
                                    }
                                    if (((panda$core$Bit) { t1276 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1296 = result1113;
                                        $finallyReturn1294 = $tmp1296;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
                                        $tmp1271 = 1;
                                        goto $l1269;
                                        $l1297:;
                                        $tmp1264 = 1;
                                        goto $l1262;
                                        $l1298:;
                                        $tmp1112 = 9;
                                        goto $l1110;
                                        $l1299:;
                                        return $finallyReturn1294;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1272, ((panda$core$Object*) t1276));
                                }
                                goto $l1286;
                                $l1287:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1301, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1303 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1301, &$s1302);
                                if (((panda$core$Bit) { !$tmp1303.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1305 = result1113;
                                    $finallyReturn1303 = $tmp1305;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                                    $tmp1271 = 2;
                                    goto $l1269;
                                    $l1306:;
                                    $tmp1264 = 2;
                                    goto $l1262;
                                    $l1307:;
                                    $tmp1112 = 10;
                                    goto $l1110;
                                    $l1308:;
                                    return $finallyReturn1303;
                                }
                                }
                                memset(&shouldAccept1310, 0, sizeof(shouldAccept1310));
                                panda$core$Object* $tmp1312 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1311 = $tmp1312;
                                panda$core$Panda$unref$panda$core$Object($tmp1311);
                                if (((panda$core$Bit$wrapper*) $tmp1311)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1314 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$644_291313 = $tmp1314.kind;
                                        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644_291313.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1317 = $tmp1318.value;
                                        if ($tmp1317) goto $l1319;
                                        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644_291313.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1317 = $tmp1320.value;
                                        $l1319:;
                                        panda$core$Bit $tmp1321 = { $tmp1317 };
                                        bool $tmp1316 = $tmp1321.value;
                                        if ($tmp1316) goto $l1322;
                                        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644_291313.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1316 = $tmp1323.value;
                                        $l1322:;
                                        panda$core$Bit $tmp1324 = { $tmp1316 };
                                        bool $tmp1315 = $tmp1324.value;
                                        if ($tmp1315) goto $l1325;
                                        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644_291313.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1315 = $tmp1326.value;
                                        $l1325:;
                                        panda$core$Bit $tmp1327 = { $tmp1315 };
                                        if ($tmp1327.value) {
                                        {
                                            shouldAccept1310 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1310 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1310 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1310.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1328 = result1113;
                                        org$pandalanguage$pandac$ASTNode* $tmp1331 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1333 = (($fn1332) result1113->$class->vtable[2])(result1113);
                                        panda$collections$ImmutableArray* $tmp1335 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1272);
                                        $tmp1334 = $tmp1335;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1331, ((panda$core$Int64) { 17 }), $tmp1333, name1265, $tmp1334);
                                        $tmp1330 = $tmp1331;
                                        $tmp1329 = $tmp1330;
                                        result1113 = $tmp1329;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1329));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
                                    }
                                    $tmp1271 = 3;
                                    goto $l1269;
                                    $l1336:;
                                    $tmp1264 = 3;
                                    goto $l1262;
                                    $l1337:;
                                    goto $l1121;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1339 = result1113;
                                    $finallyReturn1337 = $tmp1339;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
                                    $tmp1271 = 4;
                                    goto $l1269;
                                    $l1340:;
                                    $tmp1264 = 4;
                                    goto $l1262;
                                    $l1341:;
                                    $tmp1112 = 11;
                                    goto $l1110;
                                    $l1342:;
                                    return $finallyReturn1337;
                                }
                                }
                            }
                            $tmp1271 = -1;
                            goto $l1269;
                            $l1269:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1272));
                            types1272 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1276));
                            t1276 = NULL;
                            switch ($tmp1271) {
                                case 3: goto $l1336;
                                case 0: goto $l1282;
                                case 2: goto $l1306;
                                case 1: goto $l1297;
                                case -1: goto $l1344;
                                case 4: goto $l1340;
                            }
                            $l1344:;
                        }
                        }
                        $tmp1346 = result1113;
                        $finallyReturn1344 = $tmp1346;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1346));
                        $tmp1264 = 5;
                        goto $l1262;
                        $l1347:;
                        $tmp1112 = 12;
                        goto $l1110;
                        $l1348:;
                        return $finallyReturn1344;
                    }
                    $l1262:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1265));
                    name1265 = NULL;
                    switch ($tmp1264) {
                        case 2: goto $l1307;
                        case 1: goto $l1298;
                        case 0: goto $l1283;
                        case 5: goto $l1347;
                        case 4: goto $l1341;
                        case 3: goto $l1337;
                    }
                    $l1350:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1123);
                    $tmp1352 = result1113;
                    $finallyReturn1350 = $tmp1352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                    $tmp1112 = 13;
                    goto $l1110;
                    $l1353:;
                    return $finallyReturn1350;
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
        case 9: goto $l1299;
        case 3: goto $l1179;
        case -1: goto $l1355;
        case 6: goto $l1235;
        case 1: goto $l1151;
        case 4: goto $l1202;
        case 2: goto $l1168;
        case 13: goto $l1353;
        case 8: goto $l1284;
        case 12: goto $l1348;
        case 11: goto $l1342;
        case 5: goto $l1210;
        case 7: goto $l1253;
        case 0: goto $l1119;
        case 10: goto $l1308;
    }
    $l1355:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1359 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1360;
    org$pandalanguage$pandac$ASTNode* $tmp1361;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1362;
    org$pandalanguage$pandac$ASTNode* $tmp1364;
    org$pandalanguage$pandac$parser$Token$nullable op1372;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1373;
    org$pandalanguage$pandac$ASTNode* next1376 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1377;
    org$pandalanguage$pandac$ASTNode* $tmp1378;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1379;
    org$pandalanguage$pandac$ASTNode* $tmp1381;
    org$pandalanguage$pandac$ASTNode* $tmp1385;
    org$pandalanguage$pandac$ASTNode* $tmp1386;
    org$pandalanguage$pandac$ASTNode* $tmp1387;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1389;
    org$pandalanguage$pandac$ASTNode* $tmp1391;
    int $tmp1358;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1362 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1361 = $tmp1362;
        $tmp1360 = $tmp1361;
        result1359 = $tmp1360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
        if (((panda$core$Bit) { result1359 == NULL }).value) {
        {
            $tmp1364 = NULL;
            $finallyReturn1362 = $tmp1364;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
            $tmp1358 = 0;
            goto $l1356;
            $l1365:;
            return $finallyReturn1362;
        }
        }
        $l1367:;
        while (true) {
        {
            int $tmp1371;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1373, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1374 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1373);
                op1372 = $tmp1374;
                if (((panda$core$Bit) { !op1372.nonnull }).value) {
                {
                    $tmp1371 = 0;
                    goto $l1369;
                    $l1375:;
                    goto $l1368;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1379 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1378 = $tmp1379;
                $tmp1377 = $tmp1378;
                next1376 = $tmp1377;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
                if (((panda$core$Bit) { next1376 == NULL }).value) {
                {
                    $tmp1381 = NULL;
                    $finallyReturn1379 = $tmp1381;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
                    $tmp1371 = 1;
                    goto $l1369;
                    $l1382:;
                    $tmp1358 = 1;
                    goto $l1356;
                    $l1383:;
                    return $finallyReturn1379;
                }
                }
                {
                    $tmp1385 = result1359;
                    org$pandalanguage$pandac$ASTNode* $tmp1388 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1388, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1372.value).position, result1359, ((org$pandalanguage$pandac$parser$Token) op1372.value).kind, next1376);
                    $tmp1387 = $tmp1388;
                    $tmp1386 = $tmp1387;
                    result1359 = $tmp1386;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                }
            }
            $tmp1371 = -1;
            goto $l1369;
            $l1369:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1376));
            next1376 = NULL;
            switch ($tmp1371) {
                case 0: goto $l1375;
                case 1: goto $l1382;
                case -1: goto $l1389;
            }
            $l1389:;
        }
        }
        $l1368:;
        $tmp1391 = result1359;
        $finallyReturn1389 = $tmp1391;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
        $tmp1358 = 2;
        goto $l1356;
        $l1392:;
        return $finallyReturn1389;
    }
    $l1356:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1359));
    result1359 = NULL;
    switch ($tmp1358) {
        case 1: goto $l1383;
        case 2: goto $l1392;
        case 0: goto $l1365;
    }
    $l1394:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1395;
    org$pandalanguage$pandac$parser$Token$Kind $match$700_91397;
    org$pandalanguage$pandac$ASTNode* base1410 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1411;
    org$pandalanguage$pandac$ASTNode* $tmp1412;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1413;
    org$pandalanguage$pandac$ASTNode* $tmp1415;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1417;
    org$pandalanguage$pandac$ASTNode* $tmp1419;
    org$pandalanguage$pandac$ASTNode* $tmp1420;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1424;
    org$pandalanguage$pandac$ASTNode* $tmp1426;
    org$pandalanguage$pandac$ASTNode* $tmp1427;
    org$pandalanguage$pandac$parser$Token $tmp1396 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1395 = $tmp1396;
    {
        $match$700_91397 = op1395.kind;
        panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700_91397.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1399 = $tmp1400.value;
        if ($tmp1399) goto $l1401;
        panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700_91397.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1399 = $tmp1402.value;
        $l1401:;
        panda$core$Bit $tmp1403 = { $tmp1399 };
        bool $tmp1398 = $tmp1403.value;
        if ($tmp1398) goto $l1404;
        panda$core$Bit $tmp1405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$700_91397.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1398 = $tmp1405.value;
        $l1404:;
        panda$core$Bit $tmp1406 = { $tmp1398 };
        if ($tmp1406.value) {
        {
            int $tmp1409;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1413 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1412 = $tmp1413;
                $tmp1411 = $tmp1412;
                base1410 = $tmp1411;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
                if (((panda$core$Bit) { base1410 == NULL }).value) {
                {
                    $tmp1415 = NULL;
                    $finallyReturn1413 = $tmp1415;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1415));
                    $tmp1409 = 0;
                    goto $l1407;
                    $l1416:;
                    return $finallyReturn1413;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1421 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1421, ((panda$core$Int64) { 29 }), op1395.position, op1395.kind, base1410);
                $tmp1420 = $tmp1421;
                $tmp1419 = $tmp1420;
                $finallyReturn1417 = $tmp1419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                $tmp1409 = 1;
                goto $l1407;
                $l1422:;
                return $finallyReturn1417;
            }
            $l1407:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1410));
            base1410 = NULL;
            switch ($tmp1409) {
                case 1: goto $l1422;
                case 0: goto $l1416;
            }
            $l1424:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1395);
            org$pandalanguage$pandac$ASTNode* $tmp1428 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1427 = $tmp1428;
            $tmp1426 = $tmp1427;
            $finallyReturn1424 = $tmp1426;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
            return $finallyReturn1424;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1434;
    org$pandalanguage$pandac$ASTNode* $tmp1435;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1436;
    org$pandalanguage$pandac$ASTNode* $tmp1438;
    org$pandalanguage$pandac$parser$Token op1443;
    org$pandalanguage$pandac$parser$Token$Kind $match$726_131445;
    org$pandalanguage$pandac$ASTNode* next1474 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1475;
    org$pandalanguage$pandac$ASTNode* $tmp1476;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1477;
    org$pandalanguage$pandac$ASTNode* $tmp1479;
    org$pandalanguage$pandac$ASTNode* $tmp1483;
    org$pandalanguage$pandac$ASTNode* $tmp1484;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    org$pandalanguage$pandac$parser$Token nextToken1489;
    org$pandalanguage$pandac$ASTNode* next1495 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1496;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1498;
    org$pandalanguage$pandac$ASTNode* $tmp1500;
    org$pandalanguage$pandac$ASTNode* $tmp1504;
    org$pandalanguage$pandac$ASTNode* $tmp1505;
    org$pandalanguage$pandac$ASTNode* $tmp1506;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1508;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1509;
    org$pandalanguage$pandac$ASTNode* $tmp1511;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1513;
    org$pandalanguage$pandac$ASTNode* $tmp1515;
    int $tmp1432;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1436 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1435 = $tmp1436;
        $tmp1434 = $tmp1435;
        result1433 = $tmp1434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
        if (((panda$core$Bit) { result1433 == NULL }).value) {
        {
            $tmp1438 = NULL;
            $finallyReturn1436 = $tmp1438;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1438));
            $tmp1432 = 0;
            goto $l1430;
            $l1439:;
            return $finallyReturn1436;
        }
        }
        $l1441:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1444 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1443 = $tmp1444;
            {
                $match$726_131445 = op1443.kind;
                panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1451 = $tmp1452.value;
                if ($tmp1451) goto $l1453;
                panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1451 = $tmp1454.value;
                $l1453:;
                panda$core$Bit $tmp1455 = { $tmp1451 };
                bool $tmp1450 = $tmp1455.value;
                if ($tmp1450) goto $l1456;
                panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1450 = $tmp1457.value;
                $l1456:;
                panda$core$Bit $tmp1458 = { $tmp1450 };
                bool $tmp1449 = $tmp1458.value;
                if ($tmp1449) goto $l1459;
                panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1449 = $tmp1460.value;
                $l1459:;
                panda$core$Bit $tmp1461 = { $tmp1449 };
                bool $tmp1448 = $tmp1461.value;
                if ($tmp1448) goto $l1462;
                panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1448 = $tmp1463.value;
                $l1462:;
                panda$core$Bit $tmp1464 = { $tmp1448 };
                bool $tmp1447 = $tmp1464.value;
                if ($tmp1447) goto $l1465;
                panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1447 = $tmp1466.value;
                $l1465:;
                panda$core$Bit $tmp1467 = { $tmp1447 };
                bool $tmp1446 = $tmp1467.value;
                if ($tmp1446) goto $l1468;
                panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1446 = $tmp1469.value;
                $l1468:;
                panda$core$Bit $tmp1470 = { $tmp1446 };
                if ($tmp1470.value) {
                {
                    int $tmp1473;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1477 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1476 = $tmp1477;
                        $tmp1475 = $tmp1476;
                        next1474 = $tmp1475;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1475));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1476));
                        if (((panda$core$Bit) { next1474 == NULL }).value) {
                        {
                            $tmp1479 = NULL;
                            $finallyReturn1477 = $tmp1479;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
                            $tmp1473 = 0;
                            goto $l1471;
                            $l1480:;
                            $tmp1432 = 1;
                            goto $l1430;
                            $l1481:;
                            return $finallyReturn1477;
                        }
                        }
                        {
                            $tmp1483 = result1433;
                            org$pandalanguage$pandac$ASTNode* $tmp1486 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1486, ((panda$core$Int64) { 2 }), op1443.position, result1433, op1443.kind, next1474);
                            $tmp1485 = $tmp1486;
                            $tmp1484 = $tmp1485;
                            result1433 = $tmp1484;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1484));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1485));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
                        }
                    }
                    $tmp1473 = -1;
                    goto $l1471;
                    $l1471:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1474));
                    next1474 = NULL;
                    switch ($tmp1473) {
                        case 0: goto $l1480;
                        case -1: goto $l1487;
                    }
                    $l1487:;
                }
                }
                else {
                panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_131445.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1488.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp1490 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken1489 = $tmp1490;
                    panda$core$Bit $tmp1491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1489.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp1491.value) {
                    {
                        int $tmp1494;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1498 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1497 = $tmp1498;
                            $tmp1496 = $tmp1497;
                            next1495 = $tmp1496;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1497));
                            if (((panda$core$Bit) { next1495 == NULL }).value) {
                            {
                                $tmp1500 = NULL;
                                $finallyReturn1498 = $tmp1500;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1500));
                                $tmp1494 = 0;
                                goto $l1492;
                                $l1501:;
                                $tmp1432 = 2;
                                goto $l1430;
                                $l1502:;
                                return $finallyReturn1498;
                            }
                            }
                            {
                                $tmp1504 = result1433;
                                org$pandalanguage$pandac$ASTNode* $tmp1507 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1508, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1507, ((panda$core$Int64) { 2 }), op1443.position, result1433, $tmp1508, next1495);
                                $tmp1506 = $tmp1507;
                                $tmp1505 = $tmp1506;
                                result1433 = $tmp1505;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1505));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                            }
                        }
                        $tmp1494 = -1;
                        goto $l1492;
                        $l1492:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1495));
                        next1495 = NULL;
                        switch ($tmp1494) {
                            case 0: goto $l1501;
                            case -1: goto $l1509;
                        }
                        $l1509:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1489);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1443);
                        $tmp1511 = result1433;
                        $finallyReturn1509 = $tmp1511;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
                        $tmp1432 = 3;
                        goto $l1430;
                        $l1512:;
                        return $finallyReturn1509;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1443);
                    $tmp1515 = result1433;
                    $finallyReturn1513 = $tmp1515;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1515));
                    $tmp1432 = 4;
                    goto $l1430;
                    $l1516:;
                    return $finallyReturn1513;
                }
                }
                }
            }
        }
        }
        $l1442:;
    }
    $tmp1432 = -1;
    goto $l1430;
    $l1430:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1433));
    result1433 = NULL;
    switch ($tmp1432) {
        case 4: goto $l1516;
        case 3: goto $l1512;
        case 1: goto $l1481;
        case 2: goto $l1502;
        case 0: goto $l1439;
        case -1: goto $l1518;
    }
    $l1518:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1522 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1523;
    org$pandalanguage$pandac$ASTNode* $tmp1524;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1525;
    org$pandalanguage$pandac$ASTNode* $tmp1527;
    org$pandalanguage$pandac$parser$Token op1532;
    org$pandalanguage$pandac$parser$Token$Kind $match$767_131534;
    org$pandalanguage$pandac$ASTNode* next1547 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1548;
    org$pandalanguage$pandac$ASTNode* $tmp1549;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1550;
    org$pandalanguage$pandac$ASTNode* $tmp1552;
    org$pandalanguage$pandac$ASTNode* $tmp1556;
    org$pandalanguage$pandac$ASTNode* $tmp1557;
    org$pandalanguage$pandac$ASTNode* $tmp1558;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1560;
    org$pandalanguage$pandac$ASTNode* $tmp1562;
    int $tmp1521;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1525 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1524 = $tmp1525;
        $tmp1523 = $tmp1524;
        result1522 = $tmp1523;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
        if (((panda$core$Bit) { result1522 == NULL }).value) {
        {
            $tmp1527 = NULL;
            $finallyReturn1525 = $tmp1527;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1527));
            $tmp1521 = 0;
            goto $l1519;
            $l1528:;
            return $finallyReturn1525;
        }
        }
        $l1530:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1533 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1532 = $tmp1533;
            {
                $match$767_131534 = op1532.kind;
                panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767_131534.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp1536 = $tmp1537.value;
                if ($tmp1536) goto $l1538;
                panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767_131534.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp1536 = $tmp1539.value;
                $l1538:;
                panda$core$Bit $tmp1540 = { $tmp1536 };
                bool $tmp1535 = $tmp1540.value;
                if ($tmp1535) goto $l1541;
                panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$767_131534.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp1535 = $tmp1542.value;
                $l1541:;
                panda$core$Bit $tmp1543 = { $tmp1535 };
                if ($tmp1543.value) {
                {
                    int $tmp1546;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1549 = $tmp1550;
                        $tmp1548 = $tmp1549;
                        next1547 = $tmp1548;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
                        if (((panda$core$Bit) { next1547 == NULL }).value) {
                        {
                            $tmp1552 = NULL;
                            $finallyReturn1550 = $tmp1552;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                            $tmp1546 = 0;
                            goto $l1544;
                            $l1553:;
                            $tmp1521 = 1;
                            goto $l1519;
                            $l1554:;
                            return $finallyReturn1550;
                        }
                        }
                        {
                            $tmp1556 = result1522;
                            org$pandalanguage$pandac$ASTNode* $tmp1559 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1559, ((panda$core$Int64) { 2 }), op1532.position, result1522, op1532.kind, next1547);
                            $tmp1558 = $tmp1559;
                            $tmp1557 = $tmp1558;
                            result1522 = $tmp1557;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1557));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
                        }
                    }
                    $tmp1546 = -1;
                    goto $l1544;
                    $l1544:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1547));
                    next1547 = NULL;
                    switch ($tmp1546) {
                        case -1: goto $l1560;
                        case 0: goto $l1553;
                    }
                    $l1560:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1532);
                    $tmp1562 = result1522;
                    $finallyReturn1560 = $tmp1562;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1562));
                    $tmp1521 = 2;
                    goto $l1519;
                    $l1563:;
                    return $finallyReturn1560;
                }
                }
            }
        }
        }
        $l1531:;
    }
    $tmp1521 = -1;
    goto $l1519;
    $l1519:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1522));
    result1522 = NULL;
    switch ($tmp1521) {
        case 2: goto $l1563;
        case 1: goto $l1554;
        case -1: goto $l1565;
        case 0: goto $l1528;
    }
    $l1565:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1569 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$787_91570;
    org$pandalanguage$pandac$ASTNode* $tmp1577;
    org$pandalanguage$pandac$ASTNode* $tmp1578;
    org$pandalanguage$pandac$ASTNode* $tmp1579;
    org$pandalanguage$pandac$ASTNode* $tmp1580;
    org$pandalanguage$pandac$ASTNode* $tmp1581;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1582;
    org$pandalanguage$pandac$ASTNode* $tmp1584;
    org$pandalanguage$pandac$parser$Token op1587;
    org$pandalanguage$pandac$parser$Token$Kind $match$797_91589;
    org$pandalanguage$pandac$parser$Token next1598;
    org$pandalanguage$pandac$ASTNode* right1600 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1610;
    org$pandalanguage$pandac$ASTNode* $tmp1611;
    org$pandalanguage$pandac$ASTNode* $tmp1612;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1613;
    org$pandalanguage$pandac$ASTNode* $tmp1615;
    org$pandalanguage$pandac$ASTNode* $tmp1619;
    org$pandalanguage$pandac$ASTNode* $tmp1620;
    org$pandalanguage$pandac$ASTNode* step1621 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1622;
    org$pandalanguage$pandac$ASTNode* $tmp1624;
    org$pandalanguage$pandac$ASTNode* $tmp1625;
    org$pandalanguage$pandac$ASTNode* $tmp1626;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1627;
    org$pandalanguage$pandac$ASTNode* $tmp1629;
    org$pandalanguage$pandac$ASTNode* $tmp1633;
    org$pandalanguage$pandac$ASTNode* $tmp1634;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1634;
    org$pandalanguage$pandac$ASTNode* $tmp1636;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1643;
    org$pandalanguage$pandac$ASTNode* $tmp1645;
    int $tmp1568;
    {
        memset(&result1569, 0, sizeof(result1569));
        {
            org$pandalanguage$pandac$parser$Token $tmp1571 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$787_91570 = $tmp1571.kind;
            panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$787_91570.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1572 = $tmp1573.value;
            if ($tmp1572) goto $l1574;
            panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$787_91570.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1572 = $tmp1575.value;
            $l1574:;
            panda$core$Bit $tmp1576 = { $tmp1572 };
            if ($tmp1576.value) {
            {
                {
                    $tmp1577 = result1569;
                    $tmp1578 = NULL;
                    result1569 = $tmp1578;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1578));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
                }
            }
            }
            else {
            {
                {
                    $tmp1579 = result1569;
                    org$pandalanguage$pandac$ASTNode* $tmp1582 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1581 = $tmp1582;
                    $tmp1580 = $tmp1581;
                    result1569 = $tmp1580;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1579));
                }
                if (((panda$core$Bit) { result1569 == NULL }).value) {
                {
                    $tmp1584 = NULL;
                    $finallyReturn1582 = $tmp1584;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
                    $tmp1568 = 0;
                    goto $l1566;
                    $l1585:;
                    return $finallyReturn1582;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp1588 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1587 = $tmp1588;
        {
            $match$797_91589 = op1587.kind;
            panda$core$Bit $tmp1591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$797_91589.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1590 = $tmp1591.value;
            if ($tmp1590) goto $l1592;
            panda$core$Bit $tmp1593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$797_91589.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1590 = $tmp1593.value;
            $l1592:;
            panda$core$Bit $tmp1594 = { $tmp1590 };
            if ($tmp1594.value) {
            {
                int $tmp1597;
                {
                    org$pandalanguage$pandac$parser$Token $tmp1599 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next1598 = $tmp1599;
                    memset(&right1600, 0, sizeof(right1600));
                    panda$core$Bit $tmp1603 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1598.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp1602 = $tmp1603.value;
                    if (!$tmp1602) goto $l1604;
                    panda$core$Bit $tmp1605 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1598.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp1602 = $tmp1605.value;
                    $l1604:;
                    panda$core$Bit $tmp1606 = { $tmp1602 };
                    bool $tmp1601 = $tmp1606.value;
                    if (!$tmp1601) goto $l1607;
                    panda$core$Bit $tmp1608 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1598.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp1601 = $tmp1608.value;
                    $l1607:;
                    panda$core$Bit $tmp1609 = { $tmp1601 };
                    if ($tmp1609.value) {
                    {
                        {
                            $tmp1610 = right1600;
                            org$pandalanguage$pandac$ASTNode* $tmp1613 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1612 = $tmp1613;
                            $tmp1611 = $tmp1612;
                            right1600 = $tmp1611;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1611));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                        }
                        if (((panda$core$Bit) { right1600 == NULL }).value) {
                        {
                            $tmp1615 = NULL;
                            $finallyReturn1613 = $tmp1615;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1615));
                            $tmp1597 = 0;
                            goto $l1595;
                            $l1616:;
                            $tmp1568 = 1;
                            goto $l1566;
                            $l1617:;
                            return $finallyReturn1613;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1619 = right1600;
                            $tmp1620 = NULL;
                            right1600 = $tmp1620;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
                        }
                    }
                    }
                    memset(&step1621, 0, sizeof(step1621));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1622, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1623 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1622);
                    if (((panda$core$Bit) { $tmp1623.nonnull }).value) {
                    {
                        {
                            $tmp1624 = step1621;
                            org$pandalanguage$pandac$ASTNode* $tmp1627 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1626 = $tmp1627;
                            $tmp1625 = $tmp1626;
                            step1621 = $tmp1625;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1625));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
                        }
                        if (((panda$core$Bit) { step1621 == NULL }).value) {
                        {
                            $tmp1629 = NULL;
                            $finallyReturn1627 = $tmp1629;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1629));
                            $tmp1597 = 1;
                            goto $l1595;
                            $l1630:;
                            $tmp1568 = 2;
                            goto $l1566;
                            $l1631:;
                            return $finallyReturn1627;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1633 = step1621;
                            $tmp1634 = NULL;
                            step1621 = $tmp1634;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1634));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1638 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op1587.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp1638, ((panda$core$Int64) { 30 }), op1587.position, result1569, right1600, $tmp1639, step1621);
                    $tmp1637 = $tmp1638;
                    $tmp1636 = $tmp1637;
                    $finallyReturn1634 = $tmp1636;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                    $tmp1597 = 2;
                    goto $l1595;
                    $l1640:;
                    $tmp1568 = 3;
                    goto $l1566;
                    $l1641:;
                    return $finallyReturn1634;
                }
                $l1595:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1621));
                switch ($tmp1597) {
                    case 0: goto $l1616;
                    case 2: goto $l1640;
                    case 1: goto $l1630;
                }
                $l1643:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1587);
                $tmp1645 = result1569;
                $finallyReturn1643 = $tmp1645;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
                $tmp1568 = 4;
                goto $l1566;
                $l1646:;
                return $finallyReturn1643;
            }
            }
        }
    }
    $tmp1568 = -1;
    goto $l1566;
    $l1566:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1569));
    switch ($tmp1568) {
        case 2: goto $l1631;
        case 0: goto $l1585;
        case -1: goto $l1648;
        case 1: goto $l1617;
        case 4: goto $l1646;
        case 3: goto $l1641;
    }
    $l1648:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1652 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1653;
    org$pandalanguage$pandac$ASTNode* $tmp1654;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1655;
    org$pandalanguage$pandac$ASTNode* $tmp1657;
    org$pandalanguage$pandac$parser$Token op1662;
    org$pandalanguage$pandac$parser$Token$Kind $match$840_131664;
    org$pandalanguage$pandac$ASTNode* next1697 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1698;
    org$pandalanguage$pandac$ASTNode* $tmp1699;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1700;
    org$pandalanguage$pandac$ASTNode* $tmp1702;
    org$pandalanguage$pandac$ASTNode* $tmp1706;
    org$pandalanguage$pandac$ASTNode* $tmp1707;
    org$pandalanguage$pandac$ASTNode* $tmp1708;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1710;
    org$pandalanguage$pandac$ASTNode* $tmp1712;
    int $tmp1651;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1655 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1654 = $tmp1655;
        $tmp1653 = $tmp1654;
        result1652 = $tmp1653;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
        if (((panda$core$Bit) { result1652 == NULL }).value) {
        {
            $tmp1657 = NULL;
            $finallyReturn1655 = $tmp1657;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1657));
            $tmp1651 = 0;
            goto $l1649;
            $l1658:;
            return $finallyReturn1655;
        }
        }
        $l1660:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1663 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1662 = $tmp1663;
            {
                $match$840_131664 = op1662.kind;
                panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp1671 = $tmp1672.value;
                if ($tmp1671) goto $l1673;
                panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp1671 = $tmp1674.value;
                $l1673:;
                panda$core$Bit $tmp1675 = { $tmp1671 };
                bool $tmp1670 = $tmp1675.value;
                if ($tmp1670) goto $l1676;
                panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp1670 = $tmp1677.value;
                $l1676:;
                panda$core$Bit $tmp1678 = { $tmp1670 };
                bool $tmp1669 = $tmp1678.value;
                if ($tmp1669) goto $l1679;
                panda$core$Bit $tmp1680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp1669 = $tmp1680.value;
                $l1679:;
                panda$core$Bit $tmp1681 = { $tmp1669 };
                bool $tmp1668 = $tmp1681.value;
                if ($tmp1668) goto $l1682;
                panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp1668 = $tmp1683.value;
                $l1682:;
                panda$core$Bit $tmp1684 = { $tmp1668 };
                bool $tmp1667 = $tmp1684.value;
                if ($tmp1667) goto $l1685;
                panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp1667 = $tmp1686.value;
                $l1685:;
                panda$core$Bit $tmp1687 = { $tmp1667 };
                bool $tmp1666 = $tmp1687.value;
                if ($tmp1666) goto $l1688;
                panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp1666 = $tmp1689.value;
                $l1688:;
                panda$core$Bit $tmp1690 = { $tmp1666 };
                bool $tmp1665 = $tmp1690.value;
                if ($tmp1665) goto $l1691;
                panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$840_131664.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp1665 = $tmp1692.value;
                $l1691:;
                panda$core$Bit $tmp1693 = { $tmp1665 };
                if ($tmp1693.value) {
                {
                    int $tmp1696;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1700 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1699 = $tmp1700;
                        $tmp1698 = $tmp1699;
                        next1697 = $tmp1698;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1698));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1699));
                        if (((panda$core$Bit) { next1697 == NULL }).value) {
                        {
                            $tmp1702 = NULL;
                            $finallyReturn1700 = $tmp1702;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1702));
                            $tmp1696 = 0;
                            goto $l1694;
                            $l1703:;
                            $tmp1651 = 1;
                            goto $l1649;
                            $l1704:;
                            return $finallyReturn1700;
                        }
                        }
                        {
                            $tmp1706 = result1652;
                            org$pandalanguage$pandac$ASTNode* $tmp1709 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1709, ((panda$core$Int64) { 2 }), op1662.position, result1652, op1662.kind, next1697);
                            $tmp1708 = $tmp1709;
                            $tmp1707 = $tmp1708;
                            result1652 = $tmp1707;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1707));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1708));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
                        }
                    }
                    $tmp1696 = -1;
                    goto $l1694;
                    $l1694:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1697));
                    next1697 = NULL;
                    switch ($tmp1696) {
                        case 0: goto $l1703;
                        case -1: goto $l1710;
                    }
                    $l1710:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1662);
                    $tmp1712 = result1652;
                    $finallyReturn1710 = $tmp1712;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1712));
                    $tmp1651 = 2;
                    goto $l1649;
                    $l1713:;
                    return $finallyReturn1710;
                }
                }
            }
        }
        }
        $l1661:;
    }
    $tmp1651 = -1;
    goto $l1649;
    $l1649:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1652));
    result1652 = NULL;
    switch ($tmp1651) {
        case 2: goto $l1713;
        case 1: goto $l1704;
        case 0: goto $l1658;
        case -1: goto $l1715;
    }
    $l1715:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1719 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1720;
    org$pandalanguage$pandac$ASTNode* $tmp1721;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1722;
    org$pandalanguage$pandac$ASTNode* $tmp1724;
    org$pandalanguage$pandac$parser$Token op1729;
    org$pandalanguage$pandac$parser$Token$Kind $match$871_131731;
    org$pandalanguage$pandac$ASTNode* next1740 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1741;
    org$pandalanguage$pandac$ASTNode* $tmp1742;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1743;
    org$pandalanguage$pandac$ASTNode* $tmp1745;
    org$pandalanguage$pandac$ASTNode* $tmp1749;
    org$pandalanguage$pandac$ASTNode* $tmp1750;
    org$pandalanguage$pandac$ASTNode* $tmp1751;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1753;
    org$pandalanguage$pandac$ASTNode* $tmp1755;
    int $tmp1718;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1722 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1721 = $tmp1722;
        $tmp1720 = $tmp1721;
        result1719 = $tmp1720;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
        if (((panda$core$Bit) { result1719 == NULL }).value) {
        {
            $tmp1724 = NULL;
            $finallyReturn1722 = $tmp1724;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1724));
            $tmp1718 = 0;
            goto $l1716;
            $l1725:;
            return $finallyReturn1722;
        }
        }
        $l1727:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1730 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1729 = $tmp1730;
            {
                $match$871_131731 = op1729.kind;
                panda$core$Bit $tmp1733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$871_131731.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp1732 = $tmp1733.value;
                if ($tmp1732) goto $l1734;
                panda$core$Bit $tmp1735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$871_131731.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp1732 = $tmp1735.value;
                $l1734:;
                panda$core$Bit $tmp1736 = { $tmp1732 };
                if ($tmp1736.value) {
                {
                    int $tmp1739;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1743 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1742 = $tmp1743;
                        $tmp1741 = $tmp1742;
                        next1740 = $tmp1741;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1741));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                        if (((panda$core$Bit) { next1740 == NULL }).value) {
                        {
                            $tmp1745 = NULL;
                            $finallyReturn1743 = $tmp1745;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
                            $tmp1739 = 0;
                            goto $l1737;
                            $l1746:;
                            $tmp1718 = 1;
                            goto $l1716;
                            $l1747:;
                            return $finallyReturn1743;
                        }
                        }
                        {
                            $tmp1749 = result1719;
                            org$pandalanguage$pandac$ASTNode* $tmp1752 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1752, ((panda$core$Int64) { 2 }), op1729.position, result1719, op1729.kind, next1740);
                            $tmp1751 = $tmp1752;
                            $tmp1750 = $tmp1751;
                            result1719 = $tmp1750;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
                        }
                    }
                    $tmp1739 = -1;
                    goto $l1737;
                    $l1737:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1740));
                    next1740 = NULL;
                    switch ($tmp1739) {
                        case -1: goto $l1753;
                        case 0: goto $l1746;
                    }
                    $l1753:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1729);
                    $tmp1755 = result1719;
                    $finallyReturn1753 = $tmp1755;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1755));
                    $tmp1718 = 2;
                    goto $l1716;
                    $l1756:;
                    return $finallyReturn1753;
                }
                }
            }
        }
        }
        $l1728:;
    }
    $tmp1718 = -1;
    goto $l1716;
    $l1716:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1719));
    result1719 = NULL;
    switch ($tmp1718) {
        case 2: goto $l1756;
        case 1: goto $l1747;
        case -1: goto $l1758;
        case 0: goto $l1725;
    }
    $l1758:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1762 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1763;
    org$pandalanguage$pandac$ASTNode* $tmp1764;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1765;
    org$pandalanguage$pandac$ASTNode* $tmp1767;
    org$pandalanguage$pandac$parser$Token$nullable op1775;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1776;
    org$pandalanguage$pandac$ASTNode* next1779 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1780;
    org$pandalanguage$pandac$ASTNode* $tmp1781;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1782;
    org$pandalanguage$pandac$ASTNode* $tmp1784;
    org$pandalanguage$pandac$ASTNode* $tmp1788;
    org$pandalanguage$pandac$ASTNode* $tmp1789;
    org$pandalanguage$pandac$ASTNode* $tmp1790;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1792;
    org$pandalanguage$pandac$ASTNode* $tmp1794;
    int $tmp1761;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1765 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1764 = $tmp1765;
        $tmp1763 = $tmp1764;
        result1762 = $tmp1763;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
        if (((panda$core$Bit) { result1762 == NULL }).value) {
        {
            $tmp1767 = NULL;
            $finallyReturn1765 = $tmp1767;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1767));
            $tmp1761 = 0;
            goto $l1759;
            $l1768:;
            return $finallyReturn1765;
        }
        }
        $l1770:;
        while (true) {
        {
            int $tmp1774;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1776, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1777 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1776);
                op1775 = $tmp1777;
                if (((panda$core$Bit) { !op1775.nonnull }).value) {
                {
                    $tmp1774 = 0;
                    goto $l1772;
                    $l1778:;
                    goto $l1771;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1782 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1781 = $tmp1782;
                $tmp1780 = $tmp1781;
                next1779 = $tmp1780;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1780));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1781));
                if (((panda$core$Bit) { next1779 == NULL }).value) {
                {
                    $tmp1784 = NULL;
                    $finallyReturn1782 = $tmp1784;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
                    $tmp1774 = 1;
                    goto $l1772;
                    $l1785:;
                    $tmp1761 = 1;
                    goto $l1759;
                    $l1786:;
                    return $finallyReturn1782;
                }
                }
                {
                    $tmp1788 = result1762;
                    org$pandalanguage$pandac$ASTNode* $tmp1791 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1791, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1775.value).position, result1762, ((org$pandalanguage$pandac$parser$Token) op1775.value).kind, next1779);
                    $tmp1790 = $tmp1791;
                    $tmp1789 = $tmp1790;
                    result1762 = $tmp1789;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1789));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                }
            }
            $tmp1774 = -1;
            goto $l1772;
            $l1772:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1779));
            next1779 = NULL;
            switch ($tmp1774) {
                case -1: goto $l1792;
                case 0: goto $l1778;
                case 1: goto $l1785;
            }
            $l1792:;
        }
        }
        $l1771:;
        $tmp1794 = result1762;
        $finallyReturn1792 = $tmp1794;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1794));
        $tmp1761 = 2;
        goto $l1759;
        $l1795:;
        return $finallyReturn1792;
    }
    $l1759:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1762));
    result1762 = NULL;
    switch ($tmp1761) {
        case 1: goto $l1786;
        case 2: goto $l1795;
        case 0: goto $l1768;
    }
    $l1797:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1801;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1802;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1804;
    org$pandalanguage$pandac$ASTNode* $tmp1806;
    org$pandalanguage$pandac$ASTNode* test1809 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1810;
    org$pandalanguage$pandac$ASTNode* $tmp1811;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1812;
    org$pandalanguage$pandac$ASTNode* $tmp1814;
    panda$collections$ImmutableArray* ifTrue1817 = NULL;
    panda$collections$ImmutableArray* $tmp1818;
    panda$collections$ImmutableArray* $tmp1819;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1820;
    org$pandalanguage$pandac$ASTNode* $tmp1822;
    org$pandalanguage$pandac$ASTNode* ifFalse1825 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1826;
    org$pandalanguage$pandac$ASTNode* $tmp1830;
    org$pandalanguage$pandac$ASTNode* $tmp1831;
    org$pandalanguage$pandac$ASTNode* $tmp1832;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1833;
    org$pandalanguage$pandac$ASTNode* $tmp1835;
    org$pandalanguage$pandac$ASTNode* $tmp1838;
    org$pandalanguage$pandac$ASTNode* $tmp1839;
    org$pandalanguage$pandac$ASTNode* $tmp1840;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1841;
    org$pandalanguage$pandac$ASTNode* $tmp1843;
    org$pandalanguage$pandac$ASTNode* $tmp1846;
    org$pandalanguage$pandac$ASTNode* $tmp1847;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1847;
    org$pandalanguage$pandac$ASTNode* $tmp1849;
    org$pandalanguage$pandac$ASTNode* $tmp1850;
    int $tmp1800;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1802, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1804 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1802, &$s1803);
        start1801 = $tmp1804;
        if (((panda$core$Bit) { !start1801.nonnull }).value) {
        {
            $tmp1806 = NULL;
            $finallyReturn1804 = $tmp1806;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1806));
            $tmp1800 = 0;
            goto $l1798;
            $l1807:;
            return $finallyReturn1804;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1812 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1811 = $tmp1812;
        $tmp1810 = $tmp1811;
        test1809 = $tmp1810;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1810));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1811));
        if (((panda$core$Bit) { test1809 == NULL }).value) {
        {
            $tmp1814 = NULL;
            $finallyReturn1812 = $tmp1814;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
            $tmp1800 = 1;
            goto $l1798;
            $l1815:;
            return $finallyReturn1812;
        }
        }
        panda$collections$ImmutableArray* $tmp1820 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1819 = $tmp1820;
        $tmp1818 = $tmp1819;
        ifTrue1817 = $tmp1818;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
        if (((panda$core$Bit) { ifTrue1817 == NULL }).value) {
        {
            $tmp1822 = NULL;
            $finallyReturn1820 = $tmp1822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
            $tmp1800 = 2;
            goto $l1798;
            $l1823:;
            return $finallyReturn1820;
        }
        }
        memset(&ifFalse1825, 0, sizeof(ifFalse1825));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1826, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1827 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1826);
        if (((panda$core$Bit) { $tmp1827.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1828 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp1829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1828.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1829.value) {
            {
                {
                    $tmp1830 = ifFalse1825;
                    org$pandalanguage$pandac$ASTNode* $tmp1833 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1832 = $tmp1833;
                    $tmp1831 = $tmp1832;
                    ifFalse1825 = $tmp1831;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1831));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1832));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
                }
                if (((panda$core$Bit) { ifFalse1825 == NULL }).value) {
                {
                    $tmp1835 = NULL;
                    $finallyReturn1833 = $tmp1835;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1835));
                    $tmp1800 = 3;
                    goto $l1798;
                    $l1836:;
                    return $finallyReturn1833;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp1838 = ifFalse1825;
                    org$pandalanguage$pandac$ASTNode* $tmp1841 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1840 = $tmp1841;
                    $tmp1839 = $tmp1840;
                    ifFalse1825 = $tmp1839;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1840));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1838));
                }
                if (((panda$core$Bit) { ifFalse1825 == NULL }).value) {
                {
                    $tmp1843 = NULL;
                    $finallyReturn1841 = $tmp1843;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1843));
                    $tmp1800 = 4;
                    goto $l1798;
                    $l1844:;
                    return $finallyReturn1841;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp1846 = ifFalse1825;
                $tmp1847 = NULL;
                ifFalse1825 = $tmp1847;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1847));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1851 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1851, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1801.value).position, test1809, ifTrue1817, ifFalse1825);
        $tmp1850 = $tmp1851;
        $tmp1849 = $tmp1850;
        $finallyReturn1847 = $tmp1849;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
        $tmp1800 = 5;
        goto $l1798;
        $l1852:;
        return $finallyReturn1847;
    }
    $l1798:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1809));
    test1809 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1817));
    ifTrue1817 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1825));
    switch ($tmp1800) {
        case 5: goto $l1852;
        case 2: goto $l1823;
        case 4: goto $l1844;
        case 3: goto $l1836;
        case 1: goto $l1815;
        case 0: goto $l1807;
    }
    $l1854:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1855;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1857;
    org$pandalanguage$pandac$ASTNode* $tmp1859;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1860;
    org$pandalanguage$pandac$ASTNode* $tmp1862;
    org$pandalanguage$pandac$ASTNode* $tmp1863;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1855, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1857 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1855, &$s1856);
    if (((panda$core$Bit) { !$tmp1857.nonnull }).value) {
    {
        $tmp1859 = NULL;
        $finallyReturn1857 = $tmp1859;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1859));
        return $finallyReturn1857;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1864 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp1863 = $tmp1864;
    $tmp1862 = $tmp1863;
    $finallyReturn1860 = $tmp1862;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1862));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
    return $finallyReturn1860;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1866;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1867;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1869;
    org$pandalanguage$pandac$ASTNode* $tmp1871;
    org$pandalanguage$pandac$ASTNode* type1878 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1879;
    org$pandalanguage$pandac$ASTNode* $tmp1880;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1881;
    org$pandalanguage$pandac$ASTNode* $tmp1883;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1885;
    org$pandalanguage$pandac$ASTNode* $tmp1887;
    org$pandalanguage$pandac$ASTNode* $tmp1888;
    panda$core$String* $tmp1890;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1894;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    org$pandalanguage$pandac$ASTNode* $tmp1897;
    panda$core$String* $tmp1899;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1867, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1869 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1867, &$s1868);
    id1866 = $tmp1869;
    if (((panda$core$Bit) { !id1866.nonnull }).value) {
    {
        $tmp1871 = NULL;
        $finallyReturn1869 = $tmp1871;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1871));
        return $finallyReturn1869;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1873 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1873.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1874.value) {
    {
        int $tmp1877;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1881 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1880 = $tmp1881;
            $tmp1879 = $tmp1880;
            type1878 = $tmp1879;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1879));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
            if (((panda$core$Bit) { type1878 == NULL }).value) {
            {
                $tmp1883 = NULL;
                $finallyReturn1881 = $tmp1883;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1883));
                $tmp1877 = 0;
                goto $l1875;
                $l1884:;
                return $finallyReturn1881;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1889 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1891 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1866.value));
            $tmp1890 = $tmp1891;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1889, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id1866.value).position, $tmp1890, type1878);
            $tmp1888 = $tmp1889;
            $tmp1887 = $tmp1888;
            $finallyReturn1885 = $tmp1887;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1890));
            $tmp1877 = 1;
            goto $l1875;
            $l1892:;
            return $finallyReturn1885;
        }
        $l1875:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1878));
        type1878 = NULL;
        switch ($tmp1877) {
            case 1: goto $l1892;
            case 0: goto $l1884;
        }
        $l1894:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1898 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1900 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1866.value));
    $tmp1899 = $tmp1900;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1898, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1866.value).position, $tmp1899);
    $tmp1897 = $tmp1898;
    $tmp1896 = $tmp1897;
    $finallyReturn1894 = $tmp1896;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1896));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1897));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
    return $finallyReturn1894;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1905;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1906;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1908;
    org$pandalanguage$pandac$ASTNode* $tmp1910;
    org$pandalanguage$pandac$ASTNode* t1913 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1914;
    org$pandalanguage$pandac$ASTNode* $tmp1915;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1916;
    org$pandalanguage$pandac$ASTNode* $tmp1918;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1921;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1923;
    org$pandalanguage$pandac$ASTNode* $tmp1925;
    org$pandalanguage$pandac$ASTNode* list1928 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1929;
    org$pandalanguage$pandac$ASTNode* $tmp1930;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1931;
    org$pandalanguage$pandac$ASTNode* $tmp1933;
    panda$collections$ImmutableArray* block1936 = NULL;
    panda$collections$ImmutableArray* $tmp1937;
    panda$collections$ImmutableArray* $tmp1938;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1939;
    org$pandalanguage$pandac$ASTNode* $tmp1941;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1943;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    org$pandalanguage$pandac$ASTNode* $tmp1946;
    int $tmp1904;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1906, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1908 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1906, &$s1907);
        start1905 = $tmp1908;
        if (((panda$core$Bit) { !start1905.nonnull }).value) {
        {
            $tmp1910 = NULL;
            $finallyReturn1908 = $tmp1910;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1910));
            $tmp1904 = 0;
            goto $l1902;
            $l1911:;
            return $finallyReturn1908;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1916 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1915 = $tmp1916;
        $tmp1914 = $tmp1915;
        t1913 = $tmp1914;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1914));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
        if (((panda$core$Bit) { t1913 == NULL }).value) {
        {
            $tmp1918 = NULL;
            $finallyReturn1916 = $tmp1918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
            $tmp1904 = 1;
            goto $l1902;
            $l1919:;
            return $finallyReturn1916;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1921, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1923 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1921, &$s1922);
        if (((panda$core$Bit) { !$tmp1923.nonnull }).value) {
        {
            $tmp1925 = NULL;
            $finallyReturn1923 = $tmp1925;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1925));
            $tmp1904 = 2;
            goto $l1902;
            $l1926:;
            return $finallyReturn1923;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1931 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1930 = $tmp1931;
        $tmp1929 = $tmp1930;
        list1928 = $tmp1929;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1929));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1930));
        if (((panda$core$Bit) { list1928 == NULL }).value) {
        {
            $tmp1933 = NULL;
            $finallyReturn1931 = $tmp1933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1933));
            $tmp1904 = 3;
            goto $l1902;
            $l1934:;
            return $finallyReturn1931;
        }
        }
        panda$collections$ImmutableArray* $tmp1939 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1938 = $tmp1939;
        $tmp1937 = $tmp1938;
        block1936 = $tmp1937;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1937));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1938));
        if (((panda$core$Bit) { block1936 == NULL }).value) {
        {
            $tmp1941 = NULL;
            $finallyReturn1939 = $tmp1941;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1941));
            $tmp1904 = 4;
            goto $l1902;
            $l1942:;
            return $finallyReturn1939;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1947 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1947, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1905.value).position, p_label, t1913, list1928, block1936);
        $tmp1946 = $tmp1947;
        $tmp1945 = $tmp1946;
        $finallyReturn1943 = $tmp1945;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1945));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1946));
        $tmp1904 = 5;
        goto $l1902;
        $l1948:;
        return $finallyReturn1943;
    }
    $l1902:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1913));
    t1913 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1928));
    list1928 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1936));
    block1936 = NULL;
    switch ($tmp1904) {
        case 3: goto $l1934;
        case 1: goto $l1919;
        case 5: goto $l1948;
        case 4: goto $l1942;
        case 2: goto $l1926;
        case 0: goto $l1911;
    }
    $l1950:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1954;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1955;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1957;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    org$pandalanguage$pandac$ASTNode* test1962 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1963;
    org$pandalanguage$pandac$ASTNode* $tmp1964;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1965;
    org$pandalanguage$pandac$ASTNode* $tmp1967;
    panda$collections$ImmutableArray* body1970 = NULL;
    panda$collections$ImmutableArray* $tmp1971;
    panda$collections$ImmutableArray* $tmp1972;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1973;
    org$pandalanguage$pandac$ASTNode* $tmp1975;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1977;
    org$pandalanguage$pandac$ASTNode* $tmp1979;
    org$pandalanguage$pandac$ASTNode* $tmp1980;
    int $tmp1953;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1955, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1957 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1955, &$s1956);
        start1954 = $tmp1957;
        if (((panda$core$Bit) { !start1954.nonnull }).value) {
        {
            $tmp1959 = NULL;
            $finallyReturn1957 = $tmp1959;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
            $tmp1953 = 0;
            goto $l1951;
            $l1960:;
            return $finallyReturn1957;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1965 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1964 = $tmp1965;
        $tmp1963 = $tmp1964;
        test1962 = $tmp1963;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1964));
        if (((panda$core$Bit) { test1962 == NULL }).value) {
        {
            $tmp1967 = NULL;
            $finallyReturn1965 = $tmp1967;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1967));
            $tmp1953 = 1;
            goto $l1951;
            $l1968:;
            return $finallyReturn1965;
        }
        }
        panda$collections$ImmutableArray* $tmp1973 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1972 = $tmp1973;
        $tmp1971 = $tmp1972;
        body1970 = $tmp1971;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1971));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1972));
        if (((panda$core$Bit) { body1970 == NULL }).value) {
        {
            $tmp1975 = NULL;
            $finallyReturn1973 = $tmp1975;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1975));
            $tmp1953 = 2;
            goto $l1951;
            $l1976:;
            return $finallyReturn1973;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1981 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1981, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) start1954.value).position, p_label, test1962, body1970);
        $tmp1980 = $tmp1981;
        $tmp1979 = $tmp1980;
        $finallyReturn1977 = $tmp1979;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
        $tmp1953 = 3;
        goto $l1951;
        $l1982:;
        return $finallyReturn1977;
    }
    $l1951:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1962));
    test1962 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1970));
    body1970 = NULL;
    switch ($tmp1953) {
        case 2: goto $l1976;
        case 3: goto $l1982;
        case 0: goto $l1960;
        case 1: goto $l1968;
    }
    $l1984:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1988;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1989;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1991;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    panda$collections$ImmutableArray* body1996 = NULL;
    panda$collections$ImmutableArray* $tmp1997;
    panda$collections$ImmutableArray* $tmp1998;
    org$pandalanguage$pandac$ASTNode* $finallyReturn1999;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2004;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2006;
    org$pandalanguage$pandac$ASTNode* $tmp2008;
    org$pandalanguage$pandac$ASTNode* test2011 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2012;
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2014;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2018;
    org$pandalanguage$pandac$ASTNode* $tmp2020;
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    int $tmp1987;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1989, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1991 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1989, &$s1990);
        start1988 = $tmp1991;
        if (((panda$core$Bit) { !start1988.nonnull }).value) {
        {
            $tmp1993 = NULL;
            $finallyReturn1991 = $tmp1993;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
            $tmp1987 = 0;
            goto $l1985;
            $l1994:;
            return $finallyReturn1991;
        }
        }
        panda$collections$ImmutableArray* $tmp1999 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1998 = $tmp1999;
        $tmp1997 = $tmp1998;
        body1996 = $tmp1997;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1998));
        if (((panda$core$Bit) { body1996 == NULL }).value) {
        {
            $tmp2001 = NULL;
            $finallyReturn1999 = $tmp2001;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
            $tmp1987 = 1;
            goto $l1985;
            $l2002:;
            return $finallyReturn1999;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2004, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2006 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2004, &$s2005);
        if (((panda$core$Bit) { !$tmp2006.nonnull }).value) {
        {
            $tmp2008 = NULL;
            $finallyReturn2006 = $tmp2008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2008));
            $tmp1987 = 2;
            goto $l1985;
            $l2009:;
            return $finallyReturn2006;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2014 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2013 = $tmp2014;
        $tmp2012 = $tmp2013;
        test2011 = $tmp2012;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2012));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
        if (((panda$core$Bit) { test2011 == NULL }).value) {
        {
            $tmp2016 = NULL;
            $finallyReturn2014 = $tmp2016;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2016));
            $tmp1987 = 3;
            goto $l1985;
            $l2017:;
            return $finallyReturn2014;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2022 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2022, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1988.value).position, p_label, body1996, test2011);
        $tmp2021 = $tmp2022;
        $tmp2020 = $tmp2021;
        $finallyReturn2018 = $tmp2020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2021));
        $tmp1987 = 4;
        goto $l1985;
        $l2023:;
        return $finallyReturn2018;
    }
    $l1985:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1996));
    body1996 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2011));
    test2011 = NULL;
    switch ($tmp1987) {
        case 3: goto $l2017;
        case 1: goto $l2002;
        case 0: goto $l1994;
        case 2: goto $l2009;
        case 4: goto $l2023;
    }
    $l2025:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2029;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2030;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2032;
    org$pandalanguage$pandac$ASTNode* $tmp2034;
    panda$collections$ImmutableArray* body2037 = NULL;
    panda$collections$ImmutableArray* $tmp2038;
    panda$collections$ImmutableArray* $tmp2039;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2040;
    org$pandalanguage$pandac$ASTNode* $tmp2042;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2044;
    org$pandalanguage$pandac$ASTNode* $tmp2046;
    org$pandalanguage$pandac$ASTNode* $tmp2047;
    int $tmp2028;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2030, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2032 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2030, &$s2031);
        start2029 = $tmp2032;
        if (((panda$core$Bit) { !start2029.nonnull }).value) {
        {
            $tmp2034 = NULL;
            $finallyReturn2032 = $tmp2034;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2034));
            $tmp2028 = 0;
            goto $l2026;
            $l2035:;
            return $finallyReturn2032;
        }
        }
        panda$collections$ImmutableArray* $tmp2040 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2039 = $tmp2040;
        $tmp2038 = $tmp2039;
        body2037 = $tmp2038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
        if (((panda$core$Bit) { body2037 == NULL }).value) {
        {
            $tmp2042 = NULL;
            $finallyReturn2040 = $tmp2042;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2042));
            $tmp2028 = 1;
            goto $l2026;
            $l2043:;
            return $finallyReturn2040;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2048 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2048, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start2029.value).position, p_label, body2037);
        $tmp2047 = $tmp2048;
        $tmp2046 = $tmp2047;
        $finallyReturn2044 = $tmp2046;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2046));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2047));
        $tmp2028 = 2;
        goto $l2026;
        $l2049:;
        return $finallyReturn2044;
    }
    $l2026:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2037));
    body2037 = NULL;
    switch ($tmp2028) {
        case 2: goto $l2049;
        case 1: goto $l2043;
        case 0: goto $l2035;
    }
    $l2051:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2055;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2056;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2058;
    org$pandalanguage$pandac$ASTNode* $tmp2060;
    org$pandalanguage$pandac$ASTNode* expr2063 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2064;
    org$pandalanguage$pandac$ASTNode* $tmp2065;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2066;
    org$pandalanguage$pandac$ASTNode* $tmp2068;
    org$pandalanguage$pandac$ASTNode* message2071 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2072;
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    org$pandalanguage$pandac$ASTNode* $tmp2075;
    org$pandalanguage$pandac$ASTNode* $tmp2076;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2077;
    org$pandalanguage$pandac$ASTNode* $tmp2079;
    org$pandalanguage$pandac$ASTNode* $tmp2082;
    org$pandalanguage$pandac$ASTNode* $tmp2083;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2083;
    org$pandalanguage$pandac$ASTNode* $tmp2085;
    org$pandalanguage$pandac$ASTNode* $tmp2086;
    int $tmp2054;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2056, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2058 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2056, &$s2057);
        start2055 = $tmp2058;
        if (((panda$core$Bit) { !start2055.nonnull }).value) {
        {
            $tmp2060 = NULL;
            $finallyReturn2058 = $tmp2060;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
            $tmp2054 = 0;
            goto $l2052;
            $l2061:;
            return $finallyReturn2058;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2066 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2065 = $tmp2066;
        $tmp2064 = $tmp2065;
        expr2063 = $tmp2064;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2064));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2065));
        if (((panda$core$Bit) { expr2063 == NULL }).value) {
        {
            $tmp2068 = NULL;
            $finallyReturn2066 = $tmp2068;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2068));
            $tmp2054 = 1;
            goto $l2052;
            $l2069:;
            return $finallyReturn2066;
        }
        }
        memset(&message2071, 0, sizeof(message2071));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2072, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2073 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2072);
        if (((panda$core$Bit) { $tmp2073.nonnull }).value) {
        {
            {
                $tmp2074 = message2071;
                org$pandalanguage$pandac$ASTNode* $tmp2077 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2076 = $tmp2077;
                $tmp2075 = $tmp2076;
                message2071 = $tmp2075;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2076));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
            }
            if (((panda$core$Bit) { message2071 == NULL }).value) {
            {
                $tmp2079 = NULL;
                $finallyReturn2077 = $tmp2079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2079));
                $tmp2054 = 2;
                goto $l2052;
                $l2080:;
                return $finallyReturn2077;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2082 = message2071;
                $tmp2083 = NULL;
                message2071 = $tmp2083;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2083));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2082));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2087 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2087, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2055.value).position, expr2063, message2071);
        $tmp2086 = $tmp2087;
        $tmp2085 = $tmp2086;
        $finallyReturn2083 = $tmp2085;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2085));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
        $tmp2054 = 3;
        goto $l2052;
        $l2088:;
        return $finallyReturn2083;
    }
    $l2052:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2063));
    expr2063 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2071));
    switch ($tmp2054) {
        case 3: goto $l2088;
        case 2: goto $l2080;
        case 0: goto $l2061;
        case 1: goto $l2069;
    }
    $l2090:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2094;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2095;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2097;
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    panda$collections$Array* expressions2102 = NULL;
    panda$collections$Array* $tmp2103;
    panda$collections$Array* $tmp2104;
    org$pandalanguage$pandac$ASTNode* expr2106 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2107;
    org$pandalanguage$pandac$ASTNode* $tmp2108;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2109;
    org$pandalanguage$pandac$ASTNode* $tmp2111;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2117;
    org$pandalanguage$pandac$ASTNode* $tmp2119;
    org$pandalanguage$pandac$ASTNode* $tmp2120;
    org$pandalanguage$pandac$ASTNode* $tmp2121;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2122;
    org$pandalanguage$pandac$ASTNode* $tmp2124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2127;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2129;
    org$pandalanguage$pandac$ASTNode* $tmp2131;
    panda$collections$Array* statements2134 = NULL;
    panda$collections$Array* $tmp2135;
    panda$collections$Array* $tmp2136;
    org$pandalanguage$pandac$parser$Token$Kind $match$1105_132140;
    org$pandalanguage$pandac$ASTNode* stmt2163 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2164;
    org$pandalanguage$pandac$ASTNode* $tmp2165;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2166;
    org$pandalanguage$pandac$ASTNode* $tmp2168;
    org$pandalanguage$pandac$ASTNode* stmt2177 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2178;
    org$pandalanguage$pandac$ASTNode* $tmp2179;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2180;
    org$pandalanguage$pandac$ASTNode* $tmp2182;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2186;
    org$pandalanguage$pandac$ASTNode* $tmp2188;
    org$pandalanguage$pandac$ASTNode* $tmp2189;
    panda$collections$ImmutableArray* $tmp2191;
    panda$collections$ImmutableArray* $tmp2193;
    int $tmp2093;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2095, ((panda$core$Int64) { 39 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2097 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2095, &$s2096);
        start2094 = $tmp2097;
        if (((panda$core$Bit) { !start2094.nonnull }).value) {
        {
            $tmp2099 = NULL;
            $finallyReturn2097 = $tmp2099;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
            $tmp2093 = 0;
            goto $l2091;
            $l2100:;
            return $finallyReturn2097;
        }
        }
        panda$collections$Array* $tmp2105 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2105);
        $tmp2104 = $tmp2105;
        $tmp2103 = $tmp2104;
        expressions2102 = $tmp2103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
        org$pandalanguage$pandac$ASTNode* $tmp2109 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2108 = $tmp2109;
        $tmp2107 = $tmp2108;
        expr2106 = $tmp2107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
        if (((panda$core$Bit) { expr2106 == NULL }).value) {
        {
            $tmp2111 = NULL;
            $finallyReturn2109 = $tmp2111;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2111));
            $tmp2093 = 1;
            goto $l2091;
            $l2112:;
            return $finallyReturn2109;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions2102, ((panda$core$Object*) expr2106));
        $l2114:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2117, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2118 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2117);
        bool $tmp2116 = ((panda$core$Bit) { $tmp2118.nonnull }).value;
        if (!$tmp2116) goto $l2115;
        {
            {
                $tmp2119 = expr2106;
                org$pandalanguage$pandac$ASTNode* $tmp2122 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2121 = $tmp2122;
                $tmp2120 = $tmp2121;
                expr2106 = $tmp2120;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2119));
            }
            if (((panda$core$Bit) { expr2106 == NULL }).value) {
            {
                $tmp2124 = NULL;
                $finallyReturn2122 = $tmp2124;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2124));
                $tmp2093 = 2;
                goto $l2091;
                $l2125:;
                return $finallyReturn2122;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2102, ((panda$core$Object*) expr2106));
        }
        goto $l2114;
        $l2115:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2127, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2129 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2127, &$s2128);
        if (((panda$core$Bit) { !$tmp2129.nonnull }).value) {
        {
            $tmp2131 = NULL;
            $finallyReturn2129 = $tmp2131;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2131));
            $tmp2093 = 3;
            goto $l2091;
            $l2132:;
            return $finallyReturn2129;
        }
        }
        panda$collections$Array* $tmp2137 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2137);
        $tmp2136 = $tmp2137;
        $tmp2135 = $tmp2136;
        statements2134 = $tmp2135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
        $l2138:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2141 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1105_132140 = $tmp2141.kind;
                panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1105_132140.$rawValue, ((panda$core$Int64) { 39 }));
                bool $tmp2143 = $tmp2144.value;
                if ($tmp2143) goto $l2145;
                panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1105_132140.$rawValue, ((panda$core$Int64) { 40 }));
                $tmp2143 = $tmp2146.value;
                $l2145:;
                panda$core$Bit $tmp2147 = { $tmp2143 };
                bool $tmp2142 = $tmp2147.value;
                if ($tmp2142) goto $l2148;
                panda$core$Bit $tmp2149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1105_132140.$rawValue, ((panda$core$Int64) { 100 }));
                $tmp2142 = $tmp2149.value;
                $l2148:;
                panda$core$Bit $tmp2150 = { $tmp2142 };
                if ($tmp2150.value) {
                {
                    goto $l2139;
                }
                }
                else {
                panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1105_132140.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2152 = $tmp2153.value;
                if ($tmp2152) goto $l2154;
                panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1105_132140.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2152 = $tmp2155.value;
                $l2154:;
                panda$core$Bit $tmp2156 = { $tmp2152 };
                bool $tmp2151 = $tmp2156.value;
                if ($tmp2151) goto $l2157;
                panda$core$Bit $tmp2158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1105_132140.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2151 = $tmp2158.value;
                $l2157:;
                panda$core$Bit $tmp2159 = { $tmp2151 };
                if ($tmp2159.value) {
                {
                    int $tmp2162;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2166 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2165 = $tmp2166;
                        $tmp2164 = $tmp2165;
                        stmt2163 = $tmp2164;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2164));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                        if (((panda$core$Bit) { stmt2163 == NULL }).value) {
                        {
                            $tmp2168 = NULL;
                            $finallyReturn2166 = $tmp2168;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2168));
                            $tmp2162 = 0;
                            goto $l2160;
                            $l2169:;
                            $tmp2093 = 4;
                            goto $l2091;
                            $l2170:;
                            return $finallyReturn2166;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements2134, ((panda$core$Object*) stmt2163));
                        $tmp2162 = 1;
                        goto $l2160;
                        $l2172:;
                        goto $l2139;
                    }
                    $l2160:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2163));
                    stmt2163 = NULL;
                    switch ($tmp2162) {
                        case 1: goto $l2172;
                        case 0: goto $l2169;
                    }
                    $l2173:;
                }
                }
                else {
                {
                    {
                        int $tmp2176;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2180 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2179 = $tmp2180;
                            $tmp2178 = $tmp2179;
                            stmt2177 = $tmp2178;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                            if (((panda$core$Bit) { stmt2177 == NULL }).value) {
                            {
                                $tmp2182 = NULL;
                                $finallyReturn2180 = $tmp2182;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2182));
                                $tmp2176 = 0;
                                goto $l2174;
                                $l2183:;
                                $tmp2093 = 5;
                                goto $l2091;
                                $l2184:;
                                return $finallyReturn2180;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2134, ((panda$core$Object*) stmt2177));
                        }
                        $tmp2176 = -1;
                        goto $l2174;
                        $l2174:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2177));
                        stmt2177 = NULL;
                        switch ($tmp2176) {
                            case 0: goto $l2183;
                            case -1: goto $l2186;
                        }
                        $l2186:;
                    }
                }
                }
                }
            }
        }
        }
        $l2139:;
        org$pandalanguage$pandac$ASTNode* $tmp2190 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2192 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2102);
        $tmp2191 = $tmp2192;
        panda$collections$ImmutableArray* $tmp2194 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2134);
        $tmp2193 = $tmp2194;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2190, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start2094.value).position, $tmp2191, $tmp2193);
        $tmp2189 = $tmp2190;
        $tmp2188 = $tmp2189;
        $finallyReturn2186 = $tmp2188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2191));
        $tmp2093 = 6;
        goto $l2091;
        $l2195:;
        return $finallyReturn2186;
    }
    $l2091:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2102));
    expressions2102 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2106));
    expr2106 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2134));
    statements2134 = NULL;
    switch ($tmp2093) {
        case 2: goto $l2125;
        case 1: goto $l2112;
        case 6: goto $l2195;
        case 3: goto $l2132;
        case 5: goto $l2184;
        case 4: goto $l2170;
        case 0: goto $l2100;
    }
    $l2197:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2201;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2202;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2204;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    org$pandalanguage$pandac$ASTNode* expr2209 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2210;
    org$pandalanguage$pandac$ASTNode* $tmp2211;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2212;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2217;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2219;
    org$pandalanguage$pandac$ASTNode* $tmp2221;
    panda$collections$Array* whens2224 = NULL;
    panda$collections$Array* $tmp2225;
    panda$collections$Array* $tmp2226;
    panda$collections$Array* other2228 = NULL;
    panda$collections$Array* $tmp2229;
    org$pandalanguage$pandac$parser$Token token2232;
    org$pandalanguage$pandac$parser$Token$Kind $match$1146_132234;
    org$pandalanguage$pandac$ASTNode* w2240 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2241;
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2243;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$parser$Token o2251;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2253;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2255;
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    panda$collections$Array* $tmp2260;
    panda$collections$Array* $tmp2261;
    panda$collections$Array* $tmp2262;
    org$pandalanguage$pandac$parser$Token$Kind $match$1162_252266;
    org$pandalanguage$pandac$ASTNode* stmt2281 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2282;
    org$pandalanguage$pandac$ASTNode* $tmp2283;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2284;
    org$pandalanguage$pandac$ASTNode* $tmp2286;
    org$pandalanguage$pandac$ASTNode* stmt2295 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2296;
    org$pandalanguage$pandac$ASTNode* $tmp2297;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2298;
    org$pandalanguage$pandac$ASTNode* $tmp2300;
    panda$core$String* $tmp2305;
    panda$core$String* $tmp2307;
    panda$core$String* $tmp2308;
    panda$core$String* $tmp2310;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2316;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2318;
    org$pandalanguage$pandac$ASTNode* $tmp2320;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2322;
    org$pandalanguage$pandac$ASTNode* $tmp2324;
    org$pandalanguage$pandac$ASTNode* $tmp2325;
    panda$collections$ImmutableArray* $tmp2327;
    panda$collections$ImmutableArray* $tmp2329;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2332;
    org$pandalanguage$pandac$ASTNode* $tmp2334;
    org$pandalanguage$pandac$ASTNode* $tmp2335;
    panda$collections$ImmutableArray* $tmp2337;
    int $tmp2200;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2202, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2204 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2202, &$s2203);
        start2201 = $tmp2204;
        if (((panda$core$Bit) { !start2201.nonnull }).value) {
        {
            $tmp2206 = NULL;
            $finallyReturn2204 = $tmp2206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
            $tmp2200 = 0;
            goto $l2198;
            $l2207:;
            return $finallyReturn2204;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2212 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2211 = $tmp2212;
        $tmp2210 = $tmp2211;
        expr2209 = $tmp2210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
        if (((panda$core$Bit) { expr2209 == NULL }).value) {
        {
            $tmp2214 = NULL;
            $finallyReturn2212 = $tmp2214;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
            $tmp2200 = 1;
            goto $l2198;
            $l2215:;
            return $finallyReturn2212;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2217, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2219 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2217, &$s2218);
        if (((panda$core$Bit) { !$tmp2219.nonnull }).value) {
        {
            $tmp2221 = NULL;
            $finallyReturn2219 = $tmp2221;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
            $tmp2200 = 2;
            goto $l2198;
            $l2222:;
            return $finallyReturn2219;
        }
        }
        panda$collections$Array* $tmp2227 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2227);
        $tmp2226 = $tmp2227;
        $tmp2225 = $tmp2226;
        whens2224 = $tmp2225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2226));
        $tmp2229 = NULL;
        other2228 = $tmp2229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
        $l2230:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2233 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2232 = $tmp2233;
            {
                $match$1146_132234 = token2232.kind;
                panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132234.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2235.value) {
                {
                    goto $l2231;
                }
                }
                else {
                panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132234.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2236.value) {
                {
                    int $tmp2239;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2243 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2242 = $tmp2243;
                        $tmp2241 = $tmp2242;
                        w2240 = $tmp2241;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
                        if (((panda$core$Bit) { w2240 == NULL }).value) {
                        {
                            $tmp2245 = NULL;
                            $finallyReturn2243 = $tmp2245;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
                            $tmp2239 = 0;
                            goto $l2237;
                            $l2246:;
                            $tmp2200 = 3;
                            goto $l2198;
                            $l2247:;
                            return $finallyReturn2243;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2224, ((panda$core$Object*) w2240));
                    }
                    $tmp2239 = -1;
                    goto $l2237;
                    $l2237:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2240));
                    w2240 = NULL;
                    switch ($tmp2239) {
                        case 0: goto $l2246;
                        case -1: goto $l2249;
                    }
                    $l2249:;
                }
                }
                else {
                panda$core$Bit $tmp2250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1146_132234.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2250.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2252 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2251 = $tmp2252;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2253, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2255 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2253, &$s2254);
                    if (((panda$core$Bit) { !$tmp2255.nonnull }).value) {
                    {
                        $tmp2257 = NULL;
                        $finallyReturn2255 = $tmp2257;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
                        $tmp2200 = 4;
                        goto $l2198;
                        $l2258:;
                        return $finallyReturn2255;
                    }
                    }
                    {
                        $tmp2260 = other2228;
                        panda$collections$Array* $tmp2263 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2263);
                        $tmp2262 = $tmp2263;
                        $tmp2261 = $tmp2262;
                        other2228 = $tmp2261;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
                    }
                    $l2264:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2267 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1162_252266 = $tmp2267.kind;
                            panda$core$Bit $tmp2268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1162_252266.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2268.value) {
                            {
                                goto $l2265;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1162_252266.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2270 = $tmp2271.value;
                            if ($tmp2270) goto $l2272;
                            panda$core$Bit $tmp2273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1162_252266.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2270 = $tmp2273.value;
                            $l2272:;
                            panda$core$Bit $tmp2274 = { $tmp2270 };
                            bool $tmp2269 = $tmp2274.value;
                            if ($tmp2269) goto $l2275;
                            panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1162_252266.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2269 = $tmp2276.value;
                            $l2275:;
                            panda$core$Bit $tmp2277 = { $tmp2269 };
                            if ($tmp2277.value) {
                            {
                                int $tmp2280;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2284 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2283 = $tmp2284;
                                    $tmp2282 = $tmp2283;
                                    stmt2281 = $tmp2282;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
                                    if (((panda$core$Bit) { stmt2281 == NULL }).value) {
                                    {
                                        $tmp2286 = NULL;
                                        $finallyReturn2284 = $tmp2286;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
                                        $tmp2280 = 0;
                                        goto $l2278;
                                        $l2287:;
                                        $tmp2200 = 5;
                                        goto $l2198;
                                        $l2288:;
                                        return $finallyReturn2284;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2228, ((panda$core$Object*) stmt2281));
                                    $tmp2280 = 1;
                                    goto $l2278;
                                    $l2290:;
                                    goto $l2265;
                                }
                                $l2278:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2281));
                                stmt2281 = NULL;
                                switch ($tmp2280) {
                                    case 1: goto $l2290;
                                    case 0: goto $l2287;
                                }
                                $l2291:;
                            }
                            }
                            else {
                            {
                                int $tmp2294;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2298 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2297 = $tmp2298;
                                    $tmp2296 = $tmp2297;
                                    stmt2295 = $tmp2296;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2296));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2297));
                                    if (((panda$core$Bit) { stmt2295 == NULL }).value) {
                                    {
                                        $tmp2300 = NULL;
                                        $finallyReturn2298 = $tmp2300;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
                                        $tmp2294 = 0;
                                        goto $l2292;
                                        $l2301:;
                                        $tmp2200 = 6;
                                        goto $l2198;
                                        $l2302:;
                                        return $finallyReturn2298;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2228, ((panda$core$Object*) stmt2295));
                                }
                                $tmp2294 = -1;
                                goto $l2292;
                                $l2292:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2295));
                                stmt2295 = NULL;
                                switch ($tmp2294) {
                                    case -1: goto $l2304;
                                    case 0: goto $l2301;
                                }
                                $l2304:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2265:;
                    goto $l2231;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2311 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2232);
                    $tmp2310 = $tmp2311;
                    panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2309, $tmp2310);
                    $tmp2308 = $tmp2312;
                    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2313);
                    $tmp2307 = $tmp2314;
                    panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2306, $tmp2307);
                    $tmp2305 = $tmp2315;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2232, $tmp2305);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2307));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
                }
                }
                }
                }
            }
        }
        }
        $l2231:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2316, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2318 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2316, &$s2317);
        if (((panda$core$Bit) { !$tmp2318.nonnull }).value) {
        {
            $tmp2320 = NULL;
            $finallyReturn2318 = $tmp2320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
            $tmp2200 = 7;
            goto $l2198;
            $l2321:;
            return $finallyReturn2318;
        }
        }
        if (((panda$core$Bit) { other2228 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2326 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2328 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2224);
            $tmp2327 = $tmp2328;
            panda$collections$ImmutableArray* $tmp2330 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2228);
            $tmp2329 = $tmp2330;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2326, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start2201.value).position, expr2209, $tmp2327, $tmp2329);
            $tmp2325 = $tmp2326;
            $tmp2324 = $tmp2325;
            $finallyReturn2322 = $tmp2324;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2324));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2327));
            $tmp2200 = 8;
            goto $l2198;
            $l2331:;
            return $finallyReturn2322;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2336 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2338 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2224);
        $tmp2337 = $tmp2338;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2336, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start2201.value).position, expr2209, $tmp2337, NULL);
        $tmp2335 = $tmp2336;
        $tmp2334 = $tmp2335;
        $finallyReturn2332 = $tmp2334;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
        $tmp2200 = 9;
        goto $l2198;
        $l2339:;
        return $finallyReturn2332;
    }
    $l2198:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2209));
    expr2209 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2224));
    whens2224 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2228));
    switch ($tmp2200) {
        case 2: goto $l2222;
        case 5: goto $l2288;
        case 3: goto $l2247;
        case 9: goto $l2339;
        case 7: goto $l2321;
        case 1: goto $l2215;
        case 8: goto $l2331;
        case 6: goto $l2302;
        case 4: goto $l2258;
        case 0: goto $l2207;
    }
    $l2341:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2345;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2346;
    panda$collections$ImmutableArray* $finallyReturn2348;
    panda$collections$ImmutableArray* $tmp2350;
    panda$collections$Array* result2353 = NULL;
    panda$collections$Array* $tmp2354;
    panda$collections$Array* $tmp2355;
    org$pandalanguage$pandac$parser$Token$Kind $match$1206_132359;
    org$pandalanguage$pandac$ASTNode* stmt2374 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2375;
    org$pandalanguage$pandac$ASTNode* $tmp2376;
    panda$collections$ImmutableArray* $finallyReturn2377;
    panda$collections$ImmutableArray* $tmp2379;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2383;
    panda$collections$ImmutableArray* $finallyReturn2385;
    panda$collections$ImmutableArray* $tmp2387;
    org$pandalanguage$pandac$ASTNode* stmt2396 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2397;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    panda$collections$ImmutableArray* $finallyReturn2399;
    panda$collections$ImmutableArray* $tmp2401;
    panda$collections$ImmutableArray* $finallyReturn2405;
    panda$collections$ImmutableArray* $tmp2407;
    panda$collections$ImmutableArray* $tmp2408;
    int $tmp2344;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2346, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2348 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2346, &$s2347);
        start2345 = $tmp2348;
        if (((panda$core$Bit) { !start2345.nonnull }).value) {
        {
            $tmp2350 = NULL;
            $finallyReturn2348 = $tmp2350;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
            $tmp2344 = 0;
            goto $l2342;
            $l2351:;
            return $finallyReturn2348;
        }
        }
        panda$collections$Array* $tmp2356 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2356);
        $tmp2355 = $tmp2356;
        $tmp2354 = $tmp2355;
        result2353 = $tmp2354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2355));
        $l2357:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2360 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1206_132359 = $tmp2360.kind;
                panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1206_132359.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2361.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2358;
                }
                }
                else {
                panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1206_132359.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2363 = $tmp2364.value;
                if ($tmp2363) goto $l2365;
                panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1206_132359.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2363 = $tmp2366.value;
                $l2365:;
                panda$core$Bit $tmp2367 = { $tmp2363 };
                bool $tmp2362 = $tmp2367.value;
                if ($tmp2362) goto $l2368;
                panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1206_132359.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2362 = $tmp2369.value;
                $l2368:;
                panda$core$Bit $tmp2370 = { $tmp2362 };
                if ($tmp2370.value) {
                {
                    int $tmp2373;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2377 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2376 = $tmp2377;
                        $tmp2375 = $tmp2376;
                        stmt2374 = $tmp2375;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2375));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
                        if (((panda$core$Bit) { stmt2374 == NULL }).value) {
                        {
                            $tmp2379 = NULL;
                            $finallyReturn2377 = $tmp2379;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
                            $tmp2373 = 0;
                            goto $l2371;
                            $l2380:;
                            $tmp2344 = 1;
                            goto $l2342;
                            $l2381:;
                            return $finallyReturn2377;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2383, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2385 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2383, &$s2384);
                        if (((panda$core$Bit) { !$tmp2385.nonnull }).value) {
                        {
                            $tmp2387 = NULL;
                            $finallyReturn2385 = $tmp2387;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2387));
                            $tmp2373 = 1;
                            goto $l2371;
                            $l2388:;
                            $tmp2344 = 2;
                            goto $l2342;
                            $l2389:;
                            return $finallyReturn2385;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2353, ((panda$core$Object*) stmt2374));
                        $tmp2373 = 2;
                        goto $l2371;
                        $l2391:;
                        goto $l2358;
                    }
                    $l2371:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2374));
                    stmt2374 = NULL;
                    switch ($tmp2373) {
                        case 2: goto $l2391;
                        case 0: goto $l2380;
                        case 1: goto $l2388;
                    }
                    $l2392:;
                }
                }
                else {
                {
                    int $tmp2395;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2399 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2398 = $tmp2399;
                        $tmp2397 = $tmp2398;
                        stmt2396 = $tmp2397;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
                        if (((panda$core$Bit) { stmt2396 == NULL }).value) {
                        {
                            $tmp2401 = NULL;
                            $finallyReturn2399 = $tmp2401;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
                            $tmp2395 = 0;
                            goto $l2393;
                            $l2402:;
                            $tmp2344 = 3;
                            goto $l2342;
                            $l2403:;
                            return $finallyReturn2399;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2353, ((panda$core$Object*) stmt2396));
                    }
                    $tmp2395 = -1;
                    goto $l2393;
                    $l2393:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2396));
                    stmt2396 = NULL;
                    switch ($tmp2395) {
                        case -1: goto $l2405;
                        case 0: goto $l2402;
                    }
                    $l2405:;
                }
                }
                }
            }
        }
        }
        $l2358:;
        panda$collections$ImmutableArray* $tmp2409 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2353);
        $tmp2408 = $tmp2409;
        $tmp2407 = $tmp2408;
        $finallyReturn2405 = $tmp2407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
        $tmp2344 = 4;
        goto $l2342;
        $l2410:;
        return $finallyReturn2405;
    }
    $l2342:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2353));
    result2353 = NULL;
    switch ($tmp2344) {
        case 2: goto $l2389;
        case 3: goto $l2403;
        case 1: goto $l2381;
        case 4: goto $l2410;
        case 0: goto $l2351;
    }
    $l2412:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2416 = NULL;
    panda$collections$ImmutableArray* $tmp2417;
    panda$collections$ImmutableArray* $tmp2418;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2419;
    org$pandalanguage$pandac$ASTNode* $tmp2421;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2423;
    org$pandalanguage$pandac$ASTNode* $tmp2425;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    org$pandalanguage$pandac$Position $tmp2428;
    int $tmp2415;
    {
        panda$collections$ImmutableArray* $tmp2419 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2418 = $tmp2419;
        $tmp2417 = $tmp2418;
        statements2416 = $tmp2417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
        if (((panda$core$Bit) { statements2416 == NULL }).value) {
        {
            $tmp2421 = NULL;
            $finallyReturn2419 = $tmp2421;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2421));
            $tmp2415 = 0;
            goto $l2413;
            $l2422:;
            return $finallyReturn2419;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2427 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2428);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2427, ((panda$core$Int64) { 4 }), $tmp2428, statements2416);
        $tmp2426 = $tmp2427;
        $tmp2425 = $tmp2426;
        $finallyReturn2423 = $tmp2425;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
        $tmp2415 = 1;
        goto $l2413;
        $l2429:;
        return $finallyReturn2423;
    }
    $l2413:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2416));
    statements2416 = NULL;
    switch ($tmp2415) {
        case 1: goto $l2429;
        case 0: goto $l2422;
    }
    $l2431:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2435 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2436;
    org$pandalanguage$pandac$ASTNode* $tmp2437;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2438;
    org$pandalanguage$pandac$ASTNode* $tmp2440;
    org$pandalanguage$pandac$parser$Token$Kind $match$1250_92443;
    org$pandalanguage$pandac$parser$Token op2509;
    org$pandalanguage$pandac$ASTNode* rvalue2511 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2512;
    org$pandalanguage$pandac$ASTNode* $tmp2513;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2514;
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2519;
    org$pandalanguage$pandac$ASTNode* $tmp2521;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    org$pandalanguage$pandac$parser$Token op2536;
    org$pandalanguage$pandac$ASTNode* rvalue2538 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2539;
    org$pandalanguage$pandac$ASTNode* $tmp2540;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2541;
    org$pandalanguage$pandac$ASTNode* $tmp2543;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2546;
    org$pandalanguage$pandac$ASTNode* $tmp2548;
    org$pandalanguage$pandac$ASTNode* $tmp2549;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2556;
    org$pandalanguage$pandac$ASTNode* $tmp2558;
    int $tmp2434;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2438 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2437 = $tmp2438;
        $tmp2436 = $tmp2437;
        start2435 = $tmp2436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
        if (((panda$core$Bit) { start2435 == NULL }).value) {
        {
            $tmp2440 = NULL;
            $finallyReturn2438 = $tmp2440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2440));
            $tmp2434 = 0;
            goto $l2432;
            $l2441:;
            return $finallyReturn2438;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2444 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1250_92443 = $tmp2444.kind;
            panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2459 = $tmp2460.value;
            if ($tmp2459) goto $l2461;
            panda$core$Bit $tmp2462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2459 = $tmp2462.value;
            $l2461:;
            panda$core$Bit $tmp2463 = { $tmp2459 };
            bool $tmp2458 = $tmp2463.value;
            if ($tmp2458) goto $l2464;
            panda$core$Bit $tmp2465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2458 = $tmp2465.value;
            $l2464:;
            panda$core$Bit $tmp2466 = { $tmp2458 };
            bool $tmp2457 = $tmp2466.value;
            if ($tmp2457) goto $l2467;
            panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2457 = $tmp2468.value;
            $l2467:;
            panda$core$Bit $tmp2469 = { $tmp2457 };
            bool $tmp2456 = $tmp2469.value;
            if ($tmp2456) goto $l2470;
            panda$core$Bit $tmp2471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2456 = $tmp2471.value;
            $l2470:;
            panda$core$Bit $tmp2472 = { $tmp2456 };
            bool $tmp2455 = $tmp2472.value;
            if ($tmp2455) goto $l2473;
            panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2455 = $tmp2474.value;
            $l2473:;
            panda$core$Bit $tmp2475 = { $tmp2455 };
            bool $tmp2454 = $tmp2475.value;
            if ($tmp2454) goto $l2476;
            panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2454 = $tmp2477.value;
            $l2476:;
            panda$core$Bit $tmp2478 = { $tmp2454 };
            bool $tmp2453 = $tmp2478.value;
            if ($tmp2453) goto $l2479;
            panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2453 = $tmp2480.value;
            $l2479:;
            panda$core$Bit $tmp2481 = { $tmp2453 };
            bool $tmp2452 = $tmp2481.value;
            if ($tmp2452) goto $l2482;
            panda$core$Bit $tmp2483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2452 = $tmp2483.value;
            $l2482:;
            panda$core$Bit $tmp2484 = { $tmp2452 };
            bool $tmp2451 = $tmp2484.value;
            if ($tmp2451) goto $l2485;
            panda$core$Bit $tmp2486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2451 = $tmp2486.value;
            $l2485:;
            panda$core$Bit $tmp2487 = { $tmp2451 };
            bool $tmp2450 = $tmp2487.value;
            if ($tmp2450) goto $l2488;
            panda$core$Bit $tmp2489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2450 = $tmp2489.value;
            $l2488:;
            panda$core$Bit $tmp2490 = { $tmp2450 };
            bool $tmp2449 = $tmp2490.value;
            if ($tmp2449) goto $l2491;
            panda$core$Bit $tmp2492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2449 = $tmp2492.value;
            $l2491:;
            panda$core$Bit $tmp2493 = { $tmp2449 };
            bool $tmp2448 = $tmp2493.value;
            if ($tmp2448) goto $l2494;
            panda$core$Bit $tmp2495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2448 = $tmp2495.value;
            $l2494:;
            panda$core$Bit $tmp2496 = { $tmp2448 };
            bool $tmp2447 = $tmp2496.value;
            if ($tmp2447) goto $l2497;
            panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2447 = $tmp2498.value;
            $l2497:;
            panda$core$Bit $tmp2499 = { $tmp2447 };
            bool $tmp2446 = $tmp2499.value;
            if ($tmp2446) goto $l2500;
            panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2446 = $tmp2501.value;
            $l2500:;
            panda$core$Bit $tmp2502 = { $tmp2446 };
            bool $tmp2445 = $tmp2502.value;
            if ($tmp2445) goto $l2503;
            panda$core$Bit $tmp2504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2445 = $tmp2504.value;
            $l2503:;
            panda$core$Bit $tmp2505 = { $tmp2445 };
            if ($tmp2505.value) {
            {
                int $tmp2508;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2510 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2509 = $tmp2510;
                    org$pandalanguage$pandac$ASTNode* $tmp2514 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2513 = $tmp2514;
                    $tmp2512 = $tmp2513;
                    rvalue2511 = $tmp2512;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2512));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2513));
                    if (((panda$core$Bit) { rvalue2511 == NULL }).value) {
                    {
                        $tmp2516 = NULL;
                        $finallyReturn2514 = $tmp2516;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2516));
                        $tmp2508 = 0;
                        goto $l2506;
                        $l2517:;
                        $tmp2434 = 1;
                        goto $l2432;
                        $l2518:;
                        return $finallyReturn2514;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2523 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2525 = (($fn2524) start2435->$class->vtable[2])(start2435);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2523, ((panda$core$Int64) { 2 }), $tmp2525, start2435, op2509.kind, rvalue2511);
                    $tmp2522 = $tmp2523;
                    $tmp2521 = $tmp2522;
                    $finallyReturn2519 = $tmp2521;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2521));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
                    $tmp2508 = 1;
                    goto $l2506;
                    $l2526:;
                    $tmp2434 = 2;
                    goto $l2432;
                    $l2527:;
                    return $finallyReturn2519;
                }
                $l2506:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2511));
                rvalue2511 = NULL;
                switch ($tmp2508) {
                    case 0: goto $l2517;
                    case 1: goto $l2526;
                }
                $l2529:;
            }
            }
            else {
            panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1250_92443.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2530.value) {
            {
                int $tmp2533;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2534 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2534, &$s2535);
                    org$pandalanguage$pandac$parser$Token $tmp2537 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2536 = $tmp2537;
                    org$pandalanguage$pandac$ASTNode* $tmp2541 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2540 = $tmp2541;
                    $tmp2539 = $tmp2540;
                    rvalue2538 = $tmp2539;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
                    if (((panda$core$Bit) { rvalue2538 == NULL }).value) {
                    {
                        $tmp2543 = NULL;
                        $finallyReturn2541 = $tmp2543;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2543));
                        $tmp2533 = 0;
                        goto $l2531;
                        $l2544:;
                        $tmp2434 = 3;
                        goto $l2432;
                        $l2545:;
                        return $finallyReturn2541;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2550 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2552 = (($fn2551) start2435->$class->vtable[2])(start2435);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2550, ((panda$core$Int64) { 2 }), $tmp2552, start2435, op2536.kind, rvalue2538);
                    $tmp2549 = $tmp2550;
                    $tmp2548 = $tmp2549;
                    $finallyReturn2546 = $tmp2548;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2548));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2549));
                    $tmp2533 = 1;
                    goto $l2531;
                    $l2553:;
                    $tmp2434 = 4;
                    goto $l2432;
                    $l2554:;
                    return $finallyReturn2546;
                }
                $l2531:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2538));
                rvalue2538 = NULL;
                switch ($tmp2533) {
                    case 1: goto $l2553;
                    case 0: goto $l2544;
                }
                $l2556:;
            }
            }
            else {
            {
                $tmp2558 = start2435;
                $finallyReturn2556 = $tmp2558;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2558));
                $tmp2434 = 5;
                goto $l2432;
                $l2559:;
                return $finallyReturn2556;
            }
            }
            }
        }
    }
    $tmp2434 = -1;
    goto $l2432;
    $l2432:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2435));
    start2435 = NULL;
    switch ($tmp2434) {
        case 3: goto $l2545;
        case -1: goto $l2561;
        case 2: goto $l2527;
        case 5: goto $l2559;
        case 4: goto $l2554;
        case 1: goto $l2518;
        case 0: goto $l2441;
    }
    $l2561:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t2565 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2566;
    org$pandalanguage$pandac$ASTNode* $tmp2567;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2568;
    org$pandalanguage$pandac$ASTNode* $tmp2570;
    org$pandalanguage$pandac$ASTNode* value2573 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2574;
    org$pandalanguage$pandac$ASTNode* $tmp2576;
    org$pandalanguage$pandac$ASTNode* $tmp2577;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2579;
    org$pandalanguage$pandac$ASTNode* $tmp2581;
    org$pandalanguage$pandac$ASTNode* $tmp2588;
    org$pandalanguage$pandac$ASTNode* $tmp2589;
    org$pandalanguage$pandac$ASTNode* $tmp2590;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2591;
    org$pandalanguage$pandac$ASTNode* $tmp2593;
    org$pandalanguage$pandac$ASTNode* $tmp2596;
    org$pandalanguage$pandac$ASTNode* $tmp2597;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2597;
    org$pandalanguage$pandac$ASTNode* $tmp2599;
    org$pandalanguage$pandac$ASTNode* $tmp2600;
    int $tmp2564;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2568 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2567 = $tmp2568;
        $tmp2566 = $tmp2567;
        t2565 = $tmp2566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2567));
        if (((panda$core$Bit) { t2565 == NULL }).value) {
        {
            $tmp2570 = NULL;
            $finallyReturn2568 = $tmp2570;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2570));
            $tmp2564 = 0;
            goto $l2562;
            $l2571:;
            return $finallyReturn2568;
        }
        }
        memset(&value2573, 0, sizeof(value2573));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2574, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2575 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2574);
        if (((panda$core$Bit) { $tmp2575.nonnull }).value) {
        {
            {
                $tmp2576 = value2573;
                org$pandalanguage$pandac$ASTNode* $tmp2579 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2578 = $tmp2579;
                $tmp2577 = $tmp2578;
                value2573 = $tmp2577;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2577));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
            }
            if (((panda$core$Bit) { value2573 == NULL }).value) {
            {
                $tmp2581 = NULL;
                $finallyReturn2579 = $tmp2581;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2581));
                $tmp2564 = 1;
                goto $l2562;
                $l2582:;
                return $finallyReturn2579;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp2584 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp2585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2584.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2585.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2586 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2586, &$s2587);
            {
                $tmp2588 = value2573;
                org$pandalanguage$pandac$ASTNode* $tmp2591 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2590 = $tmp2591;
                $tmp2589 = $tmp2590;
                value2573 = $tmp2589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
            }
            if (((panda$core$Bit) { value2573 == NULL }).value) {
            {
                $tmp2593 = NULL;
                $finallyReturn2591 = $tmp2593;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2593));
                $tmp2564 = 2;
                goto $l2562;
                $l2594:;
                return $finallyReturn2591;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2596 = value2573;
                $tmp2597 = NULL;
                value2573 = $tmp2597;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2597));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2596));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2601 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2603 = (($fn2602) t2565->$class->vtable[2])(t2565);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2601, ((panda$core$Int64) { 11 }), $tmp2603, t2565, value2573);
        $tmp2600 = $tmp2601;
        $tmp2599 = $tmp2600;
        $finallyReturn2597 = $tmp2599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2600));
        $tmp2564 = 3;
        goto $l2562;
        $l2604:;
        return $finallyReturn2597;
    }
    $l2562:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2565));
    t2565 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2573));
    switch ($tmp2564) {
        case 3: goto $l2604;
        case 2: goto $l2594;
        case 0: goto $l2571;
        case 1: goto $l2582;
    }
    $l2606:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2610;
    org$pandalanguage$pandac$Variable$Kind kind2612;
    org$pandalanguage$pandac$parser$Token$Kind $match$1309_92613;
    org$pandalanguage$pandac$Variable$Kind $tmp2615;
    org$pandalanguage$pandac$Variable$Kind $tmp2617;
    org$pandalanguage$pandac$Variable$Kind $tmp2619;
    org$pandalanguage$pandac$Variable$Kind $tmp2621;
    panda$collections$Array* declarations2623 = NULL;
    panda$collections$Array* $tmp2624;
    panda$collections$Array* $tmp2625;
    org$pandalanguage$pandac$ASTNode* decl2627 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2628;
    org$pandalanguage$pandac$ASTNode* $tmp2629;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2630;
    org$pandalanguage$pandac$ASTNode* $tmp2632;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2638;
    org$pandalanguage$pandac$ASTNode* decl2643 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2644;
    org$pandalanguage$pandac$ASTNode* $tmp2645;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2646;
    org$pandalanguage$pandac$ASTNode* $tmp2648;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2652;
    org$pandalanguage$pandac$ASTNode* $tmp2654;
    org$pandalanguage$pandac$ASTNode* $tmp2655;
    panda$collections$ImmutableArray* $tmp2657;
    int $tmp2609;
    {
        org$pandalanguage$pandac$parser$Token $tmp2611 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start2610 = $tmp2611;
        memset(&kind2612, 0, sizeof(kind2612));
        {
            $match$1309_92613 = start2610.kind;
            panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1309_92613.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2614.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2615, ((panda$core$Int64) { 0 }));
                kind2612 = $tmp2615;
            }
            }
            else {
            panda$core$Bit $tmp2616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1309_92613.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2616.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2617, ((panda$core$Int64) { 1 }));
                kind2612 = $tmp2617;
            }
            }
            else {
            panda$core$Bit $tmp2618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1309_92613.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2618.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2619, ((panda$core$Int64) { 3 }));
                kind2612 = $tmp2619;
            }
            }
            else {
            panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1309_92613.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2620.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2621, ((panda$core$Int64) { 2 }));
                kind2612 = $tmp2621;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start2610, &$s2622);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp2626 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2626);
        $tmp2625 = $tmp2626;
        $tmp2624 = $tmp2625;
        declarations2623 = $tmp2624;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2625));
        org$pandalanguage$pandac$ASTNode* $tmp2630 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2629 = $tmp2630;
        $tmp2628 = $tmp2629;
        decl2627 = $tmp2628;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2629));
        if (((panda$core$Bit) { decl2627 == NULL }).value) {
        {
            $tmp2632 = NULL;
            $finallyReturn2630 = $tmp2632;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2632));
            $tmp2609 = 0;
            goto $l2607;
            $l2633:;
            return $finallyReturn2630;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations2623, ((panda$core$Object*) decl2627));
        $l2635:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2638, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2639 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2638);
        bool $tmp2637 = ((panda$core$Bit) { $tmp2639.nonnull }).value;
        if (!$tmp2637) goto $l2636;
        {
            int $tmp2642;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2646 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2645 = $tmp2646;
                $tmp2644 = $tmp2645;
                decl2643 = $tmp2644;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
                if (((panda$core$Bit) { decl2643 == NULL }).value) {
                {
                    $tmp2648 = NULL;
                    $finallyReturn2646 = $tmp2648;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2648));
                    $tmp2642 = 0;
                    goto $l2640;
                    $l2649:;
                    $tmp2609 = 1;
                    goto $l2607;
                    $l2650:;
                    return $finallyReturn2646;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations2623, ((panda$core$Object*) decl2643));
            }
            $tmp2642 = -1;
            goto $l2640;
            $l2640:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2643));
            decl2643 = NULL;
            switch ($tmp2642) {
                case 0: goto $l2649;
                case -1: goto $l2652;
            }
            $l2652:;
        }
        goto $l2635;
        $l2636:;
        org$pandalanguage$pandac$ASTNode* $tmp2656 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2658 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations2623);
        $tmp2657 = $tmp2658;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2656, ((panda$core$Int64) { 39 }), start2610.position, kind2612, $tmp2657);
        $tmp2655 = $tmp2656;
        $tmp2654 = $tmp2655;
        $finallyReturn2652 = $tmp2654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2657));
        $tmp2609 = 2;
        goto $l2607;
        $l2659:;
        return $finallyReturn2652;
    }
    $l2607:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2623));
    declarations2623 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2627));
    decl2627 = NULL;
    switch ($tmp2609) {
        case 1: goto $l2650;
        case 2: goto $l2659;
        case 0: goto $l2633;
    }
    $l2661:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2665;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2666;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2668;
    org$pandalanguage$pandac$ASTNode* $tmp2670;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2673;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2675;
    org$pandalanguage$pandac$ASTNode* $tmp2677;
    panda$core$Object* $tmp2680;
    org$pandalanguage$pandac$ASTNode* target2682 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2683;
    org$pandalanguage$pandac$ASTNode* $tmp2684;
    panda$core$String* $tmp2686;
    panda$collections$Array* args2688 = NULL;
    panda$collections$Array* $tmp2689;
    panda$collections$Array* $tmp2690;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2692;
    org$pandalanguage$pandac$ASTNode* expr2697 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2698;
    org$pandalanguage$pandac$ASTNode* $tmp2699;
    panda$core$Object* $tmp2701;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2702;
    org$pandalanguage$pandac$ASTNode* $tmp2704;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2711;
    org$pandalanguage$pandac$ASTNode* $tmp2713;
    org$pandalanguage$pandac$ASTNode* $tmp2714;
    org$pandalanguage$pandac$ASTNode* $tmp2715;
    panda$core$Object* $tmp2717;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2718;
    org$pandalanguage$pandac$ASTNode* $tmp2720;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2724;
    panda$core$Object* $tmp2727;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2728;
    org$pandalanguage$pandac$ASTNode* $tmp2730;
    panda$core$Object* $tmp2735;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2736;
    org$pandalanguage$pandac$ASTNode* $tmp2738;
    org$pandalanguage$pandac$ASTNode* $tmp2739;
    panda$collections$ImmutableArray* $tmp2741;
    int $tmp2664;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2666, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2668 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2666, &$s2667);
        start2665 = $tmp2668;
        if (((panda$core$Bit) { !start2665.nonnull }).value) {
        {
            $tmp2670 = NULL;
            $finallyReturn2668 = $tmp2670;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2670));
            $tmp2664 = 0;
            goto $l2662;
            $l2671:;
            return $finallyReturn2668;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2673, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2675 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2673, &$s2674);
        if (((panda$core$Bit) { !$tmp2675.nonnull }).value) {
        {
            $tmp2677 = NULL;
            $finallyReturn2675 = $tmp2677;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2677));
            $tmp2664 = 1;
            goto $l2662;
            $l2678:;
            return $finallyReturn2675;
        }
        }
        panda$core$Bit$wrapper* $tmp2681;
        $tmp2681 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp2681->value = ((panda$core$Bit) { true });
        $tmp2680 = ((panda$core$Object*) $tmp2681);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2680);
        panda$core$Panda$unref$panda$core$Object($tmp2680);
        org$pandalanguage$pandac$ASTNode* $tmp2685 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2687 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2665.value));
        $tmp2686 = $tmp2687;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2685, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2665.value).position, $tmp2686);
        $tmp2684 = $tmp2685;
        $tmp2683 = $tmp2684;
        target2682 = $tmp2683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2686));
        panda$collections$Array* $tmp2691 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2691);
        $tmp2690 = $tmp2691;
        $tmp2689 = $tmp2690;
        args2688 = $tmp2689;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2689));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2690));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2692, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2693 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2692);
        if (((panda$core$Bit) { !$tmp2693.nonnull }).value) {
        {
            int $tmp2696;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2700 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2699 = $tmp2700;
                $tmp2698 = $tmp2699;
                expr2697 = $tmp2698;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2698));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2699));
                if (((panda$core$Bit) { expr2697 == NULL }).value) {
                {
                    panda$core$Object* $tmp2702 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2701 = $tmp2702;
                    panda$core$Panda$unref$panda$core$Object($tmp2701);
                    $tmp2704 = NULL;
                    $finallyReturn2702 = $tmp2704;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2704));
                    $tmp2696 = 0;
                    goto $l2694;
                    $l2705:;
                    $tmp2664 = 2;
                    goto $l2662;
                    $l2706:;
                    return $finallyReturn2702;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args2688, ((panda$core$Object*) expr2697));
                $l2708:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2711, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2712 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2711);
                bool $tmp2710 = ((panda$core$Bit) { $tmp2712.nonnull }).value;
                if (!$tmp2710) goto $l2709;
                {
                    {
                        $tmp2713 = expr2697;
                        org$pandalanguage$pandac$ASTNode* $tmp2716 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2715 = $tmp2716;
                        $tmp2714 = $tmp2715;
                        expr2697 = $tmp2714;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2714));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2715));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2713));
                    }
                    if (((panda$core$Bit) { expr2697 == NULL }).value) {
                    {
                        panda$core$Object* $tmp2718 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2717 = $tmp2718;
                        panda$core$Panda$unref$panda$core$Object($tmp2717);
                        $tmp2720 = NULL;
                        $finallyReturn2718 = $tmp2720;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2720));
                        $tmp2696 = 1;
                        goto $l2694;
                        $l2721:;
                        $tmp2664 = 3;
                        goto $l2662;
                        $l2722:;
                        return $finallyReturn2718;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args2688, ((panda$core$Object*) expr2697));
                }
                goto $l2708;
                $l2709:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2724, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2726 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2724, &$s2725);
                if (((panda$core$Bit) { !$tmp2726.nonnull }).value) {
                {
                    panda$core$Object* $tmp2728 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2727 = $tmp2728;
                    panda$core$Panda$unref$panda$core$Object($tmp2727);
                    $tmp2730 = NULL;
                    $finallyReturn2728 = $tmp2730;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2730));
                    $tmp2696 = 2;
                    goto $l2694;
                    $l2731:;
                    $tmp2664 = 4;
                    goto $l2662;
                    $l2732:;
                    return $finallyReturn2728;
                }
                }
            }
            $tmp2696 = -1;
            goto $l2694;
            $l2694:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2697));
            expr2697 = NULL;
            switch ($tmp2696) {
                case 0: goto $l2705;
                case 1: goto $l2721;
                case 2: goto $l2731;
                case -1: goto $l2734;
            }
            $l2734:;
        }
        }
        panda$core$Object* $tmp2736 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp2735 = $tmp2736;
        panda$core$Panda$unref$panda$core$Object($tmp2735);
        org$pandalanguage$pandac$ASTNode* $tmp2740 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2742 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2688);
        $tmp2741 = $tmp2742;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2740, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start2665.value).position, target2682, $tmp2741);
        $tmp2739 = $tmp2740;
        $tmp2738 = $tmp2739;
        $finallyReturn2736 = $tmp2738;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2738));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2741));
        $tmp2664 = 5;
        goto $l2662;
        $l2743:;
        return $finallyReturn2736;
    }
    $l2662:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2682));
    target2682 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2688));
    args2688 = NULL;
    switch ($tmp2664) {
        case 5: goto $l2743;
        case 3: goto $l2722;
        case 4: goto $l2732;
        case 0: goto $l2671;
        case 2: goto $l2706;
        case 1: goto $l2678;
    }
    $l2745:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2746;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2747;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2749;
    org$pandalanguage$pandac$ASTNode* $tmp2751;
    org$pandalanguage$pandac$parser$Token$nullable label2753;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2754;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2755;
    org$pandalanguage$pandac$ASTNode* $tmp2757;
    org$pandalanguage$pandac$ASTNode* $tmp2758;
    panda$core$String* $tmp2760;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2762;
    org$pandalanguage$pandac$ASTNode* $tmp2764;
    org$pandalanguage$pandac$ASTNode* $tmp2765;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2747, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2749 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2747, &$s2748);
    start2746 = $tmp2749;
    if (((panda$core$Bit) { !start2746.nonnull }).value) {
    {
        $tmp2751 = NULL;
        $finallyReturn2749 = $tmp2751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2751));
        return $finallyReturn2749;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2754, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2755 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2754);
    label2753 = $tmp2755;
    if (((panda$core$Bit) { label2753.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2759 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2761 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2753.value));
        $tmp2760 = $tmp2761;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2759, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start2746.value).position, $tmp2760);
        $tmp2758 = $tmp2759;
        $tmp2757 = $tmp2758;
        $finallyReturn2755 = $tmp2757;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2757));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2758));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2760));
        return $finallyReturn2755;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2766 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2766, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start2746.value).position, NULL);
    $tmp2765 = $tmp2766;
    $tmp2764 = $tmp2765;
    $finallyReturn2762 = $tmp2764;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2764));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2765));
    return $finallyReturn2762;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2768;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2769;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2771;
    org$pandalanguage$pandac$ASTNode* $tmp2773;
    org$pandalanguage$pandac$parser$Token$nullable label2775;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2776;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2777;
    org$pandalanguage$pandac$ASTNode* $tmp2779;
    org$pandalanguage$pandac$ASTNode* $tmp2780;
    panda$core$String* $tmp2782;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2784;
    org$pandalanguage$pandac$ASTNode* $tmp2786;
    org$pandalanguage$pandac$ASTNode* $tmp2787;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2769, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2769, &$s2770);
    start2768 = $tmp2771;
    if (((panda$core$Bit) { !start2768.nonnull }).value) {
    {
        $tmp2773 = NULL;
        $finallyReturn2771 = $tmp2773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2773));
        return $finallyReturn2771;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2776, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2777 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2776);
    label2775 = $tmp2777;
    if (((panda$core$Bit) { label2775.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2781 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2783 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2775.value));
        $tmp2782 = $tmp2783;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2781, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start2768.value).position, $tmp2782);
        $tmp2780 = $tmp2781;
        $tmp2779 = $tmp2780;
        $finallyReturn2777 = $tmp2779;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2779));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2780));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2782));
        return $finallyReturn2777;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2788 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2788, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start2768.value).position, NULL);
    $tmp2787 = $tmp2788;
    $tmp2786 = $tmp2787;
    $finallyReturn2784 = $tmp2786;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2786));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2787));
    return $finallyReturn2784;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2790;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2791;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2793;
    org$pandalanguage$pandac$ASTNode* $tmp2795;
    org$pandalanguage$pandac$parser$Token$Kind $match$1413_92797;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2807;
    org$pandalanguage$pandac$ASTNode* $tmp2809;
    org$pandalanguage$pandac$ASTNode* $tmp2810;
    panda$collections$Array* children2816 = NULL;
    panda$collections$Array* $tmp2817;
    panda$collections$Array* $tmp2818;
    org$pandalanguage$pandac$ASTNode* expr2820 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2821;
    org$pandalanguage$pandac$ASTNode* $tmp2822;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2823;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2827;
    org$pandalanguage$pandac$ASTNode* $tmp2829;
    org$pandalanguage$pandac$ASTNode* $tmp2830;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2791, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2793 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2791, &$s2792);
    start2790 = $tmp2793;
    if (((panda$core$Bit) { !start2790.nonnull }).value) {
    {
        $tmp2795 = NULL;
        $finallyReturn2793 = $tmp2795;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2795));
        return $finallyReturn2793;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2798 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1413_92797 = $tmp2798.kind;
        panda$core$Bit $tmp2801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1413_92797.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp2800 = $tmp2801.value;
        if ($tmp2800) goto $l2802;
        panda$core$Bit $tmp2803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1413_92797.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp2800 = $tmp2803.value;
        $l2802:;
        panda$core$Bit $tmp2804 = { $tmp2800 };
        bool $tmp2799 = $tmp2804.value;
        if ($tmp2799) goto $l2805;
        panda$core$Bit $tmp2806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1413_92797.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp2799 = $tmp2806.value;
        $l2805:;
        panda$core$Bit $tmp2807 = { $tmp2799 };
        if ($tmp2807.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2811 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2811, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start2790.value).position, NULL);
            $tmp2810 = $tmp2811;
            $tmp2809 = $tmp2810;
            $finallyReturn2807 = $tmp2809;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2810));
            return $finallyReturn2807;
        }
        }
        else {
        {
            int $tmp2815;
            {
                panda$collections$Array* $tmp2819 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2819);
                $tmp2818 = $tmp2819;
                $tmp2817 = $tmp2818;
                children2816 = $tmp2817;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2817));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2818));
                org$pandalanguage$pandac$ASTNode* $tmp2823 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2822 = $tmp2823;
                $tmp2821 = $tmp2822;
                expr2820 = $tmp2821;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2822));
                if (((panda$core$Bit) { expr2820 == NULL }).value) {
                {
                    $tmp2825 = NULL;
                    $finallyReturn2823 = $tmp2825;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2825));
                    $tmp2815 = 0;
                    goto $l2813;
                    $l2826:;
                    return $finallyReturn2823;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children2816, ((panda$core$Object*) expr2820));
                org$pandalanguage$pandac$ASTNode* $tmp2831 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2831, ((panda$core$Int64) { 32 }), ((org$pandalanguage$pandac$parser$Token) start2790.value).position, expr2820);
                $tmp2830 = $tmp2831;
                $tmp2829 = $tmp2830;
                $finallyReturn2827 = $tmp2829;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2829));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2830));
                $tmp2815 = 1;
                goto $l2813;
                $l2832:;
                return $finallyReturn2827;
            }
            $l2813:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2816));
            children2816 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2820));
            expr2820 = NULL;
            switch ($tmp2815) {
                case 0: goto $l2826;
                case 1: goto $l2832;
            }
            $l2834:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1431_92835;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2837;
    org$pandalanguage$pandac$ASTNode* $tmp2839;
    org$pandalanguage$pandac$ASTNode* $tmp2840;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2843;
    org$pandalanguage$pandac$ASTNode* $tmp2845;
    org$pandalanguage$pandac$ASTNode* $tmp2846;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2849;
    org$pandalanguage$pandac$ASTNode* $tmp2851;
    org$pandalanguage$pandac$ASTNode* $tmp2852;
    {
        org$pandalanguage$pandac$parser$Token $tmp2836 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1431_92835 = $tmp2836.kind;
        panda$core$Bit $tmp2837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1431_92835.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2837.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2841 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2840 = $tmp2841;
            $tmp2839 = $tmp2840;
            $finallyReturn2837 = $tmp2839;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2839));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2840));
            return $finallyReturn2837;
        }
        }
        else {
        panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1431_92835.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2843.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2847 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2846 = $tmp2847;
            $tmp2845 = $tmp2846;
            $finallyReturn2843 = $tmp2845;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2845));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2846));
            return $finallyReturn2843;
        }
        }
        else {
        panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1431_92835.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2849.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2853 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2852 = $tmp2853;
            $tmp2851 = $tmp2852;
            $finallyReturn2849 = $tmp2851;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2851));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2852));
            return $finallyReturn2849;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_92855;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2857;
    org$pandalanguage$pandac$ASTNode* $tmp2859;
    org$pandalanguage$pandac$ASTNode* $tmp2860;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2863;
    org$pandalanguage$pandac$ASTNode* $tmp2865;
    org$pandalanguage$pandac$ASTNode* $tmp2866;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2869;
    org$pandalanguage$pandac$ASTNode* $tmp2871;
    org$pandalanguage$pandac$ASTNode* $tmp2872;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2875;
    org$pandalanguage$pandac$ASTNode* $tmp2877;
    org$pandalanguage$pandac$ASTNode* $tmp2878;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2881;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2882;
    org$pandalanguage$pandac$ASTNode* $tmp2884;
    {
        org$pandalanguage$pandac$parser$Token $tmp2856 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_92855 = $tmp2856.kind;
        panda$core$Bit $tmp2857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92855.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2857.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2861 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2860 = $tmp2861;
            $tmp2859 = $tmp2860;
            $finallyReturn2857 = $tmp2859;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2859));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2860));
            return $finallyReturn2857;
        }
        }
        else {
        panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92855.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2863.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2867 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2866 = $tmp2867;
            $tmp2865 = $tmp2866;
            $finallyReturn2863 = $tmp2865;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2865));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2866));
            return $finallyReturn2863;
        }
        }
        else {
        panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92855.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2869.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2873 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2872 = $tmp2873;
            $tmp2871 = $tmp2872;
            $finallyReturn2869 = $tmp2871;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2871));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2872));
            return $finallyReturn2869;
        }
        }
        else {
        panda$core$Bit $tmp2875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_92855.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2875.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2879 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2878 = $tmp2879;
            $tmp2877 = $tmp2878;
            $finallyReturn2875 = $tmp2877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2877));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2878));
            return $finallyReturn2875;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2881, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2881, &$s2882);
            $tmp2884 = NULL;
            $finallyReturn2882 = $tmp2884;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2884));
            return $finallyReturn2882;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1457_92886;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2888;
    org$pandalanguage$pandac$ASTNode* $tmp2890;
    org$pandalanguage$pandac$ASTNode* $tmp2891;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2894;
    org$pandalanguage$pandac$ASTNode* $tmp2896;
    org$pandalanguage$pandac$ASTNode* $tmp2897;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2900;
    org$pandalanguage$pandac$ASTNode* $tmp2902;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2906;
    org$pandalanguage$pandac$ASTNode* $tmp2908;
    org$pandalanguage$pandac$ASTNode* $tmp2909;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2912;
    org$pandalanguage$pandac$ASTNode* $tmp2914;
    org$pandalanguage$pandac$ASTNode* $tmp2915;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2918;
    org$pandalanguage$pandac$ASTNode* $tmp2920;
    org$pandalanguage$pandac$ASTNode* $tmp2921;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2924;
    org$pandalanguage$pandac$ASTNode* $tmp2926;
    org$pandalanguage$pandac$ASTNode* $tmp2927;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2930;
    org$pandalanguage$pandac$ASTNode* $tmp2932;
    org$pandalanguage$pandac$ASTNode* $tmp2933;
    org$pandalanguage$pandac$parser$Token id2937;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2939;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2940;
    org$pandalanguage$pandac$ASTNode* $tmp2942;
    org$pandalanguage$pandac$ASTNode* $tmp2943;
    panda$core$String* $tmp2944;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2947;
    org$pandalanguage$pandac$ASTNode* $tmp2949;
    org$pandalanguage$pandac$ASTNode* $tmp2950;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2957;
    org$pandalanguage$pandac$ASTNode* $tmp2959;
    org$pandalanguage$pandac$ASTNode* $tmp2960;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2975;
    org$pandalanguage$pandac$ASTNode* $tmp2977;
    org$pandalanguage$pandac$ASTNode* $tmp2978;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2981;
    org$pandalanguage$pandac$ASTNode* $tmp2983;
    org$pandalanguage$pandac$ASTNode* $tmp2984;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2987;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2988;
    org$pandalanguage$pandac$ASTNode* $tmp2990;
    {
        org$pandalanguage$pandac$parser$Token $tmp2887 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1457_92886 = $tmp2887.kind;
        panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2888.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2892 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2891 = $tmp2892;
            $tmp2890 = $tmp2891;
            $finallyReturn2888 = $tmp2890;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
            return $finallyReturn2888;
        }
        }
        else {
        panda$core$Bit $tmp2894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2894.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2898 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2897 = $tmp2898;
            $tmp2896 = $tmp2897;
            $finallyReturn2894 = $tmp2896;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2897));
            return $finallyReturn2894;
        }
        }
        else {
        panda$core$Bit $tmp2900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2900.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2904 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2903 = $tmp2904;
            $tmp2902 = $tmp2903;
            $finallyReturn2900 = $tmp2902;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2902));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2903));
            return $finallyReturn2900;
        }
        }
        else {
        panda$core$Bit $tmp2906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2906.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2910 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2909 = $tmp2910;
            $tmp2908 = $tmp2909;
            $finallyReturn2906 = $tmp2908;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2909));
            return $finallyReturn2906;
        }
        }
        else {
        panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2912.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2916 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2915 = $tmp2916;
            $tmp2914 = $tmp2915;
            $finallyReturn2912 = $tmp2914;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2914));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2915));
            return $finallyReturn2912;
        }
        }
        else {
        panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2918.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2922 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2921 = $tmp2922;
            $tmp2920 = $tmp2921;
            $finallyReturn2918 = $tmp2920;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2921));
            return $finallyReturn2918;
        }
        }
        else {
        panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2924.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2928 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2927 = $tmp2928;
            $tmp2926 = $tmp2927;
            $finallyReturn2924 = $tmp2926;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2927));
            return $finallyReturn2924;
        }
        }
        else {
        panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp2930.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2934 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2933 = $tmp2934;
            $tmp2932 = $tmp2933;
            $finallyReturn2930 = $tmp2932;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2933));
            return $finallyReturn2930;
        }
        }
        else {
        panda$core$Bit $tmp2936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2936.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2938 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id2937 = $tmp2938;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2939, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2940 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2939);
            if (((panda$core$Bit) { $tmp2940.nonnull }).value) {
            {
                panda$core$String* $tmp2945 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id2937);
                $tmp2944 = $tmp2945;
                org$pandalanguage$pandac$ASTNode* $tmp2946 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2944);
                $tmp2943 = $tmp2946;
                $tmp2942 = $tmp2943;
                $finallyReturn2940 = $tmp2942;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2944));
                return $finallyReturn2940;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id2937);
            org$pandalanguage$pandac$ASTNode* $tmp2951 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2950 = $tmp2951;
            $tmp2949 = $tmp2950;
            $finallyReturn2947 = $tmp2949;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2950));
            return $finallyReturn2947;
        }
        }
        else {
        panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp2953 = $tmp2954.value;
        if ($tmp2953) goto $l2955;
        panda$core$Bit $tmp2956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp2953 = $tmp2956.value;
        $l2955:;
        panda$core$Bit $tmp2957 = { $tmp2953 };
        if ($tmp2957.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2961 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2960 = $tmp2961;
            $tmp2959 = $tmp2960;
            $finallyReturn2957 = $tmp2959;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2960));
            return $finallyReturn2957;
        }
        }
        else {
        panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2965 = $tmp2966.value;
        if ($tmp2965) goto $l2967;
        panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2965 = $tmp2968.value;
        $l2967:;
        panda$core$Bit $tmp2969 = { $tmp2965 };
        bool $tmp2964 = $tmp2969.value;
        if ($tmp2964) goto $l2970;
        panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2964 = $tmp2971.value;
        $l2970:;
        panda$core$Bit $tmp2972 = { $tmp2964 };
        bool $tmp2963 = $tmp2972.value;
        if ($tmp2963) goto $l2973;
        panda$core$Bit $tmp2974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2963 = $tmp2974.value;
        $l2973:;
        panda$core$Bit $tmp2975 = { $tmp2963 };
        if ($tmp2975.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2979 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2978 = $tmp2979;
            $tmp2977 = $tmp2978;
            $finallyReturn2975 = $tmp2977;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2977));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
            return $finallyReturn2975;
        }
        }
        else {
        panda$core$Bit $tmp2981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1457_92886.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2981.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2985 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2984 = $tmp2985;
            $tmp2983 = $tmp2984;
            $finallyReturn2981 = $tmp2983;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2983));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2984));
            return $finallyReturn2981;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2987, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2987, &$s2988);
            $tmp2990 = NULL;
            $finallyReturn2988 = $tmp2990;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2990));
            return $finallyReturn2988;
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
    org$pandalanguage$pandac$parser$Token$nullable start2995;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2996;
    org$pandalanguage$pandac$ASTNode* $finallyReturn2998;
    org$pandalanguage$pandac$ASTNode* $tmp3000;
    org$pandalanguage$pandac$parser$Token$nullable next3003;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3004;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3006;
    org$pandalanguage$pandac$ASTNode* $tmp3008;
    panda$core$MutableString* name3011 = NULL;
    panda$core$MutableString* $tmp3012;
    panda$core$MutableString* $tmp3013;
    panda$core$String* $tmp3015;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3019;
    panda$core$Char8 $tmp3021;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3022;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3024;
    org$pandalanguage$pandac$ASTNode* $tmp3026;
    panda$core$String* $tmp3029;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3030;
    org$pandalanguage$pandac$ASTNode* $tmp3032;
    org$pandalanguage$pandac$ASTNode* $tmp3033;
    panda$core$String* $tmp3035;
    int $tmp2994;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2996, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2998 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2996, &$s2997);
        start2995 = $tmp2998;
        if (((panda$core$Bit) { !start2995.nonnull }).value) {
        {
            $tmp3000 = NULL;
            $finallyReturn2998 = $tmp3000;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3000));
            $tmp2994 = 0;
            goto $l2992;
            $l3001:;
            return $finallyReturn2998;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3004, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3006 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3004, &$s3005);
        next3003 = $tmp3006;
        if (((panda$core$Bit) { !next3003.nonnull }).value) {
        {
            $tmp3008 = NULL;
            $finallyReturn3006 = $tmp3008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3008));
            $tmp2994 = 1;
            goto $l2992;
            $l3009:;
            return $finallyReturn3006;
        }
        }
        panda$core$MutableString* $tmp3014 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3016 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3003.value));
        $tmp3015 = $tmp3016;
        panda$core$MutableString$init$panda$core$String($tmp3014, $tmp3015);
        $tmp3013 = $tmp3014;
        $tmp3012 = $tmp3013;
        name3011 = $tmp3012;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3012));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3013));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3015));
        $l3017:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3019, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3020 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3019);
            next3003 = $tmp3020;
            if (((panda$core$Bit) { !next3003.nonnull }).value) {
            {
                goto $l3018;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3021, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3011, $tmp3021);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3022, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3024 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3022, &$s3023);
            next3003 = $tmp3024;
            if (((panda$core$Bit) { !next3003.nonnull }).value) {
            {
                $tmp3026 = NULL;
                $finallyReturn3024 = $tmp3026;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3026));
                $tmp2994 = 2;
                goto $l2992;
                $l3027:;
                return $finallyReturn3024;
            }
            }
            panda$core$String* $tmp3030 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3003.value));
            $tmp3029 = $tmp3030;
            panda$core$MutableString$append$panda$core$String(name3011, $tmp3029);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3029));
        }
        }
        $l3018:;
        org$pandalanguage$pandac$ASTNode* $tmp3034 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3036 = panda$core$MutableString$finish$R$panda$core$String(name3011);
        $tmp3035 = $tmp3036;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3034, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start2995.value).position, $tmp3035);
        $tmp3033 = $tmp3034;
        $tmp3032 = $tmp3033;
        $finallyReturn3030 = $tmp3032;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3032));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3035));
        $tmp2994 = 3;
        goto $l2992;
        $l3037:;
        return $finallyReturn3030;
    }
    $l2992:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3011));
    name3011 = NULL;
    switch ($tmp2994) {
        case 2: goto $l3027;
        case 3: goto $l3037;
        case 1: goto $l3009;
        case 0: goto $l3001;
    }
    $l3039:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3043;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3044;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3046;
    org$pandalanguage$pandac$ASTNode* $tmp3048;
    org$pandalanguage$pandac$parser$Token$nullable next3051;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3052;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3054;
    org$pandalanguage$pandac$ASTNode* $tmp3056;
    panda$core$MutableString* name3059 = NULL;
    panda$core$MutableString* $tmp3060;
    panda$core$MutableString* $tmp3061;
    panda$core$String* $tmp3063;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3067;
    panda$core$Char8 $tmp3069;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3070;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3072;
    org$pandalanguage$pandac$ASTNode* $tmp3074;
    panda$core$String* $tmp3077;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3078;
    org$pandalanguage$pandac$ASTNode* $tmp3080;
    org$pandalanguage$pandac$ASTNode* $tmp3081;
    panda$core$String* $tmp3083;
    int $tmp3042;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3044, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3046 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3044, &$s3045);
        start3043 = $tmp3046;
        if (((panda$core$Bit) { !start3043.nonnull }).value) {
        {
            $tmp3048 = NULL;
            $finallyReturn3046 = $tmp3048;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3048));
            $tmp3042 = 0;
            goto $l3040;
            $l3049:;
            return $finallyReturn3046;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3052, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3054 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3052, &$s3053);
        next3051 = $tmp3054;
        if (((panda$core$Bit) { !next3051.nonnull }).value) {
        {
            $tmp3056 = NULL;
            $finallyReturn3054 = $tmp3056;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3056));
            $tmp3042 = 1;
            goto $l3040;
            $l3057:;
            return $finallyReturn3054;
        }
        }
        panda$core$MutableString* $tmp3062 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3064 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3051.value));
        $tmp3063 = $tmp3064;
        panda$core$MutableString$init$panda$core$String($tmp3062, $tmp3063);
        $tmp3061 = $tmp3062;
        $tmp3060 = $tmp3061;
        name3059 = $tmp3060;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3060));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3061));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3063));
        $l3065:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3067, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3068 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3067);
            next3051 = $tmp3068;
            if (((panda$core$Bit) { !next3051.nonnull }).value) {
            {
                goto $l3066;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3069, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3059, $tmp3069);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3070, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3072 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3070, &$s3071);
            next3051 = $tmp3072;
            if (((panda$core$Bit) { !next3051.nonnull }).value) {
            {
                $tmp3074 = NULL;
                $finallyReturn3072 = $tmp3074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3074));
                $tmp3042 = 2;
                goto $l3040;
                $l3075:;
                return $finallyReturn3072;
            }
            }
            panda$core$String* $tmp3078 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3051.value));
            $tmp3077 = $tmp3078;
            panda$core$MutableString$append$panda$core$String(name3059, $tmp3077);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3077));
        }
        }
        $l3066:;
        org$pandalanguage$pandac$ASTNode* $tmp3082 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3084 = panda$core$MutableString$finish$R$panda$core$String(name3059);
        $tmp3083 = $tmp3084;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3082, ((panda$core$Int64) { 38 }), ((org$pandalanguage$pandac$parser$Token) start3043.value).position, $tmp3083);
        $tmp3081 = $tmp3082;
        $tmp3080 = $tmp3081;
        $finallyReturn3078 = $tmp3080;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3080));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3081));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
        $tmp3042 = 3;
        goto $l3040;
        $l3085:;
        return $finallyReturn3078;
    }
    $l3040:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3059));
    name3059 = NULL;
    switch ($tmp3042) {
        case 2: goto $l3075;
        case 0: goto $l3049;
        case 3: goto $l3085;
        case 1: goto $l3057;
    }
    $l3087:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3091;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3092;
    panda$collections$ImmutableArray* $finallyReturn3094;
    panda$collections$ImmutableArray* $tmp3096;
    org$pandalanguage$pandac$parser$Token$nullable id3099;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3100;
    panda$collections$ImmutableArray* $finallyReturn3102;
    panda$collections$ImmutableArray* $tmp3104;
    panda$collections$Array* parameters3107 = NULL;
    panda$collections$Array* $tmp3108;
    panda$collections$Array* $tmp3109;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3111;
    org$pandalanguage$pandac$ASTNode* t3116 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3117;
    org$pandalanguage$pandac$ASTNode* $tmp3118;
    panda$collections$ImmutableArray* $finallyReturn3119;
    panda$collections$ImmutableArray* $tmp3121;
    org$pandalanguage$pandac$ASTNode* $tmp3125;
    panda$core$String* $tmp3127;
    org$pandalanguage$pandac$ASTNode* $tmp3130;
    panda$core$String* $tmp3132;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3137;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3139;
    panda$collections$ImmutableArray* $finallyReturn3141;
    panda$collections$ImmutableArray* $tmp3143;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3146;
    org$pandalanguage$pandac$ASTNode* t3151 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3152;
    org$pandalanguage$pandac$ASTNode* $tmp3153;
    panda$collections$ImmutableArray* $finallyReturn3154;
    panda$collections$ImmutableArray* $tmp3156;
    org$pandalanguage$pandac$ASTNode* $tmp3160;
    panda$core$String* $tmp3162;
    org$pandalanguage$pandac$ASTNode* $tmp3165;
    panda$core$String* $tmp3167;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3169;
    panda$collections$ImmutableArray* $finallyReturn3171;
    panda$collections$ImmutableArray* $tmp3173;
    panda$collections$ImmutableArray* $finallyReturn3175;
    panda$collections$ImmutableArray* $tmp3177;
    panda$collections$ImmutableArray* $tmp3178;
    int $tmp3090;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3092, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3094 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3092, &$s3093);
        start3091 = $tmp3094;
        if (((panda$core$Bit) { !start3091.nonnull }).value) {
        {
            $tmp3096 = NULL;
            $finallyReturn3094 = $tmp3096;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3096));
            $tmp3090 = 0;
            goto $l3088;
            $l3097:;
            return $finallyReturn3094;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3100, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3102 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3100, &$s3101);
        id3099 = $tmp3102;
        if (((panda$core$Bit) { !id3099.nonnull }).value) {
        {
            $tmp3104 = NULL;
            $finallyReturn3102 = $tmp3104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3104));
            $tmp3090 = 1;
            goto $l3088;
            $l3105:;
            return $finallyReturn3102;
        }
        }
        panda$collections$Array* $tmp3110 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3110);
        $tmp3109 = $tmp3110;
        $tmp3108 = $tmp3109;
        parameters3107 = $tmp3108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3109));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3111, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3112 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3111);
        if (((panda$core$Bit) { $tmp3112.nonnull }).value) {
        {
            int $tmp3115;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3119 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3118 = $tmp3119;
                $tmp3117 = $tmp3118;
                t3116 = $tmp3117;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3118));
                if (((panda$core$Bit) { t3116 == NULL }).value) {
                {
                    $tmp3121 = NULL;
                    $finallyReturn3119 = $tmp3121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3121));
                    $tmp3115 = 0;
                    goto $l3113;
                    $l3122:;
                    $tmp3090 = 2;
                    goto $l3088;
                    $l3123:;
                    return $finallyReturn3119;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3126 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3128 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3099.value));
                $tmp3127 = $tmp3128;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3126, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id3099.value).position, $tmp3127, t3116);
                $tmp3125 = $tmp3126;
                panda$collections$Array$add$panda$collections$Array$T(parameters3107, ((panda$core$Object*) $tmp3125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3127));
            }
            $tmp3115 = -1;
            goto $l3113;
            $l3113:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3116));
            t3116 = NULL;
            switch ($tmp3115) {
                case -1: goto $l3129;
                case 0: goto $l3122;
            }
            $l3129:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3131 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3133 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3099.value));
            $tmp3132 = $tmp3133;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3131, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id3099.value).position, $tmp3132);
            $tmp3130 = $tmp3131;
            panda$collections$Array$add$panda$collections$Array$T(parameters3107, ((panda$core$Object*) $tmp3130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3132));
        }
        }
        $l3134:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3137, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3138 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3137);
        bool $tmp3136 = ((panda$core$Bit) { $tmp3138.nonnull }).value;
        if (!$tmp3136) goto $l3135;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3139, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3141 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3139, &$s3140);
            id3099 = $tmp3141;
            if (((panda$core$Bit) { !id3099.nonnull }).value) {
            {
                $tmp3143 = NULL;
                $finallyReturn3141 = $tmp3143;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3143));
                $tmp3090 = 3;
                goto $l3088;
                $l3144:;
                return $finallyReturn3141;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3146, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3147 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3146);
            if (((panda$core$Bit) { $tmp3147.nonnull }).value) {
            {
                int $tmp3150;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3154 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3153 = $tmp3154;
                    $tmp3152 = $tmp3153;
                    t3151 = $tmp3152;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3152));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3153));
                    if (((panda$core$Bit) { t3151 == NULL }).value) {
                    {
                        $tmp3156 = NULL;
                        $finallyReturn3154 = $tmp3156;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3156));
                        $tmp3150 = 0;
                        goto $l3148;
                        $l3157:;
                        $tmp3090 = 4;
                        goto $l3088;
                        $l3158:;
                        return $finallyReturn3154;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3161 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3163 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3099.value));
                    $tmp3162 = $tmp3163;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3161, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) id3099.value).position, $tmp3162, t3151);
                    $tmp3160 = $tmp3161;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3107, ((panda$core$Object*) $tmp3160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3162));
                }
                $tmp3150 = -1;
                goto $l3148;
                $l3148:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3151));
                t3151 = NULL;
                switch ($tmp3150) {
                    case -1: goto $l3164;
                    case 0: goto $l3157;
                }
                $l3164:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3166 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3168 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3099.value));
                $tmp3167 = $tmp3168;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3166, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id3099.value).position, $tmp3167);
                $tmp3165 = $tmp3166;
                panda$collections$Array$add$panda$collections$Array$T(parameters3107, ((panda$core$Object*) $tmp3165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3167));
            }
            }
        }
        goto $l3134;
        $l3135:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3169, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3171 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3169, &$s3170);
        if (((panda$core$Bit) { !$tmp3171.nonnull }).value) {
        {
            $tmp3173 = NULL;
            $finallyReturn3171 = $tmp3173;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3173));
            $tmp3090 = 5;
            goto $l3088;
            $l3174:;
            return $finallyReturn3171;
        }
        }
        panda$collections$ImmutableArray* $tmp3179 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3107);
        $tmp3178 = $tmp3179;
        $tmp3177 = $tmp3178;
        $finallyReturn3175 = $tmp3177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3178));
        $tmp3090 = 6;
        goto $l3088;
        $l3180:;
        return $finallyReturn3175;
    }
    $l3088:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3107));
    parameters3107 = NULL;
    switch ($tmp3090) {
        case 1: goto $l3105;
        case 6: goto $l3180;
        case 5: goto $l3174;
        case 3: goto $l3144;
        case 2: goto $l3123;
        case 4: goto $l3158;
        case 0: goto $l3097;
    }
    $l3182:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3186;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3187;
    panda$collections$ImmutableArray* $finallyReturn3189;
    panda$collections$ImmutableArray* $tmp3191;
    panda$collections$Array* result3194 = NULL;
    panda$collections$Array* $tmp3195;
    panda$collections$Array* $tmp3196;
    org$pandalanguage$pandac$ASTNode* t3198 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3199;
    org$pandalanguage$pandac$ASTNode* $tmp3200;
    panda$collections$ImmutableArray* $finallyReturn3201;
    panda$collections$ImmutableArray* $tmp3203;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3209;
    org$pandalanguage$pandac$ASTNode* $tmp3211;
    org$pandalanguage$pandac$ASTNode* $tmp3212;
    org$pandalanguage$pandac$ASTNode* $tmp3213;
    panda$collections$ImmutableArray* $finallyReturn3214;
    panda$collections$ImmutableArray* $tmp3216;
    panda$collections$ImmutableArray* $finallyReturn3218;
    panda$collections$ImmutableArray* $tmp3220;
    panda$collections$ImmutableArray* $tmp3221;
    int $tmp3185;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3187, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3189 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3187, &$s3188);
        start3186 = $tmp3189;
        if (((panda$core$Bit) { !start3186.nonnull }).value) {
        {
            $tmp3191 = NULL;
            $finallyReturn3189 = $tmp3191;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3191));
            $tmp3185 = 0;
            goto $l3183;
            $l3192:;
            return $finallyReturn3189;
        }
        }
        panda$collections$Array* $tmp3197 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3197);
        $tmp3196 = $tmp3197;
        $tmp3195 = $tmp3196;
        result3194 = $tmp3195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3196));
        org$pandalanguage$pandac$ASTNode* $tmp3201 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3200 = $tmp3201;
        $tmp3199 = $tmp3200;
        t3198 = $tmp3199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3200));
        if (((panda$core$Bit) { t3198 == NULL }).value) {
        {
            $tmp3203 = NULL;
            $finallyReturn3201 = $tmp3203;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3203));
            $tmp3185 = 1;
            goto $l3183;
            $l3204:;
            return $finallyReturn3201;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3194, ((panda$core$Object*) t3198));
        $l3206:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3209, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3210 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3209);
        bool $tmp3208 = ((panda$core$Bit) { $tmp3210.nonnull }).value;
        if (!$tmp3208) goto $l3207;
        {
            {
                $tmp3211 = t3198;
                org$pandalanguage$pandac$ASTNode* $tmp3214 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3213 = $tmp3214;
                $tmp3212 = $tmp3213;
                t3198 = $tmp3212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3211));
            }
            if (((panda$core$Bit) { t3198 == NULL }).value) {
            {
                $tmp3216 = NULL;
                $finallyReturn3214 = $tmp3216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
                $tmp3185 = 2;
                goto $l3183;
                $l3217:;
                return $finallyReturn3214;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3194, ((panda$core$Object*) t3198));
        }
        goto $l3206;
        $l3207:;
        panda$collections$ImmutableArray* $tmp3222 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3194);
        $tmp3221 = $tmp3222;
        $tmp3220 = $tmp3221;
        $finallyReturn3218 = $tmp3220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3221));
        $tmp3185 = 3;
        goto $l3183;
        $l3223:;
        return $finallyReturn3218;
    }
    $l3183:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3194));
    result3194 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3198));
    t3198 = NULL;
    switch ($tmp3185) {
        case 1: goto $l3204;
        case 3: goto $l3223;
        case 2: goto $l3217;
        case 0: goto $l3192;
    }
    $l3225:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3229;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3230;
    org$pandalanguage$pandac$ASTNode* expr3233 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3234;
    org$pandalanguage$pandac$ASTNode* $tmp3236;
    org$pandalanguage$pandac$ASTNode* $tmp3237;
    org$pandalanguage$pandac$ASTNode* $tmp3238;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3239;
    org$pandalanguage$pandac$ASTNode* $tmp3241;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3244;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3245;
    org$pandalanguage$pandac$ASTNode* $tmp3247;
    org$pandalanguage$pandac$ASTNode* $tmp3248;
    panda$core$String* $tmp3250;
    int $tmp3228;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3230, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3232 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3230, &$s3231);
        a3229 = $tmp3232;
        memset(&expr3233, 0, sizeof(expr3233));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3234, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3235 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3234);
        if (((panda$core$Bit) { $tmp3235.nonnull }).value) {
        {
            {
                $tmp3236 = expr3233;
                org$pandalanguage$pandac$ASTNode* $tmp3239 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3238 = $tmp3239;
                $tmp3237 = $tmp3238;
                expr3233 = $tmp3237;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3237));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3238));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3236));
            }
            if (((panda$core$Bit) { expr3233 == NULL }).value) {
            {
                $tmp3241 = NULL;
                $finallyReturn3239 = $tmp3241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3241));
                $tmp3228 = 0;
                goto $l3226;
                $l3242:;
                return $finallyReturn3239;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3244, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3244, &$s3245);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3249 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3251 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3229.value));
        $tmp3250 = $tmp3251;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3249, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3229.value).position, $tmp3250, expr3233);
        $tmp3248 = $tmp3249;
        $tmp3247 = $tmp3248;
        $finallyReturn3245 = $tmp3247;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3247));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3250));
        $tmp3228 = 1;
        goto $l3226;
        $l3252:;
        return $finallyReturn3245;
    }
    $l3226:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3233));
    switch ($tmp3228) {
        case 1: goto $l3252;
        case 0: goto $l3242;
    }
    $l3254:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3258 = NULL;
    panda$collections$Array* $tmp3259;
    panda$collections$Array* $tmp3260;
    org$pandalanguage$pandac$ASTNode* a3270 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3271;
    org$pandalanguage$pandac$ASTNode* $tmp3272;
    panda$collections$ImmutableArray* $finallyReturn3275;
    panda$collections$ImmutableArray* $tmp3277;
    panda$collections$ImmutableArray* $tmp3278;
    int $tmp3257;
    {
        panda$collections$Array* $tmp3261 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3261);
        $tmp3260 = $tmp3261;
        $tmp3259 = $tmp3260;
        result3258 = $tmp3259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3260));
        $l3262:;
        org$pandalanguage$pandac$parser$Token $tmp3265 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3265.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3264 = $tmp3266.value;
        if (!$tmp3264) goto $l3263;
        {
            int $tmp3269;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3273 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3272 = $tmp3273;
                $tmp3271 = $tmp3272;
                a3270 = $tmp3271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3271));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3272));
                if (((panda$core$Bit) { a3270 == NULL }).value) {
                {
                    $tmp3269 = 0;
                    goto $l3267;
                    $l3274:;
                    goto $l3263;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3258, ((panda$core$Object*) a3270));
            }
            $tmp3269 = -1;
            goto $l3267;
            $l3267:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3270));
            a3270 = NULL;
            switch ($tmp3269) {
                case 0: goto $l3274;
                case -1: goto $l3275;
            }
            $l3275:;
        }
        goto $l3262;
        $l3263:;
        panda$collections$ImmutableArray* $tmp3279 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3258);
        $tmp3278 = $tmp3279;
        $tmp3277 = $tmp3278;
        $finallyReturn3275 = $tmp3277;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3278));
        $tmp3257 = 0;
        goto $l3255;
        $l3280:;
        return $finallyReturn3275;
    }
    $l3255:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3258));
    result3258 = NULL;
    switch ($tmp3257) {
        case 0: goto $l3280;
    }
    $l3282:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3286;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3287;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3289;
    org$pandalanguage$pandac$ASTNode* $tmp3291;
    panda$core$MutableString* result3294 = NULL;
    panda$core$MutableString* $tmp3295;
    panda$core$MutableString* $tmp3296;
    org$pandalanguage$pandac$parser$Token next3300;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3304;
    org$pandalanguage$pandac$ASTNode* $tmp3306;
    panda$core$String* $tmp3309;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3310;
    org$pandalanguage$pandac$ASTNode* $tmp3312;
    org$pandalanguage$pandac$ASTNode* $tmp3313;
    panda$core$String* $tmp3315;
    int $tmp3285;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3287, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3289 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3287, &$s3288);
        start3286 = $tmp3289;
        if (((panda$core$Bit) { !start3286.nonnull }).value) {
        {
            $tmp3291 = NULL;
            $finallyReturn3289 = $tmp3291;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3291));
            $tmp3285 = 0;
            goto $l3283;
            $l3292:;
            return $finallyReturn3289;
        }
        }
        panda$core$MutableString* $tmp3297 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3297);
        $tmp3296 = $tmp3297;
        $tmp3295 = $tmp3296;
        result3294 = $tmp3295;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3296));
        $l3298:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3301 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3300 = $tmp3301;
            panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3300.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3302.value) {
            {
                goto $l3299;
            }
            }
            panda$core$Bit $tmp3303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3300.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3303.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3286.value), &$s3304);
                $tmp3306 = NULL;
                $finallyReturn3304 = $tmp3306;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3306));
                $tmp3285 = 1;
                goto $l3283;
                $l3307:;
                return $finallyReturn3304;
            }
            }
            panda$core$String* $tmp3310 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3300);
            $tmp3309 = $tmp3310;
            panda$core$MutableString$append$panda$core$String(result3294, $tmp3309);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3309));
        }
        }
        $l3299:;
        org$pandalanguage$pandac$ASTNode* $tmp3314 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3316 = panda$core$MutableString$finish$R$panda$core$String(result3294);
        $tmp3315 = $tmp3316;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3314, ((panda$core$Int64) { 34 }), ((org$pandalanguage$pandac$parser$Token) start3286.value).position, $tmp3315);
        $tmp3313 = $tmp3314;
        $tmp3312 = $tmp3313;
        $finallyReturn3310 = $tmp3312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3315));
        $tmp3285 = 2;
        goto $l3283;
        $l3317:;
        return $finallyReturn3310;
    }
    $l3283:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3294));
    result3294 = NULL;
    switch ($tmp3285) {
        case 1: goto $l3307;
        case 0: goto $l3292;
        case 2: goto $l3317;
    }
    $l3319:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3323;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3324;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3326;
    org$pandalanguage$pandac$ASTNode* $tmp3328;
    org$pandalanguage$pandac$ASTNode* t3331 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3332;
    org$pandalanguage$pandac$ASTNode* $tmp3333;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3334;
    org$pandalanguage$pandac$ASTNode* $tmp3336;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3338;
    org$pandalanguage$pandac$ASTNode* $tmp3340;
    org$pandalanguage$pandac$ASTNode* $tmp3341;
    panda$core$String* $tmp3343;
    int $tmp3322;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3324, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3326 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3324, &$s3325);
        id3323 = $tmp3326;
        if (((panda$core$Bit) { !id3323.nonnull }).value) {
        {
            $tmp3328 = NULL;
            $finallyReturn3326 = $tmp3328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
            $tmp3322 = 0;
            goto $l3320;
            $l3329:;
            return $finallyReturn3326;
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
            $tmp3336 = NULL;
            $finallyReturn3334 = $tmp3336;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3336));
            $tmp3322 = 1;
            goto $l3320;
            $l3337:;
            return $finallyReturn3334;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3342 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3344 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3323.value));
        $tmp3343 = $tmp3344;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3342, ((panda$core$Int64) { 28 }), ((org$pandalanguage$pandac$parser$Token) id3323.value).position, $tmp3343, t3331);
        $tmp3341 = $tmp3342;
        $tmp3340 = $tmp3341;
        $finallyReturn3338 = $tmp3340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3343));
        $tmp3322 = 2;
        goto $l3320;
        $l3345:;
        return $finallyReturn3338;
    }
    $l3320:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3331));
    t3331 = NULL;
    switch ($tmp3322) {
        case 1: goto $l3337;
        case 2: goto $l3345;
        case 0: goto $l3329;
    }
    $l3347:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3351;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3352;
    panda$collections$ImmutableArray* $finallyReturn3354;
    panda$collections$ImmutableArray* $tmp3356;
    panda$collections$Array* result3359 = NULL;
    panda$collections$Array* $tmp3360;
    panda$collections$Array* $tmp3361;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3363;
    org$pandalanguage$pandac$ASTNode* param3368 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3369;
    org$pandalanguage$pandac$ASTNode* $tmp3370;
    panda$collections$ImmutableArray* $finallyReturn3371;
    panda$collections$ImmutableArray* $tmp3373;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3380;
    org$pandalanguage$pandac$ASTNode* $tmp3382;
    org$pandalanguage$pandac$ASTNode* $tmp3383;
    org$pandalanguage$pandac$ASTNode* $tmp3384;
    panda$collections$ImmutableArray* $finallyReturn3385;
    panda$collections$ImmutableArray* $tmp3387;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3391;
    panda$collections$ImmutableArray* $finallyReturn3393;
    panda$collections$ImmutableArray* $tmp3395;
    panda$collections$ImmutableArray* $finallyReturn3399;
    panda$collections$ImmutableArray* $tmp3401;
    panda$collections$ImmutableArray* $tmp3402;
    int $tmp3350;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3352, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3354 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3352, &$s3353);
        start3351 = $tmp3354;
        if (((panda$core$Bit) { !start3351.nonnull }).value) {
        {
            $tmp3356 = NULL;
            $finallyReturn3354 = $tmp3356;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3356));
            $tmp3350 = 0;
            goto $l3348;
            $l3357:;
            return $finallyReturn3354;
        }
        }
        panda$collections$Array* $tmp3362 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3362);
        $tmp3361 = $tmp3362;
        $tmp3360 = $tmp3361;
        result3359 = $tmp3360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3361));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3363, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3364 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3363);
        if (((panda$core$Bit) { !$tmp3364.nonnull }).value) {
        {
            int $tmp3367;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3371 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3370 = $tmp3371;
                $tmp3369 = $tmp3370;
                param3368 = $tmp3369;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3369));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3370));
                if (((panda$core$Bit) { param3368 == NULL }).value) {
                {
                    $tmp3373 = NULL;
                    $finallyReturn3371 = $tmp3373;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3373));
                    $tmp3367 = 0;
                    goto $l3365;
                    $l3374:;
                    $tmp3350 = 1;
                    goto $l3348;
                    $l3375:;
                    return $finallyReturn3371;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3359, ((panda$core$Object*) param3368));
                $l3377:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3380, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3381 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3380);
                bool $tmp3379 = ((panda$core$Bit) { $tmp3381.nonnull }).value;
                if (!$tmp3379) goto $l3378;
                {
                    {
                        $tmp3382 = param3368;
                        org$pandalanguage$pandac$ASTNode* $tmp3385 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3384 = $tmp3385;
                        $tmp3383 = $tmp3384;
                        param3368 = $tmp3383;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3383));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3384));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3382));
                    }
                    if (((panda$core$Bit) { param3368 == NULL }).value) {
                    {
                        $tmp3387 = NULL;
                        $finallyReturn3385 = $tmp3387;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3387));
                        $tmp3367 = 1;
                        goto $l3365;
                        $l3388:;
                        $tmp3350 = 2;
                        goto $l3348;
                        $l3389:;
                        return $finallyReturn3385;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3359, ((panda$core$Object*) param3368));
                }
                goto $l3377;
                $l3378:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3391, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3393 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3391, &$s3392);
                if (((panda$core$Bit) { !$tmp3393.nonnull }).value) {
                {
                    $tmp3395 = NULL;
                    $finallyReturn3393 = $tmp3395;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3395));
                    $tmp3367 = 2;
                    goto $l3365;
                    $l3396:;
                    $tmp3350 = 3;
                    goto $l3348;
                    $l3397:;
                    return $finallyReturn3393;
                }
                }
            }
            $tmp3367 = -1;
            goto $l3365;
            $l3365:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3368));
            param3368 = NULL;
            switch ($tmp3367) {
                case 0: goto $l3374;
                case 1: goto $l3388;
                case 2: goto $l3396;
                case -1: goto $l3399;
            }
            $l3399:;
        }
        }
        panda$collections$ImmutableArray* $tmp3403 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3359);
        $tmp3402 = $tmp3403;
        $tmp3401 = $tmp3402;
        $finallyReturn3399 = $tmp3401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3402));
        $tmp3350 = 4;
        goto $l3348;
        $l3404:;
        return $finallyReturn3399;
    }
    $l3348:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3359));
    result3359 = NULL;
    switch ($tmp3350) {
        case 1: goto $l3375;
        case 4: goto $l3404;
        case 2: goto $l3389;
        case 3: goto $l3397;
        case 0: goto $l3357;
    }
    $l3406:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $finallyReturn3406;
    org$pandalanguage$pandac$ASTNode* $tmp3408;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    $tmp3408 = NULL;
    $finallyReturn3406 = $tmp3408;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3408));
    return $finallyReturn3406;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3413;
    org$pandalanguage$pandac$parser$Token$nullable start3414;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3415;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3417;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3419;
    org$pandalanguage$pandac$ASTNode* $tmp3421;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3424;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3425;
    panda$core$String* name3426 = NULL;
    panda$core$String* $tmp3427;
    panda$core$String* $tmp3428;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3429;
    org$pandalanguage$pandac$ASTNode* $tmp3431;
    panda$collections$ImmutableArray* params3434 = NULL;
    panda$collections$ImmutableArray* $tmp3435;
    panda$collections$ImmutableArray* $tmp3436;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3437;
    org$pandalanguage$pandac$ASTNode* $tmp3439;
    org$pandalanguage$pandac$ASTNode* returnType3442 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3445;
    org$pandalanguage$pandac$ASTNode* $tmp3446;
    org$pandalanguage$pandac$ASTNode* $tmp3447;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3448;
    org$pandalanguage$pandac$ASTNode* $tmp3450;
    org$pandalanguage$pandac$ASTNode* $tmp3453;
    org$pandalanguage$pandac$ASTNode* $tmp3454;
    panda$collections$ImmutableArray* body3455 = NULL;
    panda$collections$ImmutableArray* $tmp3458;
    panda$collections$ImmutableArray* $tmp3459;
    panda$collections$ImmutableArray* $tmp3460;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3461;
    org$pandalanguage$pandac$ASTNode* $tmp3463;
    panda$collections$ImmutableArray* $tmp3466;
    panda$collections$ImmutableArray* $tmp3467;
    org$pandalanguage$pandac$parser$Token token3468;
    panda$core$String* tokenText3470 = NULL;
    panda$core$String* $tmp3471;
    panda$core$String* $tmp3472;
    org$pandalanguage$pandac$ASTNode* post3488 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3489;
    org$pandalanguage$pandac$ASTNode* $tmp3490;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3491;
    org$pandalanguage$pandac$ASTNode* $tmp3493;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3497;
    org$pandalanguage$pandac$ASTNode* $tmp3499;
    org$pandalanguage$pandac$ASTNode* $tmp3500;
    int $tmp3412;
    {
        memset(&kind3413, 0, sizeof(kind3413));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3415, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3416 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3415);
        start3414 = $tmp3416;
        if (((panda$core$Bit) { !start3414.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3417, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3419 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3417, &$s3418);
            start3414 = $tmp3419;
            if (((panda$core$Bit) { !start3414.nonnull }).value) {
            {
                $tmp3421 = NULL;
                $finallyReturn3419 = $tmp3421;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3421));
                $tmp3412 = 0;
                goto $l3410;
                $l3422:;
                return $finallyReturn3419;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3424, ((panda$core$Int64) { 0 }));
            kind3413 = $tmp3424;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3425, ((panda$core$Int64) { 1 }));
            kind3413 = $tmp3425;
        }
        }
        panda$core$String* $tmp3429 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3428 = $tmp3429;
        $tmp3427 = $tmp3428;
        name3426 = $tmp3427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3428));
        if (((panda$core$Bit) { name3426 == NULL }).value) {
        {
            $tmp3431 = NULL;
            $finallyReturn3429 = $tmp3431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3431));
            $tmp3412 = 1;
            goto $l3410;
            $l3432:;
            return $finallyReturn3429;
        }
        }
        panda$collections$ImmutableArray* $tmp3437 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3436 = $tmp3437;
        $tmp3435 = $tmp3436;
        params3434 = $tmp3435;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3435));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3436));
        if (((panda$core$Bit) { params3434 == NULL }).value) {
        {
            $tmp3439 = NULL;
            $finallyReturn3437 = $tmp3439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3439));
            $tmp3412 = 2;
            goto $l3410;
            $l3440:;
            return $finallyReturn3437;
        }
        }
        memset(&returnType3442, 0, sizeof(returnType3442));
        org$pandalanguage$pandac$parser$Token $tmp3443 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3443.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3444.value) {
        {
            {
                $tmp3445 = returnType3442;
                org$pandalanguage$pandac$ASTNode* $tmp3448 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3447 = $tmp3448;
                $tmp3446 = $tmp3447;
                returnType3442 = $tmp3446;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3446));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3447));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3445));
            }
            if (((panda$core$Bit) { returnType3442 == NULL }).value) {
            {
                $tmp3450 = NULL;
                $finallyReturn3448 = $tmp3450;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3450));
                $tmp3412 = 3;
                goto $l3410;
                $l3451:;
                return $finallyReturn3448;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3453 = returnType3442;
                $tmp3454 = NULL;
                returnType3442 = $tmp3454;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3454));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3453));
            }
        }
        }
        memset(&body3455, 0, sizeof(body3455));
        org$pandalanguage$pandac$parser$Token $tmp3456 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3456.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3457.value) {
        {
            {
                $tmp3458 = body3455;
                panda$collections$ImmutableArray* $tmp3461 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3460 = $tmp3461;
                $tmp3459 = $tmp3460;
                body3455 = $tmp3459;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3458));
            }
            if (((panda$core$Bit) { body3455 == NULL }).value) {
            {
                $tmp3463 = NULL;
                $finallyReturn3461 = $tmp3463;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3463));
                $tmp3412 = 4;
                goto $l3410;
                $l3464:;
                return $finallyReturn3461;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3466 = body3455;
                $tmp3467 = NULL;
                body3455 = $tmp3467;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3467));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3466));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3469 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3468 = $tmp3469;
        panda$core$String* $tmp3473 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3468);
        $tmp3472 = $tmp3473;
        $tmp3471 = $tmp3472;
        tokenText3470 = $tmp3471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3472));
        panda$core$Bit $tmp3475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3468.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3474 = $tmp3475.value;
        if (!$tmp3474) goto $l3476;
        panda$core$Bit $tmp3479 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3470, &$s3478);
        bool $tmp3477 = $tmp3479.value;
        if ($tmp3477) goto $l3480;
        panda$core$Bit $tmp3482 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3470, &$s3481);
        $tmp3477 = $tmp3482.value;
        $l3480:;
        panda$core$Bit $tmp3483 = { $tmp3477 };
        $tmp3474 = $tmp3483.value;
        $l3476:;
        panda$core$Bit $tmp3484 = { $tmp3474 };
        if ($tmp3484.value) {
        {
            int $tmp3487;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3491 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3490 = $tmp3491;
                $tmp3489 = $tmp3490;
                post3488 = $tmp3489;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3490));
                if (((panda$core$Bit) { post3488 == NULL }).value) {
                {
                    $tmp3493 = NULL;
                    $finallyReturn3491 = $tmp3493;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3493));
                    $tmp3487 = 0;
                    goto $l3485;
                    $l3494:;
                    $tmp3412 = 5;
                    goto $l3410;
                    $l3495:;
                    return $finallyReturn3491;
                }
                }
            }
            $tmp3487 = -1;
            goto $l3485;
            $l3485:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3488));
            post3488 = NULL;
            switch ($tmp3487) {
                case 0: goto $l3494;
                case -1: goto $l3497;
            }
            $l3497:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3501 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3501, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start3414.value).position, p_doccomment, p_annotations, kind3413, name3426, params3434, returnType3442, body3455);
        $tmp3500 = $tmp3501;
        $tmp3499 = $tmp3500;
        $finallyReturn3497 = $tmp3499;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3499));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3500));
        $tmp3412 = 6;
        goto $l3410;
        $l3502:;
        return $finallyReturn3497;
    }
    $l3410:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3426));
    name3426 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3434));
    params3434 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3442));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3455));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3470));
    tokenText3470 = NULL;
    switch ($tmp3412) {
        case 6: goto $l3502;
        case 1: goto $l3432;
        case 3: goto $l3451;
        case 4: goto $l3464;
        case 5: goto $l3495;
        case 0: goto $l3422;
        case 2: goto $l3440;
    }
    $l3504:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3508;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3509;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3511;
    org$pandalanguage$pandac$ASTNode* $tmp3513;
    panda$collections$ImmutableArray* params3516 = NULL;
    panda$collections$ImmutableArray* $tmp3517;
    panda$collections$ImmutableArray* $tmp3518;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3519;
    org$pandalanguage$pandac$ASTNode* $tmp3521;
    panda$collections$ImmutableArray* b3524 = NULL;
    panda$collections$ImmutableArray* $tmp3525;
    panda$collections$ImmutableArray* $tmp3526;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3527;
    org$pandalanguage$pandac$ASTNode* $tmp3529;
    org$pandalanguage$pandac$parser$Token token3532;
    panda$core$String* tokenText3534 = NULL;
    panda$core$String* $tmp3535;
    panda$core$String* $tmp3536;
    org$pandalanguage$pandac$ASTNode* post3552 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3553;
    org$pandalanguage$pandac$ASTNode* $tmp3554;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3555;
    org$pandalanguage$pandac$ASTNode* $tmp3557;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3561;
    org$pandalanguage$pandac$ASTNode* $tmp3563;
    org$pandalanguage$pandac$ASTNode* $tmp3564;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3566;
    int $tmp3507;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3509, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3511 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3509, &$s3510);
        start3508 = $tmp3511;
        if (((panda$core$Bit) { !start3508.nonnull }).value) {
        {
            $tmp3513 = NULL;
            $finallyReturn3511 = $tmp3513;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3513));
            $tmp3507 = 0;
            goto $l3505;
            $l3514:;
            return $finallyReturn3511;
        }
        }
        panda$collections$ImmutableArray* $tmp3519 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3518 = $tmp3519;
        $tmp3517 = $tmp3518;
        params3516 = $tmp3517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3518));
        if (((panda$core$Bit) { params3516 == NULL }).value) {
        {
            $tmp3521 = NULL;
            $finallyReturn3519 = $tmp3521;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3521));
            $tmp3507 = 1;
            goto $l3505;
            $l3522:;
            return $finallyReturn3519;
        }
        }
        panda$collections$ImmutableArray* $tmp3527 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3526 = $tmp3527;
        $tmp3525 = $tmp3526;
        b3524 = $tmp3525;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3526));
        if (((panda$core$Bit) { b3524 == NULL }).value) {
        {
            $tmp3529 = NULL;
            $finallyReturn3527 = $tmp3529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3529));
            $tmp3507 = 2;
            goto $l3505;
            $l3530:;
            return $finallyReturn3527;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3533 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3532 = $tmp3533;
        panda$core$String* $tmp3537 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3532);
        $tmp3536 = $tmp3537;
        $tmp3535 = $tmp3536;
        tokenText3534 = $tmp3535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3536));
        panda$core$Bit $tmp3539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3532.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3538 = $tmp3539.value;
        if (!$tmp3538) goto $l3540;
        panda$core$Bit $tmp3543 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3534, &$s3542);
        bool $tmp3541 = $tmp3543.value;
        if ($tmp3541) goto $l3544;
        panda$core$Bit $tmp3546 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3534, &$s3545);
        $tmp3541 = $tmp3546.value;
        $l3544:;
        panda$core$Bit $tmp3547 = { $tmp3541 };
        $tmp3538 = $tmp3547.value;
        $l3540:;
        panda$core$Bit $tmp3548 = { $tmp3538 };
        if ($tmp3548.value) {
        {
            int $tmp3551;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3555 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3554 = $tmp3555;
                $tmp3553 = $tmp3554;
                post3552 = $tmp3553;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3553));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3554));
                if (((panda$core$Bit) { post3552 == NULL }).value) {
                {
                    $tmp3557 = NULL;
                    $finallyReturn3555 = $tmp3557;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3557));
                    $tmp3551 = 0;
                    goto $l3549;
                    $l3558:;
                    $tmp3507 = 3;
                    goto $l3505;
                    $l3559:;
                    return $finallyReturn3555;
                }
                }
            }
            $tmp3551 = -1;
            goto $l3549;
            $l3549:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3552));
            post3552 = NULL;
            switch ($tmp3551) {
                case 0: goto $l3558;
                case -1: goto $l3561;
            }
            $l3561:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3565 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3566, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3565, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start3508.value).position, p_doccomment, p_annotations, $tmp3566, &$s3567, params3516, NULL, b3524);
        $tmp3564 = $tmp3565;
        $tmp3563 = $tmp3564;
        $finallyReturn3561 = $tmp3563;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3564));
        $tmp3507 = 4;
        goto $l3505;
        $l3568:;
        return $finallyReturn3561;
    }
    $l3505:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3516));
    params3516 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b3524));
    b3524 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3534));
    tokenText3534 = NULL;
    switch ($tmp3507) {
        case 3: goto $l3559;
        case 2: goto $l3530;
        case 4: goto $l3568;
        case 0: goto $l3514;
        case 1: goto $l3522;
    }
    $l3570:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl3574 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3575;
    org$pandalanguage$pandac$ASTNode* $tmp3576;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3577;
    org$pandalanguage$pandac$ASTNode* $tmp3579;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3581;
    org$pandalanguage$pandac$ASTNode* $tmp3583;
    org$pandalanguage$pandac$ASTNode* $tmp3584;
    int $tmp3573;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3577 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3576 = $tmp3577;
        $tmp3575 = $tmp3576;
        decl3574 = $tmp3575;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3575));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3576));
        if (((panda$core$Bit) { decl3574 == NULL }).value) {
        {
            $tmp3579 = NULL;
            $finallyReturn3577 = $tmp3579;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3579));
            $tmp3573 = 0;
            goto $l3571;
            $l3580:;
            return $finallyReturn3577;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3585 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3587 = (($fn3586) decl3574->$class->vtable[2])(decl3574);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3585, ((panda$core$Int64) { 14 }), $tmp3587, p_doccomment, p_annotations, decl3574);
        $tmp3584 = $tmp3585;
        $tmp3583 = $tmp3584;
        $finallyReturn3581 = $tmp3583;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3584));
        $tmp3573 = 1;
        goto $l3571;
        $l3588:;
        return $finallyReturn3581;
    }
    $l3571:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3574));
    decl3574 = NULL;
    switch ($tmp3573) {
        case 1: goto $l3588;
        case 0: goto $l3580;
    }
    $l3590:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name3594;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3595;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3597;
    org$pandalanguage$pandac$ASTNode* $tmp3599;
    panda$collections$Array* fields3602 = NULL;
    panda$collections$Array* $tmp3603;
    panda$collections$Array* $tmp3604;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3606;
    org$pandalanguage$pandac$ASTNode* field3613 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3614;
    org$pandalanguage$pandac$ASTNode* $tmp3615;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3616;
    org$pandalanguage$pandac$ASTNode* $tmp3618;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3625;
    org$pandalanguage$pandac$ASTNode* $tmp3627;
    org$pandalanguage$pandac$ASTNode* $tmp3628;
    org$pandalanguage$pandac$ASTNode* $tmp3629;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3630;
    org$pandalanguage$pandac$ASTNode* $tmp3632;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3637;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3639;
    org$pandalanguage$pandac$ASTNode* $tmp3641;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3643;
    org$pandalanguage$pandac$ASTNode* $tmp3645;
    org$pandalanguage$pandac$ASTNode* $tmp3646;
    panda$core$String* $tmp3648;
    panda$collections$ImmutableArray* $tmp3650;
    int $tmp3593;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3595, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3597 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3595, &$s3596);
        name3594 = $tmp3597;
        if (((panda$core$Bit) { !name3594.nonnull }).value) {
        {
            $tmp3599 = NULL;
            $finallyReturn3597 = $tmp3599;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3599));
            $tmp3593 = 0;
            goto $l3591;
            $l3600:;
            return $finallyReturn3597;
        }
        }
        panda$collections$Array* $tmp3605 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3605);
        $tmp3604 = $tmp3605;
        $tmp3603 = $tmp3604;
        fields3602 = $tmp3603;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3603));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3604));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3606, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3607 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3606);
        if (((panda$core$Bit) { $tmp3607.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3608 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp3609 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3608.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp3609.value) {
            {
                int $tmp3612;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3616 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3615 = $tmp3616;
                    $tmp3614 = $tmp3615;
                    field3613 = $tmp3614;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3614));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3615));
                    if (((panda$core$Bit) { field3613 == NULL }).value) {
                    {
                        $tmp3618 = NULL;
                        $finallyReturn3616 = $tmp3618;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3618));
                        $tmp3612 = 0;
                        goto $l3610;
                        $l3619:;
                        $tmp3593 = 1;
                        goto $l3591;
                        $l3620:;
                        return $finallyReturn3616;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields3602, ((panda$core$Object*) field3613));
                    $l3622:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3625, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3626 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3625);
                    bool $tmp3624 = ((panda$core$Bit) { $tmp3626.nonnull }).value;
                    if (!$tmp3624) goto $l3623;
                    {
                        {
                            $tmp3627 = field3613;
                            org$pandalanguage$pandac$ASTNode* $tmp3630 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3629 = $tmp3630;
                            $tmp3628 = $tmp3629;
                            field3613 = $tmp3628;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3628));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3629));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
                        }
                        if (((panda$core$Bit) { field3613 == NULL }).value) {
                        {
                            $tmp3632 = NULL;
                            $finallyReturn3630 = $tmp3632;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3632));
                            $tmp3612 = 1;
                            goto $l3610;
                            $l3633:;
                            $tmp3593 = 2;
                            goto $l3591;
                            $l3634:;
                            return $finallyReturn3630;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields3602, ((panda$core$Object*) field3613));
                    }
                    goto $l3622;
                    $l3623:;
                }
                $tmp3612 = -1;
                goto $l3610;
                $l3610:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field3613));
                field3613 = NULL;
                switch ($tmp3612) {
                    case 0: goto $l3619;
                    case 1: goto $l3633;
                    case -1: goto $l3636;
                }
                $l3636:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3637, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3639 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3637, &$s3638);
            if (((panda$core$Bit) { !$tmp3639.nonnull }).value) {
            {
                $tmp3641 = NULL;
                $finallyReturn3639 = $tmp3641;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3641));
                $tmp3593 = 3;
                goto $l3591;
                $l3642:;
                return $finallyReturn3639;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3647 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3649 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3594.value));
        $tmp3648 = $tmp3649;
        panda$collections$ImmutableArray* $tmp3651 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields3602);
        $tmp3650 = $tmp3651;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3647, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name3594.value).position, p_doccomment, $tmp3648, $tmp3650);
        $tmp3646 = $tmp3647;
        $tmp3645 = $tmp3646;
        $finallyReturn3643 = $tmp3645;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3646));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3650));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3648));
        $tmp3593 = 4;
        goto $l3591;
        $l3652:;
        return $finallyReturn3643;
    }
    $l3591:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields3602));
    fields3602 = NULL;
    switch ($tmp3593) {
        case 3: goto $l3642;
        case 2: goto $l3634;
        case 4: goto $l3652;
        case 1: goto $l3620;
        case 0: goto $l3600;
    }
    $l3654:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3658;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3659;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3661;
    org$pandalanguage$pandac$ASTNode* $tmp3663;
    org$pandalanguage$pandac$parser$Token$nullable name3666;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3667;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3669;
    org$pandalanguage$pandac$ASTNode* $tmp3671;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3674;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3676;
    org$pandalanguage$pandac$ASTNode* $tmp3678;
    panda$collections$Array* members3681 = NULL;
    panda$collections$Array* $tmp3682;
    panda$collections$Array* $tmp3683;
    org$pandalanguage$pandac$ASTNode* dc3685 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3686;
    org$pandalanguage$pandac$parser$Token next3689;
    org$pandalanguage$pandac$parser$Token$Kind $match$1861_133691;
    panda$core$String* $tmp3730;
    panda$core$String* $tmp3731;
    panda$core$String* $tmp3733;
    org$pandalanguage$pandac$ASTNode* $tmp3738;
    org$pandalanguage$pandac$ASTNode* $tmp3739;
    org$pandalanguage$pandac$ASTNode* $tmp3740;
    org$pandalanguage$pandac$ASTNode* c3746 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3747;
    org$pandalanguage$pandac$ASTNode* $tmp3748;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3749;
    org$pandalanguage$pandac$ASTNode* $tmp3751;
    org$pandalanguage$pandac$ASTNode* $tmp3755;
    org$pandalanguage$pandac$ASTNode* $tmp3756;
    panda$collections$ImmutableArray* a3758 = NULL;
    panda$collections$ImmutableArray* $tmp3759;
    panda$collections$ImmutableArray* $tmp3760;
    org$pandalanguage$pandac$parser$Token next3764;
    org$pandalanguage$pandac$parser$Token$Kind $match$1885_133766;
    panda$core$String* $tmp3770;
    panda$core$String* $tmp3771;
    panda$core$String* $tmp3773;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3777;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    panda$collections$ImmutableArray* $tmp3782;
    panda$collections$ImmutableArray* $tmp3783;
    panda$collections$ImmutableArray* $tmp3784;
    panda$core$String* $tmp3792;
    panda$core$String* $tmp3793;
    panda$core$String* $tmp3795;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3799;
    org$pandalanguage$pandac$ASTNode* $tmp3801;
    org$pandalanguage$pandac$ASTNode* $tmp3804;
    org$pandalanguage$pandac$ASTNode* $tmp3805;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    org$pandalanguage$pandac$ASTNode* decl3812 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3813;
    org$pandalanguage$pandac$ASTNode* $tmp3814;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3815;
    org$pandalanguage$pandac$ASTNode* $tmp3817;
    org$pandalanguage$pandac$ASTNode* $tmp3821;
    org$pandalanguage$pandac$ASTNode* $tmp3822;
    panda$collections$ImmutableArray* $tmp3823;
    panda$collections$ImmutableArray* $tmp3824;
    panda$collections$ImmutableArray* $tmp3825;
    org$pandalanguage$pandac$ASTNode* decl3832 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3833;
    org$pandalanguage$pandac$ASTNode* $tmp3834;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3835;
    org$pandalanguage$pandac$ASTNode* $tmp3837;
    org$pandalanguage$pandac$ASTNode* $tmp3841;
    org$pandalanguage$pandac$ASTNode* $tmp3842;
    panda$collections$ImmutableArray* $tmp3843;
    panda$collections$ImmutableArray* $tmp3844;
    panda$collections$ImmutableArray* $tmp3845;
    org$pandalanguage$pandac$ASTNode* decl3852 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3853;
    org$pandalanguage$pandac$ASTNode* $tmp3854;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3855;
    org$pandalanguage$pandac$ASTNode* $tmp3857;
    org$pandalanguage$pandac$ASTNode* $tmp3861;
    org$pandalanguage$pandac$ASTNode* $tmp3862;
    panda$collections$ImmutableArray* $tmp3863;
    panda$collections$ImmutableArray* $tmp3864;
    panda$collections$ImmutableArray* $tmp3865;
    org$pandalanguage$pandac$ASTNode* decl3876 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3877;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3879;
    org$pandalanguage$pandac$ASTNode* $tmp3881;
    org$pandalanguage$pandac$ASTNode* $tmp3885;
    org$pandalanguage$pandac$ASTNode* $tmp3886;
    panda$collections$ImmutableArray* $tmp3887;
    panda$collections$ImmutableArray* $tmp3888;
    panda$collections$ImmutableArray* $tmp3889;
    org$pandalanguage$pandac$ASTNode* decl3908 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3909;
    org$pandalanguage$pandac$ASTNode* $tmp3910;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3911;
    org$pandalanguage$pandac$ASTNode* $tmp3913;
    org$pandalanguage$pandac$ASTNode* $tmp3917;
    org$pandalanguage$pandac$ASTNode* $tmp3918;
    panda$collections$ImmutableArray* $tmp3919;
    panda$collections$ImmutableArray* $tmp3920;
    panda$collections$ImmutableArray* $tmp3921;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3925;
    panda$core$String* $tmp3927;
    panda$core$String* $tmp3928;
    panda$core$String* $tmp3930;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3934;
    org$pandalanguage$pandac$ASTNode* $tmp3936;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3938;
    org$pandalanguage$pandac$ASTNode* $tmp3940;
    org$pandalanguage$pandac$ASTNode* $tmp3941;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3943;
    panda$core$String* $tmp3944;
    panda$collections$ImmutableArray* $tmp3946;
    int $tmp3657;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3659, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3661 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3659, &$s3660);
        start3658 = $tmp3661;
        if (((panda$core$Bit) { !start3658.nonnull }).value) {
        {
            $tmp3663 = NULL;
            $finallyReturn3661 = $tmp3663;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3663));
            $tmp3657 = 0;
            goto $l3655;
            $l3664:;
            return $finallyReturn3661;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3667, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3669 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3667, &$s3668);
        name3666 = $tmp3669;
        if (((panda$core$Bit) { !name3666.nonnull }).value) {
        {
            $tmp3671 = NULL;
            $finallyReturn3669 = $tmp3671;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3671));
            $tmp3657 = 1;
            goto $l3655;
            $l3672:;
            return $finallyReturn3669;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3674, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3676 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3674, &$s3675);
        if (((panda$core$Bit) { !$tmp3676.nonnull }).value) {
        {
            $tmp3678 = NULL;
            $finallyReturn3676 = $tmp3678;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3678));
            $tmp3657 = 2;
            goto $l3655;
            $l3679:;
            return $finallyReturn3676;
        }
        }
        panda$collections$Array* $tmp3684 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3684);
        $tmp3683 = $tmp3684;
        $tmp3682 = $tmp3683;
        members3681 = $tmp3682;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3683));
        $tmp3686 = NULL;
        dc3685 = $tmp3686;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3686));
        $l3687:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3690 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3689 = $tmp3690;
            {
                $match$1861_133691 = next3689.kind;
                panda$core$Bit $tmp3701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp3700 = $tmp3701.value;
                if ($tmp3700) goto $l3702;
                panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp3700 = $tmp3703.value;
                $l3702:;
                panda$core$Bit $tmp3704 = { $tmp3700 };
                bool $tmp3699 = $tmp3704.value;
                if ($tmp3699) goto $l3705;
                panda$core$Bit $tmp3706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp3699 = $tmp3706.value;
                $l3705:;
                panda$core$Bit $tmp3707 = { $tmp3699 };
                bool $tmp3698 = $tmp3707.value;
                if ($tmp3698) goto $l3708;
                panda$core$Bit $tmp3709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp3698 = $tmp3709.value;
                $l3708:;
                panda$core$Bit $tmp3710 = { $tmp3698 };
                bool $tmp3697 = $tmp3710.value;
                if ($tmp3697) goto $l3711;
                panda$core$Bit $tmp3712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3697 = $tmp3712.value;
                $l3711:;
                panda$core$Bit $tmp3713 = { $tmp3697 };
                bool $tmp3696 = $tmp3713.value;
                if ($tmp3696) goto $l3714;
                panda$core$Bit $tmp3715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp3696 = $tmp3715.value;
                $l3714:;
                panda$core$Bit $tmp3716 = { $tmp3696 };
                bool $tmp3695 = $tmp3716.value;
                if ($tmp3695) goto $l3717;
                panda$core$Bit $tmp3718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp3695 = $tmp3718.value;
                $l3717:;
                panda$core$Bit $tmp3719 = { $tmp3695 };
                bool $tmp3694 = $tmp3719.value;
                if ($tmp3694) goto $l3720;
                panda$core$Bit $tmp3721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3694 = $tmp3721.value;
                $l3720:;
                panda$core$Bit $tmp3722 = { $tmp3694 };
                bool $tmp3693 = $tmp3722.value;
                if ($tmp3693) goto $l3723;
                panda$core$Bit $tmp3724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3693 = $tmp3724.value;
                $l3723:;
                panda$core$Bit $tmp3725 = { $tmp3693 };
                bool $tmp3692 = $tmp3725.value;
                if ($tmp3692) goto $l3726;
                panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3692 = $tmp3727.value;
                $l3726:;
                panda$core$Bit $tmp3728 = { $tmp3692 };
                if ($tmp3728.value) {
                {
                    goto $l3688;
                }
                }
                else {
                panda$core$Bit $tmp3729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3729.value) {
                {
                    if (((panda$core$Bit) { dc3685 != NULL }).value) {
                    {
                        panda$core$String* $tmp3734 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3689);
                        $tmp3733 = $tmp3734;
                        panda$core$String* $tmp3735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3732, $tmp3733);
                        $tmp3731 = $tmp3735;
                        panda$core$String* $tmp3737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3731, &$s3736);
                        $tmp3730 = $tmp3737;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3689, $tmp3730);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3730));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3731));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3733));
                    }
                    }
                    {
                        $tmp3738 = dc3685;
                        org$pandalanguage$pandac$ASTNode* $tmp3741 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3740 = $tmp3741;
                        $tmp3739 = $tmp3740;
                        dc3685 = $tmp3739;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3739));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3740));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3738));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1861_133691.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp3742.value) {
                {
                    int $tmp3745;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3749 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3685);
                        $tmp3748 = $tmp3749;
                        $tmp3747 = $tmp3748;
                        c3746 = $tmp3747;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3747));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3748));
                        if (((panda$core$Bit) { c3746 == NULL }).value) {
                        {
                            $tmp3751 = NULL;
                            $finallyReturn3749 = $tmp3751;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3751));
                            $tmp3745 = 0;
                            goto $l3743;
                            $l3752:;
                            $tmp3657 = 3;
                            goto $l3655;
                            $l3753:;
                            return $finallyReturn3749;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3681, ((panda$core$Object*) c3746));
                        {
                            $tmp3755 = dc3685;
                            $tmp3756 = NULL;
                            dc3685 = $tmp3756;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3756));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3755));
                        }
                    }
                    $tmp3745 = -1;
                    goto $l3743;
                    $l3743:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3746));
                    c3746 = NULL;
                    switch ($tmp3745) {
                        case 0: goto $l3752;
                        case -1: goto $l3757;
                    }
                    $l3757:;
                }
                }
                else {
                {
                    goto $l3688;
                }
                }
                }
                }
            }
        }
        }
        $l3688:;
        panda$collections$ImmutableArray* $tmp3761 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3761);
        $tmp3760 = $tmp3761;
        $tmp3759 = $tmp3760;
        a3758 = $tmp3759;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3759));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3760));
        $l3762:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3765 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3764 = $tmp3765;
            {
                $match$1885_133766 = next3764.kind;
                panda$core$Bit $tmp3767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp3767.value) {
                {
                    panda$core$Int64 $tmp3768 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3758);
                    panda$core$Bit $tmp3769 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3768, ((panda$core$Int64) { 0 }));
                    if ($tmp3769.value) {
                    {
                        panda$core$String* $tmp3774 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3764);
                        $tmp3773 = $tmp3774;
                        panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3772, $tmp3773);
                        $tmp3771 = $tmp3775;
                        panda$core$String* $tmp3777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3776);
                        $tmp3770 = $tmp3777;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3764, $tmp3770);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3770));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3771));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3773));
                        $tmp3779 = NULL;
                        $finallyReturn3777 = $tmp3779;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3779));
                        $tmp3657 = 4;
                        goto $l3655;
                        $l3780:;
                        return $finallyReturn3777;
                    }
                    }
                    {
                        $tmp3782 = a3758;
                        panda$collections$ImmutableArray* $tmp3785 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp3784 = $tmp3785;
                        $tmp3783 = $tmp3784;
                        a3758 = $tmp3783;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3783));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3784));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3782));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3786.value) {
                {
                    bool $tmp3787 = ((panda$core$Bit) { dc3685 != NULL }).value;
                    if ($tmp3787) goto $l3788;
                    panda$core$Int64 $tmp3789 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3758);
                    panda$core$Bit $tmp3790 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3789, ((panda$core$Int64) { 0 }));
                    $tmp3787 = $tmp3790.value;
                    $l3788:;
                    panda$core$Bit $tmp3791 = { $tmp3787 };
                    if ($tmp3791.value) {
                    {
                        panda$core$String* $tmp3796 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3764);
                        $tmp3795 = $tmp3796;
                        panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3794, $tmp3795);
                        $tmp3793 = $tmp3797;
                        panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3793, &$s3798);
                        $tmp3792 = $tmp3799;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3764, $tmp3792);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3792));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3793));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3795));
                        $tmp3801 = NULL;
                        $finallyReturn3799 = $tmp3801;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3801));
                        $tmp3657 = 5;
                        goto $l3655;
                        $l3802:;
                        return $finallyReturn3799;
                    }
                    }
                    {
                        $tmp3804 = dc3685;
                        org$pandalanguage$pandac$ASTNode* $tmp3807 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3806 = $tmp3807;
                        $tmp3805 = $tmp3806;
                        dc3685 = $tmp3805;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3805));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3806));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3804));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp3808.value) {
                {
                    int $tmp3811;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3815 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3685, a3758);
                        $tmp3814 = $tmp3815;
                        $tmp3813 = $tmp3814;
                        decl3812 = $tmp3813;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3813));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3814));
                        if (((panda$core$Bit) { decl3812 == NULL }).value) {
                        {
                            $tmp3817 = NULL;
                            $finallyReturn3815 = $tmp3817;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3817));
                            $tmp3811 = 0;
                            goto $l3809;
                            $l3818:;
                            $tmp3657 = 6;
                            goto $l3655;
                            $l3819:;
                            return $finallyReturn3815;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3681, ((panda$core$Object*) decl3812));
                        {
                            $tmp3821 = dc3685;
                            $tmp3822 = NULL;
                            dc3685 = $tmp3822;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3822));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3821));
                        }
                        {
                            $tmp3823 = a3758;
                            panda$collections$ImmutableArray* $tmp3826 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3826);
                            $tmp3825 = $tmp3826;
                            $tmp3824 = $tmp3825;
                            a3758 = $tmp3824;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3824));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3825));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3823));
                        }
                    }
                    $tmp3811 = -1;
                    goto $l3809;
                    $l3809:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3812));
                    decl3812 = NULL;
                    switch ($tmp3811) {
                        case -1: goto $l3827;
                        case 0: goto $l3818;
                    }
                    $l3827:;
                }
                }
                else {
                panda$core$Bit $tmp3828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp3828.value) {
                {
                    int $tmp3831;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3835 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3685, a3758);
                        $tmp3834 = $tmp3835;
                        $tmp3833 = $tmp3834;
                        decl3832 = $tmp3833;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3833));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3834));
                        if (((panda$core$Bit) { decl3832 == NULL }).value) {
                        {
                            $tmp3837 = NULL;
                            $finallyReturn3835 = $tmp3837;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3837));
                            $tmp3831 = 0;
                            goto $l3829;
                            $l3838:;
                            $tmp3657 = 7;
                            goto $l3655;
                            $l3839:;
                            return $finallyReturn3835;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3681, ((panda$core$Object*) decl3832));
                        {
                            $tmp3841 = dc3685;
                            $tmp3842 = NULL;
                            dc3685 = $tmp3842;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3842));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3841));
                        }
                        {
                            $tmp3843 = a3758;
                            panda$collections$ImmutableArray* $tmp3846 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3846);
                            $tmp3845 = $tmp3846;
                            $tmp3844 = $tmp3845;
                            a3758 = $tmp3844;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3844));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3845));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3843));
                        }
                    }
                    $tmp3831 = -1;
                    goto $l3829;
                    $l3829:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3832));
                    decl3832 = NULL;
                    switch ($tmp3831) {
                        case -1: goto $l3847;
                        case 0: goto $l3838;
                    }
                    $l3847:;
                }
                }
                else {
                panda$core$Bit $tmp3848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp3848.value) {
                {
                    int $tmp3851;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3855 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3685, a3758);
                        $tmp3854 = $tmp3855;
                        $tmp3853 = $tmp3854;
                        decl3852 = $tmp3853;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3854));
                        if (((panda$core$Bit) { decl3852 == NULL }).value) {
                        {
                            $tmp3857 = NULL;
                            $finallyReturn3855 = $tmp3857;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3857));
                            $tmp3851 = 0;
                            goto $l3849;
                            $l3858:;
                            $tmp3657 = 8;
                            goto $l3655;
                            $l3859:;
                            return $finallyReturn3855;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3681, ((panda$core$Object*) decl3852));
                        {
                            $tmp3861 = dc3685;
                            $tmp3862 = NULL;
                            dc3685 = $tmp3862;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3862));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3861));
                        }
                        {
                            $tmp3863 = a3758;
                            panda$collections$ImmutableArray* $tmp3866 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3866);
                            $tmp3865 = $tmp3866;
                            $tmp3864 = $tmp3865;
                            a3758 = $tmp3864;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3864));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3865));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3863));
                        }
                    }
                    $tmp3851 = -1;
                    goto $l3849;
                    $l3849:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3852));
                    decl3852 = NULL;
                    switch ($tmp3851) {
                        case 0: goto $l3858;
                        case -1: goto $l3867;
                    }
                    $l3867:;
                }
                }
                else {
                panda$core$Bit $tmp3869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp3868 = $tmp3869.value;
                if ($tmp3868) goto $l3870;
                panda$core$Bit $tmp3871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3868 = $tmp3871.value;
                $l3870:;
                panda$core$Bit $tmp3872 = { $tmp3868 };
                if ($tmp3872.value) {
                {
                    int $tmp3875;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3879 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3685, a3758);
                        $tmp3878 = $tmp3879;
                        $tmp3877 = $tmp3878;
                        decl3876 = $tmp3877;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3878));
                        if (((panda$core$Bit) { decl3876 == NULL }).value) {
                        {
                            $tmp3881 = NULL;
                            $finallyReturn3879 = $tmp3881;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3881));
                            $tmp3875 = 0;
                            goto $l3873;
                            $l3882:;
                            $tmp3657 = 9;
                            goto $l3655;
                            $l3883:;
                            return $finallyReturn3879;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3681, ((panda$core$Object*) decl3876));
                        {
                            $tmp3885 = dc3685;
                            $tmp3886 = NULL;
                            dc3685 = $tmp3886;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3886));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3885));
                        }
                        {
                            $tmp3887 = a3758;
                            panda$collections$ImmutableArray* $tmp3890 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3890);
                            $tmp3889 = $tmp3890;
                            $tmp3888 = $tmp3889;
                            a3758 = $tmp3888;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3888));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3889));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3887));
                        }
                    }
                    $tmp3875 = -1;
                    goto $l3873;
                    $l3873:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3876));
                    decl3876 = NULL;
                    switch ($tmp3875) {
                        case 0: goto $l3882;
                        case -1: goto $l3891;
                    }
                    $l3891:;
                }
                }
                else {
                panda$core$Bit $tmp3895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp3894 = $tmp3895.value;
                if ($tmp3894) goto $l3896;
                panda$core$Bit $tmp3897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3894 = $tmp3897.value;
                $l3896:;
                panda$core$Bit $tmp3898 = { $tmp3894 };
                bool $tmp3893 = $tmp3898.value;
                if ($tmp3893) goto $l3899;
                panda$core$Bit $tmp3900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3893 = $tmp3900.value;
                $l3899:;
                panda$core$Bit $tmp3901 = { $tmp3893 };
                bool $tmp3892 = $tmp3901.value;
                if ($tmp3892) goto $l3902;
                panda$core$Bit $tmp3903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3892 = $tmp3903.value;
                $l3902:;
                panda$core$Bit $tmp3904 = { $tmp3892 };
                if ($tmp3904.value) {
                {
                    int $tmp3907;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3911 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3685, a3758);
                        $tmp3910 = $tmp3911;
                        $tmp3909 = $tmp3910;
                        decl3908 = $tmp3909;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3909));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3910));
                        if (((panda$core$Bit) { decl3908 == NULL }).value) {
                        {
                            $tmp3913 = NULL;
                            $finallyReturn3911 = $tmp3913;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3913));
                            $tmp3907 = 0;
                            goto $l3905;
                            $l3914:;
                            $tmp3657 = 10;
                            goto $l3655;
                            $l3915:;
                            return $finallyReturn3911;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3681, ((panda$core$Object*) decl3908));
                        {
                            $tmp3917 = dc3685;
                            $tmp3918 = NULL;
                            dc3685 = $tmp3918;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3918));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3917));
                        }
                        {
                            $tmp3919 = a3758;
                            panda$collections$ImmutableArray* $tmp3922 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3922);
                            $tmp3921 = $tmp3922;
                            $tmp3920 = $tmp3921;
                            a3758 = $tmp3920;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3920));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3921));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3919));
                        }
                    }
                    $tmp3907 = -1;
                    goto $l3905;
                    $l3905:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3908));
                    decl3908 = NULL;
                    switch ($tmp3907) {
                        case 0: goto $l3914;
                        case -1: goto $l3923;
                    }
                    $l3923:;
                }
                }
                else {
                panda$core$Bit $tmp3924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1885_133766.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp3924.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3925, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3925, &$s3926);
                    goto $l3763;
                }
                }
                else {
                {
                    panda$core$String* $tmp3931 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3764);
                    $tmp3930 = $tmp3931;
                    panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3929, $tmp3930);
                    $tmp3928 = $tmp3932;
                    panda$core$String* $tmp3934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, &$s3933);
                    $tmp3927 = $tmp3934;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3764, $tmp3927);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3927));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3928));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3930));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp3936 = NULL;
                    $finallyReturn3934 = $tmp3936;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3936));
                    $tmp3657 = 11;
                    goto $l3655;
                    $l3937:;
                    return $finallyReturn3934;
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
        $l3763:;
        org$pandalanguage$pandac$ASTNode* $tmp3942 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3943, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp3945 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3666.value));
        $tmp3944 = $tmp3945;
        panda$collections$ImmutableArray* $tmp3947 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3681);
        $tmp3946 = $tmp3947;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3942, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start3658.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp3943, $tmp3944, NULL, NULL, $tmp3946);
        $tmp3941 = $tmp3942;
        $tmp3940 = $tmp3941;
        $finallyReturn3938 = $tmp3940;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3940));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3941));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3946));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3944));
        $tmp3657 = 12;
        goto $l3655;
        $l3948:;
        return $finallyReturn3938;
    }
    $l3655:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3681));
    members3681 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3685));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3758));
    a3758 = NULL;
    switch ($tmp3657) {
        case 5: goto $l3802;
        case 8: goto $l3859;
        case 1: goto $l3672;
        case 4: goto $l3780;
        case 2: goto $l3679;
        case 9: goto $l3883;
        case 11: goto $l3937;
        case 10: goto $l3915;
        case 7: goto $l3839;
        case 6: goto $l3819;
        case 12: goto $l3948;
        case 0: goto $l3664;
        case 3: goto $l3753;
    }
    $l3950:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3954;
    org$pandalanguage$pandac$ASTNode* dc3956 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3958;
    org$pandalanguage$pandac$ASTNode* $tmp3959;
    org$pandalanguage$pandac$ASTNode* $tmp3960;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3961;
    org$pandalanguage$pandac$ASTNode* $tmp3963;
    org$pandalanguage$pandac$ASTNode* $tmp3966;
    org$pandalanguage$pandac$ASTNode* $tmp3967;
    panda$collections$ImmutableArray* a3968 = NULL;
    panda$collections$ImmutableArray* $tmp3969;
    panda$collections$ImmutableArray* $tmp3970;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3971;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    org$pandalanguage$pandac$parser$Token$Kind $match$1971_93976;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3978;
    org$pandalanguage$pandac$ASTNode* $tmp3980;
    org$pandalanguage$pandac$ASTNode* $tmp3981;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3985;
    org$pandalanguage$pandac$ASTNode* $tmp3987;
    org$pandalanguage$pandac$ASTNode* $tmp3988;
    org$pandalanguage$pandac$ASTNode* $finallyReturn3992;
    org$pandalanguage$pandac$ASTNode* $tmp3994;
    org$pandalanguage$pandac$ASTNode* $tmp3995;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4003;
    org$pandalanguage$pandac$ASTNode* $tmp4005;
    org$pandalanguage$pandac$ASTNode* $tmp4006;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4010;
    org$pandalanguage$pandac$ASTNode* $tmp4012;
    org$pandalanguage$pandac$ASTNode* $tmp4013;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4029;
    org$pandalanguage$pandac$ASTNode* $tmp4031;
    org$pandalanguage$pandac$ASTNode* $tmp4032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4036;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4037;
    org$pandalanguage$pandac$ASTNode* $tmp4039;
    int $tmp3953;
    {
        org$pandalanguage$pandac$parser$Token $tmp3955 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start3954 = $tmp3955;
        memset(&dc3956, 0, sizeof(dc3956));
        panda$core$Bit $tmp3957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start3954.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3957.value) {
        {
            {
                $tmp3958 = dc3956;
                org$pandalanguage$pandac$ASTNode* $tmp3961 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3960 = $tmp3961;
                $tmp3959 = $tmp3960;
                dc3956 = $tmp3959;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3958));
            }
            if (((panda$core$Bit) { dc3956 == NULL }).value) {
            {
                $tmp3963 = NULL;
                $finallyReturn3961 = $tmp3963;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3963));
                $tmp3953 = 0;
                goto $l3951;
                $l3964:;
                return $finallyReturn3961;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3966 = dc3956;
                $tmp3967 = NULL;
                dc3956 = $tmp3967;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3967));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3966));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3971 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp3970 = $tmp3971;
        $tmp3969 = $tmp3970;
        a3968 = $tmp3969;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3969));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3970));
        if (((panda$core$Bit) { a3968 == NULL }).value) {
        {
            $tmp3973 = NULL;
            $finallyReturn3971 = $tmp3973;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3973));
            $tmp3953 = 1;
            goto $l3951;
            $l3974:;
            return $finallyReturn3971;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3977 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1971_93976 = $tmp3977.kind;
            panda$core$Bit $tmp3978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3978.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3982 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3956, a3968);
                $tmp3981 = $tmp3982;
                $tmp3980 = $tmp3981;
                $finallyReturn3978 = $tmp3980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3981));
                $tmp3953 = 2;
                goto $l3951;
                $l3983:;
                return $finallyReturn3978;
            }
            }
            else {
            panda$core$Bit $tmp3985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3985.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3989 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3956, a3968);
                $tmp3988 = $tmp3989;
                $tmp3987 = $tmp3988;
                $finallyReturn3985 = $tmp3987;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3988));
                $tmp3953 = 3;
                goto $l3951;
                $l3990:;
                return $finallyReturn3985;
            }
            }
            else {
            panda$core$Bit $tmp3992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3992.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3996 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3956, a3968);
                $tmp3995 = $tmp3996;
                $tmp3994 = $tmp3995;
                $finallyReturn3992 = $tmp3994;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3994));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3995));
                $tmp3953 = 4;
                goto $l3951;
                $l3997:;
                return $finallyReturn3992;
            }
            }
            else {
            panda$core$Bit $tmp4000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp3999 = $tmp4000.value;
            if ($tmp3999) goto $l4001;
            panda$core$Bit $tmp4002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3999 = $tmp4002.value;
            $l4001:;
            panda$core$Bit $tmp4003 = { $tmp3999 };
            if ($tmp4003.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4007 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3956, a3968);
                $tmp4006 = $tmp4007;
                $tmp4005 = $tmp4006;
                $finallyReturn4003 = $tmp4005;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4005));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4006));
                $tmp3953 = 5;
                goto $l3951;
                $l4008:;
                return $finallyReturn4003;
            }
            }
            else {
            panda$core$Bit $tmp4010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp4010.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4014 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3956, a3968);
                $tmp4013 = $tmp4014;
                $tmp4012 = $tmp4013;
                $finallyReturn4010 = $tmp4012;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4012));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4013));
                $tmp3953 = 6;
                goto $l3951;
                $l4015:;
                return $finallyReturn4010;
            }
            }
            else {
            panda$core$Bit $tmp4020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp4019 = $tmp4020.value;
            if ($tmp4019) goto $l4021;
            panda$core$Bit $tmp4022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp4019 = $tmp4022.value;
            $l4021:;
            panda$core$Bit $tmp4023 = { $tmp4019 };
            bool $tmp4018 = $tmp4023.value;
            if ($tmp4018) goto $l4024;
            panda$core$Bit $tmp4025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp4018 = $tmp4025.value;
            $l4024:;
            panda$core$Bit $tmp4026 = { $tmp4018 };
            bool $tmp4017 = $tmp4026.value;
            if ($tmp4017) goto $l4027;
            panda$core$Bit $tmp4028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1971_93976.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp4017 = $tmp4028.value;
            $l4027:;
            panda$core$Bit $tmp4029 = { $tmp4017 };
            if ($tmp4029.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp4033 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3956, a3968);
                $tmp4032 = $tmp4033;
                $tmp4031 = $tmp4032;
                $finallyReturn4029 = $tmp4031;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4031));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4032));
                $tmp3953 = 7;
                goto $l3951;
                $l4034:;
                return $finallyReturn4029;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4036, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4036, &$s4037);
                $tmp4039 = NULL;
                $finallyReturn4037 = $tmp4039;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4039));
                $tmp3953 = 8;
                goto $l3951;
                $l4040:;
                return $finallyReturn4037;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp3953 = -1;
    goto $l3951;
    $l3951:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3956));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3968));
    a3968 = NULL;
    switch ($tmp3953) {
        case 8: goto $l4040;
        case 6: goto $l4015;
        case 3: goto $l3990;
        case 1: goto $l3974;
        case 7: goto $l4034;
        case -1: goto $l4042;
        case 5: goto $l4008;
        case 2: goto $l3983;
        case 0: goto $l3964;
        case 4: goto $l3997;
    }
    $l4042:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4046;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4047;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4049;
    org$pandalanguage$pandac$ASTNode* $tmp4051;
    org$pandalanguage$pandac$parser$Token$nullable name4054;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4055;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4057;
    org$pandalanguage$pandac$ASTNode* $tmp4059;
    panda$collections$ImmutableArray* generics4062 = NULL;
    panda$collections$ImmutableArray* $tmp4065;
    panda$collections$ImmutableArray* $tmp4066;
    panda$collections$ImmutableArray* $tmp4067;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4068;
    org$pandalanguage$pandac$ASTNode* $tmp4070;
    panda$collections$ImmutableArray* $tmp4073;
    panda$collections$ImmutableArray* $tmp4074;
    panda$collections$ImmutableArray* stypes4075 = NULL;
    panda$collections$ImmutableArray* $tmp4078;
    panda$collections$ImmutableArray* $tmp4079;
    panda$collections$ImmutableArray* $tmp4080;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4081;
    org$pandalanguage$pandac$ASTNode* $tmp4083;
    panda$collections$ImmutableArray* $tmp4086;
    panda$collections$ImmutableArray* $tmp4087;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4088;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4090;
    org$pandalanguage$pandac$ASTNode* $tmp4092;
    panda$collections$Array* members4095 = NULL;
    panda$collections$Array* $tmp4096;
    panda$collections$Array* $tmp4097;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4102;
    org$pandalanguage$pandac$ASTNode* member4107 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4108;
    org$pandalanguage$pandac$ASTNode* $tmp4109;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4110;
    org$pandalanguage$pandac$ASTNode* $tmp4112;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4116;
    org$pandalanguage$pandac$ASTNode* $tmp4118;
    org$pandalanguage$pandac$ASTNode* $tmp4119;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4121;
    panda$core$String* $tmp4122;
    panda$collections$ImmutableArray* $tmp4124;
    int $tmp4045;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4047, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4049 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4047, &$s4048);
        start4046 = $tmp4049;
        if (((panda$core$Bit) { !start4046.nonnull }).value) {
        {
            $tmp4051 = NULL;
            $finallyReturn4049 = $tmp4051;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4051));
            $tmp4045 = 0;
            goto $l4043;
            $l4052:;
            return $finallyReturn4049;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4055, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4057 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4055, &$s4056);
        name4054 = $tmp4057;
        if (((panda$core$Bit) { !name4054.nonnull }).value) {
        {
            $tmp4059 = NULL;
            $finallyReturn4057 = $tmp4059;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4059));
            $tmp4045 = 1;
            goto $l4043;
            $l4060:;
            return $finallyReturn4057;
        }
        }
        memset(&generics4062, 0, sizeof(generics4062));
        org$pandalanguage$pandac$parser$Token $tmp4063 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4063.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4064.value) {
        {
            {
                $tmp4065 = generics4062;
                panda$collections$ImmutableArray* $tmp4068 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4067 = $tmp4068;
                $tmp4066 = $tmp4067;
                generics4062 = $tmp4066;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4067));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4065));
            }
            if (((panda$core$Bit) { generics4062 == NULL }).value) {
            {
                $tmp4070 = NULL;
                $finallyReturn4068 = $tmp4070;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4070));
                $tmp4045 = 2;
                goto $l4043;
                $l4071:;
                return $finallyReturn4068;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4073 = generics4062;
                $tmp4074 = NULL;
                generics4062 = $tmp4074;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4074));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4073));
            }
        }
        }
        memset(&stypes4075, 0, sizeof(stypes4075));
        org$pandalanguage$pandac$parser$Token $tmp4076 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4076.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4077.value) {
        {
            {
                $tmp4078 = stypes4075;
                panda$collections$ImmutableArray* $tmp4081 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4080 = $tmp4081;
                $tmp4079 = $tmp4080;
                stypes4075 = $tmp4079;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4078));
            }
            if (((panda$core$Bit) { stypes4075 == NULL }).value) {
            {
                $tmp4083 = NULL;
                $finallyReturn4081 = $tmp4083;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4083));
                $tmp4045 = 3;
                goto $l4043;
                $l4084:;
                return $finallyReturn4081;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4086 = stypes4075;
                $tmp4087 = NULL;
                stypes4075 = $tmp4087;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4086));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4088, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4090 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4088, &$s4089);
        if (((panda$core$Bit) { !$tmp4090.nonnull }).value) {
        {
            $tmp4092 = NULL;
            $finallyReturn4090 = $tmp4092;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4092));
            $tmp4045 = 4;
            goto $l4043;
            $l4093:;
            return $finallyReturn4090;
        }
        }
        panda$collections$Array* $tmp4098 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4098);
        $tmp4097 = $tmp4098;
        $tmp4096 = $tmp4097;
        members4095 = $tmp4096;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4096));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4097));
        $l4099:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4102, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4103 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4102);
        bool $tmp4101 = ((panda$core$Bit) { !$tmp4103.nonnull }).value;
        if (!$tmp4101) goto $l4100;
        {
            int $tmp4106;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4110 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4109 = $tmp4110;
                $tmp4108 = $tmp4109;
                member4107 = $tmp4108;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4109));
                if (((panda$core$Bit) { member4107 == NULL }).value) {
                {
                    $tmp4112 = NULL;
                    $finallyReturn4110 = $tmp4112;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4112));
                    $tmp4106 = 0;
                    goto $l4104;
                    $l4113:;
                    $tmp4045 = 5;
                    goto $l4043;
                    $l4114:;
                    return $finallyReturn4110;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4095, ((panda$core$Object*) member4107));
            }
            $tmp4106 = -1;
            goto $l4104;
            $l4104:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4107));
            member4107 = NULL;
            switch ($tmp4106) {
                case 0: goto $l4113;
                case -1: goto $l4116;
            }
            $l4116:;
        }
        goto $l4099;
        $l4100:;
        org$pandalanguage$pandac$ASTNode* $tmp4120 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4121, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4123 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4054.value));
        $tmp4122 = $tmp4123;
        panda$collections$ImmutableArray* $tmp4125 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4095);
        $tmp4124 = $tmp4125;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4120, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start4046.value).position, p_doccomment, p_annotations, $tmp4121, $tmp4122, generics4062, stypes4075, $tmp4124);
        $tmp4119 = $tmp4120;
        $tmp4118 = $tmp4119;
        $finallyReturn4116 = $tmp4118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4124));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4122));
        $tmp4045 = 6;
        goto $l4043;
        $l4126:;
        return $finallyReturn4116;
    }
    $l4043:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4062));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4075));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4095));
    members4095 = NULL;
    switch ($tmp4045) {
        case 1: goto $l4060;
        case 3: goto $l4084;
        case 2: goto $l4071;
        case 5: goto $l4114;
        case 0: goto $l4052;
        case 6: goto $l4126;
        case 4: goto $l4093;
    }
    $l4128:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4132;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4133;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4135;
    org$pandalanguage$pandac$ASTNode* $tmp4137;
    org$pandalanguage$pandac$parser$Token$nullable name4140;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4141;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4143;
    org$pandalanguage$pandac$ASTNode* $tmp4145;
    panda$collections$ImmutableArray* generics4148 = NULL;
    panda$collections$ImmutableArray* $tmp4151;
    panda$collections$ImmutableArray* $tmp4152;
    panda$collections$ImmutableArray* $tmp4153;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4154;
    org$pandalanguage$pandac$ASTNode* $tmp4156;
    panda$collections$ImmutableArray* $tmp4159;
    panda$collections$ImmutableArray* $tmp4160;
    panda$collections$ImmutableArray* $tmp4161;
    panda$collections$Array* intfs4163 = NULL;
    panda$collections$Array* $tmp4164;
    panda$collections$Array* $tmp4165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4167;
    org$pandalanguage$pandac$ASTNode* t4172 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4173;
    org$pandalanguage$pandac$ASTNode* $tmp4174;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4175;
    org$pandalanguage$pandac$ASTNode* $tmp4177;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4184;
    org$pandalanguage$pandac$ASTNode* $tmp4186;
    org$pandalanguage$pandac$ASTNode* $tmp4187;
    org$pandalanguage$pandac$ASTNode* $tmp4188;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4189;
    org$pandalanguage$pandac$ASTNode* $tmp4191;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4196;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4198;
    org$pandalanguage$pandac$ASTNode* $tmp4200;
    panda$collections$Array* members4203 = NULL;
    panda$collections$Array* $tmp4204;
    panda$collections$Array* $tmp4205;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4210;
    org$pandalanguage$pandac$ASTNode* member4215 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4216;
    org$pandalanguage$pandac$ASTNode* $tmp4217;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4218;
    org$pandalanguage$pandac$ASTNode* $tmp4220;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4224;
    org$pandalanguage$pandac$ASTNode* $tmp4226;
    org$pandalanguage$pandac$ASTNode* $tmp4227;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4229;
    panda$core$String* $tmp4230;
    panda$collections$ImmutableArray* $tmp4232;
    panda$collections$ImmutableArray* $tmp4234;
    int $tmp4131;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4133, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4135 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4133, &$s4134);
        start4132 = $tmp4135;
        if (((panda$core$Bit) { !start4132.nonnull }).value) {
        {
            $tmp4137 = NULL;
            $finallyReturn4135 = $tmp4137;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4137));
            $tmp4131 = 0;
            goto $l4129;
            $l4138:;
            return $finallyReturn4135;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4141, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4143 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4141, &$s4142);
        name4140 = $tmp4143;
        if (((panda$core$Bit) { !name4140.nonnull }).value) {
        {
            $tmp4145 = NULL;
            $finallyReturn4143 = $tmp4145;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4145));
            $tmp4131 = 1;
            goto $l4129;
            $l4146:;
            return $finallyReturn4143;
        }
        }
        memset(&generics4148, 0, sizeof(generics4148));
        org$pandalanguage$pandac$parser$Token $tmp4149 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4149.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4150.value) {
        {
            {
                $tmp4151 = generics4148;
                panda$collections$ImmutableArray* $tmp4154 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4153 = $tmp4154;
                $tmp4152 = $tmp4153;
                generics4148 = $tmp4152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4151));
            }
            if (((panda$core$Bit) { generics4148 == NULL }).value) {
            {
                $tmp4156 = NULL;
                $finallyReturn4154 = $tmp4156;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4156));
                $tmp4131 = 2;
                goto $l4129;
                $l4157:;
                return $finallyReturn4154;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4159 = generics4148;
                panda$collections$ImmutableArray* $tmp4162 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4162);
                $tmp4161 = $tmp4162;
                $tmp4160 = $tmp4161;
                generics4148 = $tmp4160;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4160));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4161));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4159));
            }
        }
        }
        panda$collections$Array* $tmp4166 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4166);
        $tmp4165 = $tmp4166;
        $tmp4164 = $tmp4165;
        intfs4163 = $tmp4164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4165));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4167, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4168 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4167);
        if (((panda$core$Bit) { $tmp4168.nonnull }).value) {
        {
            int $tmp4171;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4175 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4174 = $tmp4175;
                $tmp4173 = $tmp4174;
                t4172 = $tmp4173;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4174));
                if (((panda$core$Bit) { t4172 == NULL }).value) {
                {
                    $tmp4177 = NULL;
                    $finallyReturn4175 = $tmp4177;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4177));
                    $tmp4171 = 0;
                    goto $l4169;
                    $l4178:;
                    $tmp4131 = 3;
                    goto $l4129;
                    $l4179:;
                    return $finallyReturn4175;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4163, ((panda$core$Object*) t4172));
                $l4181:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4184, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4185 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4184);
                bool $tmp4183 = ((panda$core$Bit) { $tmp4185.nonnull }).value;
                if (!$tmp4183) goto $l4182;
                {
                    {
                        $tmp4186 = t4172;
                        org$pandalanguage$pandac$ASTNode* $tmp4189 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4188 = $tmp4189;
                        $tmp4187 = $tmp4188;
                        t4172 = $tmp4187;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4187));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4188));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4186));
                    }
                    if (((panda$core$Bit) { t4172 == NULL }).value) {
                    {
                        $tmp4191 = NULL;
                        $finallyReturn4189 = $tmp4191;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4191));
                        $tmp4171 = 1;
                        goto $l4169;
                        $l4192:;
                        $tmp4131 = 4;
                        goto $l4129;
                        $l4193:;
                        return $finallyReturn4189;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4163, ((panda$core$Object*) t4172));
                }
                goto $l4181;
                $l4182:;
            }
            $tmp4171 = -1;
            goto $l4169;
            $l4169:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4172));
            t4172 = NULL;
            switch ($tmp4171) {
                case -1: goto $l4195;
                case 0: goto $l4178;
                case 1: goto $l4192;
            }
            $l4195:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4196, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4198 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4196, &$s4197);
        if (((panda$core$Bit) { !$tmp4198.nonnull }).value) {
        {
            $tmp4200 = NULL;
            $finallyReturn4198 = $tmp4200;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4200));
            $tmp4131 = 5;
            goto $l4129;
            $l4201:;
            return $finallyReturn4198;
        }
        }
        panda$collections$Array* $tmp4206 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4206);
        $tmp4205 = $tmp4206;
        $tmp4204 = $tmp4205;
        members4203 = $tmp4204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4205));
        $l4207:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4210, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4211 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4210);
        bool $tmp4209 = ((panda$core$Bit) { !$tmp4211.nonnull }).value;
        if (!$tmp4209) goto $l4208;
        {
            int $tmp4214;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4218 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4217 = $tmp4218;
                $tmp4216 = $tmp4217;
                member4215 = $tmp4216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4217));
                if (((panda$core$Bit) { member4215 == NULL }).value) {
                {
                    $tmp4220 = NULL;
                    $finallyReturn4218 = $tmp4220;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4220));
                    $tmp4214 = 0;
                    goto $l4212;
                    $l4221:;
                    $tmp4131 = 6;
                    goto $l4129;
                    $l4222:;
                    return $finallyReturn4218;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4203, ((panda$core$Object*) member4215));
            }
            $tmp4214 = -1;
            goto $l4212;
            $l4212:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4215));
            member4215 = NULL;
            switch ($tmp4214) {
                case -1: goto $l4224;
                case 0: goto $l4221;
            }
            $l4224:;
        }
        goto $l4207;
        $l4208:;
        org$pandalanguage$pandac$ASTNode* $tmp4228 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4229, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4231 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4140.value));
        $tmp4230 = $tmp4231;
        panda$collections$ImmutableArray* $tmp4233 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4163);
        $tmp4232 = $tmp4233;
        panda$collections$ImmutableArray* $tmp4235 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4203);
        $tmp4234 = $tmp4235;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4228, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start4132.value).position, p_doccomment, p_annotations, $tmp4229, $tmp4230, generics4148, $tmp4232, $tmp4234);
        $tmp4227 = $tmp4228;
        $tmp4226 = $tmp4227;
        $finallyReturn4224 = $tmp4226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4230));
        $tmp4131 = 7;
        goto $l4129;
        $l4236:;
        return $finallyReturn4224;
    }
    $l4129:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4148));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4163));
    intfs4163 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4203));
    members4203 = NULL;
    switch ($tmp4131) {
        case 6: goto $l4222;
        case 4: goto $l4193;
        case 7: goto $l4236;
        case 2: goto $l4157;
        case 1: goto $l4146;
        case 3: goto $l4179;
        case 0: goto $l4138;
        case 5: goto $l4201;
    }
    $l4238:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2095_94239;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4241;
    org$pandalanguage$pandac$ASTNode* $tmp4243;
    org$pandalanguage$pandac$ASTNode* $tmp4244;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4247;
    org$pandalanguage$pandac$ASTNode* $tmp4249;
    org$pandalanguage$pandac$ASTNode* $tmp4250;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4277;
    org$pandalanguage$pandac$ASTNode* $tmp4279;
    org$pandalanguage$pandac$ASTNode* $tmp4280;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4282;
    org$pandalanguage$pandac$ASTNode* $tmp4284;
    org$pandalanguage$pandac$ASTNode* $tmp4285;
    {
        org$pandalanguage$pandac$parser$Token $tmp4240 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2095_94239 = $tmp4240.kind;
        panda$core$Bit $tmp4241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4241.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4245 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4244 = $tmp4245;
            $tmp4243 = $tmp4244;
            $finallyReturn4241 = $tmp4243;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4243));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4244));
            return $finallyReturn4241;
        }
        }
        else {
        panda$core$Bit $tmp4247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4247.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4251 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4250 = $tmp4251;
            $tmp4249 = $tmp4250;
            $finallyReturn4247 = $tmp4249;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4250));
            return $finallyReturn4247;
        }
        }
        else {
        panda$core$Bit $tmp4259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp4258 = $tmp4259.value;
        if ($tmp4258) goto $l4260;
        panda$core$Bit $tmp4261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp4258 = $tmp4261.value;
        $l4260:;
        panda$core$Bit $tmp4262 = { $tmp4258 };
        bool $tmp4257 = $tmp4262.value;
        if ($tmp4257) goto $l4263;
        panda$core$Bit $tmp4264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp4257 = $tmp4264.value;
        $l4263:;
        panda$core$Bit $tmp4265 = { $tmp4257 };
        bool $tmp4256 = $tmp4265.value;
        if ($tmp4256) goto $l4266;
        panda$core$Bit $tmp4267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp4256 = $tmp4267.value;
        $l4266:;
        panda$core$Bit $tmp4268 = { $tmp4256 };
        bool $tmp4255 = $tmp4268.value;
        if ($tmp4255) goto $l4269;
        panda$core$Bit $tmp4270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp4255 = $tmp4270.value;
        $l4269:;
        panda$core$Bit $tmp4271 = { $tmp4255 };
        bool $tmp4254 = $tmp4271.value;
        if ($tmp4254) goto $l4272;
        panda$core$Bit $tmp4273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp4254 = $tmp4273.value;
        $l4272:;
        panda$core$Bit $tmp4274 = { $tmp4254 };
        bool $tmp4253 = $tmp4274.value;
        if ($tmp4253) goto $l4275;
        panda$core$Bit $tmp4276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2095_94239.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp4253 = $tmp4276.value;
        $l4275:;
        panda$core$Bit $tmp4277 = { $tmp4253 };
        if ($tmp4277.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4281 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4280 = $tmp4281;
            $tmp4279 = $tmp4280;
            $finallyReturn4277 = $tmp4279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4279));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4280));
            return $finallyReturn4277;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4286 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4285 = $tmp4286;
            $tmp4284 = $tmp4285;
            $finallyReturn4282 = $tmp4284;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4284));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4285));
            return $finallyReturn4282;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4291 = NULL;
    panda$collections$Array* $tmp4292;
    panda$collections$Array* $tmp4293;
    org$pandalanguage$pandac$ASTNode* entry4303 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4304;
    org$pandalanguage$pandac$ASTNode* $tmp4305;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4306;
    org$pandalanguage$pandac$ASTNode* $tmp4308;
    org$pandalanguage$pandac$ASTNode* $finallyReturn4313;
    org$pandalanguage$pandac$ASTNode* $tmp4315;
    org$pandalanguage$pandac$ASTNode* $tmp4316;
    panda$collections$ImmutableArray* $tmp4318;
    int $tmp4290;
    {
        panda$collections$Array* $tmp4294 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4294);
        $tmp4293 = $tmp4294;
        $tmp4292 = $tmp4293;
        entries4291 = $tmp4292;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4292));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4293));
        $l4295:;
        org$pandalanguage$pandac$parser$Token $tmp4298 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4299 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4298.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4297 = $tmp4299.value;
        if (!$tmp4297) goto $l4296;
        {
            int $tmp4302;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4306 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4305 = $tmp4306;
                $tmp4304 = $tmp4305;
                entry4303 = $tmp4304;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4305));
                if (((panda$core$Bit) { entry4303 == NULL }).value) {
                {
                    $tmp4308 = NULL;
                    $finallyReturn4306 = $tmp4308;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4308));
                    $tmp4302 = 0;
                    goto $l4300;
                    $l4309:;
                    $tmp4290 = 0;
                    goto $l4288;
                    $l4310:;
                    return $finallyReturn4306;
                }
                }
                panda$core$Bit $tmp4312 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4312.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4291, ((panda$core$Object*) entry4303));
            }
            $tmp4302 = -1;
            goto $l4300;
            $l4300:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4303));
            entry4303 = NULL;
            switch ($tmp4302) {
                case 0: goto $l4309;
                case -1: goto $l4313;
            }
            $l4313:;
        }
        goto $l4295;
        $l4296:;
        org$pandalanguage$pandac$ASTNode* $tmp4317 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4319 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4291);
        $tmp4318 = $tmp4319;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4317, ((panda$core$Int64) { 15 }), $tmp4318);
        $tmp4316 = $tmp4317;
        $tmp4315 = $tmp4316;
        $finallyReturn4313 = $tmp4315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4318));
        $tmp4290 = 1;
        goto $l4288;
        $l4320:;
        return $finallyReturn4313;
    }
    $l4288:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4291));
    entries4291 = NULL;
    switch ($tmp4290) {
        case 1: goto $l4320;
        case 0: goto $l4310;
    }
    $l4322:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4325;
    {
    }
    $tmp4325 = -1;
    goto $l4323;
    $l4323:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4325) {
        case -1: goto $l4326;
    }
    $l4326:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

