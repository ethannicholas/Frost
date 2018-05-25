#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/threads/MessageQueue.h"
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
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Position.h"
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
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef org$pandalanguage$pandac$Position (*$fn147)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn207)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn307)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn367)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn374)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn382)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn389)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn472)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn536)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn543)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn550)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn563)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn587)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn594)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn607)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1468)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2589)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2614)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2661)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3567)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x50\x61\x72\x73\x65\x72", 38, -8405933066608101650, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x3e", 11, -1634899798493293996, NULL };
static panda$core$String $s3525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$pandac$parser$Parser* self, panda$threads$MessageQueue* p_errors) {
    org$pandalanguage$pandac$parser$Lexer* $tmp2;
    org$pandalanguage$pandac$parser$Lexer* $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp5;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp6;
    panda$collections$Stack* $tmp8;
    panda$collections$Stack* $tmp9;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp11;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp12;
    panda$threads$MessageQueue* $tmp14;
    panda$threads$MessageQueue* $tmp15;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$58_1338;
    org$pandalanguage$pandac$parser$Token next43;
    org$pandalanguage$pandac$parser$Token$Kind $match$64_2545;
    panda$core$String* $tmp47;
    panda$core$Char8 $tmp49;
    org$pandalanguage$pandac$parser$Token $returnValue52;
    org$pandalanguage$pandac$parser$Token next57;
    org$pandalanguage$pandac$parser$Token$Kind $match$76_2559;
    $l34:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp37 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result36 = $tmp37;
        {
            $match$58_1338 = result36.kind;
            panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$58_1338.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp39.value) {
            {
                goto $l34;
            }
            }
            else {
            panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$58_1338.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp40.value) {
            {
                $l41:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp44 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next43 = $tmp44;
                    {
                        $match$64_2545 = next43.kind;
                        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_2545.$rawValue, ((panda$core$Int64) { 12 }));
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
                        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$64_2545.$rawValue, ((panda$core$Int64) { 0 }));
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
            panda$core$Bit $tmp54 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$58_1338.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp54.value) {
            {
                $l55:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp58 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next57 = $tmp58;
                    {
                        $match$76_2559 = next57.kind;
                        panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_2559.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp60.value) {
                        {
                            goto $l34;
                        }
                        }
                        else {
                        panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_2559.$rawValue, ((panda$core$Int64) { 0 }));
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
    org$pandalanguage$pandac$Compiler$Error* $tmp99;
    panda$core$Bit $tmp98 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp98.value) {
    {
        org$pandalanguage$pandac$Compiler$Error* $tmp100 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
        org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp100, self->path, p_token.position, p_msg);
        $tmp99 = $tmp100;
        panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp99));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp99));
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp101 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp101.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp102;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp103 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp104 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp103, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp102, $tmp104, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp106 = $tmp102.start.value;
    panda$core$Int64 i105 = { $tmp106 };
    int64_t $tmp108 = $tmp102.end.value;
    int64_t $tmp109 = $tmp102.step.value;
    bool $tmp110 = $tmp102.inclusive.value;
    bool $tmp117 = $tmp109 > 0;
    if ($tmp117) goto $l115; else goto $l116;
    $l115:;
    if ($tmp110) goto $l118; else goto $l119;
    $l118:;
    if ($tmp106 <= $tmp108) goto $l111; else goto $l113;
    $l119:;
    if ($tmp106 < $tmp108) goto $l111; else goto $l113;
    $l116:;
    if ($tmp110) goto $l120; else goto $l121;
    $l120:;
    if ($tmp106 >= $tmp108) goto $l111; else goto $l113;
    $l121:;
    if ($tmp106 > $tmp108) goto $l111; else goto $l113;
    $l111:;
    {
        org$pandalanguage$pandac$parser$Token $tmp123 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i105);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp123);
    }
    $l114:;
    if ($tmp117) goto $l125; else goto $l126;
    $l125:;
    int64_t $tmp127 = $tmp108 - i105.value;
    if ($tmp110) goto $l128; else goto $l129;
    $l128:;
    if ((uint64_t) $tmp127 >= $tmp109) goto $l124; else goto $l113;
    $l129:;
    if ((uint64_t) $tmp127 > $tmp109) goto $l124; else goto $l113;
    $l126:;
    int64_t $tmp131 = i105.value - $tmp108;
    if ($tmp110) goto $l132; else goto $l133;
    $l132:;
    if ((uint64_t) $tmp131 >= -$tmp109) goto $l124; else goto $l113;
    $l133:;
    if ((uint64_t) $tmp131 > -$tmp109) goto $l124; else goto $l113;
    $l124:;
    i105.value += $tmp109;
    goto $l111;
    $l113:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$String* $returnValue135;
    panda$core$String* $tmp136;
    panda$core$String* $tmp137;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp138;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp138, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp139 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp138);
    $tmp137 = $tmp139;
    $tmp136 = $tmp137;
    $returnValue135 = $tmp136;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
    return $returnValue135;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$ASTNode* $returnValue141;
    org$pandalanguage$pandac$ASTNode* $tmp142;
    org$pandalanguage$pandac$ASTNode* $tmp144;
    org$pandalanguage$pandac$ASTNode* $tmp145;
    org$pandalanguage$pandac$parser$Token$Kind $tmp149;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        $tmp142 = p_chunk;
        $returnValue141 = $tmp142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
        return $returnValue141;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp146 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$Position $tmp148 = (($fn147) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp149, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp146, ((panda$core$Int64) { 4 }), $tmp148, p_string, $tmp149, p_chunk);
    $tmp145 = $tmp146;
    $tmp144 = $tmp145;
    $returnValue141 = $tmp144;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
    return $returnValue141;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result154 = NULL;
    panda$core$MutableString* $tmp155;
    panda$core$MutableString* $tmp156;
    org$pandalanguage$pandac$parser$Token token160;
    org$pandalanguage$pandac$parser$Token$Kind $match$158_13162;
    panda$core$String* str167 = NULL;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$Char8 $tmp171;
    panda$core$String* $returnValue174;
    panda$core$String* $tmp175;
    panda$core$String* $tmp182;
    org$pandalanguage$pandac$parser$Token escape189;
    panda$core$String* $tmp193;
    panda$core$String* escapeText197 = NULL;
    panda$core$String* $tmp198;
    panda$core$String* $tmp199;
    panda$core$Char8 c201;
    panda$core$Object* $tmp202;
    panda$collections$ListView* $tmp203;
    panda$core$Char8 $match$177_21209;
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
    panda$core$Char8 $tmp228;
    panda$core$Char8 $tmp230;
    panda$core$String* $tmp232;
    panda$core$String* $tmp236;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp237;
    panda$core$String* $tmp243;
    panda$core$String* $tmp244;
    panda$core$String* $tmp248;
    int $tmp153;
    {
        panda$core$MutableString* $tmp157 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp157);
        $tmp156 = $tmp157;
        $tmp155 = $tmp156;
        result154 = $tmp155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
        $l158:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp161 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token160 = $tmp161;
            {
                $match$158_13162 = token160.kind;
                panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_13162.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp163.value) {
                {
                    int $tmp166;
                    {
                        panda$core$String* $tmp170 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token160);
                        $tmp169 = $tmp170;
                        $tmp168 = $tmp169;
                        str167 = $tmp168;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp171, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp172 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str167, $tmp171);
                        if ($tmp172.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s173);
                            $tmp175 = NULL;
                            $returnValue174 = $tmp175;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                            $tmp166 = 0;
                            goto $l164;
                            $l176:;
                            $tmp153 = 0;
                            goto $l151;
                            $l177:;
                            return $returnValue174;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result154, str167);
                    }
                    $tmp166 = -1;
                    goto $l164;
                    $l164:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str167));
                    str167 = NULL;
                    switch ($tmp166) {
                        case -1: goto $l179;
                        case 0: goto $l176;
                    }
                    $l179:;
                }
                }
                else {
                panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_13162.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp180.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s181);
                    $tmp182 = NULL;
                    $returnValue174 = $tmp182;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                    $tmp153 = 1;
                    goto $l151;
                    $l183:;
                    return $returnValue174;
                }
                }
                else {
                panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_13162.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp185.value) {
                {
                    int $tmp188;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp190 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape189 = $tmp190;
                        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape189.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp191.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s192);
                            $tmp193 = NULL;
                            $returnValue174 = $tmp193;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                            $tmp188 = 0;
                            goto $l186;
                            $l194:;
                            $tmp153 = 2;
                            goto $l151;
                            $l195:;
                            return $returnValue174;
                        }
                        }
                        panda$core$String* $tmp200 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape189);
                        $tmp199 = $tmp200;
                        $tmp198 = $tmp199;
                        escapeText197 = $tmp198;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                        panda$collections$ListView* $tmp204 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText197);
                        $tmp203 = $tmp204;
                        ITable* $tmp205 = $tmp203->$class->itable;
                        while ($tmp205->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp205 = $tmp205->next;
                        }
                        $fn207 $tmp206 = $tmp205->methods[0];
                        panda$core$Object* $tmp208 = $tmp206($tmp203, ((panda$core$Int64) { 0 }));
                        $tmp202 = $tmp208;
                        c201 = ((panda$core$Char8$wrapper*) $tmp202)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp202);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                        {
                            $match$177_21209 = c201;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp211 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$177_21209, $tmp210);
                            if ($tmp211.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp212, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp212);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp214 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$177_21209, $tmp213);
                            if ($tmp214.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp215, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp215);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp217 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$177_21209, $tmp216);
                            if ($tmp217.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp218);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp220 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$177_21209, $tmp219);
                            if ($tmp220.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp221);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp223 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$177_21209, $tmp222);
                            if ($tmp223.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp224);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp226 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$177_21209, $tmp225);
                            if ($tmp226.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp227);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp229 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$177_21209, $tmp228);
                            if ($tmp229.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp230, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result154, $tmp230);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token160, &$s231);
                                $tmp232 = NULL;
                                $returnValue174 = $tmp232;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
                                $tmp188 = 1;
                                goto $l186;
                                $l233:;
                                $tmp153 = 3;
                                goto $l151;
                                $l234:;
                                return $returnValue174;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp238 = panda$core$String$start$R$panda$core$String$Index(escapeText197);
                        panda$core$String$Index $tmp239 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText197, $tmp238);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp237, ((panda$core$String$Index$nullable) { $tmp239, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp240 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText197, $tmp237);
                        $tmp236 = $tmp240;
                        panda$core$MutableString$append$panda$core$String(result154, $tmp236);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
                    }
                    $tmp188 = -1;
                    goto $l186;
                    $l186:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText197));
                    escapeText197 = NULL;
                    switch ($tmp188) {
                        case 0: goto $l194;
                        case -1: goto $l241;
                        case 1: goto $l233;
                    }
                    $l241:;
                }
                }
                else {
                panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$158_13162.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp242.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token160);
                    panda$core$String* $tmp245 = panda$core$MutableString$finish$R$panda$core$String(result154);
                    $tmp244 = $tmp245;
                    $tmp243 = $tmp244;
                    $returnValue174 = $tmp243;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp243));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
                    $tmp153 = 4;
                    goto $l151;
                    $l246:;
                    return $returnValue174;
                }
                }
                else {
                {
                    panda$core$String* $tmp249 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token160);
                    $tmp248 = $tmp249;
                    panda$core$MutableString$append$panda$core$String(result154, $tmp248);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                }
                }
                }
                }
                }
            }
        }
        }
        $l159:;
    }
    $tmp153 = -1;
    goto $l151;
    $l151:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result154));
    result154 = NULL;
    switch ($tmp153) {
        case 2: goto $l195;
        case -1: goto $l250;
        case 4: goto $l246;
        case 0: goto $l177;
        case 1: goto $l183;
        case 3: goto $l234;
    }
    $l250:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result254 = NULL;
    panda$core$MutableString* $tmp255;
    panda$core$MutableString* $tmp256;
    org$pandalanguage$pandac$parser$Token token260;
    org$pandalanguage$pandac$parser$Token$Kind $match$203_13262;
    panda$core$String* str267 = NULL;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    panda$core$Char8 $tmp271;
    panda$core$String* $returnValue274;
    panda$core$String* $tmp275;
    panda$core$String* $tmp282;
    org$pandalanguage$pandac$parser$Token escape289;
    panda$core$String* $tmp293;
    panda$core$String* escapeText297 = NULL;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$Char8 c301;
    panda$core$Object* $tmp302;
    panda$collections$ListView* $tmp303;
    panda$core$Char8 $match$222_21309;
    panda$core$Char8 $tmp310;
    panda$core$Char8 $tmp312;
    panda$core$Char8 $tmp313;
    panda$core$Char8 $tmp315;
    panda$core$Char8 $tmp316;
    panda$core$Char8 $tmp318;
    panda$core$Char8 $tmp319;
    panda$core$Char8 $tmp321;
    panda$core$Char8 $tmp322;
    panda$core$Char8 $tmp324;
    panda$core$Char8 $tmp325;
    panda$core$Char8 $tmp327;
    panda$core$Char8 $tmp328;
    panda$core$Char8 $tmp330;
    panda$core$Char8 $tmp331;
    panda$core$Char8 $tmp333;
    panda$core$String* $tmp335;
    panda$core$String* $tmp339;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp340;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$core$String* $tmp357;
    int $tmp253;
    {
        panda$core$MutableString* $tmp257 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp257);
        $tmp256 = $tmp257;
        $tmp255 = $tmp256;
        result254 = $tmp255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
        $l258:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp261 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token260 = $tmp261;
            {
                $match$203_13262 = token260.kind;
                panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$203_13262.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp263.value) {
                {
                    int $tmp266;
                    {
                        panda$core$String* $tmp270 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token260);
                        $tmp269 = $tmp270;
                        $tmp268 = $tmp269;
                        str267 = $tmp268;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp271, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp272 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str267, $tmp271);
                        if ($tmp272.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s273);
                            $tmp275 = NULL;
                            $returnValue274 = $tmp275;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
                            $tmp266 = 0;
                            goto $l264;
                            $l276:;
                            $tmp253 = 0;
                            goto $l251;
                            $l277:;
                            return $returnValue274;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(result254, str267);
                    }
                    $tmp266 = -1;
                    goto $l264;
                    $l264:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str267));
                    str267 = NULL;
                    switch ($tmp266) {
                        case -1: goto $l279;
                        case 0: goto $l276;
                    }
                    $l279:;
                }
                }
                else {
                panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$203_13262.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp280.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s281);
                    $tmp282 = NULL;
                    $returnValue274 = $tmp282;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
                    $tmp253 = 1;
                    goto $l251;
                    $l283:;
                    return $returnValue274;
                }
                }
                else {
                panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$203_13262.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp285.value) {
                {
                    int $tmp288;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp290 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape289 = $tmp290;
                        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape289.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp291.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s292);
                            $tmp293 = NULL;
                            $returnValue274 = $tmp293;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                            $tmp288 = 0;
                            goto $l286;
                            $l294:;
                            $tmp253 = 2;
                            goto $l251;
                            $l295:;
                            return $returnValue274;
                        }
                        }
                        panda$core$String* $tmp300 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape289);
                        $tmp299 = $tmp300;
                        $tmp298 = $tmp299;
                        escapeText297 = $tmp298;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
                        panda$collections$ListView* $tmp304 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText297);
                        $tmp303 = $tmp304;
                        ITable* $tmp305 = $tmp303->$class->itable;
                        while ($tmp305->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp305 = $tmp305->next;
                        }
                        $fn307 $tmp306 = $tmp305->methods[0];
                        panda$core$Object* $tmp308 = $tmp306($tmp303, ((panda$core$Int64) { 0 }));
                        $tmp302 = $tmp308;
                        c301 = ((panda$core$Char8$wrapper*) $tmp302)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp302);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
                        {
                            $match$222_21309 = c301;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp310, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp311 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp310);
                            if ($tmp311.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp312, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp312);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp313, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp314 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp313);
                            if ($tmp314.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp315, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp315);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp316, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp317 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp316);
                            if ($tmp317.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp318, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp318);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp320 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp319);
                            if ($tmp320.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp321, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp321);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp323 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp322);
                            if ($tmp323.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp324, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp324);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp326 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp325);
                            if ($tmp326.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp327, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp327);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 58 }));
                            panda$core$Bit $tmp329 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp328);
                            if ($tmp329.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp330, ((panda$core$UInt8) { 58 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp330);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 125 }));
                            panda$core$Bit $tmp332 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$222_21309, $tmp331);
                            if ($tmp332.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp333, ((panda$core$UInt8) { 125 }));
                                panda$core$MutableString$append$panda$core$Char8(result254, $tmp333);
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token260, &$s334);
                                $tmp335 = NULL;
                                $returnValue274 = $tmp335;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
                                $tmp288 = 1;
                                goto $l286;
                                $l336:;
                                $tmp253 = 3;
                                goto $l251;
                                $l337:;
                                return $returnValue274;
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
                        panda$core$String$Index $tmp341 = panda$core$String$start$R$panda$core$String$Index(escapeText297);
                        panda$core$String$Index $tmp342 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText297, $tmp341);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp340, ((panda$core$String$Index$nullable) { $tmp342, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp343 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText297, $tmp340);
                        $tmp339 = $tmp343;
                        panda$core$MutableString$append$panda$core$String(result254, $tmp339);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                    }
                    $tmp288 = -1;
                    goto $l286;
                    $l286:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText297));
                    escapeText297 = NULL;
                    switch ($tmp288) {
                        case -1: goto $l344;
                        case 0: goto $l294;
                        case 1: goto $l336;
                    }
                    $l344:;
                }
                }
                else {
                panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$203_13262.$rawValue, ((panda$core$Int64) { 95 }));
                if ($tmp345.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token260);
                    panda$core$String* $tmp348 = panda$core$MutableString$finish$R$panda$core$String(result254);
                    $tmp347 = $tmp348;
                    $tmp346 = $tmp347;
                    $returnValue274 = $tmp346;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                    $tmp253 = 4;
                    goto $l251;
                    $l349:;
                    return $returnValue274;
                }
                }
                else {
                panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$203_13262.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp351.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token260);
                    panda$core$String* $tmp354 = panda$core$MutableString$finish$R$panda$core$String(result254);
                    $tmp353 = $tmp354;
                    $tmp352 = $tmp353;
                    $returnValue274 = $tmp352;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
                    $tmp253 = 5;
                    goto $l251;
                    $l355:;
                    return $returnValue274;
                }
                }
                else {
                {
                    panda$core$String* $tmp358 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token260);
                    $tmp357 = $tmp358;
                    panda$core$MutableString$append$panda$core$String(result254, $tmp357);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l259:;
    }
    $tmp253 = -1;
    goto $l251;
    $l251:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result254));
    result254 = NULL;
    switch ($tmp253) {
        case 4: goto $l349;
        case 3: goto $l337;
        case 0: goto $l277;
        case 1: goto $l283;
        case 5: goto $l355;
        case 2: goto $l295;
        case -1: goto $l359;
    }
    $l359:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot363 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp364;
    org$pandalanguage$pandac$ASTNode* $tmp365;
    org$pandalanguage$pandac$ASTNode* call370 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp371;
    org$pandalanguage$pandac$ASTNode* $tmp372;
    panda$collections$ImmutableArray* $tmp376;
    org$pandalanguage$pandac$ASTNode* stringType378 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp379;
    org$pandalanguage$pandac$ASTNode* $tmp380;
    org$pandalanguage$pandac$ASTNode* $returnValue385;
    org$pandalanguage$pandac$ASTNode* $tmp386;
    org$pandalanguage$pandac$ASTNode* $tmp387;
    org$pandalanguage$pandac$parser$Token$Kind $tmp391;
    int $tmp362;
    {
        org$pandalanguage$pandac$ASTNode* $tmp366 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp368 = (($fn367) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp366, ((panda$core$Int64) { 15 }), $tmp368, p_expr, &$s369);
        $tmp365 = $tmp366;
        $tmp364 = $tmp365;
        dot363 = $tmp364;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp364));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
        org$pandalanguage$pandac$ASTNode* $tmp373 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp375 = (($fn374) p_expr->$class->vtable[2])(p_expr);
        panda$collections$ImmutableArray* $tmp377 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp377);
        $tmp376 = $tmp377;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp373, ((panda$core$Int64) { 8 }), $tmp375, dot363, $tmp376);
        $tmp372 = $tmp373;
        $tmp371 = $tmp372;
        call370 = $tmp371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
        org$pandalanguage$pandac$ASTNode* $tmp381 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp383 = (($fn382) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp381, ((panda$core$Int64) { 40 }), $tmp383, &$s384);
        $tmp380 = $tmp381;
        $tmp379 = $tmp380;
        stringType378 = $tmp379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
        org$pandalanguage$pandac$ASTNode* $tmp388 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp390 = (($fn389) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp391, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp388, ((panda$core$Int64) { 4 }), $tmp390, call370, $tmp391, stringType378);
        $tmp387 = $tmp388;
        $tmp386 = $tmp387;
        $returnValue385 = $tmp386;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
        $tmp362 = 0;
        goto $l360;
        $l392:;
        return $returnValue385;
    }
    $l360:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot363));
    dot363 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call370));
    call370 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType378));
    stringType378 = NULL;
    switch ($tmp362) {
        case 0: goto $l392;
    }
    $l394:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start398;
    panda$core$String* $tmp405;
    panda$core$String* $tmp406;
    panda$core$String* $tmp408;
    org$pandalanguage$pandac$ASTNode* $returnValue413;
    org$pandalanguage$pandac$ASTNode* $tmp414;
    org$pandalanguage$pandac$ASTNode* result417 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp418;
    panda$core$MutableString* chunk419 = NULL;
    panda$core$MutableString* $tmp420;
    panda$core$MutableString* $tmp421;
    org$pandalanguage$pandac$parser$Token token425;
    org$pandalanguage$pandac$parser$Token$Kind $match$269_13428;
    panda$core$String* str433 = NULL;
    panda$core$String* $tmp434;
    panda$core$String* $tmp435;
    panda$core$Char8 $tmp437;
    org$pandalanguage$pandac$ASTNode* $tmp440;
    org$pandalanguage$pandac$ASTNode* $tmp447;
    org$pandalanguage$pandac$parser$Token escape454;
    org$pandalanguage$pandac$ASTNode* $tmp458;
    panda$core$String* escapeText462 = NULL;
    panda$core$String* $tmp463;
    panda$core$String* $tmp464;
    panda$core$Char8 c466;
    panda$core$Object* $tmp467;
    panda$collections$ListView* $tmp468;
    panda$core$Char8 $match$288_21474;
    panda$core$Char8 $tmp475;
    panda$core$Char8 $tmp477;
    panda$core$Char8 $tmp478;
    panda$core$Char8 $tmp480;
    panda$core$Char8 $tmp481;
    panda$core$Char8 $tmp483;
    panda$core$Char8 $tmp484;
    panda$core$Char8 $tmp486;
    panda$core$Char8 $tmp487;
    panda$core$Char8 $tmp489;
    panda$core$Char8 $tmp490;
    panda$core$Char8 $tmp492;
    panda$core$Char8 $tmp493;
    org$pandalanguage$pandac$ASTNode* expr498 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp499;
    org$pandalanguage$pandac$ASTNode* $tmp500;
    org$pandalanguage$pandac$ASTNode* $tmp502;
    panda$core$String* align507 = NULL;
    panda$core$String* $tmp508;
    panda$core$String* format509 = NULL;
    panda$core$String* $tmp510;
    org$pandalanguage$pandac$parser$Token$Kind $tmp511;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    org$pandalanguage$pandac$parser$Token$Kind $tmp517;
    panda$core$String* $tmp522;
    panda$core$String* $tmp523;
    panda$core$String* $tmp524;
    org$pandalanguage$pandac$ASTNode* $tmp526;
    org$pandalanguage$pandac$ASTNode* formattable532 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp533;
    org$pandalanguage$pandac$ASTNode* $tmp534;
    org$pandalanguage$pandac$ASTNode* cast539 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp540;
    org$pandalanguage$pandac$ASTNode* $tmp541;
    org$pandalanguage$pandac$parser$Token$Kind $tmp545;
    org$pandalanguage$pandac$ASTNode* dot546 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp547;
    org$pandalanguage$pandac$ASTNode* $tmp548;
    panda$collections$Array* callArgs553 = NULL;
    panda$collections$Array* $tmp554;
    panda$collections$Array* $tmp555;
    org$pandalanguage$pandac$ASTNode* $tmp557;
    org$pandalanguage$pandac$ASTNode* $tmp559;
    org$pandalanguage$pandac$ASTNode* $tmp560;
    org$pandalanguage$pandac$ASTNode* $tmp561;
    panda$collections$ImmutableArray* $tmp565;
    org$pandalanguage$pandac$parser$Token$Kind $tmp568;
    org$pandalanguage$pandac$ASTNode* $tmp571;
    org$pandalanguage$pandac$ASTNode* $tmp579;
    org$pandalanguage$pandac$ASTNode* $tmp580;
    org$pandalanguage$pandac$ASTNode* $tmp581;
    org$pandalanguage$pandac$ASTNode* pandaType583 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp584;
    org$pandalanguage$pandac$ASTNode* $tmp585;
    org$pandalanguage$pandac$ASTNode* callTarget590 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp591;
    org$pandalanguage$pandac$ASTNode* $tmp592;
    panda$collections$Array* callArgs597 = NULL;
    panda$collections$Array* $tmp598;
    panda$collections$Array* $tmp599;
    org$pandalanguage$pandac$ASTNode* $tmp601;
    org$pandalanguage$pandac$ASTNode* $tmp603;
    org$pandalanguage$pandac$ASTNode* $tmp604;
    org$pandalanguage$pandac$ASTNode* $tmp605;
    panda$collections$ImmutableArray* $tmp609;
    panda$core$String* text612 = NULL;
    panda$core$String* $tmp613;
    panda$core$String* $tmp614;
    panda$core$MutableString* $tmp616;
    panda$core$MutableString* $tmp617;
    panda$core$MutableString* $tmp618;
    org$pandalanguage$pandac$ASTNode* $tmp625;
    org$pandalanguage$pandac$ASTNode* $tmp626;
    org$pandalanguage$pandac$ASTNode* $tmp627;
    org$pandalanguage$pandac$ASTNode* $tmp628;
    org$pandalanguage$pandac$ASTNode* $tmp631;
    org$pandalanguage$pandac$ASTNode* $tmp632;
    org$pandalanguage$pandac$ASTNode* $tmp633;
    org$pandalanguage$pandac$ASTNode* $tmp635;
    org$pandalanguage$pandac$ASTNode* $tmp636;
    org$pandalanguage$pandac$ASTNode* $tmp637;
    org$pandalanguage$pandac$ASTNode* $tmp641;
    panda$core$String* $tmp645;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp646;
    panda$core$String* $tmp651;
    org$pandalanguage$pandac$ASTNode* $tmp653;
    org$pandalanguage$pandac$ASTNode* $tmp654;
    org$pandalanguage$pandac$ASTNode* $tmp655;
    panda$core$String* $tmp657;
    int $tmp397;
    {
        org$pandalanguage$pandac$parser$Token $tmp399 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start398 = $tmp399;
        panda$core$Bit $tmp401 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start398.kind.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp400 = $tmp401.value;
        if (!$tmp400) goto $l402;
        panda$core$Bit $tmp403 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start398.kind.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp400 = $tmp403.value;
        $l402:;
        panda$core$Bit $tmp404 = { $tmp400 };
        if ($tmp404.value) {
        {
            panda$core$String* $tmp409 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, start398);
            $tmp408 = $tmp409;
            panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s407, $tmp408);
            $tmp406 = $tmp410;
            panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s411);
            $tmp405 = $tmp412;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start398, $tmp405);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
            $tmp414 = NULL;
            $returnValue413 = $tmp414;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
            $tmp397 = 0;
            goto $l395;
            $l415:;
            return $returnValue413;
        }
        }
        $tmp418 = NULL;
        result417 = $tmp418;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
        panda$core$MutableString* $tmp422 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp422);
        $tmp421 = $tmp422;
        $tmp420 = $tmp421;
        chunk419 = $tmp420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
        $l423:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp426 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token425 = $tmp426;
            panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token425.kind.$rawValue, start398.kind.$rawValue);
            if ($tmp427.value) {
            {
                goto $l424;
            }
            }
            {
                $match$269_13428 = token425.kind;
                panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$269_13428.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp429.value) {
                {
                    int $tmp432;
                    {
                        panda$core$String* $tmp436 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token425);
                        $tmp435 = $tmp436;
                        $tmp434 = $tmp435;
                        str433 = $tmp434;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                        panda$core$Char8$init$panda$core$UInt8(&$tmp437, ((panda$core$UInt8) { 10 }));
                        panda$core$Bit $tmp438 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str433, $tmp437);
                        if ($tmp438.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start398, &$s439);
                            $tmp440 = NULL;
                            $returnValue413 = $tmp440;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
                            $tmp432 = 0;
                            goto $l430;
                            $l441:;
                            $tmp397 = 1;
                            goto $l395;
                            $l442:;
                            return $returnValue413;
                        }
                        }
                        panda$core$MutableString$append$panda$core$String(chunk419, str433);
                    }
                    $tmp432 = -1;
                    goto $l430;
                    $l430:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) str433));
                    str433 = NULL;
                    switch ($tmp432) {
                        case 0: goto $l441;
                        case -1: goto $l444;
                    }
                    $l444:;
                }
                }
                else {
                panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$269_13428.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp445.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start398, &$s446);
                    $tmp447 = NULL;
                    $returnValue413 = $tmp447;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                    $tmp397 = 2;
                    goto $l395;
                    $l448:;
                    return $returnValue413;
                }
                }
                else {
                panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$269_13428.$rawValue, ((panda$core$Int64) { 106 }));
                if ($tmp450.value) {
                {
                    int $tmp453;
                    {
                        org$pandalanguage$pandac$parser$Token $tmp455 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                        escape454 = $tmp455;
                        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape454.kind.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp456.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start398, &$s457);
                            $tmp458 = NULL;
                            $returnValue413 = $tmp458;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
                            $tmp453 = 0;
                            goto $l451;
                            $l459:;
                            $tmp397 = 3;
                            goto $l395;
                            $l460:;
                            return $returnValue413;
                        }
                        }
                        panda$core$String* $tmp465 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape454);
                        $tmp464 = $tmp465;
                        $tmp463 = $tmp464;
                        escapeText462 = $tmp463;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
                        panda$collections$ListView* $tmp469 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText462);
                        $tmp468 = $tmp469;
                        ITable* $tmp470 = $tmp468->$class->itable;
                        while ($tmp470->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp470 = $tmp470->next;
                        }
                        $fn472 $tmp471 = $tmp470->methods[0];
                        panda$core$Object* $tmp473 = $tmp471($tmp468, ((panda$core$Int64) { 0 }));
                        $tmp467 = $tmp473;
                        c466 = ((panda$core$Char8$wrapper*) $tmp467)->value;
                        panda$core$Panda$unref$panda$core$Object($tmp467);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
                        {
                            $match$288_21474 = c466;
                            panda$core$Char8$init$panda$core$UInt8(&$tmp475, ((panda$core$UInt8) { 110 }));
                            panda$core$Bit $tmp476 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$288_21474, $tmp475);
                            if ($tmp476.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp477, ((panda$core$UInt8) { 10 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk419, $tmp477);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp478, ((panda$core$UInt8) { 114 }));
                            panda$core$Bit $tmp479 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$288_21474, $tmp478);
                            if ($tmp479.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp480, ((panda$core$UInt8) { 13 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk419, $tmp480);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp481, ((panda$core$UInt8) { 116 }));
                            panda$core$Bit $tmp482 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$288_21474, $tmp481);
                            if ($tmp482.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp483, ((panda$core$UInt8) { 9 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk419, $tmp483);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp484, ((panda$core$UInt8) { 39 }));
                            panda$core$Bit $tmp485 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$288_21474, $tmp484);
                            if ($tmp485.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp486, ((panda$core$UInt8) { 39 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk419, $tmp486);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp487, ((panda$core$UInt8) { 34 }));
                            panda$core$Bit $tmp488 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$288_21474, $tmp487);
                            if ($tmp488.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp489, ((panda$core$UInt8) { 34 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk419, $tmp489);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp490, ((panda$core$UInt8) { 92 }));
                            panda$core$Bit $tmp491 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$288_21474, $tmp490);
                            if ($tmp491.value) {
                            {
                                panda$core$Char8$init$panda$core$UInt8(&$tmp492, ((panda$core$UInt8) { 92 }));
                                panda$core$MutableString$append$panda$core$Char8(chunk419, $tmp492);
                            }
                            }
                            else {
                            panda$core$Char8$init$panda$core$UInt8(&$tmp493, ((panda$core$UInt8) { 123 }));
                            panda$core$Bit $tmp494 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$288_21474, $tmp493);
                            if ($tmp494.value) {
                            {
                                {
                                    int $tmp497;
                                    {
                                        org$pandalanguage$pandac$ASTNode* $tmp501 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp500 = $tmp501;
                                        $tmp499 = $tmp500;
                                        expr498 = $tmp499;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
                                        if (((panda$core$Bit) { expr498 == NULL }).value) {
                                        {
                                            $tmp502 = NULL;
                                            $returnValue413 = $tmp502;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
                                            $tmp497 = 0;
                                            goto $l495;
                                            $l503:;
                                            $tmp453 = 1;
                                            goto $l451;
                                            $l504:;
                                            $tmp397 = 4;
                                            goto $l395;
                                            $l505:;
                                            return $returnValue413;
                                        }
                                        }
                                        $tmp508 = NULL;
                                        align507 = $tmp508;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
                                        $tmp510 = NULL;
                                        format509 = $tmp510;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp511, ((panda$core$Int64) { 105 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp512 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp511);
                                        if (((panda$core$Bit) { $tmp512.nonnull }).value) {
                                        {
                                            {
                                                $tmp513 = align507;
                                                panda$core$String* $tmp516 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start398);
                                                $tmp515 = $tmp516;
                                                $tmp514 = $tmp515;
                                                align507 = $tmp514;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp514));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
                                            }
                                        }
                                        }
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp517, ((panda$core$Int64) { 95 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp518 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp517);
                                        if (((panda$core$Bit) { $tmp518.nonnull }).value) {
                                        {
                                            int $tmp521;
                                            {
                                                {
                                                    $tmp522 = format509;
                                                    panda$core$String* $tmp525 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start398);
                                                    $tmp524 = $tmp525;
                                                    $tmp523 = $tmp524;
                                                    format509 = $tmp523;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
                                                }
                                                if (((panda$core$Bit) { format509 == NULL }).value) {
                                                {
                                                    $tmp526 = NULL;
                                                    $returnValue413 = $tmp526;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
                                                    $tmp521 = 0;
                                                    goto $l519;
                                                    $l527:;
                                                    $tmp497 = 1;
                                                    goto $l495;
                                                    $l528:;
                                                    $tmp453 = 2;
                                                    goto $l451;
                                                    $l529:;
                                                    $tmp397 = 5;
                                                    goto $l395;
                                                    $l530:;
                                                    return $returnValue413;
                                                }
                                                }
                                                org$pandalanguage$pandac$ASTNode* $tmp535 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp537 = (($fn536) expr498->$class->vtable[2])(expr498);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp535, ((panda$core$Int64) { 40 }), $tmp537, &$s538);
                                                $tmp534 = $tmp535;
                                                $tmp533 = $tmp534;
                                                formattable532 = $tmp533;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                                                org$pandalanguage$pandac$ASTNode* $tmp542 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp544 = (($fn543) expr498->$class->vtable[2])(expr498);
                                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp545, ((panda$core$Int64) { 89 }));
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp542, ((panda$core$Int64) { 4 }), $tmp544, expr498, $tmp545, formattable532);
                                                $tmp541 = $tmp542;
                                                $tmp540 = $tmp541;
                                                cast539 = $tmp540;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
                                                org$pandalanguage$pandac$ASTNode* $tmp549 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp551 = (($fn550) expr498->$class->vtable[2])(expr498);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp549, ((panda$core$Int64) { 15 }), $tmp551, cast539, &$s552);
                                                $tmp548 = $tmp549;
                                                $tmp547 = $tmp548;
                                                dot546 = $tmp547;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
                                                panda$collections$Array* $tmp556 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                panda$collections$Array$init($tmp556);
                                                $tmp555 = $tmp556;
                                                $tmp554 = $tmp555;
                                                callArgs553 = $tmp554;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                                                org$pandalanguage$pandac$ASTNode* $tmp558 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp558, ((panda$core$Int64) { 37 }), start398.position, format509);
                                                $tmp557 = $tmp558;
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs553, ((panda$core$Object*) $tmp557));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                                                {
                                                    $tmp559 = expr498;
                                                    org$pandalanguage$pandac$ASTNode* $tmp562 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp564 = (($fn563) expr498->$class->vtable[2])(expr498);
                                                    panda$collections$ImmutableArray* $tmp566 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs553);
                                                    $tmp565 = $tmp566;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp562, ((panda$core$Int64) { 8 }), $tmp564, dot546, $tmp565);
                                                    $tmp561 = $tmp562;
                                                    $tmp560 = $tmp561;
                                                    expr498 = $tmp560;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                                                }
                                            }
                                            $tmp521 = -1;
                                            goto $l519;
                                            $l519:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable532));
                                            formattable532 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast539));
                                            cast539 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot546));
                                            dot546 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs553));
                                            callArgs553 = NULL;
                                            switch ($tmp521) {
                                                case -1: goto $l567;
                                                case 0: goto $l527;
                                            }
                                            $l567:;
                                        }
                                        }
                                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp568, ((panda$core$Int64) { 100 }));
                                        org$pandalanguage$pandac$parser$Token$nullable $tmp570 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp568, &$s569);
                                        if (((panda$core$Bit) { !$tmp570.nonnull }).value) {
                                        {
                                            $tmp571 = NULL;
                                            $returnValue413 = $tmp571;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                                            $tmp497 = 2;
                                            goto $l495;
                                            $l572:;
                                            $tmp453 = 3;
                                            goto $l451;
                                            $l573:;
                                            $tmp397 = 6;
                                            goto $l395;
                                            $l574:;
                                            return $returnValue413;
                                        }
                                        }
                                        if (((panda$core$Bit) { align507 != NULL }).value) {
                                        {
                                            int $tmp578;
                                            {
                                                if (((panda$core$Bit) { format509 == NULL }).value) {
                                                {
                                                    {
                                                        $tmp579 = expr498;
                                                        org$pandalanguage$pandac$ASTNode* $tmp582 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr498);
                                                        $tmp581 = $tmp582;
                                                        $tmp580 = $tmp581;
                                                        expr498 = $tmp580;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp580));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                                                    }
                                                }
                                                }
                                                org$pandalanguage$pandac$ASTNode* $tmp586 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp588 = (($fn587) expr498->$class->vtable[2])(expr498);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp586, ((panda$core$Int64) { 40 }), $tmp588, &$s589);
                                                $tmp585 = $tmp586;
                                                $tmp584 = $tmp585;
                                                pandaType583 = $tmp584;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp584));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
                                                org$pandalanguage$pandac$ASTNode* $tmp593 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$Position $tmp595 = (($fn594) expr498->$class->vtable[2])(expr498);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp593, ((panda$core$Int64) { 15 }), $tmp595, pandaType583, &$s596);
                                                $tmp592 = $tmp593;
                                                $tmp591 = $tmp592;
                                                callTarget590 = $tmp591;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp591));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                                                panda$collections$Array* $tmp600 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                panda$collections$Array$init($tmp600);
                                                $tmp599 = $tmp600;
                                                $tmp598 = $tmp599;
                                                callArgs597 = $tmp598;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp598));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs597, ((panda$core$Object*) expr498));
                                                org$pandalanguage$pandac$ASTNode* $tmp602 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp602, ((panda$core$Int64) { 37 }), start398.position, align507);
                                                $tmp601 = $tmp602;
                                                panda$collections$Array$add$panda$collections$Array$T(callArgs597, ((panda$core$Object*) $tmp601));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                                                {
                                                    $tmp603 = expr498;
                                                    org$pandalanguage$pandac$ASTNode* $tmp606 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                    org$pandalanguage$pandac$Position $tmp608 = (($fn607) expr498->$class->vtable[2])(expr498);
                                                    panda$collections$ImmutableArray* $tmp610 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs597);
                                                    $tmp609 = $tmp610;
                                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp606, ((panda$core$Int64) { 8 }), $tmp608, callTarget590, $tmp609);
                                                    $tmp605 = $tmp606;
                                                    $tmp604 = $tmp605;
                                                    expr498 = $tmp604;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp604));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
                                                }
                                            }
                                            $tmp578 = -1;
                                            goto $l576;
                                            $l576:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType583));
                                            pandaType583 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget590));
                                            callTarget590 = NULL;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs597));
                                            callArgs597 = NULL;
                                            switch ($tmp578) {
                                                case -1: goto $l611;
                                            }
                                            $l611:;
                                        }
                                        }
                                        panda$core$String* $tmp615 = panda$core$MutableString$finish$R$panda$core$String(chunk419);
                                        $tmp614 = $tmp615;
                                        $tmp613 = $tmp614;
                                        text612 = $tmp613;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                                        {
                                            $tmp616 = chunk419;
                                            panda$core$MutableString* $tmp619 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                                            panda$core$MutableString$init($tmp619);
                                            $tmp618 = $tmp619;
                                            $tmp617 = $tmp618;
                                            chunk419 = $tmp617;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                                        }
                                        panda$core$Bit $tmp622 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text612, &$s621);
                                        bool $tmp620 = $tmp622.value;
                                        if ($tmp620) goto $l623;
                                        $tmp620 = ((panda$core$Bit) { result417 != NULL }).value;
                                        $l623:;
                                        panda$core$Bit $tmp624 = { $tmp620 };
                                        if ($tmp624.value) {
                                        {
                                            {
                                                $tmp625 = result417;
                                                org$pandalanguage$pandac$ASTNode* $tmp629 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp629, ((panda$core$Int64) { 37 }), start398.position, text612);
                                                $tmp628 = $tmp629;
                                                org$pandalanguage$pandac$ASTNode* $tmp630 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result417, $tmp628);
                                                $tmp627 = $tmp630;
                                                $tmp626 = $tmp627;
                                                result417 = $tmp626;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                                            }
                                            {
                                                $tmp631 = result417;
                                                org$pandalanguage$pandac$ASTNode* $tmp634 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result417, expr498);
                                                $tmp633 = $tmp634;
                                                $tmp632 = $tmp633;
                                                result417 = $tmp632;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp632));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            {
                                                $tmp635 = result417;
                                                org$pandalanguage$pandac$ASTNode* $tmp638 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr498);
                                                $tmp637 = $tmp638;
                                                $tmp636 = $tmp637;
                                                result417 = $tmp636;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                                            }
                                        }
                                        }
                                    }
                                    $tmp497 = -1;
                                    goto $l495;
                                    $l495:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr498));
                                    expr498 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align507));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format509));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text612));
                                    text612 = NULL;
                                    switch ($tmp497) {
                                        case 1: goto $l528;
                                        case -1: goto $l639;
                                        case 2: goto $l572;
                                        case 0: goto $l503;
                                    }
                                    $l639:;
                                }
                            }
                            }
                            else {
                            {
                                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token425, &$s640);
                                $tmp641 = NULL;
                                $returnValue413 = $tmp641;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
                                $tmp453 = 4;
                                goto $l451;
                                $l642:;
                                $tmp397 = 7;
                                goto $l395;
                                $l643:;
                                return $returnValue413;
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                            }
                        }
                        panda$core$String$Index $tmp647 = panda$core$String$start$R$panda$core$String$Index(escapeText462);
                        panda$core$String$Index $tmp648 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText462, $tmp647);
                        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp646, ((panda$core$String$Index$nullable) { $tmp648, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp649 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText462, $tmp646);
                        $tmp645 = $tmp649;
                        panda$core$MutableString$append$panda$core$String(chunk419, $tmp645);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                    }
                    $tmp453 = -1;
                    goto $l451;
                    $l451:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) escapeText462));
                    escapeText462 = NULL;
                    switch ($tmp453) {
                        case 2: goto $l529;
                        case 0: goto $l459;
                        case 4: goto $l642;
                        case 3: goto $l573;
                        case 1: goto $l504;
                        case -1: goto $l650;
                    }
                    $l650:;
                }
                }
                else {
                {
                    panda$core$String* $tmp652 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token425);
                    $tmp651 = $tmp652;
                    panda$core$MutableString$append$panda$core$String(chunk419, $tmp651);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp651));
                }
                }
                }
                }
            }
        }
        }
        $l424:;
        org$pandalanguage$pandac$ASTNode* $tmp656 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp658 = panda$core$MutableString$finish$R$panda$core$String(chunk419);
        $tmp657 = $tmp658;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp656, ((panda$core$Int64) { 37 }), start398.position, $tmp657);
        $tmp655 = $tmp656;
        org$pandalanguage$pandac$ASTNode* $tmp659 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result417, $tmp655);
        $tmp654 = $tmp659;
        $tmp653 = $tmp654;
        $returnValue413 = $tmp653;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp653));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
        $tmp397 = 8;
        goto $l395;
        $l660:;
        return $returnValue413;
    }
    $l395:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result417));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk419));
    chunk419 = NULL;
    switch ($tmp397) {
        case 5: goto $l530;
        case 8: goto $l660;
        case 2: goto $l448;
        case 0: goto $l415;
        case 1: goto $l442;
        case 7: goto $l643;
        case 6: goto $l574;
        case 4: goto $l505;
        case 3: goto $l460;
    }
    $l662:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t663;
    org$pandalanguage$pandac$parser$Token$Kind $match$364_9665;
    org$pandalanguage$pandac$ASTNode* $returnValue667;
    org$pandalanguage$pandac$ASTNode* $tmp668;
    org$pandalanguage$pandac$ASTNode* $tmp669;
    panda$core$String* $tmp671;
    org$pandalanguage$pandac$ASTNode* $tmp675;
    org$pandalanguage$pandac$ASTNode* $tmp676;
    panda$core$String* $tmp678;
    org$pandalanguage$pandac$ASTNode* $tmp683;
    org$pandalanguage$pandac$ASTNode* $tmp684;
    panda$core$String* $tmp686;
    panda$core$String* $tmp687;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp689;
    org$pandalanguage$pandac$ASTNode* $tmp694;
    org$pandalanguage$pandac$ASTNode* $tmp695;
    panda$core$String* $tmp697;
    panda$core$String* $tmp698;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp700;
    org$pandalanguage$pandac$ASTNode* $tmp705;
    org$pandalanguage$pandac$ASTNode* $tmp706;
    panda$core$String* $tmp708;
    org$pandalanguage$pandac$ASTNode* $tmp713;
    org$pandalanguage$pandac$ASTNode* $tmp714;
    org$pandalanguage$pandac$ASTNode* $tmp718;
    org$pandalanguage$pandac$ASTNode* $tmp719;
    org$pandalanguage$pandac$ASTNode* $tmp723;
    org$pandalanguage$pandac$ASTNode* $tmp724;
    org$pandalanguage$pandac$ASTNode* $tmp728;
    org$pandalanguage$pandac$ASTNode* $tmp729;
    org$pandalanguage$pandac$ASTNode* $tmp733;
    org$pandalanguage$pandac$ASTNode* $tmp734;
    org$pandalanguage$pandac$ASTNode* $tmp742;
    org$pandalanguage$pandac$ASTNode* $tmp743;
    org$pandalanguage$pandac$ASTNode* result750 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp751;
    org$pandalanguage$pandac$ASTNode* $tmp752;
    org$pandalanguage$pandac$ASTNode* $tmp754;
    org$pandalanguage$pandac$parser$Token$Kind $tmp757;
    org$pandalanguage$pandac$ASTNode* $tmp760;
    org$pandalanguage$pandac$ASTNode* $tmp763;
    panda$core$String* name771 = NULL;
    panda$core$String* $tmp772;
    panda$core$String* $tmp773;
    org$pandalanguage$pandac$parser$Token$Kind $tmp780;
    org$pandalanguage$pandac$ASTNode* expr782 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp783;
    org$pandalanguage$pandac$ASTNode* $tmp784;
    org$pandalanguage$pandac$parser$Token$Kind $tmp786;
    org$pandalanguage$pandac$ASTNode* $tmp788;
    org$pandalanguage$pandac$ASTNode* $tmp789;
    org$pandalanguage$pandac$ASTNode* $tmp797;
    org$pandalanguage$pandac$ASTNode* $tmp798;
    panda$core$String* $tmp802;
    panda$core$String* $tmp803;
    org$pandalanguage$pandac$ASTNode* $tmp808;
    org$pandalanguage$pandac$ASTNode* $tmp817;
    org$pandalanguage$pandac$ASTNode* $tmp818;
    panda$core$String* $tmp821;
    panda$core$String* $tmp822;
    panda$core$String* $tmp824;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    org$pandalanguage$pandac$parser$Token $tmp664 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t663 = $tmp664;
    {
        $match$364_9665 = t663.kind;
        panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp666.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp670 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp672 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
            $tmp671 = $tmp672;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp670, ((panda$core$Int64) { 20 }), t663.position, $tmp671);
            $tmp669 = $tmp670;
            $tmp668 = $tmp669;
            $returnValue667 = $tmp668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp674.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp677 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp679 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
            $tmp678 = $tmp679;
            panda$core$UInt64$nullable $tmp680 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp678);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp677, ((panda$core$Int64) { 22 }), t663.position, ((panda$core$UInt64) $tmp680.value));
            $tmp676 = $tmp677;
            $tmp675 = $tmp676;
            $returnValue667 = $tmp675;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp682.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp685 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp688 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
            $tmp687 = $tmp688;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp689, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp690 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp687, $tmp689);
            $tmp686 = $tmp690;
            panda$core$UInt64$nullable $tmp691 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp686, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp685, ((panda$core$Int64) { 22 }), t663.position, ((panda$core$UInt64) $tmp691.value));
            $tmp684 = $tmp685;
            $tmp683 = $tmp684;
            $returnValue667 = $tmp683;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp683));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp693.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp696 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp699 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
            $tmp698 = $tmp699;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp700, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp701 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp698, $tmp700);
            $tmp697 = $tmp701;
            panda$core$UInt64$nullable $tmp702 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp697, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp696, ((panda$core$Int64) { 22 }), t663.position, ((panda$core$UInt64) $tmp702.value));
            $tmp695 = $tmp696;
            $tmp694 = $tmp695;
            $returnValue667 = $tmp694;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp697));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp704.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp707 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp709 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
            $tmp708 = $tmp709;
            panda$core$Real64$nullable $tmp710 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp708);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp707, ((panda$core$Int64) { 34 }), t663.position, ((panda$core$Real64) $tmp710.value));
            $tmp706 = $tmp707;
            $tmp705 = $tmp706;
            $returnValue667 = $tmp705;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp705));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp715 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp715, ((panda$core$Int64) { 36 }), t663.position);
            $tmp714 = $tmp715;
            $tmp713 = $tmp714;
            $returnValue667 = $tmp713;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp713));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp717.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp720 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp720, ((panda$core$Int64) { 38 }), t663.position);
            $tmp719 = $tmp720;
            $tmp718 = $tmp719;
            $returnValue667 = $tmp718;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp718));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp722.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp725 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp725, ((panda$core$Int64) { 28 }), t663.position);
            $tmp724 = $tmp725;
            $tmp723 = $tmp724;
            $returnValue667 = $tmp723;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp727.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp730 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp730, ((panda$core$Int64) { 5 }), t663.position, ((panda$core$Bit) { true }));
            $tmp729 = $tmp730;
            $tmp728 = $tmp729;
            $returnValue667 = $tmp728;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp728));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp732.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp735 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp735, ((panda$core$Int64) { 5 }), t663.position, ((panda$core$Bit) { false }));
            $tmp734 = $tmp735;
            $tmp733 = $tmp734;
            $returnValue667 = $tmp733;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp733));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp734));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp737 = $tmp738.value;
        if ($tmp737) goto $l739;
        panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp737 = $tmp740.value;
        $l739:;
        panda$core$Bit $tmp741 = { $tmp737 };
        if ($tmp741.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t663);
            org$pandalanguage$pandac$ASTNode* $tmp744 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp743 = $tmp744;
            $tmp742 = $tmp743;
            $returnValue667 = $tmp742;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
            return $returnValue667;
        }
        }
        else {
        panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp746.value) {
        {
            int $tmp749;
            {
                org$pandalanguage$pandac$ASTNode* $tmp753 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp752 = $tmp753;
                $tmp751 = $tmp752;
                result750 = $tmp751;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                if (((panda$core$Bit) { result750 == NULL }).value) {
                {
                    $tmp754 = NULL;
                    $returnValue667 = $tmp754;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp754));
                    $tmp749 = 0;
                    goto $l747;
                    $l755:;
                    return $returnValue667;
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp757, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp759 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp757, &$s758);
                if (((panda$core$Bit) { !$tmp759.nonnull }).value) {
                {
                    $tmp760 = NULL;
                    $returnValue667 = $tmp760;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp760));
                    $tmp749 = 1;
                    goto $l747;
                    $l761:;
                    return $returnValue667;
                }
                }
                $tmp763 = result750;
                $returnValue667 = $tmp763;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
                $tmp749 = 2;
                goto $l747;
                $l764:;
                return $returnValue667;
            }
            $l747:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result750));
            result750 = NULL;
            switch ($tmp749) {
                case 0: goto $l755;
                case 1: goto $l761;
                case 2: goto $l764;
            }
            $l766:;
        }
        }
        else {
        panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp767.value) {
        {
            int $tmp770;
            {
                panda$core$String* $tmp774 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
                $tmp773 = $tmp774;
                $tmp772 = $tmp773;
                name771 = $tmp772;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                panda$core$Bit $tmp776 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name771, &$s775);
                if ($tmp776.value) {
                {
                    int $tmp779;
                    {
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp780, ((panda$core$Int64) { 103 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp780, &$s781);
                        org$pandalanguage$pandac$ASTNode* $tmp785 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp784 = $tmp785;
                        $tmp783 = $tmp784;
                        expr782 = $tmp783;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp783));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp786, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp786, &$s787);
                        org$pandalanguage$pandac$ASTNode* $tmp790 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp790, ((panda$core$Int64) { 2 }), t663.position, expr782);
                        $tmp789 = $tmp790;
                        $tmp788 = $tmp789;
                        $returnValue667 = $tmp788;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp788));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
                        $tmp779 = 0;
                        goto $l777;
                        $l791:;
                        $tmp770 = 0;
                        goto $l768;
                        $l792:;
                        return $returnValue667;
                    }
                    $l777:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr782));
                    expr782 = NULL;
                    switch ($tmp779) {
                        case 0: goto $l791;
                    }
                    $l794:;
                }
                }
                else {
                panda$core$Bit $tmp796 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(name771, &$s795);
                if ($tmp796.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp799 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp799, ((panda$core$Int64) { 3 }), t663.position);
                    $tmp798 = $tmp799;
                    $tmp797 = $tmp798;
                    $returnValue667 = $tmp797;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp797));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
                    $tmp770 = 1;
                    goto $l768;
                    $l800:;
                    return $returnValue667;
                }
                }
                }
                panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s804, name771);
                $tmp803 = $tmp805;
                panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp803, &$s806);
                $tmp802 = $tmp807;
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t663, $tmp802);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp803));
                $tmp808 = NULL;
                $returnValue667 = $tmp808;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp808));
                $tmp770 = 2;
                goto $l768;
                $l809:;
                return $returnValue667;
            }
            $l768:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name771));
            name771 = NULL;
            switch ($tmp770) {
                case 2: goto $l809;
                case 0: goto $l792;
                case 1: goto $l800;
            }
            $l811:;
        }
        }
        else {
        panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 20 }));
        bool $tmp812 = $tmp813.value;
        if ($tmp812) goto $l814;
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_9665.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp812 = $tmp815.value;
        $l814:;
        panda$core$Bit $tmp816 = { $tmp812 };
        if ($tmp816.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t663);
            org$pandalanguage$pandac$ASTNode* $tmp819 = org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp818 = $tmp819;
            $tmp817 = $tmp818;
            $returnValue667 = $tmp817;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp817));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp818));
            return $returnValue667;
        }
        }
        else {
        {
            panda$core$String* $tmp825 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
            $tmp824 = $tmp825;
            panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s823, $tmp824);
            $tmp822 = $tmp826;
            panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp822, &$s827);
            $tmp821 = $tmp828;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t663, $tmp821);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
            $tmp829 = NULL;
            $returnValue667 = $tmp829;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp829));
            return $returnValue667;
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
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$421_9834 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp835;
    panda$core$String* text837 = NULL;
    panda$core$String* $returnValue839;
    panda$core$String* $tmp840;
    org$pandalanguage$pandac$ASTNode* base844 = NULL;
    panda$core$String* field846 = NULL;
    panda$core$String* result851 = NULL;
    panda$core$String* $tmp852;
    panda$core$String* $tmp853;
    panda$core$String* $tmp855;
    panda$core$String* $tmp856;
    panda$core$String* $tmp857;
    panda$core$String* $tmp858;
    panda$core$String* $tmp859;
    panda$core$String* $tmp863;
    panda$core$String* $tmp868;
    int $tmp833;
    {
        $tmp835 = p_expr;
        $match$421_9834 = $tmp835;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp835));
        panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$421_9834->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp836.value) {
        {
            panda$core$String** $tmp838 = ((panda$core$String**) ((char*) $match$421_9834->$data + 16));
            text837 = *$tmp838;
            $tmp840 = text837;
            $returnValue839 = $tmp840;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp840));
            $tmp833 = 0;
            goto $l831;
            $l841:;
            return $returnValue839;
        }
        }
        else {
        panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$421_9834->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp843.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp845 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$421_9834->$data + 16));
            base844 = *$tmp845;
            panda$core$String** $tmp847 = ((panda$core$String**) ((char*) $match$421_9834->$data + 24));
            field846 = *$tmp847;
            int $tmp850;
            {
                panda$core$String* $tmp854 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base844);
                $tmp853 = $tmp854;
                $tmp852 = $tmp853;
                result851 = $tmp852;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                if (((panda$core$Bit) { result851 != NULL }).value) {
                {
                    {
                        $tmp856 = result851;
                        $tmp855 = $tmp856;
                        panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s860, field846);
                        $tmp859 = $tmp861;
                        panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result851, $tmp859);
                        $tmp858 = $tmp862;
                        $tmp857 = $tmp858;
                        result851 = $tmp857;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
                    }
                }
                }
                $tmp863 = result851;
                $returnValue839 = $tmp863;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp863));
                $tmp850 = 0;
                goto $l848;
                $l864:;
                $tmp833 = 1;
                goto $l831;
                $l865:;
                return $returnValue839;
            }
            $l848:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result851));
            result851 = NULL;
            switch ($tmp850) {
                case 0: goto $l864;
            }
            $l867:;
        }
        }
        else {
        {
            $tmp868 = NULL;
            $returnValue839 = $tmp868;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp868));
            $tmp833 = 2;
            goto $l831;
            $l869:;
            return $returnValue839;
        }
        }
        }
    }
    $tmp833 = -1;
    goto $l831;
    $l831:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
    switch ($tmp833) {
        case 1: goto $l865;
        case -1: goto $l871;
        case 0: goto $l841;
        case 2: goto $l869;
    }
    $l871:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name872;
    org$pandalanguage$pandac$parser$Token$Kind $match$441_9874;
    panda$core$String* $returnValue960;
    panda$core$String* $tmp961;
    panda$core$String* $tmp962;
    org$pandalanguage$pandac$parser$Token token966;
    panda$core$String* $tmp969;
    panda$core$String* $tmp972;
    org$pandalanguage$pandac$parser$Token$Kind $tmp976;
    panda$core$String* $tmp979;
    org$pandalanguage$pandac$parser$Token$Kind $tmp981;
    panda$core$String* $tmp983;
    panda$core$String* $tmp986;
    panda$core$String* $tmp989;
    panda$core$String* $tmp990;
    panda$core$String* $tmp992;
    panda$core$String* $tmp997;
    org$pandalanguage$pandac$parser$Token $tmp873 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name872 = $tmp873;
    {
        $match$441_9874 = name872.kind;
        panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp895 = $tmp896.value;
        if ($tmp895) goto $l897;
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp895 = $tmp898.value;
        $l897:;
        panda$core$Bit $tmp899 = { $tmp895 };
        bool $tmp894 = $tmp899.value;
        if ($tmp894) goto $l900;
        panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp894 = $tmp901.value;
        $l900:;
        panda$core$Bit $tmp902 = { $tmp894 };
        bool $tmp893 = $tmp902.value;
        if ($tmp893) goto $l903;
        panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp893 = $tmp904.value;
        $l903:;
        panda$core$Bit $tmp905 = { $tmp893 };
        bool $tmp892 = $tmp905.value;
        if ($tmp892) goto $l906;
        panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp892 = $tmp907.value;
        $l906:;
        panda$core$Bit $tmp908 = { $tmp892 };
        bool $tmp891 = $tmp908.value;
        if ($tmp891) goto $l909;
        panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp891 = $tmp910.value;
        $l909:;
        panda$core$Bit $tmp911 = { $tmp891 };
        bool $tmp890 = $tmp911.value;
        if ($tmp890) goto $l912;
        panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp890 = $tmp913.value;
        $l912:;
        panda$core$Bit $tmp914 = { $tmp890 };
        bool $tmp889 = $tmp914.value;
        if ($tmp889) goto $l915;
        panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp889 = $tmp916.value;
        $l915:;
        panda$core$Bit $tmp917 = { $tmp889 };
        bool $tmp888 = $tmp917.value;
        if ($tmp888) goto $l918;
        panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp888 = $tmp919.value;
        $l918:;
        panda$core$Bit $tmp920 = { $tmp888 };
        bool $tmp887 = $tmp920.value;
        if ($tmp887) goto $l921;
        panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp887 = $tmp922.value;
        $l921:;
        panda$core$Bit $tmp923 = { $tmp887 };
        bool $tmp886 = $tmp923.value;
        if ($tmp886) goto $l924;
        panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp886 = $tmp925.value;
        $l924:;
        panda$core$Bit $tmp926 = { $tmp886 };
        bool $tmp885 = $tmp926.value;
        if ($tmp885) goto $l927;
        panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp885 = $tmp928.value;
        $l927:;
        panda$core$Bit $tmp929 = { $tmp885 };
        bool $tmp884 = $tmp929.value;
        if ($tmp884) goto $l930;
        panda$core$Bit $tmp931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp884 = $tmp931.value;
        $l930:;
        panda$core$Bit $tmp932 = { $tmp884 };
        bool $tmp883 = $tmp932.value;
        if ($tmp883) goto $l933;
        panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp883 = $tmp934.value;
        $l933:;
        panda$core$Bit $tmp935 = { $tmp883 };
        bool $tmp882 = $tmp935.value;
        if ($tmp882) goto $l936;
        panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp882 = $tmp937.value;
        $l936:;
        panda$core$Bit $tmp938 = { $tmp882 };
        bool $tmp881 = $tmp938.value;
        if ($tmp881) goto $l939;
        panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp881 = $tmp940.value;
        $l939:;
        panda$core$Bit $tmp941 = { $tmp881 };
        bool $tmp880 = $tmp941.value;
        if ($tmp880) goto $l942;
        panda$core$Bit $tmp943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp880 = $tmp943.value;
        $l942:;
        panda$core$Bit $tmp944 = { $tmp880 };
        bool $tmp879 = $tmp944.value;
        if ($tmp879) goto $l945;
        panda$core$Bit $tmp946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp879 = $tmp946.value;
        $l945:;
        panda$core$Bit $tmp947 = { $tmp879 };
        bool $tmp878 = $tmp947.value;
        if ($tmp878) goto $l948;
        panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp878 = $tmp949.value;
        $l948:;
        panda$core$Bit $tmp950 = { $tmp878 };
        bool $tmp877 = $tmp950.value;
        if ($tmp877) goto $l951;
        panda$core$Bit $tmp952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp877 = $tmp952.value;
        $l951:;
        panda$core$Bit $tmp953 = { $tmp877 };
        bool $tmp876 = $tmp953.value;
        if ($tmp876) goto $l954;
        panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp876 = $tmp955.value;
        $l954:;
        panda$core$Bit $tmp956 = { $tmp876 };
        bool $tmp875 = $tmp956.value;
        if ($tmp875) goto $l957;
        panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp875 = $tmp958.value;
        $l957:;
        panda$core$Bit $tmp959 = { $tmp875 };
        if ($tmp959.value) {
        {
            panda$core$String* $tmp963 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name872);
            $tmp962 = $tmp963;
            $tmp961 = $tmp962;
            $returnValue960 = $tmp961;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp961));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
            return $returnValue960;
        }
        }
        else {
        panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp965.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp967 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token966 = $tmp967;
            panda$core$Bit $tmp968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token966.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp968.value) {
            {
                $tmp969 = &$s970;
                $returnValue960 = $tmp969;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp969));
                return $returnValue960;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token966);
                $tmp972 = &$s973;
                $returnValue960 = $tmp972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp972));
                return $returnValue960;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_9874.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp975.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp976, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp978 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp976, &$s977);
            if (((panda$core$Bit) { !$tmp978.nonnull }).value) {
            {
                $tmp979 = NULL;
                $returnValue960 = $tmp979;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
                return $returnValue960;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp981, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp982 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp981);
            if (((panda$core$Bit) { $tmp982.nonnull }).value) {
            {
                $tmp983 = &$s984;
                $returnValue960 = $tmp983;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp983));
                return $returnValue960;
            }
            }
            $tmp986 = &$s987;
            $returnValue960 = $tmp986;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
            return $returnValue960;
        }
        }
        else {
        {
            panda$core$String* $tmp993 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name872);
            $tmp992 = $tmp993;
            panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s991, $tmp992);
            $tmp990 = $tmp994;
            panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp990, &$s995);
            $tmp989 = $tmp996;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name872, $tmp989);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp990));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
            $tmp997 = NULL;
            $returnValue960 = $tmp997;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
            return $returnValue960;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue999;
    org$pandalanguage$pandac$ASTNode* $tmp1000;
    org$pandalanguage$pandac$ASTNode* $tmp1001;
    org$pandalanguage$pandac$ASTNode* $tmp1002 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    $tmp1001 = $tmp1002;
    $tmp1000 = $tmp1001;
    $returnValue999 = $tmp1000;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1001));
    return $returnValue999;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1007;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1008;
    org$pandalanguage$pandac$ASTNode* $returnValue1011;
    org$pandalanguage$pandac$ASTNode* $tmp1012;
    panda$collections$Array* subtypes1015 = NULL;
    panda$collections$Array* $tmp1016;
    panda$collections$Array* $tmp1017;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1019;
    org$pandalanguage$pandac$ASTNode* t1024 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1025;
    org$pandalanguage$pandac$ASTNode* $tmp1026;
    org$pandalanguage$pandac$ASTNode* $tmp1028;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1035;
    org$pandalanguage$pandac$ASTNode* $tmp1037;
    org$pandalanguage$pandac$ASTNode* $tmp1038;
    org$pandalanguage$pandac$ASTNode* $tmp1039;
    org$pandalanguage$pandac$ASTNode* $tmp1041;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1045;
    org$pandalanguage$pandac$parser$Token yields1048;
    org$pandalanguage$pandac$parser$Token$Kind $match$503_91050;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1067;
    org$pandalanguage$pandac$ASTNode* $tmp1070;
    panda$collections$Array* returnTypes1074 = NULL;
    panda$collections$Array* $tmp1075;
    panda$collections$Array* $tmp1076;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1078;
    org$pandalanguage$pandac$ASTNode* t1083 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1084;
    org$pandalanguage$pandac$ASTNode* $tmp1085;
    org$pandalanguage$pandac$ASTNode* $tmp1087;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1095;
    org$pandalanguage$pandac$ASTNode* $tmp1097;
    org$pandalanguage$pandac$ASTNode* $tmp1098;
    org$pandalanguage$pandac$ASTNode* $tmp1099;
    org$pandalanguage$pandac$ASTNode* $tmp1101;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1106;
    org$pandalanguage$pandac$ASTNode* returnType1109 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1112;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    org$pandalanguage$pandac$ASTNode* $tmp1116;
    org$pandalanguage$pandac$ASTNode* $tmp1117;
    panda$core$Object* $tmp1118;
    org$pandalanguage$pandac$ASTNode* $tmp1120;
    org$pandalanguage$pandac$ASTNode* $tmp1121;
    org$pandalanguage$pandac$ASTNode* $tmp1122;
    panda$collections$ImmutableArray* $tmp1124;
    org$pandalanguage$pandac$ASTNode* $tmp1126;
    org$pandalanguage$pandac$ASTNode* $tmp1127;
    panda$collections$ImmutableArray* $tmp1129;
    org$pandalanguage$pandac$ASTNode* $tmp1135;
    org$pandalanguage$pandac$ASTNode* $tmp1136;
    panda$collections$ImmutableArray* $tmp1138;
    int $tmp1006;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1008, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1010 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1008, &$s1009);
        start1007 = $tmp1010;
        if (((panda$core$Bit) { !start1007.nonnull }).value) {
        {
            $tmp1012 = NULL;
            $returnValue1011 = $tmp1012;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1012));
            $tmp1006 = 0;
            goto $l1004;
            $l1013:;
            return $returnValue1011;
        }
        }
        panda$collections$Array* $tmp1018 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1018);
        $tmp1017 = $tmp1018;
        $tmp1016 = $tmp1017;
        subtypes1015 = $tmp1016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1019, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1020 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1019);
        if (((panda$core$Bit) { !$tmp1020.nonnull }).value) {
        {
            int $tmp1023;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1027 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1026 = $tmp1027;
                $tmp1025 = $tmp1026;
                t1024 = $tmp1025;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1025));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1026));
                if (((panda$core$Bit) { t1024 == NULL }).value) {
                {
                    $tmp1028 = NULL;
                    $returnValue1011 = $tmp1028;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1028));
                    $tmp1023 = 0;
                    goto $l1021;
                    $l1029:;
                    $tmp1006 = 1;
                    goto $l1004;
                    $l1030:;
                    return $returnValue1011;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1015, ((panda$core$Object*) t1024));
                $l1032:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1035, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1036 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1035);
                bool $tmp1034 = ((panda$core$Bit) { $tmp1036.nonnull }).value;
                if (!$tmp1034) goto $l1033;
                {
                    {
                        $tmp1037 = t1024;
                        org$pandalanguage$pandac$ASTNode* $tmp1040 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1039 = $tmp1040;
                        $tmp1038 = $tmp1039;
                        t1024 = $tmp1038;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1038));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
                    }
                    if (((panda$core$Bit) { t1024 == NULL }).value) {
                    {
                        $tmp1041 = NULL;
                        $returnValue1011 = $tmp1041;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1041));
                        $tmp1023 = 1;
                        goto $l1021;
                        $l1042:;
                        $tmp1006 = 2;
                        goto $l1004;
                        $l1043:;
                        return $returnValue1011;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1015, ((panda$core$Object*) t1024));
                }
                goto $l1032;
                $l1033:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1045, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1045, &$s1046);
            }
            $tmp1023 = -1;
            goto $l1021;
            $l1021:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1024));
            t1024 = NULL;
            switch ($tmp1023) {
                case 1: goto $l1042;
                case 0: goto $l1029;
                case -1: goto $l1047;
            }
            $l1047:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1049 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1048 = $tmp1049;
        {
            $match$503_91050 = yields1048.kind;
            panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$503_91050.$rawValue, ((panda$core$Int64) { 90 }));
            bool $tmp1053 = $tmp1054.value;
            if ($tmp1053) goto $l1055;
            panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$503_91050.$rawValue, ((panda$core$Int64) { 91 }));
            $tmp1053 = $tmp1056.value;
            $l1055:;
            panda$core$Bit $tmp1057 = { $tmp1053 };
            bool $tmp1052 = $tmp1057.value;
            if ($tmp1052) goto $l1058;
            panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$503_91050.$rawValue, ((panda$core$Int64) { 92 }));
            $tmp1052 = $tmp1059.value;
            $l1058:;
            panda$core$Bit $tmp1060 = { $tmp1052 };
            bool $tmp1051 = $tmp1060.value;
            if ($tmp1051) goto $l1061;
            panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$503_91050.$rawValue, ((panda$core$Int64) { 93 }));
            $tmp1051 = $tmp1062.value;
            $l1061:;
            panda$core$Bit $tmp1063 = { $tmp1051 };
            if ($tmp1063.value) {
            {
                int $tmp1066;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1067, ((panda$core$Int64) { 103 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1069 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1067, &$s1068);
                    if (((panda$core$Bit) { !$tmp1069.nonnull }).value) {
                    {
                        $tmp1070 = NULL;
                        $returnValue1011 = $tmp1070;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
                        $tmp1066 = 0;
                        goto $l1064;
                        $l1071:;
                        $tmp1006 = 3;
                        goto $l1004;
                        $l1072:;
                        return $returnValue1011;
                    }
                    }
                    panda$collections$Array* $tmp1077 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1077);
                    $tmp1076 = $tmp1077;
                    $tmp1075 = $tmp1076;
                    returnTypes1074 = $tmp1075;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1078, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1079 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1078);
                    if (((panda$core$Bit) { !$tmp1079.nonnull }).value) {
                    {
                        int $tmp1082;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1086 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1085 = $tmp1086;
                            $tmp1084 = $tmp1085;
                            t1083 = $tmp1084;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1084));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
                            if (((panda$core$Bit) { t1083 == NULL }).value) {
                            {
                                $tmp1087 = NULL;
                                $returnValue1011 = $tmp1087;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1087));
                                $tmp1082 = 0;
                                goto $l1080;
                                $l1088:;
                                $tmp1066 = 1;
                                goto $l1064;
                                $l1089:;
                                $tmp1006 = 4;
                                goto $l1004;
                                $l1090:;
                                return $returnValue1011;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1074, ((panda$core$Object*) t1083));
                            $l1092:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1095, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1096 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1095);
                            bool $tmp1094 = ((panda$core$Bit) { $tmp1096.nonnull }).value;
                            if (!$tmp1094) goto $l1093;
                            {
                                {
                                    $tmp1097 = t1083;
                                    org$pandalanguage$pandac$ASTNode* $tmp1100 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1099 = $tmp1100;
                                    $tmp1098 = $tmp1099;
                                    t1083 = $tmp1098;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1099));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
                                }
                                if (((panda$core$Bit) { t1083 == NULL }).value) {
                                {
                                    $tmp1101 = NULL;
                                    $returnValue1011 = $tmp1101;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1101));
                                    $tmp1082 = 1;
                                    goto $l1080;
                                    $l1102:;
                                    $tmp1066 = 2;
                                    goto $l1064;
                                    $l1103:;
                                    $tmp1006 = 5;
                                    goto $l1004;
                                    $l1104:;
                                    return $returnValue1011;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1074, ((panda$core$Object*) t1083));
                            }
                            goto $l1092;
                            $l1093:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1106, ((panda$core$Int64) { 104 }));
                            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1106, &$s1107);
                        }
                        $tmp1082 = -1;
                        goto $l1080;
                        $l1080:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1083));
                        t1083 = NULL;
                        switch ($tmp1082) {
                            case -1: goto $l1108;
                            case 1: goto $l1102;
                            case 0: goto $l1088;
                        }
                        $l1108:;
                    }
                    }
                    memset(&returnType1109, 0, sizeof(returnType1109));
                    panda$core$Int64 $tmp1110 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1074);
                    panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1110, ((panda$core$Int64) { 0 }));
                    if ($tmp1111.value) {
                    {
                        {
                            $tmp1112 = returnType1109;
                            $tmp1113 = NULL;
                            returnType1109 = $tmp1113;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1113));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1114 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1074);
                    panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1114, ((panda$core$Int64) { 1 }));
                    if ($tmp1115.value) {
                    {
                        {
                            $tmp1116 = returnType1109;
                            panda$core$Object* $tmp1119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1074, ((panda$core$Int64) { 0 }));
                            $tmp1118 = $tmp1119;
                            $tmp1117 = ((org$pandalanguage$pandac$ASTNode*) $tmp1118);
                            returnType1109 = $tmp1117;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1117));
                            panda$core$Panda$unref$panda$core$Object($tmp1118);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1120 = returnType1109;
                            org$pandalanguage$pandac$ASTNode* $tmp1123 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1125 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(returnTypes1074);
                            $tmp1124 = $tmp1125;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1123, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1007.value).position, $tmp1124);
                            $tmp1122 = $tmp1123;
                            $tmp1121 = $tmp1122;
                            returnType1109 = $tmp1121;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1120));
                        }
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1128 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1130 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1015);
                    $tmp1129 = $tmp1130;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1128, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start1007.value).position, yields1048.kind, $tmp1129, returnType1109);
                    $tmp1127 = $tmp1128;
                    $tmp1126 = $tmp1127;
                    $returnValue1011 = $tmp1126;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
                    $tmp1066 = 3;
                    goto $l1064;
                    $l1131:;
                    $tmp1006 = 6;
                    goto $l1004;
                    $l1132:;
                    return $returnValue1011;
                }
                $l1064:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1074));
                returnTypes1074 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1109));
                switch ($tmp1066) {
                    case 0: goto $l1071;
                    case 2: goto $l1103;
                    case 3: goto $l1131;
                    case 1: goto $l1089;
                }
                $l1134:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1137 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp1139 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1015);
                $tmp1138 = $tmp1139;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1137, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1007.value).position, $tmp1138);
                $tmp1136 = $tmp1137;
                $tmp1135 = $tmp1136;
                $returnValue1011 = $tmp1135;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1138));
                $tmp1006 = 7;
                goto $l1004;
                $l1140:;
                return $returnValue1011;
            }
            }
        }
    }
    $tmp1006 = -1;
    goto $l1004;
    $l1004:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1015));
    subtypes1015 = NULL;
    switch ($tmp1006) {
        case 5: goto $l1104;
        case 7: goto $l1140;
        case 3: goto $l1072;
        case 1: goto $l1030;
        case 6: goto $l1132;
        case -1: goto $l1142;
        case 4: goto $l1090;
        case 0: goto $l1013;
        case 2: goto $l1043;
    }
    $l1142:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* $returnValue1148;
    org$pandalanguage$pandac$ASTNode* $tmp1149;
    org$pandalanguage$pandac$ASTNode* $tmp1150;
    org$pandalanguage$pandac$parser$Token$nullable start1154;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1155;
    org$pandalanguage$pandac$ASTNode* $tmp1158;
    panda$core$MutableString* name1161 = NULL;
    panda$core$MutableString* $tmp1162;
    panda$core$MutableString* $tmp1163;
    panda$core$String* $tmp1165;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1170;
    org$pandalanguage$pandac$parser$Token$nullable id1172;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1173;
    org$pandalanguage$pandac$ASTNode* $tmp1176;
    panda$core$Char8 $tmp1179;
    panda$core$String* $tmp1180;
    panda$core$String* finalName1182 = NULL;
    panda$core$String* $tmp1183;
    panda$core$String* $tmp1184;
    org$pandalanguage$pandac$ASTNode* result1186 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1187;
    org$pandalanguage$pandac$ASTNode* $tmp1188;
    panda$collections$Array* children1195 = NULL;
    panda$collections$Array* $tmp1196;
    panda$collections$Array* $tmp1197;
    org$pandalanguage$pandac$ASTNode* t1199 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1200;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    org$pandalanguage$pandac$ASTNode* $tmp1203;
    org$pandalanguage$pandac$ASTNode* $tmp1207;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1214;
    org$pandalanguage$pandac$ASTNode* $tmp1216;
    org$pandalanguage$pandac$ASTNode* $tmp1217;
    org$pandalanguage$pandac$ASTNode* $tmp1218;
    org$pandalanguage$pandac$ASTNode* $tmp1220;
    org$pandalanguage$pandac$ASTNode* $tmp1224;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1228;
    org$pandalanguage$pandac$ASTNode* $tmp1231;
    org$pandalanguage$pandac$ASTNode* $tmp1235;
    org$pandalanguage$pandac$ASTNode* $tmp1239;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    org$pandalanguage$pandac$ASTNode* $tmp1241;
    panda$collections$ImmutableArray* $tmp1243;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1246;
    org$pandalanguage$pandac$ASTNode* $tmp1248;
    org$pandalanguage$pandac$ASTNode* $tmp1249;
    org$pandalanguage$pandac$ASTNode* $tmp1250;
    org$pandalanguage$pandac$ASTNode* $tmp1252;
    int $tmp1145;
    {
        org$pandalanguage$pandac$parser$Token $tmp1146 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1146.kind.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1147.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1151 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1150 = $tmp1151;
            $tmp1149 = $tmp1150;
            $returnValue1148 = $tmp1149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
            $tmp1145 = 0;
            goto $l1143;
            $l1152:;
            return $returnValue1148;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1155, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1157 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1155, &$s1156);
        start1154 = $tmp1157;
        if (((panda$core$Bit) { !start1154.nonnull }).value) {
        {
            $tmp1158 = NULL;
            $returnValue1148 = $tmp1158;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
            $tmp1145 = 1;
            goto $l1143;
            $l1159:;
            return $returnValue1148;
        }
        }
        panda$core$MutableString* $tmp1164 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1166 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1154.value));
        $tmp1165 = $tmp1166;
        panda$core$MutableString$init$panda$core$String($tmp1164, $tmp1165);
        $tmp1163 = $tmp1164;
        $tmp1162 = $tmp1163;
        name1161 = $tmp1162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1165));
        $l1167:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1170, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1171 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1170);
        bool $tmp1169 = ((panda$core$Bit) { $tmp1171.nonnull }).value;
        if (!$tmp1169) goto $l1168;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1173, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1175 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1173, &$s1174);
            id1172 = $tmp1175;
            if (((panda$core$Bit) { !id1172.nonnull }).value) {
            {
                $tmp1176 = NULL;
                $returnValue1148 = $tmp1176;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1176));
                $tmp1145 = 2;
                goto $l1143;
                $l1177:;
                return $returnValue1148;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1179, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1161, $tmp1179);
            panda$core$String* $tmp1181 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1172.value));
            $tmp1180 = $tmp1181;
            panda$core$MutableString$append$panda$core$String(name1161, $tmp1180);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
        }
        goto $l1167;
        $l1168:;
        panda$core$String* $tmp1185 = panda$core$MutableString$finish$R$panda$core$String(name1161);
        $tmp1184 = $tmp1185;
        $tmp1183 = $tmp1184;
        finalName1182 = $tmp1183;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1183));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1184));
        org$pandalanguage$pandac$ASTNode* $tmp1189 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1189, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1154.value).position, finalName1182);
        $tmp1188 = $tmp1189;
        $tmp1187 = $tmp1188;
        result1186 = $tmp1187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
        org$pandalanguage$pandac$parser$Token $tmp1190 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1190.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1191.value) {
        {
            int $tmp1194;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1198 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1198);
                $tmp1197 = $tmp1198;
                $tmp1196 = $tmp1197;
                children1195 = $tmp1196;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
                org$pandalanguage$pandac$ASTNode* $tmp1202 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1201 = $tmp1202;
                $tmp1200 = $tmp1201;
                t1199 = $tmp1200;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1200));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                if (((panda$core$Bit) { t1199 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1203 = result1186;
                        $returnValue1148 = $tmp1203;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1203));
                        $tmp1194 = 0;
                        goto $l1192;
                        $l1204:;
                        $tmp1145 = 3;
                        goto $l1143;
                        $l1205:;
                        return $returnValue1148;
                    }
                    }
                    $tmp1207 = NULL;
                    $returnValue1148 = $tmp1207;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1207));
                    $tmp1194 = 1;
                    goto $l1192;
                    $l1208:;
                    $tmp1145 = 4;
                    goto $l1143;
                    $l1209:;
                    return $returnValue1148;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1195, ((panda$core$Object*) t1199));
                $l1211:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1214, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1215 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1214);
                bool $tmp1213 = ((panda$core$Bit) { $tmp1215.nonnull }).value;
                if (!$tmp1213) goto $l1212;
                {
                    {
                        $tmp1216 = t1199;
                        org$pandalanguage$pandac$ASTNode* $tmp1219 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1218 = $tmp1219;
                        $tmp1217 = $tmp1218;
                        t1199 = $tmp1217;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1217));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
                    }
                    if (((panda$core$Bit) { t1199 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1220 = result1186;
                            $returnValue1148 = $tmp1220;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
                            $tmp1194 = 2;
                            goto $l1192;
                            $l1221:;
                            $tmp1145 = 5;
                            goto $l1143;
                            $l1222:;
                            return $returnValue1148;
                        }
                        }
                        $tmp1224 = NULL;
                        $returnValue1148 = $tmp1224;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1224));
                        $tmp1194 = 3;
                        goto $l1192;
                        $l1225:;
                        $tmp1145 = 6;
                        goto $l1143;
                        $l1226:;
                        return $returnValue1148;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1195, ((panda$core$Object*) t1199));
                }
                goto $l1211;
                $l1212:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1228, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1230 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1228, &$s1229);
                if (((panda$core$Bit) { !$tmp1230.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1231 = result1186;
                        $returnValue1148 = $tmp1231;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                        $tmp1194 = 4;
                        goto $l1192;
                        $l1232:;
                        $tmp1145 = 7;
                        goto $l1143;
                        $l1233:;
                        return $returnValue1148;
                    }
                    }
                    $tmp1235 = NULL;
                    $returnValue1148 = $tmp1235;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1235));
                    $tmp1194 = 5;
                    goto $l1192;
                    $l1236:;
                    $tmp1145 = 8;
                    goto $l1143;
                    $l1237:;
                    return $returnValue1148;
                }
                }
                {
                    $tmp1239 = result1186;
                    org$pandalanguage$pandac$ASTNode* $tmp1242 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1244 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1195);
                    $tmp1243 = $tmp1244;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1242, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1154.value).position, finalName1182, $tmp1243);
                    $tmp1241 = $tmp1242;
                    $tmp1240 = $tmp1241;
                    result1186 = $tmp1240;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1240));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1241));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1243));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1239));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1194 = -1;
            goto $l1192;
            $l1192:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1195));
            children1195 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1199));
            t1199 = NULL;
            switch ($tmp1194) {
                case -1: goto $l1245;
                case 3: goto $l1225;
                case 2: goto $l1221;
                case 5: goto $l1236;
                case 4: goto $l1232;
                case 0: goto $l1204;
                case 1: goto $l1208;
            }
            $l1245:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1246, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1247 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1246);
        if (((panda$core$Bit) { $tmp1247.nonnull }).value) {
        {
            {
                $tmp1248 = result1186;
                org$pandalanguage$pandac$ASTNode* $tmp1251 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1251, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$parser$Token) start1154.value).position, result1186);
                $tmp1250 = $tmp1251;
                $tmp1249 = $tmp1250;
                result1186 = $tmp1249;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1248));
            }
        }
        }
        $tmp1252 = result1186;
        $returnValue1148 = $tmp1252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1252));
        $tmp1145 = 9;
        goto $l1143;
        $l1253:;
        return $returnValue1148;
    }
    $l1143:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1161));
    name1161 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1182));
    finalName1182 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1186));
    result1186 = NULL;
    switch ($tmp1145) {
        case 8: goto $l1237;
        case 5: goto $l1222;
        case 7: goto $l1233;
        case 6: goto $l1226;
        case 9: goto $l1253;
        case 1: goto $l1159;
        case 2: goto $l1177;
        case 4: goto $l1209;
        case 0: goto $l1152;
        case 3: goto $l1205;
    }
    $l1255:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1259 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1260;
    org$pandalanguage$pandac$ASTNode* $tmp1261;
    org$pandalanguage$pandac$ASTNode* $returnValue1263;
    org$pandalanguage$pandac$ASTNode* $tmp1264;
    org$pandalanguage$pandac$parser$Token token1269;
    org$pandalanguage$pandac$parser$Token$Kind $match$626_131271;
    panda$core$Object* $tmp1276;
    panda$collections$Array* args1278 = NULL;
    panda$collections$Array* $tmp1279;
    panda$collections$Array* $tmp1280;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1282;
    org$pandalanguage$pandac$ASTNode* expr1287 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1288;
    org$pandalanguage$pandac$ASTNode* $tmp1289;
    panda$core$Object* $tmp1291;
    org$pandalanguage$pandac$ASTNode* $tmp1293;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1301;
    org$pandalanguage$pandac$ASTNode* $tmp1303;
    org$pandalanguage$pandac$ASTNode* $tmp1304;
    org$pandalanguage$pandac$ASTNode* $tmp1305;
    panda$core$Object* $tmp1307;
    org$pandalanguage$pandac$ASTNode* $tmp1309;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1314;
    panda$core$Object* $tmp1317;
    org$pandalanguage$pandac$ASTNode* $tmp1319;
    panda$core$Object* $tmp1325;
    org$pandalanguage$pandac$ASTNode* $tmp1327;
    org$pandalanguage$pandac$ASTNode* $tmp1328;
    org$pandalanguage$pandac$ASTNode* $tmp1329;
    panda$collections$ImmutableArray* $tmp1331;
    org$pandalanguage$pandac$ASTNode* arg1338 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    org$pandalanguage$pandac$ASTNode* $tmp1340;
    org$pandalanguage$pandac$ASTNode* $tmp1342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1346;
    org$pandalanguage$pandac$ASTNode* $tmp1349;
    org$pandalanguage$pandac$ASTNode* $tmp1353;
    org$pandalanguage$pandac$ASTNode* $tmp1354;
    org$pandalanguage$pandac$ASTNode* $tmp1355;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1357;
    panda$core$String* name1363 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1364;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1371;
    org$pandalanguage$pandac$ASTNode* $tmp1373;
    org$pandalanguage$pandac$ASTNode* $tmp1377;
    org$pandalanguage$pandac$ASTNode* $tmp1378;
    org$pandalanguage$pandac$ASTNode* $tmp1379;
    org$pandalanguage$pandac$ASTNode* target1386 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1387;
    org$pandalanguage$pandac$ASTNode* $tmp1388;
    org$pandalanguage$pandac$ASTNode* $tmp1390;
    org$pandalanguage$pandac$ASTNode* $tmp1394;
    org$pandalanguage$pandac$ASTNode* $tmp1395;
    org$pandalanguage$pandac$ASTNode* $tmp1396;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1398;
    panda$core$String* name1404 = NULL;
    panda$core$String* $tmp1405;
    panda$core$String* $tmp1406;
    panda$collections$Array* types1411 = NULL;
    panda$collections$Array* $tmp1412;
    panda$collections$Array* $tmp1413;
    org$pandalanguage$pandac$ASTNode* t1415 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1416;
    org$pandalanguage$pandac$ASTNode* $tmp1417;
    org$pandalanguage$pandac$ASTNode* $tmp1419;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1427;
    org$pandalanguage$pandac$ASTNode* $tmp1429;
    org$pandalanguage$pandac$ASTNode* $tmp1430;
    org$pandalanguage$pandac$ASTNode* $tmp1431;
    org$pandalanguage$pandac$ASTNode* $tmp1433;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1438;
    org$pandalanguage$pandac$ASTNode* $tmp1441;
    panda$core$Bit shouldAccept1446;
    panda$core$Object* $tmp1447;
    org$pandalanguage$pandac$parser$Token$Kind $match$731_291449;
    org$pandalanguage$pandac$ASTNode* $tmp1464;
    org$pandalanguage$pandac$ASTNode* $tmp1465;
    org$pandalanguage$pandac$ASTNode* $tmp1466;
    panda$collections$ImmutableArray* $tmp1470;
    org$pandalanguage$pandac$ASTNode* $tmp1474;
    org$pandalanguage$pandac$ASTNode* $tmp1480;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    int $tmp1258;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1262 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1261 = $tmp1262;
        $tmp1260 = $tmp1261;
        result1259 = $tmp1260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
        if (((panda$core$Bit) { result1259 == NULL }).value) {
        {
            $tmp1264 = NULL;
            $returnValue1263 = $tmp1264;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
            $tmp1258 = 0;
            goto $l1256;
            $l1265:;
            return $returnValue1263;
        }
        }
        $l1267:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1270 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1269 = $tmp1270;
            {
                $match$626_131271 = token1269.kind;
                panda$core$Bit $tmp1272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$626_131271.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1272.value) {
                {
                    int $tmp1275;
                    {
                        panda$core$Bit$wrapper* $tmp1277;
                        $tmp1277 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1277->value = ((panda$core$Bit) { true });
                        $tmp1276 = ((panda$core$Object*) $tmp1277);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1276);
                        panda$core$Panda$unref$panda$core$Object($tmp1276);
                        panda$collections$Array* $tmp1281 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1281);
                        $tmp1280 = $tmp1281;
                        $tmp1279 = $tmp1280;
                        args1278 = $tmp1279;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1282, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1283 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1282);
                        if (((panda$core$Bit) { !$tmp1283.nonnull }).value) {
                        {
                            int $tmp1286;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1290 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1289 = $tmp1290;
                                $tmp1288 = $tmp1289;
                                expr1287 = $tmp1288;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1288));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1289));
                                if (((panda$core$Bit) { expr1287 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1292 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1291 = $tmp1292;
                                    panda$core$Panda$unref$panda$core$Object($tmp1291);
                                    $tmp1293 = NULL;
                                    $returnValue1263 = $tmp1293;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
                                    $tmp1286 = 0;
                                    goto $l1284;
                                    $l1294:;
                                    $tmp1275 = 0;
                                    goto $l1273;
                                    $l1295:;
                                    $tmp1258 = 1;
                                    goto $l1256;
                                    $l1296:;
                                    return $returnValue1263;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1278, ((panda$core$Object*) expr1287));
                                $l1298:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1301, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1302 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1301);
                                bool $tmp1300 = ((panda$core$Bit) { $tmp1302.nonnull }).value;
                                if (!$tmp1300) goto $l1299;
                                {
                                    {
                                        $tmp1303 = expr1287;
                                        org$pandalanguage$pandac$ASTNode* $tmp1306 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1305 = $tmp1306;
                                        $tmp1304 = $tmp1305;
                                        expr1287 = $tmp1304;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
                                    }
                                    if (((panda$core$Bit) { expr1287 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1308 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1307 = $tmp1308;
                                        panda$core$Panda$unref$panda$core$Object($tmp1307);
                                        $tmp1309 = NULL;
                                        $returnValue1263 = $tmp1309;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1309));
                                        $tmp1286 = 1;
                                        goto $l1284;
                                        $l1310:;
                                        $tmp1275 = 1;
                                        goto $l1273;
                                        $l1311:;
                                        $tmp1258 = 2;
                                        goto $l1256;
                                        $l1312:;
                                        return $returnValue1263;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1278, ((panda$core$Object*) expr1287));
                                }
                                goto $l1298;
                                $l1299:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1314, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1316 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1314, &$s1315);
                                if (((panda$core$Bit) { !$tmp1316.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1318 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1317 = $tmp1318;
                                    panda$core$Panda$unref$panda$core$Object($tmp1317);
                                    $tmp1319 = NULL;
                                    $returnValue1263 = $tmp1319;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1319));
                                    $tmp1286 = 2;
                                    goto $l1284;
                                    $l1320:;
                                    $tmp1275 = 2;
                                    goto $l1273;
                                    $l1321:;
                                    $tmp1258 = 3;
                                    goto $l1256;
                                    $l1322:;
                                    return $returnValue1263;
                                }
                                }
                            }
                            $tmp1286 = -1;
                            goto $l1284;
                            $l1284:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1287));
                            expr1287 = NULL;
                            switch ($tmp1286) {
                                case 1: goto $l1310;
                                case 2: goto $l1320;
                                case 0: goto $l1294;
                                case -1: goto $l1324;
                            }
                            $l1324:;
                        }
                        }
                        panda$core$Object* $tmp1326 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1325 = $tmp1326;
                        panda$core$Panda$unref$panda$core$Object($tmp1325);
                        {
                            $tmp1327 = result1259;
                            org$pandalanguage$pandac$ASTNode* $tmp1330 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1332 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1278);
                            $tmp1331 = $tmp1332;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1330, ((panda$core$Int64) { 8 }), token1269.position, result1259, $tmp1331);
                            $tmp1329 = $tmp1330;
                            $tmp1328 = $tmp1329;
                            result1259 = $tmp1328;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
                        }
                    }
                    $tmp1275 = -1;
                    goto $l1273;
                    $l1273:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1278));
                    args1278 = NULL;
                    switch ($tmp1275) {
                        case 0: goto $l1295;
                        case 2: goto $l1321;
                        case -1: goto $l1333;
                        case 1: goto $l1311;
                    }
                    $l1333:;
                }
                }
                else {
                panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$626_131271.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1334.value) {
                {
                    int $tmp1337;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1341 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1340 = $tmp1341;
                        $tmp1339 = $tmp1340;
                        arg1338 = $tmp1339;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
                        if (((panda$core$Bit) { arg1338 == NULL }).value) {
                        {
                            $tmp1342 = NULL;
                            $returnValue1263 = $tmp1342;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
                            $tmp1337 = 0;
                            goto $l1335;
                            $l1343:;
                            $tmp1258 = 4;
                            goto $l1256;
                            $l1344:;
                            return $returnValue1263;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1346, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1348 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1346, &$s1347);
                        if (((panda$core$Bit) { !$tmp1348.nonnull }).value) {
                        {
                            $tmp1349 = NULL;
                            $returnValue1263 = $tmp1349;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
                            $tmp1337 = 1;
                            goto $l1335;
                            $l1350:;
                            $tmp1258 = 5;
                            goto $l1256;
                            $l1351:;
                            return $returnValue1263;
                        }
                        }
                        {
                            $tmp1353 = result1259;
                            org$pandalanguage$pandac$ASTNode* $tmp1356 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1357, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1356, ((panda$core$Int64) { 4 }), token1269.position, result1259, $tmp1357, arg1338);
                            $tmp1355 = $tmp1356;
                            $tmp1354 = $tmp1355;
                            result1259 = $tmp1354;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1354));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1355));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                        }
                    }
                    $tmp1337 = -1;
                    goto $l1335;
                    $l1335:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1338));
                    arg1338 = NULL;
                    switch ($tmp1337) {
                        case -1: goto $l1358;
                        case 1: goto $l1350;
                        case 0: goto $l1343;
                    }
                    $l1358:;
                }
                }
                else {
                panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$626_131271.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1359.value) {
                {
                    int $tmp1362;
                    {
                        memset(&name1363, 0, sizeof(name1363));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1364, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1365 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1364);
                        if (((panda$core$Bit) { $tmp1365.nonnull }).value) {
                        {
                            {
                                $tmp1366 = name1363;
                                $tmp1367 = &$s1368;
                                name1363 = $tmp1367;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1369 = name1363;
                                panda$core$String* $tmp1372 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1371 = $tmp1372;
                                $tmp1370 = $tmp1371;
                                name1363 = $tmp1370;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1370));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
                            }
                            if (((panda$core$Bit) { name1363 == NULL }).value) {
                            {
                                $tmp1373 = NULL;
                                $returnValue1263 = $tmp1373;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
                                $tmp1362 = 0;
                                goto $l1360;
                                $l1374:;
                                $tmp1258 = 6;
                                goto $l1256;
                                $l1375:;
                                return $returnValue1263;
                            }
                            }
                        }
                        }
                        {
                            $tmp1377 = result1259;
                            org$pandalanguage$pandac$ASTNode* $tmp1380 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1380, ((panda$core$Int64) { 15 }), token1269.position, result1259, name1363);
                            $tmp1379 = $tmp1380;
                            $tmp1378 = $tmp1379;
                            result1259 = $tmp1378;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
                        }
                    }
                    $tmp1362 = -1;
                    goto $l1360;
                    $l1360:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1363));
                    switch ($tmp1362) {
                        case -1: goto $l1381;
                        case 0: goto $l1374;
                    }
                    $l1381:;
                }
                }
                else {
                panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$626_131271.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1382.value) {
                {
                    int $tmp1385;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1389 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1388 = $tmp1389;
                        $tmp1387 = $tmp1388;
                        target1386 = $tmp1387;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1387));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1388));
                        if (((panda$core$Bit) { target1386 == NULL }).value) {
                        {
                            $tmp1390 = NULL;
                            $returnValue1263 = $tmp1390;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
                            $tmp1385 = 0;
                            goto $l1383;
                            $l1391:;
                            $tmp1258 = 7;
                            goto $l1256;
                            $l1392:;
                            return $returnValue1263;
                        }
                        }
                        {
                            $tmp1394 = result1259;
                            org$pandalanguage$pandac$ASTNode* $tmp1397 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1398, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1397, ((panda$core$Int64) { 4 }), token1269.position, result1259, $tmp1398, target1386);
                            $tmp1396 = $tmp1397;
                            $tmp1395 = $tmp1396;
                            result1259 = $tmp1395;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1395));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
                        }
                    }
                    $tmp1385 = -1;
                    goto $l1383;
                    $l1383:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1386));
                    target1386 = NULL;
                    switch ($tmp1385) {
                        case 0: goto $l1391;
                        case -1: goto $l1399;
                    }
                    $l1399:;
                }
                }
                else {
                panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$626_131271.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1400.value) {
                {
                    int $tmp1403;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1269);
                        panda$core$String* $tmp1407 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1259);
                        $tmp1406 = $tmp1407;
                        $tmp1405 = $tmp1406;
                        name1404 = $tmp1405;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1405));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1406));
                        if (((panda$core$Bit) { name1404 != NULL }).value) {
                        {
                            int $tmp1410;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1414 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1414);
                                $tmp1413 = $tmp1414;
                                $tmp1412 = $tmp1413;
                                types1411 = $tmp1412;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1412));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1413));
                                org$pandalanguage$pandac$ASTNode* $tmp1418 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1417 = $tmp1418;
                                $tmp1416 = $tmp1417;
                                t1415 = $tmp1416;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1416));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
                                if (((panda$core$Bit) { t1415 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1419 = result1259;
                                    $returnValue1263 = $tmp1419;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                                    $tmp1410 = 0;
                                    goto $l1408;
                                    $l1420:;
                                    $tmp1403 = 0;
                                    goto $l1401;
                                    $l1421:;
                                    $tmp1258 = 8;
                                    goto $l1256;
                                    $l1422:;
                                    return $returnValue1263;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1411, ((panda$core$Object*) t1415));
                                $l1424:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1427, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1428 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1427);
                                bool $tmp1426 = ((panda$core$Bit) { $tmp1428.nonnull }).value;
                                if (!$tmp1426) goto $l1425;
                                {
                                    {
                                        $tmp1429 = t1415;
                                        org$pandalanguage$pandac$ASTNode* $tmp1432 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1431 = $tmp1432;
                                        $tmp1430 = $tmp1431;
                                        t1415 = $tmp1430;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
                                    }
                                    if (((panda$core$Bit) { t1415 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1433 = result1259;
                                        $returnValue1263 = $tmp1433;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1433));
                                        $tmp1410 = 1;
                                        goto $l1408;
                                        $l1434:;
                                        $tmp1403 = 1;
                                        goto $l1401;
                                        $l1435:;
                                        $tmp1258 = 9;
                                        goto $l1256;
                                        $l1436:;
                                        return $returnValue1263;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1411, ((panda$core$Object*) t1415));
                                }
                                goto $l1424;
                                $l1425:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1438, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1440 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1438, &$s1439);
                                if (((panda$core$Bit) { !$tmp1440.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1441 = result1259;
                                    $returnValue1263 = $tmp1441;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                                    $tmp1410 = 2;
                                    goto $l1408;
                                    $l1442:;
                                    $tmp1403 = 2;
                                    goto $l1401;
                                    $l1443:;
                                    $tmp1258 = 10;
                                    goto $l1256;
                                    $l1444:;
                                    return $returnValue1263;
                                }
                                }
                                memset(&shouldAccept1446, 0, sizeof(shouldAccept1446));
                                panda$core$Object* $tmp1448 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1447 = $tmp1448;
                                panda$core$Panda$unref$panda$core$Object($tmp1447);
                                if (((panda$core$Bit$wrapper*) $tmp1447)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1450 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$731_291449 = $tmp1450.kind;
                                        panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$731_291449.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1453 = $tmp1454.value;
                                        if ($tmp1453) goto $l1455;
                                        panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$731_291449.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1453 = $tmp1456.value;
                                        $l1455:;
                                        panda$core$Bit $tmp1457 = { $tmp1453 };
                                        bool $tmp1452 = $tmp1457.value;
                                        if ($tmp1452) goto $l1458;
                                        panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$731_291449.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1452 = $tmp1459.value;
                                        $l1458:;
                                        panda$core$Bit $tmp1460 = { $tmp1452 };
                                        bool $tmp1451 = $tmp1460.value;
                                        if ($tmp1451) goto $l1461;
                                        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$731_291449.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1451 = $tmp1462.value;
                                        $l1461:;
                                        panda$core$Bit $tmp1463 = { $tmp1451 };
                                        if ($tmp1463.value) {
                                        {
                                            shouldAccept1446 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1446 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1446 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1446.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1464 = result1259;
                                        org$pandalanguage$pandac$ASTNode* $tmp1467 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1469 = (($fn1468) result1259->$class->vtable[2])(result1259);
                                        panda$collections$ImmutableArray* $tmp1471 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1411);
                                        $tmp1470 = $tmp1471;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1467, ((panda$core$Int64) { 19 }), $tmp1469, name1404, $tmp1470);
                                        $tmp1466 = $tmp1467;
                                        $tmp1465 = $tmp1466;
                                        result1259 = $tmp1465;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
                                    }
                                    $tmp1410 = 3;
                                    goto $l1408;
                                    $l1472:;
                                    $tmp1403 = 3;
                                    goto $l1401;
                                    $l1473:;
                                    goto $l1267;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1474 = result1259;
                                    $returnValue1263 = $tmp1474;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1474));
                                    $tmp1410 = 4;
                                    goto $l1408;
                                    $l1475:;
                                    $tmp1403 = 4;
                                    goto $l1401;
                                    $l1476:;
                                    $tmp1258 = 11;
                                    goto $l1256;
                                    $l1477:;
                                    return $returnValue1263;
                                }
                                }
                            }
                            $tmp1410 = -1;
                            goto $l1408;
                            $l1408:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1411));
                            types1411 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1415));
                            t1415 = NULL;
                            switch ($tmp1410) {
                                case 4: goto $l1475;
                                case 0: goto $l1420;
                                case 2: goto $l1442;
                                case -1: goto $l1479;
                                case 1: goto $l1434;
                                case 3: goto $l1472;
                            }
                            $l1479:;
                        }
                        }
                        $tmp1480 = result1259;
                        $returnValue1263 = $tmp1480;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
                        $tmp1403 = 5;
                        goto $l1401;
                        $l1481:;
                        $tmp1258 = 12;
                        goto $l1256;
                        $l1482:;
                        return $returnValue1263;
                    }
                    $l1401:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1404));
                    name1404 = NULL;
                    switch ($tmp1403) {
                        case 4: goto $l1476;
                        case 5: goto $l1481;
                        case 1: goto $l1435;
                        case 0: goto $l1421;
                        case 3: goto $l1473;
                        case 2: goto $l1443;
                    }
                    $l1484:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1269);
                    $tmp1485 = result1259;
                    $returnValue1263 = $tmp1485;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
                    $tmp1258 = 13;
                    goto $l1256;
                    $l1486:;
                    return $returnValue1263;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1268:;
    }
    $tmp1258 = -1;
    goto $l1256;
    $l1256:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1259));
    result1259 = NULL;
    switch ($tmp1258) {
        case 1: goto $l1296;
        case 12: goto $l1482;
        case 8: goto $l1422;
        case 13: goto $l1486;
        case 3: goto $l1322;
        case 10: goto $l1444;
        case 11: goto $l1477;
        case 5: goto $l1351;
        case 6: goto $l1375;
        case 4: goto $l1344;
        case 9: goto $l1436;
        case -1: goto $l1488;
        case 0: goto $l1265;
        case 7: goto $l1392;
        case 2: goto $l1312;
    }
    $l1488:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1492 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1493;
    org$pandalanguage$pandac$ASTNode* $tmp1494;
    org$pandalanguage$pandac$ASTNode* $returnValue1496;
    org$pandalanguage$pandac$ASTNode* $tmp1497;
    org$pandalanguage$pandac$parser$Token$nullable op1505;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1506;
    org$pandalanguage$pandac$ASTNode* next1509 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1510;
    org$pandalanguage$pandac$ASTNode* $tmp1511;
    org$pandalanguage$pandac$ASTNode* $tmp1513;
    org$pandalanguage$pandac$ASTNode* $tmp1517;
    org$pandalanguage$pandac$ASTNode* $tmp1518;
    org$pandalanguage$pandac$ASTNode* $tmp1519;
    org$pandalanguage$pandac$ASTNode* $tmp1522;
    int $tmp1491;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1495 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1494 = $tmp1495;
        $tmp1493 = $tmp1494;
        result1492 = $tmp1493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1494));
        if (((panda$core$Bit) { result1492 == NULL }).value) {
        {
            $tmp1497 = NULL;
            $returnValue1496 = $tmp1497;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
            $tmp1491 = 0;
            goto $l1489;
            $l1498:;
            return $returnValue1496;
        }
        }
        $l1500:;
        while (true) {
        {
            int $tmp1504;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1506, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1507 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1506);
                op1505 = $tmp1507;
                if (((panda$core$Bit) { !op1505.nonnull }).value) {
                {
                    $tmp1504 = 0;
                    goto $l1502;
                    $l1508:;
                    goto $l1501;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1512 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1511 = $tmp1512;
                $tmp1510 = $tmp1511;
                next1509 = $tmp1510;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1510));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
                if (((panda$core$Bit) { next1509 == NULL }).value) {
                {
                    $tmp1513 = NULL;
                    $returnValue1496 = $tmp1513;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                    $tmp1504 = 1;
                    goto $l1502;
                    $l1514:;
                    $tmp1491 = 1;
                    goto $l1489;
                    $l1515:;
                    return $returnValue1496;
                }
                }
                {
                    $tmp1517 = result1492;
                    org$pandalanguage$pandac$ASTNode* $tmp1520 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1520, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1505.value).position, result1492, ((org$pandalanguage$pandac$parser$Token) op1505.value).kind, next1509);
                    $tmp1519 = $tmp1520;
                    $tmp1518 = $tmp1519;
                    result1492 = $tmp1518;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1518));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1519));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
                }
            }
            $tmp1504 = -1;
            goto $l1502;
            $l1502:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1509));
            next1509 = NULL;
            switch ($tmp1504) {
                case -1: goto $l1521;
                case 1: goto $l1514;
                case 0: goto $l1508;
            }
            $l1521:;
        }
        }
        $l1501:;
        $tmp1522 = result1492;
        $returnValue1496 = $tmp1522;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1522));
        $tmp1491 = 2;
        goto $l1489;
        $l1523:;
        return $returnValue1496;
    }
    $l1489:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1492));
    result1492 = NULL;
    switch ($tmp1491) {
        case 1: goto $l1515;
        case 2: goto $l1523;
        case 0: goto $l1498;
    }
    $l1525:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1526;
    org$pandalanguage$pandac$parser$Token$Kind $match$787_91528;
    org$pandalanguage$pandac$ASTNode* base1541 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1542;
    org$pandalanguage$pandac$ASTNode* $tmp1543;
    org$pandalanguage$pandac$ASTNode* $returnValue1545;
    org$pandalanguage$pandac$ASTNode* $tmp1546;
    org$pandalanguage$pandac$ASTNode* $tmp1549;
    org$pandalanguage$pandac$ASTNode* $tmp1550;
    org$pandalanguage$pandac$ASTNode* $tmp1555;
    org$pandalanguage$pandac$ASTNode* $tmp1556;
    org$pandalanguage$pandac$parser$Token $tmp1527 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1526 = $tmp1527;
    {
        $match$787_91528 = op1526.kind;
        panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$787_91528.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1530 = $tmp1531.value;
        if ($tmp1530) goto $l1532;
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$787_91528.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1530 = $tmp1533.value;
        $l1532:;
        panda$core$Bit $tmp1534 = { $tmp1530 };
        bool $tmp1529 = $tmp1534.value;
        if ($tmp1529) goto $l1535;
        panda$core$Bit $tmp1536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$787_91528.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1529 = $tmp1536.value;
        $l1535:;
        panda$core$Bit $tmp1537 = { $tmp1529 };
        if ($tmp1537.value) {
        {
            int $tmp1540;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1544 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1543 = $tmp1544;
                $tmp1542 = $tmp1543;
                base1541 = $tmp1542;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1542));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
                if (((panda$core$Bit) { base1541 == NULL }).value) {
                {
                    $tmp1546 = NULL;
                    $returnValue1545 = $tmp1546;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1546));
                    $tmp1540 = 0;
                    goto $l1538;
                    $l1547:;
                    return $returnValue1545;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1551 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1551, ((panda$core$Int64) { 32 }), op1526.position, op1526.kind, base1541);
                $tmp1550 = $tmp1551;
                $tmp1549 = $tmp1550;
                $returnValue1545 = $tmp1549;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
                $tmp1540 = 1;
                goto $l1538;
                $l1552:;
                return $returnValue1545;
            }
            $l1538:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1541));
            base1541 = NULL;
            switch ($tmp1540) {
                case 0: goto $l1547;
                case 1: goto $l1552;
            }
            $l1554:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1526);
            org$pandalanguage$pandac$ASTNode* $tmp1557 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1556 = $tmp1557;
            $tmp1555 = $tmp1556;
            $returnValue1545 = $tmp1555;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
            return $returnValue1545;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1562 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1563;
    org$pandalanguage$pandac$ASTNode* $tmp1564;
    org$pandalanguage$pandac$ASTNode* $returnValue1566;
    org$pandalanguage$pandac$ASTNode* $tmp1567;
    org$pandalanguage$pandac$parser$Token op1572;
    org$pandalanguage$pandac$parser$Token$Kind $match$813_131574;
    org$pandalanguage$pandac$ASTNode* next1603 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1604;
    org$pandalanguage$pandac$ASTNode* $tmp1605;
    org$pandalanguage$pandac$ASTNode* $tmp1607;
    org$pandalanguage$pandac$ASTNode* $tmp1611;
    org$pandalanguage$pandac$ASTNode* $tmp1612;
    org$pandalanguage$pandac$ASTNode* $tmp1613;
    org$pandalanguage$pandac$parser$Token nextToken1617;
    org$pandalanguage$pandac$ASTNode* next1623 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1624;
    org$pandalanguage$pandac$ASTNode* $tmp1625;
    org$pandalanguage$pandac$ASTNode* $tmp1627;
    org$pandalanguage$pandac$ASTNode* $tmp1631;
    org$pandalanguage$pandac$ASTNode* $tmp1632;
    org$pandalanguage$pandac$ASTNode* $tmp1633;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1635;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    org$pandalanguage$pandac$ASTNode* $tmp1640;
    int $tmp1561;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1565 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1564 = $tmp1565;
        $tmp1563 = $tmp1564;
        result1562 = $tmp1563;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1564));
        if (((panda$core$Bit) { result1562 == NULL }).value) {
        {
            $tmp1567 = NULL;
            $returnValue1566 = $tmp1567;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
            $tmp1561 = 0;
            goto $l1559;
            $l1568:;
            return $returnValue1566;
        }
        }
        $l1570:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1573 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1572 = $tmp1573;
            {
                $match$813_131574 = op1572.kind;
                panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1580 = $tmp1581.value;
                if ($tmp1580) goto $l1582;
                panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1580 = $tmp1583.value;
                $l1582:;
                panda$core$Bit $tmp1584 = { $tmp1580 };
                bool $tmp1579 = $tmp1584.value;
                if ($tmp1579) goto $l1585;
                panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1579 = $tmp1586.value;
                $l1585:;
                panda$core$Bit $tmp1587 = { $tmp1579 };
                bool $tmp1578 = $tmp1587.value;
                if ($tmp1578) goto $l1588;
                panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1578 = $tmp1589.value;
                $l1588:;
                panda$core$Bit $tmp1590 = { $tmp1578 };
                bool $tmp1577 = $tmp1590.value;
                if ($tmp1577) goto $l1591;
                panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1577 = $tmp1592.value;
                $l1591:;
                panda$core$Bit $tmp1593 = { $tmp1577 };
                bool $tmp1576 = $tmp1593.value;
                if ($tmp1576) goto $l1594;
                panda$core$Bit $tmp1595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1576 = $tmp1595.value;
                $l1594:;
                panda$core$Bit $tmp1596 = { $tmp1576 };
                bool $tmp1575 = $tmp1596.value;
                if ($tmp1575) goto $l1597;
                panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1575 = $tmp1598.value;
                $l1597:;
                panda$core$Bit $tmp1599 = { $tmp1575 };
                if ($tmp1599.value) {
                {
                    int $tmp1602;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1606 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1605 = $tmp1606;
                        $tmp1604 = $tmp1605;
                        next1603 = $tmp1604;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1604));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
                        if (((panda$core$Bit) { next1603 == NULL }).value) {
                        {
                            $tmp1607 = NULL;
                            $returnValue1566 = $tmp1607;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
                            $tmp1602 = 0;
                            goto $l1600;
                            $l1608:;
                            $tmp1561 = 1;
                            goto $l1559;
                            $l1609:;
                            return $returnValue1566;
                        }
                        }
                        {
                            $tmp1611 = result1562;
                            org$pandalanguage$pandac$ASTNode* $tmp1614 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1614, ((panda$core$Int64) { 4 }), op1572.position, result1562, op1572.kind, next1603);
                            $tmp1613 = $tmp1614;
                            $tmp1612 = $tmp1613;
                            result1562 = $tmp1612;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1612));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1613));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1611));
                        }
                    }
                    $tmp1602 = -1;
                    goto $l1600;
                    $l1600:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1603));
                    next1603 = NULL;
                    switch ($tmp1602) {
                        case -1: goto $l1615;
                        case 0: goto $l1608;
                    }
                    $l1615:;
                }
                }
                else {
                panda$core$Bit $tmp1616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$813_131574.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1616.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp1618 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken1617 = $tmp1618;
                    panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1617.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp1619.value) {
                    {
                        int $tmp1622;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1626 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1625 = $tmp1626;
                            $tmp1624 = $tmp1625;
                            next1623 = $tmp1624;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1624));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                            if (((panda$core$Bit) { next1623 == NULL }).value) {
                            {
                                $tmp1627 = NULL;
                                $returnValue1566 = $tmp1627;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
                                $tmp1622 = 0;
                                goto $l1620;
                                $l1628:;
                                $tmp1561 = 2;
                                goto $l1559;
                                $l1629:;
                                return $returnValue1566;
                            }
                            }
                            {
                                $tmp1631 = result1562;
                                org$pandalanguage$pandac$ASTNode* $tmp1634 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1635, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1634, ((panda$core$Int64) { 4 }), op1572.position, result1562, $tmp1635, next1623);
                                $tmp1633 = $tmp1634;
                                $tmp1632 = $tmp1633;
                                result1562 = $tmp1632;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1632));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
                            }
                        }
                        $tmp1622 = -1;
                        goto $l1620;
                        $l1620:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1623));
                        next1623 = NULL;
                        switch ($tmp1622) {
                            case 0: goto $l1628;
                            case -1: goto $l1636;
                        }
                        $l1636:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1617);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1572);
                        $tmp1637 = result1562;
                        $returnValue1566 = $tmp1637;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1637));
                        $tmp1561 = 3;
                        goto $l1559;
                        $l1638:;
                        return $returnValue1566;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1572);
                    $tmp1640 = result1562;
                    $returnValue1566 = $tmp1640;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1640));
                    $tmp1561 = 4;
                    goto $l1559;
                    $l1641:;
                    return $returnValue1566;
                }
                }
                }
            }
        }
        }
        $l1571:;
    }
    $tmp1561 = -1;
    goto $l1559;
    $l1559:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1562));
    result1562 = NULL;
    switch ($tmp1561) {
        case 1: goto $l1609;
        case 3: goto $l1638;
        case -1: goto $l1643;
        case 4: goto $l1641;
        case 0: goto $l1568;
        case 2: goto $l1629;
    }
    $l1643:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1647 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1648;
    org$pandalanguage$pandac$ASTNode* $tmp1649;
    org$pandalanguage$pandac$ASTNode* $returnValue1651;
    org$pandalanguage$pandac$ASTNode* $tmp1652;
    org$pandalanguage$pandac$parser$Token op1657;
    org$pandalanguage$pandac$parser$Token$Kind $match$854_131659;
    org$pandalanguage$pandac$ASTNode* next1672 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1673;
    org$pandalanguage$pandac$ASTNode* $tmp1674;
    org$pandalanguage$pandac$ASTNode* $tmp1676;
    org$pandalanguage$pandac$ASTNode* $tmp1680;
    org$pandalanguage$pandac$ASTNode* $tmp1681;
    org$pandalanguage$pandac$ASTNode* $tmp1682;
    org$pandalanguage$pandac$ASTNode* $tmp1685;
    int $tmp1646;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1650 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1649 = $tmp1650;
        $tmp1648 = $tmp1649;
        result1647 = $tmp1648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1649));
        if (((panda$core$Bit) { result1647 == NULL }).value) {
        {
            $tmp1652 = NULL;
            $returnValue1651 = $tmp1652;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1652));
            $tmp1646 = 0;
            goto $l1644;
            $l1653:;
            return $returnValue1651;
        }
        }
        $l1655:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1658 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1657 = $tmp1658;
            {
                $match$854_131659 = op1657.kind;
                panda$core$Bit $tmp1662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131659.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp1661 = $tmp1662.value;
                if ($tmp1661) goto $l1663;
                panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131659.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp1661 = $tmp1664.value;
                $l1663:;
                panda$core$Bit $tmp1665 = { $tmp1661 };
                bool $tmp1660 = $tmp1665.value;
                if ($tmp1660) goto $l1666;
                panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$854_131659.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp1660 = $tmp1667.value;
                $l1666:;
                panda$core$Bit $tmp1668 = { $tmp1660 };
                if ($tmp1668.value) {
                {
                    int $tmp1671;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1675 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1674 = $tmp1675;
                        $tmp1673 = $tmp1674;
                        next1672 = $tmp1673;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1673));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1674));
                        if (((panda$core$Bit) { next1672 == NULL }).value) {
                        {
                            $tmp1676 = NULL;
                            $returnValue1651 = $tmp1676;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1676));
                            $tmp1671 = 0;
                            goto $l1669;
                            $l1677:;
                            $tmp1646 = 1;
                            goto $l1644;
                            $l1678:;
                            return $returnValue1651;
                        }
                        }
                        {
                            $tmp1680 = result1647;
                            org$pandalanguage$pandac$ASTNode* $tmp1683 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1683, ((panda$core$Int64) { 4 }), op1657.position, result1647, op1657.kind, next1672);
                            $tmp1682 = $tmp1683;
                            $tmp1681 = $tmp1682;
                            result1647 = $tmp1681;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1681));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1682));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1680));
                        }
                    }
                    $tmp1671 = -1;
                    goto $l1669;
                    $l1669:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1672));
                    next1672 = NULL;
                    switch ($tmp1671) {
                        case 0: goto $l1677;
                        case -1: goto $l1684;
                    }
                    $l1684:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1657);
                    $tmp1685 = result1647;
                    $returnValue1651 = $tmp1685;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1685));
                    $tmp1646 = 2;
                    goto $l1644;
                    $l1686:;
                    return $returnValue1651;
                }
                }
            }
        }
        }
        $l1656:;
    }
    $tmp1646 = -1;
    goto $l1644;
    $l1644:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1647));
    result1647 = NULL;
    switch ($tmp1646) {
        case 1: goto $l1678;
        case 2: goto $l1686;
        case 0: goto $l1653;
        case -1: goto $l1688;
    }
    $l1688:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1692 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$874_91693;
    org$pandalanguage$pandac$ASTNode* $tmp1700;
    org$pandalanguage$pandac$ASTNode* $tmp1701;
    org$pandalanguage$pandac$ASTNode* $tmp1702;
    org$pandalanguage$pandac$ASTNode* $tmp1703;
    org$pandalanguage$pandac$ASTNode* $tmp1704;
    org$pandalanguage$pandac$ASTNode* $returnValue1706;
    org$pandalanguage$pandac$ASTNode* $tmp1707;
    org$pandalanguage$pandac$parser$Token op1710;
    org$pandalanguage$pandac$parser$Token$Kind $match$884_91712;
    org$pandalanguage$pandac$parser$Token next1721;
    org$pandalanguage$pandac$ASTNode* right1723 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1733;
    org$pandalanguage$pandac$ASTNode* $tmp1734;
    org$pandalanguage$pandac$ASTNode* $tmp1735;
    org$pandalanguage$pandac$ASTNode* $tmp1737;
    org$pandalanguage$pandac$ASTNode* $tmp1741;
    org$pandalanguage$pandac$ASTNode* $tmp1742;
    org$pandalanguage$pandac$ASTNode* step1743 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1744;
    org$pandalanguage$pandac$ASTNode* $tmp1746;
    org$pandalanguage$pandac$ASTNode* $tmp1747;
    org$pandalanguage$pandac$ASTNode* $tmp1748;
    org$pandalanguage$pandac$ASTNode* $tmp1750;
    org$pandalanguage$pandac$ASTNode* $tmp1754;
    org$pandalanguage$pandac$ASTNode* $tmp1755;
    org$pandalanguage$pandac$ASTNode* $tmp1756;
    org$pandalanguage$pandac$ASTNode* $tmp1757;
    org$pandalanguage$pandac$ASTNode* $tmp1764;
    int $tmp1691;
    {
        memset(&result1692, 0, sizeof(result1692));
        {
            org$pandalanguage$pandac$parser$Token $tmp1694 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$874_91693 = $tmp1694.kind;
            panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$874_91693.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1695 = $tmp1696.value;
            if ($tmp1695) goto $l1697;
            panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$874_91693.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1695 = $tmp1698.value;
            $l1697:;
            panda$core$Bit $tmp1699 = { $tmp1695 };
            if ($tmp1699.value) {
            {
                {
                    $tmp1700 = result1692;
                    $tmp1701 = NULL;
                    result1692 = $tmp1701;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1700));
                }
            }
            }
            else {
            {
                {
                    $tmp1702 = result1692;
                    org$pandalanguage$pandac$ASTNode* $tmp1705 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1704 = $tmp1705;
                    $tmp1703 = $tmp1704;
                    result1692 = $tmp1703;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1703));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
                }
                if (((panda$core$Bit) { result1692 == NULL }).value) {
                {
                    $tmp1707 = NULL;
                    $returnValue1706 = $tmp1707;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1707));
                    $tmp1691 = 0;
                    goto $l1689;
                    $l1708:;
                    return $returnValue1706;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp1711 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1710 = $tmp1711;
        {
            $match$884_91712 = op1710.kind;
            panda$core$Bit $tmp1714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$884_91712.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1713 = $tmp1714.value;
            if ($tmp1713) goto $l1715;
            panda$core$Bit $tmp1716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$884_91712.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1713 = $tmp1716.value;
            $l1715:;
            panda$core$Bit $tmp1717 = { $tmp1713 };
            if ($tmp1717.value) {
            {
                int $tmp1720;
                {
                    org$pandalanguage$pandac$parser$Token $tmp1722 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next1721 = $tmp1722;
                    memset(&right1723, 0, sizeof(right1723));
                    panda$core$Bit $tmp1726 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1721.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp1725 = $tmp1726.value;
                    if (!$tmp1725) goto $l1727;
                    panda$core$Bit $tmp1728 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1721.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp1725 = $tmp1728.value;
                    $l1727:;
                    panda$core$Bit $tmp1729 = { $tmp1725 };
                    bool $tmp1724 = $tmp1729.value;
                    if (!$tmp1724) goto $l1730;
                    panda$core$Bit $tmp1731 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1721.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp1724 = $tmp1731.value;
                    $l1730:;
                    panda$core$Bit $tmp1732 = { $tmp1724 };
                    if ($tmp1732.value) {
                    {
                        {
                            $tmp1733 = right1723;
                            org$pandalanguage$pandac$ASTNode* $tmp1736 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1735 = $tmp1736;
                            $tmp1734 = $tmp1735;
                            right1723 = $tmp1734;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1733));
                        }
                        if (((panda$core$Bit) { right1723 == NULL }).value) {
                        {
                            $tmp1737 = NULL;
                            $returnValue1706 = $tmp1737;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
                            $tmp1720 = 0;
                            goto $l1718;
                            $l1738:;
                            $tmp1691 = 1;
                            goto $l1689;
                            $l1739:;
                            return $returnValue1706;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1741 = right1723;
                            $tmp1742 = NULL;
                            right1723 = $tmp1742;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1742));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1741));
                        }
                    }
                    }
                    memset(&step1743, 0, sizeof(step1743));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1744, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1745 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1744);
                    if (((panda$core$Bit) { $tmp1745.nonnull }).value) {
                    {
                        {
                            $tmp1746 = step1743;
                            org$pandalanguage$pandac$ASTNode* $tmp1749 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1748 = $tmp1749;
                            $tmp1747 = $tmp1748;
                            step1743 = $tmp1747;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1746));
                        }
                        if (((panda$core$Bit) { step1743 == NULL }).value) {
                        {
                            $tmp1750 = NULL;
                            $returnValue1706 = $tmp1750;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
                            $tmp1720 = 1;
                            goto $l1718;
                            $l1751:;
                            $tmp1691 = 2;
                            goto $l1689;
                            $l1752:;
                            return $returnValue1706;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1754 = step1743;
                            $tmp1755 = NULL;
                            step1743 = $tmp1755;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1755));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1758 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op1710.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp1758, ((panda$core$Int64) { 33 }), op1710.position, result1692, right1723, $tmp1759, step1743);
                    $tmp1757 = $tmp1758;
                    $tmp1756 = $tmp1757;
                    $returnValue1706 = $tmp1756;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
                    $tmp1720 = 2;
                    goto $l1718;
                    $l1760:;
                    $tmp1691 = 3;
                    goto $l1689;
                    $l1761:;
                    return $returnValue1706;
                }
                $l1718:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1723));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1743));
                switch ($tmp1720) {
                    case 2: goto $l1760;
                    case 0: goto $l1738;
                    case 1: goto $l1751;
                }
                $l1763:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1710);
                $tmp1764 = result1692;
                $returnValue1706 = $tmp1764;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1764));
                $tmp1691 = 4;
                goto $l1689;
                $l1765:;
                return $returnValue1706;
            }
            }
        }
    }
    $tmp1691 = -1;
    goto $l1689;
    $l1689:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1692));
    switch ($tmp1691) {
        case 4: goto $l1765;
        case 0: goto $l1708;
        case 3: goto $l1761;
        case 1: goto $l1739;
        case -1: goto $l1767;
        case 2: goto $l1752;
    }
    $l1767:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1771 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1772;
    org$pandalanguage$pandac$ASTNode* $tmp1773;
    org$pandalanguage$pandac$ASTNode* $returnValue1775;
    org$pandalanguage$pandac$ASTNode* $tmp1776;
    org$pandalanguage$pandac$parser$Token op1781;
    org$pandalanguage$pandac$parser$Token$Kind $match$927_131783;
    org$pandalanguage$pandac$ASTNode* next1816 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1817;
    org$pandalanguage$pandac$ASTNode* $tmp1818;
    org$pandalanguage$pandac$ASTNode* $tmp1820;
    org$pandalanguage$pandac$ASTNode* $tmp1824;
    org$pandalanguage$pandac$ASTNode* $tmp1825;
    org$pandalanguage$pandac$ASTNode* $tmp1826;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    int $tmp1770;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1774 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1773 = $tmp1774;
        $tmp1772 = $tmp1773;
        result1771 = $tmp1772;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1772));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
        if (((panda$core$Bit) { result1771 == NULL }).value) {
        {
            $tmp1776 = NULL;
            $returnValue1775 = $tmp1776;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1776));
            $tmp1770 = 0;
            goto $l1768;
            $l1777:;
            return $returnValue1775;
        }
        }
        $l1779:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1782 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1781 = $tmp1782;
            {
                $match$927_131783 = op1781.kind;
                panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp1790 = $tmp1791.value;
                if ($tmp1790) goto $l1792;
                panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp1790 = $tmp1793.value;
                $l1792:;
                panda$core$Bit $tmp1794 = { $tmp1790 };
                bool $tmp1789 = $tmp1794.value;
                if ($tmp1789) goto $l1795;
                panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp1789 = $tmp1796.value;
                $l1795:;
                panda$core$Bit $tmp1797 = { $tmp1789 };
                bool $tmp1788 = $tmp1797.value;
                if ($tmp1788) goto $l1798;
                panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp1788 = $tmp1799.value;
                $l1798:;
                panda$core$Bit $tmp1800 = { $tmp1788 };
                bool $tmp1787 = $tmp1800.value;
                if ($tmp1787) goto $l1801;
                panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp1787 = $tmp1802.value;
                $l1801:;
                panda$core$Bit $tmp1803 = { $tmp1787 };
                bool $tmp1786 = $tmp1803.value;
                if ($tmp1786) goto $l1804;
                panda$core$Bit $tmp1805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp1786 = $tmp1805.value;
                $l1804:;
                panda$core$Bit $tmp1806 = { $tmp1786 };
                bool $tmp1785 = $tmp1806.value;
                if ($tmp1785) goto $l1807;
                panda$core$Bit $tmp1808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp1785 = $tmp1808.value;
                $l1807:;
                panda$core$Bit $tmp1809 = { $tmp1785 };
                bool $tmp1784 = $tmp1809.value;
                if ($tmp1784) goto $l1810;
                panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$927_131783.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp1784 = $tmp1811.value;
                $l1810:;
                panda$core$Bit $tmp1812 = { $tmp1784 };
                if ($tmp1812.value) {
                {
                    int $tmp1815;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1819 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1818 = $tmp1819;
                        $tmp1817 = $tmp1818;
                        next1816 = $tmp1817;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1817));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                        if (((panda$core$Bit) { next1816 == NULL }).value) {
                        {
                            $tmp1820 = NULL;
                            $returnValue1775 = $tmp1820;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1820));
                            $tmp1815 = 0;
                            goto $l1813;
                            $l1821:;
                            $tmp1770 = 1;
                            goto $l1768;
                            $l1822:;
                            return $returnValue1775;
                        }
                        }
                        {
                            $tmp1824 = result1771;
                            org$pandalanguage$pandac$ASTNode* $tmp1827 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1827, ((panda$core$Int64) { 4 }), op1781.position, result1771, op1781.kind, next1816);
                            $tmp1826 = $tmp1827;
                            $tmp1825 = $tmp1826;
                            result1771 = $tmp1825;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1825));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
                        }
                    }
                    $tmp1815 = -1;
                    goto $l1813;
                    $l1813:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1816));
                    next1816 = NULL;
                    switch ($tmp1815) {
                        case -1: goto $l1828;
                        case 0: goto $l1821;
                    }
                    $l1828:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1781);
                    $tmp1829 = result1771;
                    $returnValue1775 = $tmp1829;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                    $tmp1770 = 2;
                    goto $l1768;
                    $l1830:;
                    return $returnValue1775;
                }
                }
            }
        }
        }
        $l1780:;
    }
    $tmp1770 = -1;
    goto $l1768;
    $l1768:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1771));
    result1771 = NULL;
    switch ($tmp1770) {
        case 2: goto $l1830;
        case -1: goto $l1832;
        case 1: goto $l1822;
        case 0: goto $l1777;
    }
    $l1832:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1836 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1837;
    org$pandalanguage$pandac$ASTNode* $tmp1838;
    org$pandalanguage$pandac$ASTNode* $returnValue1840;
    org$pandalanguage$pandac$ASTNode* $tmp1841;
    org$pandalanguage$pandac$parser$Token op1846;
    org$pandalanguage$pandac$parser$Token$Kind $match$958_131848;
    org$pandalanguage$pandac$ASTNode* next1857 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1858;
    org$pandalanguage$pandac$ASTNode* $tmp1859;
    org$pandalanguage$pandac$ASTNode* $tmp1861;
    org$pandalanguage$pandac$ASTNode* $tmp1865;
    org$pandalanguage$pandac$ASTNode* $tmp1866;
    org$pandalanguage$pandac$ASTNode* $tmp1867;
    org$pandalanguage$pandac$ASTNode* $tmp1870;
    int $tmp1835;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1839 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1838 = $tmp1839;
        $tmp1837 = $tmp1838;
        result1836 = $tmp1837;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1837));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1838));
        if (((panda$core$Bit) { result1836 == NULL }).value) {
        {
            $tmp1841 = NULL;
            $returnValue1840 = $tmp1841;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
            $tmp1835 = 0;
            goto $l1833;
            $l1842:;
            return $returnValue1840;
        }
        }
        $l1844:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1847 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1846 = $tmp1847;
            {
                $match$958_131848 = op1846.kind;
                panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$958_131848.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp1849 = $tmp1850.value;
                if ($tmp1849) goto $l1851;
                panda$core$Bit $tmp1852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$958_131848.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp1849 = $tmp1852.value;
                $l1851:;
                panda$core$Bit $tmp1853 = { $tmp1849 };
                if ($tmp1853.value) {
                {
                    int $tmp1856;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1860 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1859 = $tmp1860;
                        $tmp1858 = $tmp1859;
                        next1857 = $tmp1858;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1858));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                        if (((panda$core$Bit) { next1857 == NULL }).value) {
                        {
                            $tmp1861 = NULL;
                            $returnValue1840 = $tmp1861;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1861));
                            $tmp1856 = 0;
                            goto $l1854;
                            $l1862:;
                            $tmp1835 = 1;
                            goto $l1833;
                            $l1863:;
                            return $returnValue1840;
                        }
                        }
                        {
                            $tmp1865 = result1836;
                            org$pandalanguage$pandac$ASTNode* $tmp1868 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1868, ((panda$core$Int64) { 4 }), op1846.position, result1836, op1846.kind, next1857);
                            $tmp1867 = $tmp1868;
                            $tmp1866 = $tmp1867;
                            result1836 = $tmp1866;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1866));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1867));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
                        }
                    }
                    $tmp1856 = -1;
                    goto $l1854;
                    $l1854:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1857));
                    next1857 = NULL;
                    switch ($tmp1856) {
                        case 0: goto $l1862;
                        case -1: goto $l1869;
                    }
                    $l1869:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1846);
                    $tmp1870 = result1836;
                    $returnValue1840 = $tmp1870;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1870));
                    $tmp1835 = 2;
                    goto $l1833;
                    $l1871:;
                    return $returnValue1840;
                }
                }
            }
        }
        }
        $l1845:;
    }
    $tmp1835 = -1;
    goto $l1833;
    $l1833:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1836));
    result1836 = NULL;
    switch ($tmp1835) {
        case -1: goto $l1873;
        case 1: goto $l1863;
        case 0: goto $l1842;
        case 2: goto $l1871;
    }
    $l1873:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1877 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1878;
    org$pandalanguage$pandac$ASTNode* $tmp1879;
    org$pandalanguage$pandac$ASTNode* $returnValue1881;
    org$pandalanguage$pandac$ASTNode* $tmp1882;
    org$pandalanguage$pandac$parser$Token$nullable op1890;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1891;
    org$pandalanguage$pandac$ASTNode* next1894 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1895;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    org$pandalanguage$pandac$ASTNode* $tmp1898;
    org$pandalanguage$pandac$ASTNode* $tmp1902;
    org$pandalanguage$pandac$ASTNode* $tmp1903;
    org$pandalanguage$pandac$ASTNode* $tmp1904;
    org$pandalanguage$pandac$ASTNode* $tmp1907;
    int $tmp1876;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1880 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1879 = $tmp1880;
        $tmp1878 = $tmp1879;
        result1877 = $tmp1878;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1878));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
        if (((panda$core$Bit) { result1877 == NULL }).value) {
        {
            $tmp1882 = NULL;
            $returnValue1881 = $tmp1882;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1882));
            $tmp1876 = 0;
            goto $l1874;
            $l1883:;
            return $returnValue1881;
        }
        }
        $l1885:;
        while (true) {
        {
            int $tmp1889;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1891, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1892 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1891);
                op1890 = $tmp1892;
                if (((panda$core$Bit) { !op1890.nonnull }).value) {
                {
                    $tmp1889 = 0;
                    goto $l1887;
                    $l1893:;
                    goto $l1886;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1897 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1896 = $tmp1897;
                $tmp1895 = $tmp1896;
                next1894 = $tmp1895;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1895));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1896));
                if (((panda$core$Bit) { next1894 == NULL }).value) {
                {
                    $tmp1898 = NULL;
                    $returnValue1881 = $tmp1898;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1898));
                    $tmp1889 = 1;
                    goto $l1887;
                    $l1899:;
                    $tmp1876 = 1;
                    goto $l1874;
                    $l1900:;
                    return $returnValue1881;
                }
                }
                {
                    $tmp1902 = result1877;
                    org$pandalanguage$pandac$ASTNode* $tmp1905 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1905, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1890.value).position, result1877, ((org$pandalanguage$pandac$parser$Token) op1890.value).kind, next1894);
                    $tmp1904 = $tmp1905;
                    $tmp1903 = $tmp1904;
                    result1877 = $tmp1903;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1903));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1904));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1902));
                }
            }
            $tmp1889 = -1;
            goto $l1887;
            $l1887:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1894));
            next1894 = NULL;
            switch ($tmp1889) {
                case -1: goto $l1906;
                case 1: goto $l1899;
                case 0: goto $l1893;
            }
            $l1906:;
        }
        }
        $l1886:;
        $tmp1907 = result1877;
        $returnValue1881 = $tmp1907;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
        $tmp1876 = 2;
        goto $l1874;
        $l1908:;
        return $returnValue1881;
    }
    $l1874:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1877));
    result1877 = NULL;
    switch ($tmp1876) {
        case 2: goto $l1908;
        case 0: goto $l1883;
        case 1: goto $l1900;
    }
    $l1910:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1914;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1915;
    org$pandalanguage$pandac$ASTNode* $returnValue1918;
    org$pandalanguage$pandac$ASTNode* $tmp1919;
    org$pandalanguage$pandac$ASTNode* test1922 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1923;
    org$pandalanguage$pandac$ASTNode* $tmp1924;
    org$pandalanguage$pandac$ASTNode* $tmp1926;
    panda$collections$ImmutableArray* ifTrue1929 = NULL;
    panda$collections$ImmutableArray* $tmp1930;
    panda$collections$ImmutableArray* $tmp1931;
    org$pandalanguage$pandac$ASTNode* $tmp1933;
    org$pandalanguage$pandac$ASTNode* ifFalse1936 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1937;
    org$pandalanguage$pandac$ASTNode* $tmp1941;
    org$pandalanguage$pandac$ASTNode* $tmp1942;
    org$pandalanguage$pandac$ASTNode* $tmp1943;
    org$pandalanguage$pandac$ASTNode* $tmp1945;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    org$pandalanguage$pandac$ASTNode* $tmp1949;
    org$pandalanguage$pandac$ASTNode* $tmp1950;
    org$pandalanguage$pandac$ASTNode* $tmp1952;
    org$pandalanguage$pandac$ASTNode* $tmp1955;
    org$pandalanguage$pandac$ASTNode* $tmp1956;
    org$pandalanguage$pandac$ASTNode* $tmp1957;
    org$pandalanguage$pandac$ASTNode* $tmp1958;
    int $tmp1913;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1915, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1917 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1915, &$s1916);
        start1914 = $tmp1917;
        if (((panda$core$Bit) { !start1914.nonnull }).value) {
        {
            $tmp1919 = NULL;
            $returnValue1918 = $tmp1919;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1919));
            $tmp1913 = 0;
            goto $l1911;
            $l1920:;
            return $returnValue1918;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1925 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1924 = $tmp1925;
        $tmp1923 = $tmp1924;
        test1922 = $tmp1923;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
        if (((panda$core$Bit) { test1922 == NULL }).value) {
        {
            $tmp1926 = NULL;
            $returnValue1918 = $tmp1926;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1926));
            $tmp1913 = 1;
            goto $l1911;
            $l1927:;
            return $returnValue1918;
        }
        }
        panda$collections$ImmutableArray* $tmp1932 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1931 = $tmp1932;
        $tmp1930 = $tmp1931;
        ifTrue1929 = $tmp1930;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1931));
        if (((panda$core$Bit) { ifTrue1929 == NULL }).value) {
        {
            $tmp1933 = NULL;
            $returnValue1918 = $tmp1933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1933));
            $tmp1913 = 2;
            goto $l1911;
            $l1934:;
            return $returnValue1918;
        }
        }
        memset(&ifFalse1936, 0, sizeof(ifFalse1936));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1937, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1938 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1937);
        if (((panda$core$Bit) { $tmp1938.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1939 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1939.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1940.value) {
            {
                {
                    $tmp1941 = ifFalse1936;
                    org$pandalanguage$pandac$ASTNode* $tmp1944 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1943 = $tmp1944;
                    $tmp1942 = $tmp1943;
                    ifFalse1936 = $tmp1942;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1942));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
                }
                if (((panda$core$Bit) { ifFalse1936 == NULL }).value) {
                {
                    $tmp1945 = NULL;
                    $returnValue1918 = $tmp1945;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1945));
                    $tmp1913 = 3;
                    goto $l1911;
                    $l1946:;
                    return $returnValue1918;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp1948 = ifFalse1936;
                    org$pandalanguage$pandac$ASTNode* $tmp1951 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1950 = $tmp1951;
                    $tmp1949 = $tmp1950;
                    ifFalse1936 = $tmp1949;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1949));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1950));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1948));
                }
                if (((panda$core$Bit) { ifFalse1936 == NULL }).value) {
                {
                    $tmp1952 = NULL;
                    $returnValue1918 = $tmp1952;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
                    $tmp1913 = 4;
                    goto $l1911;
                    $l1953:;
                    return $returnValue1918;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp1955 = ifFalse1936;
                $tmp1956 = NULL;
                ifFalse1936 = $tmp1956;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1959 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1959, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1914.value).position, test1922, ifTrue1929, ifFalse1936);
        $tmp1958 = $tmp1959;
        $tmp1957 = $tmp1958;
        $returnValue1918 = $tmp1957;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1957));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1958));
        $tmp1913 = 5;
        goto $l1911;
        $l1960:;
        return $returnValue1918;
    }
    $l1911:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1922));
    test1922 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1929));
    ifTrue1929 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1936));
    switch ($tmp1913) {
        case 5: goto $l1960;
        case 4: goto $l1953;
        case 3: goto $l1946;
        case 1: goto $l1927;
        case 0: goto $l1920;
        case 2: goto $l1934;
    }
    $l1962:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1963;
    org$pandalanguage$pandac$ASTNode* $returnValue1966;
    org$pandalanguage$pandac$ASTNode* $tmp1967;
    org$pandalanguage$pandac$ASTNode* $tmp1969;
    org$pandalanguage$pandac$ASTNode* $tmp1970;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1963, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1965 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1963, &$s1964);
    if (((panda$core$Bit) { !$tmp1965.nonnull }).value) {
    {
        $tmp1967 = NULL;
        $returnValue1966 = $tmp1967;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1967));
        return $returnValue1966;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1971 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp1970 = $tmp1971;
    $tmp1969 = $tmp1970;
    $returnValue1966 = $tmp1969;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1969));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1970));
    return $returnValue1966;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1973;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1974;
    org$pandalanguage$pandac$ASTNode* $returnValue1977;
    org$pandalanguage$pandac$ASTNode* $tmp1978;
    org$pandalanguage$pandac$ASTNode* type1985 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1986;
    org$pandalanguage$pandac$ASTNode* $tmp1987;
    org$pandalanguage$pandac$ASTNode* $tmp1989;
    org$pandalanguage$pandac$ASTNode* $tmp1992;
    org$pandalanguage$pandac$ASTNode* $tmp1993;
    panda$core$String* $tmp1995;
    org$pandalanguage$pandac$ASTNode* $tmp2000;
    org$pandalanguage$pandac$ASTNode* $tmp2001;
    panda$core$String* $tmp2003;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1974, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1976 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1974, &$s1975);
    id1973 = $tmp1976;
    if (((panda$core$Bit) { !id1973.nonnull }).value) {
    {
        $tmp1978 = NULL;
        $returnValue1977 = $tmp1978;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1978));
        return $returnValue1977;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1980 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1980.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1981.value) {
    {
        int $tmp1984;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1988 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1987 = $tmp1988;
            $tmp1986 = $tmp1987;
            type1985 = $tmp1986;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1986));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
            if (((panda$core$Bit) { type1985 == NULL }).value) {
            {
                $tmp1989 = NULL;
                $returnValue1977 = $tmp1989;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1989));
                $tmp1984 = 0;
                goto $l1982;
                $l1990:;
                return $returnValue1977;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1994 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1996 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1973.value));
            $tmp1995 = $tmp1996;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1994, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id1973.value).position, $tmp1995, type1985);
            $tmp1993 = $tmp1994;
            $tmp1992 = $tmp1993;
            $returnValue1977 = $tmp1992;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1992));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1995));
            $tmp1984 = 1;
            goto $l1982;
            $l1997:;
            return $returnValue1977;
        }
        $l1982:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1985));
        type1985 = NULL;
        switch ($tmp1984) {
            case 1: goto $l1997;
            case 0: goto $l1990;
        }
        $l1999:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2002 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp2004 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1973.value));
    $tmp2003 = $tmp2004;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2002, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id1973.value).position, $tmp2003);
    $tmp2001 = $tmp2002;
    $tmp2000 = $tmp2001;
    $returnValue1977 = $tmp2000;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2000));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2001));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
    return $returnValue1977;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2009;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2010;
    org$pandalanguage$pandac$ASTNode* $returnValue2013;
    org$pandalanguage$pandac$ASTNode* $tmp2014;
    org$pandalanguage$pandac$ASTNode* t2017 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    org$pandalanguage$pandac$ASTNode* $tmp2019;
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2024;
    org$pandalanguage$pandac$ASTNode* $tmp2027;
    org$pandalanguage$pandac$ASTNode* list2030 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2031;
    org$pandalanguage$pandac$ASTNode* $tmp2032;
    org$pandalanguage$pandac$ASTNode* $tmp2034;
    panda$collections$ImmutableArray* block2037 = NULL;
    panda$collections$ImmutableArray* $tmp2038;
    panda$collections$ImmutableArray* $tmp2039;
    org$pandalanguage$pandac$ASTNode* $tmp2041;
    org$pandalanguage$pandac$ASTNode* $tmp2044;
    org$pandalanguage$pandac$ASTNode* $tmp2045;
    int $tmp2008;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2010, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2012 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2010, &$s2011);
        start2009 = $tmp2012;
        if (((panda$core$Bit) { !start2009.nonnull }).value) {
        {
            $tmp2014 = NULL;
            $returnValue2013 = $tmp2014;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2014));
            $tmp2008 = 0;
            goto $l2006;
            $l2015:;
            return $returnValue2013;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2020 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2019 = $tmp2020;
        $tmp2018 = $tmp2019;
        t2017 = $tmp2018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2019));
        if (((panda$core$Bit) { t2017 == NULL }).value) {
        {
            $tmp2021 = NULL;
            $returnValue2013 = $tmp2021;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
            $tmp2008 = 1;
            goto $l2006;
            $l2022:;
            return $returnValue2013;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2024, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2026 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2024, &$s2025);
        if (((panda$core$Bit) { !$tmp2026.nonnull }).value) {
        {
            $tmp2027 = NULL;
            $returnValue2013 = $tmp2027;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2027));
            $tmp2008 = 2;
            goto $l2006;
            $l2028:;
            return $returnValue2013;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2033 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2032 = $tmp2033;
        $tmp2031 = $tmp2032;
        list2030 = $tmp2031;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
        if (((panda$core$Bit) { list2030 == NULL }).value) {
        {
            $tmp2034 = NULL;
            $returnValue2013 = $tmp2034;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2034));
            $tmp2008 = 3;
            goto $l2006;
            $l2035:;
            return $returnValue2013;
        }
        }
        panda$collections$ImmutableArray* $tmp2040 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2039 = $tmp2040;
        $tmp2038 = $tmp2039;
        block2037 = $tmp2038;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
        if (((panda$core$Bit) { block2037 == NULL }).value) {
        {
            $tmp2041 = NULL;
            $returnValue2013 = $tmp2041;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2041));
            $tmp2008 = 4;
            goto $l2006;
            $l2042:;
            return $returnValue2013;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2046 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2046, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2009.value).position, p_label, t2017, list2030, block2037);
        $tmp2045 = $tmp2046;
        $tmp2044 = $tmp2045;
        $returnValue2013 = $tmp2044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2045));
        $tmp2008 = 5;
        goto $l2006;
        $l2047:;
        return $returnValue2013;
    }
    $l2006:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2017));
    t2017 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2030));
    list2030 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2037));
    block2037 = NULL;
    switch ($tmp2008) {
        case 3: goto $l2035;
        case 5: goto $l2047;
        case 4: goto $l2042;
        case 1: goto $l2022;
        case 0: goto $l2015;
        case 2: goto $l2028;
    }
    $l2049:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2053;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2054;
    org$pandalanguage$pandac$ASTNode* $returnValue2057;
    org$pandalanguage$pandac$ASTNode* $tmp2058;
    org$pandalanguage$pandac$ASTNode* test2061 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2062;
    org$pandalanguage$pandac$ASTNode* $tmp2063;
    org$pandalanguage$pandac$ASTNode* $tmp2065;
    panda$collections$ImmutableArray* body2068 = NULL;
    panda$collections$ImmutableArray* $tmp2069;
    panda$collections$ImmutableArray* $tmp2070;
    org$pandalanguage$pandac$ASTNode* $tmp2072;
    org$pandalanguage$pandac$ASTNode* $tmp2075;
    org$pandalanguage$pandac$ASTNode* $tmp2076;
    int $tmp2052;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2054, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2056 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2054, &$s2055);
        start2053 = $tmp2056;
        if (((panda$core$Bit) { !start2053.nonnull }).value) {
        {
            $tmp2058 = NULL;
            $returnValue2057 = $tmp2058;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2058));
            $tmp2052 = 0;
            goto $l2050;
            $l2059:;
            return $returnValue2057;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2064 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2063 = $tmp2064;
        $tmp2062 = $tmp2063;
        test2061 = $tmp2062;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2063));
        if (((panda$core$Bit) { test2061 == NULL }).value) {
        {
            $tmp2065 = NULL;
            $returnValue2057 = $tmp2065;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
            $tmp2052 = 1;
            goto $l2050;
            $l2066:;
            return $returnValue2057;
        }
        }
        panda$collections$ImmutableArray* $tmp2071 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2070 = $tmp2071;
        $tmp2069 = $tmp2070;
        body2068 = $tmp2069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
        if (((panda$core$Bit) { body2068 == NULL }).value) {
        {
            $tmp2072 = NULL;
            $returnValue2057 = $tmp2072;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2072));
            $tmp2052 = 2;
            goto $l2050;
            $l2073:;
            return $returnValue2057;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2077 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2077, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start2053.value).position, p_label, test2061, body2068);
        $tmp2076 = $tmp2077;
        $tmp2075 = $tmp2076;
        $returnValue2057 = $tmp2075;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2076));
        $tmp2052 = 3;
        goto $l2050;
        $l2078:;
        return $returnValue2057;
    }
    $l2050:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2061));
    test2061 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2068));
    body2068 = NULL;
    switch ($tmp2052) {
        case 1: goto $l2066;
        case 2: goto $l2073;
        case 3: goto $l2078;
        case 0: goto $l2059;
    }
    $l2080:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2084;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2085;
    org$pandalanguage$pandac$ASTNode* $returnValue2088;
    org$pandalanguage$pandac$ASTNode* $tmp2089;
    panda$collections$ImmutableArray* body2092 = NULL;
    panda$collections$ImmutableArray* $tmp2093;
    panda$collections$ImmutableArray* $tmp2094;
    org$pandalanguage$pandac$ASTNode* $tmp2096;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2102;
    org$pandalanguage$pandac$ASTNode* test2105 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2106;
    org$pandalanguage$pandac$ASTNode* $tmp2107;
    org$pandalanguage$pandac$ASTNode* $tmp2109;
    org$pandalanguage$pandac$ASTNode* $tmp2112;
    org$pandalanguage$pandac$ASTNode* $tmp2113;
    int $tmp2083;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2085, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2087 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2085, &$s2086);
        start2084 = $tmp2087;
        if (((panda$core$Bit) { !start2084.nonnull }).value) {
        {
            $tmp2089 = NULL;
            $returnValue2088 = $tmp2089;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2089));
            $tmp2083 = 0;
            goto $l2081;
            $l2090:;
            return $returnValue2088;
        }
        }
        panda$collections$ImmutableArray* $tmp2095 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2094 = $tmp2095;
        $tmp2093 = $tmp2094;
        body2092 = $tmp2093;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
        if (((panda$core$Bit) { body2092 == NULL }).value) {
        {
            $tmp2096 = NULL;
            $returnValue2088 = $tmp2096;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2096));
            $tmp2083 = 1;
            goto $l2081;
            $l2097:;
            return $returnValue2088;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2099, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2101 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2099, &$s2100);
        if (((panda$core$Bit) { !$tmp2101.nonnull }).value) {
        {
            $tmp2102 = NULL;
            $returnValue2088 = $tmp2102;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2102));
            $tmp2083 = 2;
            goto $l2081;
            $l2103:;
            return $returnValue2088;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2108 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2107 = $tmp2108;
        $tmp2106 = $tmp2107;
        test2105 = $tmp2106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
        if (((panda$core$Bit) { test2105 == NULL }).value) {
        {
            $tmp2109 = NULL;
            $returnValue2088 = $tmp2109;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2109));
            $tmp2083 = 3;
            goto $l2081;
            $l2110:;
            return $returnValue2088;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2114, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$parser$Token) start2084.value).position, p_label, body2092, test2105);
        $tmp2113 = $tmp2114;
        $tmp2112 = $tmp2113;
        $returnValue2088 = $tmp2112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
        $tmp2083 = 4;
        goto $l2081;
        $l2115:;
        return $returnValue2088;
    }
    $l2081:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2092));
    body2092 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2105));
    test2105 = NULL;
    switch ($tmp2083) {
        case 3: goto $l2110;
        case 4: goto $l2115;
        case 1: goto $l2097;
        case 0: goto $l2090;
        case 2: goto $l2103;
    }
    $l2117:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2121;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2122;
    org$pandalanguage$pandac$ASTNode* $returnValue2125;
    org$pandalanguage$pandac$ASTNode* $tmp2126;
    panda$collections$ImmutableArray* body2129 = NULL;
    panda$collections$ImmutableArray* $tmp2130;
    panda$collections$ImmutableArray* $tmp2131;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    org$pandalanguage$pandac$ASTNode* $tmp2136;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    int $tmp2120;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2122, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2124 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2122, &$s2123);
        start2121 = $tmp2124;
        if (((panda$core$Bit) { !start2121.nonnull }).value) {
        {
            $tmp2126 = NULL;
            $returnValue2125 = $tmp2126;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
            $tmp2120 = 0;
            goto $l2118;
            $l2127:;
            return $returnValue2125;
        }
        }
        panda$collections$ImmutableArray* $tmp2132 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2131 = $tmp2132;
        $tmp2130 = $tmp2131;
        body2129 = $tmp2130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
        if (((panda$core$Bit) { body2129 == NULL }).value) {
        {
            $tmp2133 = NULL;
            $returnValue2125 = $tmp2133;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2133));
            $tmp2120 = 1;
            goto $l2118;
            $l2134:;
            return $returnValue2125;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2138 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2138, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2121.value).position, p_label, body2129);
        $tmp2137 = $tmp2138;
        $tmp2136 = $tmp2137;
        $returnValue2125 = $tmp2136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
        $tmp2120 = 2;
        goto $l2118;
        $l2139:;
        return $returnValue2125;
    }
    $l2118:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2129));
    body2129 = NULL;
    switch ($tmp2120) {
        case 2: goto $l2139;
        case 1: goto $l2134;
        case 0: goto $l2127;
    }
    $l2141:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2145;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2146;
    org$pandalanguage$pandac$ASTNode* $returnValue2149;
    org$pandalanguage$pandac$ASTNode* $tmp2150;
    org$pandalanguage$pandac$ASTNode* expr2153 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2154;
    org$pandalanguage$pandac$ASTNode* $tmp2155;
    org$pandalanguage$pandac$ASTNode* $tmp2157;
    org$pandalanguage$pandac$ASTNode* message2160 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2161;
    org$pandalanguage$pandac$ASTNode* $tmp2163;
    org$pandalanguage$pandac$ASTNode* $tmp2164;
    org$pandalanguage$pandac$ASTNode* $tmp2165;
    org$pandalanguage$pandac$ASTNode* $tmp2167;
    org$pandalanguage$pandac$ASTNode* $tmp2170;
    org$pandalanguage$pandac$ASTNode* $tmp2171;
    org$pandalanguage$pandac$ASTNode* $tmp2172;
    org$pandalanguage$pandac$ASTNode* $tmp2173;
    int $tmp2144;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2146, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2148 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2146, &$s2147);
        start2145 = $tmp2148;
        if (((panda$core$Bit) { !start2145.nonnull }).value) {
        {
            $tmp2150 = NULL;
            $returnValue2149 = $tmp2150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2150));
            $tmp2144 = 0;
            goto $l2142;
            $l2151:;
            return $returnValue2149;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2156 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2155 = $tmp2156;
        $tmp2154 = $tmp2155;
        expr2153 = $tmp2154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
        if (((panda$core$Bit) { expr2153 == NULL }).value) {
        {
            $tmp2157 = NULL;
            $returnValue2149 = $tmp2157;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
            $tmp2144 = 1;
            goto $l2142;
            $l2158:;
            return $returnValue2149;
        }
        }
        memset(&message2160, 0, sizeof(message2160));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2161, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2162 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2161);
        if (((panda$core$Bit) { $tmp2162.nonnull }).value) {
        {
            {
                $tmp2163 = message2160;
                org$pandalanguage$pandac$ASTNode* $tmp2166 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2165 = $tmp2166;
                $tmp2164 = $tmp2165;
                message2160 = $tmp2164;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
            }
            if (((panda$core$Bit) { message2160 == NULL }).value) {
            {
                $tmp2167 = NULL;
                $returnValue2149 = $tmp2167;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2167));
                $tmp2144 = 2;
                goto $l2142;
                $l2168:;
                return $returnValue2149;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2170 = message2160;
                $tmp2171 = NULL;
                message2160 = $tmp2171;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2174 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2174, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2145.value).position, expr2153, message2160);
        $tmp2173 = $tmp2174;
        $tmp2172 = $tmp2173;
        $returnValue2149 = $tmp2172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
        $tmp2144 = 3;
        goto $l2142;
        $l2175:;
        return $returnValue2149;
    }
    $l2142:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2153));
    expr2153 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2160));
    switch ($tmp2144) {
        case 1: goto $l2158;
        case 3: goto $l2175;
        case 2: goto $l2168;
        case 0: goto $l2151;
    }
    $l2177:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2181;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2182;
    org$pandalanguage$pandac$ASTNode* $returnValue2185;
    org$pandalanguage$pandac$ASTNode* $tmp2186;
    panda$collections$Array* expressions2189 = NULL;
    panda$collections$Array* $tmp2190;
    panda$collections$Array* $tmp2191;
    org$pandalanguage$pandac$ASTNode* expr2193 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2194;
    org$pandalanguage$pandac$ASTNode* $tmp2195;
    org$pandalanguage$pandac$ASTNode* $tmp2197;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2203;
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    org$pandalanguage$pandac$ASTNode* $tmp2207;
    org$pandalanguage$pandac$ASTNode* $tmp2209;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2212;
    org$pandalanguage$pandac$ASTNode* $tmp2215;
    panda$collections$Array* statements2218 = NULL;
    panda$collections$Array* $tmp2219;
    panda$collections$Array* $tmp2220;
    org$pandalanguage$pandac$parser$Token$Kind $match$1192_132224;
    org$pandalanguage$pandac$ASTNode* stmt2247 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2249;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    org$pandalanguage$pandac$ASTNode* stmt2260 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2261;
    org$pandalanguage$pandac$ASTNode* $tmp2262;
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    org$pandalanguage$pandac$ASTNode* $tmp2269;
    org$pandalanguage$pandac$ASTNode* $tmp2270;
    panda$collections$ImmutableArray* $tmp2272;
    panda$collections$ImmutableArray* $tmp2274;
    int $tmp2180;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2182, ((panda$core$Int64) { 39 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2184 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2182, &$s2183);
        start2181 = $tmp2184;
        if (((panda$core$Bit) { !start2181.nonnull }).value) {
        {
            $tmp2186 = NULL;
            $returnValue2185 = $tmp2186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2186));
            $tmp2180 = 0;
            goto $l2178;
            $l2187:;
            return $returnValue2185;
        }
        }
        panda$collections$Array* $tmp2192 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2192);
        $tmp2191 = $tmp2192;
        $tmp2190 = $tmp2191;
        expressions2189 = $tmp2190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2191));
        org$pandalanguage$pandac$ASTNode* $tmp2196 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2195 = $tmp2196;
        $tmp2194 = $tmp2195;
        expr2193 = $tmp2194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
        if (((panda$core$Bit) { expr2193 == NULL }).value) {
        {
            $tmp2197 = NULL;
            $returnValue2185 = $tmp2197;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
            $tmp2180 = 1;
            goto $l2178;
            $l2198:;
            return $returnValue2185;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions2189, ((panda$core$Object*) expr2193));
        $l2200:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2203, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2204 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2203);
        bool $tmp2202 = ((panda$core$Bit) { $tmp2204.nonnull }).value;
        if (!$tmp2202) goto $l2201;
        {
            {
                $tmp2205 = expr2193;
                org$pandalanguage$pandac$ASTNode* $tmp2208 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2207 = $tmp2208;
                $tmp2206 = $tmp2207;
                expr2193 = $tmp2206;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
            }
            if (((panda$core$Bit) { expr2193 == NULL }).value) {
            {
                $tmp2209 = NULL;
                $returnValue2185 = $tmp2209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
                $tmp2180 = 2;
                goto $l2178;
                $l2210:;
                return $returnValue2185;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2189, ((panda$core$Object*) expr2193));
        }
        goto $l2200;
        $l2201:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2212, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2214 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2212, &$s2213);
        if (((panda$core$Bit) { !$tmp2214.nonnull }).value) {
        {
            $tmp2215 = NULL;
            $returnValue2185 = $tmp2215;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2215));
            $tmp2180 = 3;
            goto $l2178;
            $l2216:;
            return $returnValue2185;
        }
        }
        panda$collections$Array* $tmp2221 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2221);
        $tmp2220 = $tmp2221;
        $tmp2219 = $tmp2220;
        statements2218 = $tmp2219;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
        $l2222:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2225 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1192_132224 = $tmp2225.kind;
                panda$core$Bit $tmp2228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1192_132224.$rawValue, ((panda$core$Int64) { 39 }));
                bool $tmp2227 = $tmp2228.value;
                if ($tmp2227) goto $l2229;
                panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1192_132224.$rawValue, ((panda$core$Int64) { 40 }));
                $tmp2227 = $tmp2230.value;
                $l2229:;
                panda$core$Bit $tmp2231 = { $tmp2227 };
                bool $tmp2226 = $tmp2231.value;
                if ($tmp2226) goto $l2232;
                panda$core$Bit $tmp2233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1192_132224.$rawValue, ((panda$core$Int64) { 100 }));
                $tmp2226 = $tmp2233.value;
                $l2232:;
                panda$core$Bit $tmp2234 = { $tmp2226 };
                if ($tmp2234.value) {
                {
                    goto $l2223;
                }
                }
                else {
                panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1192_132224.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2236 = $tmp2237.value;
                if ($tmp2236) goto $l2238;
                panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1192_132224.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2236 = $tmp2239.value;
                $l2238:;
                panda$core$Bit $tmp2240 = { $tmp2236 };
                bool $tmp2235 = $tmp2240.value;
                if ($tmp2235) goto $l2241;
                panda$core$Bit $tmp2242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1192_132224.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2235 = $tmp2242.value;
                $l2241:;
                panda$core$Bit $tmp2243 = { $tmp2235 };
                if ($tmp2243.value) {
                {
                    int $tmp2246;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2250 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2249 = $tmp2250;
                        $tmp2248 = $tmp2249;
                        stmt2247 = $tmp2248;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
                        if (((panda$core$Bit) { stmt2247 == NULL }).value) {
                        {
                            $tmp2251 = NULL;
                            $returnValue2185 = $tmp2251;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
                            $tmp2246 = 0;
                            goto $l2244;
                            $l2252:;
                            $tmp2180 = 4;
                            goto $l2178;
                            $l2253:;
                            return $returnValue2185;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements2218, ((panda$core$Object*) stmt2247));
                        $tmp2246 = 1;
                        goto $l2244;
                        $l2255:;
                        goto $l2223;
                    }
                    $l2244:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2247));
                    stmt2247 = NULL;
                    switch ($tmp2246) {
                        case 0: goto $l2252;
                        case 1: goto $l2255;
                    }
                    $l2256:;
                }
                }
                else {
                {
                    {
                        int $tmp2259;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2263 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2262 = $tmp2263;
                            $tmp2261 = $tmp2262;
                            stmt2260 = $tmp2261;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                            if (((panda$core$Bit) { stmt2260 == NULL }).value) {
                            {
                                $tmp2264 = NULL;
                                $returnValue2185 = $tmp2264;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2264));
                                $tmp2259 = 0;
                                goto $l2257;
                                $l2265:;
                                $tmp2180 = 5;
                                goto $l2178;
                                $l2266:;
                                return $returnValue2185;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2218, ((panda$core$Object*) stmt2260));
                        }
                        $tmp2259 = -1;
                        goto $l2257;
                        $l2257:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2260));
                        stmt2260 = NULL;
                        switch ($tmp2259) {
                            case 0: goto $l2265;
                            case -1: goto $l2268;
                        }
                        $l2268:;
                    }
                }
                }
                }
            }
        }
        }
        $l2223:;
        org$pandalanguage$pandac$ASTNode* $tmp2271 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2273 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2189);
        $tmp2272 = $tmp2273;
        panda$collections$ImmutableArray* $tmp2275 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2218);
        $tmp2274 = $tmp2275;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2271, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) start2181.value).position, $tmp2272, $tmp2274);
        $tmp2270 = $tmp2271;
        $tmp2269 = $tmp2270;
        $returnValue2185 = $tmp2269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2272));
        $tmp2180 = 6;
        goto $l2178;
        $l2276:;
        return $returnValue2185;
    }
    $l2178:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2189));
    expressions2189 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2193));
    expr2193 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2218));
    statements2218 = NULL;
    switch ($tmp2180) {
        case 6: goto $l2276;
        case 4: goto $l2253;
        case 5: goto $l2266;
        case 1: goto $l2198;
        case 2: goto $l2210;
        case 0: goto $l2187;
        case 3: goto $l2216;
    }
    $l2278:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2282;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2283;
    org$pandalanguage$pandac$ASTNode* $returnValue2286;
    org$pandalanguage$pandac$ASTNode* $tmp2287;
    org$pandalanguage$pandac$ASTNode* expr2290 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2291;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    org$pandalanguage$pandac$ASTNode* $tmp2294;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2297;
    org$pandalanguage$pandac$ASTNode* $tmp2300;
    panda$collections$Array* whens2303 = NULL;
    panda$collections$Array* $tmp2304;
    panda$collections$Array* $tmp2305;
    panda$collections$Array* other2307 = NULL;
    panda$collections$Array* $tmp2308;
    org$pandalanguage$pandac$parser$Token token2311;
    org$pandalanguage$pandac$parser$Token$Kind $match$1233_132313;
    org$pandalanguage$pandac$ASTNode* w2319 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2320;
    org$pandalanguage$pandac$ASTNode* $tmp2321;
    org$pandalanguage$pandac$ASTNode* $tmp2323;
    org$pandalanguage$pandac$parser$Token o2329;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2331;
    org$pandalanguage$pandac$ASTNode* $tmp2334;
    panda$collections$Array* $tmp2337;
    panda$collections$Array* $tmp2338;
    panda$collections$Array* $tmp2339;
    org$pandalanguage$pandac$parser$Token$Kind $match$1249_252343;
    org$pandalanguage$pandac$ASTNode* stmt2358 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2359;
    org$pandalanguage$pandac$ASTNode* $tmp2360;
    org$pandalanguage$pandac$ASTNode* $tmp2362;
    org$pandalanguage$pandac$ASTNode* stmt2371 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2372;
    org$pandalanguage$pandac$ASTNode* $tmp2373;
    org$pandalanguage$pandac$ASTNode* $tmp2375;
    panda$core$String* $tmp2380;
    panda$core$String* $tmp2382;
    panda$core$String* $tmp2383;
    panda$core$String* $tmp2385;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2391;
    org$pandalanguage$pandac$ASTNode* $tmp2394;
    org$pandalanguage$pandac$ASTNode* $tmp2397;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    panda$collections$ImmutableArray* $tmp2400;
    panda$collections$ImmutableArray* $tmp2402;
    org$pandalanguage$pandac$ASTNode* $tmp2406;
    org$pandalanguage$pandac$ASTNode* $tmp2407;
    panda$collections$ImmutableArray* $tmp2409;
    int $tmp2281;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2283, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2285 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2283, &$s2284);
        start2282 = $tmp2285;
        if (((panda$core$Bit) { !start2282.nonnull }).value) {
        {
            $tmp2287 = NULL;
            $returnValue2286 = $tmp2287;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
            $tmp2281 = 0;
            goto $l2279;
            $l2288:;
            return $returnValue2286;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2293 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2292 = $tmp2293;
        $tmp2291 = $tmp2292;
        expr2290 = $tmp2291;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2291));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2292));
        if (((panda$core$Bit) { expr2290 == NULL }).value) {
        {
            $tmp2294 = NULL;
            $returnValue2286 = $tmp2294;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
            $tmp2281 = 1;
            goto $l2279;
            $l2295:;
            return $returnValue2286;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2297, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2299 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2297, &$s2298);
        if (((panda$core$Bit) { !$tmp2299.nonnull }).value) {
        {
            $tmp2300 = NULL;
            $returnValue2286 = $tmp2300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
            $tmp2281 = 2;
            goto $l2279;
            $l2301:;
            return $returnValue2286;
        }
        }
        panda$collections$Array* $tmp2306 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2306);
        $tmp2305 = $tmp2306;
        $tmp2304 = $tmp2305;
        whens2303 = $tmp2304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
        $tmp2308 = NULL;
        other2307 = $tmp2308;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
        $l2309:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2312 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2311 = $tmp2312;
            {
                $match$1233_132313 = token2311.kind;
                panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1233_132313.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2314.value) {
                {
                    goto $l2310;
                }
                }
                else {
                panda$core$Bit $tmp2315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1233_132313.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2315.value) {
                {
                    int $tmp2318;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2322 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2321 = $tmp2322;
                        $tmp2320 = $tmp2321;
                        w2319 = $tmp2320;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2321));
                        if (((panda$core$Bit) { w2319 == NULL }).value) {
                        {
                            $tmp2323 = NULL;
                            $returnValue2286 = $tmp2323;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2323));
                            $tmp2318 = 0;
                            goto $l2316;
                            $l2324:;
                            $tmp2281 = 3;
                            goto $l2279;
                            $l2325:;
                            return $returnValue2286;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2303, ((panda$core$Object*) w2319));
                    }
                    $tmp2318 = -1;
                    goto $l2316;
                    $l2316:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2319));
                    w2319 = NULL;
                    switch ($tmp2318) {
                        case -1: goto $l2327;
                        case 0: goto $l2324;
                    }
                    $l2327:;
                }
                }
                else {
                panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1233_132313.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2328.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2330 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2329 = $tmp2330;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2331, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2333 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2331, &$s2332);
                    if (((panda$core$Bit) { !$tmp2333.nonnull }).value) {
                    {
                        $tmp2334 = NULL;
                        $returnValue2286 = $tmp2334;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2334));
                        $tmp2281 = 4;
                        goto $l2279;
                        $l2335:;
                        return $returnValue2286;
                    }
                    }
                    {
                        $tmp2337 = other2307;
                        panda$collections$Array* $tmp2340 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2340);
                        $tmp2339 = $tmp2340;
                        $tmp2338 = $tmp2339;
                        other2307 = $tmp2338;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2338));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
                    }
                    $l2341:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2344 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1249_252343 = $tmp2344.kind;
                            panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_252343.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2345.value) {
                            {
                                goto $l2342;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_252343.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2347 = $tmp2348.value;
                            if ($tmp2347) goto $l2349;
                            panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_252343.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2347 = $tmp2350.value;
                            $l2349:;
                            panda$core$Bit $tmp2351 = { $tmp2347 };
                            bool $tmp2346 = $tmp2351.value;
                            if ($tmp2346) goto $l2352;
                            panda$core$Bit $tmp2353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1249_252343.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2346 = $tmp2353.value;
                            $l2352:;
                            panda$core$Bit $tmp2354 = { $tmp2346 };
                            if ($tmp2354.value) {
                            {
                                int $tmp2357;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2361 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2360 = $tmp2361;
                                    $tmp2359 = $tmp2360;
                                    stmt2358 = $tmp2359;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2359));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2360));
                                    if (((panda$core$Bit) { stmt2358 == NULL }).value) {
                                    {
                                        $tmp2362 = NULL;
                                        $returnValue2286 = $tmp2362;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2362));
                                        $tmp2357 = 0;
                                        goto $l2355;
                                        $l2363:;
                                        $tmp2281 = 5;
                                        goto $l2279;
                                        $l2364:;
                                        return $returnValue2286;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2307, ((panda$core$Object*) stmt2358));
                                    $tmp2357 = 1;
                                    goto $l2355;
                                    $l2366:;
                                    goto $l2342;
                                }
                                $l2355:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2358));
                                stmt2358 = NULL;
                                switch ($tmp2357) {
                                    case 1: goto $l2366;
                                    case 0: goto $l2363;
                                }
                                $l2367:;
                            }
                            }
                            else {
                            {
                                int $tmp2370;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2374 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2373 = $tmp2374;
                                    $tmp2372 = $tmp2373;
                                    stmt2371 = $tmp2372;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2372));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2373));
                                    if (((panda$core$Bit) { stmt2371 == NULL }).value) {
                                    {
                                        $tmp2375 = NULL;
                                        $returnValue2286 = $tmp2375;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2375));
                                        $tmp2370 = 0;
                                        goto $l2368;
                                        $l2376:;
                                        $tmp2281 = 6;
                                        goto $l2279;
                                        $l2377:;
                                        return $returnValue2286;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2307, ((panda$core$Object*) stmt2371));
                                }
                                $tmp2370 = -1;
                                goto $l2368;
                                $l2368:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2371));
                                stmt2371 = NULL;
                                switch ($tmp2370) {
                                    case -1: goto $l2379;
                                    case 0: goto $l2376;
                                }
                                $l2379:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2342:;
                    goto $l2310;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2386 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2311);
                    $tmp2385 = $tmp2386;
                    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2384, $tmp2385);
                    $tmp2383 = $tmp2387;
                    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, &$s2388);
                    $tmp2382 = $tmp2389;
                    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2381, $tmp2382);
                    $tmp2380 = $tmp2390;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2311, $tmp2380);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2382));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2383));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
                }
                }
                }
                }
            }
        }
        }
        $l2310:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2391, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2393 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2391, &$s2392);
        if (((panda$core$Bit) { !$tmp2393.nonnull }).value) {
        {
            $tmp2394 = NULL;
            $returnValue2286 = $tmp2394;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2394));
            $tmp2281 = 7;
            goto $l2279;
            $l2395:;
            return $returnValue2286;
        }
        }
        if (((panda$core$Bit) { other2307 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2399 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2401 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2303);
            $tmp2400 = $tmp2401;
            panda$collections$ImmutableArray* $tmp2403 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2307);
            $tmp2402 = $tmp2403;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2399, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2282.value).position, expr2290, $tmp2400, $tmp2402);
            $tmp2398 = $tmp2399;
            $tmp2397 = $tmp2398;
            $returnValue2286 = $tmp2397;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
            $tmp2281 = 8;
            goto $l2279;
            $l2404:;
            return $returnValue2286;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2408 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2410 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2303);
        $tmp2409 = $tmp2410;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2408, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2282.value).position, expr2290, $tmp2409, NULL);
        $tmp2407 = $tmp2408;
        $tmp2406 = $tmp2407;
        $returnValue2286 = $tmp2406;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
        $tmp2281 = 9;
        goto $l2279;
        $l2411:;
        return $returnValue2286;
    }
    $l2279:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2290));
    expr2290 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2303));
    whens2303 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2307));
    switch ($tmp2281) {
        case 4: goto $l2335;
        case 1: goto $l2295;
        case 5: goto $l2364;
        case 9: goto $l2411;
        case 7: goto $l2395;
        case 3: goto $l2325;
        case 6: goto $l2377;
        case 8: goto $l2404;
        case 2: goto $l2301;
        case 0: goto $l2288;
    }
    $l2413:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2417;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2418;
    panda$collections$ImmutableArray* $returnValue2421;
    panda$collections$ImmutableArray* $tmp2422;
    panda$collections$Array* result2425 = NULL;
    panda$collections$Array* $tmp2426;
    panda$collections$Array* $tmp2427;
    org$pandalanguage$pandac$parser$Token$Kind $match$1293_132431;
    org$pandalanguage$pandac$ASTNode* stmt2446 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2447;
    org$pandalanguage$pandac$ASTNode* $tmp2448;
    panda$collections$ImmutableArray* $tmp2450;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2454;
    panda$collections$ImmutableArray* $tmp2457;
    org$pandalanguage$pandac$ASTNode* stmt2466 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2467;
    org$pandalanguage$pandac$ASTNode* $tmp2468;
    panda$collections$ImmutableArray* $tmp2470;
    panda$collections$ImmutableArray* $tmp2475;
    panda$collections$ImmutableArray* $tmp2476;
    int $tmp2416;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2418, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2420 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2418, &$s2419);
        start2417 = $tmp2420;
        if (((panda$core$Bit) { !start2417.nonnull }).value) {
        {
            $tmp2422 = NULL;
            $returnValue2421 = $tmp2422;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
            $tmp2416 = 0;
            goto $l2414;
            $l2423:;
            return $returnValue2421;
        }
        }
        panda$collections$Array* $tmp2428 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2428);
        $tmp2427 = $tmp2428;
        $tmp2426 = $tmp2427;
        result2425 = $tmp2426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
        $l2429:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2432 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1293_132431 = $tmp2432.kind;
                panda$core$Bit $tmp2433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1293_132431.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2433.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2430;
                }
                }
                else {
                panda$core$Bit $tmp2436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1293_132431.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2435 = $tmp2436.value;
                if ($tmp2435) goto $l2437;
                panda$core$Bit $tmp2438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1293_132431.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2435 = $tmp2438.value;
                $l2437:;
                panda$core$Bit $tmp2439 = { $tmp2435 };
                bool $tmp2434 = $tmp2439.value;
                if ($tmp2434) goto $l2440;
                panda$core$Bit $tmp2441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1293_132431.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2434 = $tmp2441.value;
                $l2440:;
                panda$core$Bit $tmp2442 = { $tmp2434 };
                if ($tmp2442.value) {
                {
                    int $tmp2445;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2449 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2448 = $tmp2449;
                        $tmp2447 = $tmp2448;
                        stmt2446 = $tmp2447;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2447));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2448));
                        if (((panda$core$Bit) { stmt2446 == NULL }).value) {
                        {
                            $tmp2450 = NULL;
                            $returnValue2421 = $tmp2450;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
                            $tmp2445 = 0;
                            goto $l2443;
                            $l2451:;
                            $tmp2416 = 1;
                            goto $l2414;
                            $l2452:;
                            return $returnValue2421;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2454, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2456 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2454, &$s2455);
                        if (((panda$core$Bit) { !$tmp2456.nonnull }).value) {
                        {
                            $tmp2457 = NULL;
                            $returnValue2421 = $tmp2457;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2457));
                            $tmp2445 = 1;
                            goto $l2443;
                            $l2458:;
                            $tmp2416 = 2;
                            goto $l2414;
                            $l2459:;
                            return $returnValue2421;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2425, ((panda$core$Object*) stmt2446));
                        $tmp2445 = 2;
                        goto $l2443;
                        $l2461:;
                        goto $l2430;
                    }
                    $l2443:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2446));
                    stmt2446 = NULL;
                    switch ($tmp2445) {
                        case 0: goto $l2451;
                        case 1: goto $l2458;
                        case 2: goto $l2461;
                    }
                    $l2462:;
                }
                }
                else {
                {
                    int $tmp2465;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2469 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2468 = $tmp2469;
                        $tmp2467 = $tmp2468;
                        stmt2466 = $tmp2467;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
                        if (((panda$core$Bit) { stmt2466 == NULL }).value) {
                        {
                            $tmp2470 = NULL;
                            $returnValue2421 = $tmp2470;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2470));
                            $tmp2465 = 0;
                            goto $l2463;
                            $l2471:;
                            $tmp2416 = 3;
                            goto $l2414;
                            $l2472:;
                            return $returnValue2421;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2425, ((panda$core$Object*) stmt2466));
                    }
                    $tmp2465 = -1;
                    goto $l2463;
                    $l2463:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2466));
                    stmt2466 = NULL;
                    switch ($tmp2465) {
                        case -1: goto $l2474;
                        case 0: goto $l2471;
                    }
                    $l2474:;
                }
                }
                }
            }
        }
        }
        $l2430:;
        panda$collections$ImmutableArray* $tmp2477 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2425);
        $tmp2476 = $tmp2477;
        $tmp2475 = $tmp2476;
        $returnValue2421 = $tmp2475;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2475));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
        $tmp2416 = 4;
        goto $l2414;
        $l2478:;
        return $returnValue2421;
    }
    $l2414:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2425));
    result2425 = NULL;
    switch ($tmp2416) {
        case 1: goto $l2452;
        case 3: goto $l2472;
        case 2: goto $l2459;
        case 0: goto $l2423;
        case 4: goto $l2478;
    }
    $l2480:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2484 = NULL;
    panda$collections$ImmutableArray* $tmp2485;
    panda$collections$ImmutableArray* $tmp2486;
    org$pandalanguage$pandac$ASTNode* $returnValue2488;
    org$pandalanguage$pandac$ASTNode* $tmp2489;
    org$pandalanguage$pandac$ASTNode* $tmp2492;
    org$pandalanguage$pandac$ASTNode* $tmp2493;
    org$pandalanguage$pandac$Position $tmp2495;
    int $tmp2483;
    {
        panda$collections$ImmutableArray* $tmp2487 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2486 = $tmp2487;
        $tmp2485 = $tmp2486;
        statements2484 = $tmp2485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
        if (((panda$core$Bit) { statements2484 == NULL }).value) {
        {
            $tmp2489 = NULL;
            $returnValue2488 = $tmp2489;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
            $tmp2483 = 0;
            goto $l2481;
            $l2490:;
            return $returnValue2488;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2494 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2495);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2494, ((panda$core$Int64) { 6 }), $tmp2495, statements2484);
        $tmp2493 = $tmp2494;
        $tmp2492 = $tmp2493;
        $returnValue2488 = $tmp2492;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2492));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
        $tmp2483 = 1;
        goto $l2481;
        $l2496:;
        return $returnValue2488;
    }
    $l2481:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2484));
    statements2484 = NULL;
    switch ($tmp2483) {
        case 1: goto $l2496;
        case 0: goto $l2490;
    }
    $l2498:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2502 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2503;
    org$pandalanguage$pandac$ASTNode* $tmp2504;
    org$pandalanguage$pandac$ASTNode* $returnValue2506;
    org$pandalanguage$pandac$ASTNode* $tmp2507;
    org$pandalanguage$pandac$parser$Token$Kind $match$1337_92510;
    org$pandalanguage$pandac$parser$Token op2576;
    org$pandalanguage$pandac$ASTNode* rvalue2578 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2579;
    org$pandalanguage$pandac$ASTNode* $tmp2580;
    org$pandalanguage$pandac$ASTNode* $tmp2582;
    org$pandalanguage$pandac$ASTNode* $tmp2586;
    org$pandalanguage$pandac$ASTNode* $tmp2587;
    org$pandalanguage$pandac$parser$Token op2601;
    org$pandalanguage$pandac$ASTNode* rvalue2603 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2604;
    org$pandalanguage$pandac$ASTNode* $tmp2605;
    org$pandalanguage$pandac$ASTNode* $tmp2607;
    org$pandalanguage$pandac$ASTNode* $tmp2611;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    org$pandalanguage$pandac$ASTNode* $tmp2620;
    int $tmp2501;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2505 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2504 = $tmp2505;
        $tmp2503 = $tmp2504;
        start2502 = $tmp2503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2504));
        if (((panda$core$Bit) { start2502 == NULL }).value) {
        {
            $tmp2507 = NULL;
            $returnValue2506 = $tmp2507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2507));
            $tmp2501 = 0;
            goto $l2499;
            $l2508:;
            return $returnValue2506;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2511 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1337_92510 = $tmp2511.kind;
            panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2526 = $tmp2527.value;
            if ($tmp2526) goto $l2528;
            panda$core$Bit $tmp2529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2526 = $tmp2529.value;
            $l2528:;
            panda$core$Bit $tmp2530 = { $tmp2526 };
            bool $tmp2525 = $tmp2530.value;
            if ($tmp2525) goto $l2531;
            panda$core$Bit $tmp2532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2525 = $tmp2532.value;
            $l2531:;
            panda$core$Bit $tmp2533 = { $tmp2525 };
            bool $tmp2524 = $tmp2533.value;
            if ($tmp2524) goto $l2534;
            panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2524 = $tmp2535.value;
            $l2534:;
            panda$core$Bit $tmp2536 = { $tmp2524 };
            bool $tmp2523 = $tmp2536.value;
            if ($tmp2523) goto $l2537;
            panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2523 = $tmp2538.value;
            $l2537:;
            panda$core$Bit $tmp2539 = { $tmp2523 };
            bool $tmp2522 = $tmp2539.value;
            if ($tmp2522) goto $l2540;
            panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2522 = $tmp2541.value;
            $l2540:;
            panda$core$Bit $tmp2542 = { $tmp2522 };
            bool $tmp2521 = $tmp2542.value;
            if ($tmp2521) goto $l2543;
            panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2521 = $tmp2544.value;
            $l2543:;
            panda$core$Bit $tmp2545 = { $tmp2521 };
            bool $tmp2520 = $tmp2545.value;
            if ($tmp2520) goto $l2546;
            panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2520 = $tmp2547.value;
            $l2546:;
            panda$core$Bit $tmp2548 = { $tmp2520 };
            bool $tmp2519 = $tmp2548.value;
            if ($tmp2519) goto $l2549;
            panda$core$Bit $tmp2550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2519 = $tmp2550.value;
            $l2549:;
            panda$core$Bit $tmp2551 = { $tmp2519 };
            bool $tmp2518 = $tmp2551.value;
            if ($tmp2518) goto $l2552;
            panda$core$Bit $tmp2553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2518 = $tmp2553.value;
            $l2552:;
            panda$core$Bit $tmp2554 = { $tmp2518 };
            bool $tmp2517 = $tmp2554.value;
            if ($tmp2517) goto $l2555;
            panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2517 = $tmp2556.value;
            $l2555:;
            panda$core$Bit $tmp2557 = { $tmp2517 };
            bool $tmp2516 = $tmp2557.value;
            if ($tmp2516) goto $l2558;
            panda$core$Bit $tmp2559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2516 = $tmp2559.value;
            $l2558:;
            panda$core$Bit $tmp2560 = { $tmp2516 };
            bool $tmp2515 = $tmp2560.value;
            if ($tmp2515) goto $l2561;
            panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2515 = $tmp2562.value;
            $l2561:;
            panda$core$Bit $tmp2563 = { $tmp2515 };
            bool $tmp2514 = $tmp2563.value;
            if ($tmp2514) goto $l2564;
            panda$core$Bit $tmp2565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2514 = $tmp2565.value;
            $l2564:;
            panda$core$Bit $tmp2566 = { $tmp2514 };
            bool $tmp2513 = $tmp2566.value;
            if ($tmp2513) goto $l2567;
            panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2513 = $tmp2568.value;
            $l2567:;
            panda$core$Bit $tmp2569 = { $tmp2513 };
            bool $tmp2512 = $tmp2569.value;
            if ($tmp2512) goto $l2570;
            panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2512 = $tmp2571.value;
            $l2570:;
            panda$core$Bit $tmp2572 = { $tmp2512 };
            if ($tmp2572.value) {
            {
                int $tmp2575;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2577 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2576 = $tmp2577;
                    org$pandalanguage$pandac$ASTNode* $tmp2581 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2580 = $tmp2581;
                    $tmp2579 = $tmp2580;
                    rvalue2578 = $tmp2579;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2579));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2580));
                    if (((panda$core$Bit) { rvalue2578 == NULL }).value) {
                    {
                        $tmp2582 = NULL;
                        $returnValue2506 = $tmp2582;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
                        $tmp2575 = 0;
                        goto $l2573;
                        $l2583:;
                        $tmp2501 = 1;
                        goto $l2499;
                        $l2584:;
                        return $returnValue2506;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2588 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2590 = (($fn2589) start2502->$class->vtable[2])(start2502);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2588, ((panda$core$Int64) { 4 }), $tmp2590, start2502, op2576.kind, rvalue2578);
                    $tmp2587 = $tmp2588;
                    $tmp2586 = $tmp2587;
                    $returnValue2506 = $tmp2586;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2586));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
                    $tmp2575 = 1;
                    goto $l2573;
                    $l2591:;
                    $tmp2501 = 2;
                    goto $l2499;
                    $l2592:;
                    return $returnValue2506;
                }
                $l2573:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2578));
                rvalue2578 = NULL;
                switch ($tmp2575) {
                    case 0: goto $l2583;
                    case 1: goto $l2591;
                }
                $l2594:;
            }
            }
            else {
            panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1337_92510.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2595.value) {
            {
                int $tmp2598;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2599 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2599, &$s2600);
                    org$pandalanguage$pandac$parser$Token $tmp2602 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2601 = $tmp2602;
                    org$pandalanguage$pandac$ASTNode* $tmp2606 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2605 = $tmp2606;
                    $tmp2604 = $tmp2605;
                    rvalue2603 = $tmp2604;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2604));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2605));
                    if (((panda$core$Bit) { rvalue2603 == NULL }).value) {
                    {
                        $tmp2607 = NULL;
                        $returnValue2506 = $tmp2607;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2607));
                        $tmp2598 = 0;
                        goto $l2596;
                        $l2608:;
                        $tmp2501 = 3;
                        goto $l2499;
                        $l2609:;
                        return $returnValue2506;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2613 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2615 = (($fn2614) start2502->$class->vtable[2])(start2502);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2613, ((panda$core$Int64) { 4 }), $tmp2615, start2502, op2601.kind, rvalue2603);
                    $tmp2612 = $tmp2613;
                    $tmp2611 = $tmp2612;
                    $returnValue2506 = $tmp2611;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2611));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
                    $tmp2598 = 1;
                    goto $l2596;
                    $l2616:;
                    $tmp2501 = 4;
                    goto $l2499;
                    $l2617:;
                    return $returnValue2506;
                }
                $l2596:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2603));
                rvalue2603 = NULL;
                switch ($tmp2598) {
                    case 0: goto $l2608;
                    case 1: goto $l2616;
                }
                $l2619:;
            }
            }
            else {
            {
                $tmp2620 = start2502;
                $returnValue2506 = $tmp2620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2620));
                $tmp2501 = 5;
                goto $l2499;
                $l2621:;
                return $returnValue2506;
            }
            }
            }
        }
    }
    $tmp2501 = -1;
    goto $l2499;
    $l2499:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2502));
    start2502 = NULL;
    switch ($tmp2501) {
        case -1: goto $l2623;
        case 2: goto $l2592;
        case 5: goto $l2621;
        case 3: goto $l2609;
        case 1: goto $l2584;
        case 4: goto $l2617;
        case 0: goto $l2508;
    }
    $l2623:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t2627 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2628;
    org$pandalanguage$pandac$ASTNode* $tmp2629;
    org$pandalanguage$pandac$ASTNode* $returnValue2631;
    org$pandalanguage$pandac$ASTNode* $tmp2632;
    org$pandalanguage$pandac$ASTNode* value2635 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2636;
    org$pandalanguage$pandac$ASTNode* $tmp2638;
    org$pandalanguage$pandac$ASTNode* $tmp2639;
    org$pandalanguage$pandac$ASTNode* $tmp2640;
    org$pandalanguage$pandac$ASTNode* $tmp2642;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    org$pandalanguage$pandac$ASTNode* $tmp2650;
    org$pandalanguage$pandac$ASTNode* $tmp2651;
    org$pandalanguage$pandac$ASTNode* $tmp2653;
    org$pandalanguage$pandac$ASTNode* $tmp2656;
    org$pandalanguage$pandac$ASTNode* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$ASTNode* $tmp2659;
    int $tmp2626;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2630 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2629 = $tmp2630;
        $tmp2628 = $tmp2629;
        t2627 = $tmp2628;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2629));
        if (((panda$core$Bit) { t2627 == NULL }).value) {
        {
            $tmp2632 = NULL;
            $returnValue2631 = $tmp2632;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2632));
            $tmp2626 = 0;
            goto $l2624;
            $l2633:;
            return $returnValue2631;
        }
        }
        memset(&value2635, 0, sizeof(value2635));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2636, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2637 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2636);
        if (((panda$core$Bit) { $tmp2637.nonnull }).value) {
        {
            {
                $tmp2638 = value2635;
                org$pandalanguage$pandac$ASTNode* $tmp2641 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2640 = $tmp2641;
                $tmp2639 = $tmp2640;
                value2635 = $tmp2639;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2640));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2638));
            }
            if (((panda$core$Bit) { value2635 == NULL }).value) {
            {
                $tmp2642 = NULL;
                $returnValue2631 = $tmp2642;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2642));
                $tmp2626 = 1;
                goto $l2624;
                $l2643:;
                return $returnValue2631;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp2645 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp2646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2645.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2646.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2647 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2647, &$s2648);
            {
                $tmp2649 = value2635;
                org$pandalanguage$pandac$ASTNode* $tmp2652 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2651 = $tmp2652;
                $tmp2650 = $tmp2651;
                value2635 = $tmp2650;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2650));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2649));
            }
            if (((panda$core$Bit) { value2635 == NULL }).value) {
            {
                $tmp2653 = NULL;
                $returnValue2631 = $tmp2653;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2653));
                $tmp2626 = 2;
                goto $l2624;
                $l2654:;
                return $returnValue2631;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2656 = value2635;
                $tmp2657 = NULL;
                value2635 = $tmp2657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2656));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2660 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2662 = (($fn2661) t2627->$class->vtable[2])(t2627);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2660, ((panda$core$Int64) { 13 }), $tmp2662, t2627, value2635);
        $tmp2659 = $tmp2660;
        $tmp2658 = $tmp2659;
        $returnValue2631 = $tmp2658;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2659));
        $tmp2626 = 3;
        goto $l2624;
        $l2663:;
        return $returnValue2631;
    }
    $l2624:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2627));
    t2627 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2635));
    switch ($tmp2626) {
        case 3: goto $l2663;
        case 2: goto $l2654;
        case 1: goto $l2643;
        case 0: goto $l2633;
    }
    $l2665:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2669;
    org$pandalanguage$pandac$Variable$Kind kind2671;
    org$pandalanguage$pandac$parser$Token$Kind $match$1396_92672;
    org$pandalanguage$pandac$Variable$Kind $tmp2674;
    org$pandalanguage$pandac$Variable$Kind $tmp2676;
    org$pandalanguage$pandac$Variable$Kind $tmp2678;
    org$pandalanguage$pandac$Variable$Kind $tmp2680;
    panda$collections$Array* declarations2682 = NULL;
    panda$collections$Array* $tmp2683;
    panda$collections$Array* $tmp2684;
    org$pandalanguage$pandac$ASTNode* decl2686 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2687;
    org$pandalanguage$pandac$ASTNode* $tmp2688;
    org$pandalanguage$pandac$ASTNode* $returnValue2690;
    org$pandalanguage$pandac$ASTNode* $tmp2691;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2697;
    org$pandalanguage$pandac$ASTNode* decl2702 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2703;
    org$pandalanguage$pandac$ASTNode* $tmp2704;
    org$pandalanguage$pandac$ASTNode* $tmp2706;
    org$pandalanguage$pandac$ASTNode* $tmp2711;
    org$pandalanguage$pandac$ASTNode* $tmp2712;
    panda$collections$ImmutableArray* $tmp2714;
    int $tmp2668;
    {
        org$pandalanguage$pandac$parser$Token $tmp2670 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start2669 = $tmp2670;
        memset(&kind2671, 0, sizeof(kind2671));
        {
            $match$1396_92672 = start2669.kind;
            panda$core$Bit $tmp2673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_92672.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2673.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2674, ((panda$core$Int64) { 0 }));
                kind2671 = $tmp2674;
            }
            }
            else {
            panda$core$Bit $tmp2675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_92672.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2675.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2676, ((panda$core$Int64) { 1 }));
                kind2671 = $tmp2676;
            }
            }
            else {
            panda$core$Bit $tmp2677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_92672.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2677.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2678, ((panda$core$Int64) { 3 }));
                kind2671 = $tmp2678;
            }
            }
            else {
            panda$core$Bit $tmp2679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1396_92672.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2679.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2680, ((panda$core$Int64) { 2 }));
                kind2671 = $tmp2680;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start2669, &$s2681);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp2685 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2685);
        $tmp2684 = $tmp2685;
        $tmp2683 = $tmp2684;
        declarations2682 = $tmp2683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2684));
        org$pandalanguage$pandac$ASTNode* $tmp2689 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2688 = $tmp2689;
        $tmp2687 = $tmp2688;
        decl2686 = $tmp2687;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2687));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2688));
        if (((panda$core$Bit) { decl2686 == NULL }).value) {
        {
            $tmp2691 = NULL;
            $returnValue2690 = $tmp2691;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2691));
            $tmp2668 = 0;
            goto $l2666;
            $l2692:;
            return $returnValue2690;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations2682, ((panda$core$Object*) decl2686));
        $l2694:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2697, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2698 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2697);
        bool $tmp2696 = ((panda$core$Bit) { $tmp2698.nonnull }).value;
        if (!$tmp2696) goto $l2695;
        {
            int $tmp2701;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2705 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2704 = $tmp2705;
                $tmp2703 = $tmp2704;
                decl2702 = $tmp2703;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2704));
                if (((panda$core$Bit) { decl2702 == NULL }).value) {
                {
                    $tmp2706 = NULL;
                    $returnValue2690 = $tmp2706;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2706));
                    $tmp2701 = 0;
                    goto $l2699;
                    $l2707:;
                    $tmp2668 = 1;
                    goto $l2666;
                    $l2708:;
                    return $returnValue2690;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations2682, ((panda$core$Object*) decl2702));
            }
            $tmp2701 = -1;
            goto $l2699;
            $l2699:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2702));
            decl2702 = NULL;
            switch ($tmp2701) {
                case -1: goto $l2710;
                case 0: goto $l2707;
            }
            $l2710:;
        }
        goto $l2694;
        $l2695:;
        org$pandalanguage$pandac$ASTNode* $tmp2713 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2715 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations2682);
        $tmp2714 = $tmp2715;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2713, ((panda$core$Int64) { 43 }), start2669.position, kind2671, $tmp2714);
        $tmp2712 = $tmp2713;
        $tmp2711 = $tmp2712;
        $returnValue2690 = $tmp2711;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2711));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2714));
        $tmp2668 = 2;
        goto $l2666;
        $l2716:;
        return $returnValue2690;
    }
    $l2666:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2682));
    declarations2682 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2686));
    decl2686 = NULL;
    switch ($tmp2668) {
        case 1: goto $l2708;
        case 2: goto $l2716;
        case 0: goto $l2692;
    }
    $l2718:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2722;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2723;
    org$pandalanguage$pandac$ASTNode* $returnValue2726;
    org$pandalanguage$pandac$ASTNode* $tmp2727;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2730;
    org$pandalanguage$pandac$ASTNode* $tmp2733;
    panda$core$Object* $tmp2736;
    org$pandalanguage$pandac$ASTNode* target2738 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2739;
    org$pandalanguage$pandac$ASTNode* $tmp2740;
    panda$core$String* $tmp2742;
    panda$collections$Array* args2744 = NULL;
    panda$collections$Array* $tmp2745;
    panda$collections$Array* $tmp2746;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2748;
    org$pandalanguage$pandac$ASTNode* expr2753 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2754;
    org$pandalanguage$pandac$ASTNode* $tmp2755;
    panda$core$Object* $tmp2757;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2766;
    org$pandalanguage$pandac$ASTNode* $tmp2768;
    org$pandalanguage$pandac$ASTNode* $tmp2769;
    org$pandalanguage$pandac$ASTNode* $tmp2770;
    panda$core$Object* $tmp2772;
    org$pandalanguage$pandac$ASTNode* $tmp2774;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2778;
    panda$core$Object* $tmp2781;
    org$pandalanguage$pandac$ASTNode* $tmp2783;
    panda$core$Object* $tmp2788;
    org$pandalanguage$pandac$ASTNode* $tmp2790;
    org$pandalanguage$pandac$ASTNode* $tmp2791;
    panda$collections$ImmutableArray* $tmp2793;
    int $tmp2721;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2723, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2725 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2723, &$s2724);
        start2722 = $tmp2725;
        if (((panda$core$Bit) { !start2722.nonnull }).value) {
        {
            $tmp2727 = NULL;
            $returnValue2726 = $tmp2727;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2727));
            $tmp2721 = 0;
            goto $l2719;
            $l2728:;
            return $returnValue2726;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2730, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2732 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2730, &$s2731);
        if (((panda$core$Bit) { !$tmp2732.nonnull }).value) {
        {
            $tmp2733 = NULL;
            $returnValue2726 = $tmp2733;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2733));
            $tmp2721 = 1;
            goto $l2719;
            $l2734:;
            return $returnValue2726;
        }
        }
        panda$core$Bit$wrapper* $tmp2737;
        $tmp2737 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp2737->value = ((panda$core$Bit) { true });
        $tmp2736 = ((panda$core$Object*) $tmp2737);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2736);
        panda$core$Panda$unref$panda$core$Object($tmp2736);
        org$pandalanguage$pandac$ASTNode* $tmp2741 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2743 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2722.value));
        $tmp2742 = $tmp2743;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2741, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start2722.value).position, $tmp2742);
        $tmp2740 = $tmp2741;
        $tmp2739 = $tmp2740;
        target2738 = $tmp2739;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2739));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2740));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2742));
        panda$collections$Array* $tmp2747 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2747);
        $tmp2746 = $tmp2747;
        $tmp2745 = $tmp2746;
        args2744 = $tmp2745;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2745));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2746));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2748, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2749 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2748);
        if (((panda$core$Bit) { !$tmp2749.nonnull }).value) {
        {
            int $tmp2752;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2756 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2755 = $tmp2756;
                $tmp2754 = $tmp2755;
                expr2753 = $tmp2754;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2755));
                if (((panda$core$Bit) { expr2753 == NULL }).value) {
                {
                    panda$core$Object* $tmp2758 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2757 = $tmp2758;
                    panda$core$Panda$unref$panda$core$Object($tmp2757);
                    $tmp2759 = NULL;
                    $returnValue2726 = $tmp2759;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2759));
                    $tmp2752 = 0;
                    goto $l2750;
                    $l2760:;
                    $tmp2721 = 2;
                    goto $l2719;
                    $l2761:;
                    return $returnValue2726;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args2744, ((panda$core$Object*) expr2753));
                $l2763:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2766, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2767 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2766);
                bool $tmp2765 = ((panda$core$Bit) { $tmp2767.nonnull }).value;
                if (!$tmp2765) goto $l2764;
                {
                    {
                        $tmp2768 = expr2753;
                        org$pandalanguage$pandac$ASTNode* $tmp2771 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2770 = $tmp2771;
                        $tmp2769 = $tmp2770;
                        expr2753 = $tmp2769;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2769));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2770));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2768));
                    }
                    if (((panda$core$Bit) { expr2753 == NULL }).value) {
                    {
                        panda$core$Object* $tmp2773 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2772 = $tmp2773;
                        panda$core$Panda$unref$panda$core$Object($tmp2772);
                        $tmp2774 = NULL;
                        $returnValue2726 = $tmp2774;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2774));
                        $tmp2752 = 1;
                        goto $l2750;
                        $l2775:;
                        $tmp2721 = 3;
                        goto $l2719;
                        $l2776:;
                        return $returnValue2726;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args2744, ((panda$core$Object*) expr2753));
                }
                goto $l2763;
                $l2764:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2778, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2780 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2778, &$s2779);
                if (((panda$core$Bit) { !$tmp2780.nonnull }).value) {
                {
                    panda$core$Object* $tmp2782 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2781 = $tmp2782;
                    panda$core$Panda$unref$panda$core$Object($tmp2781);
                    $tmp2783 = NULL;
                    $returnValue2726 = $tmp2783;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2783));
                    $tmp2752 = 2;
                    goto $l2750;
                    $l2784:;
                    $tmp2721 = 4;
                    goto $l2719;
                    $l2785:;
                    return $returnValue2726;
                }
                }
            }
            $tmp2752 = -1;
            goto $l2750;
            $l2750:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2753));
            expr2753 = NULL;
            switch ($tmp2752) {
                case 0: goto $l2760;
                case 1: goto $l2775;
                case -1: goto $l2787;
                case 2: goto $l2784;
            }
            $l2787:;
        }
        }
        panda$core$Object* $tmp2789 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp2788 = $tmp2789;
        panda$core$Panda$unref$panda$core$Object($tmp2788);
        org$pandalanguage$pandac$ASTNode* $tmp2792 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2794 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2744);
        $tmp2793 = $tmp2794;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2792, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$parser$Token) start2722.value).position, target2738, $tmp2793);
        $tmp2791 = $tmp2792;
        $tmp2790 = $tmp2791;
        $returnValue2726 = $tmp2790;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2790));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2791));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2793));
        $tmp2721 = 5;
        goto $l2719;
        $l2795:;
        return $returnValue2726;
    }
    $l2719:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2738));
    target2738 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2744));
    args2744 = NULL;
    switch ($tmp2721) {
        case 3: goto $l2776;
        case 1: goto $l2734;
        case 4: goto $l2785;
        case 5: goto $l2795;
        case 2: goto $l2761;
        case 0: goto $l2728;
    }
    $l2797:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2798;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2799;
    org$pandalanguage$pandac$ASTNode* $returnValue2802;
    org$pandalanguage$pandac$ASTNode* $tmp2803;
    org$pandalanguage$pandac$parser$Token$nullable label2805;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2806;
    org$pandalanguage$pandac$ASTNode* $tmp2808;
    org$pandalanguage$pandac$ASTNode* $tmp2809;
    panda$core$String* $tmp2811;
    org$pandalanguage$pandac$ASTNode* $tmp2814;
    org$pandalanguage$pandac$ASTNode* $tmp2815;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2799, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2801 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2799, &$s2800);
    start2798 = $tmp2801;
    if (((panda$core$Bit) { !start2798.nonnull }).value) {
    {
        $tmp2803 = NULL;
        $returnValue2802 = $tmp2803;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2803));
        return $returnValue2802;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2806, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2807 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2806);
    label2805 = $tmp2807;
    if (((panda$core$Bit) { label2805.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2810 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2812 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2805.value));
        $tmp2811 = $tmp2812;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2810, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2798.value).position, $tmp2811);
        $tmp2809 = $tmp2810;
        $tmp2808 = $tmp2809;
        $returnValue2802 = $tmp2808;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2808));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2809));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2811));
        return $returnValue2802;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2816 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2816, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2798.value).position, NULL);
    $tmp2815 = $tmp2816;
    $tmp2814 = $tmp2815;
    $returnValue2802 = $tmp2814;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2814));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2815));
    return $returnValue2802;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2818;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2819;
    org$pandalanguage$pandac$ASTNode* $returnValue2822;
    org$pandalanguage$pandac$ASTNode* $tmp2823;
    org$pandalanguage$pandac$parser$Token$nullable label2825;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2826;
    org$pandalanguage$pandac$ASTNode* $tmp2828;
    org$pandalanguage$pandac$ASTNode* $tmp2829;
    panda$core$String* $tmp2831;
    org$pandalanguage$pandac$ASTNode* $tmp2834;
    org$pandalanguage$pandac$ASTNode* $tmp2835;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2819, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2821 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2819, &$s2820);
    start2818 = $tmp2821;
    if (((panda$core$Bit) { !start2818.nonnull }).value) {
    {
        $tmp2823 = NULL;
        $returnValue2822 = $tmp2823;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2823));
        return $returnValue2822;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2826, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2827 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2826);
    label2825 = $tmp2827;
    if (((panda$core$Bit) { label2825.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2830 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2832 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2825.value));
        $tmp2831 = $tmp2832;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2830, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2818.value).position, $tmp2831);
        $tmp2829 = $tmp2830;
        $tmp2828 = $tmp2829;
        $returnValue2822 = $tmp2828;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2828));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2829));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2831));
        return $returnValue2822;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2836 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2836, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2818.value).position, NULL);
    $tmp2835 = $tmp2836;
    $tmp2834 = $tmp2835;
    $returnValue2822 = $tmp2834;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2834));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2835));
    return $returnValue2822;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2838;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2839;
    org$pandalanguage$pandac$ASTNode* $returnValue2842;
    org$pandalanguage$pandac$ASTNode* $tmp2843;
    org$pandalanguage$pandac$parser$Token$Kind $match$1500_92845;
    org$pandalanguage$pandac$ASTNode* $tmp2856;
    org$pandalanguage$pandac$ASTNode* $tmp2857;
    panda$collections$Array* children2863 = NULL;
    panda$collections$Array* $tmp2864;
    panda$collections$Array* $tmp2865;
    org$pandalanguage$pandac$ASTNode* expr2867 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2868;
    org$pandalanguage$pandac$ASTNode* $tmp2869;
    org$pandalanguage$pandac$ASTNode* $tmp2871;
    org$pandalanguage$pandac$ASTNode* $tmp2874;
    org$pandalanguage$pandac$ASTNode* $tmp2875;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2839, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2841 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2839, &$s2840);
    start2838 = $tmp2841;
    if (((panda$core$Bit) { !start2838.nonnull }).value) {
    {
        $tmp2843 = NULL;
        $returnValue2842 = $tmp2843;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2843));
        return $returnValue2842;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2846 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1500_92845 = $tmp2846.kind;
        panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1500_92845.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp2848 = $tmp2849.value;
        if ($tmp2848) goto $l2850;
        panda$core$Bit $tmp2851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1500_92845.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp2848 = $tmp2851.value;
        $l2850:;
        panda$core$Bit $tmp2852 = { $tmp2848 };
        bool $tmp2847 = $tmp2852.value;
        if ($tmp2847) goto $l2853;
        panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1500_92845.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp2847 = $tmp2854.value;
        $l2853:;
        panda$core$Bit $tmp2855 = { $tmp2847 };
        if ($tmp2855.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2858 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2858, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start2838.value).position, NULL);
            $tmp2857 = $tmp2858;
            $tmp2856 = $tmp2857;
            $returnValue2842 = $tmp2856;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2856));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2857));
            return $returnValue2842;
        }
        }
        else {
        {
            int $tmp2862;
            {
                panda$collections$Array* $tmp2866 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2866);
                $tmp2865 = $tmp2866;
                $tmp2864 = $tmp2865;
                children2863 = $tmp2864;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2865));
                org$pandalanguage$pandac$ASTNode* $tmp2870 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2869 = $tmp2870;
                $tmp2868 = $tmp2869;
                expr2867 = $tmp2868;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2868));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2869));
                if (((panda$core$Bit) { expr2867 == NULL }).value) {
                {
                    $tmp2871 = NULL;
                    $returnValue2842 = $tmp2871;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2871));
                    $tmp2862 = 0;
                    goto $l2860;
                    $l2872:;
                    return $returnValue2842;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children2863, ((panda$core$Object*) expr2867));
                org$pandalanguage$pandac$ASTNode* $tmp2876 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2876, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start2838.value).position, expr2867);
                $tmp2875 = $tmp2876;
                $tmp2874 = $tmp2875;
                $returnValue2842 = $tmp2874;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2875));
                $tmp2862 = 1;
                goto $l2860;
                $l2877:;
                return $returnValue2842;
            }
            $l2860:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2863));
            children2863 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2867));
            expr2867 = NULL;
            switch ($tmp2862) {
                case 0: goto $l2872;
                case 1: goto $l2877;
            }
            $l2879:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1518_92880;
    org$pandalanguage$pandac$ASTNode* $returnValue2883;
    org$pandalanguage$pandac$ASTNode* $tmp2884;
    org$pandalanguage$pandac$ASTNode* $tmp2885;
    org$pandalanguage$pandac$ASTNode* $tmp2889;
    org$pandalanguage$pandac$ASTNode* $tmp2890;
    org$pandalanguage$pandac$ASTNode* $tmp2894;
    org$pandalanguage$pandac$ASTNode* $tmp2895;
    {
        org$pandalanguage$pandac$parser$Token $tmp2881 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1518_92880 = $tmp2881.kind;
        panda$core$Bit $tmp2882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_92880.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2882.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2886 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2885 = $tmp2886;
            $tmp2884 = $tmp2885;
            $returnValue2883 = $tmp2884;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2884));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2885));
            return $returnValue2883;
        }
        }
        else {
        panda$core$Bit $tmp2888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_92880.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2888.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2891 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2890 = $tmp2891;
            $tmp2889 = $tmp2890;
            $returnValue2883 = $tmp2889;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2890));
            return $returnValue2883;
        }
        }
        else {
        panda$core$Bit $tmp2893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1518_92880.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2893.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2896 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2895 = $tmp2896;
            $tmp2894 = $tmp2895;
            $returnValue2883 = $tmp2894;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2895));
            return $returnValue2883;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1527_92898;
    org$pandalanguage$pandac$ASTNode* $returnValue2901;
    org$pandalanguage$pandac$ASTNode* $tmp2902;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $tmp2907;
    org$pandalanguage$pandac$ASTNode* $tmp2908;
    org$pandalanguage$pandac$ASTNode* $tmp2912;
    org$pandalanguage$pandac$ASTNode* $tmp2913;
    org$pandalanguage$pandac$ASTNode* $tmp2917;
    org$pandalanguage$pandac$ASTNode* $tmp2918;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2921;
    org$pandalanguage$pandac$ASTNode* $tmp2923;
    {
        org$pandalanguage$pandac$parser$Token $tmp2899 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1527_92898 = $tmp2899.kind;
        panda$core$Bit $tmp2900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1527_92898.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2900.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2904 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2903 = $tmp2904;
            $tmp2902 = $tmp2903;
            $returnValue2901 = $tmp2902;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2902));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2903));
            return $returnValue2901;
        }
        }
        else {
        panda$core$Bit $tmp2906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1527_92898.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2906.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2909 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2908 = $tmp2909;
            $tmp2907 = $tmp2908;
            $returnValue2901 = $tmp2907;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2907));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2908));
            return $returnValue2901;
        }
        }
        else {
        panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1527_92898.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2911.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2914 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2913 = $tmp2914;
            $tmp2912 = $tmp2913;
            $returnValue2901 = $tmp2912;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2912));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2913));
            return $returnValue2901;
        }
        }
        else {
        panda$core$Bit $tmp2916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1527_92898.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2916.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2919 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2918 = $tmp2919;
            $tmp2917 = $tmp2918;
            $returnValue2901 = $tmp2917;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2917));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2918));
            return $returnValue2901;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2921, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2921, &$s2922);
            $tmp2923 = NULL;
            $returnValue2901 = $tmp2923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2923));
            return $returnValue2901;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1544_92925;
    org$pandalanguage$pandac$ASTNode* $returnValue2928;
    org$pandalanguage$pandac$ASTNode* $tmp2929;
    org$pandalanguage$pandac$ASTNode* $tmp2930;
    org$pandalanguage$pandac$ASTNode* $tmp2934;
    org$pandalanguage$pandac$ASTNode* $tmp2935;
    org$pandalanguage$pandac$ASTNode* $tmp2939;
    org$pandalanguage$pandac$ASTNode* $tmp2940;
    org$pandalanguage$pandac$ASTNode* $tmp2944;
    org$pandalanguage$pandac$ASTNode* $tmp2945;
    org$pandalanguage$pandac$ASTNode* $tmp2949;
    org$pandalanguage$pandac$ASTNode* $tmp2950;
    org$pandalanguage$pandac$ASTNode* $tmp2954;
    org$pandalanguage$pandac$ASTNode* $tmp2955;
    org$pandalanguage$pandac$ASTNode* $tmp2959;
    org$pandalanguage$pandac$ASTNode* $tmp2960;
    org$pandalanguage$pandac$ASTNode* $tmp2964;
    org$pandalanguage$pandac$ASTNode* $tmp2965;
    org$pandalanguage$pandac$parser$Token id2969;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2971;
    org$pandalanguage$pandac$ASTNode* $tmp2973;
    org$pandalanguage$pandac$ASTNode* $tmp2974;
    panda$core$String* $tmp2975;
    org$pandalanguage$pandac$ASTNode* $tmp2979;
    org$pandalanguage$pandac$ASTNode* $tmp2980;
    org$pandalanguage$pandac$ASTNode* $tmp2988;
    org$pandalanguage$pandac$ASTNode* $tmp2989;
    org$pandalanguage$pandac$ASTNode* $tmp3005;
    org$pandalanguage$pandac$ASTNode* $tmp3006;
    org$pandalanguage$pandac$ASTNode* $tmp3010;
    org$pandalanguage$pandac$ASTNode* $tmp3011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3014;
    org$pandalanguage$pandac$ASTNode* $tmp3016;
    {
        org$pandalanguage$pandac$parser$Token $tmp2926 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1544_92925 = $tmp2926.kind;
        panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2927.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2931 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2930 = $tmp2931;
            $tmp2929 = $tmp2930;
            $returnValue2928 = $tmp2929;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2929));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2930));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2933.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2936 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2935 = $tmp2936;
            $tmp2934 = $tmp2935;
            $returnValue2928 = $tmp2934;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2935));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2938.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2941 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2940 = $tmp2941;
            $tmp2939 = $tmp2940;
            $returnValue2928 = $tmp2939;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2939));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2940));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2943.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2946 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2945 = $tmp2946;
            $tmp2944 = $tmp2945;
            $returnValue2928 = $tmp2944;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2944));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2945));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2948.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2951 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2950 = $tmp2951;
            $tmp2949 = $tmp2950;
            $returnValue2928 = $tmp2949;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2949));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2950));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2953.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2956 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2955 = $tmp2956;
            $tmp2954 = $tmp2955;
            $returnValue2928 = $tmp2954;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2954));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2955));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2958.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2961 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2960 = $tmp2961;
            $tmp2959 = $tmp2960;
            $returnValue2928 = $tmp2959;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2959));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2960));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp2963.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2966 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2965 = $tmp2966;
            $tmp2964 = $tmp2965;
            $returnValue2928 = $tmp2964;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2964));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2965));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2968.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2970 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id2969 = $tmp2970;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2971, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2972 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2971);
            if (((panda$core$Bit) { $tmp2972.nonnull }).value) {
            {
                panda$core$String* $tmp2976 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id2969);
                $tmp2975 = $tmp2976;
                org$pandalanguage$pandac$ASTNode* $tmp2977 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2975);
                $tmp2974 = $tmp2977;
                $tmp2973 = $tmp2974;
                $returnValue2928 = $tmp2973;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2975));
                return $returnValue2928;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id2969);
            org$pandalanguage$pandac$ASTNode* $tmp2981 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2980 = $tmp2981;
            $tmp2979 = $tmp2980;
            $returnValue2928 = $tmp2979;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2979));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2980));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp2983 = $tmp2984.value;
        if ($tmp2983) goto $l2985;
        panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp2983 = $tmp2986.value;
        $l2985:;
        panda$core$Bit $tmp2987 = { $tmp2983 };
        if ($tmp2987.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2990 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2989 = $tmp2990;
            $tmp2988 = $tmp2989;
            $returnValue2928 = $tmp2988;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2988));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2989));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp2995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2994 = $tmp2995.value;
        if ($tmp2994) goto $l2996;
        panda$core$Bit $tmp2997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2994 = $tmp2997.value;
        $l2996:;
        panda$core$Bit $tmp2998 = { $tmp2994 };
        bool $tmp2993 = $tmp2998.value;
        if ($tmp2993) goto $l2999;
        panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2993 = $tmp3000.value;
        $l2999:;
        panda$core$Bit $tmp3001 = { $tmp2993 };
        bool $tmp2992 = $tmp3001.value;
        if ($tmp2992) goto $l3002;
        panda$core$Bit $tmp3003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2992 = $tmp3003.value;
        $l3002:;
        panda$core$Bit $tmp3004 = { $tmp2992 };
        if ($tmp3004.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3007 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3006 = $tmp3007;
            $tmp3005 = $tmp3006;
            $returnValue2928 = $tmp3005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3005));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3006));
            return $returnValue2928;
        }
        }
        else {
        panda$core$Bit $tmp3009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1544_92925.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3009.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3012 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3011 = $tmp3012;
            $tmp3010 = $tmp3011;
            $returnValue2928 = $tmp3010;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3010));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3011));
            return $returnValue2928;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3014, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3014, &$s3015);
            $tmp3016 = NULL;
            $returnValue2928 = $tmp3016;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3016));
            return $returnValue2928;
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
    org$pandalanguage$pandac$parser$Token$nullable start3021;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3022;
    org$pandalanguage$pandac$ASTNode* $returnValue3025;
    org$pandalanguage$pandac$ASTNode* $tmp3026;
    org$pandalanguage$pandac$parser$Token$nullable next3029;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3030;
    org$pandalanguage$pandac$ASTNode* $tmp3033;
    panda$core$MutableString* name3036 = NULL;
    panda$core$MutableString* $tmp3037;
    panda$core$MutableString* $tmp3038;
    panda$core$String* $tmp3040;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3044;
    panda$core$Char8 $tmp3046;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3047;
    org$pandalanguage$pandac$ASTNode* $tmp3050;
    panda$core$String* $tmp3053;
    org$pandalanguage$pandac$ASTNode* $tmp3055;
    org$pandalanguage$pandac$ASTNode* $tmp3056;
    panda$core$String* $tmp3058;
    int $tmp3020;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3022, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3024 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3022, &$s3023);
        start3021 = $tmp3024;
        if (((panda$core$Bit) { !start3021.nonnull }).value) {
        {
            $tmp3026 = NULL;
            $returnValue3025 = $tmp3026;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3026));
            $tmp3020 = 0;
            goto $l3018;
            $l3027:;
            return $returnValue3025;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3030, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3032 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3030, &$s3031);
        next3029 = $tmp3032;
        if (((panda$core$Bit) { !next3029.nonnull }).value) {
        {
            $tmp3033 = NULL;
            $returnValue3025 = $tmp3033;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3033));
            $tmp3020 = 1;
            goto $l3018;
            $l3034:;
            return $returnValue3025;
        }
        }
        panda$core$MutableString* $tmp3039 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3041 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3029.value));
        $tmp3040 = $tmp3041;
        panda$core$MutableString$init$panda$core$String($tmp3039, $tmp3040);
        $tmp3038 = $tmp3039;
        $tmp3037 = $tmp3038;
        name3036 = $tmp3037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3038));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3040));
        $l3042:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3044, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3045 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3044);
            next3029 = $tmp3045;
            if (((panda$core$Bit) { !next3029.nonnull }).value) {
            {
                goto $l3043;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3046, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3036, $tmp3046);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3047, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3049 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3047, &$s3048);
            next3029 = $tmp3049;
            if (((panda$core$Bit) { !next3029.nonnull }).value) {
            {
                $tmp3050 = NULL;
                $returnValue3025 = $tmp3050;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3050));
                $tmp3020 = 2;
                goto $l3018;
                $l3051:;
                return $returnValue3025;
            }
            }
            panda$core$String* $tmp3054 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3029.value));
            $tmp3053 = $tmp3054;
            panda$core$MutableString$append$panda$core$String(name3036, $tmp3053);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3053));
        }
        }
        $l3043:;
        org$pandalanguage$pandac$ASTNode* $tmp3057 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3059 = panda$core$MutableString$finish$R$panda$core$String(name3036);
        $tmp3058 = $tmp3059;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3057, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$parser$Token) start3021.value).position, $tmp3058);
        $tmp3056 = $tmp3057;
        $tmp3055 = $tmp3056;
        $returnValue3025 = $tmp3055;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3055));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3058));
        $tmp3020 = 3;
        goto $l3018;
        $l3060:;
        return $returnValue3025;
    }
    $l3018:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3036));
    name3036 = NULL;
    switch ($tmp3020) {
        case 2: goto $l3051;
        case 3: goto $l3060;
        case 1: goto $l3034;
        case 0: goto $l3027;
    }
    $l3062:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3066;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3067;
    org$pandalanguage$pandac$ASTNode* $returnValue3070;
    org$pandalanguage$pandac$ASTNode* $tmp3071;
    org$pandalanguage$pandac$parser$Token$nullable next3074;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3075;
    org$pandalanguage$pandac$ASTNode* $tmp3078;
    panda$core$MutableString* name3081 = NULL;
    panda$core$MutableString* $tmp3082;
    panda$core$MutableString* $tmp3083;
    panda$core$String* $tmp3085;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3089;
    panda$core$Char8 $tmp3091;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3092;
    org$pandalanguage$pandac$ASTNode* $tmp3095;
    panda$core$String* $tmp3098;
    org$pandalanguage$pandac$ASTNode* $tmp3100;
    org$pandalanguage$pandac$ASTNode* $tmp3101;
    panda$core$String* $tmp3103;
    int $tmp3065;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3067, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3069 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3067, &$s3068);
        start3066 = $tmp3069;
        if (((panda$core$Bit) { !start3066.nonnull }).value) {
        {
            $tmp3071 = NULL;
            $returnValue3070 = $tmp3071;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3071));
            $tmp3065 = 0;
            goto $l3063;
            $l3072:;
            return $returnValue3070;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3075, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3077 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3075, &$s3076);
        next3074 = $tmp3077;
        if (((panda$core$Bit) { !next3074.nonnull }).value) {
        {
            $tmp3078 = NULL;
            $returnValue3070 = $tmp3078;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3078));
            $tmp3065 = 1;
            goto $l3063;
            $l3079:;
            return $returnValue3070;
        }
        }
        panda$core$MutableString* $tmp3084 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3086 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3074.value));
        $tmp3085 = $tmp3086;
        panda$core$MutableString$init$panda$core$String($tmp3084, $tmp3085);
        $tmp3083 = $tmp3084;
        $tmp3082 = $tmp3083;
        name3081 = $tmp3082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3083));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3085));
        $l3087:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3089, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3090 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3089);
            next3074 = $tmp3090;
            if (((panda$core$Bit) { !next3074.nonnull }).value) {
            {
                goto $l3088;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3091, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3081, $tmp3091);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3092, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3094 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3092, &$s3093);
            next3074 = $tmp3094;
            if (((panda$core$Bit) { !next3074.nonnull }).value) {
            {
                $tmp3095 = NULL;
                $returnValue3070 = $tmp3095;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3095));
                $tmp3065 = 2;
                goto $l3063;
                $l3096:;
                return $returnValue3070;
            }
            }
            panda$core$String* $tmp3099 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3074.value));
            $tmp3098 = $tmp3099;
            panda$core$MutableString$append$panda$core$String(name3081, $tmp3098);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3098));
        }
        }
        $l3088:;
        org$pandalanguage$pandac$ASTNode* $tmp3102 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3104 = panda$core$MutableString$finish$R$panda$core$String(name3081);
        $tmp3103 = $tmp3104;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3102, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start3066.value).position, $tmp3103);
        $tmp3101 = $tmp3102;
        $tmp3100 = $tmp3101;
        $returnValue3070 = $tmp3100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3103));
        $tmp3065 = 3;
        goto $l3063;
        $l3105:;
        return $returnValue3070;
    }
    $l3063:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3081));
    name3081 = NULL;
    switch ($tmp3065) {
        case 2: goto $l3096;
        case 1: goto $l3079;
        case 3: goto $l3105;
        case 0: goto $l3072;
    }
    $l3107:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3111;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3112;
    panda$collections$ImmutableArray* $returnValue3115;
    panda$collections$ImmutableArray* $tmp3116;
    org$pandalanguage$pandac$parser$Token$nullable id3119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3120;
    panda$collections$ImmutableArray* $tmp3123;
    panda$collections$Array* parameters3126 = NULL;
    panda$collections$Array* $tmp3127;
    panda$collections$Array* $tmp3128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3130;
    org$pandalanguage$pandac$ASTNode* t3135 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3136;
    org$pandalanguage$pandac$ASTNode* $tmp3137;
    panda$collections$ImmutableArray* $tmp3139;
    org$pandalanguage$pandac$ASTNode* $tmp3143;
    panda$core$String* $tmp3145;
    org$pandalanguage$pandac$ASTNode* $tmp3148;
    panda$core$String* $tmp3150;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3155;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3157;
    panda$collections$ImmutableArray* $tmp3160;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3163;
    org$pandalanguage$pandac$ASTNode* t3168 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3169;
    org$pandalanguage$pandac$ASTNode* $tmp3170;
    panda$collections$ImmutableArray* $tmp3172;
    org$pandalanguage$pandac$ASTNode* $tmp3176;
    panda$core$String* $tmp3178;
    org$pandalanguage$pandac$ASTNode* $tmp3181;
    panda$core$String* $tmp3183;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3185;
    panda$collections$ImmutableArray* $tmp3188;
    panda$collections$ImmutableArray* $tmp3191;
    panda$collections$ImmutableArray* $tmp3192;
    int $tmp3110;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3112, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3114 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3112, &$s3113);
        start3111 = $tmp3114;
        if (((panda$core$Bit) { !start3111.nonnull }).value) {
        {
            $tmp3116 = NULL;
            $returnValue3115 = $tmp3116;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3116));
            $tmp3110 = 0;
            goto $l3108;
            $l3117:;
            return $returnValue3115;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3120, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3122 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3120, &$s3121);
        id3119 = $tmp3122;
        if (((panda$core$Bit) { !id3119.nonnull }).value) {
        {
            $tmp3123 = NULL;
            $returnValue3115 = $tmp3123;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3123));
            $tmp3110 = 1;
            goto $l3108;
            $l3124:;
            return $returnValue3115;
        }
        }
        panda$collections$Array* $tmp3129 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3129);
        $tmp3128 = $tmp3129;
        $tmp3127 = $tmp3128;
        parameters3126 = $tmp3127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3128));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3130, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3131 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3130);
        if (((panda$core$Bit) { $tmp3131.nonnull }).value) {
        {
            int $tmp3134;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3138 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3137 = $tmp3138;
                $tmp3136 = $tmp3137;
                t3135 = $tmp3136;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
                if (((panda$core$Bit) { t3135 == NULL }).value) {
                {
                    $tmp3139 = NULL;
                    $returnValue3115 = $tmp3139;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3139));
                    $tmp3134 = 0;
                    goto $l3132;
                    $l3140:;
                    $tmp3110 = 2;
                    goto $l3108;
                    $l3141:;
                    return $returnValue3115;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3144 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3146 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3119.value));
                $tmp3145 = $tmp3146;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3144, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id3119.value).position, $tmp3145, t3135);
                $tmp3143 = $tmp3144;
                panda$collections$Array$add$panda$collections$Array$T(parameters3126, ((panda$core$Object*) $tmp3143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3145));
            }
            $tmp3134 = -1;
            goto $l3132;
            $l3132:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3135));
            t3135 = NULL;
            switch ($tmp3134) {
                case -1: goto $l3147;
                case 0: goto $l3140;
            }
            $l3147:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3149 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3151 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3119.value));
            $tmp3150 = $tmp3151;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3149, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3119.value).position, $tmp3150);
            $tmp3148 = $tmp3149;
            panda$collections$Array$add$panda$collections$Array$T(parameters3126, ((panda$core$Object*) $tmp3148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3150));
        }
        }
        $l3152:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3155, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3156 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3155);
        bool $tmp3154 = ((panda$core$Bit) { $tmp3156.nonnull }).value;
        if (!$tmp3154) goto $l3153;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3157, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3159 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3157, &$s3158);
            id3119 = $tmp3159;
            if (((panda$core$Bit) { !id3119.nonnull }).value) {
            {
                $tmp3160 = NULL;
                $returnValue3115 = $tmp3160;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3160));
                $tmp3110 = 3;
                goto $l3108;
                $l3161:;
                return $returnValue3115;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3163, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3164 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3163);
            if (((panda$core$Bit) { $tmp3164.nonnull }).value) {
            {
                int $tmp3167;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3171 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3170 = $tmp3171;
                    $tmp3169 = $tmp3170;
                    t3168 = $tmp3169;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3169));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3170));
                    if (((panda$core$Bit) { t3168 == NULL }).value) {
                    {
                        $tmp3172 = NULL;
                        $returnValue3115 = $tmp3172;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3172));
                        $tmp3167 = 0;
                        goto $l3165;
                        $l3173:;
                        $tmp3110 = 4;
                        goto $l3108;
                        $l3174:;
                        return $returnValue3115;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3177 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3179 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3119.value));
                    $tmp3178 = $tmp3179;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3177, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id3119.value).position, $tmp3178, t3168);
                    $tmp3176 = $tmp3177;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3126, ((panda$core$Object*) $tmp3176));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3176));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3178));
                }
                $tmp3167 = -1;
                goto $l3165;
                $l3165:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3168));
                t3168 = NULL;
                switch ($tmp3167) {
                    case -1: goto $l3180;
                    case 0: goto $l3173;
                }
                $l3180:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3182 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3184 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3119.value));
                $tmp3183 = $tmp3184;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3182, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3119.value).position, $tmp3183);
                $tmp3181 = $tmp3182;
                panda$collections$Array$add$panda$collections$Array$T(parameters3126, ((panda$core$Object*) $tmp3181));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3181));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
            }
            }
        }
        goto $l3152;
        $l3153:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3185, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3187 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3185, &$s3186);
        if (((panda$core$Bit) { !$tmp3187.nonnull }).value) {
        {
            $tmp3188 = NULL;
            $returnValue3115 = $tmp3188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3188));
            $tmp3110 = 5;
            goto $l3108;
            $l3189:;
            return $returnValue3115;
        }
        }
        panda$collections$ImmutableArray* $tmp3193 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3126);
        $tmp3192 = $tmp3193;
        $tmp3191 = $tmp3192;
        $returnValue3115 = $tmp3191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3192));
        $tmp3110 = 6;
        goto $l3108;
        $l3194:;
        return $returnValue3115;
    }
    $l3108:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3126));
    parameters3126 = NULL;
    switch ($tmp3110) {
        case 5: goto $l3189;
        case 3: goto $l3161;
        case 2: goto $l3141;
        case 6: goto $l3194;
        case 4: goto $l3174;
        case 1: goto $l3124;
        case 0: goto $l3117;
    }
    $l3196:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3201;
    panda$collections$ImmutableArray* $returnValue3204;
    panda$collections$ImmutableArray* $tmp3205;
    panda$collections$Array* result3208 = NULL;
    panda$collections$Array* $tmp3209;
    panda$collections$Array* $tmp3210;
    org$pandalanguage$pandac$ASTNode* t3212 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3213;
    org$pandalanguage$pandac$ASTNode* $tmp3214;
    panda$collections$ImmutableArray* $tmp3216;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3222;
    org$pandalanguage$pandac$ASTNode* $tmp3224;
    org$pandalanguage$pandac$ASTNode* $tmp3225;
    org$pandalanguage$pandac$ASTNode* $tmp3226;
    panda$collections$ImmutableArray* $tmp3228;
    panda$collections$ImmutableArray* $tmp3231;
    panda$collections$ImmutableArray* $tmp3232;
    int $tmp3199;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3201, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3203 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3201, &$s3202);
        start3200 = $tmp3203;
        if (((panda$core$Bit) { !start3200.nonnull }).value) {
        {
            $tmp3205 = NULL;
            $returnValue3204 = $tmp3205;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3205));
            $tmp3199 = 0;
            goto $l3197;
            $l3206:;
            return $returnValue3204;
        }
        }
        panda$collections$Array* $tmp3211 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3211);
        $tmp3210 = $tmp3211;
        $tmp3209 = $tmp3210;
        result3208 = $tmp3209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3210));
        org$pandalanguage$pandac$ASTNode* $tmp3215 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3214 = $tmp3215;
        $tmp3213 = $tmp3214;
        t3212 = $tmp3213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3214));
        if (((panda$core$Bit) { t3212 == NULL }).value) {
        {
            $tmp3216 = NULL;
            $returnValue3204 = $tmp3216;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
            $tmp3199 = 1;
            goto $l3197;
            $l3217:;
            return $returnValue3204;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3208, ((panda$core$Object*) t3212));
        $l3219:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3222, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3223 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3222);
        bool $tmp3221 = ((panda$core$Bit) { $tmp3223.nonnull }).value;
        if (!$tmp3221) goto $l3220;
        {
            {
                $tmp3224 = t3212;
                org$pandalanguage$pandac$ASTNode* $tmp3227 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3226 = $tmp3227;
                $tmp3225 = $tmp3226;
                t3212 = $tmp3225;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
            }
            if (((panda$core$Bit) { t3212 == NULL }).value) {
            {
                $tmp3228 = NULL;
                $returnValue3204 = $tmp3228;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3228));
                $tmp3199 = 2;
                goto $l3197;
                $l3229:;
                return $returnValue3204;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3208, ((panda$core$Object*) t3212));
        }
        goto $l3219;
        $l3220:;
        panda$collections$ImmutableArray* $tmp3233 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3208);
        $tmp3232 = $tmp3233;
        $tmp3231 = $tmp3232;
        $returnValue3204 = $tmp3231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3232));
        $tmp3199 = 3;
        goto $l3197;
        $l3234:;
        return $returnValue3204;
    }
    $l3197:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3208));
    result3208 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3212));
    t3212 = NULL;
    switch ($tmp3199) {
        case 2: goto $l3229;
        case 1: goto $l3217;
        case 0: goto $l3206;
        case 3: goto $l3234;
    }
    $l3236:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3240;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3241;
    org$pandalanguage$pandac$ASTNode* expr3244 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3245;
    org$pandalanguage$pandac$ASTNode* $tmp3247;
    org$pandalanguage$pandac$ASTNode* $tmp3248;
    org$pandalanguage$pandac$ASTNode* $tmp3249;
    org$pandalanguage$pandac$ASTNode* $returnValue3251;
    org$pandalanguage$pandac$ASTNode* $tmp3252;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3255;
    org$pandalanguage$pandac$ASTNode* $tmp3257;
    org$pandalanguage$pandac$ASTNode* $tmp3258;
    panda$core$String* $tmp3260;
    int $tmp3239;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3241, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3243 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3241, &$s3242);
        a3240 = $tmp3243;
        memset(&expr3244, 0, sizeof(expr3244));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3245, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3246 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3245);
        if (((panda$core$Bit) { $tmp3246.nonnull }).value) {
        {
            {
                $tmp3247 = expr3244;
                org$pandalanguage$pandac$ASTNode* $tmp3250 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3249 = $tmp3250;
                $tmp3248 = $tmp3249;
                expr3244 = $tmp3248;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3248));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3247));
            }
            if (((panda$core$Bit) { expr3244 == NULL }).value) {
            {
                $tmp3252 = NULL;
                $returnValue3251 = $tmp3252;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3252));
                $tmp3239 = 0;
                goto $l3237;
                $l3253:;
                return $returnValue3251;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3255, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3255, &$s3256);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3259 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3261 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3240.value));
        $tmp3260 = $tmp3261;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3259, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3240.value).position, $tmp3260, expr3244);
        $tmp3258 = $tmp3259;
        $tmp3257 = $tmp3258;
        $returnValue3251 = $tmp3257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3260));
        $tmp3239 = 1;
        goto $l3237;
        $l3262:;
        return $returnValue3251;
    }
    $l3237:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3244));
    switch ($tmp3239) {
        case 1: goto $l3262;
        case 0: goto $l3253;
    }
    $l3264:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3268 = NULL;
    panda$collections$Array* $tmp3269;
    panda$collections$Array* $tmp3270;
    org$pandalanguage$pandac$ASTNode* a3280 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3281;
    org$pandalanguage$pandac$ASTNode* $tmp3282;
    panda$collections$ImmutableArray* $returnValue3286;
    panda$collections$ImmutableArray* $tmp3287;
    panda$collections$ImmutableArray* $tmp3288;
    int $tmp3267;
    {
        panda$collections$Array* $tmp3271 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3271);
        $tmp3270 = $tmp3271;
        $tmp3269 = $tmp3270;
        result3268 = $tmp3269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3270));
        $l3272:;
        org$pandalanguage$pandac$parser$Token $tmp3275 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3275.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3274 = $tmp3276.value;
        if (!$tmp3274) goto $l3273;
        {
            int $tmp3279;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3283 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3282 = $tmp3283;
                $tmp3281 = $tmp3282;
                a3280 = $tmp3281;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3282));
                if (((panda$core$Bit) { a3280 == NULL }).value) {
                {
                    $tmp3279 = 0;
                    goto $l3277;
                    $l3284:;
                    goto $l3273;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3268, ((panda$core$Object*) a3280));
            }
            $tmp3279 = -1;
            goto $l3277;
            $l3277:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3280));
            a3280 = NULL;
            switch ($tmp3279) {
                case 0: goto $l3284;
                case -1: goto $l3285;
            }
            $l3285:;
        }
        goto $l3272;
        $l3273:;
        panda$collections$ImmutableArray* $tmp3289 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3268);
        $tmp3288 = $tmp3289;
        $tmp3287 = $tmp3288;
        $returnValue3286 = $tmp3287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3288));
        $tmp3267 = 0;
        goto $l3265;
        $l3290:;
        return $returnValue3286;
    }
    $l3265:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3268));
    result3268 = NULL;
    switch ($tmp3267) {
        case 0: goto $l3290;
    }
    $l3292:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3296;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3297;
    org$pandalanguage$pandac$ASTNode* $returnValue3300;
    org$pandalanguage$pandac$ASTNode* $tmp3301;
    panda$core$MutableString* result3304 = NULL;
    panda$core$MutableString* $tmp3305;
    panda$core$MutableString* $tmp3306;
    org$pandalanguage$pandac$parser$Token next3310;
    org$pandalanguage$pandac$ASTNode* $tmp3315;
    panda$core$String* $tmp3318;
    org$pandalanguage$pandac$ASTNode* $tmp3320;
    org$pandalanguage$pandac$ASTNode* $tmp3321;
    panda$core$String* $tmp3323;
    int $tmp3295;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3297, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3299 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3297, &$s3298);
        start3296 = $tmp3299;
        if (((panda$core$Bit) { !start3296.nonnull }).value) {
        {
            $tmp3301 = NULL;
            $returnValue3300 = $tmp3301;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3301));
            $tmp3295 = 0;
            goto $l3293;
            $l3302:;
            return $returnValue3300;
        }
        }
        panda$core$MutableString* $tmp3307 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3307);
        $tmp3306 = $tmp3307;
        $tmp3305 = $tmp3306;
        result3304 = $tmp3305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3306));
        $l3308:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3311 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3310 = $tmp3311;
            panda$core$Bit $tmp3312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3310.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3312.value) {
            {
                goto $l3309;
            }
            }
            panda$core$Bit $tmp3313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3310.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3313.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3296.value), &$s3314);
                $tmp3315 = NULL;
                $returnValue3300 = $tmp3315;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3315));
                $tmp3295 = 1;
                goto $l3293;
                $l3316:;
                return $returnValue3300;
            }
            }
            panda$core$String* $tmp3319 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3310);
            $tmp3318 = $tmp3319;
            panda$core$MutableString$append$panda$core$String(result3304, $tmp3318);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3318));
        }
        }
        $l3309:;
        org$pandalanguage$pandac$ASTNode* $tmp3322 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3324 = panda$core$MutableString$finish$R$panda$core$String(result3304);
        $tmp3323 = $tmp3324;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3322, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start3296.value).position, $tmp3323);
        $tmp3321 = $tmp3322;
        $tmp3320 = $tmp3321;
        $returnValue3300 = $tmp3320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3321));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3323));
        $tmp3295 = 2;
        goto $l3293;
        $l3325:;
        return $returnValue3300;
    }
    $l3293:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3304));
    result3304 = NULL;
    switch ($tmp3295) {
        case 1: goto $l3316;
        case 2: goto $l3325;
        case 0: goto $l3302;
    }
    $l3327:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3331;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3332;
    org$pandalanguage$pandac$ASTNode* $returnValue3335;
    org$pandalanguage$pandac$ASTNode* $tmp3336;
    org$pandalanguage$pandac$ASTNode* t3339 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3340;
    org$pandalanguage$pandac$ASTNode* $tmp3341;
    org$pandalanguage$pandac$ASTNode* $tmp3343;
    org$pandalanguage$pandac$ASTNode* $tmp3346;
    org$pandalanguage$pandac$ASTNode* $tmp3347;
    panda$core$String* $tmp3349;
    int $tmp3330;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3332, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3334 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3332, &$s3333);
        id3331 = $tmp3334;
        if (((panda$core$Bit) { !id3331.nonnull }).value) {
        {
            $tmp3336 = NULL;
            $returnValue3335 = $tmp3336;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3336));
            $tmp3330 = 0;
            goto $l3328;
            $l3337:;
            return $returnValue3335;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3342 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3341 = $tmp3342;
        $tmp3340 = $tmp3341;
        t3339 = $tmp3340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3341));
        if (((panda$core$Bit) { t3339 == NULL }).value) {
        {
            $tmp3343 = NULL;
            $returnValue3335 = $tmp3343;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3343));
            $tmp3330 = 1;
            goto $l3328;
            $l3344:;
            return $returnValue3335;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3348 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3350 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3331.value));
        $tmp3349 = $tmp3350;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3348, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) id3331.value).position, $tmp3349, t3339);
        $tmp3347 = $tmp3348;
        $tmp3346 = $tmp3347;
        $returnValue3335 = $tmp3346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3347));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3349));
        $tmp3330 = 2;
        goto $l3328;
        $l3351:;
        return $returnValue3335;
    }
    $l3328:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3339));
    t3339 = NULL;
    switch ($tmp3330) {
        case 2: goto $l3351;
        case 1: goto $l3344;
        case 0: goto $l3337;
    }
    $l3353:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3357;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3358;
    panda$collections$ImmutableArray* $returnValue3361;
    panda$collections$ImmutableArray* $tmp3362;
    panda$collections$Array* result3365 = NULL;
    panda$collections$Array* $tmp3366;
    panda$collections$Array* $tmp3367;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3369;
    org$pandalanguage$pandac$ASTNode* param3374 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3375;
    org$pandalanguage$pandac$ASTNode* $tmp3376;
    panda$collections$ImmutableArray* $tmp3378;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3385;
    org$pandalanguage$pandac$ASTNode* $tmp3387;
    org$pandalanguage$pandac$ASTNode* $tmp3388;
    org$pandalanguage$pandac$ASTNode* $tmp3389;
    panda$collections$ImmutableArray* $tmp3391;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3395;
    panda$collections$ImmutableArray* $tmp3398;
    panda$collections$ImmutableArray* $tmp3403;
    panda$collections$ImmutableArray* $tmp3404;
    int $tmp3356;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3358, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3360 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3358, &$s3359);
        start3357 = $tmp3360;
        if (((panda$core$Bit) { !start3357.nonnull }).value) {
        {
            $tmp3362 = NULL;
            $returnValue3361 = $tmp3362;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3362));
            $tmp3356 = 0;
            goto $l3354;
            $l3363:;
            return $returnValue3361;
        }
        }
        panda$collections$Array* $tmp3368 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3368);
        $tmp3367 = $tmp3368;
        $tmp3366 = $tmp3367;
        result3365 = $tmp3366;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3369, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3370 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3369);
        if (((panda$core$Bit) { !$tmp3370.nonnull }).value) {
        {
            int $tmp3373;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3377 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3376 = $tmp3377;
                $tmp3375 = $tmp3376;
                param3374 = $tmp3375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3376));
                if (((panda$core$Bit) { param3374 == NULL }).value) {
                {
                    $tmp3378 = NULL;
                    $returnValue3361 = $tmp3378;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3378));
                    $tmp3373 = 0;
                    goto $l3371;
                    $l3379:;
                    $tmp3356 = 1;
                    goto $l3354;
                    $l3380:;
                    return $returnValue3361;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3365, ((panda$core$Object*) param3374));
                $l3382:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3385, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3386 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3385);
                bool $tmp3384 = ((panda$core$Bit) { $tmp3386.nonnull }).value;
                if (!$tmp3384) goto $l3383;
                {
                    {
                        $tmp3387 = param3374;
                        org$pandalanguage$pandac$ASTNode* $tmp3390 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3389 = $tmp3390;
                        $tmp3388 = $tmp3389;
                        param3374 = $tmp3388;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3388));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3387));
                    }
                    if (((panda$core$Bit) { param3374 == NULL }).value) {
                    {
                        $tmp3391 = NULL;
                        $returnValue3361 = $tmp3391;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3391));
                        $tmp3373 = 1;
                        goto $l3371;
                        $l3392:;
                        $tmp3356 = 2;
                        goto $l3354;
                        $l3393:;
                        return $returnValue3361;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3365, ((panda$core$Object*) param3374));
                }
                goto $l3382;
                $l3383:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3395, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3397 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3395, &$s3396);
                if (((panda$core$Bit) { !$tmp3397.nonnull }).value) {
                {
                    $tmp3398 = NULL;
                    $returnValue3361 = $tmp3398;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3398));
                    $tmp3373 = 2;
                    goto $l3371;
                    $l3399:;
                    $tmp3356 = 3;
                    goto $l3354;
                    $l3400:;
                    return $returnValue3361;
                }
                }
            }
            $tmp3373 = -1;
            goto $l3371;
            $l3371:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3374));
            param3374 = NULL;
            switch ($tmp3373) {
                case 0: goto $l3379;
                case 2: goto $l3399;
                case 1: goto $l3392;
                case -1: goto $l3402;
            }
            $l3402:;
        }
        }
        panda$collections$ImmutableArray* $tmp3405 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3365);
        $tmp3404 = $tmp3405;
        $tmp3403 = $tmp3404;
        $returnValue3361 = $tmp3403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3403));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3404));
        $tmp3356 = 4;
        goto $l3354;
        $l3406:;
        return $returnValue3361;
    }
    $l3354:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3365));
    result3365 = NULL;
    switch ($tmp3356) {
        case 3: goto $l3400;
        case 1: goto $l3380;
        case 4: goto $l3406;
        case 2: goto $l3393;
        case 0: goto $l3363;
    }
    $l3408:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3412;
    org$pandalanguage$pandac$parser$Token$nullable start3413;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3414;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3416;
    org$pandalanguage$pandac$ASTNode* $returnValue3419;
    org$pandalanguage$pandac$ASTNode* $tmp3420;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3423;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3424;
    panda$core$String* name3425 = NULL;
    panda$core$String* $tmp3426;
    panda$core$String* $tmp3427;
    org$pandalanguage$pandac$ASTNode* $tmp3429;
    panda$collections$ImmutableArray* params3432 = NULL;
    panda$collections$ImmutableArray* $tmp3433;
    panda$collections$ImmutableArray* $tmp3434;
    org$pandalanguage$pandac$ASTNode* $tmp3436;
    org$pandalanguage$pandac$ASTNode* returnType3439 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3442;
    org$pandalanguage$pandac$ASTNode* $tmp3443;
    org$pandalanguage$pandac$ASTNode* $tmp3444;
    org$pandalanguage$pandac$ASTNode* $tmp3446;
    org$pandalanguage$pandac$ASTNode* $tmp3449;
    org$pandalanguage$pandac$ASTNode* $tmp3450;
    panda$collections$ImmutableArray* body3451 = NULL;
    panda$collections$ImmutableArray* $tmp3454;
    panda$collections$ImmutableArray* $tmp3455;
    panda$collections$ImmutableArray* $tmp3456;
    org$pandalanguage$pandac$ASTNode* $tmp3458;
    panda$collections$ImmutableArray* $tmp3461;
    panda$collections$ImmutableArray* $tmp3462;
    org$pandalanguage$pandac$ASTNode* $tmp3463;
    org$pandalanguage$pandac$ASTNode* $tmp3464;
    int $tmp3411;
    {
        memset(&kind3412, 0, sizeof(kind3412));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3414, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3415 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3414);
        start3413 = $tmp3415;
        if (((panda$core$Bit) { !start3413.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3416, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3418 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3416, &$s3417);
            start3413 = $tmp3418;
            if (((panda$core$Bit) { !start3413.nonnull }).value) {
            {
                $tmp3420 = NULL;
                $returnValue3419 = $tmp3420;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3420));
                $tmp3411 = 0;
                goto $l3409;
                $l3421:;
                return $returnValue3419;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3423, ((panda$core$Int64) { 0 }));
            kind3412 = $tmp3423;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3424, ((panda$core$Int64) { 1 }));
            kind3412 = $tmp3424;
        }
        }
        panda$core$String* $tmp3428 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3427 = $tmp3428;
        $tmp3426 = $tmp3427;
        name3425 = $tmp3426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3427));
        if (((panda$core$Bit) { name3425 == NULL }).value) {
        {
            $tmp3429 = NULL;
            $returnValue3419 = $tmp3429;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3429));
            $tmp3411 = 1;
            goto $l3409;
            $l3430:;
            return $returnValue3419;
        }
        }
        panda$collections$ImmutableArray* $tmp3435 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3434 = $tmp3435;
        $tmp3433 = $tmp3434;
        params3432 = $tmp3433;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3433));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3434));
        if (((panda$core$Bit) { params3432 == NULL }).value) {
        {
            $tmp3436 = NULL;
            $returnValue3419 = $tmp3436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3436));
            $tmp3411 = 2;
            goto $l3409;
            $l3437:;
            return $returnValue3419;
        }
        }
        memset(&returnType3439, 0, sizeof(returnType3439));
        org$pandalanguage$pandac$parser$Token $tmp3440 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3440.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3441.value) {
        {
            {
                $tmp3442 = returnType3439;
                org$pandalanguage$pandac$ASTNode* $tmp3445 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3444 = $tmp3445;
                $tmp3443 = $tmp3444;
                returnType3439 = $tmp3443;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3444));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3442));
            }
            if (((panda$core$Bit) { returnType3439 == NULL }).value) {
            {
                $tmp3446 = NULL;
                $returnValue3419 = $tmp3446;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3446));
                $tmp3411 = 3;
                goto $l3409;
                $l3447:;
                return $returnValue3419;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3449 = returnType3439;
                $tmp3450 = NULL;
                returnType3439 = $tmp3450;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3449));
            }
        }
        }
        memset(&body3451, 0, sizeof(body3451));
        org$pandalanguage$pandac$parser$Token $tmp3452 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3452.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3453.value) {
        {
            {
                $tmp3454 = body3451;
                panda$collections$ImmutableArray* $tmp3457 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3456 = $tmp3457;
                $tmp3455 = $tmp3456;
                body3451 = $tmp3455;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3454));
            }
            if (((panda$core$Bit) { body3451 == NULL }).value) {
            {
                $tmp3458 = NULL;
                $returnValue3419 = $tmp3458;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3458));
                $tmp3411 = 4;
                goto $l3409;
                $l3459:;
                return $returnValue3419;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3461 = body3451;
                $tmp3462 = NULL;
                body3451 = $tmp3462;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3462));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3461));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3465 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3465, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3413.value).position, p_doccomment, p_annotations, kind3412, name3425, params3432, returnType3439, body3451);
        $tmp3464 = $tmp3465;
        $tmp3463 = $tmp3464;
        $returnValue3419 = $tmp3463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3464));
        $tmp3411 = 5;
        goto $l3409;
        $l3466:;
        return $returnValue3419;
    }
    $l3409:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3425));
    name3425 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3432));
    params3432 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3451));
    switch ($tmp3411) {
        case 5: goto $l3466;
        case 3: goto $l3447;
        case 4: goto $l3459;
        case 2: goto $l3437;
        case 0: goto $l3421;
        case 1: goto $l3430;
    }
    $l3468:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$anonymousMethod$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3472;
    org$pandalanguage$pandac$parser$Token$nullable start3473;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3474;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3476;
    org$pandalanguage$pandac$ASTNode* $returnValue3479;
    org$pandalanguage$pandac$ASTNode* $tmp3480;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3483;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3484;
    panda$collections$ImmutableArray* params3485 = NULL;
    panda$collections$ImmutableArray* $tmp3486;
    panda$collections$ImmutableArray* $tmp3487;
    org$pandalanguage$pandac$ASTNode* $tmp3489;
    org$pandalanguage$pandac$ASTNode* returnType3492 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3495;
    org$pandalanguage$pandac$ASTNode* $tmp3496;
    org$pandalanguage$pandac$ASTNode* $tmp3497;
    org$pandalanguage$pandac$ASTNode* $tmp3499;
    org$pandalanguage$pandac$ASTNode* $tmp3502;
    org$pandalanguage$pandac$ASTNode* $tmp3503;
    panda$collections$ImmutableArray* body3504 = NULL;
    panda$collections$ImmutableArray* $tmp3505;
    panda$collections$ImmutableArray* $tmp3506;
    org$pandalanguage$pandac$ASTNode* $tmp3508;
    org$pandalanguage$pandac$ASTNode* $tmp3511;
    org$pandalanguage$pandac$ASTNode* $tmp3512;
    panda$collections$ImmutableArray* $tmp3514;
    int $tmp3471;
    {
        memset(&kind3472, 0, sizeof(kind3472));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3474, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3475 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3474);
        start3473 = $tmp3475;
        if (((panda$core$Bit) { !start3473.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3476, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3478 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3476, &$s3477);
            start3473 = $tmp3478;
            if (((panda$core$Bit) { !start3473.nonnull }).value) {
            {
                $tmp3480 = NULL;
                $returnValue3479 = $tmp3480;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3480));
                $tmp3471 = 0;
                goto $l3469;
                $l3481:;
                return $returnValue3479;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3483, ((panda$core$Int64) { 0 }));
            kind3472 = $tmp3483;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3484, ((panda$core$Int64) { 1 }));
            kind3472 = $tmp3484;
        }
        }
        panda$collections$ImmutableArray* $tmp3488 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3487 = $tmp3488;
        $tmp3486 = $tmp3487;
        params3485 = $tmp3486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3487));
        if (((panda$core$Bit) { params3485 == NULL }).value) {
        {
            $tmp3489 = NULL;
            $returnValue3479 = $tmp3489;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3489));
            $tmp3471 = 1;
            goto $l3469;
            $l3490:;
            return $returnValue3479;
        }
        }
        memset(&returnType3492, 0, sizeof(returnType3492));
        org$pandalanguage$pandac$parser$Token $tmp3493 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3493.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3494.value) {
        {
            {
                $tmp3495 = returnType3492;
                org$pandalanguage$pandac$ASTNode* $tmp3498 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3497 = $tmp3498;
                $tmp3496 = $tmp3497;
                returnType3492 = $tmp3496;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3495));
            }
            if (((panda$core$Bit) { returnType3492 == NULL }).value) {
            {
                $tmp3499 = NULL;
                $returnValue3479 = $tmp3499;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3499));
                $tmp3471 = 2;
                goto $l3469;
                $l3500:;
                return $returnValue3479;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3502 = returnType3492;
                $tmp3503 = NULL;
                returnType3492 = $tmp3503;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3503));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3502));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3507 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3506 = $tmp3507;
        $tmp3505 = $tmp3506;
        body3504 = $tmp3505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3506));
        if (((panda$core$Bit) { body3504 == NULL }).value) {
        {
            $tmp3508 = NULL;
            $returnValue3479 = $tmp3508;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3508));
            $tmp3471 = 3;
            goto $l3469;
            $l3509:;
            return $returnValue3479;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3513 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp3515 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3515);
        $tmp3514 = $tmp3515;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3513, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3473.value).position, NULL, $tmp3514, kind3472, &$s3516, params3485, returnType3492, body3504);
        $tmp3512 = $tmp3513;
        $tmp3511 = $tmp3512;
        $returnValue3479 = $tmp3511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3512));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3514));
        $tmp3471 = 4;
        goto $l3469;
        $l3517:;
        return $returnValue3479;
    }
    $l3469:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3485));
    params3485 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3492));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3504));
    body3504 = NULL;
    switch ($tmp3471) {
        case 4: goto $l3517;
        case 1: goto $l3490;
        case 2: goto $l3500;
        case 3: goto $l3509;
        case 0: goto $l3481;
    }
    $l3519:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3523;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3524;
    org$pandalanguage$pandac$ASTNode* $returnValue3527;
    org$pandalanguage$pandac$ASTNode* $tmp3528;
    panda$collections$ImmutableArray* params3531 = NULL;
    panda$collections$ImmutableArray* $tmp3532;
    panda$collections$ImmutableArray* $tmp3533;
    org$pandalanguage$pandac$ASTNode* $tmp3535;
    panda$collections$ImmutableArray* b3538 = NULL;
    panda$collections$ImmutableArray* $tmp3539;
    panda$collections$ImmutableArray* $tmp3540;
    org$pandalanguage$pandac$ASTNode* $tmp3542;
    org$pandalanguage$pandac$ASTNode* $tmp3545;
    org$pandalanguage$pandac$ASTNode* $tmp3546;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3548;
    int $tmp3522;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3524, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3526 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3524, &$s3525);
        start3523 = $tmp3526;
        if (((panda$core$Bit) { !start3523.nonnull }).value) {
        {
            $tmp3528 = NULL;
            $returnValue3527 = $tmp3528;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3528));
            $tmp3522 = 0;
            goto $l3520;
            $l3529:;
            return $returnValue3527;
        }
        }
        panda$collections$ImmutableArray* $tmp3534 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3533 = $tmp3534;
        $tmp3532 = $tmp3533;
        params3531 = $tmp3532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3533));
        if (((panda$core$Bit) { params3531 == NULL }).value) {
        {
            $tmp3535 = NULL;
            $returnValue3527 = $tmp3535;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3535));
            $tmp3522 = 1;
            goto $l3520;
            $l3536:;
            return $returnValue3527;
        }
        }
        panda$collections$ImmutableArray* $tmp3541 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3540 = $tmp3541;
        $tmp3539 = $tmp3540;
        b3538 = $tmp3539;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3540));
        if (((panda$core$Bit) { b3538 == NULL }).value) {
        {
            $tmp3542 = NULL;
            $returnValue3527 = $tmp3542;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3542));
            $tmp3522 = 2;
            goto $l3520;
            $l3543:;
            return $returnValue3527;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3547 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3548, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3547, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3523.value).position, p_doccomment, p_annotations, $tmp3548, &$s3549, params3531, NULL, b3538);
        $tmp3546 = $tmp3547;
        $tmp3545 = $tmp3546;
        $returnValue3527 = $tmp3545;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3546));
        $tmp3522 = 3;
        goto $l3520;
        $l3550:;
        return $returnValue3527;
    }
    $l3520:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3531));
    params3531 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b3538));
    b3538 = NULL;
    switch ($tmp3522) {
        case 3: goto $l3550;
        case 2: goto $l3543;
        case 1: goto $l3536;
        case 0: goto $l3529;
    }
    $l3552:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl3556 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3557;
    org$pandalanguage$pandac$ASTNode* $tmp3558;
    org$pandalanguage$pandac$ASTNode* $returnValue3560;
    org$pandalanguage$pandac$ASTNode* $tmp3561;
    org$pandalanguage$pandac$ASTNode* $tmp3564;
    org$pandalanguage$pandac$ASTNode* $tmp3565;
    int $tmp3555;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3559 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3558 = $tmp3559;
        $tmp3557 = $tmp3558;
        decl3556 = $tmp3557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3558));
        if (((panda$core$Bit) { decl3556 == NULL }).value) {
        {
            $tmp3561 = NULL;
            $returnValue3560 = $tmp3561;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3561));
            $tmp3555 = 0;
            goto $l3553;
            $l3562:;
            return $returnValue3560;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3566 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3568 = (($fn3567) decl3556->$class->vtable[2])(decl3556);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3566, ((panda$core$Int64) { 16 }), $tmp3568, p_doccomment, p_annotations, decl3556);
        $tmp3565 = $tmp3566;
        $tmp3564 = $tmp3565;
        $returnValue3560 = $tmp3564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3565));
        $tmp3555 = 1;
        goto $l3553;
        $l3569:;
        return $returnValue3560;
    }
    $l3553:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3556));
    decl3556 = NULL;
    switch ($tmp3555) {
        case 1: goto $l3569;
        case 0: goto $l3562;
    }
    $l3571:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name3575;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3576;
    org$pandalanguage$pandac$ASTNode* $returnValue3579;
    org$pandalanguage$pandac$ASTNode* $tmp3580;
    panda$collections$Array* fields3583 = NULL;
    panda$collections$Array* $tmp3584;
    panda$collections$Array* $tmp3585;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3587;
    org$pandalanguage$pandac$ASTNode* field3594 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3595;
    org$pandalanguage$pandac$ASTNode* $tmp3596;
    org$pandalanguage$pandac$ASTNode* $tmp3598;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3605;
    org$pandalanguage$pandac$ASTNode* $tmp3607;
    org$pandalanguage$pandac$ASTNode* $tmp3608;
    org$pandalanguage$pandac$ASTNode* $tmp3609;
    org$pandalanguage$pandac$ASTNode* $tmp3611;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3616;
    org$pandalanguage$pandac$ASTNode* $tmp3619;
    org$pandalanguage$pandac$ASTNode* $tmp3622;
    org$pandalanguage$pandac$ASTNode* $tmp3623;
    panda$core$String* $tmp3625;
    panda$collections$ImmutableArray* $tmp3627;
    int $tmp3574;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3576, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3578 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3576, &$s3577);
        name3575 = $tmp3578;
        if (((panda$core$Bit) { !name3575.nonnull }).value) {
        {
            $tmp3580 = NULL;
            $returnValue3579 = $tmp3580;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3580));
            $tmp3574 = 0;
            goto $l3572;
            $l3581:;
            return $returnValue3579;
        }
        }
        panda$collections$Array* $tmp3586 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3586);
        $tmp3585 = $tmp3586;
        $tmp3584 = $tmp3585;
        fields3583 = $tmp3584;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3585));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3587, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3588 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3587);
        if (((panda$core$Bit) { $tmp3588.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3589 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp3590 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3589.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp3590.value) {
            {
                int $tmp3593;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3597 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3596 = $tmp3597;
                    $tmp3595 = $tmp3596;
                    field3594 = $tmp3595;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3595));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3596));
                    if (((panda$core$Bit) { field3594 == NULL }).value) {
                    {
                        $tmp3598 = NULL;
                        $returnValue3579 = $tmp3598;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3598));
                        $tmp3593 = 0;
                        goto $l3591;
                        $l3599:;
                        $tmp3574 = 1;
                        goto $l3572;
                        $l3600:;
                        return $returnValue3579;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields3583, ((panda$core$Object*) field3594));
                    $l3602:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3605, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3606 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3605);
                    bool $tmp3604 = ((panda$core$Bit) { $tmp3606.nonnull }).value;
                    if (!$tmp3604) goto $l3603;
                    {
                        {
                            $tmp3607 = field3594;
                            org$pandalanguage$pandac$ASTNode* $tmp3610 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3609 = $tmp3610;
                            $tmp3608 = $tmp3609;
                            field3594 = $tmp3608;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3608));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3609));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3607));
                        }
                        if (((panda$core$Bit) { field3594 == NULL }).value) {
                        {
                            $tmp3611 = NULL;
                            $returnValue3579 = $tmp3611;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3611));
                            $tmp3593 = 1;
                            goto $l3591;
                            $l3612:;
                            $tmp3574 = 2;
                            goto $l3572;
                            $l3613:;
                            return $returnValue3579;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields3583, ((panda$core$Object*) field3594));
                    }
                    goto $l3602;
                    $l3603:;
                }
                $tmp3593 = -1;
                goto $l3591;
                $l3591:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field3594));
                field3594 = NULL;
                switch ($tmp3593) {
                    case 1: goto $l3612;
                    case -1: goto $l3615;
                    case 0: goto $l3599;
                }
                $l3615:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3616, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3618 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3616, &$s3617);
            if (((panda$core$Bit) { !$tmp3618.nonnull }).value) {
            {
                $tmp3619 = NULL;
                $returnValue3579 = $tmp3619;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3619));
                $tmp3574 = 3;
                goto $l3572;
                $l3620:;
                return $returnValue3579;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3624 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3626 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3575.value));
        $tmp3625 = $tmp3626;
        panda$collections$ImmutableArray* $tmp3628 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields3583);
        $tmp3627 = $tmp3628;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3624, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) name3575.value).position, p_doccomment, $tmp3625, $tmp3627);
        $tmp3623 = $tmp3624;
        $tmp3622 = $tmp3623;
        $returnValue3579 = $tmp3622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3625));
        $tmp3574 = 4;
        goto $l3572;
        $l3629:;
        return $returnValue3579;
    }
    $l3572:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields3583));
    fields3583 = NULL;
    switch ($tmp3574) {
        case 1: goto $l3600;
        case 3: goto $l3620;
        case 2: goto $l3613;
        case 0: goto $l3581;
        case 4: goto $l3629;
    }
    $l3631:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3635;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3636;
    org$pandalanguage$pandac$ASTNode* $returnValue3639;
    org$pandalanguage$pandac$ASTNode* $tmp3640;
    org$pandalanguage$pandac$parser$Token$nullable name3643;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3644;
    org$pandalanguage$pandac$ASTNode* $tmp3647;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3650;
    org$pandalanguage$pandac$ASTNode* $tmp3653;
    panda$collections$Array* members3656 = NULL;
    panda$collections$Array* $tmp3657;
    panda$collections$Array* $tmp3658;
    org$pandalanguage$pandac$ASTNode* dc3660 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3661;
    org$pandalanguage$pandac$parser$Token next3664;
    org$pandalanguage$pandac$parser$Token$Kind $match$1961_133666;
    panda$core$String* $tmp3705;
    panda$core$String* $tmp3706;
    panda$core$String* $tmp3708;
    org$pandalanguage$pandac$ASTNode* $tmp3713;
    org$pandalanguage$pandac$ASTNode* $tmp3714;
    org$pandalanguage$pandac$ASTNode* $tmp3715;
    org$pandalanguage$pandac$ASTNode* c3721 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3722;
    org$pandalanguage$pandac$ASTNode* $tmp3723;
    org$pandalanguage$pandac$ASTNode* $tmp3725;
    org$pandalanguage$pandac$ASTNode* $tmp3729;
    org$pandalanguage$pandac$ASTNode* $tmp3730;
    panda$collections$ImmutableArray* a3732 = NULL;
    panda$collections$ImmutableArray* $tmp3733;
    panda$collections$ImmutableArray* $tmp3734;
    org$pandalanguage$pandac$parser$Token next3738;
    org$pandalanguage$pandac$parser$Token$Kind $match$1985_133740;
    panda$core$String* $tmp3744;
    panda$core$String* $tmp3745;
    panda$core$String* $tmp3747;
    org$pandalanguage$pandac$ASTNode* $tmp3752;
    panda$collections$ImmutableArray* $tmp3755;
    panda$collections$ImmutableArray* $tmp3756;
    panda$collections$ImmutableArray* $tmp3757;
    panda$core$String* $tmp3765;
    panda$core$String* $tmp3766;
    panda$core$String* $tmp3768;
    org$pandalanguage$pandac$ASTNode* $tmp3773;
    org$pandalanguage$pandac$ASTNode* $tmp3776;
    org$pandalanguage$pandac$ASTNode* $tmp3777;
    org$pandalanguage$pandac$ASTNode* $tmp3778;
    org$pandalanguage$pandac$ASTNode* decl3784 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3785;
    org$pandalanguage$pandac$ASTNode* $tmp3786;
    org$pandalanguage$pandac$ASTNode* $tmp3788;
    org$pandalanguage$pandac$ASTNode* $tmp3792;
    org$pandalanguage$pandac$ASTNode* $tmp3793;
    panda$collections$ImmutableArray* $tmp3794;
    panda$collections$ImmutableArray* $tmp3795;
    panda$collections$ImmutableArray* $tmp3796;
    org$pandalanguage$pandac$ASTNode* decl3803 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3804;
    org$pandalanguage$pandac$ASTNode* $tmp3805;
    org$pandalanguage$pandac$ASTNode* $tmp3807;
    org$pandalanguage$pandac$ASTNode* $tmp3811;
    org$pandalanguage$pandac$ASTNode* $tmp3812;
    panda$collections$ImmutableArray* $tmp3813;
    panda$collections$ImmutableArray* $tmp3814;
    panda$collections$ImmutableArray* $tmp3815;
    org$pandalanguage$pandac$ASTNode* decl3822 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3823;
    org$pandalanguage$pandac$ASTNode* $tmp3824;
    org$pandalanguage$pandac$ASTNode* $tmp3826;
    org$pandalanguage$pandac$ASTNode* $tmp3830;
    org$pandalanguage$pandac$ASTNode* $tmp3831;
    panda$collections$ImmutableArray* $tmp3832;
    panda$collections$ImmutableArray* $tmp3833;
    panda$collections$ImmutableArray* $tmp3834;
    org$pandalanguage$pandac$ASTNode* decl3845 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3846;
    org$pandalanguage$pandac$ASTNode* $tmp3847;
    org$pandalanguage$pandac$ASTNode* $tmp3849;
    org$pandalanguage$pandac$ASTNode* $tmp3853;
    org$pandalanguage$pandac$ASTNode* $tmp3854;
    panda$collections$ImmutableArray* $tmp3855;
    panda$collections$ImmutableArray* $tmp3856;
    panda$collections$ImmutableArray* $tmp3857;
    org$pandalanguage$pandac$ASTNode* decl3876 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3877;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $tmp3880;
    org$pandalanguage$pandac$ASTNode* $tmp3884;
    org$pandalanguage$pandac$ASTNode* $tmp3885;
    panda$collections$ImmutableArray* $tmp3886;
    panda$collections$ImmutableArray* $tmp3887;
    panda$collections$ImmutableArray* $tmp3888;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3892;
    panda$core$String* $tmp3894;
    panda$core$String* $tmp3895;
    panda$core$String* $tmp3897;
    org$pandalanguage$pandac$ASTNode* $tmp3902;
    org$pandalanguage$pandac$ASTNode* $tmp3905;
    org$pandalanguage$pandac$ASTNode* $tmp3906;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3908;
    panda$core$String* $tmp3909;
    panda$collections$ImmutableArray* $tmp3911;
    int $tmp3634;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3636, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3638 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3636, &$s3637);
        start3635 = $tmp3638;
        if (((panda$core$Bit) { !start3635.nonnull }).value) {
        {
            $tmp3640 = NULL;
            $returnValue3639 = $tmp3640;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3640));
            $tmp3634 = 0;
            goto $l3632;
            $l3641:;
            return $returnValue3639;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3644, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3646 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3644, &$s3645);
        name3643 = $tmp3646;
        if (((panda$core$Bit) { !name3643.nonnull }).value) {
        {
            $tmp3647 = NULL;
            $returnValue3639 = $tmp3647;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3647));
            $tmp3634 = 1;
            goto $l3632;
            $l3648:;
            return $returnValue3639;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3650, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3652 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3650, &$s3651);
        if (((panda$core$Bit) { !$tmp3652.nonnull }).value) {
        {
            $tmp3653 = NULL;
            $returnValue3639 = $tmp3653;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3653));
            $tmp3634 = 2;
            goto $l3632;
            $l3654:;
            return $returnValue3639;
        }
        }
        panda$collections$Array* $tmp3659 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3659);
        $tmp3658 = $tmp3659;
        $tmp3657 = $tmp3658;
        members3656 = $tmp3657;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3657));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3658));
        $tmp3661 = NULL;
        dc3660 = $tmp3661;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3661));
        $l3662:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3665 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3664 = $tmp3665;
            {
                $match$1961_133666 = next3664.kind;
                panda$core$Bit $tmp3676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp3675 = $tmp3676.value;
                if ($tmp3675) goto $l3677;
                panda$core$Bit $tmp3678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp3675 = $tmp3678.value;
                $l3677:;
                panda$core$Bit $tmp3679 = { $tmp3675 };
                bool $tmp3674 = $tmp3679.value;
                if ($tmp3674) goto $l3680;
                panda$core$Bit $tmp3681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp3674 = $tmp3681.value;
                $l3680:;
                panda$core$Bit $tmp3682 = { $tmp3674 };
                bool $tmp3673 = $tmp3682.value;
                if ($tmp3673) goto $l3683;
                panda$core$Bit $tmp3684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp3673 = $tmp3684.value;
                $l3683:;
                panda$core$Bit $tmp3685 = { $tmp3673 };
                bool $tmp3672 = $tmp3685.value;
                if ($tmp3672) goto $l3686;
                panda$core$Bit $tmp3687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3672 = $tmp3687.value;
                $l3686:;
                panda$core$Bit $tmp3688 = { $tmp3672 };
                bool $tmp3671 = $tmp3688.value;
                if ($tmp3671) goto $l3689;
                panda$core$Bit $tmp3690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp3671 = $tmp3690.value;
                $l3689:;
                panda$core$Bit $tmp3691 = { $tmp3671 };
                bool $tmp3670 = $tmp3691.value;
                if ($tmp3670) goto $l3692;
                panda$core$Bit $tmp3693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp3670 = $tmp3693.value;
                $l3692:;
                panda$core$Bit $tmp3694 = { $tmp3670 };
                bool $tmp3669 = $tmp3694.value;
                if ($tmp3669) goto $l3695;
                panda$core$Bit $tmp3696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3669 = $tmp3696.value;
                $l3695:;
                panda$core$Bit $tmp3697 = { $tmp3669 };
                bool $tmp3668 = $tmp3697.value;
                if ($tmp3668) goto $l3698;
                panda$core$Bit $tmp3699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3668 = $tmp3699.value;
                $l3698:;
                panda$core$Bit $tmp3700 = { $tmp3668 };
                bool $tmp3667 = $tmp3700.value;
                if ($tmp3667) goto $l3701;
                panda$core$Bit $tmp3702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3667 = $tmp3702.value;
                $l3701:;
                panda$core$Bit $tmp3703 = { $tmp3667 };
                if ($tmp3703.value) {
                {
                    goto $l3663;
                }
                }
                else {
                panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3704.value) {
                {
                    if (((panda$core$Bit) { dc3660 != NULL }).value) {
                    {
                        panda$core$String* $tmp3709 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3664);
                        $tmp3708 = $tmp3709;
                        panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3707, $tmp3708);
                        $tmp3706 = $tmp3710;
                        panda$core$String* $tmp3712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3706, &$s3711);
                        $tmp3705 = $tmp3712;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3664, $tmp3705);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3705));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3706));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3708));
                    }
                    }
                    {
                        $tmp3713 = dc3660;
                        org$pandalanguage$pandac$ASTNode* $tmp3716 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3715 = $tmp3716;
                        $tmp3714 = $tmp3715;
                        dc3660 = $tmp3714;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3714));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3715));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3713));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1961_133666.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp3717.value) {
                {
                    int $tmp3720;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3724 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3660);
                        $tmp3723 = $tmp3724;
                        $tmp3722 = $tmp3723;
                        c3721 = $tmp3722;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3722));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3723));
                        if (((panda$core$Bit) { c3721 == NULL }).value) {
                        {
                            $tmp3725 = NULL;
                            $returnValue3639 = $tmp3725;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3725));
                            $tmp3720 = 0;
                            goto $l3718;
                            $l3726:;
                            $tmp3634 = 3;
                            goto $l3632;
                            $l3727:;
                            return $returnValue3639;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3656, ((panda$core$Object*) c3721));
                        {
                            $tmp3729 = dc3660;
                            $tmp3730 = NULL;
                            dc3660 = $tmp3730;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3730));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3729));
                        }
                    }
                    $tmp3720 = -1;
                    goto $l3718;
                    $l3718:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3721));
                    c3721 = NULL;
                    switch ($tmp3720) {
                        case -1: goto $l3731;
                        case 0: goto $l3726;
                    }
                    $l3731:;
                }
                }
                else {
                {
                    goto $l3663;
                }
                }
                }
                }
            }
        }
        }
        $l3663:;
        panda$collections$ImmutableArray* $tmp3735 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3735);
        $tmp3734 = $tmp3735;
        $tmp3733 = $tmp3734;
        a3732 = $tmp3733;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3734));
        $l3736:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3739 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3738 = $tmp3739;
            {
                $match$1985_133740 = next3738.kind;
                panda$core$Bit $tmp3741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp3741.value) {
                {
                    panda$core$Int64 $tmp3742 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3732);
                    panda$core$Bit $tmp3743 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3742, ((panda$core$Int64) { 0 }));
                    if ($tmp3743.value) {
                    {
                        panda$core$String* $tmp3748 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3738);
                        $tmp3747 = $tmp3748;
                        panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3746, $tmp3747);
                        $tmp3745 = $tmp3749;
                        panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, &$s3750);
                        $tmp3744 = $tmp3751;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3738, $tmp3744);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3744));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3745));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3747));
                        $tmp3752 = NULL;
                        $returnValue3639 = $tmp3752;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3752));
                        $tmp3634 = 4;
                        goto $l3632;
                        $l3753:;
                        return $returnValue3639;
                    }
                    }
                    {
                        $tmp3755 = a3732;
                        panda$collections$ImmutableArray* $tmp3758 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp3757 = $tmp3758;
                        $tmp3756 = $tmp3757;
                        a3732 = $tmp3756;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3756));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3757));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3755));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3759.value) {
                {
                    bool $tmp3760 = ((panda$core$Bit) { dc3660 != NULL }).value;
                    if ($tmp3760) goto $l3761;
                    panda$core$Int64 $tmp3762 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3732);
                    panda$core$Bit $tmp3763 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3762, ((panda$core$Int64) { 0 }));
                    $tmp3760 = $tmp3763.value;
                    $l3761:;
                    panda$core$Bit $tmp3764 = { $tmp3760 };
                    if ($tmp3764.value) {
                    {
                        panda$core$String* $tmp3769 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3738);
                        $tmp3768 = $tmp3769;
                        panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3767, $tmp3768);
                        $tmp3766 = $tmp3770;
                        panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, &$s3771);
                        $tmp3765 = $tmp3772;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3738, $tmp3765);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3765));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3766));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3768));
                        $tmp3773 = NULL;
                        $returnValue3639 = $tmp3773;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3773));
                        $tmp3634 = 5;
                        goto $l3632;
                        $l3774:;
                        return $returnValue3639;
                    }
                    }
                    {
                        $tmp3776 = dc3660;
                        org$pandalanguage$pandac$ASTNode* $tmp3779 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3778 = $tmp3779;
                        $tmp3777 = $tmp3778;
                        dc3660 = $tmp3777;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3777));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3778));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3776));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp3780.value) {
                {
                    int $tmp3783;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3787 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3660, a3732);
                        $tmp3786 = $tmp3787;
                        $tmp3785 = $tmp3786;
                        decl3784 = $tmp3785;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3785));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3786));
                        if (((panda$core$Bit) { decl3784 == NULL }).value) {
                        {
                            $tmp3788 = NULL;
                            $returnValue3639 = $tmp3788;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3788));
                            $tmp3783 = 0;
                            goto $l3781;
                            $l3789:;
                            $tmp3634 = 6;
                            goto $l3632;
                            $l3790:;
                            return $returnValue3639;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3656, ((panda$core$Object*) decl3784));
                        {
                            $tmp3792 = dc3660;
                            $tmp3793 = NULL;
                            dc3660 = $tmp3793;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3793));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3792));
                        }
                        {
                            $tmp3794 = a3732;
                            panda$collections$ImmutableArray* $tmp3797 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3797);
                            $tmp3796 = $tmp3797;
                            $tmp3795 = $tmp3796;
                            a3732 = $tmp3795;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3795));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3796));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3794));
                        }
                    }
                    $tmp3783 = -1;
                    goto $l3781;
                    $l3781:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3784));
                    decl3784 = NULL;
                    switch ($tmp3783) {
                        case 0: goto $l3789;
                        case -1: goto $l3798;
                    }
                    $l3798:;
                }
                }
                else {
                panda$core$Bit $tmp3799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp3799.value) {
                {
                    int $tmp3802;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3806 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3660, a3732);
                        $tmp3805 = $tmp3806;
                        $tmp3804 = $tmp3805;
                        decl3803 = $tmp3804;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3804));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3805));
                        if (((panda$core$Bit) { decl3803 == NULL }).value) {
                        {
                            $tmp3807 = NULL;
                            $returnValue3639 = $tmp3807;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3807));
                            $tmp3802 = 0;
                            goto $l3800;
                            $l3808:;
                            $tmp3634 = 7;
                            goto $l3632;
                            $l3809:;
                            return $returnValue3639;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3656, ((panda$core$Object*) decl3803));
                        {
                            $tmp3811 = dc3660;
                            $tmp3812 = NULL;
                            dc3660 = $tmp3812;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3812));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3811));
                        }
                        {
                            $tmp3813 = a3732;
                            panda$collections$ImmutableArray* $tmp3816 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3816);
                            $tmp3815 = $tmp3816;
                            $tmp3814 = $tmp3815;
                            a3732 = $tmp3814;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3814));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3815));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3813));
                        }
                    }
                    $tmp3802 = -1;
                    goto $l3800;
                    $l3800:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3803));
                    decl3803 = NULL;
                    switch ($tmp3802) {
                        case 0: goto $l3808;
                        case -1: goto $l3817;
                    }
                    $l3817:;
                }
                }
                else {
                panda$core$Bit $tmp3818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp3818.value) {
                {
                    int $tmp3821;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3825 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3660, a3732);
                        $tmp3824 = $tmp3825;
                        $tmp3823 = $tmp3824;
                        decl3822 = $tmp3823;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3823));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3824));
                        if (((panda$core$Bit) { decl3822 == NULL }).value) {
                        {
                            $tmp3826 = NULL;
                            $returnValue3639 = $tmp3826;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3826));
                            $tmp3821 = 0;
                            goto $l3819;
                            $l3827:;
                            $tmp3634 = 8;
                            goto $l3632;
                            $l3828:;
                            return $returnValue3639;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3656, ((panda$core$Object*) decl3822));
                        {
                            $tmp3830 = dc3660;
                            $tmp3831 = NULL;
                            dc3660 = $tmp3831;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3831));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3830));
                        }
                        {
                            $tmp3832 = a3732;
                            panda$collections$ImmutableArray* $tmp3835 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3835);
                            $tmp3834 = $tmp3835;
                            $tmp3833 = $tmp3834;
                            a3732 = $tmp3833;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3833));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3834));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3832));
                        }
                    }
                    $tmp3821 = -1;
                    goto $l3819;
                    $l3819:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3822));
                    decl3822 = NULL;
                    switch ($tmp3821) {
                        case -1: goto $l3836;
                        case 0: goto $l3827;
                    }
                    $l3836:;
                }
                }
                else {
                panda$core$Bit $tmp3838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp3837 = $tmp3838.value;
                if ($tmp3837) goto $l3839;
                panda$core$Bit $tmp3840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3837 = $tmp3840.value;
                $l3839:;
                panda$core$Bit $tmp3841 = { $tmp3837 };
                if ($tmp3841.value) {
                {
                    int $tmp3844;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3848 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3660, a3732);
                        $tmp3847 = $tmp3848;
                        $tmp3846 = $tmp3847;
                        decl3845 = $tmp3846;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3846));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3847));
                        if (((panda$core$Bit) { decl3845 == NULL }).value) {
                        {
                            $tmp3849 = NULL;
                            $returnValue3639 = $tmp3849;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3849));
                            $tmp3844 = 0;
                            goto $l3842;
                            $l3850:;
                            $tmp3634 = 9;
                            goto $l3632;
                            $l3851:;
                            return $returnValue3639;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3656, ((panda$core$Object*) decl3845));
                        {
                            $tmp3853 = dc3660;
                            $tmp3854 = NULL;
                            dc3660 = $tmp3854;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3854));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3853));
                        }
                        {
                            $tmp3855 = a3732;
                            panda$collections$ImmutableArray* $tmp3858 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3858);
                            $tmp3857 = $tmp3858;
                            $tmp3856 = $tmp3857;
                            a3732 = $tmp3856;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3856));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3857));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3855));
                        }
                    }
                    $tmp3844 = -1;
                    goto $l3842;
                    $l3842:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3845));
                    decl3845 = NULL;
                    switch ($tmp3844) {
                        case 0: goto $l3850;
                        case -1: goto $l3859;
                    }
                    $l3859:;
                }
                }
                else {
                panda$core$Bit $tmp3863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp3862 = $tmp3863.value;
                if ($tmp3862) goto $l3864;
                panda$core$Bit $tmp3865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3862 = $tmp3865.value;
                $l3864:;
                panda$core$Bit $tmp3866 = { $tmp3862 };
                bool $tmp3861 = $tmp3866.value;
                if ($tmp3861) goto $l3867;
                panda$core$Bit $tmp3868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3861 = $tmp3868.value;
                $l3867:;
                panda$core$Bit $tmp3869 = { $tmp3861 };
                bool $tmp3860 = $tmp3869.value;
                if ($tmp3860) goto $l3870;
                panda$core$Bit $tmp3871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3860 = $tmp3871.value;
                $l3870:;
                panda$core$Bit $tmp3872 = { $tmp3860 };
                if ($tmp3872.value) {
                {
                    int $tmp3875;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3879 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3660, a3732);
                        $tmp3878 = $tmp3879;
                        $tmp3877 = $tmp3878;
                        decl3876 = $tmp3877;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3878));
                        if (((panda$core$Bit) { decl3876 == NULL }).value) {
                        {
                            $tmp3880 = NULL;
                            $returnValue3639 = $tmp3880;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3880));
                            $tmp3875 = 0;
                            goto $l3873;
                            $l3881:;
                            $tmp3634 = 10;
                            goto $l3632;
                            $l3882:;
                            return $returnValue3639;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3656, ((panda$core$Object*) decl3876));
                        {
                            $tmp3884 = dc3660;
                            $tmp3885 = NULL;
                            dc3660 = $tmp3885;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3885));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3884));
                        }
                        {
                            $tmp3886 = a3732;
                            panda$collections$ImmutableArray* $tmp3889 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3889);
                            $tmp3888 = $tmp3889;
                            $tmp3887 = $tmp3888;
                            a3732 = $tmp3887;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3887));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3888));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3886));
                        }
                    }
                    $tmp3875 = -1;
                    goto $l3873;
                    $l3873:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3876));
                    decl3876 = NULL;
                    switch ($tmp3875) {
                        case 0: goto $l3881;
                        case -1: goto $l3890;
                    }
                    $l3890:;
                }
                }
                else {
                panda$core$Bit $tmp3891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1985_133740.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp3891.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3892, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3892, &$s3893);
                    goto $l3737;
                }
                }
                else {
                {
                    panda$core$String* $tmp3898 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3738);
                    $tmp3897 = $tmp3898;
                    panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3896, $tmp3897);
                    $tmp3895 = $tmp3899;
                    panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3895, &$s3900);
                    $tmp3894 = $tmp3901;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3738, $tmp3894);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3897));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp3902 = NULL;
                    $returnValue3639 = $tmp3902;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3902));
                    $tmp3634 = 11;
                    goto $l3632;
                    $l3903:;
                    return $returnValue3639;
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
        $l3737:;
        org$pandalanguage$pandac$ASTNode* $tmp3907 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3908, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp3910 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3643.value));
        $tmp3909 = $tmp3910;
        panda$collections$ImmutableArray* $tmp3912 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3656);
        $tmp3911 = $tmp3912;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3907, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start3635.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp3908, $tmp3909, NULL, NULL, $tmp3911);
        $tmp3906 = $tmp3907;
        $tmp3905 = $tmp3906;
        $returnValue3639 = $tmp3905;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3905));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3906));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3911));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3909));
        $tmp3634 = 12;
        goto $l3632;
        $l3913:;
        return $returnValue3639;
    }
    $l3632:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3656));
    members3656 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3660));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3732));
    a3732 = NULL;
    switch ($tmp3634) {
        case 3: goto $l3727;
        case 5: goto $l3774;
        case 7: goto $l3809;
        case 9: goto $l3851;
        case 10: goto $l3882;
        case 1: goto $l3648;
        case 11: goto $l3903;
        case 2: goto $l3654;
        case 8: goto $l3828;
        case 4: goto $l3753;
        case 6: goto $l3790;
        case 12: goto $l3913;
        case 0: goto $l3641;
    }
    $l3915:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3919;
    org$pandalanguage$pandac$ASTNode* dc3921 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3923;
    org$pandalanguage$pandac$ASTNode* $tmp3924;
    org$pandalanguage$pandac$ASTNode* $tmp3925;
    org$pandalanguage$pandac$ASTNode* $returnValue3927;
    org$pandalanguage$pandac$ASTNode* $tmp3928;
    org$pandalanguage$pandac$ASTNode* $tmp3931;
    org$pandalanguage$pandac$ASTNode* $tmp3932;
    panda$collections$ImmutableArray* a3933 = NULL;
    panda$collections$ImmutableArray* $tmp3934;
    panda$collections$ImmutableArray* $tmp3935;
    org$pandalanguage$pandac$ASTNode* $tmp3937;
    org$pandalanguage$pandac$parser$Token$Kind $match$2071_93940;
    org$pandalanguage$pandac$ASTNode* $tmp3943;
    org$pandalanguage$pandac$ASTNode* $tmp3944;
    org$pandalanguage$pandac$ASTNode* $tmp3949;
    org$pandalanguage$pandac$ASTNode* $tmp3950;
    org$pandalanguage$pandac$ASTNode* $tmp3955;
    org$pandalanguage$pandac$ASTNode* $tmp3956;
    org$pandalanguage$pandac$ASTNode* $tmp3965;
    org$pandalanguage$pandac$ASTNode* $tmp3966;
    org$pandalanguage$pandac$ASTNode* $tmp3971;
    org$pandalanguage$pandac$ASTNode* $tmp3972;
    org$pandalanguage$pandac$ASTNode* $tmp3989;
    org$pandalanguage$pandac$ASTNode* $tmp3990;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3994;
    org$pandalanguage$pandac$ASTNode* $tmp3996;
    int $tmp3918;
    {
        org$pandalanguage$pandac$parser$Token $tmp3920 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start3919 = $tmp3920;
        memset(&dc3921, 0, sizeof(dc3921));
        panda$core$Bit $tmp3922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start3919.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3922.value) {
        {
            {
                $tmp3923 = dc3921;
                org$pandalanguage$pandac$ASTNode* $tmp3926 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3925 = $tmp3926;
                $tmp3924 = $tmp3925;
                dc3921 = $tmp3924;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3923));
            }
            if (((panda$core$Bit) { dc3921 == NULL }).value) {
            {
                $tmp3928 = NULL;
                $returnValue3927 = $tmp3928;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3928));
                $tmp3918 = 0;
                goto $l3916;
                $l3929:;
                return $returnValue3927;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3931 = dc3921;
                $tmp3932 = NULL;
                dc3921 = $tmp3932;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3931));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3936 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp3935 = $tmp3936;
        $tmp3934 = $tmp3935;
        a3933 = $tmp3934;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3934));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3935));
        if (((panda$core$Bit) { a3933 == NULL }).value) {
        {
            $tmp3937 = NULL;
            $returnValue3927 = $tmp3937;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3937));
            $tmp3918 = 1;
            goto $l3916;
            $l3938:;
            return $returnValue3927;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3941 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2071_93940 = $tmp3941.kind;
            panda$core$Bit $tmp3942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3942.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3945 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3921, a3933);
                $tmp3944 = $tmp3945;
                $tmp3943 = $tmp3944;
                $returnValue3927 = $tmp3943;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3944));
                $tmp3918 = 2;
                goto $l3916;
                $l3946:;
                return $returnValue3927;
            }
            }
            else {
            panda$core$Bit $tmp3948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3948.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3951 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3921, a3933);
                $tmp3950 = $tmp3951;
                $tmp3949 = $tmp3950;
                $returnValue3927 = $tmp3949;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3950));
                $tmp3918 = 3;
                goto $l3916;
                $l3952:;
                return $returnValue3927;
            }
            }
            else {
            panda$core$Bit $tmp3954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3954.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3957 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3921, a3933);
                $tmp3956 = $tmp3957;
                $tmp3955 = $tmp3956;
                $returnValue3927 = $tmp3955;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3956));
                $tmp3918 = 4;
                goto $l3916;
                $l3958:;
                return $returnValue3927;
            }
            }
            else {
            panda$core$Bit $tmp3961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp3960 = $tmp3961.value;
            if ($tmp3960) goto $l3962;
            panda$core$Bit $tmp3963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3960 = $tmp3963.value;
            $l3962:;
            panda$core$Bit $tmp3964 = { $tmp3960 };
            if ($tmp3964.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3967 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3921, a3933);
                $tmp3966 = $tmp3967;
                $tmp3965 = $tmp3966;
                $returnValue3927 = $tmp3965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3966));
                $tmp3918 = 5;
                goto $l3916;
                $l3968:;
                return $returnValue3927;
            }
            }
            else {
            panda$core$Bit $tmp3970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp3970.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3973 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3921, a3933);
                $tmp3972 = $tmp3973;
                $tmp3971 = $tmp3972;
                $returnValue3927 = $tmp3971;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3971));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3972));
                $tmp3918 = 6;
                goto $l3916;
                $l3974:;
                return $returnValue3927;
            }
            }
            else {
            panda$core$Bit $tmp3979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp3978 = $tmp3979.value;
            if ($tmp3978) goto $l3980;
            panda$core$Bit $tmp3981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp3978 = $tmp3981.value;
            $l3980:;
            panda$core$Bit $tmp3982 = { $tmp3978 };
            bool $tmp3977 = $tmp3982.value;
            if ($tmp3977) goto $l3983;
            panda$core$Bit $tmp3984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp3977 = $tmp3984.value;
            $l3983:;
            panda$core$Bit $tmp3985 = { $tmp3977 };
            bool $tmp3976 = $tmp3985.value;
            if ($tmp3976) goto $l3986;
            panda$core$Bit $tmp3987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2071_93940.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp3976 = $tmp3987.value;
            $l3986:;
            panda$core$Bit $tmp3988 = { $tmp3976 };
            if ($tmp3988.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3991 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3921, a3933);
                $tmp3990 = $tmp3991;
                $tmp3989 = $tmp3990;
                $returnValue3927 = $tmp3989;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3989));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3990));
                $tmp3918 = 7;
                goto $l3916;
                $l3992:;
                return $returnValue3927;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3994, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3994, &$s3995);
                $tmp3996 = NULL;
                $returnValue3927 = $tmp3996;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3996));
                $tmp3918 = 8;
                goto $l3916;
                $l3997:;
                return $returnValue3927;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp3918 = -1;
    goto $l3916;
    $l3916:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3921));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3933));
    a3933 = NULL;
    switch ($tmp3918) {
        case 8: goto $l3997;
        case 6: goto $l3974;
        case 4: goto $l3958;
        case 5: goto $l3968;
        case -1: goto $l3999;
        case 7: goto $l3992;
        case 1: goto $l3938;
        case 2: goto $l3946;
        case 0: goto $l3929;
        case 3: goto $l3952;
    }
    $l3999:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4003;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4004;
    org$pandalanguage$pandac$ASTNode* $returnValue4007;
    org$pandalanguage$pandac$ASTNode* $tmp4008;
    org$pandalanguage$pandac$parser$Token$nullable name4011;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4012;
    org$pandalanguage$pandac$ASTNode* $tmp4015;
    panda$collections$ImmutableArray* generics4018 = NULL;
    panda$collections$ImmutableArray* $tmp4021;
    panda$collections$ImmutableArray* $tmp4022;
    panda$collections$ImmutableArray* $tmp4023;
    org$pandalanguage$pandac$ASTNode* $tmp4025;
    panda$collections$ImmutableArray* $tmp4028;
    panda$collections$ImmutableArray* $tmp4029;
    panda$collections$ImmutableArray* stypes4030 = NULL;
    panda$collections$ImmutableArray* $tmp4033;
    panda$collections$ImmutableArray* $tmp4034;
    panda$collections$ImmutableArray* $tmp4035;
    org$pandalanguage$pandac$ASTNode* $tmp4037;
    panda$collections$ImmutableArray* $tmp4040;
    panda$collections$ImmutableArray* $tmp4041;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4042;
    org$pandalanguage$pandac$ASTNode* $tmp4045;
    panda$collections$Array* members4048 = NULL;
    panda$collections$Array* $tmp4049;
    panda$collections$Array* $tmp4050;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4055;
    org$pandalanguage$pandac$ASTNode* member4060 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4061;
    org$pandalanguage$pandac$ASTNode* $tmp4062;
    org$pandalanguage$pandac$ASTNode* $tmp4064;
    org$pandalanguage$pandac$ASTNode* $tmp4069;
    org$pandalanguage$pandac$ASTNode* $tmp4070;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4072;
    panda$core$String* $tmp4073;
    panda$collections$ImmutableArray* $tmp4075;
    int $tmp4002;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4004, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4006 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4004, &$s4005);
        start4003 = $tmp4006;
        if (((panda$core$Bit) { !start4003.nonnull }).value) {
        {
            $tmp4008 = NULL;
            $returnValue4007 = $tmp4008;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4008));
            $tmp4002 = 0;
            goto $l4000;
            $l4009:;
            return $returnValue4007;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4012, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4014 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4012, &$s4013);
        name4011 = $tmp4014;
        if (((panda$core$Bit) { !name4011.nonnull }).value) {
        {
            $tmp4015 = NULL;
            $returnValue4007 = $tmp4015;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4015));
            $tmp4002 = 1;
            goto $l4000;
            $l4016:;
            return $returnValue4007;
        }
        }
        memset(&generics4018, 0, sizeof(generics4018));
        org$pandalanguage$pandac$parser$Token $tmp4019 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4019.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4020.value) {
        {
            {
                $tmp4021 = generics4018;
                panda$collections$ImmutableArray* $tmp4024 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4023 = $tmp4024;
                $tmp4022 = $tmp4023;
                generics4018 = $tmp4022;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4022));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4023));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4021));
            }
            if (((panda$core$Bit) { generics4018 == NULL }).value) {
            {
                $tmp4025 = NULL;
                $returnValue4007 = $tmp4025;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4025));
                $tmp4002 = 2;
                goto $l4000;
                $l4026:;
                return $returnValue4007;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4028 = generics4018;
                $tmp4029 = NULL;
                generics4018 = $tmp4029;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4029));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4028));
            }
        }
        }
        memset(&stypes4030, 0, sizeof(stypes4030));
        org$pandalanguage$pandac$parser$Token $tmp4031 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4031.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4032.value) {
        {
            {
                $tmp4033 = stypes4030;
                panda$collections$ImmutableArray* $tmp4036 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4035 = $tmp4036;
                $tmp4034 = $tmp4035;
                stypes4030 = $tmp4034;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4034));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4035));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4033));
            }
            if (((panda$core$Bit) { stypes4030 == NULL }).value) {
            {
                $tmp4037 = NULL;
                $returnValue4007 = $tmp4037;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4037));
                $tmp4002 = 3;
                goto $l4000;
                $l4038:;
                return $returnValue4007;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4040 = stypes4030;
                $tmp4041 = NULL;
                stypes4030 = $tmp4041;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4041));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4040));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4042, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4044 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4042, &$s4043);
        if (((panda$core$Bit) { !$tmp4044.nonnull }).value) {
        {
            $tmp4045 = NULL;
            $returnValue4007 = $tmp4045;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4045));
            $tmp4002 = 4;
            goto $l4000;
            $l4046:;
            return $returnValue4007;
        }
        }
        panda$collections$Array* $tmp4051 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4051);
        $tmp4050 = $tmp4051;
        $tmp4049 = $tmp4050;
        members4048 = $tmp4049;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4049));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4050));
        $l4052:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4055, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4056 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4055);
        bool $tmp4054 = ((panda$core$Bit) { !$tmp4056.nonnull }).value;
        if (!$tmp4054) goto $l4053;
        {
            int $tmp4059;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4063 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4062 = $tmp4063;
                $tmp4061 = $tmp4062;
                member4060 = $tmp4061;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4062));
                if (((panda$core$Bit) { member4060 == NULL }).value) {
                {
                    $tmp4064 = NULL;
                    $returnValue4007 = $tmp4064;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4064));
                    $tmp4059 = 0;
                    goto $l4057;
                    $l4065:;
                    $tmp4002 = 5;
                    goto $l4000;
                    $l4066:;
                    return $returnValue4007;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4048, ((panda$core$Object*) member4060));
            }
            $tmp4059 = -1;
            goto $l4057;
            $l4057:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4060));
            member4060 = NULL;
            switch ($tmp4059) {
                case 0: goto $l4065;
                case -1: goto $l4068;
            }
            $l4068:;
        }
        goto $l4052;
        $l4053:;
        org$pandalanguage$pandac$ASTNode* $tmp4071 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4072, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4074 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4011.value));
        $tmp4073 = $tmp4074;
        panda$collections$ImmutableArray* $tmp4076 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4048);
        $tmp4075 = $tmp4076;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4071, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4003.value).position, p_doccomment, p_annotations, $tmp4072, $tmp4073, generics4018, stypes4030, $tmp4075);
        $tmp4070 = $tmp4071;
        $tmp4069 = $tmp4070;
        $returnValue4007 = $tmp4069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4073));
        $tmp4002 = 6;
        goto $l4000;
        $l4077:;
        return $returnValue4007;
    }
    $l4000:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4018));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4030));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4048));
    members4048 = NULL;
    switch ($tmp4002) {
        case 1: goto $l4016;
        case 3: goto $l4038;
        case 4: goto $l4046;
        case 2: goto $l4026;
        case 6: goto $l4077;
        case 5: goto $l4066;
        case 0: goto $l4009;
    }
    $l4079:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4083;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4084;
    org$pandalanguage$pandac$ASTNode* $returnValue4087;
    org$pandalanguage$pandac$ASTNode* $tmp4088;
    org$pandalanguage$pandac$parser$Token$nullable name4091;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4092;
    org$pandalanguage$pandac$ASTNode* $tmp4095;
    panda$collections$ImmutableArray* generics4098 = NULL;
    panda$collections$ImmutableArray* $tmp4101;
    panda$collections$ImmutableArray* $tmp4102;
    panda$collections$ImmutableArray* $tmp4103;
    org$pandalanguage$pandac$ASTNode* $tmp4105;
    panda$collections$ImmutableArray* $tmp4108;
    panda$collections$ImmutableArray* $tmp4109;
    panda$collections$ImmutableArray* $tmp4110;
    panda$collections$Array* intfs4112 = NULL;
    panda$collections$Array* $tmp4113;
    panda$collections$Array* $tmp4114;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4116;
    org$pandalanguage$pandac$ASTNode* t4121 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4122;
    org$pandalanguage$pandac$ASTNode* $tmp4123;
    org$pandalanguage$pandac$ASTNode* $tmp4125;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4132;
    org$pandalanguage$pandac$ASTNode* $tmp4134;
    org$pandalanguage$pandac$ASTNode* $tmp4135;
    org$pandalanguage$pandac$ASTNode* $tmp4136;
    org$pandalanguage$pandac$ASTNode* $tmp4138;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4143;
    org$pandalanguage$pandac$ASTNode* $tmp4146;
    panda$collections$Array* members4149 = NULL;
    panda$collections$Array* $tmp4150;
    panda$collections$Array* $tmp4151;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4156;
    org$pandalanguage$pandac$ASTNode* member4161 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4162;
    org$pandalanguage$pandac$ASTNode* $tmp4163;
    org$pandalanguage$pandac$ASTNode* $tmp4165;
    org$pandalanguage$pandac$ASTNode* $tmp4170;
    org$pandalanguage$pandac$ASTNode* $tmp4171;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4173;
    panda$core$String* $tmp4174;
    panda$collections$ImmutableArray* $tmp4176;
    panda$collections$ImmutableArray* $tmp4178;
    int $tmp4082;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4084, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4086 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4084, &$s4085);
        start4083 = $tmp4086;
        if (((panda$core$Bit) { !start4083.nonnull }).value) {
        {
            $tmp4088 = NULL;
            $returnValue4087 = $tmp4088;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4088));
            $tmp4082 = 0;
            goto $l4080;
            $l4089:;
            return $returnValue4087;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4092, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4094 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4092, &$s4093);
        name4091 = $tmp4094;
        if (((panda$core$Bit) { !name4091.nonnull }).value) {
        {
            $tmp4095 = NULL;
            $returnValue4087 = $tmp4095;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4095));
            $tmp4082 = 1;
            goto $l4080;
            $l4096:;
            return $returnValue4087;
        }
        }
        memset(&generics4098, 0, sizeof(generics4098));
        org$pandalanguage$pandac$parser$Token $tmp4099 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4099.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4100.value) {
        {
            {
                $tmp4101 = generics4098;
                panda$collections$ImmutableArray* $tmp4104 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4103 = $tmp4104;
                $tmp4102 = $tmp4103;
                generics4098 = $tmp4102;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4102));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4101));
            }
            if (((panda$core$Bit) { generics4098 == NULL }).value) {
            {
                $tmp4105 = NULL;
                $returnValue4087 = $tmp4105;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4105));
                $tmp4082 = 2;
                goto $l4080;
                $l4106:;
                return $returnValue4087;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4108 = generics4098;
                panda$collections$ImmutableArray* $tmp4111 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4111);
                $tmp4110 = $tmp4111;
                $tmp4109 = $tmp4110;
                generics4098 = $tmp4109;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4108));
            }
        }
        }
        panda$collections$Array* $tmp4115 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4115);
        $tmp4114 = $tmp4115;
        $tmp4113 = $tmp4114;
        intfs4112 = $tmp4113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4114));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4116, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4117 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4116);
        if (((panda$core$Bit) { $tmp4117.nonnull }).value) {
        {
            int $tmp4120;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4124 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4123 = $tmp4124;
                $tmp4122 = $tmp4123;
                t4121 = $tmp4122;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4123));
                if (((panda$core$Bit) { t4121 == NULL }).value) {
                {
                    $tmp4125 = NULL;
                    $returnValue4087 = $tmp4125;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4125));
                    $tmp4120 = 0;
                    goto $l4118;
                    $l4126:;
                    $tmp4082 = 3;
                    goto $l4080;
                    $l4127:;
                    return $returnValue4087;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4112, ((panda$core$Object*) t4121));
                $l4129:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4132, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4133 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4132);
                bool $tmp4131 = ((panda$core$Bit) { $tmp4133.nonnull }).value;
                if (!$tmp4131) goto $l4130;
                {
                    {
                        $tmp4134 = t4121;
                        org$pandalanguage$pandac$ASTNode* $tmp4137 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4136 = $tmp4137;
                        $tmp4135 = $tmp4136;
                        t4121 = $tmp4135;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4135));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4136));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4134));
                    }
                    if (((panda$core$Bit) { t4121 == NULL }).value) {
                    {
                        $tmp4138 = NULL;
                        $returnValue4087 = $tmp4138;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4138));
                        $tmp4120 = 1;
                        goto $l4118;
                        $l4139:;
                        $tmp4082 = 4;
                        goto $l4080;
                        $l4140:;
                        return $returnValue4087;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4112, ((panda$core$Object*) t4121));
                }
                goto $l4129;
                $l4130:;
            }
            $tmp4120 = -1;
            goto $l4118;
            $l4118:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4121));
            t4121 = NULL;
            switch ($tmp4120) {
                case 1: goto $l4139;
                case -1: goto $l4142;
                case 0: goto $l4126;
            }
            $l4142:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4143, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4145 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4143, &$s4144);
        if (((panda$core$Bit) { !$tmp4145.nonnull }).value) {
        {
            $tmp4146 = NULL;
            $returnValue4087 = $tmp4146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4146));
            $tmp4082 = 5;
            goto $l4080;
            $l4147:;
            return $returnValue4087;
        }
        }
        panda$collections$Array* $tmp4152 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4152);
        $tmp4151 = $tmp4152;
        $tmp4150 = $tmp4151;
        members4149 = $tmp4150;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4150));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4151));
        $l4153:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4156, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4157 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4156);
        bool $tmp4155 = ((panda$core$Bit) { !$tmp4157.nonnull }).value;
        if (!$tmp4155) goto $l4154;
        {
            int $tmp4160;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4164 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4163 = $tmp4164;
                $tmp4162 = $tmp4163;
                member4161 = $tmp4162;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4163));
                if (((panda$core$Bit) { member4161 == NULL }).value) {
                {
                    $tmp4165 = NULL;
                    $returnValue4087 = $tmp4165;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4165));
                    $tmp4160 = 0;
                    goto $l4158;
                    $l4166:;
                    $tmp4082 = 6;
                    goto $l4080;
                    $l4167:;
                    return $returnValue4087;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4149, ((panda$core$Object*) member4161));
            }
            $tmp4160 = -1;
            goto $l4158;
            $l4158:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4161));
            member4161 = NULL;
            switch ($tmp4160) {
                case -1: goto $l4169;
                case 0: goto $l4166;
            }
            $l4169:;
        }
        goto $l4153;
        $l4154:;
        org$pandalanguage$pandac$ASTNode* $tmp4172 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4173, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4175 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4091.value));
        $tmp4174 = $tmp4175;
        panda$collections$ImmutableArray* $tmp4177 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4112);
        $tmp4176 = $tmp4177;
        panda$collections$ImmutableArray* $tmp4179 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4149);
        $tmp4178 = $tmp4179;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4172, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4083.value).position, p_doccomment, p_annotations, $tmp4173, $tmp4174, generics4098, $tmp4176, $tmp4178);
        $tmp4171 = $tmp4172;
        $tmp4170 = $tmp4171;
        $returnValue4087 = $tmp4170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4174));
        $tmp4082 = 7;
        goto $l4080;
        $l4180:;
        return $returnValue4087;
    }
    $l4080:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4098));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4112));
    intfs4112 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4149));
    members4149 = NULL;
    switch ($tmp4082) {
        case 2: goto $l4106;
        case 5: goto $l4147;
        case 4: goto $l4140;
        case 1: goto $l4096;
        case 6: goto $l4167;
        case 0: goto $l4089;
        case 7: goto $l4180;
        case 3: goto $l4127;
    }
    $l4182:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2195_94183;
    org$pandalanguage$pandac$ASTNode* $returnValue4186;
    org$pandalanguage$pandac$ASTNode* $tmp4187;
    org$pandalanguage$pandac$ASTNode* $tmp4188;
    org$pandalanguage$pandac$ASTNode* $tmp4192;
    org$pandalanguage$pandac$ASTNode* $tmp4193;
    org$pandalanguage$pandac$ASTNode* $tmp4221;
    org$pandalanguage$pandac$ASTNode* $tmp4222;
    org$pandalanguage$pandac$ASTNode* $tmp4225;
    org$pandalanguage$pandac$ASTNode* $tmp4226;
    {
        org$pandalanguage$pandac$parser$Token $tmp4184 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2195_94183 = $tmp4184.kind;
        panda$core$Bit $tmp4185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4185.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4189 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4188 = $tmp4189;
            $tmp4187 = $tmp4188;
            $returnValue4186 = $tmp4187;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4187));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4188));
            return $returnValue4186;
        }
        }
        else {
        panda$core$Bit $tmp4191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4191.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4194 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4193 = $tmp4194;
            $tmp4192 = $tmp4193;
            $returnValue4186 = $tmp4192;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4192));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4193));
            return $returnValue4186;
        }
        }
        else {
        panda$core$Bit $tmp4202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp4201 = $tmp4202.value;
        if ($tmp4201) goto $l4203;
        panda$core$Bit $tmp4204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp4201 = $tmp4204.value;
        $l4203:;
        panda$core$Bit $tmp4205 = { $tmp4201 };
        bool $tmp4200 = $tmp4205.value;
        if ($tmp4200) goto $l4206;
        panda$core$Bit $tmp4207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp4200 = $tmp4207.value;
        $l4206:;
        panda$core$Bit $tmp4208 = { $tmp4200 };
        bool $tmp4199 = $tmp4208.value;
        if ($tmp4199) goto $l4209;
        panda$core$Bit $tmp4210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp4199 = $tmp4210.value;
        $l4209:;
        panda$core$Bit $tmp4211 = { $tmp4199 };
        bool $tmp4198 = $tmp4211.value;
        if ($tmp4198) goto $l4212;
        panda$core$Bit $tmp4213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp4198 = $tmp4213.value;
        $l4212:;
        panda$core$Bit $tmp4214 = { $tmp4198 };
        bool $tmp4197 = $tmp4214.value;
        if ($tmp4197) goto $l4215;
        panda$core$Bit $tmp4216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp4197 = $tmp4216.value;
        $l4215:;
        panda$core$Bit $tmp4217 = { $tmp4197 };
        bool $tmp4196 = $tmp4217.value;
        if ($tmp4196) goto $l4218;
        panda$core$Bit $tmp4219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2195_94183.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp4196 = $tmp4219.value;
        $l4218:;
        panda$core$Bit $tmp4220 = { $tmp4196 };
        if ($tmp4220.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4223 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4222 = $tmp4223;
            $tmp4221 = $tmp4222;
            $returnValue4186 = $tmp4221;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4221));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4222));
            return $returnValue4186;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4227 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4226 = $tmp4227;
            $tmp4225 = $tmp4226;
            $returnValue4186 = $tmp4225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4226));
            return $returnValue4186;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4232 = NULL;
    panda$collections$Array* $tmp4233;
    panda$collections$Array* $tmp4234;
    org$pandalanguage$pandac$ASTNode* entry4244 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4245;
    org$pandalanguage$pandac$ASTNode* $tmp4246;
    org$pandalanguage$pandac$ASTNode* $returnValue4248;
    org$pandalanguage$pandac$ASTNode* $tmp4249;
    org$pandalanguage$pandac$ASTNode* $tmp4255;
    org$pandalanguage$pandac$ASTNode* $tmp4256;
    panda$collections$ImmutableArray* $tmp4258;
    int $tmp4231;
    {
        panda$collections$Array* $tmp4235 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4235);
        $tmp4234 = $tmp4235;
        $tmp4233 = $tmp4234;
        entries4232 = $tmp4233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4234));
        $l4236:;
        org$pandalanguage$pandac$parser$Token $tmp4239 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4240 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4239.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4238 = $tmp4240.value;
        if (!$tmp4238) goto $l4237;
        {
            int $tmp4243;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4247 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4246 = $tmp4247;
                $tmp4245 = $tmp4246;
                entry4244 = $tmp4245;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4245));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4246));
                if (((panda$core$Bit) { entry4244 == NULL }).value) {
                {
                    $tmp4249 = NULL;
                    $returnValue4248 = $tmp4249;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4249));
                    $tmp4243 = 0;
                    goto $l4241;
                    $l4250:;
                    $tmp4231 = 0;
                    goto $l4229;
                    $l4251:;
                    return $returnValue4248;
                }
                }
                panda$core$Bit $tmp4253 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4253.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4232, ((panda$core$Object*) entry4244));
            }
            $tmp4243 = -1;
            goto $l4241;
            $l4241:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4244));
            entry4244 = NULL;
            switch ($tmp4243) {
                case -1: goto $l4254;
                case 0: goto $l4250;
            }
            $l4254:;
        }
        goto $l4236;
        $l4237:;
        org$pandalanguage$pandac$ASTNode* $tmp4257 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4259 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4232);
        $tmp4258 = $tmp4259;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4257, ((panda$core$Int64) { 17 }), $tmp4258);
        $tmp4256 = $tmp4257;
        $tmp4255 = $tmp4256;
        $returnValue4248 = $tmp4255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4258));
        $tmp4231 = 1;
        goto $l4229;
        $l4260:;
        return $returnValue4248;
    }
    $l4229:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4232));
    entries4232 = NULL;
    switch ($tmp4231) {
        case 0: goto $l4251;
        case 1: goto $l4260;
    }
    $l4262:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4265;
    {
    }
    $tmp4265 = -1;
    goto $l4263;
    $l4263:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4265) {
        case -1: goto $l4266;
    }
    $l4266:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

