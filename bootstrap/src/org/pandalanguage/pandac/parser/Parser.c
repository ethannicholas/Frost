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
org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

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
typedef org$pandalanguage$pandac$Position (*$fn1459)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2580)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2605)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn2652)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn3568)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 13, -3092685793669648449, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s3527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s3530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s3996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s4006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    panda$core$String* $tmp812;
    panda$core$String* $tmp813;
    panda$core$String* $tmp815;
    org$pandalanguage$pandac$ASTNode* $tmp820;
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
        {
            panda$core$String* $tmp816 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t663);
            $tmp815 = $tmp816;
            panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s814, $tmp815);
            $tmp813 = $tmp817;
            panda$core$String* $tmp819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp813, &$s818);
            $tmp812 = $tmp819;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t663, $tmp812);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
            $tmp820 = NULL;
            $returnValue667 = $tmp820;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp820));
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
panda$core$String* org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* $match$418_9825 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp826;
    panda$core$String* text828 = NULL;
    panda$core$String* $returnValue830;
    panda$core$String* $tmp831;
    org$pandalanguage$pandac$ASTNode* base835 = NULL;
    panda$core$String* field837 = NULL;
    panda$core$String* result842 = NULL;
    panda$core$String* $tmp843;
    panda$core$String* $tmp844;
    panda$core$String* $tmp846;
    panda$core$String* $tmp847;
    panda$core$String* $tmp848;
    panda$core$String* $tmp849;
    panda$core$String* $tmp850;
    panda$core$String* $tmp854;
    panda$core$String* $tmp859;
    int $tmp824;
    {
        $tmp826 = p_expr;
        $match$418_9825 = $tmp826;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp826));
        panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$418_9825->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp827.value) {
        {
            panda$core$String** $tmp829 = ((panda$core$String**) ((char*) $match$418_9825->$data + 16));
            text828 = *$tmp829;
            $tmp831 = text828;
            $returnValue830 = $tmp831;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp831));
            $tmp824 = 0;
            goto $l822;
            $l832:;
            return $returnValue830;
        }
        }
        else {
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$418_9825->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp834.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp836 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$418_9825->$data + 16));
            base835 = *$tmp836;
            panda$core$String** $tmp838 = ((panda$core$String**) ((char*) $match$418_9825->$data + 24));
            field837 = *$tmp838;
            int $tmp841;
            {
                panda$core$String* $tmp845 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base835);
                $tmp844 = $tmp845;
                $tmp843 = $tmp844;
                result842 = $tmp843;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
                if (((panda$core$Bit) { result842 != NULL }).value) {
                {
                    {
                        $tmp847 = result842;
                        $tmp846 = $tmp847;
                        panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s851, field837);
                        $tmp850 = $tmp852;
                        panda$core$String* $tmp853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result842, $tmp850);
                        $tmp849 = $tmp853;
                        $tmp848 = $tmp849;
                        result842 = $tmp848;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp846));
                    }
                }
                }
                $tmp854 = result842;
                $returnValue830 = $tmp854;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp854));
                $tmp841 = 0;
                goto $l839;
                $l855:;
                $tmp824 = 1;
                goto $l822;
                $l856:;
                return $returnValue830;
            }
            $l839:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result842));
            result842 = NULL;
            switch ($tmp841) {
                case 0: goto $l855;
            }
            $l858:;
        }
        }
        else {
        {
            $tmp859 = NULL;
            $returnValue830 = $tmp859;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp859));
            $tmp824 = 2;
            goto $l822;
            $l860:;
            return $returnValue830;
        }
        }
        }
    }
    $tmp824 = -1;
    goto $l822;
    $l822:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
    switch ($tmp824) {
        case -1: goto $l862;
        case 1: goto $l856;
        case 0: goto $l832;
        case 2: goto $l860;
    }
    $l862:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token name863;
    org$pandalanguage$pandac$parser$Token$Kind $match$438_9865;
    panda$core$String* $returnValue951;
    panda$core$String* $tmp952;
    panda$core$String* $tmp953;
    org$pandalanguage$pandac$parser$Token token957;
    panda$core$String* $tmp960;
    panda$core$String* $tmp963;
    org$pandalanguage$pandac$parser$Token$Kind $tmp967;
    panda$core$String* $tmp970;
    org$pandalanguage$pandac$parser$Token$Kind $tmp972;
    panda$core$String* $tmp974;
    panda$core$String* $tmp977;
    panda$core$String* $tmp980;
    panda$core$String* $tmp981;
    panda$core$String* $tmp983;
    panda$core$String* $tmp988;
    org$pandalanguage$pandac$parser$Token $tmp864 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name863 = $tmp864;
    {
        $match$438_9865 = name863.kind;
        panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp886 = $tmp887.value;
        if ($tmp886) goto $l888;
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp886 = $tmp889.value;
        $l888:;
        panda$core$Bit $tmp890 = { $tmp886 };
        bool $tmp885 = $tmp890.value;
        if ($tmp885) goto $l891;
        panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp885 = $tmp892.value;
        $l891:;
        panda$core$Bit $tmp893 = { $tmp885 };
        bool $tmp884 = $tmp893.value;
        if ($tmp884) goto $l894;
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp884 = $tmp895.value;
        $l894:;
        panda$core$Bit $tmp896 = { $tmp884 };
        bool $tmp883 = $tmp896.value;
        if ($tmp883) goto $l897;
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp883 = $tmp898.value;
        $l897:;
        panda$core$Bit $tmp899 = { $tmp883 };
        bool $tmp882 = $tmp899.value;
        if ($tmp882) goto $l900;
        panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp882 = $tmp901.value;
        $l900:;
        panda$core$Bit $tmp902 = { $tmp882 };
        bool $tmp881 = $tmp902.value;
        if ($tmp881) goto $l903;
        panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp881 = $tmp904.value;
        $l903:;
        panda$core$Bit $tmp905 = { $tmp881 };
        bool $tmp880 = $tmp905.value;
        if ($tmp880) goto $l906;
        panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp880 = $tmp907.value;
        $l906:;
        panda$core$Bit $tmp908 = { $tmp880 };
        bool $tmp879 = $tmp908.value;
        if ($tmp879) goto $l909;
        panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp879 = $tmp910.value;
        $l909:;
        panda$core$Bit $tmp911 = { $tmp879 };
        bool $tmp878 = $tmp911.value;
        if ($tmp878) goto $l912;
        panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp878 = $tmp913.value;
        $l912:;
        panda$core$Bit $tmp914 = { $tmp878 };
        bool $tmp877 = $tmp914.value;
        if ($tmp877) goto $l915;
        panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp877 = $tmp916.value;
        $l915:;
        panda$core$Bit $tmp917 = { $tmp877 };
        bool $tmp876 = $tmp917.value;
        if ($tmp876) goto $l918;
        panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp876 = $tmp919.value;
        $l918:;
        panda$core$Bit $tmp920 = { $tmp876 };
        bool $tmp875 = $tmp920.value;
        if ($tmp875) goto $l921;
        panda$core$Bit $tmp922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp875 = $tmp922.value;
        $l921:;
        panda$core$Bit $tmp923 = { $tmp875 };
        bool $tmp874 = $tmp923.value;
        if ($tmp874) goto $l924;
        panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp874 = $tmp925.value;
        $l924:;
        panda$core$Bit $tmp926 = { $tmp874 };
        bool $tmp873 = $tmp926.value;
        if ($tmp873) goto $l927;
        panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp873 = $tmp928.value;
        $l927:;
        panda$core$Bit $tmp929 = { $tmp873 };
        bool $tmp872 = $tmp929.value;
        if ($tmp872) goto $l930;
        panda$core$Bit $tmp931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp872 = $tmp931.value;
        $l930:;
        panda$core$Bit $tmp932 = { $tmp872 };
        bool $tmp871 = $tmp932.value;
        if ($tmp871) goto $l933;
        panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp871 = $tmp934.value;
        $l933:;
        panda$core$Bit $tmp935 = { $tmp871 };
        bool $tmp870 = $tmp935.value;
        if ($tmp870) goto $l936;
        panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp870 = $tmp937.value;
        $l936:;
        panda$core$Bit $tmp938 = { $tmp870 };
        bool $tmp869 = $tmp938.value;
        if ($tmp869) goto $l939;
        panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp869 = $tmp940.value;
        $l939:;
        panda$core$Bit $tmp941 = { $tmp869 };
        bool $tmp868 = $tmp941.value;
        if ($tmp868) goto $l942;
        panda$core$Bit $tmp943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp868 = $tmp943.value;
        $l942:;
        panda$core$Bit $tmp944 = { $tmp868 };
        bool $tmp867 = $tmp944.value;
        if ($tmp867) goto $l945;
        panda$core$Bit $tmp946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp867 = $tmp946.value;
        $l945:;
        panda$core$Bit $tmp947 = { $tmp867 };
        bool $tmp866 = $tmp947.value;
        if ($tmp866) goto $l948;
        panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp866 = $tmp949.value;
        $l948:;
        panda$core$Bit $tmp950 = { $tmp866 };
        if ($tmp950.value) {
        {
            panda$core$String* $tmp954 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name863);
            $tmp953 = $tmp954;
            $tmp952 = $tmp953;
            $returnValue951 = $tmp952;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp952));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
            return $returnValue951;
        }
        }
        else {
        panda$core$Bit $tmp956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp956.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp958 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token957 = $tmp958;
            panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token957.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp959.value) {
            {
                $tmp960 = &$s961;
                $returnValue951 = $tmp960;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
                return $returnValue951;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token957);
                $tmp963 = &$s964;
                $returnValue951 = $tmp963;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp963));
                return $returnValue951;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$438_9865.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp966.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp967, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp969 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp967, &$s968);
            if (((panda$core$Bit) { !$tmp969.nonnull }).value) {
            {
                $tmp970 = NULL;
                $returnValue951 = $tmp970;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp970));
                return $returnValue951;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp972, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp973 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp972);
            if (((panda$core$Bit) { $tmp973.nonnull }).value) {
            {
                $tmp974 = &$s975;
                $returnValue951 = $tmp974;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp974));
                return $returnValue951;
            }
            }
            $tmp977 = &$s978;
            $returnValue951 = $tmp977;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
            return $returnValue951;
        }
        }
        else {
        {
            panda$core$String* $tmp984 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name863);
            $tmp983 = $tmp984;
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s982, $tmp983);
            $tmp981 = $tmp985;
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, &$s986);
            $tmp980 = $tmp987;
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name863, $tmp980);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
            $tmp988 = NULL;
            $returnValue951 = $tmp988;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
            return $returnValue951;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue990;
    org$pandalanguage$pandac$ASTNode* $tmp991;
    org$pandalanguage$pandac$ASTNode* $tmp992;
    org$pandalanguage$pandac$ASTNode* $tmp993 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    $tmp992 = $tmp993;
    $tmp991 = $tmp992;
    $returnValue990 = $tmp991;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp991));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
    return $returnValue990;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start998;
    org$pandalanguage$pandac$parser$Token$Kind $tmp999;
    org$pandalanguage$pandac$ASTNode* $returnValue1002;
    org$pandalanguage$pandac$ASTNode* $tmp1003;
    panda$collections$Array* subtypes1006 = NULL;
    panda$collections$Array* $tmp1007;
    panda$collections$Array* $tmp1008;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1010;
    org$pandalanguage$pandac$ASTNode* t1015 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1016;
    org$pandalanguage$pandac$ASTNode* $tmp1017;
    org$pandalanguage$pandac$ASTNode* $tmp1019;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1026;
    org$pandalanguage$pandac$ASTNode* $tmp1028;
    org$pandalanguage$pandac$ASTNode* $tmp1029;
    org$pandalanguage$pandac$ASTNode* $tmp1030;
    org$pandalanguage$pandac$ASTNode* $tmp1032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1036;
    org$pandalanguage$pandac$parser$Token yields1039;
    org$pandalanguage$pandac$parser$Token$Kind $match$500_91041;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1058;
    org$pandalanguage$pandac$ASTNode* $tmp1061;
    panda$collections$Array* returnTypes1065 = NULL;
    panda$collections$Array* $tmp1066;
    panda$collections$Array* $tmp1067;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1069;
    org$pandalanguage$pandac$ASTNode* t1074 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1075;
    org$pandalanguage$pandac$ASTNode* $tmp1076;
    org$pandalanguage$pandac$ASTNode* $tmp1078;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1086;
    org$pandalanguage$pandac$ASTNode* $tmp1088;
    org$pandalanguage$pandac$ASTNode* $tmp1089;
    org$pandalanguage$pandac$ASTNode* $tmp1090;
    org$pandalanguage$pandac$ASTNode* $tmp1092;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1097;
    org$pandalanguage$pandac$ASTNode* returnType1100 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1103;
    org$pandalanguage$pandac$ASTNode* $tmp1104;
    org$pandalanguage$pandac$ASTNode* $tmp1107;
    org$pandalanguage$pandac$ASTNode* $tmp1108;
    panda$core$Object* $tmp1109;
    org$pandalanguage$pandac$ASTNode* $tmp1111;
    org$pandalanguage$pandac$ASTNode* $tmp1112;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    panda$collections$ImmutableArray* $tmp1115;
    org$pandalanguage$pandac$ASTNode* $tmp1117;
    org$pandalanguage$pandac$ASTNode* $tmp1118;
    panda$collections$ImmutableArray* $tmp1120;
    org$pandalanguage$pandac$ASTNode* $tmp1126;
    org$pandalanguage$pandac$ASTNode* $tmp1127;
    panda$collections$ImmutableArray* $tmp1129;
    int $tmp997;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp999, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1001 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp999, &$s1000);
        start998 = $tmp1001;
        if (((panda$core$Bit) { !start998.nonnull }).value) {
        {
            $tmp1003 = NULL;
            $returnValue1002 = $tmp1003;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1003));
            $tmp997 = 0;
            goto $l995;
            $l1004:;
            return $returnValue1002;
        }
        }
        panda$collections$Array* $tmp1009 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1009);
        $tmp1008 = $tmp1009;
        $tmp1007 = $tmp1008;
        subtypes1006 = $tmp1007;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1010, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1011 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1010);
        if (((panda$core$Bit) { !$tmp1011.nonnull }).value) {
        {
            int $tmp1014;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1018 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1017 = $tmp1018;
                $tmp1016 = $tmp1017;
                t1015 = $tmp1016;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
                if (((panda$core$Bit) { t1015 == NULL }).value) {
                {
                    $tmp1019 = NULL;
                    $returnValue1002 = $tmp1019;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                    $tmp1014 = 0;
                    goto $l1012;
                    $l1020:;
                    $tmp997 = 1;
                    goto $l995;
                    $l1021:;
                    return $returnValue1002;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(subtypes1006, ((panda$core$Object*) t1015));
                $l1023:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1026, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1027 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1026);
                bool $tmp1025 = ((panda$core$Bit) { $tmp1027.nonnull }).value;
                if (!$tmp1025) goto $l1024;
                {
                    {
                        $tmp1028 = t1015;
                        org$pandalanguage$pandac$ASTNode* $tmp1031 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1030 = $tmp1031;
                        $tmp1029 = $tmp1030;
                        t1015 = $tmp1029;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1029));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1028));
                    }
                    if (((panda$core$Bit) { t1015 == NULL }).value) {
                    {
                        $tmp1032 = NULL;
                        $returnValue1002 = $tmp1032;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
                        $tmp1014 = 1;
                        goto $l1012;
                        $l1033:;
                        $tmp997 = 2;
                        goto $l995;
                        $l1034:;
                        return $returnValue1002;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(subtypes1006, ((panda$core$Object*) t1015));
                }
                goto $l1023;
                $l1024:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1036, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1036, &$s1037);
            }
            $tmp1014 = -1;
            goto $l1012;
            $l1012:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1015));
            t1015 = NULL;
            switch ($tmp1014) {
                case 1: goto $l1033;
                case -1: goto $l1038;
                case 0: goto $l1020;
            }
            $l1038:;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp1040 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        yields1039 = $tmp1040;
        {
            $match$500_91041 = yields1039.kind;
            panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$500_91041.$rawValue, ((panda$core$Int64) { 90 }));
            bool $tmp1044 = $tmp1045.value;
            if ($tmp1044) goto $l1046;
            panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$500_91041.$rawValue, ((panda$core$Int64) { 91 }));
            $tmp1044 = $tmp1047.value;
            $l1046:;
            panda$core$Bit $tmp1048 = { $tmp1044 };
            bool $tmp1043 = $tmp1048.value;
            if ($tmp1043) goto $l1049;
            panda$core$Bit $tmp1050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$500_91041.$rawValue, ((panda$core$Int64) { 92 }));
            $tmp1043 = $tmp1050.value;
            $l1049:;
            panda$core$Bit $tmp1051 = { $tmp1043 };
            bool $tmp1042 = $tmp1051.value;
            if ($tmp1042) goto $l1052;
            panda$core$Bit $tmp1053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$500_91041.$rawValue, ((panda$core$Int64) { 93 }));
            $tmp1042 = $tmp1053.value;
            $l1052:;
            panda$core$Bit $tmp1054 = { $tmp1042 };
            if ($tmp1054.value) {
            {
                int $tmp1057;
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1058, ((panda$core$Int64) { 103 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1060 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1058, &$s1059);
                    if (((panda$core$Bit) { !$tmp1060.nonnull }).value) {
                    {
                        $tmp1061 = NULL;
                        $returnValue1002 = $tmp1061;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1061));
                        $tmp1057 = 0;
                        goto $l1055;
                        $l1062:;
                        $tmp997 = 3;
                        goto $l995;
                        $l1063:;
                        return $returnValue1002;
                    }
                    }
                    panda$collections$Array* $tmp1068 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                    panda$collections$Array$init($tmp1068);
                    $tmp1067 = $tmp1068;
                    $tmp1066 = $tmp1067;
                    returnTypes1065 = $tmp1066;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1066));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1067));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1069, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1070 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1069);
                    if (((panda$core$Bit) { !$tmp1070.nonnull }).value) {
                    {
                        int $tmp1073;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1077 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1076 = $tmp1077;
                            $tmp1075 = $tmp1076;
                            t1074 = $tmp1075;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
                            if (((panda$core$Bit) { t1074 == NULL }).value) {
                            {
                                $tmp1078 = NULL;
                                $returnValue1002 = $tmp1078;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1078));
                                $tmp1073 = 0;
                                goto $l1071;
                                $l1079:;
                                $tmp1057 = 1;
                                goto $l1055;
                                $l1080:;
                                $tmp997 = 4;
                                goto $l995;
                                $l1081:;
                                return $returnValue1002;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(returnTypes1065, ((panda$core$Object*) t1074));
                            $l1083:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1086, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp1087 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1086);
                            bool $tmp1085 = ((panda$core$Bit) { $tmp1087.nonnull }).value;
                            if (!$tmp1085) goto $l1084;
                            {
                                {
                                    $tmp1088 = t1074;
                                    org$pandalanguage$pandac$ASTNode* $tmp1091 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp1090 = $tmp1091;
                                    $tmp1089 = $tmp1090;
                                    t1074 = $tmp1089;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1089));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1088));
                                }
                                if (((panda$core$Bit) { t1074 == NULL }).value) {
                                {
                                    $tmp1092 = NULL;
                                    $returnValue1002 = $tmp1092;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1092));
                                    $tmp1073 = 1;
                                    goto $l1071;
                                    $l1093:;
                                    $tmp1057 = 2;
                                    goto $l1055;
                                    $l1094:;
                                    $tmp997 = 5;
                                    goto $l995;
                                    $l1095:;
                                    return $returnValue1002;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(returnTypes1065, ((panda$core$Object*) t1074));
                            }
                            goto $l1083;
                            $l1084:;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1097, ((panda$core$Int64) { 104 }));
                            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1097, &$s1098);
                        }
                        $tmp1073 = -1;
                        goto $l1071;
                        $l1071:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1074));
                        t1074 = NULL;
                        switch ($tmp1073) {
                            case 0: goto $l1079;
                            case -1: goto $l1099;
                            case 1: goto $l1093;
                        }
                        $l1099:;
                    }
                    }
                    memset(&returnType1100, 0, sizeof(returnType1100));
                    panda$core$Int64 $tmp1101 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1065);
                    panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1101, ((panda$core$Int64) { 0 }));
                    if ($tmp1102.value) {
                    {
                        {
                            $tmp1103 = returnType1100;
                            $tmp1104 = NULL;
                            returnType1100 = $tmp1104;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1104));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1103));
                        }
                    }
                    }
                    else {
                    panda$core$Int64 $tmp1105 = panda$collections$Array$get_count$R$panda$core$Int64(returnTypes1065);
                    panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1105, ((panda$core$Int64) { 1 }));
                    if ($tmp1106.value) {
                    {
                        {
                            $tmp1107 = returnType1100;
                            panda$core$Object* $tmp1110 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(returnTypes1065, ((panda$core$Int64) { 0 }));
                            $tmp1109 = $tmp1110;
                            $tmp1108 = ((org$pandalanguage$pandac$ASTNode*) $tmp1109);
                            returnType1100 = $tmp1108;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
                            panda$core$Panda$unref$panda$core$Object($tmp1109);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1107));
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1111 = returnType1100;
                            org$pandalanguage$pandac$ASTNode* $tmp1114 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1116 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(returnTypes1065);
                            $tmp1115 = $tmp1116;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1114, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start998.value).position, $tmp1115);
                            $tmp1113 = $tmp1114;
                            $tmp1112 = $tmp1113;
                            returnType1100 = $tmp1112;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1115));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
                        }
                    }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1119 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1121 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1006);
                    $tmp1120 = $tmp1121;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1119, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) start998.value).position, yields1039.kind, $tmp1120, returnType1100);
                    $tmp1118 = $tmp1119;
                    $tmp1117 = $tmp1118;
                    $returnValue1002 = $tmp1117;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1117));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1118));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1120));
                    $tmp1057 = 3;
                    goto $l1055;
                    $l1122:;
                    $tmp997 = 6;
                    goto $l995;
                    $l1123:;
                    return $returnValue1002;
                }
                $l1055:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnTypes1065));
                returnTypes1065 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1100));
                switch ($tmp1057) {
                    case 2: goto $l1094;
                    case 3: goto $l1122;
                    case 0: goto $l1062;
                    case 1: goto $l1080;
                }
                $l1125:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1128 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$collections$ImmutableArray* $tmp1130 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(subtypes1006);
                $tmp1129 = $tmp1130;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1128, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start998.value).position, $tmp1129);
                $tmp1127 = $tmp1128;
                $tmp1126 = $tmp1127;
                $returnValue1002 = $tmp1126;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
                $tmp997 = 7;
                goto $l995;
                $l1131:;
                return $returnValue1002;
            }
            }
        }
    }
    $tmp997 = -1;
    goto $l995;
    $l995:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes1006));
    subtypes1006 = NULL;
    switch ($tmp997) {
        case 5: goto $l1095;
        case 3: goto $l1063;
        case 1: goto $l1021;
        case 7: goto $l1131;
        case 4: goto $l1081;
        case 6: goto $l1123;
        case -1: goto $l1133;
        case 0: goto $l1004;
        case 2: goto $l1034;
    }
    $l1133:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$ASTNode* $returnValue1139;
    org$pandalanguage$pandac$ASTNode* $tmp1140;
    org$pandalanguage$pandac$ASTNode* $tmp1141;
    org$pandalanguage$pandac$parser$Token$nullable start1145;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1146;
    org$pandalanguage$pandac$ASTNode* $tmp1149;
    panda$core$MutableString* name1152 = NULL;
    panda$core$MutableString* $tmp1153;
    panda$core$MutableString* $tmp1154;
    panda$core$String* $tmp1156;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1161;
    org$pandalanguage$pandac$parser$Token$nullable id1163;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1164;
    org$pandalanguage$pandac$ASTNode* $tmp1167;
    panda$core$Char8 $tmp1170;
    panda$core$String* $tmp1171;
    panda$core$String* finalName1173 = NULL;
    panda$core$String* $tmp1174;
    panda$core$String* $tmp1175;
    org$pandalanguage$pandac$ASTNode* result1177 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1178;
    org$pandalanguage$pandac$ASTNode* $tmp1179;
    panda$collections$Array* children1186 = NULL;
    panda$collections$Array* $tmp1187;
    panda$collections$Array* $tmp1188;
    org$pandalanguage$pandac$ASTNode* t1190 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1191;
    org$pandalanguage$pandac$ASTNode* $tmp1192;
    org$pandalanguage$pandac$ASTNode* $tmp1194;
    org$pandalanguage$pandac$ASTNode* $tmp1198;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1205;
    org$pandalanguage$pandac$ASTNode* $tmp1207;
    org$pandalanguage$pandac$ASTNode* $tmp1208;
    org$pandalanguage$pandac$ASTNode* $tmp1209;
    org$pandalanguage$pandac$ASTNode* $tmp1211;
    org$pandalanguage$pandac$ASTNode* $tmp1215;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1219;
    org$pandalanguage$pandac$ASTNode* $tmp1222;
    org$pandalanguage$pandac$ASTNode* $tmp1226;
    org$pandalanguage$pandac$ASTNode* $tmp1230;
    org$pandalanguage$pandac$ASTNode* $tmp1231;
    org$pandalanguage$pandac$ASTNode* $tmp1232;
    panda$collections$ImmutableArray* $tmp1234;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1237;
    org$pandalanguage$pandac$ASTNode* $tmp1239;
    org$pandalanguage$pandac$ASTNode* $tmp1240;
    org$pandalanguage$pandac$ASTNode* $tmp1241;
    org$pandalanguage$pandac$ASTNode* $tmp1243;
    int $tmp1136;
    {
        org$pandalanguage$pandac$parser$Token $tmp1137 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1137.kind.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp1138.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1142 = org$pandalanguage$pandac$parser$Parser$functionOrTupleType$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1141 = $tmp1142;
            $tmp1140 = $tmp1141;
            $returnValue1139 = $tmp1140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1141));
            $tmp1136 = 0;
            goto $l1134;
            $l1143:;
            return $returnValue1139;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1146, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1148 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1146, &$s1147);
        start1145 = $tmp1148;
        if (((panda$core$Bit) { !start1145.nonnull }).value) {
        {
            $tmp1149 = NULL;
            $returnValue1139 = $tmp1149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1149));
            $tmp1136 = 1;
            goto $l1134;
            $l1150:;
            return $returnValue1139;
        }
        }
        panda$core$MutableString* $tmp1155 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1157 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1145.value));
        $tmp1156 = $tmp1157;
        panda$core$MutableString$init$panda$core$String($tmp1155, $tmp1156);
        $tmp1154 = $tmp1155;
        $tmp1153 = $tmp1154;
        name1152 = $tmp1153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1156));
        $l1158:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1161, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1162 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1161);
        bool $tmp1160 = ((panda$core$Bit) { $tmp1162.nonnull }).value;
        if (!$tmp1160) goto $l1159;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1164, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1166 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1164, &$s1165);
            id1163 = $tmp1166;
            if (((panda$core$Bit) { !id1163.nonnull }).value) {
            {
                $tmp1167 = NULL;
                $returnValue1139 = $tmp1167;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1167));
                $tmp1136 = 2;
                goto $l1134;
                $l1168:;
                return $returnValue1139;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1170, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name1152, $tmp1170);
            panda$core$String* $tmp1172 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1163.value));
            $tmp1171 = $tmp1172;
            panda$core$MutableString$append$panda$core$String(name1152, $tmp1171);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
        }
        goto $l1158;
        $l1159:;
        panda$core$String* $tmp1176 = panda$core$MutableString$finish$R$panda$core$String(name1152);
        $tmp1175 = $tmp1176;
        $tmp1174 = $tmp1175;
        finalName1173 = $tmp1174;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1174));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
        org$pandalanguage$pandac$ASTNode* $tmp1180 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1180, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1145.value).position, finalName1173);
        $tmp1179 = $tmp1180;
        $tmp1178 = $tmp1179;
        result1177 = $tmp1178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1179));
        org$pandalanguage$pandac$parser$Token $tmp1181 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1181.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp1182.value) {
        {
            int $tmp1185;
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                }
                }
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$collections$Array* $tmp1189 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1189);
                $tmp1188 = $tmp1189;
                $tmp1187 = $tmp1188;
                children1186 = $tmp1187;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
                org$pandalanguage$pandac$ASTNode* $tmp1193 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                $tmp1192 = $tmp1193;
                $tmp1191 = $tmp1192;
                t1190 = $tmp1191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
                if (((panda$core$Bit) { t1190 == NULL }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1194 = result1177;
                        $returnValue1139 = $tmp1194;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
                        $tmp1185 = 0;
                        goto $l1183;
                        $l1195:;
                        $tmp1136 = 3;
                        goto $l1134;
                        $l1196:;
                        return $returnValue1139;
                    }
                    }
                    $tmp1198 = NULL;
                    $returnValue1139 = $tmp1198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
                    $tmp1185 = 1;
                    goto $l1183;
                    $l1199:;
                    $tmp1136 = 4;
                    goto $l1134;
                    $l1200:;
                    return $returnValue1139;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children1186, ((panda$core$Object*) t1190));
                $l1202:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1205, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1206 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1205);
                bool $tmp1204 = ((panda$core$Bit) { $tmp1206.nonnull }).value;
                if (!$tmp1204) goto $l1203;
                {
                    {
                        $tmp1207 = t1190;
                        org$pandalanguage$pandac$ASTNode* $tmp1210 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                        $tmp1209 = $tmp1210;
                        $tmp1208 = $tmp1209;
                        t1190 = $tmp1208;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
                    }
                    if (((panda$core$Bit) { t1190 == NULL }).value) {
                    {
                        if (p_needSpeculativeParse.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            $tmp1211 = result1177;
                            $returnValue1139 = $tmp1211;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1211));
                            $tmp1185 = 2;
                            goto $l1183;
                            $l1212:;
                            $tmp1136 = 5;
                            goto $l1134;
                            $l1213:;
                            return $returnValue1139;
                        }
                        }
                        $tmp1215 = NULL;
                        $returnValue1139 = $tmp1215;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1215));
                        $tmp1185 = 3;
                        goto $l1183;
                        $l1216:;
                        $tmp1136 = 6;
                        goto $l1134;
                        $l1217:;
                        return $returnValue1139;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(children1186, ((panda$core$Object*) t1190));
                }
                goto $l1202;
                $l1203:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1219, ((panda$core$Int64) { 63 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1221 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1219, &$s1220);
                if (((panda$core$Bit) { !$tmp1221.nonnull }).value) {
                {
                    if (p_needSpeculativeParse.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        $tmp1222 = result1177;
                        $returnValue1139 = $tmp1222;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1222));
                        $tmp1185 = 4;
                        goto $l1183;
                        $l1223:;
                        $tmp1136 = 7;
                        goto $l1134;
                        $l1224:;
                        return $returnValue1139;
                    }
                    }
                    $tmp1226 = NULL;
                    $returnValue1139 = $tmp1226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
                    $tmp1185 = 5;
                    goto $l1183;
                    $l1227:;
                    $tmp1136 = 8;
                    goto $l1134;
                    $l1228:;
                    return $returnValue1139;
                }
                }
                {
                    $tmp1230 = result1177;
                    org$pandalanguage$pandac$ASTNode* $tmp1233 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$collections$ImmutableArray* $tmp1235 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children1186);
                    $tmp1234 = $tmp1235;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1233, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1145.value).position, finalName1173, $tmp1234);
                    $tmp1232 = $tmp1233;
                    $tmp1231 = $tmp1232;
                    result1177 = $tmp1231;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1230));
                }
                org$pandalanguage$pandac$parser$Parser$accept(self);
            }
            $tmp1185 = -1;
            goto $l1183;
            $l1183:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children1186));
            children1186 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1190));
            t1190 = NULL;
            switch ($tmp1185) {
                case 0: goto $l1195;
                case 5: goto $l1227;
                case -1: goto $l1236;
                case 4: goto $l1223;
                case 2: goto $l1212;
                case 3: goto $l1216;
                case 1: goto $l1199;
            }
            $l1236:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1237, ((panda$core$Int64) { 94 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1238 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1237);
        if (((panda$core$Bit) { $tmp1238.nonnull }).value) {
        {
            {
                $tmp1239 = result1177;
                org$pandalanguage$pandac$ASTNode* $tmp1242 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp1242, ((panda$core$Int64) { 29 }), ((org$pandalanguage$pandac$parser$Token) start1145.value).position, result1177);
                $tmp1241 = $tmp1242;
                $tmp1240 = $tmp1241;
                result1177 = $tmp1240;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1240));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1239));
            }
        }
        }
        $tmp1243 = result1177;
        $returnValue1139 = $tmp1243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1243));
        $tmp1136 = 9;
        goto $l1134;
        $l1244:;
        return $returnValue1139;
    }
    $l1134:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1152));
    name1152 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName1173));
    finalName1173 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1177));
    result1177 = NULL;
    switch ($tmp1136) {
        case 9: goto $l1244;
        case 2: goto $l1168;
        case 7: goto $l1224;
        case 5: goto $l1213;
        case 6: goto $l1217;
        case 4: goto $l1200;
        case 8: goto $l1228;
        case 3: goto $l1196;
        case 0: goto $l1143;
        case 1: goto $l1150;
    }
    $l1246:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1250 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1251;
    org$pandalanguage$pandac$ASTNode* $tmp1252;
    org$pandalanguage$pandac$ASTNode* $returnValue1254;
    org$pandalanguage$pandac$ASTNode* $tmp1255;
    org$pandalanguage$pandac$parser$Token token1260;
    org$pandalanguage$pandac$parser$Token$Kind $match$623_131262;
    panda$core$Object* $tmp1267;
    panda$collections$Array* args1269 = NULL;
    panda$collections$Array* $tmp1270;
    panda$collections$Array* $tmp1271;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1273;
    org$pandalanguage$pandac$ASTNode* expr1278 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1279;
    org$pandalanguage$pandac$ASTNode* $tmp1280;
    panda$core$Object* $tmp1282;
    org$pandalanguage$pandac$ASTNode* $tmp1284;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1292;
    org$pandalanguage$pandac$ASTNode* $tmp1294;
    org$pandalanguage$pandac$ASTNode* $tmp1295;
    org$pandalanguage$pandac$ASTNode* $tmp1296;
    panda$core$Object* $tmp1298;
    org$pandalanguage$pandac$ASTNode* $tmp1300;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1305;
    panda$core$Object* $tmp1308;
    org$pandalanguage$pandac$ASTNode* $tmp1310;
    panda$core$Object* $tmp1316;
    org$pandalanguage$pandac$ASTNode* $tmp1318;
    org$pandalanguage$pandac$ASTNode* $tmp1319;
    org$pandalanguage$pandac$ASTNode* $tmp1320;
    panda$collections$ImmutableArray* $tmp1322;
    org$pandalanguage$pandac$ASTNode* arg1329 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1330;
    org$pandalanguage$pandac$ASTNode* $tmp1331;
    org$pandalanguage$pandac$ASTNode* $tmp1333;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1337;
    org$pandalanguage$pandac$ASTNode* $tmp1340;
    org$pandalanguage$pandac$ASTNode* $tmp1344;
    org$pandalanguage$pandac$ASTNode* $tmp1345;
    org$pandalanguage$pandac$ASTNode* $tmp1346;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1348;
    panda$core$String* name1354 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1355;
    panda$core$String* $tmp1357;
    panda$core$String* $tmp1358;
    panda$core$String* $tmp1360;
    panda$core$String* $tmp1361;
    panda$core$String* $tmp1362;
    org$pandalanguage$pandac$ASTNode* $tmp1364;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    org$pandalanguage$pandac$ASTNode* $tmp1369;
    org$pandalanguage$pandac$ASTNode* $tmp1370;
    org$pandalanguage$pandac$ASTNode* target1377 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1378;
    org$pandalanguage$pandac$ASTNode* $tmp1379;
    org$pandalanguage$pandac$ASTNode* $tmp1381;
    org$pandalanguage$pandac$ASTNode* $tmp1385;
    org$pandalanguage$pandac$ASTNode* $tmp1386;
    org$pandalanguage$pandac$ASTNode* $tmp1387;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1389;
    panda$core$String* name1395 = NULL;
    panda$core$String* $tmp1396;
    panda$core$String* $tmp1397;
    panda$collections$Array* types1402 = NULL;
    panda$collections$Array* $tmp1403;
    panda$collections$Array* $tmp1404;
    org$pandalanguage$pandac$ASTNode* t1406 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1407;
    org$pandalanguage$pandac$ASTNode* $tmp1408;
    org$pandalanguage$pandac$ASTNode* $tmp1410;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1418;
    org$pandalanguage$pandac$ASTNode* $tmp1420;
    org$pandalanguage$pandac$ASTNode* $tmp1421;
    org$pandalanguage$pandac$ASTNode* $tmp1422;
    org$pandalanguage$pandac$ASTNode* $tmp1424;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1429;
    org$pandalanguage$pandac$ASTNode* $tmp1432;
    panda$core$Bit shouldAccept1437;
    panda$core$Object* $tmp1438;
    org$pandalanguage$pandac$parser$Token$Kind $match$728_291440;
    org$pandalanguage$pandac$ASTNode* $tmp1455;
    org$pandalanguage$pandac$ASTNode* $tmp1456;
    org$pandalanguage$pandac$ASTNode* $tmp1457;
    panda$collections$ImmutableArray* $tmp1461;
    org$pandalanguage$pandac$ASTNode* $tmp1465;
    org$pandalanguage$pandac$ASTNode* $tmp1471;
    org$pandalanguage$pandac$ASTNode* $tmp1476;
    int $tmp1249;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1253 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1252 = $tmp1253;
        $tmp1251 = $tmp1252;
        result1250 = $tmp1251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1252));
        if (((panda$core$Bit) { result1250 == NULL }).value) {
        {
            $tmp1255 = NULL;
            $returnValue1254 = $tmp1255;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1255));
            $tmp1249 = 0;
            goto $l1247;
            $l1256:;
            return $returnValue1254;
        }
        }
        $l1258:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1261 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            token1260 = $tmp1261;
            {
                $match$623_131262 = token1260.kind;
                panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$623_131262.$rawValue, ((panda$core$Int64) { 103 }));
                if ($tmp1263.value) {
                {
                    int $tmp1266;
                    {
                        panda$core$Bit$wrapper* $tmp1268;
                        $tmp1268 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
                        $tmp1268->value = ((panda$core$Bit) { true });
                        $tmp1267 = ((panda$core$Object*) $tmp1268);
                        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp1267);
                        panda$core$Panda$unref$panda$core$Object($tmp1267);
                        panda$collections$Array* $tmp1272 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp1272);
                        $tmp1271 = $tmp1272;
                        $tmp1270 = $tmp1271;
                        args1269 = $tmp1270;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1270));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1271));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1273, ((panda$core$Int64) { 104 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1274 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1273);
                        if (((panda$core$Bit) { !$tmp1274.nonnull }).value) {
                        {
                            int $tmp1277;
                            {
                                org$pandalanguage$pandac$ASTNode* $tmp1281 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                $tmp1280 = $tmp1281;
                                $tmp1279 = $tmp1280;
                                expr1278 = $tmp1279;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1279));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1280));
                                if (((panda$core$Bit) { expr1278 == NULL }).value) {
                                {
                                    panda$core$Object* $tmp1283 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1282 = $tmp1283;
                                    panda$core$Panda$unref$panda$core$Object($tmp1282);
                                    $tmp1284 = NULL;
                                    $returnValue1254 = $tmp1284;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1284));
                                    $tmp1277 = 0;
                                    goto $l1275;
                                    $l1285:;
                                    $tmp1266 = 0;
                                    goto $l1264;
                                    $l1286:;
                                    $tmp1249 = 1;
                                    goto $l1247;
                                    $l1287:;
                                    return $returnValue1254;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(args1269, ((panda$core$Object*) expr1278));
                                $l1289:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1292, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1293 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1292);
                                bool $tmp1291 = ((panda$core$Bit) { $tmp1293.nonnull }).value;
                                if (!$tmp1291) goto $l1290;
                                {
                                    {
                                        $tmp1294 = expr1278;
                                        org$pandalanguage$pandac$ASTNode* $tmp1297 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                        $tmp1296 = $tmp1297;
                                        $tmp1295 = $tmp1296;
                                        expr1278 = $tmp1295;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
                                    }
                                    if (((panda$core$Bit) { expr1278 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp1299 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                        $tmp1298 = $tmp1299;
                                        panda$core$Panda$unref$panda$core$Object($tmp1298);
                                        $tmp1300 = NULL;
                                        $returnValue1254 = $tmp1300;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1300));
                                        $tmp1277 = 1;
                                        goto $l1275;
                                        $l1301:;
                                        $tmp1266 = 1;
                                        goto $l1264;
                                        $l1302:;
                                        $tmp1249 = 2;
                                        goto $l1247;
                                        $l1303:;
                                        return $returnValue1254;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(args1269, ((panda$core$Object*) expr1278));
                                }
                                goto $l1289;
                                $l1290:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1305, ((panda$core$Int64) { 104 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1307 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1305, &$s1306);
                                if (((panda$core$Bit) { !$tmp1307.nonnull }).value) {
                                {
                                    panda$core$Object* $tmp1309 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                                    $tmp1308 = $tmp1309;
                                    panda$core$Panda$unref$panda$core$Object($tmp1308);
                                    $tmp1310 = NULL;
                                    $returnValue1254 = $tmp1310;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1310));
                                    $tmp1277 = 2;
                                    goto $l1275;
                                    $l1311:;
                                    $tmp1266 = 2;
                                    goto $l1264;
                                    $l1312:;
                                    $tmp1249 = 3;
                                    goto $l1247;
                                    $l1313:;
                                    return $returnValue1254;
                                }
                                }
                            }
                            $tmp1277 = -1;
                            goto $l1275;
                            $l1275:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1278));
                            expr1278 = NULL;
                            switch ($tmp1277) {
                                case -1: goto $l1315;
                                case 0: goto $l1285;
                                case 1: goto $l1301;
                                case 2: goto $l1311;
                            }
                            $l1315:;
                        }
                        }
                        panda$core$Object* $tmp1317 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp1316 = $tmp1317;
                        panda$core$Panda$unref$panda$core$Object($tmp1316);
                        {
                            $tmp1318 = result1250;
                            org$pandalanguage$pandac$ASTNode* $tmp1321 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            panda$collections$ImmutableArray* $tmp1323 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1269);
                            $tmp1322 = $tmp1323;
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1321, ((panda$core$Int64) { 8 }), token1260.position, result1250, $tmp1322);
                            $tmp1320 = $tmp1321;
                            $tmp1319 = $tmp1320;
                            result1250 = $tmp1319;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1319));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
                        }
                    }
                    $tmp1266 = -1;
                    goto $l1264;
                    $l1264:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1269));
                    args1269 = NULL;
                    switch ($tmp1266) {
                        case -1: goto $l1324;
                        case 0: goto $l1286;
                        case 1: goto $l1302;
                        case 2: goto $l1312;
                    }
                    $l1324:;
                }
                }
                else {
                panda$core$Bit $tmp1325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$623_131262.$rawValue, ((panda$core$Int64) { 101 }));
                if ($tmp1325.value) {
                {
                    int $tmp1328;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1332 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1331 = $tmp1332;
                        $tmp1330 = $tmp1331;
                        arg1329 = $tmp1330;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1330));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
                        if (((panda$core$Bit) { arg1329 == NULL }).value) {
                        {
                            $tmp1333 = NULL;
                            $returnValue1254 = $tmp1333;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
                            $tmp1328 = 0;
                            goto $l1326;
                            $l1334:;
                            $tmp1249 = 4;
                            goto $l1247;
                            $l1335:;
                            return $returnValue1254;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1337, ((panda$core$Int64) { 102 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1339 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1337, &$s1338);
                        if (((panda$core$Bit) { !$tmp1339.nonnull }).value) {
                        {
                            $tmp1340 = NULL;
                            $returnValue1254 = $tmp1340;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                            $tmp1328 = 1;
                            goto $l1326;
                            $l1341:;
                            $tmp1249 = 5;
                            goto $l1247;
                            $l1342:;
                            return $returnValue1254;
                        }
                        }
                        {
                            $tmp1344 = result1250;
                            org$pandalanguage$pandac$ASTNode* $tmp1347 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1348, ((panda$core$Int64) { 101 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1347, ((panda$core$Int64) { 4 }), token1260.position, result1250, $tmp1348, arg1329);
                            $tmp1346 = $tmp1347;
                            $tmp1345 = $tmp1346;
                            result1250 = $tmp1345;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1345));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1346));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1344));
                        }
                    }
                    $tmp1328 = -1;
                    goto $l1326;
                    $l1326:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1329));
                    arg1329 = NULL;
                    switch ($tmp1328) {
                        case -1: goto $l1349;
                        case 1: goto $l1341;
                        case 0: goto $l1334;
                    }
                    $l1349:;
                }
                }
                else {
                panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$623_131262.$rawValue, ((panda$core$Int64) { 98 }));
                if ($tmp1350.value) {
                {
                    int $tmp1353;
                    {
                        memset(&name1354, 0, sizeof(name1354));
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1355, ((panda$core$Int64) { 22 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp1356 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1355);
                        if (((panda$core$Bit) { $tmp1356.nonnull }).value) {
                        {
                            {
                                $tmp1357 = name1354;
                                $tmp1358 = &$s1359;
                                name1354 = $tmp1358;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1358));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1357));
                            }
                        }
                        }
                        else {
                        {
                            {
                                $tmp1360 = name1354;
                                panda$core$String* $tmp1363 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                                $tmp1362 = $tmp1363;
                                $tmp1361 = $tmp1362;
                                name1354 = $tmp1361;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
                            }
                            if (((panda$core$Bit) { name1354 == NULL }).value) {
                            {
                                $tmp1364 = NULL;
                                $returnValue1254 = $tmp1364;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                                $tmp1353 = 0;
                                goto $l1351;
                                $l1365:;
                                $tmp1249 = 6;
                                goto $l1247;
                                $l1366:;
                                return $returnValue1254;
                            }
                            }
                        }
                        }
                        {
                            $tmp1368 = result1250;
                            org$pandalanguage$pandac$ASTNode* $tmp1371 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp1371, ((panda$core$Int64) { 15 }), token1260.position, result1250, name1354);
                            $tmp1370 = $tmp1371;
                            $tmp1369 = $tmp1370;
                            result1250 = $tmp1369;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
                        }
                    }
                    $tmp1353 = -1;
                    goto $l1351;
                    $l1351:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1354));
                    switch ($tmp1353) {
                        case -1: goto $l1372;
                        case 0: goto $l1365;
                    }
                    $l1372:;
                }
                }
                else {
                panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$623_131262.$rawValue, ((panda$core$Int64) { 89 }));
                if ($tmp1373.value) {
                {
                    int $tmp1376;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1380 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1379 = $tmp1380;
                        $tmp1378 = $tmp1379;
                        target1377 = $tmp1378;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
                        if (((panda$core$Bit) { target1377 == NULL }).value) {
                        {
                            $tmp1381 = NULL;
                            $returnValue1254 = $tmp1381;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
                            $tmp1376 = 0;
                            goto $l1374;
                            $l1382:;
                            $tmp1249 = 7;
                            goto $l1247;
                            $l1383:;
                            return $returnValue1254;
                        }
                        }
                        {
                            $tmp1385 = result1250;
                            org$pandalanguage$pandac$ASTNode* $tmp1388 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1389, ((panda$core$Int64) { 89 }));
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1388, ((panda$core$Int64) { 4 }), token1260.position, result1250, $tmp1389, target1377);
                            $tmp1387 = $tmp1388;
                            $tmp1386 = $tmp1387;
                            result1250 = $tmp1386;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1386));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1387));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                        }
                    }
                    $tmp1376 = -1;
                    goto $l1374;
                    $l1374:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1377));
                    target1377 = NULL;
                    switch ($tmp1376) {
                        case -1: goto $l1390;
                        case 0: goto $l1382;
                    }
                    $l1390:;
                }
                }
                else {
                panda$core$Bit $tmp1391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$623_131262.$rawValue, ((panda$core$Int64) { 62 }));
                if ($tmp1391.value) {
                {
                    int $tmp1394;
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1260);
                        panda$core$String* $tmp1398 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result1250);
                        $tmp1397 = $tmp1398;
                        $tmp1396 = $tmp1397;
                        name1395 = $tmp1396;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1396));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1397));
                        if (((panda$core$Bit) { name1395 != NULL }).value) {
                        {
                            int $tmp1401;
                            {
                                org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                                panda$collections$Array* $tmp1405 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init($tmp1405);
                                $tmp1404 = $tmp1405;
                                $tmp1403 = $tmp1404;
                                types1402 = $tmp1403;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1403));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1404));
                                org$pandalanguage$pandac$ASTNode* $tmp1409 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                $tmp1408 = $tmp1409;
                                $tmp1407 = $tmp1408;
                                t1406 = $tmp1407;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                                if (((panda$core$Bit) { t1406 == NULL }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1410 = result1250;
                                    $returnValue1254 = $tmp1410;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
                                    $tmp1401 = 0;
                                    goto $l1399;
                                    $l1411:;
                                    $tmp1394 = 0;
                                    goto $l1392;
                                    $l1412:;
                                    $tmp1249 = 8;
                                    goto $l1247;
                                    $l1413:;
                                    return $returnValue1254;
                                }
                                }
                                panda$collections$Array$add$panda$collections$Array$T(types1402, ((panda$core$Object*) t1406));
                                $l1415:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1418, ((panda$core$Int64) { 105 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1419 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1418);
                                bool $tmp1417 = ((panda$core$Bit) { $tmp1419.nonnull }).value;
                                if (!$tmp1417) goto $l1416;
                                {
                                    {
                                        $tmp1420 = t1406;
                                        org$pandalanguage$pandac$ASTNode* $tmp1423 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                                        $tmp1422 = $tmp1423;
                                        $tmp1421 = $tmp1422;
                                        t1406 = $tmp1421;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1421));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                                    }
                                    if (((panda$core$Bit) { t1406 == NULL }).value) {
                                    {
                                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                                        $tmp1424 = result1250;
                                        $returnValue1254 = $tmp1424;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1424));
                                        $tmp1401 = 1;
                                        goto $l1399;
                                        $l1425:;
                                        $tmp1394 = 1;
                                        goto $l1392;
                                        $l1426:;
                                        $tmp1249 = 9;
                                        goto $l1247;
                                        $l1427:;
                                        return $returnValue1254;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(types1402, ((panda$core$Object*) t1406));
                                }
                                goto $l1415;
                                $l1416:;
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1429, ((panda$core$Int64) { 63 }));
                                org$pandalanguage$pandac$parser$Token$nullable $tmp1431 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1429, &$s1430);
                                if (((panda$core$Bit) { !$tmp1431.nonnull }).value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1432 = result1250;
                                    $returnValue1254 = $tmp1432;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
                                    $tmp1401 = 2;
                                    goto $l1399;
                                    $l1433:;
                                    $tmp1394 = 2;
                                    goto $l1392;
                                    $l1434:;
                                    $tmp1249 = 10;
                                    goto $l1247;
                                    $l1435:;
                                    return $returnValue1254;
                                }
                                }
                                memset(&shouldAccept1437, 0, sizeof(shouldAccept1437));
                                panda$core$Object* $tmp1439 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Int64) { 0 }));
                                $tmp1438 = $tmp1439;
                                panda$core$Panda$unref$panda$core$Object($tmp1438);
                                if (((panda$core$Bit$wrapper*) $tmp1438)->value.value) {
                                {
                                    {
                                        org$pandalanguage$pandac$parser$Token $tmp1441 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                                        $match$728_291440 = $tmp1441.kind;
                                        panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_291440.$rawValue, ((panda$core$Int64) { 98 }));
                                        bool $tmp1444 = $tmp1445.value;
                                        if ($tmp1444) goto $l1446;
                                        panda$core$Bit $tmp1447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_291440.$rawValue, ((panda$core$Int64) { 103 }));
                                        $tmp1444 = $tmp1447.value;
                                        $l1446:;
                                        panda$core$Bit $tmp1448 = { $tmp1444 };
                                        bool $tmp1443 = $tmp1448.value;
                                        if ($tmp1443) goto $l1449;
                                        panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_291440.$rawValue, ((panda$core$Int64) { 105 }));
                                        $tmp1443 = $tmp1450.value;
                                        $l1449:;
                                        panda$core$Bit $tmp1451 = { $tmp1443 };
                                        bool $tmp1442 = $tmp1451.value;
                                        if ($tmp1442) goto $l1452;
                                        panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$728_291440.$rawValue, ((panda$core$Int64) { 89 }));
                                        $tmp1442 = $tmp1453.value;
                                        $l1452:;
                                        panda$core$Bit $tmp1454 = { $tmp1442 };
                                        if ($tmp1454.value) {
                                        {
                                            shouldAccept1437 = ((panda$core$Bit) { true });
                                        }
                                        }
                                        else {
                                        {
                                            shouldAccept1437 = ((panda$core$Bit) { false });
                                        }
                                        }
                                    }
                                }
                                }
                                else {
                                {
                                    shouldAccept1437 = ((panda$core$Bit) { true });
                                }
                                }
                                if (shouldAccept1437.value) {
                                {
                                    org$pandalanguage$pandac$parser$Parser$accept(self);
                                    {
                                        $tmp1455 = result1250;
                                        org$pandalanguage$pandac$ASTNode* $tmp1458 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                        org$pandalanguage$pandac$Position $tmp1460 = (($fn1459) result1250->$class->vtable[2])(result1250);
                                        panda$collections$ImmutableArray* $tmp1462 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types1402);
                                        $tmp1461 = $tmp1462;
                                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1458, ((panda$core$Int64) { 19 }), $tmp1460, name1395, $tmp1461);
                                        $tmp1457 = $tmp1458;
                                        $tmp1456 = $tmp1457;
                                        result1250 = $tmp1456;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1456));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1455));
                                    }
                                    $tmp1401 = 3;
                                    goto $l1399;
                                    $l1463:;
                                    $tmp1394 = 3;
                                    goto $l1392;
                                    $l1464:;
                                    goto $l1258;
                                }
                                }
                                else {
                                {
                                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                                    $tmp1465 = result1250;
                                    $returnValue1254 = $tmp1465;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                                    $tmp1401 = 4;
                                    goto $l1399;
                                    $l1466:;
                                    $tmp1394 = 4;
                                    goto $l1392;
                                    $l1467:;
                                    $tmp1249 = 11;
                                    goto $l1247;
                                    $l1468:;
                                    return $returnValue1254;
                                }
                                }
                            }
                            $tmp1401 = -1;
                            goto $l1399;
                            $l1399:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types1402));
                            types1402 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1406));
                            t1406 = NULL;
                            switch ($tmp1401) {
                                case -1: goto $l1470;
                                case 4: goto $l1466;
                                case 3: goto $l1463;
                                case 2: goto $l1433;
                                case 1: goto $l1425;
                                case 0: goto $l1411;
                            }
                            $l1470:;
                        }
                        }
                        $tmp1471 = result1250;
                        $returnValue1254 = $tmp1471;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                        $tmp1394 = 5;
                        goto $l1392;
                        $l1472:;
                        $tmp1249 = 12;
                        goto $l1247;
                        $l1473:;
                        return $returnValue1254;
                    }
                    $l1392:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1395));
                    name1395 = NULL;
                    switch ($tmp1394) {
                        case 1: goto $l1426;
                        case 0: goto $l1412;
                        case 4: goto $l1467;
                        case 2: goto $l1434;
                        case 5: goto $l1472;
                        case 3: goto $l1464;
                    }
                    $l1475:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token1260);
                    $tmp1476 = result1250;
                    $returnValue1254 = $tmp1476;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1476));
                    $tmp1249 = 13;
                    goto $l1247;
                    $l1477:;
                    return $returnValue1254;
                }
                }
                }
                }
                }
                }
            }
        }
        }
        $l1259:;
    }
    $tmp1249 = -1;
    goto $l1247;
    $l1247:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1250));
    result1250 = NULL;
    switch ($tmp1249) {
        case 6: goto $l1366;
        case 9: goto $l1427;
        case 8: goto $l1413;
        case 11: goto $l1468;
        case 12: goto $l1473;
        case 3: goto $l1313;
        case 13: goto $l1477;
        case 7: goto $l1383;
        case 2: goto $l1303;
        case -1: goto $l1479;
        case 1: goto $l1287;
        case 5: goto $l1342;
        case 10: goto $l1435;
        case 0: goto $l1256;
        case 4: goto $l1335;
    }
    $l1479:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1483 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1484;
    org$pandalanguage$pandac$ASTNode* $tmp1485;
    org$pandalanguage$pandac$ASTNode* $returnValue1487;
    org$pandalanguage$pandac$ASTNode* $tmp1488;
    org$pandalanguage$pandac$parser$Token$nullable op1496;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1497;
    org$pandalanguage$pandac$ASTNode* next1500 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1501;
    org$pandalanguage$pandac$ASTNode* $tmp1502;
    org$pandalanguage$pandac$ASTNode* $tmp1504;
    org$pandalanguage$pandac$ASTNode* $tmp1508;
    org$pandalanguage$pandac$ASTNode* $tmp1509;
    org$pandalanguage$pandac$ASTNode* $tmp1510;
    org$pandalanguage$pandac$ASTNode* $tmp1513;
    int $tmp1482;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1486 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1485 = $tmp1486;
        $tmp1484 = $tmp1485;
        result1483 = $tmp1484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1485));
        if (((panda$core$Bit) { result1483 == NULL }).value) {
        {
            $tmp1488 = NULL;
            $returnValue1487 = $tmp1488;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1488));
            $tmp1482 = 0;
            goto $l1480;
            $l1489:;
            return $returnValue1487;
        }
        }
        $l1491:;
        while (true) {
        {
            int $tmp1495;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1497, ((panda$core$Int64) { 57 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1498 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1497);
                op1496 = $tmp1498;
                if (((panda$core$Bit) { !op1496.nonnull }).value) {
                {
                    $tmp1495 = 0;
                    goto $l1493;
                    $l1499:;
                    goto $l1492;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1503 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1502 = $tmp1503;
                $tmp1501 = $tmp1502;
                next1500 = $tmp1501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
                if (((panda$core$Bit) { next1500 == NULL }).value) {
                {
                    $tmp1504 = NULL;
                    $returnValue1487 = $tmp1504;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1504));
                    $tmp1495 = 1;
                    goto $l1493;
                    $l1505:;
                    $tmp1482 = 1;
                    goto $l1480;
                    $l1506:;
                    return $returnValue1487;
                }
                }
                {
                    $tmp1508 = result1483;
                    org$pandalanguage$pandac$ASTNode* $tmp1511 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1511, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1496.value).position, result1483, ((org$pandalanguage$pandac$parser$Token) op1496.value).kind, next1500);
                    $tmp1510 = $tmp1511;
                    $tmp1509 = $tmp1510;
                    result1483 = $tmp1509;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                }
            }
            $tmp1495 = -1;
            goto $l1493;
            $l1493:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1500));
            next1500 = NULL;
            switch ($tmp1495) {
                case 1: goto $l1505;
                case -1: goto $l1512;
                case 0: goto $l1499;
            }
            $l1512:;
        }
        }
        $l1492:;
        $tmp1513 = result1483;
        $returnValue1487 = $tmp1513;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
        $tmp1482 = 2;
        goto $l1480;
        $l1514:;
        return $returnValue1487;
    }
    $l1480:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1483));
    result1483 = NULL;
    switch ($tmp1482) {
        case 1: goto $l1506;
        case 2: goto $l1514;
        case 0: goto $l1489;
    }
    $l1516:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op1517;
    org$pandalanguage$pandac$parser$Token$Kind $match$784_91519;
    org$pandalanguage$pandac$ASTNode* base1532 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1533;
    org$pandalanguage$pandac$ASTNode* $tmp1534;
    org$pandalanguage$pandac$ASTNode* $returnValue1536;
    org$pandalanguage$pandac$ASTNode* $tmp1537;
    org$pandalanguage$pandac$ASTNode* $tmp1540;
    org$pandalanguage$pandac$ASTNode* $tmp1541;
    org$pandalanguage$pandac$ASTNode* $tmp1546;
    org$pandalanguage$pandac$ASTNode* $tmp1547;
    org$pandalanguage$pandac$parser$Token $tmp1518 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op1517 = $tmp1518;
    {
        $match$784_91519 = op1517.kind;
        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$784_91519.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp1521 = $tmp1522.value;
        if ($tmp1521) goto $l1523;
        panda$core$Bit $tmp1524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$784_91519.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp1521 = $tmp1524.value;
        $l1523:;
        panda$core$Bit $tmp1525 = { $tmp1521 };
        bool $tmp1520 = $tmp1525.value;
        if ($tmp1520) goto $l1526;
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$784_91519.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp1520 = $tmp1527.value;
        $l1526:;
        panda$core$Bit $tmp1528 = { $tmp1520 };
        if ($tmp1528.value) {
        {
            int $tmp1531;
            {
                org$pandalanguage$pandac$ASTNode* $tmp1535 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1534 = $tmp1535;
                $tmp1533 = $tmp1534;
                base1532 = $tmp1533;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                if (((panda$core$Bit) { base1532 == NULL }).value) {
                {
                    $tmp1537 = NULL;
                    $returnValue1536 = $tmp1537;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1537));
                    $tmp1531 = 0;
                    goto $l1529;
                    $l1538:;
                    return $returnValue1536;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1542 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1542, ((panda$core$Int64) { 32 }), op1517.position, op1517.kind, base1532);
                $tmp1541 = $tmp1542;
                $tmp1540 = $tmp1541;
                $returnValue1536 = $tmp1540;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1540));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1541));
                $tmp1531 = 1;
                goto $l1529;
                $l1543:;
                return $returnValue1536;
            }
            $l1529:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1532));
            base1532 = NULL;
            switch ($tmp1531) {
                case 0: goto $l1538;
                case 1: goto $l1543;
            }
            $l1545:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1517);
            org$pandalanguage$pandac$ASTNode* $tmp1548 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1547 = $tmp1548;
            $tmp1546 = $tmp1547;
            $returnValue1536 = $tmp1546;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1546));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
            return $returnValue1536;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1554;
    org$pandalanguage$pandac$ASTNode* $tmp1555;
    org$pandalanguage$pandac$ASTNode* $returnValue1557;
    org$pandalanguage$pandac$ASTNode* $tmp1558;
    org$pandalanguage$pandac$parser$Token op1563;
    org$pandalanguage$pandac$parser$Token$Kind $match$810_131565;
    org$pandalanguage$pandac$ASTNode* next1594 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1595;
    org$pandalanguage$pandac$ASTNode* $tmp1596;
    org$pandalanguage$pandac$ASTNode* $tmp1598;
    org$pandalanguage$pandac$ASTNode* $tmp1602;
    org$pandalanguage$pandac$ASTNode* $tmp1603;
    org$pandalanguage$pandac$ASTNode* $tmp1604;
    org$pandalanguage$pandac$parser$Token nextToken1608;
    org$pandalanguage$pandac$ASTNode* next1614 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1615;
    org$pandalanguage$pandac$ASTNode* $tmp1616;
    org$pandalanguage$pandac$ASTNode* $tmp1618;
    org$pandalanguage$pandac$ASTNode* $tmp1622;
    org$pandalanguage$pandac$ASTNode* $tmp1623;
    org$pandalanguage$pandac$ASTNode* $tmp1624;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1626;
    org$pandalanguage$pandac$ASTNode* $tmp1628;
    org$pandalanguage$pandac$ASTNode* $tmp1631;
    int $tmp1552;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1556 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1555 = $tmp1556;
        $tmp1554 = $tmp1555;
        result1553 = $tmp1554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
        if (((panda$core$Bit) { result1553 == NULL }).value) {
        {
            $tmp1558 = NULL;
            $returnValue1557 = $tmp1558;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1558));
            $tmp1552 = 0;
            goto $l1550;
            $l1559:;
            return $returnValue1557;
        }
        }
        $l1561:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1564 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1563 = $tmp1564;
            {
                $match$810_131565 = op1563.kind;
                panda$core$Bit $tmp1572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 53 }));
                bool $tmp1571 = $tmp1572.value;
                if ($tmp1571) goto $l1573;
                panda$core$Bit $tmp1574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 54 }));
                $tmp1571 = $tmp1574.value;
                $l1573:;
                panda$core$Bit $tmp1575 = { $tmp1571 };
                bool $tmp1570 = $tmp1575.value;
                if ($tmp1570) goto $l1576;
                panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 55 }));
                $tmp1570 = $tmp1577.value;
                $l1576:;
                panda$core$Bit $tmp1578 = { $tmp1570 };
                bool $tmp1569 = $tmp1578.value;
                if ($tmp1569) goto $l1579;
                panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 56 }));
                $tmp1569 = $tmp1580.value;
                $l1579:;
                panda$core$Bit $tmp1581 = { $tmp1569 };
                bool $tmp1568 = $tmp1581.value;
                if ($tmp1568) goto $l1582;
                panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 72 }));
                $tmp1568 = $tmp1583.value;
                $l1582:;
                panda$core$Bit $tmp1584 = { $tmp1568 };
                bool $tmp1567 = $tmp1584.value;
                if ($tmp1567) goto $l1585;
                panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 67 }));
                $tmp1567 = $tmp1586.value;
                $l1585:;
                panda$core$Bit $tmp1587 = { $tmp1567 };
                bool $tmp1566 = $tmp1587.value;
                if ($tmp1566) goto $l1588;
                panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 69 }));
                $tmp1566 = $tmp1589.value;
                $l1588:;
                panda$core$Bit $tmp1590 = { $tmp1566 };
                if ($tmp1590.value) {
                {
                    int $tmp1593;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1597 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1596 = $tmp1597;
                        $tmp1595 = $tmp1596;
                        next1594 = $tmp1595;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1595));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1596));
                        if (((panda$core$Bit) { next1594 == NULL }).value) {
                        {
                            $tmp1598 = NULL;
                            $returnValue1557 = $tmp1598;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1598));
                            $tmp1593 = 0;
                            goto $l1591;
                            $l1599:;
                            $tmp1552 = 1;
                            goto $l1550;
                            $l1600:;
                            return $returnValue1557;
                        }
                        }
                        {
                            $tmp1602 = result1553;
                            org$pandalanguage$pandac$ASTNode* $tmp1605 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1605, ((panda$core$Int64) { 4 }), op1563.position, result1553, op1563.kind, next1594);
                            $tmp1604 = $tmp1605;
                            $tmp1603 = $tmp1604;
                            result1553 = $tmp1603;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1603));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
                        }
                    }
                    $tmp1593 = -1;
                    goto $l1591;
                    $l1591:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1594));
                    next1594 = NULL;
                    switch ($tmp1593) {
                        case 0: goto $l1599;
                        case -1: goto $l1606;
                    }
                    $l1606:;
                }
                }
                else {
                panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$810_131565.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp1607.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp1609 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    nextToken1608 = $tmp1609;
                    panda$core$Bit $tmp1610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken1608.kind.$rawValue, ((panda$core$Int64) { 63 }));
                    if ($tmp1610.value) {
                    {
                        int $tmp1613;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1617 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1616 = $tmp1617;
                            $tmp1615 = $tmp1616;
                            next1614 = $tmp1615;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1615));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1616));
                            if (((panda$core$Bit) { next1614 == NULL }).value) {
                            {
                                $tmp1618 = NULL;
                                $returnValue1557 = $tmp1618;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1618));
                                $tmp1613 = 0;
                                goto $l1611;
                                $l1619:;
                                $tmp1552 = 2;
                                goto $l1550;
                                $l1620:;
                                return $returnValue1557;
                            }
                            }
                            {
                                $tmp1622 = result1553;
                                org$pandalanguage$pandac$ASTNode* $tmp1625 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1626, ((panda$core$Int64) { 1 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1625, ((panda$core$Int64) { 4 }), op1563.position, result1553, $tmp1626, next1614);
                                $tmp1624 = $tmp1625;
                                $tmp1623 = $tmp1624;
                                result1553 = $tmp1623;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1623));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1624));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1622));
                            }
                        }
                        $tmp1613 = -1;
                        goto $l1611;
                        $l1611:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1614));
                        next1614 = NULL;
                        switch ($tmp1613) {
                            case 0: goto $l1619;
                            case -1: goto $l1627;
                        }
                        $l1627:;
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken1608);
                        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1563);
                        $tmp1628 = result1553;
                        $returnValue1557 = $tmp1628;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1628));
                        $tmp1552 = 3;
                        goto $l1550;
                        $l1629:;
                        return $returnValue1557;
                    }
                    }
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1563);
                    $tmp1631 = result1553;
                    $returnValue1557 = $tmp1631;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1631));
                    $tmp1552 = 4;
                    goto $l1550;
                    $l1632:;
                    return $returnValue1557;
                }
                }
                }
            }
        }
        }
        $l1562:;
    }
    $tmp1552 = -1;
    goto $l1550;
    $l1550:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1553));
    result1553 = NULL;
    switch ($tmp1552) {
        case 1: goto $l1600;
        case 2: goto $l1620;
        case -1: goto $l1634;
        case 3: goto $l1629;
        case 0: goto $l1559;
        case 4: goto $l1632;
    }
    $l1634:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1638 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1639;
    org$pandalanguage$pandac$ASTNode* $tmp1640;
    org$pandalanguage$pandac$ASTNode* $returnValue1642;
    org$pandalanguage$pandac$ASTNode* $tmp1643;
    org$pandalanguage$pandac$parser$Token op1648;
    org$pandalanguage$pandac$parser$Token$Kind $match$851_131650;
    org$pandalanguage$pandac$ASTNode* next1663 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1664;
    org$pandalanguage$pandac$ASTNode* $tmp1665;
    org$pandalanguage$pandac$ASTNode* $tmp1667;
    org$pandalanguage$pandac$ASTNode* $tmp1671;
    org$pandalanguage$pandac$ASTNode* $tmp1672;
    org$pandalanguage$pandac$ASTNode* $tmp1673;
    org$pandalanguage$pandac$ASTNode* $tmp1676;
    int $tmp1637;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1641 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1640 = $tmp1641;
        $tmp1639 = $tmp1640;
        result1638 = $tmp1639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
        if (((panda$core$Bit) { result1638 == NULL }).value) {
        {
            $tmp1643 = NULL;
            $returnValue1642 = $tmp1643;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1643));
            $tmp1637 = 0;
            goto $l1635;
            $l1644:;
            return $returnValue1642;
        }
        }
        $l1646:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1649 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1648 = $tmp1649;
            {
                $match$851_131650 = op1648.kind;
                panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$851_131650.$rawValue, ((panda$core$Int64) { 51 }));
                bool $tmp1652 = $tmp1653.value;
                if ($tmp1652) goto $l1654;
                panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$851_131650.$rawValue, ((panda$core$Int64) { 52 }));
                $tmp1652 = $tmp1655.value;
                $l1654:;
                panda$core$Bit $tmp1656 = { $tmp1652 };
                bool $tmp1651 = $tmp1656.value;
                if ($tmp1651) goto $l1657;
                panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$851_131650.$rawValue, ((panda$core$Int64) { 71 }));
                $tmp1651 = $tmp1658.value;
                $l1657:;
                panda$core$Bit $tmp1659 = { $tmp1651 };
                if ($tmp1659.value) {
                {
                    int $tmp1662;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1666 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1665 = $tmp1666;
                        $tmp1664 = $tmp1665;
                        next1663 = $tmp1664;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1664));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1665));
                        if (((panda$core$Bit) { next1663 == NULL }).value) {
                        {
                            $tmp1667 = NULL;
                            $returnValue1642 = $tmp1667;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1667));
                            $tmp1662 = 0;
                            goto $l1660;
                            $l1668:;
                            $tmp1637 = 1;
                            goto $l1635;
                            $l1669:;
                            return $returnValue1642;
                        }
                        }
                        {
                            $tmp1671 = result1638;
                            org$pandalanguage$pandac$ASTNode* $tmp1674 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1674, ((panda$core$Int64) { 4 }), op1648.position, result1638, op1648.kind, next1663);
                            $tmp1673 = $tmp1674;
                            $tmp1672 = $tmp1673;
                            result1638 = $tmp1672;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1672));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1673));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                        }
                    }
                    $tmp1662 = -1;
                    goto $l1660;
                    $l1660:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1663));
                    next1663 = NULL;
                    switch ($tmp1662) {
                        case -1: goto $l1675;
                        case 0: goto $l1668;
                    }
                    $l1675:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1648);
                    $tmp1676 = result1638;
                    $returnValue1642 = $tmp1676;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1676));
                    $tmp1637 = 2;
                    goto $l1635;
                    $l1677:;
                    return $returnValue1642;
                }
                }
            }
        }
        }
        $l1647:;
    }
    $tmp1637 = -1;
    goto $l1635;
    $l1635:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1638));
    result1638 = NULL;
    switch ($tmp1637) {
        case 1: goto $l1669;
        case -1: goto $l1679;
        case 2: goto $l1677;
        case 0: goto $l1644;
    }
    $l1679:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1683 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$871_91684;
    org$pandalanguage$pandac$ASTNode* $tmp1691;
    org$pandalanguage$pandac$ASTNode* $tmp1692;
    org$pandalanguage$pandac$ASTNode* $tmp1693;
    org$pandalanguage$pandac$ASTNode* $tmp1694;
    org$pandalanguage$pandac$ASTNode* $tmp1695;
    org$pandalanguage$pandac$ASTNode* $returnValue1697;
    org$pandalanguage$pandac$ASTNode* $tmp1698;
    org$pandalanguage$pandac$parser$Token op1701;
    org$pandalanguage$pandac$parser$Token$Kind $match$881_91703;
    org$pandalanguage$pandac$parser$Token next1712;
    org$pandalanguage$pandac$ASTNode* right1714 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1724;
    org$pandalanguage$pandac$ASTNode* $tmp1725;
    org$pandalanguage$pandac$ASTNode* $tmp1726;
    org$pandalanguage$pandac$ASTNode* $tmp1728;
    org$pandalanguage$pandac$ASTNode* $tmp1732;
    org$pandalanguage$pandac$ASTNode* $tmp1733;
    org$pandalanguage$pandac$ASTNode* step1734 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1735;
    org$pandalanguage$pandac$ASTNode* $tmp1737;
    org$pandalanguage$pandac$ASTNode* $tmp1738;
    org$pandalanguage$pandac$ASTNode* $tmp1739;
    org$pandalanguage$pandac$ASTNode* $tmp1741;
    org$pandalanguage$pandac$ASTNode* $tmp1745;
    org$pandalanguage$pandac$ASTNode* $tmp1746;
    org$pandalanguage$pandac$ASTNode* $tmp1747;
    org$pandalanguage$pandac$ASTNode* $tmp1748;
    org$pandalanguage$pandac$ASTNode* $tmp1755;
    int $tmp1682;
    {
        memset(&result1683, 0, sizeof(result1683));
        {
            org$pandalanguage$pandac$parser$Token $tmp1685 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$871_91684 = $tmp1685.kind;
            panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$871_91684.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1686 = $tmp1687.value;
            if ($tmp1686) goto $l1688;
            panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$871_91684.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1686 = $tmp1689.value;
            $l1688:;
            panda$core$Bit $tmp1690 = { $tmp1686 };
            if ($tmp1690.value) {
            {
                {
                    $tmp1691 = result1683;
                    $tmp1692 = NULL;
                    result1683 = $tmp1692;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1692));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1691));
                }
            }
            }
            else {
            {
                {
                    $tmp1693 = result1683;
                    org$pandalanguage$pandac$ASTNode* $tmp1696 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1695 = $tmp1696;
                    $tmp1694 = $tmp1695;
                    result1683 = $tmp1694;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1694));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1695));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
                }
                if (((panda$core$Bit) { result1683 == NULL }).value) {
                {
                    $tmp1698 = NULL;
                    $returnValue1697 = $tmp1698;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1698));
                    $tmp1682 = 0;
                    goto $l1680;
                    $l1699:;
                    return $returnValue1697;
                }
                }
            }
            }
        }
        org$pandalanguage$pandac$parser$Token $tmp1702 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op1701 = $tmp1702;
        {
            $match$881_91703 = op1701.kind;
            panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$881_91703.$rawValue, ((panda$core$Int64) { 97 }));
            bool $tmp1704 = $tmp1705.value;
            if ($tmp1704) goto $l1706;
            panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$881_91703.$rawValue, ((panda$core$Int64) { 96 }));
            $tmp1704 = $tmp1707.value;
            $l1706:;
            panda$core$Bit $tmp1708 = { $tmp1704 };
            if ($tmp1708.value) {
            {
                int $tmp1711;
                {
                    org$pandalanguage$pandac$parser$Token $tmp1713 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    next1712 = $tmp1713;
                    memset(&right1714, 0, sizeof(right1714));
                    panda$core$Bit $tmp1717 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1712.kind.$rawValue, ((panda$core$Int64) { 102 }));
                    bool $tmp1716 = $tmp1717.value;
                    if (!$tmp1716) goto $l1718;
                    panda$core$Bit $tmp1719 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1712.kind.$rawValue, ((panda$core$Int64) { 104 }));
                    $tmp1716 = $tmp1719.value;
                    $l1718:;
                    panda$core$Bit $tmp1720 = { $tmp1716 };
                    bool $tmp1715 = $tmp1720.value;
                    if (!$tmp1715) goto $l1721;
                    panda$core$Bit $tmp1722 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next1712.kind.$rawValue, ((panda$core$Int64) { 33 }));
                    $tmp1715 = $tmp1722.value;
                    $l1721:;
                    panda$core$Bit $tmp1723 = { $tmp1715 };
                    if ($tmp1723.value) {
                    {
                        {
                            $tmp1724 = right1714;
                            org$pandalanguage$pandac$ASTNode* $tmp1727 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1726 = $tmp1727;
                            $tmp1725 = $tmp1726;
                            right1714 = $tmp1725;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1725));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1724));
                        }
                        if (((panda$core$Bit) { right1714 == NULL }).value) {
                        {
                            $tmp1728 = NULL;
                            $returnValue1697 = $tmp1728;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
                            $tmp1711 = 0;
                            goto $l1709;
                            $l1729:;
                            $tmp1682 = 1;
                            goto $l1680;
                            $l1730:;
                            return $returnValue1697;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1732 = right1714;
                            $tmp1733 = NULL;
                            right1714 = $tmp1733;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1733));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1732));
                        }
                    }
                    }
                    memset(&step1734, 0, sizeof(step1734));
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1735, ((panda$core$Int64) { 33 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp1736 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1735);
                    if (((panda$core$Bit) { $tmp1736.nonnull }).value) {
                    {
                        {
                            $tmp1737 = step1734;
                            org$pandalanguage$pandac$ASTNode* $tmp1740 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp1739 = $tmp1740;
                            $tmp1738 = $tmp1739;
                            step1734 = $tmp1738;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1738));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
                        }
                        if (((panda$core$Bit) { step1734 == NULL }).value) {
                        {
                            $tmp1741 = NULL;
                            $returnValue1697 = $tmp1741;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1741));
                            $tmp1711 = 1;
                            goto $l1709;
                            $l1742:;
                            $tmp1682 = 2;
                            goto $l1680;
                            $l1743:;
                            return $returnValue1697;
                        }
                        }
                    }
                    }
                    else {
                    {
                        {
                            $tmp1745 = step1734;
                            $tmp1746 = NULL;
                            step1734 = $tmp1746;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1746));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1745));
                        }
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp1749 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$Bit $tmp1750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op1701.kind.$rawValue, ((panda$core$Int64) { 96 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp1749, ((panda$core$Int64) { 33 }), op1701.position, result1683, right1714, $tmp1750, step1734);
                    $tmp1748 = $tmp1749;
                    $tmp1747 = $tmp1748;
                    $returnValue1697 = $tmp1747;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
                    $tmp1711 = 2;
                    goto $l1709;
                    $l1751:;
                    $tmp1682 = 3;
                    goto $l1680;
                    $l1752:;
                    return $returnValue1697;
                }
                $l1709:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) right1714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) step1734));
                switch ($tmp1711) {
                    case 0: goto $l1729;
                    case 2: goto $l1751;
                    case 1: goto $l1742;
                }
                $l1754:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1701);
                $tmp1755 = result1683;
                $returnValue1697 = $tmp1755;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1755));
                $tmp1682 = 4;
                goto $l1680;
                $l1756:;
                return $returnValue1697;
            }
            }
        }
    }
    $tmp1682 = -1;
    goto $l1680;
    $l1680:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1683));
    switch ($tmp1682) {
        case 4: goto $l1756;
        case -1: goto $l1758;
        case 2: goto $l1743;
        case 0: goto $l1699;
        case 1: goto $l1730;
        case 3: goto $l1752;
    }
    $l1758:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1762 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1763;
    org$pandalanguage$pandac$ASTNode* $tmp1764;
    org$pandalanguage$pandac$ASTNode* $returnValue1766;
    org$pandalanguage$pandac$ASTNode* $tmp1767;
    org$pandalanguage$pandac$parser$Token op1772;
    org$pandalanguage$pandac$parser$Token$Kind $match$924_131774;
    org$pandalanguage$pandac$ASTNode* next1807 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1808;
    org$pandalanguage$pandac$ASTNode* $tmp1809;
    org$pandalanguage$pandac$ASTNode* $tmp1811;
    org$pandalanguage$pandac$ASTNode* $tmp1815;
    org$pandalanguage$pandac$ASTNode* $tmp1816;
    org$pandalanguage$pandac$ASTNode* $tmp1817;
    org$pandalanguage$pandac$ASTNode* $tmp1820;
    int $tmp1761;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1765 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1764 = $tmp1765;
        $tmp1763 = $tmp1764;
        result1762 = $tmp1763;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1763));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1764));
        if (((panda$core$Bit) { result1762 == NULL }).value) {
        {
            $tmp1767 = NULL;
            $returnValue1766 = $tmp1767;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1767));
            $tmp1761 = 0;
            goto $l1759;
            $l1768:;
            return $returnValue1766;
        }
        }
        $l1770:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1773 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1772 = $tmp1773;
            {
                $match$924_131774 = op1772.kind;
                panda$core$Bit $tmp1782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 58 }));
                bool $tmp1781 = $tmp1782.value;
                if ($tmp1781) goto $l1783;
                panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 59 }));
                $tmp1781 = $tmp1784.value;
                $l1783:;
                panda$core$Bit $tmp1785 = { $tmp1781 };
                bool $tmp1780 = $tmp1785.value;
                if ($tmp1780) goto $l1786;
                panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 60 }));
                $tmp1780 = $tmp1787.value;
                $l1786:;
                panda$core$Bit $tmp1788 = { $tmp1780 };
                bool $tmp1779 = $tmp1788.value;
                if ($tmp1779) goto $l1789;
                panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 61 }));
                $tmp1779 = $tmp1790.value;
                $l1789:;
                panda$core$Bit $tmp1791 = { $tmp1779 };
                bool $tmp1778 = $tmp1791.value;
                if ($tmp1778) goto $l1792;
                panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 62 }));
                $tmp1778 = $tmp1793.value;
                $l1792:;
                panda$core$Bit $tmp1794 = { $tmp1778 };
                bool $tmp1777 = $tmp1794.value;
                if ($tmp1777) goto $l1795;
                panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 63 }));
                $tmp1777 = $tmp1796.value;
                $l1795:;
                panda$core$Bit $tmp1797 = { $tmp1777 };
                bool $tmp1776 = $tmp1797.value;
                if ($tmp1776) goto $l1798;
                panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 64 }));
                $tmp1776 = $tmp1799.value;
                $l1798:;
                panda$core$Bit $tmp1800 = { $tmp1776 };
                bool $tmp1775 = $tmp1800.value;
                if ($tmp1775) goto $l1801;
                panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$924_131774.$rawValue, ((panda$core$Int64) { 65 }));
                $tmp1775 = $tmp1802.value;
                $l1801:;
                panda$core$Bit $tmp1803 = { $tmp1775 };
                if ($tmp1803.value) {
                {
                    int $tmp1806;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1810 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1809 = $tmp1810;
                        $tmp1808 = $tmp1809;
                        next1807 = $tmp1808;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1808));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
                        if (((panda$core$Bit) { next1807 == NULL }).value) {
                        {
                            $tmp1811 = NULL;
                            $returnValue1766 = $tmp1811;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1811));
                            $tmp1806 = 0;
                            goto $l1804;
                            $l1812:;
                            $tmp1761 = 1;
                            goto $l1759;
                            $l1813:;
                            return $returnValue1766;
                        }
                        }
                        {
                            $tmp1815 = result1762;
                            org$pandalanguage$pandac$ASTNode* $tmp1818 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1818, ((panda$core$Int64) { 4 }), op1772.position, result1762, op1772.kind, next1807);
                            $tmp1817 = $tmp1818;
                            $tmp1816 = $tmp1817;
                            result1762 = $tmp1816;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1816));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1815));
                        }
                    }
                    $tmp1806 = -1;
                    goto $l1804;
                    $l1804:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1807));
                    next1807 = NULL;
                    switch ($tmp1806) {
                        case 0: goto $l1812;
                        case -1: goto $l1819;
                    }
                    $l1819:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1772);
                    $tmp1820 = result1762;
                    $returnValue1766 = $tmp1820;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1820));
                    $tmp1761 = 2;
                    goto $l1759;
                    $l1821:;
                    return $returnValue1766;
                }
                }
            }
        }
        }
        $l1771:;
    }
    $tmp1761 = -1;
    goto $l1759;
    $l1759:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1762));
    result1762 = NULL;
    switch ($tmp1761) {
        case 2: goto $l1821;
        case 1: goto $l1813;
        case -1: goto $l1823;
        case 0: goto $l1768;
    }
    $l1823:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1827 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1828;
    org$pandalanguage$pandac$ASTNode* $tmp1829;
    org$pandalanguage$pandac$ASTNode* $returnValue1831;
    org$pandalanguage$pandac$ASTNode* $tmp1832;
    org$pandalanguage$pandac$parser$Token op1837;
    org$pandalanguage$pandac$parser$Token$Kind $match$955_131839;
    org$pandalanguage$pandac$ASTNode* next1848 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1849;
    org$pandalanguage$pandac$ASTNode* $tmp1850;
    org$pandalanguage$pandac$ASTNode* $tmp1852;
    org$pandalanguage$pandac$ASTNode* $tmp1856;
    org$pandalanguage$pandac$ASTNode* $tmp1857;
    org$pandalanguage$pandac$ASTNode* $tmp1858;
    org$pandalanguage$pandac$ASTNode* $tmp1861;
    int $tmp1826;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1830 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1829 = $tmp1830;
        $tmp1828 = $tmp1829;
        result1827 = $tmp1828;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1828));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1829));
        if (((panda$core$Bit) { result1827 == NULL }).value) {
        {
            $tmp1832 = NULL;
            $returnValue1831 = $tmp1832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1832));
            $tmp1826 = 0;
            goto $l1824;
            $l1833:;
            return $returnValue1831;
        }
        }
        $l1835:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1838 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1837 = $tmp1838;
            {
                $match$955_131839 = op1837.kind;
                panda$core$Bit $tmp1841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$955_131839.$rawValue, ((panda$core$Int64) { 66 }));
                bool $tmp1840 = $tmp1841.value;
                if ($tmp1840) goto $l1842;
                panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$955_131839.$rawValue, ((panda$core$Int64) { 70 }));
                $tmp1840 = $tmp1843.value;
                $l1842:;
                panda$core$Bit $tmp1844 = { $tmp1840 };
                if ($tmp1844.value) {
                {
                    int $tmp1847;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp1851 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp1850 = $tmp1851;
                        $tmp1849 = $tmp1850;
                        next1848 = $tmp1849;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
                        if (((panda$core$Bit) { next1848 == NULL }).value) {
                        {
                            $tmp1852 = NULL;
                            $returnValue1831 = $tmp1852;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
                            $tmp1847 = 0;
                            goto $l1845;
                            $l1853:;
                            $tmp1826 = 1;
                            goto $l1824;
                            $l1854:;
                            return $returnValue1831;
                        }
                        }
                        {
                            $tmp1856 = result1827;
                            org$pandalanguage$pandac$ASTNode* $tmp1859 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1859, ((panda$core$Int64) { 4 }), op1837.position, result1827, op1837.kind, next1848);
                            $tmp1858 = $tmp1859;
                            $tmp1857 = $tmp1858;
                            result1827 = $tmp1857;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1857));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1856));
                        }
                    }
                    $tmp1847 = -1;
                    goto $l1845;
                    $l1845:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1848));
                    next1848 = NULL;
                    switch ($tmp1847) {
                        case 0: goto $l1853;
                        case -1: goto $l1860;
                    }
                    $l1860:;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op1837);
                    $tmp1861 = result1827;
                    $returnValue1831 = $tmp1861;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1861));
                    $tmp1826 = 2;
                    goto $l1824;
                    $l1862:;
                    return $returnValue1831;
                }
                }
            }
        }
        }
        $l1836:;
    }
    $tmp1826 = -1;
    goto $l1824;
    $l1824:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1827));
    result1827 = NULL;
    switch ($tmp1826) {
        case 2: goto $l1862;
        case 1: goto $l1854;
        case -1: goto $l1864;
        case 0: goto $l1833;
    }
    $l1864:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1868 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1869;
    org$pandalanguage$pandac$ASTNode* $tmp1870;
    org$pandalanguage$pandac$ASTNode* $returnValue1872;
    org$pandalanguage$pandac$ASTNode* $tmp1873;
    org$pandalanguage$pandac$parser$Token$nullable op1881;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1882;
    org$pandalanguage$pandac$ASTNode* next1885 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1886;
    org$pandalanguage$pandac$ASTNode* $tmp1887;
    org$pandalanguage$pandac$ASTNode* $tmp1889;
    org$pandalanguage$pandac$ASTNode* $tmp1893;
    org$pandalanguage$pandac$ASTNode* $tmp1894;
    org$pandalanguage$pandac$ASTNode* $tmp1895;
    org$pandalanguage$pandac$ASTNode* $tmp1898;
    int $tmp1867;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1871 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1870 = $tmp1871;
        $tmp1869 = $tmp1870;
        result1868 = $tmp1869;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1869));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1870));
        if (((panda$core$Bit) { result1868 == NULL }).value) {
        {
            $tmp1873 = NULL;
            $returnValue1872 = $tmp1873;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1873));
            $tmp1867 = 0;
            goto $l1865;
            $l1874:;
            return $returnValue1872;
        }
        }
        $l1876:;
        while (true) {
        {
            int $tmp1880;
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1882, ((panda$core$Int64) { 68 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1883 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1882);
                op1881 = $tmp1883;
                if (((panda$core$Bit) { !op1881.nonnull }).value) {
                {
                    $tmp1880 = 0;
                    goto $l1878;
                    $l1884:;
                    goto $l1877;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp1888 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp1887 = $tmp1888;
                $tmp1886 = $tmp1887;
                next1885 = $tmp1886;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1886));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1887));
                if (((panda$core$Bit) { next1885 == NULL }).value) {
                {
                    $tmp1889 = NULL;
                    $returnValue1872 = $tmp1889;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1889));
                    $tmp1880 = 1;
                    goto $l1878;
                    $l1890:;
                    $tmp1867 = 1;
                    goto $l1865;
                    $l1891:;
                    return $returnValue1872;
                }
                }
                {
                    $tmp1893 = result1868;
                    org$pandalanguage$pandac$ASTNode* $tmp1896 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1896, ((panda$core$Int64) { 4 }), ((org$pandalanguage$pandac$parser$Token) op1881.value).position, result1868, ((org$pandalanguage$pandac$parser$Token) op1881.value).kind, next1885);
                    $tmp1895 = $tmp1896;
                    $tmp1894 = $tmp1895;
                    result1868 = $tmp1894;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1894));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1893));
                }
            }
            $tmp1880 = -1;
            goto $l1878;
            $l1878:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1885));
            next1885 = NULL;
            switch ($tmp1880) {
                case -1: goto $l1897;
                case 0: goto $l1884;
                case 1: goto $l1890;
            }
            $l1897:;
        }
        }
        $l1877:;
        $tmp1898 = result1868;
        $returnValue1872 = $tmp1898;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1898));
        $tmp1867 = 2;
        goto $l1865;
        $l1899:;
        return $returnValue1872;
    }
    $l1865:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1868));
    result1868 = NULL;
    switch ($tmp1867) {
        case 1: goto $l1891;
        case 2: goto $l1899;
        case 0: goto $l1874;
    }
    $l1901:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1905;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1906;
    org$pandalanguage$pandac$ASTNode* $returnValue1909;
    org$pandalanguage$pandac$ASTNode* $tmp1910;
    org$pandalanguage$pandac$ASTNode* test1913 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1914;
    org$pandalanguage$pandac$ASTNode* $tmp1915;
    org$pandalanguage$pandac$ASTNode* $tmp1917;
    panda$collections$ImmutableArray* ifTrue1920 = NULL;
    panda$collections$ImmutableArray* $tmp1921;
    panda$collections$ImmutableArray* $tmp1922;
    org$pandalanguage$pandac$ASTNode* $tmp1924;
    org$pandalanguage$pandac$ASTNode* ifFalse1927 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1928;
    org$pandalanguage$pandac$ASTNode* $tmp1932;
    org$pandalanguage$pandac$ASTNode* $tmp1933;
    org$pandalanguage$pandac$ASTNode* $tmp1934;
    org$pandalanguage$pandac$ASTNode* $tmp1936;
    org$pandalanguage$pandac$ASTNode* $tmp1939;
    org$pandalanguage$pandac$ASTNode* $tmp1940;
    org$pandalanguage$pandac$ASTNode* $tmp1941;
    org$pandalanguage$pandac$ASTNode* $tmp1943;
    org$pandalanguage$pandac$ASTNode* $tmp1946;
    org$pandalanguage$pandac$ASTNode* $tmp1947;
    org$pandalanguage$pandac$ASTNode* $tmp1948;
    org$pandalanguage$pandac$ASTNode* $tmp1949;
    int $tmp1904;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1906, ((panda$core$Int64) { 36 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1908 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1906, &$s1907);
        start1905 = $tmp1908;
        if (((panda$core$Bit) { !start1905.nonnull }).value) {
        {
            $tmp1910 = NULL;
            $returnValue1909 = $tmp1910;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1910));
            $tmp1904 = 0;
            goto $l1902;
            $l1911:;
            return $returnValue1909;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1916 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp1915 = $tmp1916;
        $tmp1914 = $tmp1915;
        test1913 = $tmp1914;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1914));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
        if (((panda$core$Bit) { test1913 == NULL }).value) {
        {
            $tmp1917 = NULL;
            $returnValue1909 = $tmp1917;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1917));
            $tmp1904 = 1;
            goto $l1902;
            $l1918:;
            return $returnValue1909;
        }
        }
        panda$collections$ImmutableArray* $tmp1923 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp1922 = $tmp1923;
        $tmp1921 = $tmp1922;
        ifTrue1920 = $tmp1921;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1921));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1922));
        if (((panda$core$Bit) { ifTrue1920 == NULL }).value) {
        {
            $tmp1924 = NULL;
            $returnValue1909 = $tmp1924;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1924));
            $tmp1904 = 2;
            goto $l1902;
            $l1925:;
            return $returnValue1909;
        }
        }
        memset(&ifFalse1927, 0, sizeof(ifFalse1927));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1928, ((panda$core$Int64) { 37 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1929 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1928);
        if (((panda$core$Bit) { $tmp1929.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1930 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1930.kind.$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1931.value) {
            {
                {
                    $tmp1932 = ifFalse1927;
                    org$pandalanguage$pandac$ASTNode* $tmp1935 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1934 = $tmp1935;
                    $tmp1933 = $tmp1934;
                    ifFalse1927 = $tmp1933;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1933));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1934));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                }
                if (((panda$core$Bit) { ifFalse1927 == NULL }).value) {
                {
                    $tmp1936 = NULL;
                    $returnValue1909 = $tmp1936;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1936));
                    $tmp1904 = 3;
                    goto $l1902;
                    $l1937:;
                    return $returnValue1909;
                }
                }
            }
            }
            else {
            {
                {
                    $tmp1939 = ifFalse1927;
                    org$pandalanguage$pandac$ASTNode* $tmp1942 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp1941 = $tmp1942;
                    $tmp1940 = $tmp1941;
                    ifFalse1927 = $tmp1940;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1940));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1939));
                }
                if (((panda$core$Bit) { ifFalse1927 == NULL }).value) {
                {
                    $tmp1943 = NULL;
                    $returnValue1909 = $tmp1943;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1943));
                    $tmp1904 = 4;
                    goto $l1902;
                    $l1944:;
                    return $returnValue1909;
                }
                }
            }
            }
        }
        }
        else {
        {
            {
                $tmp1946 = ifFalse1927;
                $tmp1947 = NULL;
                ifFalse1927 = $tmp1947;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1947));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1946));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1950 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1950, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1905.value).position, test1913, ifTrue1920, ifFalse1927);
        $tmp1949 = $tmp1950;
        $tmp1948 = $tmp1949;
        $returnValue1909 = $tmp1948;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
        $tmp1904 = 5;
        goto $l1902;
        $l1951:;
        return $returnValue1909;
    }
    $l1902:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1913));
    test1913 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1920));
    ifTrue1920 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1927));
    switch ($tmp1904) {
        case 4: goto $l1944;
        case 3: goto $l1937;
        case 1: goto $l1918;
        case 5: goto $l1951;
        case 2: goto $l1925;
        case 0: goto $l1911;
    }
    $l1953:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1954;
    org$pandalanguage$pandac$ASTNode* $returnValue1957;
    org$pandalanguage$pandac$ASTNode* $tmp1958;
    org$pandalanguage$pandac$ASTNode* $tmp1960;
    org$pandalanguage$pandac$ASTNode* $tmp1961;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1954, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1956 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1954, &$s1955);
    if (((panda$core$Bit) { !$tmp1956.nonnull }).value) {
    {
        $tmp1958 = NULL;
        $returnValue1957 = $tmp1958;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1958));
        return $returnValue1957;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1962 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    $tmp1961 = $tmp1962;
    $tmp1960 = $tmp1961;
    $returnValue1957 = $tmp1960;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1960));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1961));
    return $returnValue1957;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1964;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1965;
    org$pandalanguage$pandac$ASTNode* $returnValue1968;
    org$pandalanguage$pandac$ASTNode* $tmp1969;
    org$pandalanguage$pandac$ASTNode* type1976 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1977;
    org$pandalanguage$pandac$ASTNode* $tmp1978;
    org$pandalanguage$pandac$ASTNode* $tmp1980;
    org$pandalanguage$pandac$ASTNode* $tmp1983;
    org$pandalanguage$pandac$ASTNode* $tmp1984;
    panda$core$String* $tmp1986;
    org$pandalanguage$pandac$ASTNode* $tmp1991;
    org$pandalanguage$pandac$ASTNode* $tmp1992;
    panda$core$String* $tmp1994;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1965, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1967 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1965, &$s1966);
    id1964 = $tmp1967;
    if (((panda$core$Bit) { !id1964.nonnull }).value) {
    {
        $tmp1969 = NULL;
        $returnValue1968 = $tmp1969;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1969));
        return $returnValue1968;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1971 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1971.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1972.value) {
    {
        int $tmp1975;
        {
            org$pandalanguage$pandac$ASTNode* $tmp1979 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp1978 = $tmp1979;
            $tmp1977 = $tmp1978;
            type1976 = $tmp1977;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1977));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1978));
            if (((panda$core$Bit) { type1976 == NULL }).value) {
            {
                $tmp1980 = NULL;
                $returnValue1968 = $tmp1980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
                $tmp1975 = 0;
                goto $l1973;
                $l1981:;
                return $returnValue1968;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1985 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp1987 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1964.value));
            $tmp1986 = $tmp1987;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1985, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id1964.value).position, $tmp1986, type1976);
            $tmp1984 = $tmp1985;
            $tmp1983 = $tmp1984;
            $returnValue1968 = $tmp1983;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1983));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
            $tmp1975 = 1;
            goto $l1973;
            $l1988:;
            return $returnValue1968;
        }
        $l1973:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1976));
        type1976 = NULL;
        switch ($tmp1975) {
            case 1: goto $l1988;
            case 0: goto $l1981;
        }
        $l1990:;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1993 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp1995 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1964.value));
    $tmp1994 = $tmp1995;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1993, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id1964.value).position, $tmp1994);
    $tmp1992 = $tmp1993;
    $tmp1991 = $tmp1992;
    $returnValue1968 = $tmp1991;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1991));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
    return $returnValue1968;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2000;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2001;
    org$pandalanguage$pandac$ASTNode* $returnValue2004;
    org$pandalanguage$pandac$ASTNode* $tmp2005;
    org$pandalanguage$pandac$ASTNode* t2008 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2009;
    org$pandalanguage$pandac$ASTNode* $tmp2010;
    org$pandalanguage$pandac$ASTNode* $tmp2012;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2015;
    org$pandalanguage$pandac$ASTNode* $tmp2018;
    org$pandalanguage$pandac$ASTNode* list2021 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2022;
    org$pandalanguage$pandac$ASTNode* $tmp2023;
    org$pandalanguage$pandac$ASTNode* $tmp2025;
    panda$collections$ImmutableArray* block2028 = NULL;
    panda$collections$ImmutableArray* $tmp2029;
    panda$collections$ImmutableArray* $tmp2030;
    org$pandalanguage$pandac$ASTNode* $tmp2032;
    org$pandalanguage$pandac$ASTNode* $tmp2035;
    org$pandalanguage$pandac$ASTNode* $tmp2036;
    int $tmp1999;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2001, ((panda$core$Int64) { 32 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2003 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2001, &$s2002);
        start2000 = $tmp2003;
        if (((panda$core$Bit) { !start2000.nonnull }).value) {
        {
            $tmp2005 = NULL;
            $returnValue2004 = $tmp2005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
            $tmp1999 = 0;
            goto $l1997;
            $l2006:;
            return $returnValue2004;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2011 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2010 = $tmp2011;
        $tmp2009 = $tmp2010;
        t2008 = $tmp2009;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2009));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2010));
        if (((panda$core$Bit) { t2008 == NULL }).value) {
        {
            $tmp2012 = NULL;
            $returnValue2004 = $tmp2012;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2012));
            $tmp1999 = 1;
            goto $l1997;
            $l2013:;
            return $returnValue2004;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2015, ((panda$core$Int64) { 34 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2017 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2015, &$s2016);
        if (((panda$core$Bit) { !$tmp2017.nonnull }).value) {
        {
            $tmp2018 = NULL;
            $returnValue2004 = $tmp2018;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2018));
            $tmp1999 = 2;
            goto $l1997;
            $l2019:;
            return $returnValue2004;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2024 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2023 = $tmp2024;
        $tmp2022 = $tmp2023;
        list2021 = $tmp2022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2023));
        if (((panda$core$Bit) { list2021 == NULL }).value) {
        {
            $tmp2025 = NULL;
            $returnValue2004 = $tmp2025;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2025));
            $tmp1999 = 3;
            goto $l1997;
            $l2026:;
            return $returnValue2004;
        }
        }
        panda$collections$ImmutableArray* $tmp2031 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2030 = $tmp2031;
        $tmp2029 = $tmp2030;
        block2028 = $tmp2029;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
        if (((panda$core$Bit) { block2028 == NULL }).value) {
        {
            $tmp2032 = NULL;
            $returnValue2004 = $tmp2032;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
            $tmp1999 = 4;
            goto $l1997;
            $l2033:;
            return $returnValue2004;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2037 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2037, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start2000.value).position, p_label, t2008, list2021, block2028);
        $tmp2036 = $tmp2037;
        $tmp2035 = $tmp2036;
        $returnValue2004 = $tmp2035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
        $tmp1999 = 5;
        goto $l1997;
        $l2038:;
        return $returnValue2004;
    }
    $l1997:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2008));
    t2008 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list2021));
    list2021 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block2028));
    block2028 = NULL;
    switch ($tmp1999) {
        case 3: goto $l2026;
        case 4: goto $l2033;
        case 1: goto $l2013;
        case 2: goto $l2019;
        case 0: goto $l2006;
        case 5: goto $l2038;
    }
    $l2040:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2044;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2045;
    org$pandalanguage$pandac$ASTNode* $returnValue2048;
    org$pandalanguage$pandac$ASTNode* $tmp2049;
    org$pandalanguage$pandac$ASTNode* test2052 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2053;
    org$pandalanguage$pandac$ASTNode* $tmp2054;
    org$pandalanguage$pandac$ASTNode* $tmp2056;
    panda$collections$ImmutableArray* body2059 = NULL;
    panda$collections$ImmutableArray* $tmp2060;
    panda$collections$ImmutableArray* $tmp2061;
    org$pandalanguage$pandac$ASTNode* $tmp2063;
    org$pandalanguage$pandac$ASTNode* $tmp2066;
    org$pandalanguage$pandac$ASTNode* $tmp2067;
    int $tmp2043;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2045, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2047 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2045, &$s2046);
        start2044 = $tmp2047;
        if (((panda$core$Bit) { !start2044.nonnull }).value) {
        {
            $tmp2049 = NULL;
            $returnValue2048 = $tmp2049;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2049));
            $tmp2043 = 0;
            goto $l2041;
            $l2050:;
            return $returnValue2048;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2055 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2054 = $tmp2055;
        $tmp2053 = $tmp2054;
        test2052 = $tmp2053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2054));
        if (((panda$core$Bit) { test2052 == NULL }).value) {
        {
            $tmp2056 = NULL;
            $returnValue2048 = $tmp2056;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
            $tmp2043 = 1;
            goto $l2041;
            $l2057:;
            return $returnValue2048;
        }
        }
        panda$collections$ImmutableArray* $tmp2062 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2061 = $tmp2062;
        $tmp2060 = $tmp2061;
        body2059 = $tmp2060;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
        if (((panda$core$Bit) { body2059 == NULL }).value) {
        {
            $tmp2063 = NULL;
            $returnValue2048 = $tmp2063;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2063));
            $tmp2043 = 2;
            goto $l2041;
            $l2064:;
            return $returnValue2048;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2068 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2068, ((panda$core$Int64) { 45 }), ((org$pandalanguage$pandac$parser$Token) start2044.value).position, p_label, test2052, body2059);
        $tmp2067 = $tmp2068;
        $tmp2066 = $tmp2067;
        $returnValue2048 = $tmp2066;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2066));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2067));
        $tmp2043 = 3;
        goto $l2041;
        $l2069:;
        return $returnValue2048;
    }
    $l2041:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2052));
    test2052 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2059));
    body2059 = NULL;
    switch ($tmp2043) {
        case 2: goto $l2064;
        case 3: goto $l2069;
        case 1: goto $l2057;
        case 0: goto $l2050;
    }
    $l2071:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2075;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2076;
    org$pandalanguage$pandac$ASTNode* $returnValue2079;
    org$pandalanguage$pandac$ASTNode* $tmp2080;
    panda$collections$ImmutableArray* body2083 = NULL;
    panda$collections$ImmutableArray* $tmp2084;
    panda$collections$ImmutableArray* $tmp2085;
    org$pandalanguage$pandac$ASTNode* $tmp2087;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2090;
    org$pandalanguage$pandac$ASTNode* $tmp2093;
    org$pandalanguage$pandac$ASTNode* test2096 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2097;
    org$pandalanguage$pandac$ASTNode* $tmp2098;
    org$pandalanguage$pandac$ASTNode* $tmp2100;
    org$pandalanguage$pandac$ASTNode* $tmp2103;
    org$pandalanguage$pandac$ASTNode* $tmp2104;
    int $tmp2074;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2076, ((panda$core$Int64) { 30 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2078 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2076, &$s2077);
        start2075 = $tmp2078;
        if (((panda$core$Bit) { !start2075.nonnull }).value) {
        {
            $tmp2080 = NULL;
            $returnValue2079 = $tmp2080;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2080));
            $tmp2074 = 0;
            goto $l2072;
            $l2081:;
            return $returnValue2079;
        }
        }
        panda$collections$ImmutableArray* $tmp2086 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2085 = $tmp2086;
        $tmp2084 = $tmp2085;
        body2083 = $tmp2084;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2084));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2085));
        if (((panda$core$Bit) { body2083 == NULL }).value) {
        {
            $tmp2087 = NULL;
            $returnValue2079 = $tmp2087;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
            $tmp2074 = 1;
            goto $l2072;
            $l2088:;
            return $returnValue2079;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2090, ((panda$core$Int64) { 31 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2092 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2090, &$s2091);
        if (((panda$core$Bit) { !$tmp2092.nonnull }).value) {
        {
            $tmp2093 = NULL;
            $returnValue2079 = $tmp2093;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
            $tmp2074 = 2;
            goto $l2072;
            $l2094:;
            return $returnValue2079;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2099 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2098 = $tmp2099;
        $tmp2097 = $tmp2098;
        test2096 = $tmp2097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
        if (((panda$core$Bit) { test2096 == NULL }).value) {
        {
            $tmp2100 = NULL;
            $returnValue2079 = $tmp2100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
            $tmp2074 = 3;
            goto $l2072;
            $l2101:;
            return $returnValue2079;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2105 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp2105, ((panda$core$Int64) { 14 }), ((org$pandalanguage$pandac$parser$Token) start2075.value).position, p_label, body2083, test2096);
        $tmp2104 = $tmp2105;
        $tmp2103 = $tmp2104;
        $returnValue2079 = $tmp2103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2104));
        $tmp2074 = 4;
        goto $l2072;
        $l2106:;
        return $returnValue2079;
    }
    $l2072:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2083));
    body2083 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test2096));
    test2096 = NULL;
    switch ($tmp2074) {
        case 4: goto $l2106;
        case 1: goto $l2088;
        case 3: goto $l2101;
        case 2: goto $l2094;
        case 0: goto $l2081;
    }
    $l2108:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start2112;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2113;
    org$pandalanguage$pandac$ASTNode* $returnValue2116;
    org$pandalanguage$pandac$ASTNode* $tmp2117;
    panda$collections$ImmutableArray* body2120 = NULL;
    panda$collections$ImmutableArray* $tmp2121;
    panda$collections$ImmutableArray* $tmp2122;
    org$pandalanguage$pandac$ASTNode* $tmp2124;
    org$pandalanguage$pandac$ASTNode* $tmp2127;
    org$pandalanguage$pandac$ASTNode* $tmp2128;
    int $tmp2111;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2113, ((panda$core$Int64) { 35 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2115 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2113, &$s2114);
        start2112 = $tmp2115;
        if (((panda$core$Bit) { !start2112.nonnull }).value) {
        {
            $tmp2117 = NULL;
            $returnValue2116 = $tmp2117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
            $tmp2111 = 0;
            goto $l2109;
            $l2118:;
            return $returnValue2116;
        }
        }
        panda$collections$ImmutableArray* $tmp2123 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2122 = $tmp2123;
        $tmp2121 = $tmp2122;
        body2120 = $tmp2121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
        if (((panda$core$Bit) { body2120 == NULL }).value) {
        {
            $tmp2124 = NULL;
            $returnValue2116 = $tmp2124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2124));
            $tmp2111 = 1;
            goto $l2109;
            $l2125:;
            return $returnValue2116;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2129 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2129, ((panda$core$Int64) { 24 }), ((org$pandalanguage$pandac$parser$Token) start2112.value).position, p_label, body2120);
        $tmp2128 = $tmp2129;
        $tmp2127 = $tmp2128;
        $returnValue2116 = $tmp2127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
        $tmp2111 = 2;
        goto $l2109;
        $l2130:;
        return $returnValue2116;
    }
    $l2109:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body2120));
    body2120 = NULL;
    switch ($tmp2111) {
        case 2: goto $l2130;
        case 1: goto $l2125;
        case 0: goto $l2118;
    }
    $l2132:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2136;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2137;
    org$pandalanguage$pandac$ASTNode* $returnValue2140;
    org$pandalanguage$pandac$ASTNode* $tmp2141;
    org$pandalanguage$pandac$ASTNode* expr2144 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2145;
    org$pandalanguage$pandac$ASTNode* $tmp2146;
    org$pandalanguage$pandac$ASTNode* $tmp2148;
    org$pandalanguage$pandac$ASTNode* message2151 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2152;
    org$pandalanguage$pandac$ASTNode* $tmp2154;
    org$pandalanguage$pandac$ASTNode* $tmp2155;
    org$pandalanguage$pandac$ASTNode* $tmp2156;
    org$pandalanguage$pandac$ASTNode* $tmp2158;
    org$pandalanguage$pandac$ASTNode* $tmp2161;
    org$pandalanguage$pandac$ASTNode* $tmp2162;
    org$pandalanguage$pandac$ASTNode* $tmp2163;
    org$pandalanguage$pandac$ASTNode* $tmp2164;
    int $tmp2135;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2137, ((panda$core$Int64) { 44 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2139 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2137, &$s2138);
        start2136 = $tmp2139;
        if (((panda$core$Bit) { !start2136.nonnull }).value) {
        {
            $tmp2141 = NULL;
            $returnValue2140 = $tmp2141;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2141));
            $tmp2135 = 0;
            goto $l2133;
            $l2142:;
            return $returnValue2140;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2147 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2146 = $tmp2147;
        $tmp2145 = $tmp2146;
        expr2144 = $tmp2145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
        if (((panda$core$Bit) { expr2144 == NULL }).value) {
        {
            $tmp2148 = NULL;
            $returnValue2140 = $tmp2148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2148));
            $tmp2135 = 1;
            goto $l2133;
            $l2149:;
            return $returnValue2140;
        }
        }
        memset(&message2151, 0, sizeof(message2151));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2152, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2153 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2152);
        if (((panda$core$Bit) { $tmp2153.nonnull }).value) {
        {
            {
                $tmp2154 = message2151;
                org$pandalanguage$pandac$ASTNode* $tmp2157 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2156 = $tmp2157;
                $tmp2155 = $tmp2156;
                message2151 = $tmp2155;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
            }
            if (((panda$core$Bit) { message2151 == NULL }).value) {
            {
                $tmp2158 = NULL;
                $returnValue2140 = $tmp2158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2158));
                $tmp2135 = 2;
                goto $l2133;
                $l2159:;
                return $returnValue2140;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2161 = message2151;
                $tmp2162 = NULL;
                message2151 = $tmp2162;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2165 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2165, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start2136.value).position, expr2144, message2151);
        $tmp2164 = $tmp2165;
        $tmp2163 = $tmp2164;
        $returnValue2140 = $tmp2163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
        $tmp2135 = 3;
        goto $l2133;
        $l2166:;
        return $returnValue2140;
    }
    $l2133:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2144));
    expr2144 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message2151));
    switch ($tmp2135) {
        case 2: goto $l2159;
        case 0: goto $l2142;
        case 1: goto $l2149;
        case 3: goto $l2166;
    }
    $l2168:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2172;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2173;
    org$pandalanguage$pandac$ASTNode* $returnValue2176;
    org$pandalanguage$pandac$ASTNode* $tmp2177;
    panda$collections$Array* expressions2180 = NULL;
    panda$collections$Array* $tmp2181;
    panda$collections$Array* $tmp2182;
    org$pandalanguage$pandac$ASTNode* expr2184 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2185;
    org$pandalanguage$pandac$ASTNode* $tmp2186;
    org$pandalanguage$pandac$ASTNode* $tmp2188;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2194;
    org$pandalanguage$pandac$ASTNode* $tmp2196;
    org$pandalanguage$pandac$ASTNode* $tmp2197;
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2203;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    panda$collections$Array* statements2209 = NULL;
    panda$collections$Array* $tmp2210;
    panda$collections$Array* $tmp2211;
    org$pandalanguage$pandac$parser$Token$Kind $match$1189_132215;
    org$pandalanguage$pandac$ASTNode* stmt2238 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2239;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    org$pandalanguage$pandac$ASTNode* stmt2251 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    org$pandalanguage$pandac$ASTNode* $tmp2260;
    org$pandalanguage$pandac$ASTNode* $tmp2261;
    panda$collections$ImmutableArray* $tmp2263;
    panda$collections$ImmutableArray* $tmp2265;
    int $tmp2171;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2173, ((panda$core$Int64) { 39 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2175 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2173, &$s2174);
        start2172 = $tmp2175;
        if (((panda$core$Bit) { !start2172.nonnull }).value) {
        {
            $tmp2177 = NULL;
            $returnValue2176 = $tmp2177;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
            $tmp2171 = 0;
            goto $l2169;
            $l2178:;
            return $returnValue2176;
        }
        }
        panda$collections$Array* $tmp2183 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2183);
        $tmp2182 = $tmp2183;
        $tmp2181 = $tmp2182;
        expressions2180 = $tmp2181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
        org$pandalanguage$pandac$ASTNode* $tmp2187 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2186 = $tmp2187;
        $tmp2185 = $tmp2186;
        expr2184 = $tmp2185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
        if (((panda$core$Bit) { expr2184 == NULL }).value) {
        {
            $tmp2188 = NULL;
            $returnValue2176 = $tmp2188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
            $tmp2171 = 1;
            goto $l2169;
            $l2189:;
            return $returnValue2176;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions2180, ((panda$core$Object*) expr2184));
        $l2191:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2194, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2195 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2194);
        bool $tmp2193 = ((panda$core$Bit) { $tmp2195.nonnull }).value;
        if (!$tmp2193) goto $l2192;
        {
            {
                $tmp2196 = expr2184;
                org$pandalanguage$pandac$ASTNode* $tmp2199 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2198 = $tmp2199;
                $tmp2197 = $tmp2198;
                expr2184 = $tmp2197;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2196));
            }
            if (((panda$core$Bit) { expr2184 == NULL }).value) {
            {
                $tmp2200 = NULL;
                $returnValue2176 = $tmp2200;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2200));
                $tmp2171 = 2;
                goto $l2169;
                $l2201:;
                return $returnValue2176;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(expressions2180, ((panda$core$Object*) expr2184));
        }
        goto $l2191;
        $l2192:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2203, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2205 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2203, &$s2204);
        if (((panda$core$Bit) { !$tmp2205.nonnull }).value) {
        {
            $tmp2206 = NULL;
            $returnValue2176 = $tmp2206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
            $tmp2171 = 3;
            goto $l2169;
            $l2207:;
            return $returnValue2176;
        }
        }
        panda$collections$Array* $tmp2212 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2212);
        $tmp2211 = $tmp2212;
        $tmp2210 = $tmp2211;
        statements2209 = $tmp2210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
        $l2213:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2216 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1189_132215 = $tmp2216.kind;
                panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1189_132215.$rawValue, ((panda$core$Int64) { 39 }));
                bool $tmp2218 = $tmp2219.value;
                if ($tmp2218) goto $l2220;
                panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1189_132215.$rawValue, ((panda$core$Int64) { 40 }));
                $tmp2218 = $tmp2221.value;
                $l2220:;
                panda$core$Bit $tmp2222 = { $tmp2218 };
                bool $tmp2217 = $tmp2222.value;
                if ($tmp2217) goto $l2223;
                panda$core$Bit $tmp2224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1189_132215.$rawValue, ((panda$core$Int64) { 100 }));
                $tmp2217 = $tmp2224.value;
                $l2223:;
                panda$core$Bit $tmp2225 = { $tmp2217 };
                if ($tmp2225.value) {
                {
                    goto $l2214;
                }
                }
                else {
                panda$core$Bit $tmp2228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1189_132215.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2227 = $tmp2228.value;
                if ($tmp2227) goto $l2229;
                panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1189_132215.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2227 = $tmp2230.value;
                $l2229:;
                panda$core$Bit $tmp2231 = { $tmp2227 };
                bool $tmp2226 = $tmp2231.value;
                if ($tmp2226) goto $l2232;
                panda$core$Bit $tmp2233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1189_132215.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2226 = $tmp2233.value;
                $l2232:;
                panda$core$Bit $tmp2234 = { $tmp2226 };
                if ($tmp2234.value) {
                {
                    int $tmp2237;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2241 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2240 = $tmp2241;
                        $tmp2239 = $tmp2240;
                        stmt2238 = $tmp2239;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2239));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2240));
                        if (((panda$core$Bit) { stmt2238 == NULL }).value) {
                        {
                            $tmp2242 = NULL;
                            $returnValue2176 = $tmp2242;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
                            $tmp2237 = 0;
                            goto $l2235;
                            $l2243:;
                            $tmp2171 = 4;
                            goto $l2169;
                            $l2244:;
                            return $returnValue2176;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(statements2209, ((panda$core$Object*) stmt2238));
                        $tmp2237 = 1;
                        goto $l2235;
                        $l2246:;
                        goto $l2214;
                    }
                    $l2235:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2238));
                    stmt2238 = NULL;
                    switch ($tmp2237) {
                        case 1: goto $l2246;
                        case 0: goto $l2243;
                    }
                    $l2247:;
                }
                }
                else {
                {
                    {
                        int $tmp2250;
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp2254 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp2253 = $tmp2254;
                            $tmp2252 = $tmp2253;
                            stmt2251 = $tmp2252;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2252));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                            if (((panda$core$Bit) { stmt2251 == NULL }).value) {
                            {
                                $tmp2255 = NULL;
                                $returnValue2176 = $tmp2255;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2255));
                                $tmp2250 = 0;
                                goto $l2248;
                                $l2256:;
                                $tmp2171 = 5;
                                goto $l2169;
                                $l2257:;
                                return $returnValue2176;
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(statements2209, ((panda$core$Object*) stmt2251));
                        }
                        $tmp2250 = -1;
                        goto $l2248;
                        $l2248:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2251));
                        stmt2251 = NULL;
                        switch ($tmp2250) {
                            case -1: goto $l2259;
                            case 0: goto $l2256;
                        }
                        $l2259:;
                    }
                }
                }
                }
            }
        }
        }
        $l2214:;
        org$pandalanguage$pandac$ASTNode* $tmp2262 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2264 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions2180);
        $tmp2263 = $tmp2264;
        panda$collections$ImmutableArray* $tmp2266 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements2209);
        $tmp2265 = $tmp2266;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2262, ((panda$core$Int64) { 44 }), ((org$pandalanguage$pandac$parser$Token) start2172.value).position, $tmp2263, $tmp2265);
        $tmp2261 = $tmp2262;
        $tmp2260 = $tmp2261;
        $returnValue2176 = $tmp2260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
        $tmp2171 = 6;
        goto $l2169;
        $l2267:;
        return $returnValue2176;
    }
    $l2169:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions2180));
    expressions2180 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2184));
    expr2184 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2209));
    statements2209 = NULL;
    switch ($tmp2171) {
        case 6: goto $l2267;
        case 5: goto $l2257;
        case 4: goto $l2244;
        case 3: goto $l2207;
        case 2: goto $l2201;
        case 1: goto $l2189;
        case 0: goto $l2178;
    }
    $l2269:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2273;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2274;
    org$pandalanguage$pandac$ASTNode* $returnValue2277;
    org$pandalanguage$pandac$ASTNode* $tmp2278;
    org$pandalanguage$pandac$ASTNode* expr2281 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2282;
    org$pandalanguage$pandac$ASTNode* $tmp2283;
    org$pandalanguage$pandac$ASTNode* $tmp2285;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2288;
    org$pandalanguage$pandac$ASTNode* $tmp2291;
    panda$collections$Array* whens2294 = NULL;
    panda$collections$Array* $tmp2295;
    panda$collections$Array* $tmp2296;
    panda$collections$Array* other2298 = NULL;
    panda$collections$Array* $tmp2299;
    org$pandalanguage$pandac$parser$Token token2302;
    org$pandalanguage$pandac$parser$Token$Kind $match$1230_132304;
    org$pandalanguage$pandac$ASTNode* w2310 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2311;
    org$pandalanguage$pandac$ASTNode* $tmp2312;
    org$pandalanguage$pandac$ASTNode* $tmp2314;
    org$pandalanguage$pandac$parser$Token o2320;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2322;
    org$pandalanguage$pandac$ASTNode* $tmp2325;
    panda$collections$Array* $tmp2328;
    panda$collections$Array* $tmp2329;
    panda$collections$Array* $tmp2330;
    org$pandalanguage$pandac$parser$Token$Kind $match$1246_252334;
    org$pandalanguage$pandac$ASTNode* stmt2349 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2350;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    org$pandalanguage$pandac$ASTNode* $tmp2353;
    org$pandalanguage$pandac$ASTNode* stmt2362 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2363;
    org$pandalanguage$pandac$ASTNode* $tmp2364;
    org$pandalanguage$pandac$ASTNode* $tmp2366;
    panda$core$String* $tmp2371;
    panda$core$String* $tmp2373;
    panda$core$String* $tmp2374;
    panda$core$String* $tmp2376;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2382;
    org$pandalanguage$pandac$ASTNode* $tmp2385;
    org$pandalanguage$pandac$ASTNode* $tmp2388;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    panda$collections$ImmutableArray* $tmp2391;
    panda$collections$ImmutableArray* $tmp2393;
    org$pandalanguage$pandac$ASTNode* $tmp2397;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    panda$collections$ImmutableArray* $tmp2400;
    int $tmp2272;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2274, ((panda$core$Int64) { 38 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2276 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2274, &$s2275);
        start2273 = $tmp2276;
        if (((panda$core$Bit) { !start2273.nonnull }).value) {
        {
            $tmp2278 = NULL;
            $returnValue2277 = $tmp2278;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2278));
            $tmp2272 = 0;
            goto $l2270;
            $l2279:;
            return $returnValue2277;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2284 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2283 = $tmp2284;
        $tmp2282 = $tmp2283;
        expr2281 = $tmp2282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
        if (((panda$core$Bit) { expr2281 == NULL }).value) {
        {
            $tmp2285 = NULL;
            $returnValue2277 = $tmp2285;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2285));
            $tmp2272 = 1;
            goto $l2270;
            $l2286:;
            return $returnValue2277;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2288, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2290 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2288, &$s2289);
        if (((panda$core$Bit) { !$tmp2290.nonnull }).value) {
        {
            $tmp2291 = NULL;
            $returnValue2277 = $tmp2291;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2291));
            $tmp2272 = 2;
            goto $l2270;
            $l2292:;
            return $returnValue2277;
        }
        }
        panda$collections$Array* $tmp2297 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2297);
        $tmp2296 = $tmp2297;
        $tmp2295 = $tmp2296;
        whens2294 = $tmp2295;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
        $tmp2299 = NULL;
        other2298 = $tmp2299;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
        $l2300:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2303 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            token2302 = $tmp2303;
            {
                $match$1230_132304 = token2302.kind;
                panda$core$Bit $tmp2305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1230_132304.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2305.value) {
                {
                    goto $l2301;
                }
                }
                else {
                panda$core$Bit $tmp2306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1230_132304.$rawValue, ((panda$core$Int64) { 39 }));
                if ($tmp2306.value) {
                {
                    int $tmp2309;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2313 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2312 = $tmp2313;
                        $tmp2311 = $tmp2312;
                        w2310 = $tmp2311;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2311));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
                        if (((panda$core$Bit) { w2310 == NULL }).value) {
                        {
                            $tmp2314 = NULL;
                            $returnValue2277 = $tmp2314;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
                            $tmp2309 = 0;
                            goto $l2307;
                            $l2315:;
                            $tmp2272 = 3;
                            goto $l2270;
                            $l2316:;
                            return $returnValue2277;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(whens2294, ((panda$core$Object*) w2310));
                    }
                    $tmp2309 = -1;
                    goto $l2307;
                    $l2307:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2310));
                    w2310 = NULL;
                    switch ($tmp2309) {
                        case 0: goto $l2315;
                        case -1: goto $l2318;
                    }
                    $l2318:;
                }
                }
                else {
                panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1230_132304.$rawValue, ((panda$core$Int64) { 40 }));
                if ($tmp2319.value) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp2321 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    o2320 = $tmp2321;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2322, ((panda$core$Int64) { 95 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp2324 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2322, &$s2323);
                    if (((panda$core$Bit) { !$tmp2324.nonnull }).value) {
                    {
                        $tmp2325 = NULL;
                        $returnValue2277 = $tmp2325;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
                        $tmp2272 = 4;
                        goto $l2270;
                        $l2326:;
                        return $returnValue2277;
                    }
                    }
                    {
                        $tmp2328 = other2298;
                        panda$collections$Array* $tmp2331 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                        panda$collections$Array$init($tmp2331);
                        $tmp2330 = $tmp2331;
                        $tmp2329 = $tmp2330;
                        other2298 = $tmp2329;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2328));
                    }
                    $l2332:;
                    while (true) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp2335 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$1246_252334 = $tmp2335.kind;
                            panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1246_252334.$rawValue, ((panda$core$Int64) { 100 }));
                            if ($tmp2336.value) {
                            {
                                goto $l2333;
                            }
                            }
                            else {
                            panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1246_252334.$rawValue, ((panda$core$Int64) { 28 }));
                            bool $tmp2338 = $tmp2339.value;
                            if ($tmp2338) goto $l2340;
                            panda$core$Bit $tmp2341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1246_252334.$rawValue, ((panda$core$Int64) { 29 }));
                            $tmp2338 = $tmp2341.value;
                            $l2340:;
                            panda$core$Bit $tmp2342 = { $tmp2338 };
                            bool $tmp2337 = $tmp2342.value;
                            if ($tmp2337) goto $l2343;
                            panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1246_252334.$rawValue, ((panda$core$Int64) { 27 }));
                            $tmp2337 = $tmp2344.value;
                            $l2343:;
                            panda$core$Bit $tmp2345 = { $tmp2337 };
                            if ($tmp2345.value) {
                            {
                                int $tmp2348;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2352 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2351 = $tmp2352;
                                    $tmp2350 = $tmp2351;
                                    stmt2349 = $tmp2350;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
                                    if (((panda$core$Bit) { stmt2349 == NULL }).value) {
                                    {
                                        $tmp2353 = NULL;
                                        $returnValue2277 = $tmp2353;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
                                        $tmp2348 = 0;
                                        goto $l2346;
                                        $l2354:;
                                        $tmp2272 = 5;
                                        goto $l2270;
                                        $l2355:;
                                        return $returnValue2277;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2298, ((panda$core$Object*) stmt2349));
                                    $tmp2348 = 1;
                                    goto $l2346;
                                    $l2357:;
                                    goto $l2333;
                                }
                                $l2346:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2349));
                                stmt2349 = NULL;
                                switch ($tmp2348) {
                                    case 0: goto $l2354;
                                    case 1: goto $l2357;
                                }
                                $l2358:;
                            }
                            }
                            else {
                            {
                                int $tmp2361;
                                {
                                    org$pandalanguage$pandac$ASTNode* $tmp2365 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                                    $tmp2364 = $tmp2365;
                                    $tmp2363 = $tmp2364;
                                    stmt2362 = $tmp2363;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
                                    if (((panda$core$Bit) { stmt2362 == NULL }).value) {
                                    {
                                        $tmp2366 = NULL;
                                        $returnValue2277 = $tmp2366;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2366));
                                        $tmp2361 = 0;
                                        goto $l2359;
                                        $l2367:;
                                        $tmp2272 = 6;
                                        goto $l2270;
                                        $l2368:;
                                        return $returnValue2277;
                                    }
                                    }
                                    panda$collections$Array$add$panda$collections$Array$T(other2298, ((panda$core$Object*) stmt2362));
                                }
                                $tmp2361 = -1;
                                goto $l2359;
                                $l2359:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2362));
                                stmt2362 = NULL;
                                switch ($tmp2361) {
                                    case -1: goto $l2370;
                                    case 0: goto $l2367;
                                }
                                $l2370:;
                            }
                            }
                            }
                        }
                    }
                    }
                    $l2333:;
                    goto $l2301;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$core$String* $tmp2377 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token2302);
                    $tmp2376 = $tmp2377;
                    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2375, $tmp2376);
                    $tmp2374 = $tmp2378;
                    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2374, &$s2379);
                    $tmp2373 = $tmp2380;
                    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2372, $tmp2373);
                    $tmp2371 = $tmp2381;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token2302, $tmp2371);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2373));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
                }
                }
                }
                }
            }
        }
        }
        $l2301:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2382, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2384 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2382, &$s2383);
        if (((panda$core$Bit) { !$tmp2384.nonnull }).value) {
        {
            $tmp2385 = NULL;
            $returnValue2277 = $tmp2385;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2385));
            $tmp2272 = 7;
            goto $l2270;
            $l2386:;
            return $returnValue2277;
        }
        }
        if (((panda$core$Bit) { other2298 != NULL }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2390 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$collections$ImmutableArray* $tmp2392 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2294);
            $tmp2391 = $tmp2392;
            panda$collections$ImmutableArray* $tmp2394 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other2298);
            $tmp2393 = $tmp2394;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2390, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2273.value).position, expr2281, $tmp2391, $tmp2393);
            $tmp2389 = $tmp2390;
            $tmp2388 = $tmp2389;
            $returnValue2277 = $tmp2388;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
            $tmp2272 = 8;
            goto $l2270;
            $l2395:;
            return $returnValue2277;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2399 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2401 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens2294);
        $tmp2400 = $tmp2401;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp2399, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start2273.value).position, expr2281, $tmp2400, NULL);
        $tmp2398 = $tmp2399;
        $tmp2397 = $tmp2398;
        $returnValue2277 = $tmp2397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2397));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
        $tmp2272 = 9;
        goto $l2270;
        $l2402:;
        return $returnValue2277;
    }
    $l2270:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2281));
    expr2281 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens2294));
    whens2294 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other2298));
    switch ($tmp2272) {
        case 8: goto $l2395;
        case 9: goto $l2402;
        case 2: goto $l2292;
        case 7: goto $l2386;
        case 3: goto $l2316;
        case 1: goto $l2286;
        case 4: goto $l2326;
        case 0: goto $l2279;
        case 6: goto $l2368;
        case 5: goto $l2355;
    }
    $l2404:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2408;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2409;
    panda$collections$ImmutableArray* $returnValue2412;
    panda$collections$ImmutableArray* $tmp2413;
    panda$collections$Array* result2416 = NULL;
    panda$collections$Array* $tmp2417;
    panda$collections$Array* $tmp2418;
    org$pandalanguage$pandac$parser$Token$Kind $match$1290_132422;
    org$pandalanguage$pandac$ASTNode* stmt2437 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2438;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    panda$collections$ImmutableArray* $tmp2441;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2445;
    panda$collections$ImmutableArray* $tmp2448;
    org$pandalanguage$pandac$ASTNode* stmt2457 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2458;
    org$pandalanguage$pandac$ASTNode* $tmp2459;
    panda$collections$ImmutableArray* $tmp2461;
    panda$collections$ImmutableArray* $tmp2466;
    panda$collections$ImmutableArray* $tmp2467;
    int $tmp2407;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2409, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2411 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2409, &$s2410);
        start2408 = $tmp2411;
        if (((panda$core$Bit) { !start2408.nonnull }).value) {
        {
            $tmp2413 = NULL;
            $returnValue2412 = $tmp2413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
            $tmp2407 = 0;
            goto $l2405;
            $l2414:;
            return $returnValue2412;
        }
        }
        panda$collections$Array* $tmp2419 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2419);
        $tmp2418 = $tmp2419;
        $tmp2417 = $tmp2418;
        result2416 = $tmp2417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
        $l2420:;
        while (true) {
        {
            {
                org$pandalanguage$pandac$parser$Token $tmp2423 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                $match$1290_132422 = $tmp2423.kind;
                panda$core$Bit $tmp2424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1290_132422.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp2424.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    goto $l2421;
                }
                }
                else {
                panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1290_132422.$rawValue, ((panda$core$Int64) { 28 }));
                bool $tmp2426 = $tmp2427.value;
                if ($tmp2426) goto $l2428;
                panda$core$Bit $tmp2429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1290_132422.$rawValue, ((panda$core$Int64) { 29 }));
                $tmp2426 = $tmp2429.value;
                $l2428:;
                panda$core$Bit $tmp2430 = { $tmp2426 };
                bool $tmp2425 = $tmp2430.value;
                if ($tmp2425) goto $l2431;
                panda$core$Bit $tmp2432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1290_132422.$rawValue, ((panda$core$Int64) { 27 }));
                $tmp2425 = $tmp2432.value;
                $l2431:;
                panda$core$Bit $tmp2433 = { $tmp2425 };
                if ($tmp2433.value) {
                {
                    int $tmp2436;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2440 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2439 = $tmp2440;
                        $tmp2438 = $tmp2439;
                        stmt2437 = $tmp2438;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2438));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
                        if (((panda$core$Bit) { stmt2437 == NULL }).value) {
                        {
                            $tmp2441 = NULL;
                            $returnValue2412 = $tmp2441;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2441));
                            $tmp2436 = 0;
                            goto $l2434;
                            $l2442:;
                            $tmp2407 = 1;
                            goto $l2405;
                            $l2443:;
                            return $returnValue2412;
                        }
                        }
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2445, ((panda$core$Int64) { 100 }));
                        org$pandalanguage$pandac$parser$Token$nullable $tmp2447 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2445, &$s2446);
                        if (((panda$core$Bit) { !$tmp2447.nonnull }).value) {
                        {
                            $tmp2448 = NULL;
                            $returnValue2412 = $tmp2448;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2448));
                            $tmp2436 = 1;
                            goto $l2434;
                            $l2449:;
                            $tmp2407 = 2;
                            goto $l2405;
                            $l2450:;
                            return $returnValue2412;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2416, ((panda$core$Object*) stmt2437));
                        $tmp2436 = 2;
                        goto $l2434;
                        $l2452:;
                        goto $l2421;
                    }
                    $l2434:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2437));
                    stmt2437 = NULL;
                    switch ($tmp2436) {
                        case 1: goto $l2449;
                        case 2: goto $l2452;
                        case 0: goto $l2442;
                    }
                    $l2453:;
                }
                }
                else {
                {
                    int $tmp2456;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp2460 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2459 = $tmp2460;
                        $tmp2458 = $tmp2459;
                        stmt2457 = $tmp2458;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2458));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
                        if (((panda$core$Bit) { stmt2457 == NULL }).value) {
                        {
                            $tmp2461 = NULL;
                            $returnValue2412 = $tmp2461;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2461));
                            $tmp2456 = 0;
                            goto $l2454;
                            $l2462:;
                            $tmp2407 = 3;
                            goto $l2405;
                            $l2463:;
                            return $returnValue2412;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(result2416, ((panda$core$Object*) stmt2457));
                    }
                    $tmp2456 = -1;
                    goto $l2454;
                    $l2454:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt2457));
                    stmt2457 = NULL;
                    switch ($tmp2456) {
                        case -1: goto $l2465;
                        case 0: goto $l2462;
                    }
                    $l2465:;
                }
                }
                }
            }
        }
        }
        $l2421:;
        panda$collections$ImmutableArray* $tmp2468 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result2416);
        $tmp2467 = $tmp2468;
        $tmp2466 = $tmp2467;
        $returnValue2412 = $tmp2466;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2466));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
        $tmp2407 = 4;
        goto $l2405;
        $l2469:;
        return $returnValue2412;
    }
    $l2405:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2416));
    result2416 = NULL;
    switch ($tmp2407) {
        case 1: goto $l2443;
        case 2: goto $l2450;
        case 4: goto $l2469;
        case 0: goto $l2414;
        case 3: goto $l2463;
    }
    $l2471:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements2475 = NULL;
    panda$collections$ImmutableArray* $tmp2476;
    panda$collections$ImmutableArray* $tmp2477;
    org$pandalanguage$pandac$ASTNode* $returnValue2479;
    org$pandalanguage$pandac$ASTNode* $tmp2480;
    org$pandalanguage$pandac$ASTNode* $tmp2483;
    org$pandalanguage$pandac$ASTNode* $tmp2484;
    org$pandalanguage$pandac$Position $tmp2486;
    int $tmp2474;
    {
        panda$collections$ImmutableArray* $tmp2478 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp2477 = $tmp2478;
        $tmp2476 = $tmp2477;
        statements2475 = $tmp2476;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
        if (((panda$core$Bit) { statements2475 == NULL }).value) {
        {
            $tmp2480 = NULL;
            $returnValue2479 = $tmp2480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2480));
            $tmp2474 = 0;
            goto $l2472;
            $l2481:;
            return $returnValue2479;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2485 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position$init(&$tmp2486);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2485, ((panda$core$Int64) { 6 }), $tmp2486, statements2475);
        $tmp2484 = $tmp2485;
        $tmp2483 = $tmp2484;
        $returnValue2479 = $tmp2483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2484));
        $tmp2474 = 1;
        goto $l2472;
        $l2487:;
        return $returnValue2479;
    }
    $l2472:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements2475));
    statements2475 = NULL;
    switch ($tmp2474) {
        case 1: goto $l2487;
        case 0: goto $l2481;
    }
    $l2489:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start2493 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2494;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $returnValue2497;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$parser$Token$Kind $match$1334_92501;
    org$pandalanguage$pandac$parser$Token op2567;
    org$pandalanguage$pandac$ASTNode* rvalue2569 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2570;
    org$pandalanguage$pandac$ASTNode* $tmp2571;
    org$pandalanguage$pandac$ASTNode* $tmp2573;
    org$pandalanguage$pandac$ASTNode* $tmp2577;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    org$pandalanguage$pandac$parser$Token op2592;
    org$pandalanguage$pandac$ASTNode* rvalue2594 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2595;
    org$pandalanguage$pandac$ASTNode* $tmp2596;
    org$pandalanguage$pandac$ASTNode* $tmp2598;
    org$pandalanguage$pandac$ASTNode* $tmp2602;
    org$pandalanguage$pandac$ASTNode* $tmp2603;
    org$pandalanguage$pandac$ASTNode* $tmp2611;
    int $tmp2492;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2496 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2495 = $tmp2496;
        $tmp2494 = $tmp2495;
        start2493 = $tmp2494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
        if (((panda$core$Bit) { start2493 == NULL }).value) {
        {
            $tmp2498 = NULL;
            $returnValue2497 = $tmp2498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
            $tmp2492 = 0;
            goto $l2490;
            $l2499:;
            return $returnValue2497;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp2502 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1334_92501 = $tmp2502.kind;
            panda$core$Bit $tmp2518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 73 }));
            bool $tmp2517 = $tmp2518.value;
            if ($tmp2517) goto $l2519;
            panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 74 }));
            $tmp2517 = $tmp2520.value;
            $l2519:;
            panda$core$Bit $tmp2521 = { $tmp2517 };
            bool $tmp2516 = $tmp2521.value;
            if ($tmp2516) goto $l2522;
            panda$core$Bit $tmp2523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 75 }));
            $tmp2516 = $tmp2523.value;
            $l2522:;
            panda$core$Bit $tmp2524 = { $tmp2516 };
            bool $tmp2515 = $tmp2524.value;
            if ($tmp2515) goto $l2525;
            panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 76 }));
            $tmp2515 = $tmp2526.value;
            $l2525:;
            panda$core$Bit $tmp2527 = { $tmp2515 };
            bool $tmp2514 = $tmp2527.value;
            if ($tmp2514) goto $l2528;
            panda$core$Bit $tmp2529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 77 }));
            $tmp2514 = $tmp2529.value;
            $l2528:;
            panda$core$Bit $tmp2530 = { $tmp2514 };
            bool $tmp2513 = $tmp2530.value;
            if ($tmp2513) goto $l2531;
            panda$core$Bit $tmp2532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 78 }));
            $tmp2513 = $tmp2532.value;
            $l2531:;
            panda$core$Bit $tmp2533 = { $tmp2513 };
            bool $tmp2512 = $tmp2533.value;
            if ($tmp2512) goto $l2534;
            panda$core$Bit $tmp2535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 79 }));
            $tmp2512 = $tmp2535.value;
            $l2534:;
            panda$core$Bit $tmp2536 = { $tmp2512 };
            bool $tmp2511 = $tmp2536.value;
            if ($tmp2511) goto $l2537;
            panda$core$Bit $tmp2538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 80 }));
            $tmp2511 = $tmp2538.value;
            $l2537:;
            panda$core$Bit $tmp2539 = { $tmp2511 };
            bool $tmp2510 = $tmp2539.value;
            if ($tmp2510) goto $l2540;
            panda$core$Bit $tmp2541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 81 }));
            $tmp2510 = $tmp2541.value;
            $l2540:;
            panda$core$Bit $tmp2542 = { $tmp2510 };
            bool $tmp2509 = $tmp2542.value;
            if ($tmp2509) goto $l2543;
            panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 82 }));
            $tmp2509 = $tmp2544.value;
            $l2543:;
            panda$core$Bit $tmp2545 = { $tmp2509 };
            bool $tmp2508 = $tmp2545.value;
            if ($tmp2508) goto $l2546;
            panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 83 }));
            $tmp2508 = $tmp2547.value;
            $l2546:;
            panda$core$Bit $tmp2548 = { $tmp2508 };
            bool $tmp2507 = $tmp2548.value;
            if ($tmp2507) goto $l2549;
            panda$core$Bit $tmp2550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 84 }));
            $tmp2507 = $tmp2550.value;
            $l2549:;
            panda$core$Bit $tmp2551 = { $tmp2507 };
            bool $tmp2506 = $tmp2551.value;
            if ($tmp2506) goto $l2552;
            panda$core$Bit $tmp2553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 85 }));
            $tmp2506 = $tmp2553.value;
            $l2552:;
            panda$core$Bit $tmp2554 = { $tmp2506 };
            bool $tmp2505 = $tmp2554.value;
            if ($tmp2505) goto $l2555;
            panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 86 }));
            $tmp2505 = $tmp2556.value;
            $l2555:;
            panda$core$Bit $tmp2557 = { $tmp2505 };
            bool $tmp2504 = $tmp2557.value;
            if ($tmp2504) goto $l2558;
            panda$core$Bit $tmp2559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 87 }));
            $tmp2504 = $tmp2559.value;
            $l2558:;
            panda$core$Bit $tmp2560 = { $tmp2504 };
            bool $tmp2503 = $tmp2560.value;
            if ($tmp2503) goto $l2561;
            panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 88 }));
            $tmp2503 = $tmp2562.value;
            $l2561:;
            panda$core$Bit $tmp2563 = { $tmp2503 };
            if ($tmp2563.value) {
            {
                int $tmp2566;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2568 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2567 = $tmp2568;
                    org$pandalanguage$pandac$ASTNode* $tmp2572 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2571 = $tmp2572;
                    $tmp2570 = $tmp2571;
                    rvalue2569 = $tmp2570;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2570));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2571));
                    if (((panda$core$Bit) { rvalue2569 == NULL }).value) {
                    {
                        $tmp2573 = NULL;
                        $returnValue2497 = $tmp2573;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2573));
                        $tmp2566 = 0;
                        goto $l2564;
                        $l2574:;
                        $tmp2492 = 1;
                        goto $l2490;
                        $l2575:;
                        return $returnValue2497;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2579 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2581 = (($fn2580) start2493->$class->vtable[2])(start2493);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2579, ((panda$core$Int64) { 4 }), $tmp2581, start2493, op2567.kind, rvalue2569);
                    $tmp2578 = $tmp2579;
                    $tmp2577 = $tmp2578;
                    $returnValue2497 = $tmp2577;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2577));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
                    $tmp2566 = 1;
                    goto $l2564;
                    $l2582:;
                    $tmp2492 = 2;
                    goto $l2490;
                    $l2583:;
                    return $returnValue2497;
                }
                $l2564:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2569));
                rvalue2569 = NULL;
                switch ($tmp2566) {
                    case 1: goto $l2582;
                    case 0: goto $l2574;
                }
                $l2585:;
            }
            }
            else {
            panda$core$Bit $tmp2586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1334_92501.$rawValue, ((panda$core$Int64) { 58 }));
            if ($tmp2586.value) {
            {
                int $tmp2589;
                {
                    org$pandalanguage$pandac$parser$Token $tmp2590 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2590, &$s2591);
                    org$pandalanguage$pandac$parser$Token $tmp2593 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    op2592 = $tmp2593;
                    org$pandalanguage$pandac$ASTNode* $tmp2597 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp2596 = $tmp2597;
                    $tmp2595 = $tmp2596;
                    rvalue2594 = $tmp2595;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2595));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2596));
                    if (((panda$core$Bit) { rvalue2594 == NULL }).value) {
                    {
                        $tmp2598 = NULL;
                        $returnValue2497 = $tmp2598;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2598));
                        $tmp2589 = 0;
                        goto $l2587;
                        $l2599:;
                        $tmp2492 = 3;
                        goto $l2490;
                        $l2600:;
                        return $returnValue2497;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp2604 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    org$pandalanguage$pandac$Position $tmp2606 = (($fn2605) start2493->$class->vtable[2])(start2493);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp2604, ((panda$core$Int64) { 4 }), $tmp2606, start2493, op2592.kind, rvalue2594);
                    $tmp2603 = $tmp2604;
                    $tmp2602 = $tmp2603;
                    $returnValue2497 = $tmp2602;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2602));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
                    $tmp2589 = 1;
                    goto $l2587;
                    $l2607:;
                    $tmp2492 = 4;
                    goto $l2490;
                    $l2608:;
                    return $returnValue2497;
                }
                $l2587:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rvalue2594));
                rvalue2594 = NULL;
                switch ($tmp2589) {
                    case 0: goto $l2599;
                    case 1: goto $l2607;
                }
                $l2610:;
            }
            }
            else {
            {
                $tmp2611 = start2493;
                $returnValue2497 = $tmp2611;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2611));
                $tmp2492 = 5;
                goto $l2490;
                $l2612:;
                return $returnValue2497;
            }
            }
            }
        }
    }
    $tmp2492 = -1;
    goto $l2490;
    $l2490:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start2493));
    start2493 = NULL;
    switch ($tmp2492) {
        case 5: goto $l2612;
        case 4: goto $l2608;
        case 2: goto $l2583;
        case 1: goto $l2575;
        case 0: goto $l2499;
        case -1: goto $l2614;
        case 3: goto $l2600;
    }
    $l2614:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t2618 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2619;
    org$pandalanguage$pandac$ASTNode* $tmp2620;
    org$pandalanguage$pandac$ASTNode* $returnValue2622;
    org$pandalanguage$pandac$ASTNode* $tmp2623;
    org$pandalanguage$pandac$ASTNode* value2626 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2627;
    org$pandalanguage$pandac$ASTNode* $tmp2629;
    org$pandalanguage$pandac$ASTNode* $tmp2630;
    org$pandalanguage$pandac$ASTNode* $tmp2631;
    org$pandalanguage$pandac$ASTNode* $tmp2633;
    org$pandalanguage$pandac$ASTNode* $tmp2640;
    org$pandalanguage$pandac$ASTNode* $tmp2641;
    org$pandalanguage$pandac$ASTNode* $tmp2642;
    org$pandalanguage$pandac$ASTNode* $tmp2644;
    org$pandalanguage$pandac$ASTNode* $tmp2647;
    org$pandalanguage$pandac$ASTNode* $tmp2648;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    org$pandalanguage$pandac$ASTNode* $tmp2650;
    int $tmp2617;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2621 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2620 = $tmp2621;
        $tmp2619 = $tmp2620;
        t2618 = $tmp2619;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2620));
        if (((panda$core$Bit) { t2618 == NULL }).value) {
        {
            $tmp2623 = NULL;
            $returnValue2622 = $tmp2623;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2623));
            $tmp2617 = 0;
            goto $l2615;
            $l2624:;
            return $returnValue2622;
        }
        }
        memset(&value2626, 0, sizeof(value2626));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2627, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2628 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2627);
        if (((panda$core$Bit) { $tmp2628.nonnull }).value) {
        {
            {
                $tmp2629 = value2626;
                org$pandalanguage$pandac$ASTNode* $tmp2632 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2631 = $tmp2632;
                $tmp2630 = $tmp2631;
                value2626 = $tmp2630;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2631));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2629));
            }
            if (((panda$core$Bit) { value2626 == NULL }).value) {
            {
                $tmp2633 = NULL;
                $returnValue2622 = $tmp2633;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2633));
                $tmp2617 = 1;
                goto $l2615;
                $l2634:;
                return $returnValue2622;
            }
            }
        }
        }
        else {
        org$pandalanguage$pandac$parser$Token $tmp2636 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp2637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2636.kind.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp2637.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2638 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp2638, &$s2639);
            {
                $tmp2640 = value2626;
                org$pandalanguage$pandac$ASTNode* $tmp2643 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2642 = $tmp2643;
                $tmp2641 = $tmp2642;
                value2626 = $tmp2641;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2641));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2642));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2640));
            }
            if (((panda$core$Bit) { value2626 == NULL }).value) {
            {
                $tmp2644 = NULL;
                $returnValue2622 = $tmp2644;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2644));
                $tmp2617 = 2;
                goto $l2615;
                $l2645:;
                return $returnValue2622;
            }
            }
        }
        }
        else {
        {
            {
                $tmp2647 = value2626;
                $tmp2648 = NULL;
                value2626 = $tmp2648;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2647));
            }
        }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp2651 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp2653 = (($fn2652) t2618->$class->vtable[2])(t2618);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp2651, ((panda$core$Int64) { 13 }), $tmp2653, t2618, value2626);
        $tmp2650 = $tmp2651;
        $tmp2649 = $tmp2650;
        $returnValue2622 = $tmp2649;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2649));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2650));
        $tmp2617 = 3;
        goto $l2615;
        $l2654:;
        return $returnValue2622;
    }
    $l2615:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2618));
    t2618 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value2626));
    switch ($tmp2617) {
        case 3: goto $l2654;
        case 1: goto $l2634;
        case 2: goto $l2645;
        case 0: goto $l2624;
    }
    $l2656:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2660;
    org$pandalanguage$pandac$Variable$Kind kind2662;
    org$pandalanguage$pandac$parser$Token$Kind $match$1393_92663;
    org$pandalanguage$pandac$Variable$Kind $tmp2665;
    org$pandalanguage$pandac$Variable$Kind $tmp2667;
    org$pandalanguage$pandac$Variable$Kind $tmp2669;
    org$pandalanguage$pandac$Variable$Kind $tmp2671;
    panda$collections$Array* declarations2673 = NULL;
    panda$collections$Array* $tmp2674;
    panda$collections$Array* $tmp2675;
    org$pandalanguage$pandac$ASTNode* decl2677 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2678;
    org$pandalanguage$pandac$ASTNode* $tmp2679;
    org$pandalanguage$pandac$ASTNode* $returnValue2681;
    org$pandalanguage$pandac$ASTNode* $tmp2682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2688;
    org$pandalanguage$pandac$ASTNode* decl2693 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2694;
    org$pandalanguage$pandac$ASTNode* $tmp2695;
    org$pandalanguage$pandac$ASTNode* $tmp2697;
    org$pandalanguage$pandac$ASTNode* $tmp2702;
    org$pandalanguage$pandac$ASTNode* $tmp2703;
    panda$collections$ImmutableArray* $tmp2705;
    int $tmp2659;
    {
        org$pandalanguage$pandac$parser$Token $tmp2661 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        start2660 = $tmp2661;
        memset(&kind2662, 0, sizeof(kind2662));
        {
            $match$1393_92663 = start2660.kind;
            panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1393_92663.$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2664.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2665, ((panda$core$Int64) { 0 }));
                kind2662 = $tmp2665;
            }
            }
            else {
            panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1393_92663.$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2666.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2667, ((panda$core$Int64) { 1 }));
                kind2662 = $tmp2667;
            }
            }
            else {
            panda$core$Bit $tmp2668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1393_92663.$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2668.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2669, ((panda$core$Int64) { 3 }));
                kind2662 = $tmp2669;
            }
            }
            else {
            panda$core$Bit $tmp2670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1393_92663.$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2670.value) {
            {
                org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp2671, ((panda$core$Int64) { 2 }));
                kind2662 = $tmp2671;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start2660, &$s2672);
            }
            }
            }
            }
            }
        }
        panda$collections$Array* $tmp2676 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2676);
        $tmp2675 = $tmp2676;
        $tmp2674 = $tmp2675;
        declarations2673 = $tmp2674;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2675));
        org$pandalanguage$pandac$ASTNode* $tmp2680 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp2679 = $tmp2680;
        $tmp2678 = $tmp2679;
        decl2677 = $tmp2678;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2679));
        if (((panda$core$Bit) { decl2677 == NULL }).value) {
        {
            $tmp2682 = NULL;
            $returnValue2681 = $tmp2682;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2682));
            $tmp2659 = 0;
            goto $l2657;
            $l2683:;
            return $returnValue2681;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations2673, ((panda$core$Object*) decl2677));
        $l2685:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2688, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2689 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2688);
        bool $tmp2687 = ((panda$core$Bit) { $tmp2689.nonnull }).value;
        if (!$tmp2687) goto $l2686;
        {
            int $tmp2692;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2696 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2695 = $tmp2696;
                $tmp2694 = $tmp2695;
                decl2693 = $tmp2694;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2694));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2695));
                if (((panda$core$Bit) { decl2693 == NULL }).value) {
                {
                    $tmp2697 = NULL;
                    $returnValue2681 = $tmp2697;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2697));
                    $tmp2692 = 0;
                    goto $l2690;
                    $l2698:;
                    $tmp2659 = 1;
                    goto $l2657;
                    $l2699:;
                    return $returnValue2681;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(declarations2673, ((panda$core$Object*) decl2693));
            }
            $tmp2692 = -1;
            goto $l2690;
            $l2690:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2693));
            decl2693 = NULL;
            switch ($tmp2692) {
                case -1: goto $l2701;
                case 0: goto $l2698;
            }
            $l2701:;
        }
        goto $l2685;
        $l2686:;
        org$pandalanguage$pandac$ASTNode* $tmp2704 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2706 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations2673);
        $tmp2705 = $tmp2706;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2704, ((panda$core$Int64) { 43 }), start2660.position, kind2662, $tmp2705);
        $tmp2703 = $tmp2704;
        $tmp2702 = $tmp2703;
        $returnValue2681 = $tmp2702;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2705));
        $tmp2659 = 2;
        goto $l2657;
        $l2707:;
        return $returnValue2681;
    }
    $l2657:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations2673));
    declarations2673 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl2677));
    decl2677 = NULL;
    switch ($tmp2659) {
        case 1: goto $l2699;
        case 2: goto $l2707;
        case 0: goto $l2683;
    }
    $l2709:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2713;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2714;
    org$pandalanguage$pandac$ASTNode* $returnValue2717;
    org$pandalanguage$pandac$ASTNode* $tmp2718;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2721;
    org$pandalanguage$pandac$ASTNode* $tmp2724;
    panda$core$Object* $tmp2727;
    org$pandalanguage$pandac$ASTNode* target2729 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2730;
    org$pandalanguage$pandac$ASTNode* $tmp2731;
    panda$core$String* $tmp2733;
    panda$collections$Array* args2735 = NULL;
    panda$collections$Array* $tmp2736;
    panda$collections$Array* $tmp2737;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2739;
    org$pandalanguage$pandac$ASTNode* expr2744 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2745;
    org$pandalanguage$pandac$ASTNode* $tmp2746;
    panda$core$Object* $tmp2748;
    org$pandalanguage$pandac$ASTNode* $tmp2750;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2757;
    org$pandalanguage$pandac$ASTNode* $tmp2759;
    org$pandalanguage$pandac$ASTNode* $tmp2760;
    org$pandalanguage$pandac$ASTNode* $tmp2761;
    panda$core$Object* $tmp2763;
    org$pandalanguage$pandac$ASTNode* $tmp2765;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2769;
    panda$core$Object* $tmp2772;
    org$pandalanguage$pandac$ASTNode* $tmp2774;
    panda$core$Object* $tmp2779;
    org$pandalanguage$pandac$ASTNode* $tmp2781;
    org$pandalanguage$pandac$ASTNode* $tmp2782;
    panda$collections$ImmutableArray* $tmp2784;
    int $tmp2712;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2714, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2716 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2714, &$s2715);
        start2713 = $tmp2716;
        if (((panda$core$Bit) { !start2713.nonnull }).value) {
        {
            $tmp2718 = NULL;
            $returnValue2717 = $tmp2718;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2718));
            $tmp2712 = 0;
            goto $l2710;
            $l2719:;
            return $returnValue2717;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2721, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2723 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2721, &$s2722);
        if (((panda$core$Bit) { !$tmp2723.nonnull }).value) {
        {
            $tmp2724 = NULL;
            $returnValue2717 = $tmp2724;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2724));
            $tmp2712 = 1;
            goto $l2710;
            $l2725:;
            return $returnValue2717;
        }
        }
        panda$core$Bit$wrapper* $tmp2728;
        $tmp2728 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
        $tmp2728->value = ((panda$core$Bit) { true });
        $tmp2727 = ((panda$core$Object*) $tmp2728);
        panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, $tmp2727);
        panda$core$Panda$unref$panda$core$Object($tmp2727);
        org$pandalanguage$pandac$ASTNode* $tmp2732 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2734 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start2713.value));
        $tmp2733 = $tmp2734;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp2732, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) start2713.value).position, $tmp2733);
        $tmp2731 = $tmp2732;
        $tmp2730 = $tmp2731;
        target2729 = $tmp2730;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2733));
        panda$collections$Array* $tmp2738 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp2738);
        $tmp2737 = $tmp2738;
        $tmp2736 = $tmp2737;
        args2735 = $tmp2736;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2736));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2737));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2739, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2740 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2739);
        if (((panda$core$Bit) { !$tmp2740.nonnull }).value) {
        {
            int $tmp2743;
            {
                org$pandalanguage$pandac$ASTNode* $tmp2747 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2746 = $tmp2747;
                $tmp2745 = $tmp2746;
                expr2744 = $tmp2745;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2746));
                if (((panda$core$Bit) { expr2744 == NULL }).value) {
                {
                    panda$core$Object* $tmp2749 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2748 = $tmp2749;
                    panda$core$Panda$unref$panda$core$Object($tmp2748);
                    $tmp2750 = NULL;
                    $returnValue2717 = $tmp2750;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2750));
                    $tmp2743 = 0;
                    goto $l2741;
                    $l2751:;
                    $tmp2712 = 2;
                    goto $l2710;
                    $l2752:;
                    return $returnValue2717;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(args2735, ((panda$core$Object*) expr2744));
                $l2754:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2757, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2758 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2757);
                bool $tmp2756 = ((panda$core$Bit) { $tmp2758.nonnull }).value;
                if (!$tmp2756) goto $l2755;
                {
                    {
                        $tmp2759 = expr2744;
                        org$pandalanguage$pandac$ASTNode* $tmp2762 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp2761 = $tmp2762;
                        $tmp2760 = $tmp2761;
                        expr2744 = $tmp2760;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2760));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2761));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2759));
                    }
                    if (((panda$core$Bit) { expr2744 == NULL }).value) {
                    {
                        panda$core$Object* $tmp2764 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        $tmp2763 = $tmp2764;
                        panda$core$Panda$unref$panda$core$Object($tmp2763);
                        $tmp2765 = NULL;
                        $returnValue2717 = $tmp2765;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2765));
                        $tmp2743 = 1;
                        goto $l2741;
                        $l2766:;
                        $tmp2712 = 3;
                        goto $l2710;
                        $l2767:;
                        return $returnValue2717;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args2735, ((panda$core$Object*) expr2744));
                }
                goto $l2754;
                $l2755:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2769, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp2771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2769, &$s2770);
                if (((panda$core$Bit) { !$tmp2771.nonnull }).value) {
                {
                    panda$core$Object* $tmp2773 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    $tmp2772 = $tmp2773;
                    panda$core$Panda$unref$panda$core$Object($tmp2772);
                    $tmp2774 = NULL;
                    $returnValue2717 = $tmp2774;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2774));
                    $tmp2743 = 2;
                    goto $l2741;
                    $l2775:;
                    $tmp2712 = 4;
                    goto $l2710;
                    $l2776:;
                    return $returnValue2717;
                }
                }
            }
            $tmp2743 = -1;
            goto $l2741;
            $l2741:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2744));
            expr2744 = NULL;
            switch ($tmp2743) {
                case 2: goto $l2775;
                case -1: goto $l2778;
                case 1: goto $l2766;
                case 0: goto $l2751;
            }
            $l2778:;
        }
        }
        panda$core$Object* $tmp2780 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
        $tmp2779 = $tmp2780;
        panda$core$Panda$unref$panda$core$Object($tmp2779);
        org$pandalanguage$pandac$ASTNode* $tmp2783 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp2785 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args2735);
        $tmp2784 = $tmp2785;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2783, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$parser$Token) start2713.value).position, target2729, $tmp2784);
        $tmp2782 = $tmp2783;
        $tmp2781 = $tmp2782;
        $returnValue2717 = $tmp2781;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2781));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2782));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2784));
        $tmp2712 = 5;
        goto $l2710;
        $l2786:;
        return $returnValue2717;
    }
    $l2710:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target2729));
    target2729 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args2735));
    args2735 = NULL;
    switch ($tmp2712) {
        case 1: goto $l2725;
        case 4: goto $l2776;
        case 2: goto $l2752;
        case 3: goto $l2767;
        case 0: goto $l2719;
        case 5: goto $l2786;
    }
    $l2788:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2789;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2790;
    org$pandalanguage$pandac$ASTNode* $returnValue2793;
    org$pandalanguage$pandac$ASTNode* $tmp2794;
    org$pandalanguage$pandac$parser$Token$nullable label2796;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2797;
    org$pandalanguage$pandac$ASTNode* $tmp2799;
    org$pandalanguage$pandac$ASTNode* $tmp2800;
    panda$core$String* $tmp2802;
    org$pandalanguage$pandac$ASTNode* $tmp2805;
    org$pandalanguage$pandac$ASTNode* $tmp2806;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2790, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2792 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2790, &$s2791);
    start2789 = $tmp2792;
    if (((panda$core$Bit) { !start2789.nonnull }).value) {
    {
        $tmp2794 = NULL;
        $returnValue2793 = $tmp2794;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2794));
        return $returnValue2793;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2797, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2798 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2797);
    label2796 = $tmp2798;
    if (((panda$core$Bit) { label2796.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2801 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2803 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2796.value));
        $tmp2802 = $tmp2803;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2801, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2789.value).position, $tmp2802);
        $tmp2800 = $tmp2801;
        $tmp2799 = $tmp2800;
        $returnValue2793 = $tmp2799;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2799));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2800));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2802));
        return $returnValue2793;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2807 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2807, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) start2789.value).position, NULL);
    $tmp2806 = $tmp2807;
    $tmp2805 = $tmp2806;
    $returnValue2793 = $tmp2805;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2805));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2806));
    return $returnValue2793;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2809;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2810;
    org$pandalanguage$pandac$ASTNode* $returnValue2813;
    org$pandalanguage$pandac$ASTNode* $tmp2814;
    org$pandalanguage$pandac$parser$Token$nullable label2816;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2817;
    org$pandalanguage$pandac$ASTNode* $tmp2819;
    org$pandalanguage$pandac$ASTNode* $tmp2820;
    panda$core$String* $tmp2822;
    org$pandalanguage$pandac$ASTNode* $tmp2825;
    org$pandalanguage$pandac$ASTNode* $tmp2826;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2810, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2812 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2810, &$s2811);
    start2809 = $tmp2812;
    if (((panda$core$Bit) { !start2809.nonnull }).value) {
    {
        $tmp2814 = NULL;
        $returnValue2813 = $tmp2814;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2814));
        return $returnValue2813;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2817, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2818 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2817);
    label2816 = $tmp2818;
    if (((panda$core$Bit) { label2816.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2821 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp2823 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label2816.value));
        $tmp2822 = $tmp2823;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2821, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2809.value).position, $tmp2822);
        $tmp2820 = $tmp2821;
        $tmp2819 = $tmp2820;
        $returnValue2813 = $tmp2819;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2819));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2820));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2822));
        return $returnValue2813;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp2827 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp2827, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start2809.value).position, NULL);
    $tmp2826 = $tmp2827;
    $tmp2825 = $tmp2826;
    $returnValue2813 = $tmp2825;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2825));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2826));
    return $returnValue2813;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start2829;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2830;
    org$pandalanguage$pandac$ASTNode* $returnValue2833;
    org$pandalanguage$pandac$ASTNode* $tmp2834;
    org$pandalanguage$pandac$parser$Token$Kind $match$1497_92836;
    org$pandalanguage$pandac$ASTNode* $tmp2847;
    org$pandalanguage$pandac$ASTNode* $tmp2848;
    panda$collections$Array* children2854 = NULL;
    panda$collections$Array* $tmp2855;
    panda$collections$Array* $tmp2856;
    org$pandalanguage$pandac$ASTNode* expr2858 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2859;
    org$pandalanguage$pandac$ASTNode* $tmp2860;
    org$pandalanguage$pandac$ASTNode* $tmp2862;
    org$pandalanguage$pandac$ASTNode* $tmp2865;
    org$pandalanguage$pandac$ASTNode* $tmp2866;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2830, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2832 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2830, &$s2831);
    start2829 = $tmp2832;
    if (((panda$core$Bit) { !start2829.nonnull }).value) {
    {
        $tmp2834 = NULL;
        $returnValue2833 = $tmp2834;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2834));
        return $returnValue2833;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2837 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1497_92836 = $tmp2837.kind;
        panda$core$Bit $tmp2840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1497_92836.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp2839 = $tmp2840.value;
        if ($tmp2839) goto $l2841;
        panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1497_92836.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp2839 = $tmp2842.value;
        $l2841:;
        panda$core$Bit $tmp2843 = { $tmp2839 };
        bool $tmp2838 = $tmp2843.value;
        if ($tmp2838) goto $l2844;
        panda$core$Bit $tmp2845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1497_92836.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp2838 = $tmp2845.value;
        $l2844:;
        panda$core$Bit $tmp2846 = { $tmp2838 };
        if ($tmp2846.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2849 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2849, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start2829.value).position, NULL);
            $tmp2848 = $tmp2849;
            $tmp2847 = $tmp2848;
            $returnValue2833 = $tmp2847;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2847));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2848));
            return $returnValue2833;
        }
        }
        else {
        {
            int $tmp2853;
            {
                panda$collections$Array* $tmp2857 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp2857);
                $tmp2856 = $tmp2857;
                $tmp2855 = $tmp2856;
                children2854 = $tmp2855;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2856));
                org$pandalanguage$pandac$ASTNode* $tmp2861 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp2860 = $tmp2861;
                $tmp2859 = $tmp2860;
                expr2858 = $tmp2859;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2859));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2860));
                if (((panda$core$Bit) { expr2858 == NULL }).value) {
                {
                    $tmp2862 = NULL;
                    $returnValue2833 = $tmp2862;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2862));
                    $tmp2853 = 0;
                    goto $l2851;
                    $l2863:;
                    return $returnValue2833;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(children2854, ((panda$core$Object*) expr2858));
                org$pandalanguage$pandac$ASTNode* $tmp2867 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp2867, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start2829.value).position, expr2858);
                $tmp2866 = $tmp2867;
                $tmp2865 = $tmp2866;
                $returnValue2833 = $tmp2865;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2866));
                $tmp2853 = 1;
                goto $l2851;
                $l2868:;
                return $returnValue2833;
            }
            $l2851:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children2854));
            children2854 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr2858));
            expr2858 = NULL;
            switch ($tmp2853) {
                case 1: goto $l2868;
                case 0: goto $l2863;
            }
            $l2870:;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1515_92871;
    org$pandalanguage$pandac$ASTNode* $returnValue2874;
    org$pandalanguage$pandac$ASTNode* $tmp2875;
    org$pandalanguage$pandac$ASTNode* $tmp2876;
    org$pandalanguage$pandac$ASTNode* $tmp2880;
    org$pandalanguage$pandac$ASTNode* $tmp2881;
    org$pandalanguage$pandac$ASTNode* $tmp2885;
    org$pandalanguage$pandac$ASTNode* $tmp2886;
    {
        org$pandalanguage$pandac$parser$Token $tmp2872 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1515_92871 = $tmp2872.kind;
        panda$core$Bit $tmp2873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1515_92871.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2873.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2877 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2876 = $tmp2877;
            $tmp2875 = $tmp2876;
            $returnValue2874 = $tmp2875;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2876));
            return $returnValue2874;
        }
        }
        else {
        panda$core$Bit $tmp2879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1515_92871.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2879.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2882 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2881 = $tmp2882;
            $tmp2880 = $tmp2881;
            $returnValue2874 = $tmp2880;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2880));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2881));
            return $returnValue2874;
        }
        }
        else {
        panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1515_92871.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2884.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2887 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2886 = $tmp2887;
            $tmp2885 = $tmp2886;
            $returnValue2874 = $tmp2885;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2885));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2886));
            return $returnValue2874;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1524_92889;
    org$pandalanguage$pandac$ASTNode* $returnValue2892;
    org$pandalanguage$pandac$ASTNode* $tmp2893;
    org$pandalanguage$pandac$ASTNode* $tmp2894;
    org$pandalanguage$pandac$ASTNode* $tmp2898;
    org$pandalanguage$pandac$ASTNode* $tmp2899;
    org$pandalanguage$pandac$ASTNode* $tmp2903;
    org$pandalanguage$pandac$ASTNode* $tmp2904;
    org$pandalanguage$pandac$ASTNode* $tmp2908;
    org$pandalanguage$pandac$ASTNode* $tmp2909;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2912;
    org$pandalanguage$pandac$ASTNode* $tmp2914;
    {
        org$pandalanguage$pandac$parser$Token $tmp2890 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1524_92889 = $tmp2890.kind;
        panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1524_92889.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2891.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2895 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2894 = $tmp2895;
            $tmp2893 = $tmp2894;
            $returnValue2892 = $tmp2893;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2893));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2894));
            return $returnValue2892;
        }
        }
        else {
        panda$core$Bit $tmp2897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1524_92889.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2897.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2900 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2899 = $tmp2900;
            $tmp2898 = $tmp2899;
            $returnValue2892 = $tmp2898;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2899));
            return $returnValue2892;
        }
        }
        else {
        panda$core$Bit $tmp2902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1524_92889.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2902.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2905 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2904 = $tmp2905;
            $tmp2903 = $tmp2904;
            $returnValue2892 = $tmp2903;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2904));
            return $returnValue2892;
        }
        }
        else {
        panda$core$Bit $tmp2907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1524_92889.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2907.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2910 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            $tmp2909 = $tmp2910;
            $tmp2908 = $tmp2909;
            $returnValue2892 = $tmp2908;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2909));
            return $returnValue2892;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2912, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2912, &$s2913);
            $tmp2914 = NULL;
            $returnValue2892 = $tmp2914;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2914));
            return $returnValue2892;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1541_92916;
    org$pandalanguage$pandac$ASTNode* $returnValue2919;
    org$pandalanguage$pandac$ASTNode* $tmp2920;
    org$pandalanguage$pandac$ASTNode* $tmp2921;
    org$pandalanguage$pandac$ASTNode* $tmp2925;
    org$pandalanguage$pandac$ASTNode* $tmp2926;
    org$pandalanguage$pandac$ASTNode* $tmp2930;
    org$pandalanguage$pandac$ASTNode* $tmp2931;
    org$pandalanguage$pandac$ASTNode* $tmp2935;
    org$pandalanguage$pandac$ASTNode* $tmp2936;
    org$pandalanguage$pandac$ASTNode* $tmp2940;
    org$pandalanguage$pandac$ASTNode* $tmp2941;
    org$pandalanguage$pandac$ASTNode* $tmp2945;
    org$pandalanguage$pandac$ASTNode* $tmp2946;
    org$pandalanguage$pandac$ASTNode* $tmp2950;
    org$pandalanguage$pandac$ASTNode* $tmp2951;
    org$pandalanguage$pandac$ASTNode* $tmp2955;
    org$pandalanguage$pandac$ASTNode* $tmp2956;
    org$pandalanguage$pandac$parser$Token id2960;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2962;
    org$pandalanguage$pandac$ASTNode* $tmp2964;
    org$pandalanguage$pandac$ASTNode* $tmp2965;
    panda$core$String* $tmp2966;
    org$pandalanguage$pandac$ASTNode* $tmp2970;
    org$pandalanguage$pandac$ASTNode* $tmp2971;
    org$pandalanguage$pandac$ASTNode* $tmp2979;
    org$pandalanguage$pandac$ASTNode* $tmp2980;
    org$pandalanguage$pandac$ASTNode* $tmp2996;
    org$pandalanguage$pandac$ASTNode* $tmp2997;
    org$pandalanguage$pandac$ASTNode* $tmp3001;
    org$pandalanguage$pandac$ASTNode* $tmp3002;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3005;
    org$pandalanguage$pandac$ASTNode* $tmp3007;
    {
        org$pandalanguage$pandac$parser$Token $tmp2917 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1541_92916 = $tmp2917.kind;
        panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2918.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2922 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2921 = $tmp2922;
            $tmp2920 = $tmp2921;
            $returnValue2919 = $tmp2920;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2921));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2924.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2927 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2926 = $tmp2927;
            $tmp2925 = $tmp2926;
            $returnValue2919 = $tmp2925;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2925));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2926));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2929.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2932 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2931 = $tmp2932;
            $tmp2930 = $tmp2931;
            $returnValue2919 = $tmp2930;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2930));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2931));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2934.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2937 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2936 = $tmp2937;
            $tmp2935 = $tmp2936;
            $returnValue2919 = $tmp2935;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2936));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2939.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2942 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            $tmp2941 = $tmp2942;
            $tmp2940 = $tmp2941;
            $returnValue2919 = $tmp2940;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2940));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2941));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2944.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2947 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2946 = $tmp2947;
            $tmp2945 = $tmp2946;
            $returnValue2919 = $tmp2945;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2946));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2949.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2952 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2951 = $tmp2952;
            $tmp2950 = $tmp2951;
            $returnValue2919 = $tmp2950;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2950));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2951));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp2954.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2957 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2956 = $tmp2957;
            $tmp2955 = $tmp2956;
            $returnValue2919 = $tmp2955;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2955));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2956));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp2959.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp2961 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id2960 = $tmp2961;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2962, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp2963 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2962);
            if (((panda$core$Bit) { $tmp2963.nonnull }).value) {
            {
                panda$core$String* $tmp2967 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id2960);
                $tmp2966 = $tmp2967;
                org$pandalanguage$pandac$ASTNode* $tmp2968 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp2966);
                $tmp2965 = $tmp2968;
                $tmp2964 = $tmp2965;
                $returnValue2919 = $tmp2964;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2964));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2966));
                return $returnValue2919;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id2960);
            org$pandalanguage$pandac$ASTNode* $tmp2972 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2971 = $tmp2972;
            $tmp2970 = $tmp2971;
            $returnValue2919 = $tmp2970;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2970));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2971));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp2974 = $tmp2975.value;
        if ($tmp2974) goto $l2976;
        panda$core$Bit $tmp2977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp2974 = $tmp2977.value;
        $l2976:;
        panda$core$Bit $tmp2978 = { $tmp2974 };
        if ($tmp2978.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2981 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2980 = $tmp2981;
            $tmp2979 = $tmp2980;
            $returnValue2919 = $tmp2979;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2979));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2980));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2985 = $tmp2986.value;
        if ($tmp2985) goto $l2987;
        panda$core$Bit $tmp2988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2985 = $tmp2988.value;
        $l2987:;
        panda$core$Bit $tmp2989 = { $tmp2985 };
        bool $tmp2984 = $tmp2989.value;
        if ($tmp2984) goto $l2990;
        panda$core$Bit $tmp2991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2984 = $tmp2991.value;
        $l2990:;
        panda$core$Bit $tmp2992 = { $tmp2984 };
        bool $tmp2983 = $tmp2992.value;
        if ($tmp2983) goto $l2993;
        panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2983 = $tmp2994.value;
        $l2993:;
        panda$core$Bit $tmp2995 = { $tmp2983 };
        if ($tmp2995.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2998 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp2997 = $tmp2998;
            $tmp2996 = $tmp2997;
            $returnValue2919 = $tmp2996;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2996));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2997));
            return $returnValue2919;
        }
        }
        else {
        panda$core$Bit $tmp3000 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1541_92916.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp3000.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3003 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp3002 = $tmp3003;
            $tmp3001 = $tmp3002;
            $returnValue2919 = $tmp3001;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3001));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3002));
            return $returnValue2919;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3005, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3005, &$s3006);
            $tmp3007 = NULL;
            $returnValue2919 = $tmp3007;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3007));
            return $returnValue2919;
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
    org$pandalanguage$pandac$parser$Token$nullable start3012;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3013;
    org$pandalanguage$pandac$ASTNode* $returnValue3016;
    org$pandalanguage$pandac$ASTNode* $tmp3017;
    org$pandalanguage$pandac$parser$Token$nullable next3020;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3021;
    org$pandalanguage$pandac$ASTNode* $tmp3024;
    panda$core$MutableString* name3027 = NULL;
    panda$core$MutableString* $tmp3028;
    panda$core$MutableString* $tmp3029;
    panda$core$String* $tmp3031;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3035;
    panda$core$Char8 $tmp3037;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3038;
    org$pandalanguage$pandac$ASTNode* $tmp3041;
    panda$core$String* $tmp3044;
    org$pandalanguage$pandac$ASTNode* $tmp3046;
    org$pandalanguage$pandac$ASTNode* $tmp3047;
    panda$core$String* $tmp3049;
    int $tmp3011;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3013, ((panda$core$Int64) { 14 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3015 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3013, &$s3014);
        start3012 = $tmp3015;
        if (((panda$core$Bit) { !start3012.nonnull }).value) {
        {
            $tmp3017 = NULL;
            $returnValue3016 = $tmp3017;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3017));
            $tmp3011 = 0;
            goto $l3009;
            $l3018:;
            return $returnValue3016;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3021, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3023 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3021, &$s3022);
        next3020 = $tmp3023;
        if (((panda$core$Bit) { !next3020.nonnull }).value) {
        {
            $tmp3024 = NULL;
            $returnValue3016 = $tmp3024;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3024));
            $tmp3011 = 1;
            goto $l3009;
            $l3025:;
            return $returnValue3016;
        }
        }
        panda$core$MutableString* $tmp3030 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3032 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3020.value));
        $tmp3031 = $tmp3032;
        panda$core$MutableString$init$panda$core$String($tmp3030, $tmp3031);
        $tmp3029 = $tmp3030;
        $tmp3028 = $tmp3029;
        name3027 = $tmp3028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3031));
        $l3033:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3035, ((panda$core$Int64) { 98 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3036 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3035);
            next3020 = $tmp3036;
            if (((panda$core$Bit) { !next3020.nonnull }).value) {
            {
                goto $l3034;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3037, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3027, $tmp3037);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3038, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3040 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3038, &$s3039);
            next3020 = $tmp3040;
            if (((panda$core$Bit) { !next3020.nonnull }).value) {
            {
                $tmp3041 = NULL;
                $returnValue3016 = $tmp3041;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3041));
                $tmp3011 = 2;
                goto $l3009;
                $l3042:;
                return $returnValue3016;
            }
            }
            panda$core$String* $tmp3045 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3020.value));
            $tmp3044 = $tmp3045;
            panda$core$MutableString$append$panda$core$String(name3027, $tmp3044);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3044));
        }
        }
        $l3034:;
        org$pandalanguage$pandac$ASTNode* $tmp3048 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3050 = panda$core$MutableString$finish$R$panda$core$String(name3027);
        $tmp3049 = $tmp3050;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3048, ((panda$core$Int64) { 30 }), ((org$pandalanguage$pandac$parser$Token) start3012.value).position, $tmp3049);
        $tmp3047 = $tmp3048;
        $tmp3046 = $tmp3047;
        $returnValue3016 = $tmp3046;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3046));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3049));
        $tmp3011 = 3;
        goto $l3009;
        $l3051:;
        return $returnValue3016;
    }
    $l3009:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3027));
    name3027 = NULL;
    switch ($tmp3011) {
        case 1: goto $l3025;
        case 3: goto $l3051;
        case 2: goto $l3042;
        case 0: goto $l3018;
    }
    $l3053:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3057;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3058;
    org$pandalanguage$pandac$ASTNode* $returnValue3061;
    org$pandalanguage$pandac$ASTNode* $tmp3062;
    org$pandalanguage$pandac$parser$Token$nullable next3065;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3066;
    org$pandalanguage$pandac$ASTNode* $tmp3069;
    panda$core$MutableString* name3072 = NULL;
    panda$core$MutableString* $tmp3073;
    panda$core$MutableString* $tmp3074;
    panda$core$String* $tmp3076;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3080;
    panda$core$Char8 $tmp3082;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3083;
    org$pandalanguage$pandac$ASTNode* $tmp3086;
    panda$core$String* $tmp3089;
    org$pandalanguage$pandac$ASTNode* $tmp3091;
    org$pandalanguage$pandac$ASTNode* $tmp3092;
    panda$core$String* $tmp3094;
    int $tmp3056;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3058, ((panda$core$Int64) { 15 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3060 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3058, &$s3059);
        start3057 = $tmp3060;
        if (((panda$core$Bit) { !start3057.nonnull }).value) {
        {
            $tmp3062 = NULL;
            $returnValue3061 = $tmp3062;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3062));
            $tmp3056 = 0;
            goto $l3054;
            $l3063:;
            return $returnValue3061;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3066, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3068 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3066, &$s3067);
        next3065 = $tmp3068;
        if (((panda$core$Bit) { !next3065.nonnull }).value) {
        {
            $tmp3069 = NULL;
            $returnValue3061 = $tmp3069;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3069));
            $tmp3056 = 1;
            goto $l3054;
            $l3070:;
            return $returnValue3061;
        }
        }
        panda$core$MutableString* $tmp3075 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp3077 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3065.value));
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
            next3065 = $tmp3081;
            if (((panda$core$Bit) { !next3065.nonnull }).value) {
            {
                goto $l3079;
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp3082, ((panda$core$UInt8) { 46 }));
            panda$core$MutableString$append$panda$core$Char8(name3072, $tmp3082);
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3083, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3085 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3083, &$s3084);
            next3065 = $tmp3085;
            if (((panda$core$Bit) { !next3065.nonnull }).value) {
            {
                $tmp3086 = NULL;
                $returnValue3061 = $tmp3086;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3086));
                $tmp3056 = 2;
                goto $l3054;
                $l3087:;
                return $returnValue3061;
            }
            }
            panda$core$String* $tmp3090 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next3065.value));
            $tmp3089 = $tmp3090;
            panda$core$MutableString$append$panda$core$String(name3072, $tmp3089);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3089));
        }
        }
        $l3079:;
        org$pandalanguage$pandac$ASTNode* $tmp3093 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3095 = panda$core$MutableString$finish$R$panda$core$String(name3072);
        $tmp3094 = $tmp3095;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3093, ((panda$core$Int64) { 42 }), ((org$pandalanguage$pandac$parser$Token) start3057.value).position, $tmp3094);
        $tmp3092 = $tmp3093;
        $tmp3091 = $tmp3092;
        $returnValue3061 = $tmp3091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3091));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3092));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3094));
        $tmp3056 = 3;
        goto $l3054;
        $l3096:;
        return $returnValue3061;
    }
    $l3054:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3072));
    name3072 = NULL;
    switch ($tmp3056) {
        case 2: goto $l3087;
        case 1: goto $l3070;
        case 3: goto $l3096;
        case 0: goto $l3063;
    }
    $l3098:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3102;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3103;
    panda$collections$ImmutableArray* $returnValue3106;
    panda$collections$ImmutableArray* $tmp3107;
    org$pandalanguage$pandac$parser$Token$nullable id3110;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3111;
    panda$collections$ImmutableArray* $tmp3114;
    panda$collections$Array* parameters3117 = NULL;
    panda$collections$Array* $tmp3118;
    panda$collections$Array* $tmp3119;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3121;
    org$pandalanguage$pandac$ASTNode* t3126 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3127;
    org$pandalanguage$pandac$ASTNode* $tmp3128;
    panda$collections$ImmutableArray* $tmp3130;
    org$pandalanguage$pandac$ASTNode* $tmp3134;
    panda$core$String* $tmp3136;
    org$pandalanguage$pandac$ASTNode* $tmp3139;
    panda$core$String* $tmp3141;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3146;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3148;
    panda$collections$ImmutableArray* $tmp3151;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3154;
    org$pandalanguage$pandac$ASTNode* t3159 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3160;
    org$pandalanguage$pandac$ASTNode* $tmp3161;
    panda$collections$ImmutableArray* $tmp3163;
    org$pandalanguage$pandac$ASTNode* $tmp3167;
    panda$core$String* $tmp3169;
    org$pandalanguage$pandac$ASTNode* $tmp3172;
    panda$core$String* $tmp3174;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3176;
    panda$collections$ImmutableArray* $tmp3179;
    panda$collections$ImmutableArray* $tmp3182;
    panda$collections$ImmutableArray* $tmp3183;
    int $tmp3101;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3103, ((panda$core$Int64) { 62 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3105 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3103, &$s3104);
        start3102 = $tmp3105;
        if (((panda$core$Bit) { !start3102.nonnull }).value) {
        {
            $tmp3107 = NULL;
            $returnValue3106 = $tmp3107;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3107));
            $tmp3101 = 0;
            goto $l3099;
            $l3108:;
            return $returnValue3106;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3111, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3113 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3111, &$s3112);
        id3110 = $tmp3113;
        if (((panda$core$Bit) { !id3110.nonnull }).value) {
        {
            $tmp3114 = NULL;
            $returnValue3106 = $tmp3114;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3114));
            $tmp3101 = 1;
            goto $l3099;
            $l3115:;
            return $returnValue3106;
        }
        }
        panda$collections$Array* $tmp3120 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3120);
        $tmp3119 = $tmp3120;
        $tmp3118 = $tmp3119;
        parameters3117 = $tmp3118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3119));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3121, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3122 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3121);
        if (((panda$core$Bit) { $tmp3122.nonnull }).value) {
        {
            int $tmp3125;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3129 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3128 = $tmp3129;
                $tmp3127 = $tmp3128;
                t3126 = $tmp3127;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3127));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3128));
                if (((panda$core$Bit) { t3126 == NULL }).value) {
                {
                    $tmp3130 = NULL;
                    $returnValue3106 = $tmp3130;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3130));
                    $tmp3125 = 0;
                    goto $l3123;
                    $l3131:;
                    $tmp3101 = 2;
                    goto $l3099;
                    $l3132:;
                    return $returnValue3106;
                }
                }
                org$pandalanguage$pandac$ASTNode* $tmp3135 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3137 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3110.value));
                $tmp3136 = $tmp3137;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3135, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id3110.value).position, $tmp3136, t3126);
                $tmp3134 = $tmp3135;
                panda$collections$Array$add$panda$collections$Array$T(parameters3117, ((panda$core$Object*) $tmp3134));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3134));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3136));
            }
            $tmp3125 = -1;
            goto $l3123;
            $l3123:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3126));
            t3126 = NULL;
            switch ($tmp3125) {
                case -1: goto $l3138;
                case 0: goto $l3131;
            }
            $l3138:;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp3140 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$String* $tmp3142 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3110.value));
            $tmp3141 = $tmp3142;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3140, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3110.value).position, $tmp3141);
            $tmp3139 = $tmp3140;
            panda$collections$Array$add$panda$collections$Array$T(parameters3117, ((panda$core$Object*) $tmp3139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3141));
        }
        }
        $l3143:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3146, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3147 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3146);
        bool $tmp3145 = ((panda$core$Bit) { $tmp3147.nonnull }).value;
        if (!$tmp3145) goto $l3144;
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3148, ((panda$core$Int64) { 48 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3150 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3148, &$s3149);
            id3110 = $tmp3150;
            if (((panda$core$Bit) { !id3110.nonnull }).value) {
            {
                $tmp3151 = NULL;
                $returnValue3106 = $tmp3151;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3151));
                $tmp3101 = 3;
                goto $l3099;
                $l3152:;
                return $returnValue3106;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3154, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3155 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3154);
            if (((panda$core$Bit) { $tmp3155.nonnull }).value) {
            {
                int $tmp3158;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3162 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3161 = $tmp3162;
                    $tmp3160 = $tmp3161;
                    t3159 = $tmp3160;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3161));
                    if (((panda$core$Bit) { t3159 == NULL }).value) {
                    {
                        $tmp3163 = NULL;
                        $returnValue3106 = $tmp3163;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3163));
                        $tmp3158 = 0;
                        goto $l3156;
                        $l3164:;
                        $tmp3101 = 4;
                        goto $l3099;
                        $l3165:;
                        return $returnValue3106;
                    }
                    }
                    org$pandalanguage$pandac$ASTNode* $tmp3168 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                    panda$core$String* $tmp3170 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3110.value));
                    $tmp3169 = $tmp3170;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3168, ((panda$core$Int64) { 41 }), ((org$pandalanguage$pandac$parser$Token) id3110.value).position, $tmp3169, t3159);
                    $tmp3167 = $tmp3168;
                    panda$collections$Array$add$panda$collections$Array$T(parameters3117, ((panda$core$Object*) $tmp3167));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3167));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3169));
                }
                $tmp3158 = -1;
                goto $l3156;
                $l3156:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3159));
                t3159 = NULL;
                switch ($tmp3158) {
                    case -1: goto $l3171;
                    case 0: goto $l3164;
                }
                $l3171:;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3173 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
                panda$core$String* $tmp3175 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3110.value));
                $tmp3174 = $tmp3175;
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3173, ((panda$core$Int64) { 20 }), ((org$pandalanguage$pandac$parser$Token) id3110.value).position, $tmp3174);
                $tmp3172 = $tmp3173;
                panda$collections$Array$add$panda$collections$Array$T(parameters3117, ((panda$core$Object*) $tmp3172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3174));
            }
            }
        }
        goto $l3143;
        $l3144:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3176, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3178 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3176, &$s3177);
        if (((panda$core$Bit) { !$tmp3178.nonnull }).value) {
        {
            $tmp3179 = NULL;
            $returnValue3106 = $tmp3179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3179));
            $tmp3101 = 5;
            goto $l3099;
            $l3180:;
            return $returnValue3106;
        }
        }
        panda$collections$ImmutableArray* $tmp3184 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters3117);
        $tmp3183 = $tmp3184;
        $tmp3182 = $tmp3183;
        $returnValue3106 = $tmp3182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
        $tmp3101 = 6;
        goto $l3099;
        $l3185:;
        return $returnValue3106;
    }
    $l3099:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters3117));
    parameters3117 = NULL;
    switch ($tmp3101) {
        case 2: goto $l3132;
        case 4: goto $l3165;
        case 1: goto $l3115;
        case 6: goto $l3185;
        case 0: goto $l3108;
        case 3: goto $l3152;
        case 5: goto $l3180;
    }
    $l3187:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3191;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3192;
    panda$collections$ImmutableArray* $returnValue3195;
    panda$collections$ImmutableArray* $tmp3196;
    panda$collections$Array* result3199 = NULL;
    panda$collections$Array* $tmp3200;
    panda$collections$Array* $tmp3201;
    org$pandalanguage$pandac$ASTNode* t3203 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3204;
    org$pandalanguage$pandac$ASTNode* $tmp3205;
    panda$collections$ImmutableArray* $tmp3207;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3213;
    org$pandalanguage$pandac$ASTNode* $tmp3215;
    org$pandalanguage$pandac$ASTNode* $tmp3216;
    org$pandalanguage$pandac$ASTNode* $tmp3217;
    panda$collections$ImmutableArray* $tmp3219;
    panda$collections$ImmutableArray* $tmp3222;
    panda$collections$ImmutableArray* $tmp3223;
    int $tmp3190;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3192, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3194 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3192, &$s3193);
        start3191 = $tmp3194;
        if (((panda$core$Bit) { !start3191.nonnull }).value) {
        {
            $tmp3196 = NULL;
            $returnValue3195 = $tmp3196;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3196));
            $tmp3190 = 0;
            goto $l3188;
            $l3197:;
            return $returnValue3195;
        }
        }
        panda$collections$Array* $tmp3202 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3202);
        $tmp3201 = $tmp3202;
        $tmp3200 = $tmp3201;
        result3199 = $tmp3200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3201));
        org$pandalanguage$pandac$ASTNode* $tmp3206 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3205 = $tmp3206;
        $tmp3204 = $tmp3205;
        t3203 = $tmp3204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3205));
        if (((panda$core$Bit) { t3203 == NULL }).value) {
        {
            $tmp3207 = NULL;
            $returnValue3195 = $tmp3207;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3207));
            $tmp3190 = 1;
            goto $l3188;
            $l3208:;
            return $returnValue3195;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result3199, ((panda$core$Object*) t3203));
        $l3210:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3213, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3214 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3213);
        bool $tmp3212 = ((panda$core$Bit) { $tmp3214.nonnull }).value;
        if (!$tmp3212) goto $l3211;
        {
            {
                $tmp3215 = t3203;
                org$pandalanguage$pandac$ASTNode* $tmp3218 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3217 = $tmp3218;
                $tmp3216 = $tmp3217;
                t3203 = $tmp3216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3215));
            }
            if (((panda$core$Bit) { t3203 == NULL }).value) {
            {
                $tmp3219 = NULL;
                $returnValue3195 = $tmp3219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3219));
                $tmp3190 = 2;
                goto $l3188;
                $l3220:;
                return $returnValue3195;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result3199, ((panda$core$Object*) t3203));
        }
        goto $l3210;
        $l3211:;
        panda$collections$ImmutableArray* $tmp3224 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3199);
        $tmp3223 = $tmp3224;
        $tmp3222 = $tmp3223;
        $returnValue3195 = $tmp3222;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
        $tmp3190 = 3;
        goto $l3188;
        $l3225:;
        return $returnValue3195;
    }
    $l3188:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3199));
    result3199 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3203));
    t3203 = NULL;
    switch ($tmp3190) {
        case 2: goto $l3220;
        case 1: goto $l3208;
        case 3: goto $l3225;
        case 0: goto $l3197;
    }
    $l3227:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable a3231;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3232;
    org$pandalanguage$pandac$ASTNode* expr3235 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3236;
    org$pandalanguage$pandac$ASTNode* $tmp3238;
    org$pandalanguage$pandac$ASTNode* $tmp3239;
    org$pandalanguage$pandac$ASTNode* $tmp3240;
    org$pandalanguage$pandac$ASTNode* $returnValue3242;
    org$pandalanguage$pandac$ASTNode* $tmp3243;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3246;
    org$pandalanguage$pandac$ASTNode* $tmp3248;
    org$pandalanguage$pandac$ASTNode* $tmp3249;
    panda$core$String* $tmp3251;
    int $tmp3230;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3232, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3234 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3232, &$s3233);
        a3231 = $tmp3234;
        memset(&expr3235, 0, sizeof(expr3235));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3236, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3237 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3236);
        if (((panda$core$Bit) { $tmp3237.nonnull }).value) {
        {
            {
                $tmp3238 = expr3235;
                org$pandalanguage$pandac$ASTNode* $tmp3241 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3240 = $tmp3241;
                $tmp3239 = $tmp3240;
                expr3235 = $tmp3239;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3240));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3238));
            }
            if (((panda$core$Bit) { expr3235 == NULL }).value) {
            {
                $tmp3243 = NULL;
                $returnValue3242 = $tmp3243;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3243));
                $tmp3230 = 0;
                goto $l3228;
                $l3244:;
                return $returnValue3242;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3246, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3246, &$s3247);
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3250 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3252 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) a3231.value));
        $tmp3251 = $tmp3252;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp3250, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) a3231.value).position, $tmp3251, expr3235);
        $tmp3249 = $tmp3250;
        $tmp3248 = $tmp3249;
        $returnValue3242 = $tmp3248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3251));
        $tmp3230 = 1;
        goto $l3228;
        $l3253:;
        return $returnValue3242;
    }
    $l3228:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr3235));
    switch ($tmp3230) {
        case 1: goto $l3253;
        case 0: goto $l3244;
    }
    $l3255:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result3259 = NULL;
    panda$collections$Array* $tmp3260;
    panda$collections$Array* $tmp3261;
    org$pandalanguage$pandac$ASTNode* a3271 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3272;
    org$pandalanguage$pandac$ASTNode* $tmp3273;
    panda$collections$ImmutableArray* $returnValue3277;
    panda$collections$ImmutableArray* $tmp3278;
    panda$collections$ImmutableArray* $tmp3279;
    int $tmp3258;
    {
        panda$collections$Array* $tmp3262 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3262);
        $tmp3261 = $tmp3262;
        $tmp3260 = $tmp3261;
        result3259 = $tmp3260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3261));
        $l3263:;
        org$pandalanguage$pandac$parser$Token $tmp3266 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3266.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3265 = $tmp3267.value;
        if (!$tmp3265) goto $l3264;
        {
            int $tmp3270;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3274 = org$pandalanguage$pandac$parser$Parser$annotation$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3273 = $tmp3274;
                $tmp3272 = $tmp3273;
                a3271 = $tmp3272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3273));
                if (((panda$core$Bit) { a3271 == NULL }).value) {
                {
                    $tmp3270 = 0;
                    goto $l3268;
                    $l3275:;
                    goto $l3264;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3259, ((panda$core$Object*) a3271));
            }
            $tmp3270 = -1;
            goto $l3268;
            $l3268:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3271));
            a3271 = NULL;
            switch ($tmp3270) {
                case 0: goto $l3275;
                case -1: goto $l3276;
            }
            $l3276:;
        }
        goto $l3263;
        $l3264:;
        panda$collections$ImmutableArray* $tmp3280 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3259);
        $tmp3279 = $tmp3280;
        $tmp3278 = $tmp3279;
        $returnValue3277 = $tmp3278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3279));
        $tmp3258 = 0;
        goto $l3256;
        $l3281:;
        return $returnValue3277;
    }
    $l3256:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3259));
    result3259 = NULL;
    switch ($tmp3258) {
        case 0: goto $l3281;
    }
    $l3283:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3287;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3288;
    org$pandalanguage$pandac$ASTNode* $returnValue3291;
    org$pandalanguage$pandac$ASTNode* $tmp3292;
    panda$core$MutableString* result3295 = NULL;
    panda$core$MutableString* $tmp3296;
    panda$core$MutableString* $tmp3297;
    org$pandalanguage$pandac$parser$Token next3301;
    org$pandalanguage$pandac$ASTNode* $tmp3306;
    panda$core$String* $tmp3309;
    org$pandalanguage$pandac$ASTNode* $tmp3311;
    org$pandalanguage$pandac$ASTNode* $tmp3312;
    panda$core$String* $tmp3314;
    int $tmp3286;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3288, ((panda$core$Int64) { 11 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3290 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3288, &$s3289);
        start3287 = $tmp3290;
        if (((panda$core$Bit) { !start3287.nonnull }).value) {
        {
            $tmp3292 = NULL;
            $returnValue3291 = $tmp3292;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3292));
            $tmp3286 = 0;
            goto $l3284;
            $l3293:;
            return $returnValue3291;
        }
        }
        panda$core$MutableString* $tmp3298 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp3298);
        $tmp3297 = $tmp3298;
        $tmp3296 = $tmp3297;
        result3295 = $tmp3296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3297));
        $l3299:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3302 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            next3301 = $tmp3302;
            panda$core$Bit $tmp3303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3301.kind.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3303.value) {
            {
                goto $l3300;
            }
            }
            panda$core$Bit $tmp3304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next3301.kind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3304.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start3287.value), &$s3305);
                $tmp3306 = NULL;
                $returnValue3291 = $tmp3306;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3306));
                $tmp3286 = 1;
                goto $l3284;
                $l3307:;
                return $returnValue3291;
            }
            }
            panda$core$String* $tmp3310 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3301);
            $tmp3309 = $tmp3310;
            panda$core$MutableString$append$panda$core$String(result3295, $tmp3309);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3309));
        }
        }
        $l3300:;
        org$pandalanguage$pandac$ASTNode* $tmp3313 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3315 = panda$core$MutableString$finish$R$panda$core$String(result3295);
        $tmp3314 = $tmp3315;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp3313, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start3287.value).position, $tmp3314);
        $tmp3312 = $tmp3313;
        $tmp3311 = $tmp3312;
        $returnValue3291 = $tmp3311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3314));
        $tmp3286 = 2;
        goto $l3284;
        $l3316:;
        return $returnValue3291;
    }
    $l3284:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3295));
    result3295 = NULL;
    switch ($tmp3286) {
        case 2: goto $l3316;
        case 0: goto $l3293;
        case 1: goto $l3307;
    }
    $l3318:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id3322;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3323;
    org$pandalanguage$pandac$ASTNode* $returnValue3326;
    org$pandalanguage$pandac$ASTNode* $tmp3327;
    org$pandalanguage$pandac$ASTNode* t3330 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3331;
    org$pandalanguage$pandac$ASTNode* $tmp3332;
    org$pandalanguage$pandac$ASTNode* $tmp3334;
    org$pandalanguage$pandac$ASTNode* $tmp3337;
    org$pandalanguage$pandac$ASTNode* $tmp3338;
    panda$core$String* $tmp3340;
    int $tmp3321;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3323, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3325 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3323, &$s3324);
        id3322 = $tmp3325;
        if (((panda$core$Bit) { !id3322.nonnull }).value) {
        {
            $tmp3327 = NULL;
            $returnValue3326 = $tmp3327;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3327));
            $tmp3321 = 0;
            goto $l3319;
            $l3328:;
            return $returnValue3326;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3333 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3332 = $tmp3333;
        $tmp3331 = $tmp3332;
        t3330 = $tmp3331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
        if (((panda$core$Bit) { t3330 == NULL }).value) {
        {
            $tmp3334 = NULL;
            $returnValue3326 = $tmp3334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3334));
            $tmp3321 = 1;
            goto $l3319;
            $l3335:;
            return $returnValue3326;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3339 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3341 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id3322.value));
        $tmp3340 = $tmp3341;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp3339, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) id3322.value).position, $tmp3340, t3330);
        $tmp3338 = $tmp3339;
        $tmp3337 = $tmp3338;
        $returnValue3326 = $tmp3337;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3337));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3340));
        $tmp3321 = 2;
        goto $l3319;
        $l3342:;
        return $returnValue3326;
    }
    $l3319:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t3330));
    t3330 = NULL;
    switch ($tmp3321) {
        case 2: goto $l3342;
        case 1: goto $l3335;
        case 0: goto $l3328;
    }
    $l3344:;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start3348;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3349;
    panda$collections$ImmutableArray* $returnValue3352;
    panda$collections$ImmutableArray* $tmp3353;
    panda$collections$Array* result3356 = NULL;
    panda$collections$Array* $tmp3357;
    panda$collections$Array* $tmp3358;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3360;
    org$pandalanguage$pandac$ASTNode* param3365 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3366;
    org$pandalanguage$pandac$ASTNode* $tmp3367;
    panda$collections$ImmutableArray* $tmp3369;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3376;
    org$pandalanguage$pandac$ASTNode* $tmp3378;
    org$pandalanguage$pandac$ASTNode* $tmp3379;
    org$pandalanguage$pandac$ASTNode* $tmp3380;
    panda$collections$ImmutableArray* $tmp3382;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3386;
    panda$collections$ImmutableArray* $tmp3389;
    panda$collections$ImmutableArray* $tmp3394;
    panda$collections$ImmutableArray* $tmp3395;
    int $tmp3347;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3349, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3351 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3349, &$s3350);
        start3348 = $tmp3351;
        if (((panda$core$Bit) { !start3348.nonnull }).value) {
        {
            $tmp3353 = NULL;
            $returnValue3352 = $tmp3353;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3353));
            $tmp3347 = 0;
            goto $l3345;
            $l3354:;
            return $returnValue3352;
        }
        }
        panda$collections$Array* $tmp3359 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3359);
        $tmp3358 = $tmp3359;
        $tmp3357 = $tmp3358;
        result3356 = $tmp3357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3358));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3360, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3361 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3360);
        if (((panda$core$Bit) { !$tmp3361.nonnull }).value) {
        {
            int $tmp3364;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3368 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3367 = $tmp3368;
                $tmp3366 = $tmp3367;
                param3365 = $tmp3366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3367));
                if (((panda$core$Bit) { param3365 == NULL }).value) {
                {
                    $tmp3369 = NULL;
                    $returnValue3352 = $tmp3369;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3369));
                    $tmp3364 = 0;
                    goto $l3362;
                    $l3370:;
                    $tmp3347 = 1;
                    goto $l3345;
                    $l3371:;
                    return $returnValue3352;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result3356, ((panda$core$Object*) param3365));
                $l3373:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3376, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3377 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3376);
                bool $tmp3375 = ((panda$core$Bit) { $tmp3377.nonnull }).value;
                if (!$tmp3375) goto $l3374;
                {
                    {
                        $tmp3378 = param3365;
                        org$pandalanguage$pandac$ASTNode* $tmp3381 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3380 = $tmp3381;
                        $tmp3379 = $tmp3380;
                        param3365 = $tmp3379;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3379));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3380));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3378));
                    }
                    if (((panda$core$Bit) { param3365 == NULL }).value) {
                    {
                        $tmp3382 = NULL;
                        $returnValue3352 = $tmp3382;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3382));
                        $tmp3364 = 1;
                        goto $l3362;
                        $l3383:;
                        $tmp3347 = 2;
                        goto $l3345;
                        $l3384:;
                        return $returnValue3352;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(result3356, ((panda$core$Object*) param3365));
                }
                goto $l3373;
                $l3374:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3386, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp3388 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3386, &$s3387);
                if (((panda$core$Bit) { !$tmp3388.nonnull }).value) {
                {
                    $tmp3389 = NULL;
                    $returnValue3352 = $tmp3389;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3389));
                    $tmp3364 = 2;
                    goto $l3362;
                    $l3390:;
                    $tmp3347 = 3;
                    goto $l3345;
                    $l3391:;
                    return $returnValue3352;
                }
                }
            }
            $tmp3364 = -1;
            goto $l3362;
            $l3362:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param3365));
            param3365 = NULL;
            switch ($tmp3364) {
                case 1: goto $l3383;
                case 2: goto $l3390;
                case 0: goto $l3370;
                case -1: goto $l3393;
            }
            $l3393:;
        }
        }
        panda$collections$ImmutableArray* $tmp3396 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result3356);
        $tmp3395 = $tmp3396;
        $tmp3394 = $tmp3395;
        $returnValue3352 = $tmp3394;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3395));
        $tmp3347 = 4;
        goto $l3345;
        $l3397:;
        return $returnValue3352;
    }
    $l3345:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3356));
    result3356 = NULL;
    switch ($tmp3347) {
        case 2: goto $l3384;
        case 4: goto $l3397;
        case 0: goto $l3354;
        case 1: goto $l3371;
        case 3: goto $l3391;
    }
    $l3399:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $returnValue3400;
    org$pandalanguage$pandac$ASTNode* $tmp3401;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    $tmp3401 = NULL;
    $returnValue3400 = $tmp3401;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3401));
    return $returnValue3400;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind3406;
    org$pandalanguage$pandac$parser$Token$nullable start3407;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3408;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3410;
    org$pandalanguage$pandac$ASTNode* $returnValue3413;
    org$pandalanguage$pandac$ASTNode* $tmp3414;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3417;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3418;
    panda$core$String* name3419 = NULL;
    panda$core$String* $tmp3420;
    panda$core$String* $tmp3421;
    org$pandalanguage$pandac$ASTNode* $tmp3423;
    panda$collections$ImmutableArray* params3426 = NULL;
    panda$collections$ImmutableArray* $tmp3427;
    panda$collections$ImmutableArray* $tmp3428;
    org$pandalanguage$pandac$ASTNode* $tmp3430;
    org$pandalanguage$pandac$ASTNode* returnType3433 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3436;
    org$pandalanguage$pandac$ASTNode* $tmp3437;
    org$pandalanguage$pandac$ASTNode* $tmp3438;
    org$pandalanguage$pandac$ASTNode* $tmp3440;
    org$pandalanguage$pandac$ASTNode* $tmp3443;
    org$pandalanguage$pandac$ASTNode* $tmp3444;
    panda$collections$ImmutableArray* body3445 = NULL;
    panda$collections$ImmutableArray* $tmp3448;
    panda$collections$ImmutableArray* $tmp3449;
    panda$collections$ImmutableArray* $tmp3450;
    org$pandalanguage$pandac$ASTNode* $tmp3452;
    panda$collections$ImmutableArray* $tmp3455;
    panda$collections$ImmutableArray* $tmp3456;
    org$pandalanguage$pandac$parser$Token token3457;
    panda$core$String* tokenText3459 = NULL;
    panda$core$String* $tmp3460;
    panda$core$String* $tmp3461;
    org$pandalanguage$pandac$ASTNode* post3477 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3478;
    org$pandalanguage$pandac$ASTNode* $tmp3479;
    org$pandalanguage$pandac$ASTNode* $tmp3481;
    org$pandalanguage$pandac$ASTNode* $tmp3486;
    org$pandalanguage$pandac$ASTNode* $tmp3487;
    int $tmp3405;
    {
        memset(&kind3406, 0, sizeof(kind3406));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3408, ((panda$core$Int64) { 20 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3409 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3408);
        start3407 = $tmp3409;
        if (((panda$core$Bit) { !start3407.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3410, ((panda$core$Int64) { 21 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3412 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3410, &$s3411);
            start3407 = $tmp3412;
            if (((panda$core$Bit) { !start3407.nonnull }).value) {
            {
                $tmp3414 = NULL;
                $returnValue3413 = $tmp3414;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3414));
                $tmp3405 = 0;
                goto $l3403;
                $l3415:;
                return $returnValue3413;
            }
            }
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3417, ((panda$core$Int64) { 0 }));
            kind3406 = $tmp3417;
        }
        }
        else {
        {
            org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3418, ((panda$core$Int64) { 1 }));
            kind3406 = $tmp3418;
        }
        }
        panda$core$String* $tmp3422 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
        $tmp3421 = $tmp3422;
        $tmp3420 = $tmp3421;
        name3419 = $tmp3420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3421));
        if (((panda$core$Bit) { name3419 == NULL }).value) {
        {
            $tmp3423 = NULL;
            $returnValue3413 = $tmp3423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3423));
            $tmp3405 = 1;
            goto $l3403;
            $l3424:;
            return $returnValue3413;
        }
        }
        panda$collections$ImmutableArray* $tmp3429 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3428 = $tmp3429;
        $tmp3427 = $tmp3428;
        params3426 = $tmp3427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3428));
        if (((panda$core$Bit) { params3426 == NULL }).value) {
        {
            $tmp3430 = NULL;
            $returnValue3413 = $tmp3430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3430));
            $tmp3405 = 2;
            goto $l3403;
            $l3431:;
            return $returnValue3413;
        }
        }
        memset(&returnType3433, 0, sizeof(returnType3433));
        org$pandalanguage$pandac$parser$Token $tmp3434 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3434.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp3435.value) {
        {
            {
                $tmp3436 = returnType3433;
                org$pandalanguage$pandac$ASTNode* $tmp3439 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3438 = $tmp3439;
                $tmp3437 = $tmp3438;
                returnType3433 = $tmp3437;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3437));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3436));
            }
            if (((panda$core$Bit) { returnType3433 == NULL }).value) {
            {
                $tmp3440 = NULL;
                $returnValue3413 = $tmp3440;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3440));
                $tmp3405 = 3;
                goto $l3403;
                $l3441:;
                return $returnValue3413;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3443 = returnType3433;
                $tmp3444 = NULL;
                returnType3433 = $tmp3444;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3444));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3443));
            }
        }
        }
        memset(&body3445, 0, sizeof(body3445));
        org$pandalanguage$pandac$parser$Token $tmp3446 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp3447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3446.kind.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp3447.value) {
        {
            {
                $tmp3448 = body3445;
                panda$collections$ImmutableArray* $tmp3451 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp3450 = $tmp3451;
                $tmp3449 = $tmp3450;
                body3445 = $tmp3449;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3449));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3450));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3448));
            }
            if (((panda$core$Bit) { body3445 == NULL }).value) {
            {
                $tmp3452 = NULL;
                $returnValue3413 = $tmp3452;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3452));
                $tmp3405 = 4;
                goto $l3403;
                $l3453:;
                return $returnValue3413;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3455 = body3445;
                $tmp3456 = NULL;
                body3445 = $tmp3456;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3455));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3458 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3457 = $tmp3458;
        panda$core$String* $tmp3462 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3457);
        $tmp3461 = $tmp3462;
        $tmp3460 = $tmp3461;
        tokenText3459 = $tmp3460;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3461));
        panda$core$Bit $tmp3464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3457.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3463 = $tmp3464.value;
        if (!$tmp3463) goto $l3465;
        panda$core$Bit $tmp3468 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3459, &$s3467);
        bool $tmp3466 = $tmp3468.value;
        if ($tmp3466) goto $l3469;
        panda$core$Bit $tmp3471 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3459, &$s3470);
        $tmp3466 = $tmp3471.value;
        $l3469:;
        panda$core$Bit $tmp3472 = { $tmp3466 };
        $tmp3463 = $tmp3472.value;
        $l3465:;
        panda$core$Bit $tmp3473 = { $tmp3463 };
        if ($tmp3473.value) {
        {
            int $tmp3476;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3480 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3479 = $tmp3480;
                $tmp3478 = $tmp3479;
                post3477 = $tmp3478;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3478));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3479));
                if (((panda$core$Bit) { post3477 == NULL }).value) {
                {
                    $tmp3481 = NULL;
                    $returnValue3413 = $tmp3481;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3481));
                    $tmp3476 = 0;
                    goto $l3474;
                    $l3482:;
                    $tmp3405 = 5;
                    goto $l3403;
                    $l3483:;
                    return $returnValue3413;
                }
                }
            }
            $tmp3476 = -1;
            goto $l3474;
            $l3474:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3477));
            post3477 = NULL;
            switch ($tmp3476) {
                case -1: goto $l3485;
                case 0: goto $l3482;
            }
            $l3485:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3488 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3488, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3407.value).position, p_doccomment, p_annotations, kind3406, name3419, params3426, returnType3433, body3445);
        $tmp3487 = $tmp3488;
        $tmp3486 = $tmp3487;
        $returnValue3413 = $tmp3486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3487));
        $tmp3405 = 6;
        goto $l3403;
        $l3489:;
        return $returnValue3413;
    }
    $l3403:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name3419));
    name3419 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3426));
    params3426 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType3433));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body3445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3459));
    tokenText3459 = NULL;
    switch ($tmp3405) {
        case 5: goto $l3483;
        case 2: goto $l3431;
        case 4: goto $l3453;
        case 0: goto $l3415;
        case 3: goto $l3441;
        case 6: goto $l3489;
        case 1: goto $l3424;
    }
    $l3491:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3495;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3496;
    org$pandalanguage$pandac$ASTNode* $returnValue3499;
    org$pandalanguage$pandac$ASTNode* $tmp3500;
    panda$collections$ImmutableArray* params3503 = NULL;
    panda$collections$ImmutableArray* $tmp3504;
    panda$collections$ImmutableArray* $tmp3505;
    org$pandalanguage$pandac$ASTNode* $tmp3507;
    panda$collections$ImmutableArray* b3510 = NULL;
    panda$collections$ImmutableArray* $tmp3511;
    panda$collections$ImmutableArray* $tmp3512;
    org$pandalanguage$pandac$ASTNode* $tmp3514;
    org$pandalanguage$pandac$parser$Token token3517;
    panda$core$String* tokenText3519 = NULL;
    panda$core$String* $tmp3520;
    panda$core$String* $tmp3521;
    org$pandalanguage$pandac$ASTNode* post3537 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3538;
    org$pandalanguage$pandac$ASTNode* $tmp3539;
    org$pandalanguage$pandac$ASTNode* $tmp3541;
    org$pandalanguage$pandac$ASTNode* $tmp3546;
    org$pandalanguage$pandac$ASTNode* $tmp3547;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp3549;
    int $tmp3494;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3496, ((panda$core$Int64) { 22 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3498 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3496, &$s3497);
        start3495 = $tmp3498;
        if (((panda$core$Bit) { !start3495.nonnull }).value) {
        {
            $tmp3500 = NULL;
            $returnValue3499 = $tmp3500;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3500));
            $tmp3494 = 0;
            goto $l3492;
            $l3501:;
            return $returnValue3499;
        }
        }
        panda$collections$ImmutableArray* $tmp3506 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3505 = $tmp3506;
        $tmp3504 = $tmp3505;
        params3503 = $tmp3504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3504));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3505));
        if (((panda$core$Bit) { params3503 == NULL }).value) {
        {
            $tmp3507 = NULL;
            $returnValue3499 = $tmp3507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3507));
            $tmp3494 = 1;
            goto $l3492;
            $l3508:;
            return $returnValue3499;
        }
        }
        panda$collections$ImmutableArray* $tmp3513 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
        $tmp3512 = $tmp3513;
        $tmp3511 = $tmp3512;
        b3510 = $tmp3511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3512));
        if (((panda$core$Bit) { b3510 == NULL }).value) {
        {
            $tmp3514 = NULL;
            $returnValue3499 = $tmp3514;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3514));
            $tmp3494 = 2;
            goto $l3492;
            $l3515:;
            return $returnValue3499;
        }
        }
        org$pandalanguage$pandac$parser$Token $tmp3518 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token3517 = $tmp3518;
        panda$core$String* $tmp3522 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token3517);
        $tmp3521 = $tmp3522;
        $tmp3520 = $tmp3521;
        tokenText3519 = $tmp3520;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3521));
        panda$core$Bit $tmp3524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token3517.kind.$rawValue, ((panda$core$Int64) { 13 }));
        bool $tmp3523 = $tmp3524.value;
        if (!$tmp3523) goto $l3525;
        panda$core$Bit $tmp3528 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3519, &$s3527);
        bool $tmp3526 = $tmp3528.value;
        if ($tmp3526) goto $l3529;
        panda$core$Bit $tmp3531 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText3519, &$s3530);
        $tmp3526 = $tmp3531.value;
        $l3529:;
        panda$core$Bit $tmp3532 = { $tmp3526 };
        $tmp3523 = $tmp3532.value;
        $l3525:;
        panda$core$Bit $tmp3533 = { $tmp3523 };
        if ($tmp3533.value) {
        {
            int $tmp3536;
            {
                org$pandalanguage$pandac$ASTNode* $tmp3540 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3539 = $tmp3540;
                $tmp3538 = $tmp3539;
                post3537 = $tmp3538;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3538));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3539));
                if (((panda$core$Bit) { post3537 == NULL }).value) {
                {
                    $tmp3541 = NULL;
                    $returnValue3499 = $tmp3541;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3541));
                    $tmp3536 = 0;
                    goto $l3534;
                    $l3542:;
                    $tmp3494 = 3;
                    goto $l3492;
                    $l3543:;
                    return $returnValue3499;
                }
                }
            }
            $tmp3536 = -1;
            goto $l3534;
            $l3534:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post3537));
            post3537 = NULL;
            switch ($tmp3536) {
                case 0: goto $l3542;
                case -1: goto $l3545;
            }
            $l3545:;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3548 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp3549, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3548, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start3495.value).position, p_doccomment, p_annotations, $tmp3549, &$s3550, params3503, NULL, b3510);
        $tmp3547 = $tmp3548;
        $tmp3546 = $tmp3547;
        $returnValue3499 = $tmp3546;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3547));
        $tmp3494 = 4;
        goto $l3492;
        $l3551:;
        return $returnValue3499;
    }
    $l3492:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params3503));
    params3503 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b3510));
    b3510 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText3519));
    tokenText3519 = NULL;
    switch ($tmp3494) {
        case 3: goto $l3543;
        case 2: goto $l3515;
        case 4: goto $l3551;
        case 0: goto $l3501;
        case 1: goto $l3508;
    }
    $l3553:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl3557 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3558;
    org$pandalanguage$pandac$ASTNode* $tmp3559;
    org$pandalanguage$pandac$ASTNode* $returnValue3561;
    org$pandalanguage$pandac$ASTNode* $tmp3562;
    org$pandalanguage$pandac$ASTNode* $tmp3565;
    org$pandalanguage$pandac$ASTNode* $tmp3566;
    int $tmp3556;
    {
        org$pandalanguage$pandac$ASTNode* $tmp3560 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        $tmp3559 = $tmp3560;
        $tmp3558 = $tmp3559;
        decl3557 = $tmp3558;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3559));
        if (((panda$core$Bit) { decl3557 == NULL }).value) {
        {
            $tmp3562 = NULL;
            $returnValue3561 = $tmp3562;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3562));
            $tmp3556 = 0;
            goto $l3554;
            $l3563:;
            return $returnValue3561;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3567 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$Position $tmp3569 = (($fn3568) decl3557->$class->vtable[2])(decl3557);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp3567, ((panda$core$Int64) { 16 }), $tmp3569, p_doccomment, p_annotations, decl3557);
        $tmp3566 = $tmp3567;
        $tmp3565 = $tmp3566;
        $returnValue3561 = $tmp3565;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3566));
        $tmp3556 = 1;
        goto $l3554;
        $l3570:;
        return $returnValue3561;
    }
    $l3554:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3557));
    decl3557 = NULL;
    switch ($tmp3556) {
        case 1: goto $l3570;
        case 0: goto $l3563;
    }
    $l3572:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name3576;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3577;
    org$pandalanguage$pandac$ASTNode* $returnValue3580;
    org$pandalanguage$pandac$ASTNode* $tmp3581;
    panda$collections$Array* fields3584 = NULL;
    panda$collections$Array* $tmp3585;
    panda$collections$Array* $tmp3586;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3588;
    org$pandalanguage$pandac$ASTNode* field3595 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3596;
    org$pandalanguage$pandac$ASTNode* $tmp3597;
    org$pandalanguage$pandac$ASTNode* $tmp3599;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3606;
    org$pandalanguage$pandac$ASTNode* $tmp3608;
    org$pandalanguage$pandac$ASTNode* $tmp3609;
    org$pandalanguage$pandac$ASTNode* $tmp3610;
    org$pandalanguage$pandac$ASTNode* $tmp3612;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3617;
    org$pandalanguage$pandac$ASTNode* $tmp3620;
    org$pandalanguage$pandac$ASTNode* $tmp3623;
    org$pandalanguage$pandac$ASTNode* $tmp3624;
    panda$core$String* $tmp3626;
    panda$collections$ImmutableArray* $tmp3628;
    int $tmp3575;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3577, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3579 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3577, &$s3578);
        name3576 = $tmp3579;
        if (((panda$core$Bit) { !name3576.nonnull }).value) {
        {
            $tmp3581 = NULL;
            $returnValue3580 = $tmp3581;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3581));
            $tmp3575 = 0;
            goto $l3573;
            $l3582:;
            return $returnValue3580;
        }
        }
        panda$collections$Array* $tmp3587 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3587);
        $tmp3586 = $tmp3587;
        $tmp3585 = $tmp3586;
        fields3584 = $tmp3585;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3586));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3588, ((panda$core$Int64) { 103 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3589 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3588);
        if (((panda$core$Bit) { $tmp3589.nonnull }).value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3590 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            panda$core$Bit $tmp3591 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3590.kind.$rawValue, ((panda$core$Int64) { 104 }));
            if ($tmp3591.value) {
            {
                int $tmp3594;
                {
                    org$pandalanguage$pandac$ASTNode* $tmp3598 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    $tmp3597 = $tmp3598;
                    $tmp3596 = $tmp3597;
                    field3595 = $tmp3596;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3596));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3597));
                    if (((panda$core$Bit) { field3595 == NULL }).value) {
                    {
                        $tmp3599 = NULL;
                        $returnValue3580 = $tmp3599;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3599));
                        $tmp3594 = 0;
                        goto $l3592;
                        $l3600:;
                        $tmp3575 = 1;
                        goto $l3573;
                        $l3601:;
                        return $returnValue3580;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(fields3584, ((panda$core$Object*) field3595));
                    $l3603:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3606, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp3607 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3606);
                    bool $tmp3605 = ((panda$core$Bit) { $tmp3607.nonnull }).value;
                    if (!$tmp3605) goto $l3604;
                    {
                        {
                            $tmp3608 = field3595;
                            org$pandalanguage$pandac$ASTNode* $tmp3611 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            $tmp3610 = $tmp3611;
                            $tmp3609 = $tmp3610;
                            field3595 = $tmp3609;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3609));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3610));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3608));
                        }
                        if (((panda$core$Bit) { field3595 == NULL }).value) {
                        {
                            $tmp3612 = NULL;
                            $returnValue3580 = $tmp3612;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3612));
                            $tmp3594 = 1;
                            goto $l3592;
                            $l3613:;
                            $tmp3575 = 2;
                            goto $l3573;
                            $l3614:;
                            return $returnValue3580;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(fields3584, ((panda$core$Object*) field3595));
                    }
                    goto $l3603;
                    $l3604:;
                }
                $tmp3594 = -1;
                goto $l3592;
                $l3592:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field3595));
                field3595 = NULL;
                switch ($tmp3594) {
                    case 0: goto $l3600;
                    case 1: goto $l3613;
                    case -1: goto $l3616;
                }
                $l3616:;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3617, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp3619 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3617, &$s3618);
            if (((panda$core$Bit) { !$tmp3619.nonnull }).value) {
            {
                $tmp3620 = NULL;
                $returnValue3580 = $tmp3620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3620));
                $tmp3575 = 3;
                goto $l3573;
                $l3621:;
                return $returnValue3580;
            }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp3625 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$core$String* $tmp3627 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3576.value));
        $tmp3626 = $tmp3627;
        panda$collections$ImmutableArray* $tmp3629 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields3584);
        $tmp3628 = $tmp3629;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp3625, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) name3576.value).position, p_doccomment, $tmp3626, $tmp3628);
        $tmp3624 = $tmp3625;
        $tmp3623 = $tmp3624;
        $returnValue3580 = $tmp3623;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3626));
        $tmp3575 = 4;
        goto $l3573;
        $l3630:;
        return $returnValue3580;
    }
    $l3573:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields3584));
    fields3584 = NULL;
    switch ($tmp3575) {
        case 1: goto $l3601;
        case 2: goto $l3614;
        case 3: goto $l3621;
        case 0: goto $l3582;
        case 4: goto $l3630;
    }
    $l3632:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start3636;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3637;
    org$pandalanguage$pandac$ASTNode* $returnValue3640;
    org$pandalanguage$pandac$ASTNode* $tmp3641;
    org$pandalanguage$pandac$parser$Token$nullable name3644;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3645;
    org$pandalanguage$pandac$ASTNode* $tmp3648;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3651;
    org$pandalanguage$pandac$ASTNode* $tmp3654;
    panda$collections$Array* members3657 = NULL;
    panda$collections$Array* $tmp3658;
    panda$collections$Array* $tmp3659;
    org$pandalanguage$pandac$ASTNode* dc3661 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3662;
    org$pandalanguage$pandac$parser$Token next3665;
    org$pandalanguage$pandac$parser$Token$Kind $match$1945_133667;
    panda$core$String* $tmp3706;
    panda$core$String* $tmp3707;
    panda$core$String* $tmp3709;
    org$pandalanguage$pandac$ASTNode* $tmp3714;
    org$pandalanguage$pandac$ASTNode* $tmp3715;
    org$pandalanguage$pandac$ASTNode* $tmp3716;
    org$pandalanguage$pandac$ASTNode* c3722 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3723;
    org$pandalanguage$pandac$ASTNode* $tmp3724;
    org$pandalanguage$pandac$ASTNode* $tmp3726;
    org$pandalanguage$pandac$ASTNode* $tmp3730;
    org$pandalanguage$pandac$ASTNode* $tmp3731;
    panda$collections$ImmutableArray* a3733 = NULL;
    panda$collections$ImmutableArray* $tmp3734;
    panda$collections$ImmutableArray* $tmp3735;
    org$pandalanguage$pandac$parser$Token next3739;
    org$pandalanguage$pandac$parser$Token$Kind $match$1969_133741;
    panda$core$String* $tmp3745;
    panda$core$String* $tmp3746;
    panda$core$String* $tmp3748;
    org$pandalanguage$pandac$ASTNode* $tmp3753;
    panda$collections$ImmutableArray* $tmp3756;
    panda$collections$ImmutableArray* $tmp3757;
    panda$collections$ImmutableArray* $tmp3758;
    panda$core$String* $tmp3766;
    panda$core$String* $tmp3767;
    panda$core$String* $tmp3769;
    org$pandalanguage$pandac$ASTNode* $tmp3774;
    org$pandalanguage$pandac$ASTNode* $tmp3777;
    org$pandalanguage$pandac$ASTNode* $tmp3778;
    org$pandalanguage$pandac$ASTNode* $tmp3779;
    org$pandalanguage$pandac$ASTNode* decl3785 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3786;
    org$pandalanguage$pandac$ASTNode* $tmp3787;
    org$pandalanguage$pandac$ASTNode* $tmp3789;
    org$pandalanguage$pandac$ASTNode* $tmp3793;
    org$pandalanguage$pandac$ASTNode* $tmp3794;
    panda$collections$ImmutableArray* $tmp3795;
    panda$collections$ImmutableArray* $tmp3796;
    panda$collections$ImmutableArray* $tmp3797;
    org$pandalanguage$pandac$ASTNode* decl3804 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3805;
    org$pandalanguage$pandac$ASTNode* $tmp3806;
    org$pandalanguage$pandac$ASTNode* $tmp3808;
    org$pandalanguage$pandac$ASTNode* $tmp3812;
    org$pandalanguage$pandac$ASTNode* $tmp3813;
    panda$collections$ImmutableArray* $tmp3814;
    panda$collections$ImmutableArray* $tmp3815;
    panda$collections$ImmutableArray* $tmp3816;
    org$pandalanguage$pandac$ASTNode* decl3823 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3824;
    org$pandalanguage$pandac$ASTNode* $tmp3825;
    org$pandalanguage$pandac$ASTNode* $tmp3827;
    org$pandalanguage$pandac$ASTNode* $tmp3831;
    org$pandalanguage$pandac$ASTNode* $tmp3832;
    panda$collections$ImmutableArray* $tmp3833;
    panda$collections$ImmutableArray* $tmp3834;
    panda$collections$ImmutableArray* $tmp3835;
    org$pandalanguage$pandac$ASTNode* decl3846 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3847;
    org$pandalanguage$pandac$ASTNode* $tmp3848;
    org$pandalanguage$pandac$ASTNode* $tmp3850;
    org$pandalanguage$pandac$ASTNode* $tmp3854;
    org$pandalanguage$pandac$ASTNode* $tmp3855;
    panda$collections$ImmutableArray* $tmp3856;
    panda$collections$ImmutableArray* $tmp3857;
    panda$collections$ImmutableArray* $tmp3858;
    org$pandalanguage$pandac$ASTNode* decl3877 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3878;
    org$pandalanguage$pandac$ASTNode* $tmp3879;
    org$pandalanguage$pandac$ASTNode* $tmp3881;
    org$pandalanguage$pandac$ASTNode* $tmp3885;
    org$pandalanguage$pandac$ASTNode* $tmp3886;
    panda$collections$ImmutableArray* $tmp3887;
    panda$collections$ImmutableArray* $tmp3888;
    panda$collections$ImmutableArray* $tmp3889;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3893;
    panda$core$String* $tmp3895;
    panda$core$String* $tmp3896;
    panda$core$String* $tmp3898;
    org$pandalanguage$pandac$ASTNode* $tmp3903;
    org$pandalanguage$pandac$ASTNode* $tmp3906;
    org$pandalanguage$pandac$ASTNode* $tmp3907;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp3909;
    panda$core$String* $tmp3910;
    panda$collections$ImmutableArray* $tmp3912;
    int $tmp3635;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3637, ((panda$core$Int64) { 19 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3639 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3637, &$s3638);
        start3636 = $tmp3639;
        if (((panda$core$Bit) { !start3636.nonnull }).value) {
        {
            $tmp3641 = NULL;
            $returnValue3640 = $tmp3641;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3641));
            $tmp3635 = 0;
            goto $l3633;
            $l3642:;
            return $returnValue3640;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3645, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3647 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3645, &$s3646);
        name3644 = $tmp3647;
        if (((panda$core$Bit) { !name3644.nonnull }).value) {
        {
            $tmp3648 = NULL;
            $returnValue3640 = $tmp3648;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3648));
            $tmp3635 = 1;
            goto $l3633;
            $l3649:;
            return $returnValue3640;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3651, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp3653 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3651, &$s3652);
        if (((panda$core$Bit) { !$tmp3653.nonnull }).value) {
        {
            $tmp3654 = NULL;
            $returnValue3640 = $tmp3654;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3654));
            $tmp3635 = 2;
            goto $l3633;
            $l3655:;
            return $returnValue3640;
        }
        }
        panda$collections$Array* $tmp3660 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp3660);
        $tmp3659 = $tmp3660;
        $tmp3658 = $tmp3659;
        members3657 = $tmp3658;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3658));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3659));
        $tmp3662 = NULL;
        dc3661 = $tmp3662;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3662));
        $l3663:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3666 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3665 = $tmp3666;
            {
                $match$1945_133667 = next3665.kind;
                panda$core$Bit $tmp3677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 17 }));
                bool $tmp3676 = $tmp3677.value;
                if ($tmp3676) goto $l3678;
                panda$core$Bit $tmp3679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 18 }));
                $tmp3676 = $tmp3679.value;
                $l3678:;
                panda$core$Bit $tmp3680 = { $tmp3676 };
                bool $tmp3675 = $tmp3680.value;
                if ($tmp3675) goto $l3681;
                panda$core$Bit $tmp3682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 19 }));
                $tmp3675 = $tmp3682.value;
                $l3681:;
                panda$core$Bit $tmp3683 = { $tmp3675 };
                bool $tmp3674 = $tmp3683.value;
                if ($tmp3674) goto $l3684;
                panda$core$Bit $tmp3685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 21 }));
                $tmp3674 = $tmp3685.value;
                $l3684:;
                panda$core$Bit $tmp3686 = { $tmp3674 };
                bool $tmp3673 = $tmp3686.value;
                if ($tmp3673) goto $l3687;
                panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3673 = $tmp3688.value;
                $l3687:;
                panda$core$Bit $tmp3689 = { $tmp3673 };
                bool $tmp3672 = $tmp3689.value;
                if ($tmp3672) goto $l3690;
                panda$core$Bit $tmp3691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 13 }));
                $tmp3672 = $tmp3691.value;
                $l3690:;
                panda$core$Bit $tmp3692 = { $tmp3672 };
                bool $tmp3671 = $tmp3692.value;
                if ($tmp3671) goto $l3693;
                panda$core$Bit $tmp3694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 23 }));
                $tmp3671 = $tmp3694.value;
                $l3693:;
                panda$core$Bit $tmp3695 = { $tmp3671 };
                bool $tmp3670 = $tmp3695.value;
                if ($tmp3670) goto $l3696;
                panda$core$Bit $tmp3697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3670 = $tmp3697.value;
                $l3696:;
                panda$core$Bit $tmp3698 = { $tmp3670 };
                bool $tmp3669 = $tmp3698.value;
                if ($tmp3669) goto $l3699;
                panda$core$Bit $tmp3700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3669 = $tmp3700.value;
                $l3699:;
                panda$core$Bit $tmp3701 = { $tmp3669 };
                bool $tmp3668 = $tmp3701.value;
                if ($tmp3668) goto $l3702;
                panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3668 = $tmp3703.value;
                $l3702:;
                panda$core$Bit $tmp3704 = { $tmp3668 };
                if ($tmp3704.value) {
                {
                    goto $l3664;
                }
                }
                else {
                panda$core$Bit $tmp3705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3705.value) {
                {
                    if (((panda$core$Bit) { dc3661 != NULL }).value) {
                    {
                        panda$core$String* $tmp3710 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3665);
                        $tmp3709 = $tmp3710;
                        panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3708, $tmp3709);
                        $tmp3707 = $tmp3711;
                        panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, &$s3712);
                        $tmp3706 = $tmp3713;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3665, $tmp3706);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3706));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3707));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3709));
                    }
                    }
                    {
                        $tmp3714 = dc3661;
                        org$pandalanguage$pandac$ASTNode* $tmp3717 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3716 = $tmp3717;
                        $tmp3715 = $tmp3716;
                        dc3661 = $tmp3715;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3715));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3716));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3714));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1945_133667.$rawValue, ((panda$core$Int64) { 48 }));
                if ($tmp3718.value) {
                {
                    int $tmp3721;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3725 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3661);
                        $tmp3724 = $tmp3725;
                        $tmp3723 = $tmp3724;
                        c3722 = $tmp3723;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3723));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3724));
                        if (((panda$core$Bit) { c3722 == NULL }).value) {
                        {
                            $tmp3726 = NULL;
                            $returnValue3640 = $tmp3726;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3726));
                            $tmp3721 = 0;
                            goto $l3719;
                            $l3727:;
                            $tmp3635 = 3;
                            goto $l3633;
                            $l3728:;
                            return $returnValue3640;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3657, ((panda$core$Object*) c3722));
                        {
                            $tmp3730 = dc3661;
                            $tmp3731 = NULL;
                            dc3661 = $tmp3731;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3731));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3730));
                        }
                    }
                    $tmp3721 = -1;
                    goto $l3719;
                    $l3719:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c3722));
                    c3722 = NULL;
                    switch ($tmp3721) {
                        case 0: goto $l3727;
                        case -1: goto $l3732;
                    }
                    $l3732:;
                }
                }
                else {
                {
                    goto $l3664;
                }
                }
                }
                }
            }
        }
        }
        $l3664:;
        panda$collections$ImmutableArray* $tmp3736 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp3736);
        $tmp3735 = $tmp3736;
        $tmp3734 = $tmp3735;
        a3733 = $tmp3734;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3735));
        $l3737:;
        while (true) {
        {
            org$pandalanguage$pandac$parser$Token $tmp3740 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next3739 = $tmp3740;
            {
                $match$1969_133741 = next3739.kind;
                panda$core$Bit $tmp3742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp3742.value) {
                {
                    panda$core$Int64 $tmp3743 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3733);
                    panda$core$Bit $tmp3744 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3743, ((panda$core$Int64) { 0 }));
                    if ($tmp3744.value) {
                    {
                        panda$core$String* $tmp3749 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3739);
                        $tmp3748 = $tmp3749;
                        panda$core$String* $tmp3750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3747, $tmp3748);
                        $tmp3746 = $tmp3750;
                        panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3751);
                        $tmp3745 = $tmp3752;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3739, $tmp3745);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3745));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3746));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3748));
                        $tmp3753 = NULL;
                        $returnValue3640 = $tmp3753;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3753));
                        $tmp3635 = 4;
                        goto $l3633;
                        $l3754:;
                        return $returnValue3640;
                    }
                    }
                    {
                        $tmp3756 = a3733;
                        panda$collections$ImmutableArray* $tmp3759 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                        $tmp3758 = $tmp3759;
                        $tmp3757 = $tmp3758;
                        a3733 = $tmp3757;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3757));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3758));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3756));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 11 }));
                if ($tmp3760.value) {
                {
                    bool $tmp3761 = ((panda$core$Bit) { dc3661 != NULL }).value;
                    if ($tmp3761) goto $l3762;
                    panda$core$Int64 $tmp3763 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a3733);
                    panda$core$Bit $tmp3764 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3763, ((panda$core$Int64) { 0 }));
                    $tmp3761 = $tmp3764.value;
                    $l3762:;
                    panda$core$Bit $tmp3765 = { $tmp3761 };
                    if ($tmp3765.value) {
                    {
                        panda$core$String* $tmp3770 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3739);
                        $tmp3769 = $tmp3770;
                        panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3768, $tmp3769);
                        $tmp3767 = $tmp3771;
                        panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, &$s3772);
                        $tmp3766 = $tmp3773;
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3739, $tmp3766);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3766));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3767));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3769));
                        $tmp3774 = NULL;
                        $returnValue3640 = $tmp3774;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3774));
                        $tmp3635 = 5;
                        goto $l3633;
                        $l3775:;
                        return $returnValue3640;
                    }
                    }
                    {
                        $tmp3777 = dc3661;
                        org$pandalanguage$pandac$ASTNode* $tmp3780 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp3779 = $tmp3780;
                        $tmp3778 = $tmp3779;
                        dc3661 = $tmp3778;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3778));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3779));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3777));
                    }
                }
                }
                else {
                panda$core$Bit $tmp3781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 17 }));
                if ($tmp3781.value) {
                {
                    int $tmp3784;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3788 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3661, a3733);
                        $tmp3787 = $tmp3788;
                        $tmp3786 = $tmp3787;
                        decl3785 = $tmp3786;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3786));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3787));
                        if (((panda$core$Bit) { decl3785 == NULL }).value) {
                        {
                            $tmp3789 = NULL;
                            $returnValue3640 = $tmp3789;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3789));
                            $tmp3784 = 0;
                            goto $l3782;
                            $l3790:;
                            $tmp3635 = 6;
                            goto $l3633;
                            $l3791:;
                            return $returnValue3640;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3657, ((panda$core$Object*) decl3785));
                        {
                            $tmp3793 = dc3661;
                            $tmp3794 = NULL;
                            dc3661 = $tmp3794;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3794));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3793));
                        }
                        {
                            $tmp3795 = a3733;
                            panda$collections$ImmutableArray* $tmp3798 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3798);
                            $tmp3797 = $tmp3798;
                            $tmp3796 = $tmp3797;
                            a3733 = $tmp3796;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3796));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3797));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3795));
                        }
                    }
                    $tmp3784 = -1;
                    goto $l3782;
                    $l3782:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3785));
                    decl3785 = NULL;
                    switch ($tmp3784) {
                        case -1: goto $l3799;
                        case 0: goto $l3790;
                    }
                    $l3799:;
                }
                }
                else {
                panda$core$Bit $tmp3800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 18 }));
                if ($tmp3800.value) {
                {
                    int $tmp3803;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3807 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3661, a3733);
                        $tmp3806 = $tmp3807;
                        $tmp3805 = $tmp3806;
                        decl3804 = $tmp3805;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3805));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3806));
                        if (((panda$core$Bit) { decl3804 == NULL }).value) {
                        {
                            $tmp3808 = NULL;
                            $returnValue3640 = $tmp3808;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3808));
                            $tmp3803 = 0;
                            goto $l3801;
                            $l3809:;
                            $tmp3635 = 7;
                            goto $l3633;
                            $l3810:;
                            return $returnValue3640;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3657, ((panda$core$Object*) decl3804));
                        {
                            $tmp3812 = dc3661;
                            $tmp3813 = NULL;
                            dc3661 = $tmp3813;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3813));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3812));
                        }
                        {
                            $tmp3814 = a3733;
                            panda$collections$ImmutableArray* $tmp3817 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3817);
                            $tmp3816 = $tmp3817;
                            $tmp3815 = $tmp3816;
                            a3733 = $tmp3815;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3815));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3816));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3814));
                        }
                    }
                    $tmp3803 = -1;
                    goto $l3801;
                    $l3801:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3804));
                    decl3804 = NULL;
                    switch ($tmp3803) {
                        case 0: goto $l3809;
                        case -1: goto $l3818;
                    }
                    $l3818:;
                }
                }
                else {
                panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 19 }));
                if ($tmp3819.value) {
                {
                    int $tmp3822;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3826 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3661, a3733);
                        $tmp3825 = $tmp3826;
                        $tmp3824 = $tmp3825;
                        decl3823 = $tmp3824;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3824));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3825));
                        if (((panda$core$Bit) { decl3823 == NULL }).value) {
                        {
                            $tmp3827 = NULL;
                            $returnValue3640 = $tmp3827;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3827));
                            $tmp3822 = 0;
                            goto $l3820;
                            $l3828:;
                            $tmp3635 = 8;
                            goto $l3633;
                            $l3829:;
                            return $returnValue3640;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3657, ((panda$core$Object*) decl3823));
                        {
                            $tmp3831 = dc3661;
                            $tmp3832 = NULL;
                            dc3661 = $tmp3832;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3832));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3831));
                        }
                        {
                            $tmp3833 = a3733;
                            panda$collections$ImmutableArray* $tmp3836 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3836);
                            $tmp3835 = $tmp3836;
                            $tmp3834 = $tmp3835;
                            a3733 = $tmp3834;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3834));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3835));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3833));
                        }
                    }
                    $tmp3822 = -1;
                    goto $l3820;
                    $l3820:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3823));
                    decl3823 = NULL;
                    switch ($tmp3822) {
                        case -1: goto $l3837;
                        case 0: goto $l3828;
                    }
                    $l3837:;
                }
                }
                else {
                panda$core$Bit $tmp3839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 21 }));
                bool $tmp3838 = $tmp3839.value;
                if ($tmp3838) goto $l3840;
                panda$core$Bit $tmp3841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 20 }));
                $tmp3838 = $tmp3841.value;
                $l3840:;
                panda$core$Bit $tmp3842 = { $tmp3838 };
                if ($tmp3842.value) {
                {
                    int $tmp3845;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3849 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3661, a3733);
                        $tmp3848 = $tmp3849;
                        $tmp3847 = $tmp3848;
                        decl3846 = $tmp3847;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3847));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3848));
                        if (((panda$core$Bit) { decl3846 == NULL }).value) {
                        {
                            $tmp3850 = NULL;
                            $returnValue3640 = $tmp3850;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3850));
                            $tmp3845 = 0;
                            goto $l3843;
                            $l3851:;
                            $tmp3635 = 9;
                            goto $l3633;
                            $l3852:;
                            return $returnValue3640;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3657, ((panda$core$Object*) decl3846));
                        {
                            $tmp3854 = dc3661;
                            $tmp3855 = NULL;
                            dc3661 = $tmp3855;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3855));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3854));
                        }
                        {
                            $tmp3856 = a3733;
                            panda$collections$ImmutableArray* $tmp3859 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3859);
                            $tmp3858 = $tmp3859;
                            $tmp3857 = $tmp3858;
                            a3733 = $tmp3857;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3857));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3858));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3856));
                        }
                    }
                    $tmp3845 = -1;
                    goto $l3843;
                    $l3843:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3846));
                    decl3846 = NULL;
                    switch ($tmp3845) {
                        case -1: goto $l3860;
                        case 0: goto $l3851;
                    }
                    $l3860:;
                }
                }
                else {
                panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 23 }));
                bool $tmp3863 = $tmp3864.value;
                if ($tmp3863) goto $l3865;
                panda$core$Bit $tmp3866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 24 }));
                $tmp3863 = $tmp3866.value;
                $l3865:;
                panda$core$Bit $tmp3867 = { $tmp3863 };
                bool $tmp3862 = $tmp3867.value;
                if ($tmp3862) goto $l3868;
                panda$core$Bit $tmp3869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 25 }));
                $tmp3862 = $tmp3869.value;
                $l3868:;
                panda$core$Bit $tmp3870 = { $tmp3862 };
                bool $tmp3861 = $tmp3870.value;
                if ($tmp3861) goto $l3871;
                panda$core$Bit $tmp3872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 26 }));
                $tmp3861 = $tmp3872.value;
                $l3871:;
                panda$core$Bit $tmp3873 = { $tmp3861 };
                if ($tmp3873.value) {
                {
                    int $tmp3876;
                    {
                        org$pandalanguage$pandac$ASTNode* $tmp3880 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3661, a3733);
                        $tmp3879 = $tmp3880;
                        $tmp3878 = $tmp3879;
                        decl3877 = $tmp3878;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3878));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3879));
                        if (((panda$core$Bit) { decl3877 == NULL }).value) {
                        {
                            $tmp3881 = NULL;
                            $returnValue3640 = $tmp3881;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3881));
                            $tmp3876 = 0;
                            goto $l3874;
                            $l3882:;
                            $tmp3635 = 10;
                            goto $l3633;
                            $l3883:;
                            return $returnValue3640;
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(members3657, ((panda$core$Object*) decl3877));
                        {
                            $tmp3885 = dc3661;
                            $tmp3886 = NULL;
                            dc3661 = $tmp3886;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3886));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3885));
                        }
                        {
                            $tmp3887 = a3733;
                            panda$collections$ImmutableArray* $tmp3890 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                            panda$collections$ImmutableArray$init($tmp3890);
                            $tmp3889 = $tmp3890;
                            $tmp3888 = $tmp3889;
                            a3733 = $tmp3888;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3888));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3889));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3887));
                        }
                    }
                    $tmp3876 = -1;
                    goto $l3874;
                    $l3874:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl3877));
                    decl3877 = NULL;
                    switch ($tmp3876) {
                        case 0: goto $l3882;
                        case -1: goto $l3891;
                    }
                    $l3891:;
                }
                }
                else {
                panda$core$Bit $tmp3892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1969_133741.$rawValue, ((panda$core$Int64) { 100 }));
                if ($tmp3892.value) {
                {
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3893, ((panda$core$Int64) { 100 }));
                    org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3893, &$s3894);
                    goto $l3738;
                }
                }
                else {
                {
                    panda$core$String* $tmp3899 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next3739);
                    $tmp3898 = $tmp3899;
                    panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3897, $tmp3898);
                    $tmp3896 = $tmp3900;
                    panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3901);
                    $tmp3895 = $tmp3902;
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next3739, $tmp3895);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3895));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3898));
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    $tmp3903 = NULL;
                    $returnValue3640 = $tmp3903;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3903));
                    $tmp3635 = 11;
                    goto $l3633;
                    $l3904:;
                    return $returnValue3640;
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
        $l3738:;
        org$pandalanguage$pandac$ASTNode* $tmp3908 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp3909, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp3911 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name3644.value));
        $tmp3910 = $tmp3911;
        panda$collections$ImmutableArray* $tmp3913 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members3657);
        $tmp3912 = $tmp3913;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp3908, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start3636.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp3909, $tmp3910, NULL, NULL, $tmp3912);
        $tmp3907 = $tmp3908;
        $tmp3906 = $tmp3907;
        $returnValue3640 = $tmp3906;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3906));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3907));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3912));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3910));
        $tmp3635 = 12;
        goto $l3633;
        $l3914:;
        return $returnValue3640;
    }
    $l3633:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members3657));
    members3657 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3661));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3733));
    a3733 = NULL;
    switch ($tmp3635) {
        case 5: goto $l3775;
        case 6: goto $l3791;
        case 7: goto $l3810;
        case 1: goto $l3649;
        case 10: goto $l3883;
        case 9: goto $l3852;
        case 11: goto $l3904;
        case 2: goto $l3655;
        case 8: goto $l3829;
        case 3: goto $l3728;
        case 0: goto $l3642;
        case 4: goto $l3754;
        case 12: goto $l3914;
    }
    $l3916:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start3920;
    org$pandalanguage$pandac$ASTNode* dc3922 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp3924;
    org$pandalanguage$pandac$ASTNode* $tmp3925;
    org$pandalanguage$pandac$ASTNode* $tmp3926;
    org$pandalanguage$pandac$ASTNode* $returnValue3928;
    org$pandalanguage$pandac$ASTNode* $tmp3929;
    org$pandalanguage$pandac$ASTNode* $tmp3932;
    org$pandalanguage$pandac$ASTNode* $tmp3933;
    panda$collections$ImmutableArray* a3934 = NULL;
    panda$collections$ImmutableArray* $tmp3935;
    panda$collections$ImmutableArray* $tmp3936;
    org$pandalanguage$pandac$ASTNode* $tmp3938;
    org$pandalanguage$pandac$parser$Token$Kind $match$2055_93941;
    org$pandalanguage$pandac$ASTNode* $tmp3944;
    org$pandalanguage$pandac$ASTNode* $tmp3945;
    org$pandalanguage$pandac$ASTNode* $tmp3950;
    org$pandalanguage$pandac$ASTNode* $tmp3951;
    org$pandalanguage$pandac$ASTNode* $tmp3956;
    org$pandalanguage$pandac$ASTNode* $tmp3957;
    org$pandalanguage$pandac$ASTNode* $tmp3966;
    org$pandalanguage$pandac$ASTNode* $tmp3967;
    org$pandalanguage$pandac$ASTNode* $tmp3972;
    org$pandalanguage$pandac$ASTNode* $tmp3973;
    org$pandalanguage$pandac$ASTNode* $tmp3990;
    org$pandalanguage$pandac$ASTNode* $tmp3991;
    org$pandalanguage$pandac$parser$Token$Kind $tmp3995;
    org$pandalanguage$pandac$ASTNode* $tmp3997;
    int $tmp3919;
    {
        org$pandalanguage$pandac$parser$Token $tmp3921 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        start3920 = $tmp3921;
        memset(&dc3922, 0, sizeof(dc3922));
        panda$core$Bit $tmp3923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start3920.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp3923.value) {
        {
            {
                $tmp3924 = dc3922;
                org$pandalanguage$pandac$ASTNode* $tmp3927 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp3926 = $tmp3927;
                $tmp3925 = $tmp3926;
                dc3922 = $tmp3925;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3924));
            }
            if (((panda$core$Bit) { dc3922 == NULL }).value) {
            {
                $tmp3929 = NULL;
                $returnValue3928 = $tmp3929;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3929));
                $tmp3919 = 0;
                goto $l3917;
                $l3930:;
                return $returnValue3928;
            }
            }
        }
        }
        else {
        {
            {
                $tmp3932 = dc3922;
                $tmp3933 = NULL;
                dc3922 = $tmp3933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3932));
            }
        }
        }
        panda$collections$ImmutableArray* $tmp3937 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
        $tmp3936 = $tmp3937;
        $tmp3935 = $tmp3936;
        a3934 = $tmp3935;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3935));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3936));
        if (((panda$core$Bit) { a3934 == NULL }).value) {
        {
            $tmp3938 = NULL;
            $returnValue3928 = $tmp3938;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3938));
            $tmp3919 = 1;
            goto $l3917;
            $l3939:;
            return $returnValue3928;
        }
        }
        {
            org$pandalanguage$pandac$parser$Token $tmp3942 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$2055_93941 = $tmp3942.kind;
            panda$core$Bit $tmp3943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3943.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3946 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3922, a3934);
                $tmp3945 = $tmp3946;
                $tmp3944 = $tmp3945;
                $returnValue3928 = $tmp3944;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3945));
                $tmp3919 = 2;
                goto $l3917;
                $l3947:;
                return $returnValue3928;
            }
            }
            else {
            panda$core$Bit $tmp3949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3949.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3952 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3922, a3934);
                $tmp3951 = $tmp3952;
                $tmp3950 = $tmp3951;
                $returnValue3928 = $tmp3950;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3951));
                $tmp3919 = 3;
                goto $l3917;
                $l3953:;
                return $returnValue3928;
            }
            }
            else {
            panda$core$Bit $tmp3955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3955.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3958 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3922, a3934);
                $tmp3957 = $tmp3958;
                $tmp3956 = $tmp3957;
                $returnValue3928 = $tmp3956;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3957));
                $tmp3919 = 4;
                goto $l3917;
                $l3959:;
                return $returnValue3928;
            }
            }
            else {
            panda$core$Bit $tmp3962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp3961 = $tmp3962.value;
            if ($tmp3961) goto $l3963;
            panda$core$Bit $tmp3964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp3961 = $tmp3964.value;
            $l3963:;
            panda$core$Bit $tmp3965 = { $tmp3961 };
            if ($tmp3965.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3968 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3922, a3934);
                $tmp3967 = $tmp3968;
                $tmp3966 = $tmp3967;
                $returnValue3928 = $tmp3966;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3967));
                $tmp3919 = 5;
                goto $l3917;
                $l3969:;
                return $returnValue3928;
            }
            }
            else {
            panda$core$Bit $tmp3971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp3971.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3974 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3922, a3934);
                $tmp3973 = $tmp3974;
                $tmp3972 = $tmp3973;
                $returnValue3928 = $tmp3972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3973));
                $tmp3919 = 6;
                goto $l3917;
                $l3975:;
                return $returnValue3928;
            }
            }
            else {
            panda$core$Bit $tmp3980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp3979 = $tmp3980.value;
            if ($tmp3979) goto $l3981;
            panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp3979 = $tmp3982.value;
            $l3981:;
            panda$core$Bit $tmp3983 = { $tmp3979 };
            bool $tmp3978 = $tmp3983.value;
            if ($tmp3978) goto $l3984;
            panda$core$Bit $tmp3985 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp3978 = $tmp3985.value;
            $l3984:;
            panda$core$Bit $tmp3986 = { $tmp3978 };
            bool $tmp3977 = $tmp3986.value;
            if ($tmp3977) goto $l3987;
            panda$core$Bit $tmp3988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2055_93941.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp3977 = $tmp3988.value;
            $l3987:;
            panda$core$Bit $tmp3989 = { $tmp3977 };
            if ($tmp3989.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp3992 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc3922, a3934);
                $tmp3991 = $tmp3992;
                $tmp3990 = $tmp3991;
                $returnValue3928 = $tmp3990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3991));
                $tmp3919 = 7;
                goto $l3917;
                $l3993:;
                return $returnValue3928;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp3995, ((panda$core$Int64) { 17 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp3995, &$s3996);
                $tmp3997 = NULL;
                $returnValue3928 = $tmp3997;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3997));
                $tmp3919 = 8;
                goto $l3917;
                $l3998:;
                return $returnValue3928;
            }
            }
            }
            }
            }
            }
            }
        }
    }
    $tmp3919 = -1;
    goto $l3917;
    $l3917:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc3922));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a3934));
    a3934 = NULL;
    switch ($tmp3919) {
        case 8: goto $l3998;
        case 4: goto $l3959;
        case 1: goto $l3939;
        case -1: goto $l4000;
        case 5: goto $l3969;
        case 3: goto $l3953;
        case 7: goto $l3993;
        case 6: goto $l3975;
        case 2: goto $l3947;
        case 0: goto $l3930;
    }
    $l4000:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4004;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4005;
    org$pandalanguage$pandac$ASTNode* $returnValue4008;
    org$pandalanguage$pandac$ASTNode* $tmp4009;
    org$pandalanguage$pandac$parser$Token$nullable name4012;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4013;
    org$pandalanguage$pandac$ASTNode* $tmp4016;
    panda$collections$ImmutableArray* generics4019 = NULL;
    panda$collections$ImmutableArray* $tmp4022;
    panda$collections$ImmutableArray* $tmp4023;
    panda$collections$ImmutableArray* $tmp4024;
    org$pandalanguage$pandac$ASTNode* $tmp4026;
    panda$collections$ImmutableArray* $tmp4029;
    panda$collections$ImmutableArray* $tmp4030;
    panda$collections$ImmutableArray* stypes4031 = NULL;
    panda$collections$ImmutableArray* $tmp4034;
    panda$collections$ImmutableArray* $tmp4035;
    panda$collections$ImmutableArray* $tmp4036;
    org$pandalanguage$pandac$ASTNode* $tmp4038;
    panda$collections$ImmutableArray* $tmp4041;
    panda$collections$ImmutableArray* $tmp4042;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4043;
    org$pandalanguage$pandac$ASTNode* $tmp4046;
    panda$collections$Array* members4049 = NULL;
    panda$collections$Array* $tmp4050;
    panda$collections$Array* $tmp4051;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4056;
    org$pandalanguage$pandac$ASTNode* member4061 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4062;
    org$pandalanguage$pandac$ASTNode* $tmp4063;
    org$pandalanguage$pandac$ASTNode* $tmp4065;
    org$pandalanguage$pandac$ASTNode* $tmp4070;
    org$pandalanguage$pandac$ASTNode* $tmp4071;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4073;
    panda$core$String* $tmp4074;
    panda$collections$ImmutableArray* $tmp4076;
    int $tmp4003;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4005, ((panda$core$Int64) { 17 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4007 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4005, &$s4006);
        start4004 = $tmp4007;
        if (((panda$core$Bit) { !start4004.nonnull }).value) {
        {
            $tmp4009 = NULL;
            $returnValue4008 = $tmp4009;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4009));
            $tmp4003 = 0;
            goto $l4001;
            $l4010:;
            return $returnValue4008;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4013, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4015 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4013, &$s4014);
        name4012 = $tmp4015;
        if (((panda$core$Bit) { !name4012.nonnull }).value) {
        {
            $tmp4016 = NULL;
            $returnValue4008 = $tmp4016;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4016));
            $tmp4003 = 1;
            goto $l4001;
            $l4017:;
            return $returnValue4008;
        }
        }
        memset(&generics4019, 0, sizeof(generics4019));
        org$pandalanguage$pandac$parser$Token $tmp4020 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4020.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4021.value) {
        {
            {
                $tmp4022 = generics4019;
                panda$collections$ImmutableArray* $tmp4025 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4024 = $tmp4025;
                $tmp4023 = $tmp4024;
                generics4019 = $tmp4023;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4023));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4024));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4022));
            }
            if (((panda$core$Bit) { generics4019 == NULL }).value) {
            {
                $tmp4026 = NULL;
                $returnValue4008 = $tmp4026;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4026));
                $tmp4003 = 2;
                goto $l4001;
                $l4027:;
                return $returnValue4008;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4029 = generics4019;
                $tmp4030 = NULL;
                generics4019 = $tmp4030;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4030));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4029));
            }
        }
        }
        memset(&stypes4031, 0, sizeof(stypes4031));
        org$pandalanguage$pandac$parser$Token $tmp4032 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4032.kind.$rawValue, ((panda$core$Int64) { 95 }));
        if ($tmp4033.value) {
        {
            {
                $tmp4034 = stypes4031;
                panda$collections$ImmutableArray* $tmp4037 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4036 = $tmp4037;
                $tmp4035 = $tmp4036;
                stypes4031 = $tmp4035;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4035));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4036));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4034));
            }
            if (((panda$core$Bit) { stypes4031 == NULL }).value) {
            {
                $tmp4038 = NULL;
                $returnValue4008 = $tmp4038;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4038));
                $tmp4003 = 3;
                goto $l4001;
                $l4039:;
                return $returnValue4008;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4041 = stypes4031;
                $tmp4042 = NULL;
                stypes4031 = $tmp4042;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4042));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4041));
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4043, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4045 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4043, &$s4044);
        if (((panda$core$Bit) { !$tmp4045.nonnull }).value) {
        {
            $tmp4046 = NULL;
            $returnValue4008 = $tmp4046;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4046));
            $tmp4003 = 4;
            goto $l4001;
            $l4047:;
            return $returnValue4008;
        }
        }
        panda$collections$Array* $tmp4052 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4052);
        $tmp4051 = $tmp4052;
        $tmp4050 = $tmp4051;
        members4049 = $tmp4050;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4051));
        $l4053:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4056, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4057 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4056);
        bool $tmp4055 = ((panda$core$Bit) { !$tmp4057.nonnull }).value;
        if (!$tmp4055) goto $l4054;
        {
            int $tmp4060;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4064 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4063 = $tmp4064;
                $tmp4062 = $tmp4063;
                member4061 = $tmp4062;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4062));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4063));
                if (((panda$core$Bit) { member4061 == NULL }).value) {
                {
                    $tmp4065 = NULL;
                    $returnValue4008 = $tmp4065;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4065));
                    $tmp4060 = 0;
                    goto $l4058;
                    $l4066:;
                    $tmp4003 = 5;
                    goto $l4001;
                    $l4067:;
                    return $returnValue4008;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4049, ((panda$core$Object*) member4061));
            }
            $tmp4060 = -1;
            goto $l4058;
            $l4058:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4061));
            member4061 = NULL;
            switch ($tmp4060) {
                case 0: goto $l4066;
                case -1: goto $l4069;
            }
            $l4069:;
        }
        goto $l4053;
        $l4054:;
        org$pandalanguage$pandac$ASTNode* $tmp4072 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4073, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4075 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4012.value));
        $tmp4074 = $tmp4075;
        panda$collections$ImmutableArray* $tmp4077 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4049);
        $tmp4076 = $tmp4077;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4072, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4004.value).position, p_doccomment, p_annotations, $tmp4073, $tmp4074, generics4019, stypes4031, $tmp4076);
        $tmp4071 = $tmp4072;
        $tmp4070 = $tmp4071;
        $returnValue4008 = $tmp4070;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4071));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4074));
        $tmp4003 = 6;
        goto $l4001;
        $l4078:;
        return $returnValue4008;
    }
    $l4001:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4019));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes4031));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4049));
    members4049 = NULL;
    switch ($tmp4003) {
        case 4: goto $l4047;
        case 2: goto $l4027;
        case 3: goto $l4039;
        case 5: goto $l4067;
        case 6: goto $l4078;
        case 1: goto $l4017;
        case 0: goto $l4010;
    }
    $l4080:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start4084;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4085;
    org$pandalanguage$pandac$ASTNode* $returnValue4088;
    org$pandalanguage$pandac$ASTNode* $tmp4089;
    org$pandalanguage$pandac$parser$Token$nullable name4092;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4093;
    org$pandalanguage$pandac$ASTNode* $tmp4096;
    panda$collections$ImmutableArray* generics4099 = NULL;
    panda$collections$ImmutableArray* $tmp4102;
    panda$collections$ImmutableArray* $tmp4103;
    panda$collections$ImmutableArray* $tmp4104;
    org$pandalanguage$pandac$ASTNode* $tmp4106;
    panda$collections$ImmutableArray* $tmp4109;
    panda$collections$ImmutableArray* $tmp4110;
    panda$collections$ImmutableArray* $tmp4111;
    panda$collections$Array* intfs4113 = NULL;
    panda$collections$Array* $tmp4114;
    panda$collections$Array* $tmp4115;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4117;
    org$pandalanguage$pandac$ASTNode* t4122 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4123;
    org$pandalanguage$pandac$ASTNode* $tmp4124;
    org$pandalanguage$pandac$ASTNode* $tmp4126;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4133;
    org$pandalanguage$pandac$ASTNode* $tmp4135;
    org$pandalanguage$pandac$ASTNode* $tmp4136;
    org$pandalanguage$pandac$ASTNode* $tmp4137;
    org$pandalanguage$pandac$ASTNode* $tmp4139;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4144;
    org$pandalanguage$pandac$ASTNode* $tmp4147;
    panda$collections$Array* members4150 = NULL;
    panda$collections$Array* $tmp4151;
    panda$collections$Array* $tmp4152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp4157;
    org$pandalanguage$pandac$ASTNode* member4162 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4163;
    org$pandalanguage$pandac$ASTNode* $tmp4164;
    org$pandalanguage$pandac$ASTNode* $tmp4166;
    org$pandalanguage$pandac$ASTNode* $tmp4171;
    org$pandalanguage$pandac$ASTNode* $tmp4172;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp4174;
    panda$core$String* $tmp4175;
    panda$collections$ImmutableArray* $tmp4177;
    panda$collections$ImmutableArray* $tmp4179;
    int $tmp4083;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4085, ((panda$core$Int64) { 18 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4087 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4085, &$s4086);
        start4084 = $tmp4087;
        if (((panda$core$Bit) { !start4084.nonnull }).value) {
        {
            $tmp4089 = NULL;
            $returnValue4088 = $tmp4089;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4089));
            $tmp4083 = 0;
            goto $l4081;
            $l4090:;
            return $returnValue4088;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4093, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4095 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4093, &$s4094);
        name4092 = $tmp4095;
        if (((panda$core$Bit) { !name4092.nonnull }).value) {
        {
            $tmp4096 = NULL;
            $returnValue4088 = $tmp4096;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4096));
            $tmp4083 = 1;
            goto $l4081;
            $l4097:;
            return $returnValue4088;
        }
        }
        memset(&generics4099, 0, sizeof(generics4099));
        org$pandalanguage$pandac$parser$Token $tmp4100 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4100.kind.$rawValue, ((panda$core$Int64) { 62 }));
        if ($tmp4101.value) {
        {
            {
                $tmp4102 = generics4099;
                panda$collections$ImmutableArray* $tmp4105 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
                $tmp4104 = $tmp4105;
                $tmp4103 = $tmp4104;
                generics4099 = $tmp4103;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4104));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4102));
            }
            if (((panda$core$Bit) { generics4099 == NULL }).value) {
            {
                $tmp4106 = NULL;
                $returnValue4088 = $tmp4106;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4106));
                $tmp4083 = 2;
                goto $l4081;
                $l4107:;
                return $returnValue4088;
            }
            }
        }
        }
        else {
        {
            {
                $tmp4109 = generics4099;
                panda$collections$ImmutableArray* $tmp4112 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp4112);
                $tmp4111 = $tmp4112;
                $tmp4110 = $tmp4111;
                generics4099 = $tmp4110;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4109));
            }
        }
        }
        panda$collections$Array* $tmp4116 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4116);
        $tmp4115 = $tmp4116;
        $tmp4114 = $tmp4115;
        intfs4113 = $tmp4114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4115));
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4117, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4118 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4117);
        if (((panda$core$Bit) { $tmp4118.nonnull }).value) {
        {
            int $tmp4121;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4125 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4124 = $tmp4125;
                $tmp4123 = $tmp4124;
                t4122 = $tmp4123;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4124));
                if (((panda$core$Bit) { t4122 == NULL }).value) {
                {
                    $tmp4126 = NULL;
                    $returnValue4088 = $tmp4126;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4126));
                    $tmp4121 = 0;
                    goto $l4119;
                    $l4127:;
                    $tmp4083 = 3;
                    goto $l4081;
                    $l4128:;
                    return $returnValue4088;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(intfs4113, ((panda$core$Object*) t4122));
                $l4130:;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4133, ((panda$core$Int64) { 105 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp4134 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4133);
                bool $tmp4132 = ((panda$core$Bit) { $tmp4134.nonnull }).value;
                if (!$tmp4132) goto $l4131;
                {
                    {
                        $tmp4135 = t4122;
                        org$pandalanguage$pandac$ASTNode* $tmp4138 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                        $tmp4137 = $tmp4138;
                        $tmp4136 = $tmp4137;
                        t4122 = $tmp4136;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4136));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4137));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4135));
                    }
                    if (((panda$core$Bit) { t4122 == NULL }).value) {
                    {
                        $tmp4139 = NULL;
                        $returnValue4088 = $tmp4139;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4139));
                        $tmp4121 = 1;
                        goto $l4119;
                        $l4140:;
                        $tmp4083 = 4;
                        goto $l4081;
                        $l4141:;
                        return $returnValue4088;
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(intfs4113, ((panda$core$Object*) t4122));
                }
                goto $l4130;
                $l4131:;
            }
            $tmp4121 = -1;
            goto $l4119;
            $l4119:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t4122));
            t4122 = NULL;
            switch ($tmp4121) {
                case -1: goto $l4143;
                case 1: goto $l4140;
                case 0: goto $l4127;
            }
            $l4143:;
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4144, ((panda$core$Int64) { 99 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4146 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4144, &$s4145);
        if (((panda$core$Bit) { !$tmp4146.nonnull }).value) {
        {
            $tmp4147 = NULL;
            $returnValue4088 = $tmp4147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4147));
            $tmp4083 = 5;
            goto $l4081;
            $l4148:;
            return $returnValue4088;
        }
        }
        panda$collections$Array* $tmp4153 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4153);
        $tmp4152 = $tmp4153;
        $tmp4151 = $tmp4152;
        members4150 = $tmp4151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4152));
        $l4154:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp4157, ((panda$core$Int64) { 100 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp4158 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp4157);
        bool $tmp4156 = ((panda$core$Bit) { !$tmp4158.nonnull }).value;
        if (!$tmp4156) goto $l4155;
        {
            int $tmp4161;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4165 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4164 = $tmp4165;
                $tmp4163 = $tmp4164;
                member4162 = $tmp4163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4164));
                if (((panda$core$Bit) { member4162 == NULL }).value) {
                {
                    $tmp4166 = NULL;
                    $returnValue4088 = $tmp4166;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4166));
                    $tmp4161 = 0;
                    goto $l4159;
                    $l4167:;
                    $tmp4083 = 6;
                    goto $l4081;
                    $l4168:;
                    return $returnValue4088;
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members4150, ((panda$core$Object*) member4162));
            }
            $tmp4161 = -1;
            goto $l4159;
            $l4159:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member4162));
            member4162 = NULL;
            switch ($tmp4161) {
                case -1: goto $l4170;
                case 0: goto $l4167;
            }
            $l4170:;
        }
        goto $l4154;
        $l4155:;
        org$pandalanguage$pandac$ASTNode* $tmp4173 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp4174, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp4176 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name4092.value));
        $tmp4175 = $tmp4176;
        panda$collections$ImmutableArray* $tmp4178 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs4113);
        $tmp4177 = $tmp4178;
        panda$collections$ImmutableArray* $tmp4180 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members4150);
        $tmp4179 = $tmp4180;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4173, ((panda$core$Int64) { 11 }), ((org$pandalanguage$pandac$parser$Token) start4084.value).position, p_doccomment, p_annotations, $tmp4174, $tmp4175, generics4099, $tmp4177, $tmp4179);
        $tmp4172 = $tmp4173;
        $tmp4171 = $tmp4172;
        $returnValue4088 = $tmp4171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4175));
        $tmp4083 = 7;
        goto $l4081;
        $l4181:;
        return $returnValue4088;
    }
    $l4081:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics4099));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs4113));
    intfs4113 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members4150));
    members4150 = NULL;
    switch ($tmp4083) {
        case 4: goto $l4141;
        case 5: goto $l4148;
        case 2: goto $l4107;
        case 7: goto $l4181;
        case 6: goto $l4168;
        case 1: goto $l4097;
        case 0: goto $l4090;
        case 3: goto $l4128;
    }
    $l4183:;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2179_94184;
    org$pandalanguage$pandac$ASTNode* $returnValue4187;
    org$pandalanguage$pandac$ASTNode* $tmp4188;
    org$pandalanguage$pandac$ASTNode* $tmp4189;
    org$pandalanguage$pandac$ASTNode* $tmp4193;
    org$pandalanguage$pandac$ASTNode* $tmp4194;
    org$pandalanguage$pandac$ASTNode* $tmp4222;
    org$pandalanguage$pandac$ASTNode* $tmp4223;
    org$pandalanguage$pandac$ASTNode* $tmp4226;
    org$pandalanguage$pandac$ASTNode* $tmp4227;
    {
        org$pandalanguage$pandac$parser$Token $tmp4185 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2179_94184 = $tmp4185.kind;
        panda$core$Bit $tmp4186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp4186.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4190 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4189 = $tmp4190;
            $tmp4188 = $tmp4189;
            $returnValue4187 = $tmp4188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4189));
            return $returnValue4187;
        }
        }
        else {
        panda$core$Bit $tmp4192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp4192.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4195 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4194 = $tmp4195;
            $tmp4193 = $tmp4194;
            $returnValue4187 = $tmp4193;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4194));
            return $returnValue4187;
        }
        }
        else {
        panda$core$Bit $tmp4203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp4202 = $tmp4203.value;
        if ($tmp4202) goto $l4204;
        panda$core$Bit $tmp4205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp4202 = $tmp4205.value;
        $l4204:;
        panda$core$Bit $tmp4206 = { $tmp4202 };
        bool $tmp4201 = $tmp4206.value;
        if ($tmp4201) goto $l4207;
        panda$core$Bit $tmp4208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp4201 = $tmp4208.value;
        $l4207:;
        panda$core$Bit $tmp4209 = { $tmp4201 };
        bool $tmp4200 = $tmp4209.value;
        if ($tmp4200) goto $l4210;
        panda$core$Bit $tmp4211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp4200 = $tmp4211.value;
        $l4210:;
        panda$core$Bit $tmp4212 = { $tmp4200 };
        bool $tmp4199 = $tmp4212.value;
        if ($tmp4199) goto $l4213;
        panda$core$Bit $tmp4214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp4199 = $tmp4214.value;
        $l4213:;
        panda$core$Bit $tmp4215 = { $tmp4199 };
        bool $tmp4198 = $tmp4215.value;
        if ($tmp4198) goto $l4216;
        panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp4198 = $tmp4217.value;
        $l4216:;
        panda$core$Bit $tmp4218 = { $tmp4198 };
        bool $tmp4197 = $tmp4218.value;
        if ($tmp4197) goto $l4219;
        panda$core$Bit $tmp4220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2179_94184.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp4197 = $tmp4220.value;
        $l4219:;
        panda$core$Bit $tmp4221 = { $tmp4197 };
        if ($tmp4221.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4224 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4223 = $tmp4224;
            $tmp4222 = $tmp4223;
            $returnValue4187 = $tmp4222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4223));
            return $returnValue4187;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp4228 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            $tmp4227 = $tmp4228;
            $tmp4226 = $tmp4227;
            $returnValue4187 = $tmp4226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4226));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4227));
            return $returnValue4187;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries4233 = NULL;
    panda$collections$Array* $tmp4234;
    panda$collections$Array* $tmp4235;
    org$pandalanguage$pandac$ASTNode* entry4245 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp4246;
    org$pandalanguage$pandac$ASTNode* $tmp4247;
    org$pandalanguage$pandac$ASTNode* $returnValue4249;
    org$pandalanguage$pandac$ASTNode* $tmp4250;
    org$pandalanguage$pandac$ASTNode* $tmp4256;
    org$pandalanguage$pandac$ASTNode* $tmp4257;
    panda$collections$ImmutableArray* $tmp4259;
    int $tmp4232;
    {
        panda$collections$Array* $tmp4236 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp4236);
        $tmp4235 = $tmp4236;
        $tmp4234 = $tmp4235;
        entries4233 = $tmp4234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4235));
        $l4237:;
        org$pandalanguage$pandac$parser$Token $tmp4240 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp4241 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp4240.kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp4239 = $tmp4241.value;
        if (!$tmp4239) goto $l4238;
        {
            int $tmp4244;
            {
                org$pandalanguage$pandac$ASTNode* $tmp4248 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
                $tmp4247 = $tmp4248;
                $tmp4246 = $tmp4247;
                entry4245 = $tmp4246;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4247));
                if (((panda$core$Bit) { entry4245 == NULL }).value) {
                {
                    $tmp4250 = NULL;
                    $returnValue4249 = $tmp4250;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4250));
                    $tmp4244 = 0;
                    goto $l4242;
                    $l4251:;
                    $tmp4232 = 0;
                    goto $l4230;
                    $l4252:;
                    return $returnValue4249;
                }
                }
                panda$core$Bit $tmp4254 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
                PANDA_ASSERT($tmp4254.value);
                panda$collections$Array$add$panda$collections$Array$T(entries4233, ((panda$core$Object*) entry4245));
            }
            $tmp4244 = -1;
            goto $l4242;
            $l4242:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry4245));
            entry4245 = NULL;
            switch ($tmp4244) {
                case -1: goto $l4255;
                case 0: goto $l4251;
            }
            $l4255:;
        }
        goto $l4237;
        $l4238:;
        org$pandalanguage$pandac$ASTNode* $tmp4258 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        panda$collections$ImmutableArray* $tmp4260 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries4233);
        $tmp4259 = $tmp4260;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp4258, ((panda$core$Int64) { 17 }), $tmp4259);
        $tmp4257 = $tmp4258;
        $tmp4256 = $tmp4257;
        $returnValue4249 = $tmp4256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4259));
        $tmp4232 = 1;
        goto $l4230;
        $l4261:;
        return $returnValue4249;
    }
    $l4230:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries4233));
    entries4233 = NULL;
    switch ($tmp4232) {
        case 0: goto $l4252;
        case 1: goto $l4261;
    }
    $l4263:;
}
void org$pandalanguage$pandac$parser$Parser$cleanup(org$pandalanguage$pandac$parser$Parser* self) {
    int $tmp4266;
    {
    }
    $tmp4266 = -1;
    goto $l4264;
    $l4264:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4266) {
        case -1: goto $l4267;
    }
    $l4267:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->commaSeparatedExpressionContext));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->speculativeBuffer));
}

