#include "org/pandalanguage/pandac/parser/Parser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/ErrorReporter.h"
#include "org/pandalanguage/pandac/parser/Lexer.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/collections/Stack.h"
#include "panda/core/Bit.h"
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


org$pandalanguage$pandac$parser$Parser$class_type org$pandalanguage$pandac$parser$Parser$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$cleanup, org$pandalanguage$pandac$parser$Parser$start$panda$io$File$panda$core$String, org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token, org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q, org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String, org$pandalanguage$pandac$parser$Parser$startSpeculative, org$pandalanguage$pandac$parser$Parser$accept, org$pandalanguage$pandac$parser$Parser$rewind, org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String, org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q, org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT, org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q, org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef void (*$fn68)(org$pandalanguage$pandac$ErrorReporter*, panda$io$File*, org$pandalanguage$pandac$Position, panda$core$String*);
typedef org$pandalanguage$pandac$Position (*$fn107)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn140)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn204)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn247)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn253)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn260)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn266)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn313)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Position (*$fn353)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn359)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn365)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn375)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn387)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn393)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn403)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn754)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn793)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1388)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1401)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1421)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1890)(org$pandalanguage$pandac$ASTNode*);

static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 20, -8541428931190499244, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x66\x6f\x72\x6d\x61\x74\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 37, -6256153567413548266, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x76\x65\x72\x74", 7, 213482220537370, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, -1766462930662707075, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 30, -2435634887247038215, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x6c\x69\x74\x65\x72\x61\x6c", 27, 6051269863884878617, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 3643217445869129047, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74", 6, 2145219682350, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6c\x69\x67\x6e", 5, 20716313524, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x73\x74\x72\x69\x6e\x67\x20\x65\x73\x63\x61\x70\x65\x20\x73\x65\x71\x75\x65\x6e\x63\x65", 30, 2863460978064530341, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -7886403936265030464, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x20\x6f\x72\x20\x6f\x70\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 47, 6993595869282319748, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

void org$pandalanguage$pandac$parser$Parser$init$org$pandalanguage$pandac$ErrorReporter(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ErrorReporter* p_errors) {
    self->path = NULL;
    self->source = NULL;
    org$pandalanguage$pandac$parser$Lexer* $tmp1 = (org$pandalanguage$pandac$parser$Lexer*) pandaZAlloc(40);
    $tmp1->$class = (panda$core$Class*) &org$pandalanguage$pandac$parser$Lexer$class;
    $tmp1->refCount.value = 1;
    org$pandalanguage$pandac$parser$Lexer$init($tmp1);
    self->lexer = $tmp1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp3 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaZAlloc(40);
    $tmp3->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp3->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp3);
    self->pushbackBuffer = $tmp3;
    panda$collections$Stack* $tmp5 = (panda$collections$Stack*) pandaZAlloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp5->refCount.value = 1;
    panda$collections$Stack$init($tmp5);
    self->commaSeparatedExpressionContext = $tmp5;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaZAlloc(40);
    $tmp7->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp7->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp7);
    self->speculativeBuffer = $tmp7;
    {
        self->errors = p_errors;
    }
    panda$core$Bit$wrapper* $tmp9;
    $tmp9 = (panda$core$Bit$wrapper*) pandaZAlloc(13);
    $tmp9->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp9->refCount = 1;
    $tmp9->value = ((panda$core$Bit) { false });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp9));
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
    panda$core$Int64 idx12;
    org$pandalanguage$pandac$parser$Token result15;
    org$pandalanguage$pandac$parser$Token result17;
    panda$core$Int64 $tmp10 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp11 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp10, ((panda$core$Int64) { 0 }));
    if ($tmp11.value) {
    {
        panda$core$Int64 $tmp13 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp14 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp13, ((panda$core$Int64) { 1 }));
        idx12 = $tmp14;
        org$pandalanguage$pandac$parser$Token $tmp16 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, idx12);
        result15 = $tmp16;
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx12);
        return result15;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp18 = org$pandalanguage$pandac$parser$Lexer$next$R$org$pandalanguage$pandac$parser$Token(self->lexer);
    result17 = $tmp18;
    if (self->inSpeculative.value) {
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, result17);
    }
    }
    return result17;
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token result21;
    org$pandalanguage$pandac$parser$Token$Kind $match$57_1323;
    org$pandalanguage$pandac$parser$Token next28;
    org$pandalanguage$pandac$parser$Token$Kind $match$63_2530;
    panda$core$Char8 $tmp33;
    org$pandalanguage$pandac$parser$Token next39;
    org$pandalanguage$pandac$parser$Token$Kind $match$75_2541;
    $l19:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp22 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        result21 = $tmp22;
        {
            $match$57_1323 = result21.kind;
            panda$core$Bit $tmp24 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1323.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp24.value) {
            {
                goto $l19;
            }
            }
            else {
            panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1323.$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp25.value) {
            {
                $l26:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp29 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                    next28 = $tmp29;
                    {
                        $match$63_2530 = next28.kind;
                        panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2530.$rawValue, ((panda$core$Int64) { 12 }));
                        if ($tmp31.value) {
                        {
                            panda$core$String* $tmp32 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next28);
                            panda$core$Char8$init$panda$core$UInt8(&$tmp33, ((panda$core$UInt8) { 10 }));
                            panda$core$Bit $tmp34 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit($tmp32, $tmp33);
                            if ($tmp34.value) {
                            {
                                goto $l19;
                            }
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_2530.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp35.value) {
                        {
                            return next28;
                        }
                        }
                        }
                    }
                }
                }
                $l27:;
            }
            }
            else {
            panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$57_1323.$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp36.value) {
            {
                $l37:;
                while (true) {
                {
                    org$pandalanguage$pandac$parser$Token $tmp40 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    next39 = $tmp40;
                    {
                        $match$75_2541 = next39.kind;
                        panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2541.$rawValue, ((panda$core$Int64) { 10 }));
                        if ($tmp42.value) {
                        {
                            goto $l19;
                        }
                        }
                        else {
                        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$75_2541.$rawValue, ((panda$core$Int64) { 0 }));
                        if ($tmp43.value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result21, &$s44);
                            return next39;
                        }
                        }
                        }
                    }
                }
                }
                $l38:;
            }
            }
            else {
            {
                return result21;
            }
            }
            }
            }
        }
    }
    }
    $l20:;
}
void org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, p_token);
}
org$pandalanguage$pandac$parser$Token org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Int64 $tmp45 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp45, ((panda$core$Int64) { 0 }));
    if ($tmp46.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp47 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, $tmp47);
    }
    }
    panda$core$Int64 $tmp48 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp49 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp48, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$parser$Token $tmp50 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp49);
    return $tmp50;
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind) {
    org$pandalanguage$pandac$parser$Token result51;
    org$pandalanguage$pandac$parser$Token $tmp52 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result51 = $tmp52;
    panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result51.kind.$rawValue, p_kind.$rawValue);
    if ($tmp53.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result51, true });
    }
    }
    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, result51);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
org$pandalanguage$pandac$parser$Token$nullable org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$pandac$parser$Token result54;
    org$pandalanguage$pandac$parser$Token $tmp55 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    result54 = $tmp55;
    panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result54.kind.$rawValue, p_kind.$rawValue);
    if ($tmp56.value) {
    {
        return ((org$pandalanguage$pandac$parser$Token$nullable) { result54, true });
    }
    }
    panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s57, p_expected);
    panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
    panda$core$String* $tmp61 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, result54);
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, $tmp61);
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, &$s63);
    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, result54, $tmp64);
    return ((org$pandalanguage$pandac$parser$Token$nullable) { .nonnull = false });
}
void org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token, panda$core$String* p_msg) {
    panda$core$Bit $tmp65 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    if ($tmp65.value) {
    {
        ITable* $tmp66 = self->errors->$class->itable;
        while ($tmp66->$class != (panda$core$Class*) &org$pandalanguage$pandac$ErrorReporter$class) {
            $tmp66 = $tmp66->next;
        }
        $fn68 $tmp67 = $tmp66->methods[0];
        $tmp67(self->errors, self->path, p_token.position, p_msg);
    }
    }
}
void org$pandalanguage$pandac$parser$Parser$startSpeculative(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
    PANDA_ASSERT($tmp69.value);
    self->inSpeculative = ((panda$core$Bit) { true });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(self->speculativeBuffer);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self->speculativeBuffer, ((panda$collections$CollectionView*) self->pushbackBuffer));
}
void org$pandalanguage$pandac$parser$Parser$accept(org$pandalanguage$pandac$parser$Parser* self) {
    self->inSpeculative = ((panda$core$Bit) { false });
}
void org$pandalanguage$pandac$parser$Parser$rewind(org$pandalanguage$pandac$parser$Parser* self) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp70;
    self->inSpeculative = ((panda$core$Bit) { false });
    panda$core$Int64 $tmp71 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self->speculativeBuffer);
    panda$core$Int64 $tmp72 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp71, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp70, $tmp72, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp74 = $tmp70.start.value;
    panda$core$Int64 i73 = { $tmp74 };
    int64_t $tmp76 = $tmp70.end.value;
    int64_t $tmp77 = $tmp70.step.value;
    bool $tmp78 = $tmp70.inclusive.value;
    bool $tmp85 = $tmp77 > 0;
    if ($tmp85) goto $l83; else goto $l84;
    $l83:;
    if ($tmp78) goto $l86; else goto $l87;
    $l86:;
    if ($tmp74 <= $tmp76) goto $l79; else goto $l81;
    $l87:;
    if ($tmp74 < $tmp76) goto $l79; else goto $l81;
    $l84:;
    if ($tmp78) goto $l88; else goto $l89;
    $l88:;
    if ($tmp74 >= $tmp76) goto $l79; else goto $l81;
    $l89:;
    if ($tmp74 > $tmp76) goto $l79; else goto $l81;
    $l79:;
    {
        org$pandalanguage$pandac$parser$Token $tmp91 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self->speculativeBuffer, i73);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self->pushbackBuffer, $tmp91);
    }
    $l82:;
    if ($tmp85) goto $l93; else goto $l94;
    $l93:;
    int64_t $tmp95 = $tmp76 - i73.value;
    if ($tmp78) goto $l96; else goto $l97;
    $l96:;
    if ((uint64_t) $tmp95 >= $tmp77) goto $l92; else goto $l81;
    $l97:;
    if ((uint64_t) $tmp95 > $tmp77) goto $l92; else goto $l81;
    $l94:;
    int64_t $tmp99 = i73.value - $tmp76;
    if ($tmp78) goto $l100; else goto $l101;
    $l100:;
    if ((uint64_t) $tmp99 >= -$tmp77) goto $l92; else goto $l81;
    $l101:;
    if ((uint64_t) $tmp99 > -$tmp77) goto $l92; else goto $l81;
    $l92:;
    i73.value += $tmp77;
    goto $l79;
    $l81:;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp103;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp103, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp104 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp103);
    return $tmp104;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_string, org$pandalanguage$pandac$ASTNode* p_chunk) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp109;
    if (((panda$core$Bit) { p_string == NULL }).value) {
    {
        return p_chunk;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp105 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp105->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp105->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp108 = (($fn107) p_string->$class->vtable[2])(p_string);
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp109, ((panda$core$Int64) { 51 }));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp105, ((panda$core$Int64) { 2 }), $tmp108, p_string, $tmp109, p_chunk);
    return $tmp105;
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result110;
    org$pandalanguage$pandac$parser$Token token115;
    org$pandalanguage$pandac$parser$Token$Kind $match$157_13117;
    panda$core$String* str119;
    panda$core$Char8 $tmp121;
    panda$core$String* tmp1124;
    panda$core$String* tmp2127;
    org$pandalanguage$pandac$parser$Token escape129;
    panda$core$String* tmp3133;
    panda$core$String* escapeText134;
    panda$core$Char8 c136;
    panda$core$Char8 $match$176_21142;
    panda$core$Char8 $tmp143;
    panda$core$Char8 $tmp145;
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
    panda$core$String* tmp4165;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp166;
    panda$core$String* tmp5171;
    panda$core$MutableString* $tmp111 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp111->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp111->refCount.value = 1;
    panda$core$MutableString$init($tmp111);
    result110 = $tmp111;
    $l113:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp116 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token115 = $tmp116;
        {
            $match$157_13117 = token115.kind;
            panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp118.value) {
            {
                panda$core$String* $tmp120 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token115);
                str119 = $tmp120;
                panda$core$Char8$init$panda$core$UInt8(&$tmp121, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp122 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str119, $tmp121);
                if ($tmp122.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s123);
                    {
                        tmp1124 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result110));
                        return tmp1124;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result110, str119);
            }
            }
            else {
            panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp125.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s126);
                {
                    tmp2127 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result110));
                    return tmp2127;
                }
            }
            }
            else {
            panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp128.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp130 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape129 = $tmp130;
                panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape129.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp131.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s132);
                    {
                        tmp3133 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result110));
                        return tmp3133;
                    }
                }
                }
                panda$core$String* $tmp135 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape129);
                escapeText134 = $tmp135;
                panda$collections$ListView* $tmp137 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText134);
                ITable* $tmp138 = $tmp137->$class->itable;
                while ($tmp138->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp138 = $tmp138->next;
                }
                $fn140 $tmp139 = $tmp138->methods[0];
                panda$core$Object* $tmp141 = $tmp139($tmp137, ((panda$core$Int64) { 0 }));
                c136 = ((panda$core$Char8$wrapper*) $tmp141)->value;
                {
                    $match$176_21142 = c136;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp143, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp144 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21142, $tmp143);
                    if ($tmp144.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp145, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp145);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp146, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp147 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21142, $tmp146);
                    if ($tmp147.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp148, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp148);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp150 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21142, $tmp149);
                    if ($tmp150.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp151, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp151);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp152, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp153 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21142, $tmp152);
                    if ($tmp153.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp154, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp154);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp155, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp156 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21142, $tmp155);
                    if ($tmp156.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp157, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp157);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp158, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp159 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21142, $tmp158);
                    if ($tmp159.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp160, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp160);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp161, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp162 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$176_21142, $tmp161);
                    if ($tmp162.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp163, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result110, $tmp163);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token115, &$s164);
                        {
                            tmp4165 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result110));
                            return tmp4165;
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
                panda$core$String$Index $tmp167 = panda$core$String$start$R$panda$core$String$Index(escapeText134);
                panda$core$String$Index $tmp168 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText134, $tmp167);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp166, ((panda$core$String$Index$nullable) { $tmp168, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp169 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText134, $tmp166);
                panda$core$MutableString$append$panda$core$String(result110, $tmp169);
            }
            }
            else {
            panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$157_13117.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp170.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token115);
                {
                    panda$core$String* $tmp172 = panda$core$MutableString$finish$R$panda$core$String(result110);
                    tmp5171 = $tmp172;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result110));
                    return tmp5171;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp173 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token115);
                panda$core$MutableString$append$panda$core$String(result110, $tmp173);
            }
            }
            }
            }
            }
        }
    }
    }
    $l114:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result110));
}
panda$core$String* org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$parser$Token p_start) {
    panda$core$MutableString* result174;
    org$pandalanguage$pandac$parser$Token token179;
    org$pandalanguage$pandac$parser$Token$Kind $match$202_13181;
    panda$core$String* str183;
    panda$core$Char8 $tmp185;
    panda$core$String* tmp6188;
    panda$core$String* tmp7191;
    org$pandalanguage$pandac$parser$Token escape193;
    panda$core$String* tmp8197;
    panda$core$String* escapeText198;
    panda$core$Char8 c200;
    panda$core$Char8 $match$221_21206;
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
    panda$core$Char8 $tmp228;
    panda$core$Char8 $tmp230;
    panda$core$String* tmp9232;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp233;
    panda$core$String* tmp10238;
    panda$core$String* tmp11241;
    panda$core$MutableString* $tmp175 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp175->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp175->refCount.value = 1;
    panda$core$MutableString$init($tmp175);
    result174 = $tmp175;
    $l177:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp180 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token179 = $tmp180;
        {
            $match$202_13181 = token179.kind;
            panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13181.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp182.value) {
            {
                panda$core$String* $tmp184 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token179);
                str183 = $tmp184;
                panda$core$Char8$init$panda$core$UInt8(&$tmp185, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp186 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str183, $tmp185);
                if ($tmp186.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token179, &$s187);
                    {
                        tmp6188 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                        return tmp6188;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(result174, str183);
            }
            }
            else {
            panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13181.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp189.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token179, &$s190);
                {
                    tmp7191 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                    return tmp7191;
                }
            }
            }
            else {
            panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13181.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp192.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp194 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape193 = $tmp194;
                panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape193.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp195.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token179, &$s196);
                    {
                        tmp8197 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                        return tmp8197;
                    }
                }
                }
                panda$core$String* $tmp199 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape193);
                escapeText198 = $tmp199;
                panda$collections$ListView* $tmp201 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText198);
                ITable* $tmp202 = $tmp201->$class->itable;
                while ($tmp202->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp202 = $tmp202->next;
                }
                $fn204 $tmp203 = $tmp202->methods[0];
                panda$core$Object* $tmp205 = $tmp203($tmp201, ((panda$core$Int64) { 0 }));
                c200 = ((panda$core$Char8$wrapper*) $tmp205)->value;
                {
                    $match$221_21206 = c200;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp207, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp208 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp207);
                    if ($tmp208.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp209, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp209);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp210, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp211 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp210);
                    if ($tmp211.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp212, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp212);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp213, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp214 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp213);
                    if ($tmp214.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp215, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp215);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp216, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp217 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp216);
                    if ($tmp217.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp218);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp219, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp220 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp219);
                    if ($tmp220.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp221);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp223 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp222);
                    if ($tmp223.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp224, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp224);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp225, ((panda$core$UInt8) { 58 }));
                    panda$core$Bit $tmp226 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp225);
                    if ($tmp226.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 58 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp227);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp228, ((panda$core$UInt8) { 125 }));
                    panda$core$Bit $tmp229 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$221_21206, $tmp228);
                    if ($tmp229.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp230, ((panda$core$UInt8) { 125 }));
                        panda$core$MutableString$append$panda$core$Char8(result174, $tmp230);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token179, &$s231);
                        {
                            tmp9232 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                            return tmp9232;
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
                panda$core$String$Index $tmp234 = panda$core$String$start$R$panda$core$String$Index(escapeText198);
                panda$core$String$Index $tmp235 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText198, $tmp234);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp233, ((panda$core$String$Index$nullable) { $tmp235, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp236 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText198, $tmp233);
                panda$core$MutableString$append$panda$core$String(result174, $tmp236);
            }
            }
            else {
            panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13181.$rawValue, ((panda$core$Int64) { 95 }));
            if ($tmp237.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token179);
                {
                    panda$core$String* $tmp239 = panda$core$MutableString$finish$R$panda$core$String(result174);
                    tmp10238 = $tmp239;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                    return tmp10238;
                }
            }
            }
            else {
            panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$202_13181.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp240.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token179);
                {
                    panda$core$String* $tmp242 = panda$core$MutableString$finish$R$panda$core$String(result174);
                    tmp11241 = $tmp242;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
                    return tmp11241;
                }
            }
            }
            else {
            {
                panda$core$String* $tmp243 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token179);
                panda$core$MutableString$append$panda$core$String(result174, $tmp243);
            }
            }
            }
            }
            }
            }
        }
    }
    }
    $l178:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result174));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_expr) {
    org$pandalanguage$pandac$ASTNode* dot244;
    org$pandalanguage$pandac$ASTNode* call250;
    org$pandalanguage$pandac$ASTNode* stringType257;
    org$pandalanguage$pandac$ASTNode* tmp12263;
    org$pandalanguage$pandac$parser$Token$Kind $tmp268;
    org$pandalanguage$pandac$ASTNode* $tmp245 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp245->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp245->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp248 = (($fn247) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp245, ((panda$core$Int64) { 13 }), $tmp248, p_expr, &$s249);
    dot244 = $tmp245;
    org$pandalanguage$pandac$ASTNode* $tmp251 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp251->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp251->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp254 = (($fn253) p_expr->$class->vtable[2])(p_expr);
    panda$collections$ImmutableArray* $tmp255 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
    $tmp255->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp255->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp255);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp251, ((panda$core$Int64) { 6 }), $tmp254, dot244, $tmp255);
    call250 = $tmp251;
    org$pandalanguage$pandac$ASTNode* $tmp258 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp258->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp258->refCount.value = 1;
    org$pandalanguage$pandac$Position $tmp261 = (($fn260) p_expr->$class->vtable[2])(p_expr);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp258, ((panda$core$Int64) { 35 }), $tmp261, &$s262);
    stringType257 = $tmp258;
    {
        org$pandalanguage$pandac$ASTNode* $tmp264 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp264->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp264->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp267 = (($fn266) p_expr->$class->vtable[2])(p_expr);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp268, ((panda$core$Int64) { 89 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp264, ((panda$core$Int64) { 2 }), $tmp267, call250, $tmp268, stringType257);
        tmp12263 = $tmp264;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) call250));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stringType257));
        }
        return tmp12263;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start269;
    org$pandalanguage$pandac$ASTNode* result281;
    panda$core$MutableString* chunk282;
    org$pandalanguage$pandac$parser$Token token287;
    org$pandalanguage$pandac$parser$Token$Kind $match$268_13290;
    panda$core$String* str292;
    panda$core$Char8 $tmp294;
    org$pandalanguage$pandac$ASTNode* tmp16297;
    org$pandalanguage$pandac$ASTNode* tmp17300;
    org$pandalanguage$pandac$parser$Token escape302;
    org$pandalanguage$pandac$ASTNode* tmp18306;
    panda$core$String* escapeText307;
    panda$core$Char8 c309;
    panda$core$Char8 $match$287_21315;
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
    panda$core$Char8 $tmp334;
    org$pandalanguage$pandac$ASTNode* expr336;
    org$pandalanguage$pandac$ASTNode* tmp13338;
    org$pandalanguage$pandac$ASTNode* tmp19339;
    panda$core$String* align340;
    panda$core$String* format341;
    org$pandalanguage$pandac$parser$Token$Kind $tmp342;
    org$pandalanguage$pandac$parser$Token$Kind $tmp345;
    org$pandalanguage$pandac$ASTNode* tmp14348;
    org$pandalanguage$pandac$ASTNode* tmp20349;
    org$pandalanguage$pandac$ASTNode* formattable350;
    org$pandalanguage$pandac$ASTNode* cast356;
    org$pandalanguage$pandac$parser$Token$Kind $tmp361;
    org$pandalanguage$pandac$ASTNode* dot362;
    panda$collections$Array* callArgs368;
    org$pandalanguage$pandac$parser$Token$Kind $tmp378;
    org$pandalanguage$pandac$ASTNode* tmp15381;
    org$pandalanguage$pandac$ASTNode* tmp21382;
    org$pandalanguage$pandac$ASTNode* pandaType384;
    org$pandalanguage$pandac$ASTNode* callTarget390;
    panda$collections$Array* callArgs396;
    panda$core$String* text406;
    org$pandalanguage$pandac$ASTNode* tmp22421;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp422;
    org$pandalanguage$pandac$ASTNode* tmp23427;
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
    result281 = NULL;
    panda$core$MutableString* $tmp283 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp283->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp283->refCount.value = 1;
    panda$core$MutableString$init($tmp283);
    chunk282 = $tmp283;
    $l285:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp288 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        token287 = $tmp288;
        panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token287.kind.$rawValue, start269.kind.$rawValue);
        if ($tmp289.value) {
        {
            goto $l286;
        }
        }
        {
            $match$268_13290 = token287.kind;
            panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13290.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp291.value) {
            {
                panda$core$String* $tmp293 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token287);
                str292 = $tmp293;
                panda$core$Char8$init$panda$core$UInt8(&$tmp294, ((panda$core$UInt8) { 10 }));
                panda$core$Bit $tmp295 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(str292, $tmp294);
                if ($tmp295.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start269, &$s296);
                    {
                        tmp16297 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
                        }
                        return tmp16297;
                    }
                }
                }
                panda$core$MutableString$append$panda$core$String(chunk282, str292);
            }
            }
            else {
            panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13290.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp298.value) {
            {
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start269, &$s299);
                {
                    tmp17300 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
                    }
                    return tmp17300;
                }
            }
            }
            else {
            panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$268_13290.$rawValue, ((panda$core$Int64) { 106 }));
            if ($tmp301.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp303 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                escape302 = $tmp303;
                panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(escape302.kind.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp304.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start269, &$s305);
                    {
                        tmp18306 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
                        }
                        return tmp18306;
                    }
                }
                }
                panda$core$String* $tmp308 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, escape302);
                escapeText307 = $tmp308;
                panda$collections$ListView* $tmp310 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(escapeText307);
                ITable* $tmp311 = $tmp310->$class->itable;
                while ($tmp311->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp311 = $tmp311->next;
                }
                $fn313 $tmp312 = $tmp311->methods[0];
                panda$core$Object* $tmp314 = $tmp312($tmp310, ((panda$core$Int64) { 0 }));
                c309 = ((panda$core$Char8$wrapper*) $tmp314)->value;
                {
                    $match$287_21315 = c309;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp316, ((panda$core$UInt8) { 110 }));
                    panda$core$Bit $tmp317 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21315, $tmp316);
                    if ($tmp317.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp318, ((panda$core$UInt8) { 10 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk282, $tmp318);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp319, ((panda$core$UInt8) { 114 }));
                    panda$core$Bit $tmp320 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21315, $tmp319);
                    if ($tmp320.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp321, ((panda$core$UInt8) { 13 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk282, $tmp321);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp322, ((panda$core$UInt8) { 116 }));
                    panda$core$Bit $tmp323 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21315, $tmp322);
                    if ($tmp323.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp324, ((panda$core$UInt8) { 9 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk282, $tmp324);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp325, ((panda$core$UInt8) { 39 }));
                    panda$core$Bit $tmp326 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21315, $tmp325);
                    if ($tmp326.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp327, ((panda$core$UInt8) { 39 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk282, $tmp327);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 34 }));
                    panda$core$Bit $tmp329 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21315, $tmp328);
                    if ($tmp329.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp330, ((panda$core$UInt8) { 34 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk282, $tmp330);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp331, ((panda$core$UInt8) { 92 }));
                    panda$core$Bit $tmp332 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21315, $tmp331);
                    if ($tmp332.value) {
                    {
                        panda$core$Char8$init$panda$core$UInt8(&$tmp333, ((panda$core$UInt8) { 92 }));
                        panda$core$MutableString$append$panda$core$Char8(chunk282, $tmp333);
                    }
                    }
                    else {
                    panda$core$Char8$init$panda$core$UInt8(&$tmp334, ((panda$core$UInt8) { 123 }));
                    panda$core$Bit $tmp335 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$287_21315, $tmp334);
                    if ($tmp335.value) {
                    {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp337 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr336 = $tmp337;
                            if (((panda$core$Bit) { expr336 == NULL }).value) {
                            {
                                {
                                    tmp13338 = NULL;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr336));
                                    {
                                        tmp19339 = tmp13338;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
                                        }
                                        return tmp19339;
                                    }
                                }
                            }
                            }
                            align340 = NULL;
                            format341 = NULL;
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp342, ((panda$core$Int64) { 105 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp343 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp342);
                            if (((panda$core$Bit) { $tmp343.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp344 = org$pandalanguage$pandac$parser$Parser$alignmentString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start269);
                                    align340 = $tmp344;
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp345, ((panda$core$Int64) { 95 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp346 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp345);
                            if (((panda$core$Bit) { $tmp346.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp347 = org$pandalanguage$pandac$parser$Parser$formatString$org$pandalanguage$pandac$parser$Token$R$panda$core$String$Q(self, start269);
                                    format341 = $tmp347;
                                }
                                if (((panda$core$Bit) { format341 == NULL }).value) {
                                {
                                    {
                                        tmp14348 = NULL;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format341));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align340));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr336));
                                        }
                                        {
                                            tmp20349 = tmp14348;
                                            {
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
                                            }
                                            return tmp20349;
                                        }
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp351 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp351->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp351->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp354 = (($fn353) expr336->$class->vtable[2])(expr336);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp351, ((panda$core$Int64) { 35 }), $tmp354, &$s355);
                                formattable350 = $tmp351;
                                org$pandalanguage$pandac$ASTNode* $tmp357 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp357->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp357->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp360 = (($fn359) expr336->$class->vtable[2])(expr336);
                                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp361, ((panda$core$Int64) { 89 }));
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp357, ((panda$core$Int64) { 2 }), $tmp360, expr336, $tmp361, formattable350);
                                cast356 = $tmp357;
                                org$pandalanguage$pandac$ASTNode* $tmp363 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp363->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp363->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp366 = (($fn365) expr336->$class->vtable[2])(expr336);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp363, ((panda$core$Int64) { 13 }), $tmp366, cast356, &$s367);
                                dot362 = $tmp363;
                                panda$collections$Array* $tmp369 = (panda$collections$Array*) pandaZAlloc(40);
                                $tmp369->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp369->refCount.value = 1;
                                panda$collections$Array$init($tmp369);
                                callArgs368 = $tmp369;
                                org$pandalanguage$pandac$ASTNode* $tmp371 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp371->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp371->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp371, ((panda$core$Int64) { 33 }), start269.position, format341);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs368, ((panda$core$Object*) $tmp371));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr336));
                                    org$pandalanguage$pandac$ASTNode* $tmp373 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                    $tmp373->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp373->refCount.value = 1;
                                    org$pandalanguage$pandac$Position $tmp376 = (($fn375) expr336->$class->vtable[2])(expr336);
                                    panda$collections$ImmutableArray* $tmp377 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs368);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp373, ((panda$core$Int64) { 6 }), $tmp376, dot362, $tmp377);
                                    expr336 = $tmp373;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cast356));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dot362));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs368));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) formattable350));
                                }
                            }
                            }
                            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp378, ((panda$core$Int64) { 100 }));
                            org$pandalanguage$pandac$parser$Token$nullable $tmp380 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp378, &$s379);
                            if (((panda$core$Bit) { !$tmp380.nonnull }).value) {
                            {
                                {
                                    tmp15381 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format341));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align340));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr336));
                                    }
                                    {
                                        tmp21382 = tmp15381;
                                        {
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
                                        }
                                        return tmp21382;
                                    }
                                }
                            }
                            }
                            if (((panda$core$Bit) { align340 != NULL }).value) {
                            {
                                if (((panda$core$Bit) { format341 == NULL }).value) {
                                {
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr336));
                                        org$pandalanguage$pandac$ASTNode* $tmp383 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr336);
                                        expr336 = $tmp383;
                                    }
                                }
                                }
                                org$pandalanguage$pandac$ASTNode* $tmp385 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp385->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp385->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp388 = (($fn387) expr336->$class->vtable[2])(expr336);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp385, ((panda$core$Int64) { 35 }), $tmp388, &$s389);
                                pandaType384 = $tmp385;
                                org$pandalanguage$pandac$ASTNode* $tmp391 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp391->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp391->refCount.value = 1;
                                org$pandalanguage$pandac$Position $tmp394 = (($fn393) expr336->$class->vtable[2])(expr336);
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp391, ((panda$core$Int64) { 13 }), $tmp394, pandaType384, &$s395);
                                callTarget390 = $tmp391;
                                panda$collections$Array* $tmp397 = (panda$collections$Array*) pandaZAlloc(40);
                                $tmp397->$class = (panda$core$Class*) &panda$collections$Array$class;
                                $tmp397->refCount.value = 1;
                                panda$collections$Array$init($tmp397);
                                callArgs396 = $tmp397;
                                panda$collections$Array$add$panda$collections$Array$T(callArgs396, ((panda$core$Object*) expr336));
                                org$pandalanguage$pandac$ASTNode* $tmp399 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                $tmp399->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                $tmp399->refCount.value = 1;
                                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp399, ((panda$core$Int64) { 33 }), start269.position, align340);
                                panda$collections$Array$add$panda$collections$Array$T(callArgs396, ((panda$core$Object*) $tmp399));
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr336));
                                    org$pandalanguage$pandac$ASTNode* $tmp401 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                    $tmp401->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp401->refCount.value = 1;
                                    org$pandalanguage$pandac$Position $tmp404 = (($fn403) expr336->$class->vtable[2])(expr336);
                                    panda$collections$ImmutableArray* $tmp405 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(callArgs396);
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp401, ((panda$core$Int64) { 6 }), $tmp404, callTarget390, $tmp405);
                                    expr336 = $tmp401;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callTarget390));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) pandaType384));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) callArgs396));
                                }
                            }
                            }
                            panda$core$String* $tmp407 = panda$core$MutableString$finish$R$panda$core$String(chunk282);
                            text406 = $tmp407;
                            {
                                panda$core$MutableString* $tmp408 = (panda$core$MutableString*) pandaZAlloc(48);
                                $tmp408->$class = (panda$core$Class*) &panda$core$MutableString$class;
                                $tmp408->refCount.value = 1;
                                panda$core$MutableString$init($tmp408);
                                chunk282 = $tmp408;
                            }
                            panda$core$Bit $tmp412 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(text406, &$s411);
                            bool $tmp410 = $tmp412.value;
                            if ($tmp410) goto $l413;
                            $tmp410 = ((panda$core$Bit) { result281 != NULL }).value;
                            $l413:;
                            panda$core$Bit $tmp414 = { $tmp410 };
                            if ($tmp414.value) {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                                    org$pandalanguage$pandac$ASTNode* $tmp415 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                                    $tmp415->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                                    $tmp415->refCount.value = 1;
                                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp415, ((panda$core$Int64) { 33 }), start269.position, text406);
                                    org$pandalanguage$pandac$ASTNode* $tmp417 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result281, $tmp415);
                                    result281 = $tmp417;
                                }
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                                    org$pandalanguage$pandac$ASTNode* $tmp418 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result281, expr336);
                                    result281 = $tmp418;
                                }
                            }
                            }
                            else {
                            {
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                                    org$pandalanguage$pandac$ASTNode* $tmp419 = org$pandalanguage$pandac$parser$Parser$convertToString$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, expr336);
                                    result281 = $tmp419;
                                }
                            }
                            }
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) text406));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) format341));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) align340));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr336));
                            }
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token287, &$s420);
                        {
                            tmp22421 = NULL;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
                            }
                            return tmp22421;
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
                panda$core$String$Index $tmp423 = panda$core$String$start$R$panda$core$String$Index(escapeText307);
                panda$core$String$Index $tmp424 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(escapeText307, $tmp423);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp422, ((panda$core$String$Index$nullable) { $tmp424, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp425 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(escapeText307, $tmp422);
                panda$core$MutableString$append$panda$core$String(chunk282, $tmp425);
            }
            }
            else {
            {
                panda$core$String* $tmp426 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token287);
                panda$core$MutableString$append$panda$core$String(chunk282, $tmp426);
            }
            }
            }
            }
        }
    }
    }
    $l286:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp428 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp428->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp428->refCount.value = 1;
        panda$core$String* $tmp430 = panda$core$MutableString$finish$R$panda$core$String(chunk282);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp428, ((panda$core$Int64) { 33 }), start269.position, $tmp430);
        org$pandalanguage$pandac$ASTNode* $tmp431 = org$pandalanguage$pandac$parser$Parser$addStringChunk$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ASTNode(self, result281, $tmp428);
        tmp23427 = $tmp431;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) chunk282));
        }
        return tmp23427;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token t432;
    org$pandalanguage$pandac$parser$Token$Kind $match$362_9434;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp448;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp455;
    org$pandalanguage$pandac$ASTNode* result485;
    org$pandalanguage$pandac$parser$Token$Kind $tmp487;
    org$pandalanguage$pandac$parser$Token $tmp433 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    t432 = $tmp433;
    {
        $match$362_9434 = t432.kind;
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp435.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp436 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp436->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp436->refCount.value = 1;
            panda$core$String* $tmp438 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t432);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp436, ((panda$core$Int64) { 18 }), t432.position, $tmp438);
            return $tmp436;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp439.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp440 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp440->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp440->refCount.value = 1;
            panda$core$String* $tmp442 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t432);
            panda$core$UInt64$nullable $tmp443 = panda$core$String$convert$R$panda$core$UInt64$Q($tmp442);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp440, ((panda$core$Int64) { 20 }), t432.position, ((panda$core$UInt64) $tmp443.value));
            return $tmp440;
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp444.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp445 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp445->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp445->refCount.value = 1;
            panda$core$String* $tmp447 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t432);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp448, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp449 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp447, $tmp448);
            panda$core$UInt64$nullable $tmp450 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp449, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp445, ((panda$core$Int64) { 20 }), t432.position, ((panda$core$UInt64) $tmp450.value));
            return $tmp445;
        }
        }
        else {
        panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp451.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp452 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp452->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp452->refCount.value = 1;
            panda$core$String* $tmp454 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t432);
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp455, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 2 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp456 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp454, $tmp455);
            panda$core$UInt64$nullable $tmp457 = panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp456, ((panda$core$Int64) { 16 }));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp452, ((panda$core$Int64) { 20 }), t432.position, ((panda$core$UInt64) $tmp457.value));
            return $tmp452;
        }
        }
        else {
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp458.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp459 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp459->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp459->refCount.value = 1;
            panda$core$String* $tmp461 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t432);
            panda$core$Real64$nullable $tmp462 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp461);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64($tmp459, ((panda$core$Int64) { 30 }), t432.position, ((panda$core$Real64) $tmp462.value));
            return $tmp459;
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp464 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp464->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp464->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp464, ((panda$core$Int64) { 32 }), t432.position);
            return $tmp464;
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp466.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp467 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp467->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp467->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp467, ((panda$core$Int64) { 34 }), t432.position);
            return $tmp467;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp470 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp470->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp470->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp470, ((panda$core$Int64) { 24 }), t432.position);
            return $tmp470;
        }
        }
        else {
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp472.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp473 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp473->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp473->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp473, ((panda$core$Int64) { 3 }), t432.position, ((panda$core$Bit) { true }));
            return $tmp473;
        }
        }
        else {
        panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp475.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp476 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp476->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp476->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp476, ((panda$core$Int64) { 3 }), t432.position, ((panda$core$Bit) { false }));
            return $tmp476;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 7 }));
        bool $tmp478 = $tmp479.value;
        if ($tmp478) goto $l480;
        panda$core$Bit $tmp481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp478 = $tmp481.value;
        $l480:;
        panda$core$Bit $tmp482 = { $tmp478 };
        if ($tmp482.value) {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, t432);
            org$pandalanguage$pandac$ASTNode* $tmp483 = org$pandalanguage$pandac$parser$Parser$string$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp483;
        }
        }
        else {
        panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$362_9434.$rawValue, ((panda$core$Int64) { 103 }));
        if ($tmp484.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp486 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            result485 = $tmp486;
            if (((panda$core$Bit) { result485 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp487, ((panda$core$Int64) { 104 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp489 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp487, &$s488);
            if (((panda$core$Bit) { !$tmp489.nonnull }).value) {
            {
                return NULL;
            }
            }
            return result485;
        }
        }
        else {
        {
            panda$core$String* $tmp491 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, t432);
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s490, $tmp491);
            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s493);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, t432, $tmp494);
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
    org$pandalanguage$pandac$ASTNode* $match$403_9495;
    panda$core$String* text497;
    org$pandalanguage$pandac$ASTNode* base500;
    panda$core$String* field502;
    panda$core$String* result504;
    {
        $match$403_9495 = p_expr;
        panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9495->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp496.value) {
        {
            panda$core$String** $tmp498 = ((panda$core$String**) ((char*) $match$403_9495->$data + 16));
            text497 = *$tmp498;
            return text497;
        }
        }
        else {
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$403_9495->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp499.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp501 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$403_9495->$data + 16));
            base500 = *$tmp501;
            panda$core$String** $tmp503 = ((panda$core$String**) ((char*) $match$403_9495->$data + 24));
            field502 = *$tmp503;
            panda$core$String* $tmp505 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(base500);
            result504 = $tmp505;
            if (((panda$core$Bit) { result504 != NULL }).value) {
            {
                {
                    panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s506, field502);
                    panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result504, $tmp507);
                    result504 = $tmp508;
                }
            }
            }
            return result504;
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
    org$pandalanguage$pandac$parser$Token name509;
    org$pandalanguage$pandac$parser$Token$Kind $match$423_9511;
    org$pandalanguage$pandac$parser$Token token599;
    org$pandalanguage$pandac$parser$Token$Kind $tmp605;
    org$pandalanguage$pandac$parser$Token$Kind $tmp608;
    org$pandalanguage$pandac$parser$Token $tmp510 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    name509 = $tmp510;
    {
        $match$423_9511 = name509.kind;
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 48 }));
        bool $tmp532 = $tmp533.value;
        if ($tmp532) goto $l534;
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 51 }));
        $tmp532 = $tmp535.value;
        $l534:;
        panda$core$Bit $tmp536 = { $tmp532 };
        bool $tmp531 = $tmp536.value;
        if ($tmp531) goto $l537;
        panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 52 }));
        $tmp531 = $tmp538.value;
        $l537:;
        panda$core$Bit $tmp539 = { $tmp531 };
        bool $tmp530 = $tmp539.value;
        if ($tmp530) goto $l540;
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 53 }));
        $tmp530 = $tmp541.value;
        $l540:;
        panda$core$Bit $tmp542 = { $tmp530 };
        bool $tmp529 = $tmp542.value;
        if ($tmp529) goto $l543;
        panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 54 }));
        $tmp529 = $tmp544.value;
        $l543:;
        panda$core$Bit $tmp545 = { $tmp529 };
        bool $tmp528 = $tmp545.value;
        if ($tmp528) goto $l546;
        panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 55 }));
        $tmp528 = $tmp547.value;
        $l546:;
        panda$core$Bit $tmp548 = { $tmp528 };
        bool $tmp527 = $tmp548.value;
        if ($tmp527) goto $l549;
        panda$core$Bit $tmp550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 57 }));
        $tmp527 = $tmp550.value;
        $l549:;
        panda$core$Bit $tmp551 = { $tmp527 };
        bool $tmp526 = $tmp551.value;
        if ($tmp526) goto $l552;
        panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 58 }));
        $tmp526 = $tmp553.value;
        $l552:;
        panda$core$Bit $tmp554 = { $tmp526 };
        bool $tmp525 = $tmp554.value;
        if ($tmp525) goto $l555;
        panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 59 }));
        $tmp525 = $tmp556.value;
        $l555:;
        panda$core$Bit $tmp557 = { $tmp525 };
        bool $tmp524 = $tmp557.value;
        if ($tmp524) goto $l558;
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 62 }));
        $tmp524 = $tmp559.value;
        $l558:;
        panda$core$Bit $tmp560 = { $tmp524 };
        bool $tmp523 = $tmp560.value;
        if ($tmp523) goto $l561;
        panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 65 }));
        $tmp523 = $tmp562.value;
        $l561:;
        panda$core$Bit $tmp563 = { $tmp523 };
        bool $tmp522 = $tmp563.value;
        if ($tmp522) goto $l564;
        panda$core$Bit $tmp565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 64 }));
        $tmp522 = $tmp565.value;
        $l564:;
        panda$core$Bit $tmp566 = { $tmp522 };
        bool $tmp521 = $tmp566.value;
        if ($tmp521) goto $l567;
        panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 56 }));
        $tmp521 = $tmp568.value;
        $l567:;
        panda$core$Bit $tmp569 = { $tmp521 };
        bool $tmp520 = $tmp569.value;
        if ($tmp520) goto $l570;
        panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 66 }));
        $tmp520 = $tmp571.value;
        $l570:;
        panda$core$Bit $tmp572 = { $tmp520 };
        bool $tmp519 = $tmp572.value;
        if ($tmp519) goto $l573;
        panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 67 }));
        $tmp519 = $tmp574.value;
        $l573:;
        panda$core$Bit $tmp575 = { $tmp519 };
        bool $tmp518 = $tmp575.value;
        if ($tmp518) goto $l576;
        panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 68 }));
        $tmp518 = $tmp577.value;
        $l576:;
        panda$core$Bit $tmp578 = { $tmp518 };
        bool $tmp517 = $tmp578.value;
        if ($tmp517) goto $l579;
        panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 69 }));
        $tmp517 = $tmp580.value;
        $l579:;
        panda$core$Bit $tmp581 = { $tmp517 };
        bool $tmp516 = $tmp581.value;
        if ($tmp516) goto $l582;
        panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 70 }));
        $tmp516 = $tmp583.value;
        $l582:;
        panda$core$Bit $tmp584 = { $tmp516 };
        bool $tmp515 = $tmp584.value;
        if ($tmp515) goto $l585;
        panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 71 }));
        $tmp515 = $tmp586.value;
        $l585:;
        panda$core$Bit $tmp587 = { $tmp515 };
        bool $tmp514 = $tmp587.value;
        if ($tmp514) goto $l588;
        panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp514 = $tmp589.value;
        $l588:;
        panda$core$Bit $tmp590 = { $tmp514 };
        bool $tmp513 = $tmp590.value;
        if ($tmp513) goto $l591;
        panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp513 = $tmp592.value;
        $l591:;
        panda$core$Bit $tmp593 = { $tmp513 };
        bool $tmp512 = $tmp593.value;
        if ($tmp512) goto $l594;
        panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 72 }));
        $tmp512 = $tmp595.value;
        $l594:;
        panda$core$Bit $tmp596 = { $tmp512 };
        if ($tmp596.value) {
        {
            panda$core$String* $tmp597 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name509);
            return $tmp597;
        }
        }
        else {
        panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 63 }));
        if ($tmp598.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp600 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
            token599 = $tmp600;
            panda$core$Bit $tmp601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token599.kind.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp601.value) {
            {
                return &$s602;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token599);
                return &$s603;
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$423_9511.$rawValue, ((panda$core$Int64) { 101 }));
        if ($tmp604.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp605, ((panda$core$Int64) { 102 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp607 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp605, &$s606);
            if (((panda$core$Bit) { !$tmp607.nonnull }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp608, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp609 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp608);
            if (((panda$core$Bit) { $tmp609.nonnull }).value) {
            {
                return &$s610;
            }
            }
            return &$s611;
        }
        }
        else {
        {
            panda$core$String* $tmp613 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, name509);
            panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s612, $tmp613);
            panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, &$s615);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, name509, $tmp616);
            return NULL;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* $tmp617 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { true }));
    return $tmp617;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$Bit p_needSpeculativeParse) {
    org$pandalanguage$pandac$parser$Token$nullable start618;
    org$pandalanguage$pandac$parser$Token$Kind $tmp619;
    panda$core$MutableString* name622;
    org$pandalanguage$pandac$parser$Token$Kind $tmp628;
    org$pandalanguage$pandac$parser$Token$nullable id630;
    org$pandalanguage$pandac$parser$Token$Kind $tmp631;
    org$pandalanguage$pandac$ASTNode* tmp24634;
    panda$core$Char8 $tmp635;
    panda$core$String* finalName637;
    org$pandalanguage$pandac$ASTNode* result639;
    panda$collections$Array* children644;
    org$pandalanguage$pandac$ASTNode* t647;
    org$pandalanguage$pandac$ASTNode* tmp25649;
    org$pandalanguage$pandac$ASTNode* tmp31650;
    org$pandalanguage$pandac$ASTNode* tmp26651;
    org$pandalanguage$pandac$ASTNode* tmp32652;
    org$pandalanguage$pandac$parser$Token$Kind $tmp655;
    org$pandalanguage$pandac$ASTNode* tmp27658;
    org$pandalanguage$pandac$ASTNode* tmp33659;
    org$pandalanguage$pandac$ASTNode* tmp28660;
    org$pandalanguage$pandac$ASTNode* tmp34661;
    org$pandalanguage$pandac$parser$Token$Kind $tmp662;
    org$pandalanguage$pandac$ASTNode* tmp29665;
    org$pandalanguage$pandac$ASTNode* tmp35666;
    org$pandalanguage$pandac$ASTNode* tmp30667;
    org$pandalanguage$pandac$ASTNode* tmp36668;
    org$pandalanguage$pandac$parser$Token$Kind $tmp672;
    org$pandalanguage$pandac$ASTNode* tmp37676;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp619, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp621 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp619, &$s620);
    start618 = $tmp621;
    if (((panda$core$Bit) { !start618.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp623 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp623->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp623->refCount.value = 1;
    panda$core$String* $tmp625 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start618.value));
    panda$core$MutableString$init$panda$core$String($tmp623, $tmp625);
    name622 = $tmp623;
    $l626:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp628, ((panda$core$Int64) { 98 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp629 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp628);
    if (!((panda$core$Bit) { $tmp629.nonnull }).value) goto $l627;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp631, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp633 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp631, &$s632);
        id630 = $tmp633;
        if (((panda$core$Bit) { !id630.nonnull }).value) {
        {
            {
                tmp24634 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
                return tmp24634;
            }
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp635, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name622, $tmp635);
        panda$core$String* $tmp636 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id630.value));
        panda$core$MutableString$append$panda$core$String(name622, $tmp636);
    }
    goto $l626;
    $l627:;
    panda$core$String* $tmp638 = panda$core$MutableString$finish$R$panda$core$String(name622);
    finalName637 = $tmp638;
    org$pandalanguage$pandac$ASTNode* $tmp640 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp640->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp640->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp640, ((panda$core$Int64) { 35 }), ((org$pandalanguage$pandac$parser$Token) start618.value).position, finalName637);
    result639 = $tmp640;
    org$pandalanguage$pandac$parser$Token $tmp642 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp642.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp643.value) {
    {
        if (p_needSpeculativeParse.value) {
        {
            org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
        }
        }
        org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        panda$collections$Array* $tmp645 = (panda$collections$Array*) pandaZAlloc(40);
        $tmp645->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp645->refCount.value = 1;
        panda$collections$Array$init($tmp645);
        children644 = $tmp645;
        panda$collections$Array$add$panda$collections$Array$T(children644, ((panda$core$Object*) result639));
        org$pandalanguage$pandac$ASTNode* $tmp648 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
        t647 = $tmp648;
        if (((panda$core$Bit) { t647 == NULL }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp25649 = result639;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children644));
                    }
                    {
                        tmp31650 = tmp25649;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName637));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
                        }
                        return tmp31650;
                    }
                }
            }
            }
            {
                tmp26651 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children644));
                }
                {
                    tmp32652 = tmp26651;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName637));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
                    }
                    return tmp32652;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(children644, ((panda$core$Object*) t647));
        $l653:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp655, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp656 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp655);
        if (!((panda$core$Bit) { $tmp656.nonnull }).value) goto $l654;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
                org$pandalanguage$pandac$ASTNode* $tmp657 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                t647 = $tmp657;
            }
            if (((panda$core$Bit) { t647 == NULL }).value) {
            {
                if (p_needSpeculativeParse.value) {
                {
                    org$pandalanguage$pandac$parser$Parser$rewind(self);
                    {
                        tmp27658 = result639;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children644));
                        }
                        {
                            tmp33659 = tmp27658;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName637));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
                            }
                            return tmp33659;
                        }
                    }
                }
                }
                {
                    tmp28660 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children644));
                    }
                    {
                        tmp34661 = tmp28660;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName637));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
                        }
                        return tmp34661;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children644, ((panda$core$Object*) t647));
        }
        goto $l653;
        $l654:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp662, ((panda$core$Int64) { 63 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp664 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp662, &$s663);
        if (((panda$core$Bit) { !$tmp664.nonnull }).value) {
        {
            if (p_needSpeculativeParse.value) {
            {
                org$pandalanguage$pandac$parser$Parser$rewind(self);
                {
                    tmp29665 = result639;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children644));
                    }
                    {
                        tmp35666 = tmp29665;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName637));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
                        }
                        return tmp35666;
                    }
                }
            }
            }
            {
                tmp30667 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children644));
                }
                {
                    tmp36668 = tmp30667;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName637));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
                    }
                    return tmp36668;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
            org$pandalanguage$pandac$ASTNode* $tmp669 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp669->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp669->refCount.value = 1;
            panda$collections$ImmutableArray* $tmp671 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(children644);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp669, ((panda$core$Int64) { 17 }), ((org$pandalanguage$pandac$parser$Token) start618.value).position, finalName637, $tmp671);
            result639 = $tmp669;
        }
        org$pandalanguage$pandac$parser$Parser$accept(self);
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t647));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) children644));
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp672, ((panda$core$Int64) { 94 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp673 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp672);
    if (((panda$core$Bit) { $tmp673.nonnull }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
            org$pandalanguage$pandac$ASTNode* $tmp674 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp674->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp674->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode($tmp674, ((panda$core$Int64) { 25 }), ((org$pandalanguage$pandac$parser$Token) start618.value).position, result639);
            result639 = $tmp674;
        }
    }
    }
    {
        tmp37676 = result639;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result639));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name622));
        }
        return tmp37676;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result677;
    org$pandalanguage$pandac$ASTNode* tmp38679;
    org$pandalanguage$pandac$parser$Token token682;
    org$pandalanguage$pandac$parser$Token$Kind $match$540_13684;
    panda$collections$Array* args687;
    org$pandalanguage$pandac$parser$Token$Kind $tmp690;
    org$pandalanguage$pandac$ASTNode* expr692;
    org$pandalanguage$pandac$ASTNode* tmp39695;
    org$pandalanguage$pandac$ASTNode* tmp46696;
    org$pandalanguage$pandac$parser$Token$Kind $tmp699;
    org$pandalanguage$pandac$ASTNode* tmp40703;
    org$pandalanguage$pandac$ASTNode* tmp47704;
    org$pandalanguage$pandac$parser$Token$Kind $tmp705;
    org$pandalanguage$pandac$ASTNode* tmp41709;
    org$pandalanguage$pandac$ASTNode* tmp48710;
    org$pandalanguage$pandac$ASTNode* arg716;
    org$pandalanguage$pandac$ASTNode* tmp49718;
    org$pandalanguage$pandac$parser$Token$Kind $tmp719;
    org$pandalanguage$pandac$ASTNode* tmp50722;
    org$pandalanguage$pandac$parser$Token$Kind $tmp725;
    panda$core$String* name727;
    org$pandalanguage$pandac$parser$Token$Kind $tmp728;
    org$pandalanguage$pandac$ASTNode* tmp51732;
    org$pandalanguage$pandac$ASTNode* target736;
    org$pandalanguage$pandac$ASTNode* tmp52738;
    org$pandalanguage$pandac$parser$Token$Kind $tmp741;
    panda$core$String* name743;
    panda$core$MutableString* finalName745;
    panda$core$Char8 $tmp748;
    panda$collections$Array* types749;
    org$pandalanguage$pandac$ASTNode* t756;
    org$pandalanguage$pandac$ASTNode* tmp42758;
    org$pandalanguage$pandac$ASTNode* tmp53759;
    org$pandalanguage$pandac$parser$Token$Kind $tmp762;
    org$pandalanguage$pandac$ASTNode* tmp43765;
    org$pandalanguage$pandac$ASTNode* tmp54766;
    org$pandalanguage$pandac$parser$Token$Kind $tmp768;
    org$pandalanguage$pandac$ASTNode* tmp44771;
    org$pandalanguage$pandac$ASTNode* tmp55772;
    panda$core$Char8 $tmp773;
    panda$core$Bit shouldAccept774;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29776;
    org$pandalanguage$pandac$ASTNode* tmp45797;
    org$pandalanguage$pandac$ASTNode* tmp56798;
    org$pandalanguage$pandac$ASTNode* tmp57799;
    org$pandalanguage$pandac$ASTNode* tmp58800;
    org$pandalanguage$pandac$ASTNode* $tmp678 = org$pandalanguage$pandac$parser$Parser$term$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result677 = $tmp678;
    if (((panda$core$Bit) { result677 == NULL }).value) {
    {
        {
            tmp38679 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
            return tmp38679;
        }
    }
    }
    $l680:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp683 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        token682 = $tmp683;
        {
            $match$540_13684 = token682.kind;
            panda$core$Bit $tmp685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 103 }));
            if ($tmp685.value) {
            {
                panda$core$Bit$wrapper* $tmp686;
                $tmp686 = (panda$core$Bit$wrapper*) pandaZAlloc(13);
                $tmp686->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
                $tmp686->refCount = 1;
                $tmp686->value = ((panda$core$Bit) { true });
                panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp686));
                panda$collections$Array* $tmp688 = (panda$collections$Array*) pandaZAlloc(40);
                $tmp688->$class = (panda$core$Class*) &panda$collections$Array$class;
                $tmp688->refCount.value = 1;
                panda$collections$Array$init($tmp688);
                args687 = $tmp688;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp690, ((panda$core$Int64) { 104 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp691 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp690);
                if (((panda$core$Bit) { !$tmp691.nonnull }).value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp693 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    expr692 = $tmp693;
                    if (((panda$core$Bit) { expr692 == NULL }).value) {
                    {
                        panda$core$Object* $tmp694 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp39695 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                            {
                                tmp46696 = tmp39695;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp46696;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args687, ((panda$core$Object*) expr692));
                    $l697:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp699, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp700 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp699);
                    if (!((panda$core$Bit) { $tmp700.nonnull }).value) goto $l698;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                            org$pandalanguage$pandac$ASTNode* $tmp701 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr692 = $tmp701;
                        }
                        if (((panda$core$Bit) { expr692 == NULL }).value) {
                        {
                            panda$core$Object* $tmp702 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            {
                                tmp40703 = NULL;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                                {
                                    tmp47704 = tmp40703;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                    return tmp47704;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args687, ((panda$core$Object*) expr692));
                    }
                    goto $l697;
                    $l698:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp705, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp707 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp705, &$s706);
                    if (((panda$core$Bit) { !$tmp707.nonnull }).value) {
                    {
                        panda$core$Object* $tmp708 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp41709 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                            {
                                tmp48710 = tmp41709;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp48710;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                }
                }
                panda$core$Object* $tmp711 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp712 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp712->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp712->refCount.value = 1;
                    panda$collections$ImmutableArray* $tmp714 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args687);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp712, ((panda$core$Int64) { 6 }), token682.position, result677, $tmp714);
                    result677 = $tmp712;
                }
            }
            }
            else {
            panda$core$Bit $tmp715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp715.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp717 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                arg716 = $tmp717;
                if (((panda$core$Bit) { arg716 == NULL }).value) {
                {
                    {
                        tmp49718 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                        return tmp49718;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp719, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp721 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp719, &$s720);
                if (((panda$core$Bit) { !$tmp721.nonnull }).value) {
                {
                    {
                        tmp50722 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                        return tmp50722;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp723 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp723->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp723->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp725, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp723, ((panda$core$Int64) { 2 }), token682.position, result677, $tmp725, arg716);
                    result677 = $tmp723;
                }
            }
            }
            else {
            panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp726.value) {
            {
                memset(&name727, 0, sizeof(name727));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp728, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp729 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp728);
                if (((panda$core$Bit) { $tmp729.nonnull }).value) {
                {
                    {
                        name727 = &$s730;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp731 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                        name727 = $tmp731;
                    }
                    if (((panda$core$Bit) { name727 == NULL }).value) {
                    {
                        {
                            tmp51732 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                            return tmp51732;
                        }
                    }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp733 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp733->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp733->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp733, ((panda$core$Int64) { 13 }), token682.position, result677, name727);
                    result677 = $tmp733;
                }
            }
            }
            else {
            panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp735.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp737 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target736 = $tmp737;
                if (((panda$core$Bit) { target736 == NULL }).value) {
                {
                    {
                        tmp52738 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                        return tmp52738;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp739 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp739->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp739->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp741, ((panda$core$Int64) { 89 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp739, ((panda$core$Int64) { 2 }), token682.position, result677, $tmp741, target736);
                    result677 = $tmp739;
                }
            }
            }
            else {
            panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp742.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token682);
                panda$core$String* $tmp744 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result677);
                name743 = $tmp744;
                if (((panda$core$Bit) { name743 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp746 = (panda$core$MutableString*) pandaZAlloc(48);
                    $tmp746->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp746->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp746, name743);
                    finalName745 = $tmp746;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp748, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName745, $tmp748);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp750 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp750->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp750->refCount.value = 1;
                    panda$collections$Array$init($tmp750);
                    types749 = $tmp750;
                    org$pandalanguage$pandac$ASTNode* $tmp752 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp752->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp752->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp755 = (($fn754) result677->$class->vtable[2])(result677);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp752, ((panda$core$Int64) { 35 }), $tmp755, name743);
                    panda$collections$Array$add$panda$collections$Array$T(types749, ((panda$core$Object*) $tmp752));
                    org$pandalanguage$pandac$ASTNode* $tmp757 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t756 = $tmp757;
                    if (((panda$core$Bit) { t756 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp42758 = result677;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types749));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t756));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName745));
                            }
                            {
                                tmp53759 = tmp42758;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp53759;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types749, ((panda$core$Object*) t756));
                    panda$core$MutableString$append$panda$core$Object(finalName745, ((panda$core$Object*) t756));
                    $l760:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp762, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp763 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp762);
                    if (!((panda$core$Bit) { $tmp763.nonnull }).value) goto $l761;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t756));
                            org$pandalanguage$pandac$ASTNode* $tmp764 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                            t756 = $tmp764;
                        }
                        if (((panda$core$Bit) { t756 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            {
                                tmp43765 = result677;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types749));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t756));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName745));
                                }
                                {
                                    tmp54766 = tmp43765;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                    return tmp54766;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types749, ((panda$core$Object*) t756));
                        panda$core$MutableString$append$panda$core$String(finalName745, &$s767);
                        panda$core$MutableString$append$panda$core$Object(finalName745, ((panda$core$Object*) t756));
                    }
                    goto $l760;
                    $l761:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp768, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp770 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp768, &$s769);
                    if (((panda$core$Bit) { !$tmp770.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp44771 = result677;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types749));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t756));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName745));
                            }
                            {
                                tmp55772 = tmp44771;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp55772;
                            }
                        }
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp773, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName745, $tmp773);
                    memset(&shouldAccept774, 0, sizeof(shouldAccept774));
                    panda$core$Object* $tmp775 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp775)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp777 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29776 = $tmp777.kind;
                            panda$core$Bit $tmp781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29776.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp780 = $tmp781.value;
                            if ($tmp780) goto $l782;
                            panda$core$Bit $tmp783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29776.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp780 = $tmp783.value;
                            $l782:;
                            panda$core$Bit $tmp784 = { $tmp780 };
                            bool $tmp779 = $tmp784.value;
                            if ($tmp779) goto $l785;
                            panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29776.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp779 = $tmp786.value;
                            $l785:;
                            panda$core$Bit $tmp787 = { $tmp779 };
                            bool $tmp778 = $tmp787.value;
                            if ($tmp778) goto $l788;
                            panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29776.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp778 = $tmp789.value;
                            $l788:;
                            panda$core$Bit $tmp790 = { $tmp778 };
                            if ($tmp790.value) {
                            {
                                shouldAccept774 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept774 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept774 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept774.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                            org$pandalanguage$pandac$ASTNode* $tmp791 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                            $tmp791->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp791->refCount.value = 1;
                            org$pandalanguage$pandac$Position $tmp794 = (($fn793) result677->$class->vtable[2])(result677);
                            panda$core$String* $tmp795 = panda$core$MutableString$finish$R$panda$core$String(finalName745);
                            panda$collections$ImmutableArray* $tmp796 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types749);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp791, ((panda$core$Int64) { 17 }), $tmp794, $tmp795, $tmp796);
                            result677 = $tmp791;
                        }
                        {
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types749));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t756));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName745));
                            }
                            goto $l680;
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp45797 = result677;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types749));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t756));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName745));
                            }
                            {
                                tmp56798 = tmp45797;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp56798;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types749));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t756));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName745));
                    }
                }
                }
                {
                    tmp57799 = result677;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    return tmp57799;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token682);
                {
                    tmp58800 = result677;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    return tmp58800;
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
    $l681:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result801;
    org$pandalanguage$pandac$ASTNode* tmp59803;
    org$pandalanguage$pandac$parser$Token$nullable op806;
    org$pandalanguage$pandac$parser$Token$Kind $tmp807;
    org$pandalanguage$pandac$ASTNode* next809;
    org$pandalanguage$pandac$ASTNode* tmp60811;
    org$pandalanguage$pandac$ASTNode* tmp61812;
    org$pandalanguage$pandac$ASTNode* tmp62815;
    org$pandalanguage$pandac$ASTNode* $tmp802 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result801 = $tmp802;
    if (((panda$core$Bit) { result801 == NULL }).value) {
    {
        {
            tmp59803 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
            return tmp59803;
        }
    }
    }
    $l804:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp807, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp808 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp807);
        op806 = $tmp808;
        if (((panda$core$Bit) { !op806.nonnull }).value) {
        {
            goto $l805;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp810 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next809 = $tmp810;
        if (((panda$core$Bit) { next809 == NULL }).value) {
        {
            {
                tmp60811 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next809));
                {
                    tmp61812 = tmp60811;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
                    return tmp61812;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
            org$pandalanguage$pandac$ASTNode* $tmp813 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp813->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp813->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp813, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op806.value).position, result801, ((org$pandalanguage$pandac$parser$Token) op806.value).kind, next809);
            result801 = $tmp813;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next809));
    }
    }
    $l805:;
    {
        tmp62815 = result801;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result801));
        return tmp62815;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op816;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9818;
    org$pandalanguage$pandac$ASTNode* base828;
    org$pandalanguage$pandac$parser$Token $tmp817 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op816 = $tmp817;
    {
        $match$709_9818 = op816.kind;
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9818.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp820 = $tmp821.value;
        if ($tmp820) goto $l822;
        panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9818.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp820 = $tmp823.value;
        $l822:;
        panda$core$Bit $tmp824 = { $tmp820 };
        bool $tmp819 = $tmp824.value;
        if ($tmp819) goto $l825;
        panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9818.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp819 = $tmp826.value;
        $l825:;
        panda$core$Bit $tmp827 = { $tmp819 };
        if ($tmp827.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp829 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base828 = $tmp829;
            if (((panda$core$Bit) { base828 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp830 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp830->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp830->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp830, ((panda$core$Int64) { 28 }), op816.position, op816.kind, base828);
            return $tmp830;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op816);
            org$pandalanguage$pandac$ASTNode* $tmp832 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp832;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result833;
    org$pandalanguage$pandac$ASTNode* tmp63835;
    org$pandalanguage$pandac$parser$Token op838;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13840;
    org$pandalanguage$pandac$ASTNode* next866;
    org$pandalanguage$pandac$ASTNode* tmp65868;
    org$pandalanguage$pandac$parser$Token nextToken872;
    org$pandalanguage$pandac$ASTNode* next875;
    org$pandalanguage$pandac$ASTNode* tmp64877;
    org$pandalanguage$pandac$ASTNode* tmp66878;
    org$pandalanguage$pandac$parser$Token$Kind $tmp881;
    org$pandalanguage$pandac$ASTNode* tmp67882;
    org$pandalanguage$pandac$ASTNode* tmp68883;
    org$pandalanguage$pandac$ASTNode* $tmp834 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result833 = $tmp834;
    if (((panda$core$Bit) { result833 == NULL }).value) {
    {
        {
            tmp63835 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
            return tmp63835;
        }
    }
    }
    $l836:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp839 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op838 = $tmp839;
        {
            $match$735_13840 = op838.kind;
            panda$core$Bit $tmp847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp846 = $tmp847.value;
            if ($tmp846) goto $l848;
            panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp846 = $tmp849.value;
            $l848:;
            panda$core$Bit $tmp850 = { $tmp846 };
            bool $tmp845 = $tmp850.value;
            if ($tmp845) goto $l851;
            panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp845 = $tmp852.value;
            $l851:;
            panda$core$Bit $tmp853 = { $tmp845 };
            bool $tmp844 = $tmp853.value;
            if ($tmp844) goto $l854;
            panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp844 = $tmp855.value;
            $l854:;
            panda$core$Bit $tmp856 = { $tmp844 };
            bool $tmp843 = $tmp856.value;
            if ($tmp843) goto $l857;
            panda$core$Bit $tmp858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp843 = $tmp858.value;
            $l857:;
            panda$core$Bit $tmp859 = { $tmp843 };
            bool $tmp842 = $tmp859.value;
            if ($tmp842) goto $l860;
            panda$core$Bit $tmp861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp842 = $tmp861.value;
            $l860:;
            panda$core$Bit $tmp862 = { $tmp842 };
            bool $tmp841 = $tmp862.value;
            if ($tmp841) goto $l863;
            panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp841 = $tmp864.value;
            $l863:;
            panda$core$Bit $tmp865 = { $tmp841 };
            if ($tmp865.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp867 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next866 = $tmp867;
                if (((panda$core$Bit) { next866 == NULL }).value) {
                {
                    {
                        tmp65868 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
                        return tmp65868;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
                    org$pandalanguage$pandac$ASTNode* $tmp869 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp869->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp869->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp869, ((panda$core$Int64) { 2 }), op838.position, result833, op838.kind, next866);
                    result833 = $tmp869;
                }
            }
            }
            else {
            panda$core$Bit $tmp871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13840.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp871.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp873 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken872 = $tmp873;
                panda$core$Bit $tmp874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken872.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp874.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp876 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next875 = $tmp876;
                    if (((panda$core$Bit) { next875 == NULL }).value) {
                    {
                        {
                            tmp64877 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next875));
                            {
                                tmp66878 = tmp64877;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
                                return tmp66878;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
                        org$pandalanguage$pandac$ASTNode* $tmp879 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                        $tmp879->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp879->refCount.value = 1;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp881, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp879, ((panda$core$Int64) { 2 }), op838.position, result833, $tmp881, next875);
                        result833 = $tmp879;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next875));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken872);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op838);
                    {
                        tmp67882 = result833;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
                        return tmp67882;
                    }
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op838);
                {
                    tmp68883 = result833;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
                    return tmp68883;
                }
            }
            }
            }
        }
    }
    }
    $l837:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result833));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result884;
    org$pandalanguage$pandac$ASTNode* tmp69886;
    org$pandalanguage$pandac$parser$Token op889;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13891;
    org$pandalanguage$pandac$ASTNode* next901;
    org$pandalanguage$pandac$ASTNode* tmp70903;
    org$pandalanguage$pandac$ASTNode* tmp71906;
    org$pandalanguage$pandac$ASTNode* $tmp885 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result884 = $tmp885;
    if (((panda$core$Bit) { result884 == NULL }).value) {
    {
        {
            tmp69886 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result884));
            return tmp69886;
        }
    }
    }
    $l887:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp890 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op889 = $tmp890;
        {
            $match$776_13891 = op889.kind;
            panda$core$Bit $tmp894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13891.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp893 = $tmp894.value;
            if ($tmp893) goto $l895;
            panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13891.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp893 = $tmp896.value;
            $l895:;
            panda$core$Bit $tmp897 = { $tmp893 };
            bool $tmp892 = $tmp897.value;
            if ($tmp892) goto $l898;
            panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13891.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp892 = $tmp899.value;
            $l898:;
            panda$core$Bit $tmp900 = { $tmp892 };
            if ($tmp900.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp902 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next901 = $tmp902;
                if (((panda$core$Bit) { next901 == NULL }).value) {
                {
                    {
                        tmp70903 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result884));
                        return tmp70903;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result884));
                    org$pandalanguage$pandac$ASTNode* $tmp904 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp904->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp904->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp904, ((panda$core$Int64) { 2 }), op889.position, result884, op889.kind, next901);
                    result884 = $tmp904;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op889);
                {
                    tmp71906 = result884;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result884));
                    return tmp71906;
                }
            }
            }
        }
    }
    }
    $l888:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result884));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result907;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9908;
    org$pandalanguage$pandac$ASTNode* tmp72916;
    org$pandalanguage$pandac$parser$Token op917;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9919;
    org$pandalanguage$pandac$parser$Token next925;
    org$pandalanguage$pandac$ASTNode* right927;
    org$pandalanguage$pandac$ASTNode* tmp73938;
    org$pandalanguage$pandac$ASTNode* step939;
    org$pandalanguage$pandac$parser$Token$Kind $tmp940;
    org$pandalanguage$pandac$ASTNode* tmp74943;
    org$pandalanguage$pandac$ASTNode* tmp75944;
    org$pandalanguage$pandac$ASTNode* tmp76948;
    memset(&result907, 0, sizeof(result907));
    {
        org$pandalanguage$pandac$parser$Token $tmp909 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9908 = $tmp909.kind;
        panda$core$Bit $tmp911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9908.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp910 = $tmp911.value;
        if ($tmp910) goto $l912;
        panda$core$Bit $tmp913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9908.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp910 = $tmp913.value;
        $l912:;
        panda$core$Bit $tmp914 = { $tmp910 };
        if ($tmp914.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
                result907 = NULL;
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
                org$pandalanguage$pandac$ASTNode* $tmp915 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                result907 = $tmp915;
            }
            if (((panda$core$Bit) { result907 == NULL }).value) {
            {
                {
                    tmp72916 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
                    return tmp72916;
                }
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp918 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op917 = $tmp918;
    {
        $match$806_9919 = op917.kind;
        panda$core$Bit $tmp921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9919.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp920 = $tmp921.value;
        if ($tmp920) goto $l922;
        panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9919.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp920 = $tmp923.value;
        $l922:;
        panda$core$Bit $tmp924 = { $tmp920 };
        if ($tmp924.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp926 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next925 = $tmp926;
            memset(&right927, 0, sizeof(right927));
            panda$core$Bit $tmp930 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next925.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp929 = $tmp930.value;
            if (!$tmp929) goto $l931;
            panda$core$Bit $tmp932 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next925.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp929 = $tmp932.value;
            $l931:;
            panda$core$Bit $tmp933 = { $tmp929 };
            bool $tmp928 = $tmp933.value;
            if (!$tmp928) goto $l934;
            panda$core$Bit $tmp935 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next925.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp928 = $tmp935.value;
            $l934:;
            panda$core$Bit $tmp936 = { $tmp928 };
            if ($tmp936.value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp937 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    right927 = $tmp937;
                }
                if (((panda$core$Bit) { right927 == NULL }).value) {
                {
                    {
                        tmp73938 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
                        return tmp73938;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    right927 = NULL;
                }
            }
            }
            memset(&step939, 0, sizeof(step939));
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp940, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp941 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp940);
            if (((panda$core$Bit) { $tmp941.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp942 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    step939 = $tmp942;
                }
                if (((panda$core$Bit) { step939 == NULL }).value) {
                {
                    {
                        tmp74943 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
                        return tmp74943;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    step939 = NULL;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp945 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp945->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp945->refCount.value = 1;
                panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op917.kind.$rawValue, ((panda$core$Int64) { 96 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp945, ((panda$core$Int64) { 29 }), op917.position, result907, right927, $tmp947, step939);
                tmp75944 = $tmp945;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
                return tmp75944;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op917);
            {
                tmp76948 = result907;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
                return tmp76948;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result907));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result949;
    org$pandalanguage$pandac$ASTNode* tmp77951;
    org$pandalanguage$pandac$parser$Token op954;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13956;
    org$pandalanguage$pandac$ASTNode* next986;
    org$pandalanguage$pandac$ASTNode* tmp78988;
    org$pandalanguage$pandac$ASTNode* tmp79991;
    org$pandalanguage$pandac$ASTNode* $tmp950 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result949 = $tmp950;
    if (((panda$core$Bit) { result949 == NULL }).value) {
    {
        {
            tmp77951 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result949));
            return tmp77951;
        }
    }
    }
    $l952:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp955 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op954 = $tmp955;
        {
            $match$849_13956 = op954.kind;
            panda$core$Bit $tmp964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp963 = $tmp964.value;
            if ($tmp963) goto $l965;
            panda$core$Bit $tmp966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp963 = $tmp966.value;
            $l965:;
            panda$core$Bit $tmp967 = { $tmp963 };
            bool $tmp962 = $tmp967.value;
            if ($tmp962) goto $l968;
            panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp962 = $tmp969.value;
            $l968:;
            panda$core$Bit $tmp970 = { $tmp962 };
            bool $tmp961 = $tmp970.value;
            if ($tmp961) goto $l971;
            panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp961 = $tmp972.value;
            $l971:;
            panda$core$Bit $tmp973 = { $tmp961 };
            bool $tmp960 = $tmp973.value;
            if ($tmp960) goto $l974;
            panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp960 = $tmp975.value;
            $l974:;
            panda$core$Bit $tmp976 = { $tmp960 };
            bool $tmp959 = $tmp976.value;
            if ($tmp959) goto $l977;
            panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp959 = $tmp978.value;
            $l977:;
            panda$core$Bit $tmp979 = { $tmp959 };
            bool $tmp958 = $tmp979.value;
            if ($tmp958) goto $l980;
            panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp958 = $tmp981.value;
            $l980:;
            panda$core$Bit $tmp982 = { $tmp958 };
            bool $tmp957 = $tmp982.value;
            if ($tmp957) goto $l983;
            panda$core$Bit $tmp984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13956.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp957 = $tmp984.value;
            $l983:;
            panda$core$Bit $tmp985 = { $tmp957 };
            if ($tmp985.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp987 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next986 = $tmp987;
                if (((panda$core$Bit) { next986 == NULL }).value) {
                {
                    {
                        tmp78988 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result949));
                        return tmp78988;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result949));
                    org$pandalanguage$pandac$ASTNode* $tmp989 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp989->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp989->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp989, ((panda$core$Int64) { 2 }), op954.position, result949, op954.kind, next986);
                    result949 = $tmp989;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op954);
                {
                    tmp79991 = result949;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result949));
                    return tmp79991;
                }
            }
            }
        }
    }
    }
    $l953:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result949));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result992;
    org$pandalanguage$pandac$ASTNode* tmp80994;
    org$pandalanguage$pandac$parser$Token op997;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_13999;
    org$pandalanguage$pandac$ASTNode* next1005;
    org$pandalanguage$pandac$ASTNode* tmp811007;
    org$pandalanguage$pandac$ASTNode* tmp821010;
    org$pandalanguage$pandac$ASTNode* $tmp993 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result992 = $tmp993;
    if (((panda$core$Bit) { result992 == NULL }).value) {
    {
        {
            tmp80994 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result992));
            return tmp80994;
        }
    }
    }
    $l995:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp998 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op997 = $tmp998;
        {
            $match$880_13999 = op997.kind;
            panda$core$Bit $tmp1001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13999.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp1000 = $tmp1001.value;
            if ($tmp1000) goto $l1002;
            panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13999.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp1000 = $tmp1003.value;
            $l1002:;
            panda$core$Bit $tmp1004 = { $tmp1000 };
            if ($tmp1004.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1006 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next1005 = $tmp1006;
                if (((panda$core$Bit) { next1005 == NULL }).value) {
                {
                    {
                        tmp811007 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result992));
                        return tmp811007;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result992));
                    org$pandalanguage$pandac$ASTNode* $tmp1008 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp1008->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp1008->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1008, ((panda$core$Int64) { 2 }), op997.position, result992, op997.kind, next1005);
                    result992 = $tmp1008;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op997);
                {
                    tmp821010 = result992;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result992));
                    return tmp821010;
                }
            }
            }
        }
    }
    }
    $l996:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result992));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1011;
    org$pandalanguage$pandac$ASTNode* tmp831013;
    org$pandalanguage$pandac$parser$Token$nullable op1016;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1017;
    org$pandalanguage$pandac$ASTNode* next1019;
    org$pandalanguage$pandac$ASTNode* tmp841021;
    org$pandalanguage$pandac$ASTNode* tmp851022;
    org$pandalanguage$pandac$ASTNode* tmp861025;
    org$pandalanguage$pandac$ASTNode* $tmp1012 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result1011 = $tmp1012;
    if (((panda$core$Bit) { result1011 == NULL }).value) {
    {
        {
            tmp831013 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1011));
            return tmp831013;
        }
    }
    }
    $l1014:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1017, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1018 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1017);
        op1016 = $tmp1018;
        if (((panda$core$Bit) { !op1016.nonnull }).value) {
        {
            goto $l1015;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1020 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next1019 = $tmp1020;
        if (((panda$core$Bit) { next1019 == NULL }).value) {
        {
            {
                tmp841021 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1019));
                {
                    tmp851022 = tmp841021;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1011));
                    return tmp851022;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1011));
            org$pandalanguage$pandac$ASTNode* $tmp1023 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1023->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1023->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1023, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1016.value).position, result1011, ((org$pandalanguage$pandac$parser$Token) op1016.value).kind, next1019);
            result1011 = $tmp1023;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1019));
    }
    }
    $l1015:;
    {
        tmp861025 = result1011;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1011));
        return tmp861025;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1026;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1027;
    org$pandalanguage$pandac$ASTNode* test1030;
    org$pandalanguage$pandac$ASTNode* tmp871032;
    panda$collections$ImmutableArray* ifTrue1033;
    org$pandalanguage$pandac$ASTNode* tmp881035;
    org$pandalanguage$pandac$ASTNode* ifFalse1036;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1037;
    org$pandalanguage$pandac$ASTNode* tmp891042;
    org$pandalanguage$pandac$ASTNode* tmp901044;
    org$pandalanguage$pandac$ASTNode* tmp911045;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1027, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1029 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1027, &$s1028);
    start1026 = $tmp1029;
    if (((panda$core$Bit) { !start1026.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1031 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1030 = $tmp1031;
    if (((panda$core$Bit) { test1030 == NULL }).value) {
    {
        {
            tmp871032 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1030));
            return tmp871032;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1034 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    ifTrue1033 = $tmp1034;
    if (((panda$core$Bit) { ifTrue1033 == NULL }).value) {
    {
        {
            tmp881035 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1030));
            }
            return tmp881035;
        }
    }
    }
    memset(&ifFalse1036, 0, sizeof(ifFalse1036));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1037, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1038 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1037);
    if (((panda$core$Bit) { $tmp1038.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1039 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1039.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1040.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1036));
                org$pandalanguage$pandac$ASTNode* $tmp1041 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1036 = $tmp1041;
            }
            if (((panda$core$Bit) { ifFalse1036 == NULL }).value) {
            {
                {
                    tmp891042 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1033));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1030));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1036));
                    }
                    return tmp891042;
                }
            }
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1036));
                org$pandalanguage$pandac$ASTNode* $tmp1043 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1036 = $tmp1043;
            }
            if (((panda$core$Bit) { ifFalse1036 == NULL }).value) {
            {
                {
                    tmp901044 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1033));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1030));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1036));
                    }
                    return tmp901044;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1036));
            ifFalse1036 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1046 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1046->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1046->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1046, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1026.value).position, test1030, ifTrue1033, ifFalse1036);
        tmp911045 = $tmp1046;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1033));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1030));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1036));
        }
        return tmp911045;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1048;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1048, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1050 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1048, &$s1049);
    if (((panda$core$Bit) { !$tmp1050.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1051 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp1051;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1052;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1053;
    org$pandalanguage$pandac$ASTNode* type1058;
    org$pandalanguage$pandac$ASTNode* tmp921060;
    org$pandalanguage$pandac$ASTNode* tmp931061;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1053, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1055 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1053, &$s1054);
    id1052 = $tmp1055;
    if (((panda$core$Bit) { !id1052.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1056 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1056.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1057.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1059 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type1058 = $tmp1059;
        if (((panda$core$Bit) { type1058 == NULL }).value) {
        {
            {
                tmp921060 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1058));
                return tmp921060;
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1062 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1062->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1062->refCount.value = 1;
            panda$core$String* $tmp1064 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1052.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1062, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1052.value).position, $tmp1064, type1058);
            tmp931061 = $tmp1062;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1058));
            return tmp931061;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1065 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1065->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1065->refCount.value = 1;
    panda$core$String* $tmp1067 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1052.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1065, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1052.value).position, $tmp1067);
    return $tmp1065;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1068;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1069;
    org$pandalanguage$pandac$ASTNode* t1072;
    org$pandalanguage$pandac$ASTNode* tmp941074;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1075;
    org$pandalanguage$pandac$ASTNode* tmp951078;
    org$pandalanguage$pandac$ASTNode* list1079;
    org$pandalanguage$pandac$ASTNode* tmp961081;
    panda$collections$ImmutableArray* block1082;
    org$pandalanguage$pandac$ASTNode* tmp971084;
    org$pandalanguage$pandac$ASTNode* tmp981085;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1069, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1071 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1069, &$s1070);
    start1068 = $tmp1071;
    if (((panda$core$Bit) { !start1068.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1073 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1072 = $tmp1073;
    if (((panda$core$Bit) { t1072 == NULL }).value) {
    {
        {
            tmp941074 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1072));
            return tmp941074;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1075, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1077 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1075, &$s1076);
    if (((panda$core$Bit) { !$tmp1077.nonnull }).value) {
    {
        {
            tmp951078 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1072));
            return tmp951078;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1080 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list1079 = $tmp1080;
    if (((panda$core$Bit) { list1079 == NULL }).value) {
    {
        {
            tmp961081 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1072));
            }
            return tmp961081;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1083 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    block1082 = $tmp1083;
    if (((panda$core$Bit) { block1082 == NULL }).value) {
    {
        {
            tmp971084 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1082));
            }
            return tmp971084;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1086 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1086->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1086->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1086, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1068.value).position, p_label, t1072, list1079, block1082);
        tmp981085 = $tmp1086;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1079));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1072));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1082));
        }
        return tmp981085;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1088;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1089;
    org$pandalanguage$pandac$ASTNode* test1092;
    org$pandalanguage$pandac$ASTNode* tmp991094;
    panda$collections$ImmutableArray* body1095;
    org$pandalanguage$pandac$ASTNode* tmp1001097;
    org$pandalanguage$pandac$ASTNode* tmp1011098;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1089, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1091 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1089, &$s1090);
    start1088 = $tmp1091;
    if (((panda$core$Bit) { !start1088.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1093 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1092 = $tmp1093;
    if (((panda$core$Bit) { test1092 == NULL }).value) {
    {
        {
            tmp991094 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1092));
            return tmp991094;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1096 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1095 = $tmp1096;
    if (((panda$core$Bit) { body1095 == NULL }).value) {
    {
        {
            tmp1001097 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1092));
            }
            return tmp1001097;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1099 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1099->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1099->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1099, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1088.value).position, p_label, test1092, body1095);
        tmp1011098 = $tmp1099;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1095));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1092));
        }
        return tmp1011098;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1101;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1102;
    panda$collections$ImmutableArray* body1105;
    org$pandalanguage$pandac$ASTNode* tmp1021107;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1108;
    org$pandalanguage$pandac$ASTNode* tmp1031111;
    org$pandalanguage$pandac$ASTNode* test1112;
    org$pandalanguage$pandac$ASTNode* tmp1041114;
    org$pandalanguage$pandac$ASTNode* tmp1051115;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1102, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1104 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1102, &$s1103);
    start1101 = $tmp1104;
    if (((panda$core$Bit) { !start1101.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1106 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1105 = $tmp1106;
    if (((panda$core$Bit) { body1105 == NULL }).value) {
    {
        {
            tmp1021107 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1105));
            return tmp1021107;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1108, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1110 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1108, &$s1109);
    if (((panda$core$Bit) { !$tmp1110.nonnull }).value) {
    {
        {
            tmp1031111 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1105));
            return tmp1031111;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1113 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1112 = $tmp1113;
    if (((panda$core$Bit) { test1112 == NULL }).value) {
    {
        {
            tmp1041114 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1105));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1112));
            }
            return tmp1041114;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1116 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1116->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1116->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1116, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1101.value).position, p_label, body1105, test1112);
        tmp1051115 = $tmp1116;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1112));
        }
        return tmp1051115;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1118;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1119;
    panda$collections$ImmutableArray* body1122;
    org$pandalanguage$pandac$ASTNode* tmp1061124;
    org$pandalanguage$pandac$ASTNode* tmp1071125;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1119, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1121 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1119, &$s1120);
    start1118 = $tmp1121;
    if (((panda$core$Bit) { !start1118.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1123 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1122 = $tmp1123;
    if (((panda$core$Bit) { body1122 == NULL }).value) {
    {
        {
            tmp1061124 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1122));
            return tmp1061124;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1126 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1126->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1126->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1126, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1118.value).position, p_label, body1122);
        tmp1071125 = $tmp1126;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1122));
        return tmp1071125;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1128;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1129;
    org$pandalanguage$pandac$ASTNode* expr1132;
    org$pandalanguage$pandac$ASTNode* tmp1081134;
    org$pandalanguage$pandac$ASTNode* message1135;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1136;
    org$pandalanguage$pandac$ASTNode* tmp1091139;
    org$pandalanguage$pandac$ASTNode* tmp1101140;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1129, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1131 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1129, &$s1130);
    start1128 = $tmp1131;
    if (((panda$core$Bit) { !start1128.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1133 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1132 = $tmp1133;
    if (((panda$core$Bit) { expr1132 == NULL }).value) {
    {
        {
            tmp1081134 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1132));
            return tmp1081134;
        }
    }
    }
    memset(&message1135, 0, sizeof(message1135));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1136, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1137 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1136);
    if (((panda$core$Bit) { $tmp1137.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1138 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            message1135 = $tmp1138;
        }
        if (((panda$core$Bit) { message1135 == NULL }).value) {
        {
            {
                tmp1091139 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1135));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1132));
                }
                return tmp1091139;
            }
        }
        }
    }
    }
    else {
    {
        {
            message1135 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1141 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1141->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1141->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1141, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1128.value).position, expr1132, message1135);
        tmp1101140 = $tmp1141;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1132));
        }
        return tmp1101140;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1143;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1144;
    panda$collections$Array* expressions1147;
    org$pandalanguage$pandac$ASTNode* expr1150;
    org$pandalanguage$pandac$ASTNode* tmp1111152;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1155;
    org$pandalanguage$pandac$ASTNode* tmp1121158;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1159;
    org$pandalanguage$pandac$ASTNode* tmp1131162;
    panda$collections$Array* statements1163;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131168;
    org$pandalanguage$pandac$ASTNode* stmt1188;
    org$pandalanguage$pandac$ASTNode* tmp1151190;
    org$pandalanguage$pandac$ASTNode* stmt1191;
    org$pandalanguage$pandac$ASTNode* tmp1141193;
    org$pandalanguage$pandac$ASTNode* tmp1161194;
    org$pandalanguage$pandac$ASTNode* tmp1171195;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1144, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1146 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1144, &$s1145);
    start1143 = $tmp1146;
    if (((panda$core$Bit) { !start1143.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1148 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1148->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1148->refCount.value = 1;
    panda$collections$Array$init($tmp1148);
    expressions1147 = $tmp1148;
    org$pandalanguage$pandac$ASTNode* $tmp1151 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1150 = $tmp1151;
    if (((panda$core$Bit) { expr1150 == NULL }).value) {
    {
        {
            tmp1111152 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1150));
            }
            return tmp1111152;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1147, ((panda$core$Object*) expr1150));
    $l1153:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1155, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1156 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1155);
    if (!((panda$core$Bit) { $tmp1156.nonnull }).value) goto $l1154;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1150));
            org$pandalanguage$pandac$ASTNode* $tmp1157 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1150 = $tmp1157;
        }
        if (((panda$core$Bit) { expr1150 == NULL }).value) {
        {
            {
                tmp1121158 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1147));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1150));
                }
                return tmp1121158;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1147, ((panda$core$Object*) expr1150));
    }
    goto $l1153;
    $l1154:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1159, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1161 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1159, &$s1160);
    if (((panda$core$Bit) { !$tmp1161.nonnull }).value) {
    {
        {
            tmp1131162 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1150));
            }
            return tmp1131162;
        }
    }
    }
    panda$collections$Array* $tmp1164 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1164->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1164->refCount.value = 1;
    panda$collections$Array$init($tmp1164);
    statements1163 = $tmp1164;
    $l1166:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1169 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1114_131168 = $tmp1169.kind;
            panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131168.$rawValue, ((panda$core$Int64) { 39 }));
            bool $tmp1171 = $tmp1172.value;
            if ($tmp1171) goto $l1173;
            panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131168.$rawValue, ((panda$core$Int64) { 40 }));
            $tmp1171 = $tmp1174.value;
            $l1173:;
            panda$core$Bit $tmp1175 = { $tmp1171 };
            bool $tmp1170 = $tmp1175.value;
            if ($tmp1170) goto $l1176;
            panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131168.$rawValue, ((panda$core$Int64) { 100 }));
            $tmp1170 = $tmp1177.value;
            $l1176:;
            panda$core$Bit $tmp1178 = { $tmp1170 };
            if ($tmp1178.value) {
            {
                goto $l1167;
            }
            }
            else {
            panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131168.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1180 = $tmp1181.value;
            if ($tmp1180) goto $l1182;
            panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131168.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1180 = $tmp1183.value;
            $l1182:;
            panda$core$Bit $tmp1184 = { $tmp1180 };
            bool $tmp1179 = $tmp1184.value;
            if ($tmp1179) goto $l1185;
            panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1114_131168.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1179 = $tmp1186.value;
            $l1185:;
            panda$core$Bit $tmp1187 = { $tmp1179 };
            if ($tmp1187.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1189 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1188 = $tmp1189;
                if (((panda$core$Bit) { stmt1188 == NULL }).value) {
                {
                    {
                        tmp1151190 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1147));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1163));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1150));
                        }
                        return tmp1151190;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1163, ((panda$core$Object*) stmt1188));
                goto $l1167;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1192 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1191 = $tmp1192;
                    if (((panda$core$Bit) { stmt1191 == NULL }).value) {
                    {
                        {
                            tmp1141193 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1191));
                            {
                                tmp1161194 = tmp1141193;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1147));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1163));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1150));
                                }
                                return tmp1161194;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1163, ((panda$core$Object*) stmt1191));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1191));
                }
            }
            }
            }
        }
    }
    }
    $l1167:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1196 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1196->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1196->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1198 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1147);
        panda$collections$ImmutableArray* $tmp1199 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1163);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1196, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1143.value).position, $tmp1198, $tmp1199);
        tmp1171195 = $tmp1196;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1150));
        }
        return tmp1171195;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1201;
    org$pandalanguage$pandac$ASTNode* expr1204;
    org$pandalanguage$pandac$ASTNode* tmp1181206;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1207;
    org$pandalanguage$pandac$ASTNode* tmp1191210;
    panda$collections$Array* whens1211;
    panda$collections$Array* other1214;
    org$pandalanguage$pandac$parser$Token token1217;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131219;
    org$pandalanguage$pandac$ASTNode* w1222;
    org$pandalanguage$pandac$ASTNode* tmp1201224;
    org$pandalanguage$pandac$parser$Token o1226;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1228;
    org$pandalanguage$pandac$ASTNode* tmp1211231;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251236;
    org$pandalanguage$pandac$ASTNode* stmt1248;
    org$pandalanguage$pandac$ASTNode* tmp1221250;
    org$pandalanguage$pandac$ASTNode* stmt1251;
    org$pandalanguage$pandac$ASTNode* tmp1231253;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1261;
    org$pandalanguage$pandac$ASTNode* tmp1241264;
    org$pandalanguage$pandac$ASTNode* tmp1251265;
    org$pandalanguage$pandac$ASTNode* tmp1261270;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1201, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1203 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1201, &$s1202);
    start1200 = $tmp1203;
    if (((panda$core$Bit) { !start1200.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1205 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1204 = $tmp1205;
    if (((panda$core$Bit) { expr1204 == NULL }).value) {
    {
        {
            tmp1181206 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
            return tmp1181206;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1207, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1209 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1207, &$s1208);
    if (((panda$core$Bit) { !$tmp1209.nonnull }).value) {
    {
        {
            tmp1191210 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
            return tmp1191210;
        }
    }
    }
    panda$collections$Array* $tmp1212 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1212->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1212->refCount.value = 1;
    panda$collections$Array$init($tmp1212);
    whens1211 = $tmp1212;
    other1214 = NULL;
    $l1215:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1218 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1217 = $tmp1218;
        {
            $match$1155_131219 = token1217.kind;
            panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131219.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1220.value) {
            {
                goto $l1216;
            }
            }
            else {
            panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131219.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1221.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1223 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1222 = $tmp1223;
                if (((panda$core$Bit) { w1222 == NULL }).value) {
                {
                    {
                        tmp1201224 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1211));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
                        }
                        return tmp1201224;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1211, ((panda$core$Object*) w1222));
            }
            }
            else {
            panda$core$Bit $tmp1225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131219.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1225.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1227 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1226 = $tmp1227;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1228, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1230 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1228, &$s1229);
                if (((panda$core$Bit) { !$tmp1230.nonnull }).value) {
                {
                    {
                        tmp1211231 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1211));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
                        }
                        return tmp1211231;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
                    panda$collections$Array* $tmp1232 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp1232->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp1232->refCount.value = 1;
                    panda$collections$Array$init($tmp1232);
                    other1214 = $tmp1232;
                }
                $l1234:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1237 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251236 = $tmp1237.kind;
                        panda$core$Bit $tmp1238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251236.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1238.value) {
                        {
                            goto $l1235;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251236.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1240 = $tmp1241.value;
                        if ($tmp1240) goto $l1242;
                        panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251236.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1240 = $tmp1243.value;
                        $l1242:;
                        panda$core$Bit $tmp1244 = { $tmp1240 };
                        bool $tmp1239 = $tmp1244.value;
                        if ($tmp1239) goto $l1245;
                        panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251236.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1239 = $tmp1246.value;
                        $l1245:;
                        panda$core$Bit $tmp1247 = { $tmp1239 };
                        if ($tmp1247.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1249 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1248 = $tmp1249;
                            if (((panda$core$Bit) { stmt1248 == NULL }).value) {
                            {
                                {
                                    tmp1221250 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1211));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
                                    }
                                    return tmp1221250;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1214, ((panda$core$Object*) stmt1248));
                            goto $l1235;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1252 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1251 = $tmp1252;
                            if (((panda$core$Bit) { stmt1251 == NULL }).value) {
                            {
                                {
                                    tmp1231253 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1211));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
                                    }
                                    return tmp1231253;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1214, ((panda$core$Object*) stmt1251));
                        }
                        }
                        }
                    }
                }
                }
                $l1235:;
                goto $l1216;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1256 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1217);
                panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1255, $tmp1256);
                panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, &$s1258);
                panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1254, $tmp1259);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1217, $tmp1260);
            }
            }
            }
            }
        }
    }
    }
    $l1216:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1261, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1263 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1261, &$s1262);
    if (((panda$core$Bit) { !$tmp1263.nonnull }).value) {
    {
        {
            tmp1241264 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
            }
            return tmp1241264;
        }
    }
    }
    if (((panda$core$Bit) { other1214 != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1266 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1266->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1266->refCount.value = 1;
            panda$collections$ImmutableArray* $tmp1268 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1211);
            panda$collections$ImmutableArray* $tmp1269 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1214);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1266, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1200.value).position, expr1204, $tmp1268, $tmp1269);
            tmp1251265 = $tmp1266;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
            }
            return tmp1251265;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1271 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1271->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1271->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1273 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1211);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1271, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1200.value).position, expr1204, $tmp1273, NULL);
        tmp1261270 = $tmp1271;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1214));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1204));
        }
        return tmp1261270;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1274;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1275;
    panda$collections$Array* result1278;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131283;
    org$pandalanguage$pandac$ASTNode* stmt1295;
    panda$collections$ImmutableArray* tmp1271297;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1298;
    panda$collections$ImmutableArray* tmp1281301;
    org$pandalanguage$pandac$ASTNode* stmt1302;
    panda$collections$ImmutableArray* tmp1291304;
    panda$collections$ImmutableArray* tmp1301305;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1275, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1277 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1275, &$s1276);
    start1274 = $tmp1277;
    if (((panda$core$Bit) { !start1274.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1279 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1279->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1279->refCount.value = 1;
    panda$collections$Array$init($tmp1279);
    result1278 = $tmp1279;
    $l1281:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1284 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131283 = $tmp1284.kind;
            panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131283.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1285.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1282;
            }
            }
            else {
            panda$core$Bit $tmp1288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131283.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1287 = $tmp1288.value;
            if ($tmp1287) goto $l1289;
            panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131283.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1287 = $tmp1290.value;
            $l1289:;
            panda$core$Bit $tmp1291 = { $tmp1287 };
            bool $tmp1286 = $tmp1291.value;
            if ($tmp1286) goto $l1292;
            panda$core$Bit $tmp1293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131283.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1286 = $tmp1293.value;
            $l1292:;
            panda$core$Bit $tmp1294 = { $tmp1286 };
            if ($tmp1294.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1296 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1295 = $tmp1296;
                if (((panda$core$Bit) { stmt1295 == NULL }).value) {
                {
                    {
                        tmp1271297 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1278));
                        return tmp1271297;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1298, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1300 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1298, &$s1299);
                if (((panda$core$Bit) { !$tmp1300.nonnull }).value) {
                {
                    {
                        tmp1281301 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1278));
                        return tmp1281301;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1278, ((panda$core$Object*) stmt1295));
                goto $l1282;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1303 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1302 = $tmp1303;
                if (((panda$core$Bit) { stmt1302 == NULL }).value) {
                {
                    {
                        tmp1291304 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1278));
                        return tmp1291304;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1278, ((panda$core$Object*) stmt1302));
            }
            }
            }
        }
    }
    }
    $l1282:;
    {
        panda$collections$ImmutableArray* $tmp1306 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1278);
        tmp1301305 = $tmp1306;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1278));
        return tmp1301305;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1307;
    org$pandalanguage$pandac$ASTNode* tmp1311309;
    org$pandalanguage$pandac$ASTNode* tmp1321310;
    org$pandalanguage$pandac$Position $tmp1313;
    panda$collections$ImmutableArray* $tmp1308 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    statements1307 = $tmp1308;
    if (((panda$core$Bit) { statements1307 == NULL }).value) {
    {
        {
            tmp1311309 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1307));
            return tmp1311309;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1311 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1311->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1311->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1313);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1311, ((panda$core$Int64) { 4 }), $tmp1313, statements1307);
        tmp1321310 = $tmp1311;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1307));
        return tmp1321310;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1314;
    org$pandalanguage$pandac$ASTNode* tmp1331316;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91317;
    org$pandalanguage$pandac$parser$Token op1380;
    org$pandalanguage$pandac$ASTNode* rvalue1382;
    org$pandalanguage$pandac$ASTNode* tmp1341384;
    org$pandalanguage$pandac$ASTNode* tmp1351385;
    org$pandalanguage$pandac$parser$Token op1393;
    org$pandalanguage$pandac$ASTNode* rvalue1395;
    org$pandalanguage$pandac$ASTNode* tmp1361397;
    org$pandalanguage$pandac$ASTNode* tmp1371398;
    org$pandalanguage$pandac$ASTNode* tmp1381403;
    org$pandalanguage$pandac$ASTNode* $tmp1315 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1314 = $tmp1315;
    if (((panda$core$Bit) { start1314 == NULL }).value) {
    {
        {
            tmp1331316 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1314));
            return tmp1331316;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1318 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91317 = $tmp1318.kind;
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1333 = $tmp1334.value;
        if ($tmp1333) goto $l1335;
        panda$core$Bit $tmp1336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1333 = $tmp1336.value;
        $l1335:;
        panda$core$Bit $tmp1337 = { $tmp1333 };
        bool $tmp1332 = $tmp1337.value;
        if ($tmp1332) goto $l1338;
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1332 = $tmp1339.value;
        $l1338:;
        panda$core$Bit $tmp1340 = { $tmp1332 };
        bool $tmp1331 = $tmp1340.value;
        if ($tmp1331) goto $l1341;
        panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1331 = $tmp1342.value;
        $l1341:;
        panda$core$Bit $tmp1343 = { $tmp1331 };
        bool $tmp1330 = $tmp1343.value;
        if ($tmp1330) goto $l1344;
        panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1330 = $tmp1345.value;
        $l1344:;
        panda$core$Bit $tmp1346 = { $tmp1330 };
        bool $tmp1329 = $tmp1346.value;
        if ($tmp1329) goto $l1347;
        panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1329 = $tmp1348.value;
        $l1347:;
        panda$core$Bit $tmp1349 = { $tmp1329 };
        bool $tmp1328 = $tmp1349.value;
        if ($tmp1328) goto $l1350;
        panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1328 = $tmp1351.value;
        $l1350:;
        panda$core$Bit $tmp1352 = { $tmp1328 };
        bool $tmp1327 = $tmp1352.value;
        if ($tmp1327) goto $l1353;
        panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1327 = $tmp1354.value;
        $l1353:;
        panda$core$Bit $tmp1355 = { $tmp1327 };
        bool $tmp1326 = $tmp1355.value;
        if ($tmp1326) goto $l1356;
        panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1326 = $tmp1357.value;
        $l1356:;
        panda$core$Bit $tmp1358 = { $tmp1326 };
        bool $tmp1325 = $tmp1358.value;
        if ($tmp1325) goto $l1359;
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1325 = $tmp1360.value;
        $l1359:;
        panda$core$Bit $tmp1361 = { $tmp1325 };
        bool $tmp1324 = $tmp1361.value;
        if ($tmp1324) goto $l1362;
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1324 = $tmp1363.value;
        $l1362:;
        panda$core$Bit $tmp1364 = { $tmp1324 };
        bool $tmp1323 = $tmp1364.value;
        if ($tmp1323) goto $l1365;
        panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1323 = $tmp1366.value;
        $l1365:;
        panda$core$Bit $tmp1367 = { $tmp1323 };
        bool $tmp1322 = $tmp1367.value;
        if ($tmp1322) goto $l1368;
        panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1322 = $tmp1369.value;
        $l1368:;
        panda$core$Bit $tmp1370 = { $tmp1322 };
        bool $tmp1321 = $tmp1370.value;
        if ($tmp1321) goto $l1371;
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1321 = $tmp1372.value;
        $l1371:;
        panda$core$Bit $tmp1373 = { $tmp1321 };
        bool $tmp1320 = $tmp1373.value;
        if ($tmp1320) goto $l1374;
        panda$core$Bit $tmp1375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1320 = $tmp1375.value;
        $l1374:;
        panda$core$Bit $tmp1376 = { $tmp1320 };
        bool $tmp1319 = $tmp1376.value;
        if ($tmp1319) goto $l1377;
        panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1319 = $tmp1378.value;
        $l1377:;
        panda$core$Bit $tmp1379 = { $tmp1319 };
        if ($tmp1379.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1381 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1380 = $tmp1381;
            org$pandalanguage$pandac$ASTNode* $tmp1383 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1382 = $tmp1383;
            if (((panda$core$Bit) { rvalue1382 == NULL }).value) {
            {
                {
                    tmp1341384 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1314));
                    return tmp1341384;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1386 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp1386->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1386->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1389 = (($fn1388) start1314->$class->vtable[2])(start1314);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1386, ((panda$core$Int64) { 2 }), $tmp1389, start1314, op1380.kind, rvalue1382);
                tmp1351385 = $tmp1386;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1314));
                return tmp1351385;
            }
        }
        }
        else {
        panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91317.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1390.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1391 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1391, &$s1392);
            org$pandalanguage$pandac$parser$Token $tmp1394 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1393 = $tmp1394;
            org$pandalanguage$pandac$ASTNode* $tmp1396 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1395 = $tmp1396;
            if (((panda$core$Bit) { rvalue1395 == NULL }).value) {
            {
                {
                    tmp1361397 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1314));
                    return tmp1361397;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1399 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp1399->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1399->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1402 = (($fn1401) start1314->$class->vtable[2])(start1314);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1399, ((panda$core$Int64) { 2 }), $tmp1402, start1314, op1393.kind, rvalue1395);
                tmp1371398 = $tmp1399;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1314));
                return tmp1371398;
            }
        }
        }
        else {
        {
            {
                tmp1381403 = start1314;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1314));
                return tmp1381403;
            }
        }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1314));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1404;
    org$pandalanguage$pandac$ASTNode* tmp1391406;
    org$pandalanguage$pandac$ASTNode* value1407;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1408;
    org$pandalanguage$pandac$ASTNode* tmp1401411;
    org$pandalanguage$pandac$ASTNode* tmp1411417;
    org$pandalanguage$pandac$ASTNode* tmp1421418;
    org$pandalanguage$pandac$ASTNode* $tmp1405 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1404 = $tmp1405;
    if (((panda$core$Bit) { t1404 == NULL }).value) {
    {
        {
            tmp1391406 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1404));
            return tmp1391406;
        }
    }
    }
    memset(&value1407, 0, sizeof(value1407));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1408, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1409 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1408);
    if (((panda$core$Bit) { $tmp1409.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1410 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1407 = $tmp1410;
        }
        if (((panda$core$Bit) { value1407 == NULL }).value) {
        {
            {
                tmp1401411 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1404));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1407));
                }
                return tmp1401411;
            }
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1412 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1412.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1413.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1414 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1414, &$s1415);
        {
            org$pandalanguage$pandac$ASTNode* $tmp1416 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1407 = $tmp1416;
        }
        if (((panda$core$Bit) { value1407 == NULL }).value) {
        {
            {
                tmp1411417 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1404));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1407));
                }
                return tmp1411417;
            }
        }
        }
    }
    }
    else {
    {
        {
            value1407 = NULL;
        }
    }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1419 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1419->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1419->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp1422 = (($fn1421) t1404->$class->vtable[2])(t1404);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1419, ((panda$core$Int64) { 11 }), $tmp1422, t1404, value1407);
        tmp1421418 = $tmp1419;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1404));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1407));
        }
        return tmp1421418;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1423;
    org$pandalanguage$pandac$Variable$Kind kind1425;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91426;
    org$pandalanguage$pandac$Variable$Kind $tmp1428;
    org$pandalanguage$pandac$Variable$Kind $tmp1430;
    org$pandalanguage$pandac$Variable$Kind $tmp1432;
    org$pandalanguage$pandac$Variable$Kind $tmp1434;
    panda$collections$Array* declarations1436;
    org$pandalanguage$pandac$ASTNode* decl1439;
    org$pandalanguage$pandac$ASTNode* tmp1431441;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1444;
    org$pandalanguage$pandac$ASTNode* decl1446;
    org$pandalanguage$pandac$ASTNode* tmp1441448;
    org$pandalanguage$pandac$ASTNode* tmp1451449;
    org$pandalanguage$pandac$ASTNode* tmp1461450;
    org$pandalanguage$pandac$parser$Token $tmp1424 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1423 = $tmp1424;
    memset(&kind1425, 0, sizeof(kind1425));
    {
        $match$1318_91426 = start1423.kind;
        panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91426.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1427.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1428, ((panda$core$Int64) { 0 }));
            kind1425 = $tmp1428;
        }
        }
        else {
        panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91426.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1429.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1430, ((panda$core$Int64) { 1 }));
            kind1425 = $tmp1430;
        }
        }
        else {
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91426.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1431.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1432, ((panda$core$Int64) { 3 }));
            kind1425 = $tmp1432;
        }
        }
        else {
        panda$core$Bit $tmp1433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91426.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1433.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1434, ((panda$core$Int64) { 2 }));
            kind1425 = $tmp1434;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1423, &$s1435);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1437 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1437->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1437->refCount.value = 1;
    panda$collections$Array$init($tmp1437);
    declarations1436 = $tmp1437;
    org$pandalanguage$pandac$ASTNode* $tmp1440 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1439 = $tmp1440;
    if (((panda$core$Bit) { decl1439 == NULL }).value) {
    {
        {
            tmp1431441 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1436));
            }
            return tmp1431441;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1436, ((panda$core$Object*) decl1439));
    $l1442:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1444, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1445 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1444);
    if (!((panda$core$Bit) { $tmp1445.nonnull }).value) goto $l1443;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1447 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        decl1446 = $tmp1447;
        if (((panda$core$Bit) { decl1446 == NULL }).value) {
        {
            {
                tmp1441448 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1446));
                {
                    tmp1451449 = tmp1441448;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1439));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1436));
                    }
                    return tmp1451449;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1436, ((panda$core$Object*) decl1446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1446));
    }
    goto $l1442;
    $l1443:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1451 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1451->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1451->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1453 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1436);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1451, ((panda$core$Int64) { 38 }), start1423.position, kind1425, $tmp1453);
        tmp1461450 = $tmp1451;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1436));
        }
        return tmp1461450;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1454;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1455;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1458;
    org$pandalanguage$pandac$ASTNode* target1462;
    panda$collections$Array* args1466;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1469;
    org$pandalanguage$pandac$ASTNode* expr1471;
    org$pandalanguage$pandac$ASTNode* tmp1471474;
    org$pandalanguage$pandac$ASTNode* tmp1501475;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1478;
    org$pandalanguage$pandac$ASTNode* tmp1481482;
    org$pandalanguage$pandac$ASTNode* tmp1511483;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1484;
    org$pandalanguage$pandac$ASTNode* tmp1491488;
    org$pandalanguage$pandac$ASTNode* tmp1521489;
    org$pandalanguage$pandac$ASTNode* tmp1531491;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1455, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1457 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1455, &$s1456);
    start1454 = $tmp1457;
    if (((panda$core$Bit) { !start1454.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1458, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1460 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1458, &$s1459);
    if (((panda$core$Bit) { !$tmp1460.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1461;
    $tmp1461 = (panda$core$Bit$wrapper*) pandaZAlloc(13);
    $tmp1461->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp1461->refCount = 1;
    $tmp1461->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1461));
    org$pandalanguage$pandac$ASTNode* $tmp1463 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1463->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1463->refCount.value = 1;
    panda$core$String* $tmp1465 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1454.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1463, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1454.value).position, $tmp1465);
    target1462 = $tmp1463;
    panda$collections$Array* $tmp1467 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1467->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1467->refCount.value = 1;
    panda$collections$Array$init($tmp1467);
    args1466 = $tmp1467;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1469, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1470 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1469);
    if (((panda$core$Bit) { !$tmp1470.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1472 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1471 = $tmp1472;
        if (((panda$core$Bit) { expr1471 == NULL }).value) {
        {
            panda$core$Object* $tmp1473 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1471474 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1471));
                {
                    tmp1501475 = tmp1471474;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1462));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1466));
                    }
                    return tmp1501475;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1466, ((panda$core$Object*) expr1471));
        $l1476:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1478, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1479 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1478);
        if (!((panda$core$Bit) { $tmp1479.nonnull }).value) goto $l1477;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1471));
                org$pandalanguage$pandac$ASTNode* $tmp1480 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr1471 = $tmp1480;
            }
            if (((panda$core$Bit) { expr1471 == NULL }).value) {
            {
                panda$core$Object* $tmp1481 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    tmp1481482 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1471));
                    {
                        tmp1511483 = tmp1481482;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1462));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1466));
                        }
                        return tmp1511483;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1466, ((panda$core$Object*) expr1471));
        }
        goto $l1476;
        $l1477:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1484, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1486 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1484, &$s1485);
        if (((panda$core$Bit) { !$tmp1486.nonnull }).value) {
        {
            panda$core$Object* $tmp1487 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1491488 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1471));
                {
                    tmp1521489 = tmp1491488;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1462));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1466));
                    }
                    return tmp1521489;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1471));
    }
    }
    panda$core$Object* $tmp1490 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    {
        org$pandalanguage$pandac$ASTNode* $tmp1492 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1492->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1492->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1494 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1466);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1492, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1454.value).position, target1462, $tmp1494);
        tmp1531491 = $tmp1492;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1462));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1466));
        }
        return tmp1531491;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1495;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1496;
    org$pandalanguage$pandac$parser$Token$nullable label1499;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1500;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1496, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1498 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1496, &$s1497);
    start1495 = $tmp1498;
    if (((panda$core$Bit) { !start1495.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1500, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1501 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1500);
    label1499 = $tmp1501;
    if (((panda$core$Bit) { label1499.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1502 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1502->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1502->refCount.value = 1;
        panda$core$String* $tmp1504 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1499.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1502, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1495.value).position, $tmp1504);
        return $tmp1502;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1505 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1505->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1505->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1505, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1495.value).position, NULL);
    return $tmp1505;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1507;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1508;
    org$pandalanguage$pandac$parser$Token$nullable label1511;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1512;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1508, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1510 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1508, &$s1509);
    start1507 = $tmp1510;
    if (((panda$core$Bit) { !start1507.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1512, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1513 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1512);
    label1511 = $tmp1513;
    if (((panda$core$Bit) { label1511.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1514 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1514->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1514->refCount.value = 1;
        panda$core$String* $tmp1516 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1511.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1514, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1507.value).position, $tmp1516);
        return $tmp1514;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1517 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1517->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1517->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1517, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1507.value).position, NULL);
    return $tmp1517;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1519;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1520;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_91523;
    panda$collections$Array* children1536;
    org$pandalanguage$pandac$ASTNode* expr1539;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1520, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1522 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1520, &$s1521);
    start1519 = $tmp1522;
    if (((panda$core$Bit) { !start1519.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1524 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_91523 = $tmp1524.kind;
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91523.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1526 = $tmp1527.value;
        if ($tmp1526) goto $l1528;
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91523.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1526 = $tmp1529.value;
        $l1528:;
        panda$core$Bit $tmp1530 = { $tmp1526 };
        bool $tmp1525 = $tmp1530.value;
        if ($tmp1525) goto $l1531;
        panda$core$Bit $tmp1532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91523.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1525 = $tmp1532.value;
        $l1531:;
        panda$core$Bit $tmp1533 = { $tmp1525 };
        if ($tmp1533.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1534 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1534->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1534->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1534, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1519.value).position, NULL);
            return $tmp1534;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1537 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp1537->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1537->refCount.value = 1;
            panda$collections$Array$init($tmp1537);
            children1536 = $tmp1537;
            org$pandalanguage$pandac$ASTNode* $tmp1540 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1539 = $tmp1540;
            if (((panda$core$Bit) { expr1539 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1536, ((panda$core$Object*) expr1539));
            org$pandalanguage$pandac$ASTNode* $tmp1541 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1541->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1541->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1541, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1519.value).position, expr1539);
            return $tmp1541;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_91543;
    {
        org$pandalanguage$pandac$parser$Token $tmp1544 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_91543 = $tmp1544.kind;
        panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91543.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1545.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1546 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1546;
        }
        }
        else {
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91543.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1547.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1548 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1548;
        }
        }
        else {
        panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91543.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1549.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1550;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_91551;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1561;
    {
        org$pandalanguage$pandac$parser$Token $tmp1552 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_91551 = $tmp1552.kind;
        panda$core$Bit $tmp1553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91551.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1553.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1554 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1554;
        }
        }
        else {
        panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91551.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1555.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1556 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1556;
        }
        }
        else {
        panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91551.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1557.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1558 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1558;
        }
        }
        else {
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91551.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1559.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1560 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1560;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1561, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1561, &$s1562);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_91563;
    org$pandalanguage$pandac$parser$Token id1582;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1584;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1611;
    {
        org$pandalanguage$pandac$parser$Token $tmp1564 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_91563 = $tmp1564.kind;
        panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1565.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1566 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1566;
        }
        }
        else {
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1567.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1568 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1568;
        }
        }
        else {
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1569.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1570 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1570;
        }
        }
        else {
        panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1571.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1572 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1572;
        }
        }
        else {
        panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1573.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1574 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1574;
        }
        }
        else {
        panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1575.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1576 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1576;
        }
        }
        else {
        panda$core$Bit $tmp1577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1577.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1578 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1578;
        }
        }
        else {
        panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1579.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1580 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1580;
        }
        }
        else {
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1581.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1583 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1582 = $tmp1583;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1584, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1585 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1584);
            if (((panda$core$Bit) { $tmp1585.nonnull }).value) {
            {
                panda$core$String* $tmp1586 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1582);
                org$pandalanguage$pandac$ASTNode* $tmp1587 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1586);
                return $tmp1587;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1582);
            org$pandalanguage$pandac$ASTNode* $tmp1588 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1588;
        }
        }
        else {
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1589 = $tmp1590.value;
        if ($tmp1589) goto $l1591;
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1589 = $tmp1592.value;
        $l1591:;
        panda$core$Bit $tmp1593 = { $tmp1589 };
        if ($tmp1593.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1594 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1594;
        }
        }
        else {
        panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1597 = $tmp1598.value;
        if ($tmp1597) goto $l1599;
        panda$core$Bit $tmp1600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1597 = $tmp1600.value;
        $l1599:;
        panda$core$Bit $tmp1601 = { $tmp1597 };
        bool $tmp1596 = $tmp1601.value;
        if ($tmp1596) goto $l1602;
        panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1596 = $tmp1603.value;
        $l1602:;
        panda$core$Bit $tmp1604 = { $tmp1596 };
        bool $tmp1595 = $tmp1604.value;
        if ($tmp1595) goto $l1605;
        panda$core$Bit $tmp1606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1595 = $tmp1606.value;
        $l1605:;
        panda$core$Bit $tmp1607 = { $tmp1595 };
        if ($tmp1607.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1608 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1608;
        }
        }
        else {
        panda$core$Bit $tmp1609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91563.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1609.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1610 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1610;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1611, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1611, &$s1612);
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
    org$pandalanguage$pandac$parser$Token$nullable start1613;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1614;
    org$pandalanguage$pandac$parser$Token$nullable next1617;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1618;
    panda$core$MutableString* name1621;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1627;
    panda$core$Char8 $tmp1629;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1630;
    org$pandalanguage$pandac$ASTNode* tmp1541633;
    org$pandalanguage$pandac$ASTNode* tmp1551635;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1614, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1616 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1614, &$s1615);
    start1613 = $tmp1616;
    if (((panda$core$Bit) { !start1613.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1618, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1620 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1618, &$s1619);
    next1617 = $tmp1620;
    if (((panda$core$Bit) { !next1617.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1622 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1622->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1622->refCount.value = 1;
    panda$core$String* $tmp1624 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1617.value));
    panda$core$MutableString$init$panda$core$String($tmp1622, $tmp1624);
    name1621 = $tmp1622;
    $l1625:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1627, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1628 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1627);
        next1617 = $tmp1628;
        if (((panda$core$Bit) { !next1617.nonnull }).value) {
        {
            goto $l1626;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1629, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1621, $tmp1629);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1630, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1632 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1630, &$s1631);
        next1617 = $tmp1632;
        if (((panda$core$Bit) { !next1617.nonnull }).value) {
        {
            {
                tmp1541633 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1621));
                return tmp1541633;
            }
        }
        }
        panda$core$String* $tmp1634 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1617.value));
        panda$core$MutableString$append$panda$core$String(name1621, $tmp1634);
    }
    }
    $l1626:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1636 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1636->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1636->refCount.value = 1;
        panda$core$String* $tmp1638 = panda$core$MutableString$finish$R$panda$core$String(name1621);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1636, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start1613.value).position, $tmp1638);
        tmp1551635 = $tmp1636;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1621));
        return tmp1551635;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1639;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1640;
    org$pandalanguage$pandac$parser$Token$nullable next1643;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1644;
    panda$core$MutableString* name1647;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1653;
    panda$core$Char8 $tmp1655;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1656;
    org$pandalanguage$pandac$ASTNode* tmp1561659;
    org$pandalanguage$pandac$ASTNode* tmp1571661;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1640, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1642 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1640, &$s1641);
    start1639 = $tmp1642;
    if (((panda$core$Bit) { !start1639.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1644, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1646 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1644, &$s1645);
    next1643 = $tmp1646;
    if (((panda$core$Bit) { !next1643.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1648 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1648->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1648->refCount.value = 1;
    panda$core$String* $tmp1650 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1643.value));
    panda$core$MutableString$init$panda$core$String($tmp1648, $tmp1650);
    name1647 = $tmp1648;
    $l1651:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1653, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1654 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1653);
        next1643 = $tmp1654;
        if (((panda$core$Bit) { !next1643.nonnull }).value) {
        {
            goto $l1652;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1655, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1647, $tmp1655);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1656, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1658 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1656, &$s1657);
        next1643 = $tmp1658;
        if (((panda$core$Bit) { !next1643.nonnull }).value) {
        {
            {
                tmp1561659 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1647));
                return tmp1561659;
            }
        }
        }
        panda$core$String* $tmp1660 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1643.value));
        panda$core$MutableString$append$panda$core$String(name1647, $tmp1660);
    }
    }
    $l1652:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1662 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1662->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1662->refCount.value = 1;
        panda$core$String* $tmp1664 = panda$core$MutableString$finish$R$panda$core$String(name1647);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1662, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start1639.value).position, $tmp1664);
        tmp1571661 = $tmp1662;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1647));
        return tmp1571661;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1665;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1666;
    org$pandalanguage$pandac$parser$Token$nullable id1669;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1670;
    panda$collections$Array* parameters1673;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1676;
    org$pandalanguage$pandac$ASTNode* t1678;
    panda$collections$ImmutableArray* tmp1581680;
    panda$collections$ImmutableArray* tmp1591681;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1690;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1692;
    panda$collections$ImmutableArray* tmp1611695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1696;
    org$pandalanguage$pandac$ASTNode* t1698;
    panda$collections$ImmutableArray* tmp1601700;
    panda$collections$ImmutableArray* tmp1621701;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1708;
    panda$collections$ImmutableArray* tmp1631711;
    panda$collections$ImmutableArray* tmp1641712;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1666, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1668 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1666, &$s1667);
    start1665 = $tmp1668;
    if (((panda$core$Bit) { !start1665.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1670, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1672 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1670, &$s1671);
    id1669 = $tmp1672;
    if (((panda$core$Bit) { !id1669.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1674 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1674->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1674->refCount.value = 1;
    panda$collections$Array$init($tmp1674);
    parameters1673 = $tmp1674;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1676, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1677 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1676);
    if (((panda$core$Bit) { $tmp1677.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1679 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1678 = $tmp1679;
        if (((panda$core$Bit) { t1678 == NULL }).value) {
        {
            {
                tmp1581680 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1678));
                {
                    tmp1591681 = tmp1581680;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1673));
                    return tmp1591681;
                }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1682 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1682->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1682->refCount.value = 1;
        panda$core$String* $tmp1684 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1669.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1682, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1669.value).position, $tmp1684, t1678);
        panda$collections$Array$add$panda$collections$Array$T(parameters1673, ((panda$core$Object*) $tmp1682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1678));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1685 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1685->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1685->refCount.value = 1;
        panda$core$String* $tmp1687 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1669.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1685, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1669.value).position, $tmp1687);
        panda$collections$Array$add$panda$collections$Array$T(parameters1673, ((panda$core$Object*) $tmp1685));
    }
    }
    $l1688:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1690, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1691 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1690);
    if (!((panda$core$Bit) { $tmp1691.nonnull }).value) goto $l1689;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1692, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1694 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1692, &$s1693);
        id1669 = $tmp1694;
        if (((panda$core$Bit) { !id1669.nonnull }).value) {
        {
            {
                tmp1611695 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1673));
                return tmp1611695;
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1696, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1697 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1696);
        if (((panda$core$Bit) { $tmp1697.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1699 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1698 = $tmp1699;
            if (((panda$core$Bit) { t1698 == NULL }).value) {
            {
                {
                    tmp1601700 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1698));
                    {
                        tmp1621701 = tmp1601700;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1673));
                        return tmp1621701;
                    }
                }
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1702 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1702->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1702->refCount.value = 1;
            panda$core$String* $tmp1704 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1669.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1702, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1669.value).position, $tmp1704, t1698);
            panda$collections$Array$add$panda$collections$Array$T(parameters1673, ((panda$core$Object*) $tmp1702));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1698));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1705 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1705->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1705->refCount.value = 1;
            panda$core$String* $tmp1707 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1669.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1705, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1669.value).position, $tmp1707);
            panda$collections$Array$add$panda$collections$Array$T(parameters1673, ((panda$core$Object*) $tmp1705));
        }
        }
    }
    goto $l1688;
    $l1689:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1708, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1710 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1708, &$s1709);
    if (((panda$core$Bit) { !$tmp1710.nonnull }).value) {
    {
        {
            tmp1631711 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1673));
            return tmp1631711;
        }
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1713 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1673);
        tmp1641712 = $tmp1713;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1673));
        return tmp1641712;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1714;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1715;
    panda$collections$Array* result1718;
    org$pandalanguage$pandac$ASTNode* t1721;
    panda$collections$ImmutableArray* tmp1651723;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1726;
    panda$collections$ImmutableArray* tmp1661729;
    panda$collections$ImmutableArray* tmp1671730;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1715, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1717 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1715, &$s1716);
    start1714 = $tmp1717;
    if (((panda$core$Bit) { !start1714.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1719 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1719->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1719->refCount.value = 1;
    panda$collections$Array$init($tmp1719);
    result1718 = $tmp1719;
    org$pandalanguage$pandac$ASTNode* $tmp1722 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1721 = $tmp1722;
    if (((panda$core$Bit) { t1721 == NULL }).value) {
    {
        {
            tmp1651723 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1721));
            }
            return tmp1651723;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1718, ((panda$core$Object*) t1721));
    $l1724:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1726, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1727 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1726);
    if (!((panda$core$Bit) { $tmp1727.nonnull }).value) goto $l1725;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1721));
            org$pandalanguage$pandac$ASTNode* $tmp1728 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1721 = $tmp1728;
        }
        if (((panda$core$Bit) { t1721 == NULL }).value) {
        {
            {
                tmp1661729 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1718));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1721));
                }
                return tmp1661729;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1718, ((panda$core$Object*) t1721));
    }
    goto $l1724;
    $l1725:;
    {
        panda$collections$ImmutableArray* $tmp1731 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1718);
        tmp1671730 = $tmp1731;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1718));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1721));
        }
        return tmp1671730;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1732;
    org$pandalanguage$pandac$parser$Token$nullable next1737;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1738;
    panda$collections$ImmutableArray* tmp1681743;
    panda$collections$Array* $tmp1733 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1733->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1733->refCount.value = 1;
    panda$collections$Array$init($tmp1733);
    result1732 = $tmp1733;
    $l1735:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1738, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1739 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1738);
        next1737 = $tmp1739;
        if (((panda$core$Bit) { !next1737.nonnull }).value) {
        {
            goto $l1736;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1740 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1740->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1740->refCount.value = 1;
        panda$core$String* $tmp1742 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1737.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1740, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1737.value).position, $tmp1742);
        panda$collections$Array$add$panda$collections$Array$T(result1732, ((panda$core$Object*) $tmp1740));
    }
    }
    $l1736:;
    {
        panda$collections$ImmutableArray* $tmp1744 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1732);
        tmp1681743 = $tmp1744;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1732));
        return tmp1681743;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1745;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1746;
    panda$core$MutableString* result1749;
    org$pandalanguage$pandac$parser$Token next1754;
    org$pandalanguage$pandac$ASTNode* tmp1691759;
    org$pandalanguage$pandac$ASTNode* tmp1701761;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1746, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1748 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1746, &$s1747);
    start1745 = $tmp1748;
    if (((panda$core$Bit) { !start1745.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1750 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1750->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1750->refCount.value = 1;
    panda$core$MutableString$init($tmp1750);
    result1749 = $tmp1750;
    $l1752:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1755 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1754 = $tmp1755;
        panda$core$Bit $tmp1756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1754.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1756.value) {
        {
            goto $l1753;
        }
        }
        panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1754.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1757.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1745.value), &$s1758);
            {
                tmp1691759 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1749));
                return tmp1691759;
            }
        }
        }
        panda$core$String* $tmp1760 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1754);
        panda$core$MutableString$append$panda$core$String(result1749, $tmp1760);
    }
    }
    $l1753:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1762 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1762->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1762->refCount.value = 1;
        panda$core$String* $tmp1764 = panda$core$MutableString$finish$R$panda$core$String(result1749);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1762, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$parser$Token) start1745.value).position, $tmp1764);
        tmp1701761 = $tmp1762;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1749));
        return tmp1701761;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1765;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1766;
    org$pandalanguage$pandac$ASTNode* t1769;
    org$pandalanguage$pandac$ASTNode* tmp1711771;
    org$pandalanguage$pandac$ASTNode* tmp1721772;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1766, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1768 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1766, &$s1767);
    id1765 = $tmp1768;
    if (((panda$core$Bit) { !id1765.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1770 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1769 = $tmp1770;
    if (((panda$core$Bit) { t1769 == NULL }).value) {
    {
        {
            tmp1711771 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1769));
            return tmp1711771;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1773 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1773->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1773->refCount.value = 1;
        panda$core$String* $tmp1775 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1765.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1773, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) id1765.value).position, $tmp1775, t1769);
        tmp1721772 = $tmp1773;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1769));
        return tmp1721772;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1776;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1777;
    panda$collections$Array* result1780;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1783;
    org$pandalanguage$pandac$ASTNode* param1785;
    panda$collections$ImmutableArray* tmp1731787;
    panda$collections$ImmutableArray* tmp1761788;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1791;
    panda$collections$ImmutableArray* tmp1741794;
    panda$collections$ImmutableArray* tmp1771795;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1796;
    panda$collections$ImmutableArray* tmp1751799;
    panda$collections$ImmutableArray* tmp1781800;
    panda$collections$ImmutableArray* tmp1791801;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1777, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1779 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1777, &$s1778);
    start1776 = $tmp1779;
    if (((panda$core$Bit) { !start1776.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1781 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1781->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1781->refCount.value = 1;
    panda$collections$Array$init($tmp1781);
    result1780 = $tmp1781;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1783, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1784 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1783);
    if (((panda$core$Bit) { !$tmp1784.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1786 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1785 = $tmp1786;
        if (((panda$core$Bit) { param1785 == NULL }).value) {
        {
            {
                tmp1731787 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1785));
                {
                    tmp1761788 = tmp1731787;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1780));
                    return tmp1761788;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1780, ((panda$core$Object*) param1785));
        $l1789:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1791, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1792 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1791);
        if (!((panda$core$Bit) { $tmp1792.nonnull }).value) goto $l1790;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1793 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                param1785 = $tmp1793;
            }
            if (((panda$core$Bit) { param1785 == NULL }).value) {
            {
                {
                    tmp1741794 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1785));
                    {
                        tmp1771795 = tmp1741794;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1780));
                        return tmp1771795;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1780, ((panda$core$Object*) param1785));
        }
        goto $l1789;
        $l1790:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1796, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1798 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1796, &$s1797);
        if (((panda$core$Bit) { !$tmp1798.nonnull }).value) {
        {
            {
                tmp1751799 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1785));
                {
                    tmp1781800 = tmp1751799;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1780));
                    return tmp1781800;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1785));
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1802 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1780);
        tmp1791801 = $tmp1802;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1780));
        return tmp1791801;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1803;
    org$pandalanguage$pandac$parser$Token$nullable start1804;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1805;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1807;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1810;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1811;
    panda$core$String* name1812;
    org$pandalanguage$pandac$ASTNode* tmp1801814;
    panda$collections$ImmutableArray* params1815;
    org$pandalanguage$pandac$ASTNode* tmp1811817;
    org$pandalanguage$pandac$ASTNode* returnType1818;
    org$pandalanguage$pandac$ASTNode* tmp1821822;
    panda$collections$ImmutableArray* body1823;
    org$pandalanguage$pandac$ASTNode* tmp1831827;
    org$pandalanguage$pandac$parser$Token token1828;
    panda$core$String* tokenText1830;
    org$pandalanguage$pandac$ASTNode* post1843;
    org$pandalanguage$pandac$ASTNode* tmp1841845;
    org$pandalanguage$pandac$ASTNode* tmp1851846;
    org$pandalanguage$pandac$ASTNode* tmp1861847;
    memset(&kind1803, 0, sizeof(kind1803));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1805, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1806 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1805);
    start1804 = $tmp1806;
    if (((panda$core$Bit) { !start1804.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1807, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1809 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1807, &$s1808);
        start1804 = $tmp1809;
        if (((panda$core$Bit) { !start1804.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1810, ((panda$core$Int64) { 0 }));
        kind1803 = $tmp1810;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1811, ((panda$core$Int64) { 1 }));
        kind1803 = $tmp1811;
    }
    }
    panda$core$String* $tmp1813 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1812 = $tmp1813;
    if (((panda$core$Bit) { name1812 == NULL }).value) {
    {
        {
            tmp1801814 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1812));
            return tmp1801814;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1816 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1815 = $tmp1816;
    if (((panda$core$Bit) { params1815 == NULL }).value) {
    {
        {
            tmp1811817 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1815));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1812));
            }
            return tmp1811817;
        }
    }
    }
    memset(&returnType1818, 0, sizeof(returnType1818));
    org$pandalanguage$pandac$parser$Token $tmp1819 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1819.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1820.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1821 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            returnType1818 = $tmp1821;
        }
        if (((panda$core$Bit) { returnType1818 == NULL }).value) {
        {
            {
                tmp1821822 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1815));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1818));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1812));
                }
                return tmp1821822;
            }
        }
        }
    }
    }
    else {
    {
        {
            returnType1818 = NULL;
        }
    }
    }
    memset(&body1823, 0, sizeof(body1823));
    org$pandalanguage$pandac$parser$Token $tmp1824 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1824.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1825.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp1826 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            body1823 = $tmp1826;
        }
        if (((panda$core$Bit) { body1823 == NULL }).value) {
        {
            {
                tmp1831827 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1823));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1815));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1818));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1812));
                }
                return tmp1831827;
            }
        }
        }
    }
    }
    else {
    {
        {
            body1823 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1829 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1828 = $tmp1829;
    panda$core$String* $tmp1831 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1828);
    tokenText1830 = $tmp1831;
    panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1828.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1832 = $tmp1833.value;
    if (!$tmp1832) goto $l1834;
    panda$core$Bit $tmp1837 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1830, &$s1836);
    bool $tmp1835 = $tmp1837.value;
    if ($tmp1835) goto $l1838;
    panda$core$Bit $tmp1840 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1830, &$s1839);
    $tmp1835 = $tmp1840.value;
    $l1838:;
    panda$core$Bit $tmp1841 = { $tmp1835 };
    $tmp1832 = $tmp1841.value;
    $l1834:;
    panda$core$Bit $tmp1842 = { $tmp1832 };
    if ($tmp1842.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1844 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1843 = $tmp1844;
        if (((panda$core$Bit) { post1843 == NULL }).value) {
        {
            {
                tmp1841845 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1843));
                {
                    tmp1851846 = tmp1841845;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1823));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1815));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1830));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1818));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1812));
                    }
                    return tmp1851846;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1843));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1848 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1848->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1848->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1848, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1804.value).position, p_doccomment, p_annotations, kind1803, name1812, params1815, returnType1818, body1823);
        tmp1861847 = $tmp1848;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1812));
        }
        return tmp1861847;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1850;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1851;
    panda$collections$ImmutableArray* params1854;
    org$pandalanguage$pandac$ASTNode* tmp1871856;
    panda$collections$ImmutableArray* b1857;
    org$pandalanguage$pandac$ASTNode* tmp1881859;
    org$pandalanguage$pandac$parser$Token token1860;
    panda$core$String* tokenText1862;
    org$pandalanguage$pandac$ASTNode* post1875;
    org$pandalanguage$pandac$ASTNode* tmp1891877;
    org$pandalanguage$pandac$ASTNode* tmp1901878;
    org$pandalanguage$pandac$ASTNode* tmp1911879;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1882;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1851, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1853 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1851, &$s1852);
    start1850 = $tmp1853;
    if (((panda$core$Bit) { !start1850.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1855 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1854 = $tmp1855;
    if (((panda$core$Bit) { params1854 == NULL }).value) {
    {
        {
            tmp1871856 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1854));
            return tmp1871856;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1858 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    b1857 = $tmp1858;
    if (((panda$core$Bit) { b1857 == NULL }).value) {
    {
        {
            tmp1881859 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1857));
            }
            return tmp1881859;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1861 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1860 = $tmp1861;
    panda$core$String* $tmp1863 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1860);
    tokenText1862 = $tmp1863;
    panda$core$Bit $tmp1865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1860.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1864 = $tmp1865.value;
    if (!$tmp1864) goto $l1866;
    panda$core$Bit $tmp1869 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1862, &$s1868);
    bool $tmp1867 = $tmp1869.value;
    if ($tmp1867) goto $l1870;
    panda$core$Bit $tmp1872 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1862, &$s1871);
    $tmp1867 = $tmp1872.value;
    $l1870:;
    panda$core$Bit $tmp1873 = { $tmp1867 };
    $tmp1864 = $tmp1873.value;
    $l1866:;
    panda$core$Bit $tmp1874 = { $tmp1864 };
    if ($tmp1874.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1876 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1875 = $tmp1876;
        if (((panda$core$Bit) { post1875 == NULL }).value) {
        {
            {
                tmp1891877 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1875));
                {
                    tmp1901878 = tmp1891877;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1854));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1862));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1857));
                    }
                    return tmp1901878;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1875));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1880 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1880->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1880->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1882, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1880, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1850.value).position, p_doccomment, p_annotations, $tmp1882, &$s1883, params1854, NULL, b1857);
        tmp1911879 = $tmp1880;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1854));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1862));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1857));
        }
        return tmp1911879;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1884;
    org$pandalanguage$pandac$ASTNode* tmp1921886;
    org$pandalanguage$pandac$ASTNode* tmp1931887;
    org$pandalanguage$pandac$ASTNode* $tmp1885 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1884 = $tmp1885;
    if (((panda$core$Bit) { decl1884 == NULL }).value) {
    {
        {
            tmp1921886 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1884));
            return tmp1921886;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1888 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1888->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1888->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp1891 = (($fn1890) decl1884->$class->vtable[2])(decl1884);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1888, ((panda$core$Int64) { 14 }), $tmp1891, p_doccomment, p_annotations, decl1884);
        tmp1931887 = $tmp1888;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1884));
        return tmp1931887;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1892;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1893;
    panda$collections$Array* fields1896;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1899;
    org$pandalanguage$pandac$ASTNode* field1903;
    org$pandalanguage$pandac$ASTNode* tmp1941905;
    org$pandalanguage$pandac$ASTNode* tmp1961906;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1909;
    org$pandalanguage$pandac$ASTNode* tmp1951912;
    org$pandalanguage$pandac$ASTNode* tmp1971913;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1914;
    org$pandalanguage$pandac$ASTNode* tmp1981917;
    org$pandalanguage$pandac$ASTNode* tmp1991918;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1893, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1895 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1893, &$s1894);
    name1892 = $tmp1895;
    if (((panda$core$Bit) { !name1892.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1897 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1897->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1897->refCount.value = 1;
    panda$collections$Array$init($tmp1897);
    fields1896 = $tmp1897;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1899, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1900 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1899);
    if (((panda$core$Bit) { $tmp1900.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1901 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1902 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1901.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1902.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1904 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1903 = $tmp1904;
            if (((panda$core$Bit) { field1903 == NULL }).value) {
            {
                {
                    tmp1941905 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1903));
                    {
                        tmp1961906 = tmp1941905;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1896));
                        return tmp1961906;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1896, ((panda$core$Object*) field1903));
            $l1907:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1909, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1910 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1909);
            if (!((panda$core$Bit) { $tmp1910.nonnull }).value) goto $l1908;
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1903));
                    org$pandalanguage$pandac$ASTNode* $tmp1911 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    field1903 = $tmp1911;
                }
                if (((panda$core$Bit) { field1903 == NULL }).value) {
                {
                    {
                        tmp1951912 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1903));
                        {
                            tmp1971913 = tmp1951912;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1896));
                            return tmp1971913;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1896, ((panda$core$Object*) field1903));
            }
            goto $l1907;
            $l1908:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1903));
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1914, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1916 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1914, &$s1915);
        if (((panda$core$Bit) { !$tmp1916.nonnull }).value) {
        {
            {
                tmp1981917 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1896));
                return tmp1981917;
            }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1919 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1919->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1919->refCount.value = 1;
        panda$core$String* $tmp1921 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1892.value));
        panda$collections$ImmutableArray* $tmp1922 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1896);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1919, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1892.value).position, p_doccomment, $tmp1921, $tmp1922);
        tmp1991918 = $tmp1919;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1896));
        return tmp1991918;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1923;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1924;
    org$pandalanguage$pandac$parser$Token$nullable name1927;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1928;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1931;
    panda$collections$Array* members1934;
    org$pandalanguage$pandac$ASTNode* dc1937;
    org$pandalanguage$pandac$parser$Token next1940;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_131942;
    org$pandalanguage$pandac$ASTNode* c1988;
    org$pandalanguage$pandac$ASTNode* tmp2001990;
    panda$collections$ImmutableArray* a1991;
    org$pandalanguage$pandac$parser$Token next1996;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_131998;
    org$pandalanguage$pandac$ASTNode* tmp2012007;
    org$pandalanguage$pandac$ASTNode* tmp2022020;
    org$pandalanguage$pandac$ASTNode* decl2023;
    org$pandalanguage$pandac$ASTNode* tmp2032025;
    org$pandalanguage$pandac$ASTNode* decl2029;
    org$pandalanguage$pandac$ASTNode* tmp2042031;
    org$pandalanguage$pandac$ASTNode* decl2035;
    org$pandalanguage$pandac$ASTNode* tmp2052037;
    org$pandalanguage$pandac$ASTNode* decl2045;
    org$pandalanguage$pandac$ASTNode* tmp2062047;
    org$pandalanguage$pandac$ASTNode* decl2063;
    org$pandalanguage$pandac$ASTNode* tmp2072065;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2069;
    org$pandalanguage$pandac$ASTNode* tmp2082076;
    org$pandalanguage$pandac$ASTNode* tmp2092077;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2080;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1924, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1926 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1924, &$s1925);
    start1923 = $tmp1926;
    if (((panda$core$Bit) { !start1923.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1928, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1930 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1928, &$s1929);
    name1927 = $tmp1930;
    if (((panda$core$Bit) { !name1927.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1931, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1933 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1931, &$s1932);
    if (((panda$core$Bit) { !$tmp1933.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1935 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1935->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1935->refCount.value = 1;
    panda$collections$Array$init($tmp1935);
    members1934 = $tmp1935;
    dc1937 = NULL;
    $l1938:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1941 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1940 = $tmp1941;
        {
            $match$1854_131942 = next1940.kind;
            panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1951 = $tmp1952.value;
            if ($tmp1951) goto $l1953;
            panda$core$Bit $tmp1954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1951 = $tmp1954.value;
            $l1953:;
            panda$core$Bit $tmp1955 = { $tmp1951 };
            bool $tmp1950 = $tmp1955.value;
            if ($tmp1950) goto $l1956;
            panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1950 = $tmp1957.value;
            $l1956:;
            panda$core$Bit $tmp1958 = { $tmp1950 };
            bool $tmp1949 = $tmp1958.value;
            if ($tmp1949) goto $l1959;
            panda$core$Bit $tmp1960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1949 = $tmp1960.value;
            $l1959:;
            panda$core$Bit $tmp1961 = { $tmp1949 };
            bool $tmp1948 = $tmp1961.value;
            if ($tmp1948) goto $l1962;
            panda$core$Bit $tmp1963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1948 = $tmp1963.value;
            $l1962:;
            panda$core$Bit $tmp1964 = { $tmp1948 };
            bool $tmp1947 = $tmp1964.value;
            if ($tmp1947) goto $l1965;
            panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1947 = $tmp1966.value;
            $l1965:;
            panda$core$Bit $tmp1967 = { $tmp1947 };
            bool $tmp1946 = $tmp1967.value;
            if ($tmp1946) goto $l1968;
            panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1946 = $tmp1969.value;
            $l1968:;
            panda$core$Bit $tmp1970 = { $tmp1946 };
            bool $tmp1945 = $tmp1970.value;
            if ($tmp1945) goto $l1971;
            panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1945 = $tmp1972.value;
            $l1971:;
            panda$core$Bit $tmp1973 = { $tmp1945 };
            bool $tmp1944 = $tmp1973.value;
            if ($tmp1944) goto $l1974;
            panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1944 = $tmp1975.value;
            $l1974:;
            panda$core$Bit $tmp1976 = { $tmp1944 };
            bool $tmp1943 = $tmp1976.value;
            if ($tmp1943) goto $l1977;
            panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1943 = $tmp1978.value;
            $l1977:;
            panda$core$Bit $tmp1979 = { $tmp1943 };
            if ($tmp1979.value) {
            {
                goto $l1939;
            }
            }
            else {
            panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1980.value) {
            {
                if (((panda$core$Bit) { dc1937 != NULL }).value) {
                {
                    panda$core$String* $tmp1982 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1940);
                    panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1981, $tmp1982);
                    panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1984);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1940, $tmp1985);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    org$pandalanguage$pandac$ASTNode* $tmp1986 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1937 = $tmp1986;
                }
            }
            }
            else {
            panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131942.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1987.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1989 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1937);
                c1988 = $tmp1989;
                if (((panda$core$Bit) { c1988 == NULL }).value) {
                {
                    {
                        tmp2001990 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2001990;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1934, ((panda$core$Object*) c1988));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    dc1937 = NULL;
                }
            }
            }
            else {
            {
                goto $l1939;
            }
            }
            }
            }
        }
    }
    }
    $l1939:;
    panda$collections$ImmutableArray* $tmp1992 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
    $tmp1992->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1992->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp1992);
    a1991 = $tmp1992;
    $l1994:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1997 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1996 = $tmp1997;
        {
            $match$1878_131998 = next1996.kind;
            panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1999.value) {
            {
                panda$core$Int64 $tmp2000 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1991);
                panda$core$Bit $tmp2001 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2000, ((panda$core$Int64) { 0 }));
                if ($tmp2001.value) {
                {
                    panda$core$String* $tmp2003 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1996);
                    panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2002, $tmp2003);
                    panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, &$s2005);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1996, $tmp2006);
                    {
                        tmp2012007 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2012007;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                    panda$collections$ImmutableArray* $tmp2008 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                    a1991 = $tmp2008;
                }
            }
            }
            else {
            panda$core$Bit $tmp2009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2009.value) {
            {
                bool $tmp2010 = ((panda$core$Bit) { dc1937 != NULL }).value;
                if ($tmp2010) goto $l2011;
                panda$core$Int64 $tmp2012 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1991);
                panda$core$Bit $tmp2013 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2012, ((panda$core$Int64) { 0 }));
                $tmp2010 = $tmp2013.value;
                $l2011:;
                panda$core$Bit $tmp2014 = { $tmp2010 };
                if ($tmp2014.value) {
                {
                    panda$core$String* $tmp2016 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1996);
                    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2015, $tmp2016);
                    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1996, $tmp2019);
                    {
                        tmp2022020 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2022020;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    org$pandalanguage$pandac$ASTNode* $tmp2021 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1937 = $tmp2021;
                }
            }
            }
            else {
            panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2022.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2024 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1937, a1991);
                decl2023 = $tmp2024;
                if (((panda$core$Bit) { decl2023 == NULL }).value) {
                {
                    {
                        tmp2032025 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2032025;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1934, ((panda$core$Object*) decl2023));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    dc1937 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                    panda$collections$ImmutableArray* $tmp2026 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2026->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2026->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2026);
                    a1991 = $tmp2026;
                }
            }
            }
            else {
            panda$core$Bit $tmp2028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2028.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2030 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1937, a1991);
                decl2029 = $tmp2030;
                if (((panda$core$Bit) { decl2029 == NULL }).value) {
                {
                    {
                        tmp2042031 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2042031;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1934, ((panda$core$Object*) decl2029));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    dc1937 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                    panda$collections$ImmutableArray* $tmp2032 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2032->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2032->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2032);
                    a1991 = $tmp2032;
                }
            }
            }
            else {
            panda$core$Bit $tmp2034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2034.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2036 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1937, a1991);
                decl2035 = $tmp2036;
                if (((panda$core$Bit) { decl2035 == NULL }).value) {
                {
                    {
                        tmp2052037 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2052037;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1934, ((panda$core$Object*) decl2035));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    dc1937 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                    panda$collections$ImmutableArray* $tmp2038 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2038->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2038->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2038);
                    a1991 = $tmp2038;
                }
            }
            }
            else {
            panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp2040 = $tmp2041.value;
            if ($tmp2040) goto $l2042;
            panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp2040 = $tmp2043.value;
            $l2042:;
            panda$core$Bit $tmp2044 = { $tmp2040 };
            if ($tmp2044.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2046 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1937, a1991);
                decl2045 = $tmp2046;
                if (((panda$core$Bit) { decl2045 == NULL }).value) {
                {
                    {
                        tmp2062047 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2062047;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1934, ((panda$core$Object*) decl2045));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    dc1937 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                    panda$collections$ImmutableArray* $tmp2048 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2048->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2048->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2048);
                    a1991 = $tmp2048;
                }
            }
            }
            else {
            panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp2052 = $tmp2053.value;
            if ($tmp2052) goto $l2054;
            panda$core$Bit $tmp2055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp2052 = $tmp2055.value;
            $l2054:;
            panda$core$Bit $tmp2056 = { $tmp2052 };
            bool $tmp2051 = $tmp2056.value;
            if ($tmp2051) goto $l2057;
            panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp2051 = $tmp2058.value;
            $l2057:;
            panda$core$Bit $tmp2059 = { $tmp2051 };
            bool $tmp2050 = $tmp2059.value;
            if ($tmp2050) goto $l2060;
            panda$core$Bit $tmp2061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp2050 = $tmp2061.value;
            $l2060:;
            panda$core$Bit $tmp2062 = { $tmp2050 };
            if ($tmp2062.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2064 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1937, a1991);
                decl2063 = $tmp2064;
                if (((panda$core$Bit) { decl2063 == NULL }).value) {
                {
                    {
                        tmp2072065 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                        }
                        return tmp2072065;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1934, ((panda$core$Object*) decl2063));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                    dc1937 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                    panda$collections$ImmutableArray* $tmp2066 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2066->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2066->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2066);
                    a1991 = $tmp2066;
                }
            }
            }
            else {
            panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131998.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp2068.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2069, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2069, &$s2070);
                goto $l1995;
            }
            }
            else {
            {
                panda$core$String* $tmp2072 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1996);
                panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2071, $tmp2072);
                panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2074);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1996, $tmp2075);
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                {
                    tmp2082076 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
                    }
                    return tmp2082076;
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
    $l1995:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2078 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2078->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2078->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2080, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp2081 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1927.value));
        panda$collections$ImmutableArray* $tmp2082 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1934);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2078, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1923.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp2080, $tmp2081, NULL, NULL, $tmp2082);
        tmp2092077 = $tmp2078;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1937));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1991));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1934));
        }
        return tmp2092077;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2083;
    org$pandalanguage$pandac$ASTNode* dc2085;
    org$pandalanguage$pandac$ASTNode* tmp2102088;
    panda$collections$ImmutableArray* a2089;
    org$pandalanguage$pandac$ASTNode* tmp2112091;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_92092;
    org$pandalanguage$pandac$ASTNode* tmp2122095;
    org$pandalanguage$pandac$ASTNode* tmp2132098;
    org$pandalanguage$pandac$ASTNode* tmp2142101;
    org$pandalanguage$pandac$ASTNode* tmp2152108;
    org$pandalanguage$pandac$ASTNode* tmp2162111;
    org$pandalanguage$pandac$ASTNode* tmp2172126;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2128;
    org$pandalanguage$pandac$ASTNode* tmp2182130;
    org$pandalanguage$pandac$parser$Token $tmp2084 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start2083 = $tmp2084;
    memset(&dc2085, 0, sizeof(dc2085));
    panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start2083.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp2086.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2087 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            dc2085 = $tmp2087;
        }
        if (((panda$core$Bit) { dc2085 == NULL }).value) {
        {
            {
                tmp2102088 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                return tmp2102088;
            }
        }
        }
    }
    }
    else {
    {
        {
            dc2085 = NULL;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp2090 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    a2089 = $tmp2090;
    if (((panda$core$Bit) { a2089 == NULL }).value) {
    {
        {
            tmp2112091 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
            }
            return tmp2112091;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2093 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_92092 = $tmp2093.kind;
        panda$core$Bit $tmp2094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2094.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2096 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2085, a2089);
                tmp2122095 = $tmp2096;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
                }
                return tmp2122095;
            }
        }
        }
        else {
        panda$core$Bit $tmp2097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2097.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2099 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2085, a2089);
                tmp2132098 = $tmp2099;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
                }
                return tmp2132098;
            }
        }
        }
        else {
        panda$core$Bit $tmp2100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2100.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2102 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2085, a2089);
                tmp2142101 = $tmp2102;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
                }
                return tmp2142101;
            }
        }
        }
        else {
        panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp2103 = $tmp2104.value;
        if ($tmp2103) goto $l2105;
        panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2103 = $tmp2106.value;
        $l2105:;
        panda$core$Bit $tmp2107 = { $tmp2103 };
        if ($tmp2107.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2109 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2085, a2089);
                tmp2152108 = $tmp2109;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
                }
                return tmp2152108;
            }
        }
        }
        else {
        panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2110.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2112 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2085, a2089);
                tmp2162111 = $tmp2112;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
                }
                return tmp2162111;
            }
        }
        }
        else {
        panda$core$Bit $tmp2116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2115 = $tmp2116.value;
        if ($tmp2115) goto $l2117;
        panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2115 = $tmp2118.value;
        $l2117:;
        panda$core$Bit $tmp2119 = { $tmp2115 };
        bool $tmp2114 = $tmp2119.value;
        if ($tmp2114) goto $l2120;
        panda$core$Bit $tmp2121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2114 = $tmp2121.value;
        $l2120:;
        panda$core$Bit $tmp2122 = { $tmp2114 };
        bool $tmp2113 = $tmp2122.value;
        if ($tmp2113) goto $l2123;
        panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92092.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2113 = $tmp2124.value;
        $l2123:;
        panda$core$Bit $tmp2125 = { $tmp2113 };
        if ($tmp2125.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2127 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2085, a2089);
                tmp2172126 = $tmp2127;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
                }
                return tmp2172126;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2128, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2128, &$s2129);
            {
                tmp2182130 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
                }
                return tmp2182130;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2085));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2089));
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2131;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2132;
    org$pandalanguage$pandac$parser$Token$nullable name2135;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2136;
    panda$collections$ImmutableArray* generics2139;
    org$pandalanguage$pandac$ASTNode* tmp2192143;
    panda$collections$ImmutableArray* stypes2144;
    org$pandalanguage$pandac$ASTNode* tmp2202148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2149;
    org$pandalanguage$pandac$ASTNode* tmp2212152;
    panda$collections$Array* members2153;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2158;
    org$pandalanguage$pandac$ASTNode* member2160;
    org$pandalanguage$pandac$ASTNode* tmp2222162;
    org$pandalanguage$pandac$ASTNode* tmp2232163;
    org$pandalanguage$pandac$ASTNode* tmp2242164;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2167;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2132, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2134 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2132, &$s2133);
    start2131 = $tmp2134;
    if (((panda$core$Bit) { !start2131.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2136, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2138 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2136, &$s2137);
    name2135 = $tmp2138;
    if (((panda$core$Bit) { !name2135.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2139, 0, sizeof(generics2139));
    org$pandalanguage$pandac$parser$Token $tmp2140 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2140.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2141.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2142 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2139 = $tmp2142;
        }
        if (((panda$core$Bit) { generics2139 == NULL }).value) {
        {
            {
                tmp2192143 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2139));
                return tmp2192143;
            }
        }
        }
    }
    }
    else {
    {
        {
            generics2139 = NULL;
        }
    }
    }
    memset(&stypes2144, 0, sizeof(stypes2144));
    org$pandalanguage$pandac$parser$Token $tmp2145 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2145.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2146.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2147 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            stypes2144 = $tmp2147;
        }
        if (((panda$core$Bit) { stypes2144 == NULL }).value) {
        {
            {
                tmp2202148 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2139));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2144));
                }
                return tmp2202148;
            }
        }
        }
    }
    }
    else {
    {
        {
            stypes2144 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2149, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2151 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2149, &$s2150);
    if (((panda$core$Bit) { !$tmp2151.nonnull }).value) {
    {
        {
            tmp2212152 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2144));
            }
            return tmp2212152;
        }
    }
    }
    panda$collections$Array* $tmp2154 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2154->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2154->refCount.value = 1;
    panda$collections$Array$init($tmp2154);
    members2153 = $tmp2154;
    $l2156:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2158, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2159 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2158);
    if (!((panda$core$Bit) { !$tmp2159.nonnull }).value) goto $l2157;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2161 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2160 = $tmp2161;
        if (((panda$core$Bit) { member2160 == NULL }).value) {
        {
            {
                tmp2222162 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2160));
                {
                    tmp2232163 = tmp2222162;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2139));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2153));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2144));
                    }
                    return tmp2232163;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2153, ((panda$core$Object*) member2160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2160));
    }
    goto $l2156;
    $l2157:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2165 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2165->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2165->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2167, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2168 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2135.value));
        panda$collections$ImmutableArray* $tmp2169 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2153);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2165, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2131.value).position, p_doccomment, p_annotations, $tmp2167, $tmp2168, generics2139, stypes2144, $tmp2169);
        tmp2242164 = $tmp2165;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2139));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2153));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2144));
        }
        return tmp2242164;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2170;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2171;
    org$pandalanguage$pandac$parser$Token$nullable name2174;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2175;
    panda$collections$ImmutableArray* generics2178;
    org$pandalanguage$pandac$ASTNode* tmp2252182;
    panda$collections$Array* intfs2185;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2188;
    org$pandalanguage$pandac$ASTNode* t2190;
    org$pandalanguage$pandac$ASTNode* tmp2262192;
    org$pandalanguage$pandac$ASTNode* tmp2282193;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2196;
    org$pandalanguage$pandac$ASTNode* tmp2272199;
    org$pandalanguage$pandac$ASTNode* tmp2292200;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2201;
    org$pandalanguage$pandac$ASTNode* tmp2302204;
    panda$collections$Array* members2205;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2210;
    org$pandalanguage$pandac$ASTNode* member2212;
    org$pandalanguage$pandac$ASTNode* tmp2312214;
    org$pandalanguage$pandac$ASTNode* tmp2322215;
    org$pandalanguage$pandac$ASTNode* tmp2332216;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2219;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2171, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2173 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2171, &$s2172);
    start2170 = $tmp2173;
    if (((panda$core$Bit) { !start2170.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2175, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2177 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2175, &$s2176);
    name2174 = $tmp2177;
    if (((panda$core$Bit) { !name2174.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2178, 0, sizeof(generics2178));
    org$pandalanguage$pandac$parser$Token $tmp2179 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2179.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2180.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2181 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2178 = $tmp2181;
        }
        if (((panda$core$Bit) { generics2178 == NULL }).value) {
        {
            {
                tmp2252182 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2178));
                return tmp2252182;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp2183 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
            $tmp2183->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
            $tmp2183->refCount.value = 1;
            panda$collections$ImmutableArray$init($tmp2183);
            generics2178 = $tmp2183;
        }
    }
    }
    panda$collections$Array* $tmp2186 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2186->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2186->refCount.value = 1;
    panda$collections$Array$init($tmp2186);
    intfs2185 = $tmp2186;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2188, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2189 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2188);
    if (((panda$core$Bit) { $tmp2189.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2191 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t2190 = $tmp2191;
        if (((panda$core$Bit) { t2190 == NULL }).value) {
        {
            {
                tmp2262192 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2190));
                {
                    tmp2282193 = tmp2262192;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2185));
                    }
                    return tmp2282193;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2185, ((panda$core$Object*) t2190));
        $l2194:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2196, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2197 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2196);
        if (!((panda$core$Bit) { $tmp2197.nonnull }).value) goto $l2195;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2190));
                org$pandalanguage$pandac$ASTNode* $tmp2198 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t2190 = $tmp2198;
            }
            if (((panda$core$Bit) { t2190 == NULL }).value) {
            {
                {
                    tmp2272199 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2190));
                    {
                        tmp2292200 = tmp2272199;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2178));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2185));
                        }
                        return tmp2292200;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2185, ((panda$core$Object*) t2190));
        }
        goto $l2194;
        $l2195:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2190));
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2201, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2203 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2201, &$s2202);
    if (((panda$core$Bit) { !$tmp2203.nonnull }).value) {
    {
        {
            tmp2302204 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2185));
            }
            return tmp2302204;
        }
    }
    }
    panda$collections$Array* $tmp2206 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2206->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2206->refCount.value = 1;
    panda$collections$Array$init($tmp2206);
    members2205 = $tmp2206;
    $l2208:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2210, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2211 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2210);
    if (!((panda$core$Bit) { !$tmp2211.nonnull }).value) goto $l2209;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2213 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2212 = $tmp2213;
        if (((panda$core$Bit) { member2212 == NULL }).value) {
        {
            {
                tmp2312214 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2212));
                {
                    tmp2322215 = tmp2312214;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2178));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2205));
                    }
                    return tmp2322215;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2205, ((panda$core$Object*) member2212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2212));
    }
    goto $l2208;
    $l2209:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2217 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2217->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2217->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2219, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp2220 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2174.value));
        panda$collections$ImmutableArray* $tmp2221 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs2185);
        panda$collections$ImmutableArray* $tmp2222 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2205);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2217, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2170.value).position, p_doccomment, p_annotations, $tmp2219, $tmp2220, generics2178, $tmp2221, $tmp2222);
        tmp2332216 = $tmp2217;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2185));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2205));
        }
        return tmp2332216;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_92223;
    {
        org$pandalanguage$pandac$parser$Token $tmp2224 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_92223 = $tmp2224.kind;
        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2225.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2226 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2226;
        }
        }
        else {
        panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2227.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2228 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2228;
        }
        }
        else {
        panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2234 = $tmp2235.value;
        if ($tmp2234) goto $l2236;
        panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2234 = $tmp2237.value;
        $l2236:;
        panda$core$Bit $tmp2238 = { $tmp2234 };
        bool $tmp2233 = $tmp2238.value;
        if ($tmp2233) goto $l2239;
        panda$core$Bit $tmp2240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp2233 = $tmp2240.value;
        $l2239:;
        panda$core$Bit $tmp2241 = { $tmp2233 };
        bool $tmp2232 = $tmp2241.value;
        if ($tmp2232) goto $l2242;
        panda$core$Bit $tmp2243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp2232 = $tmp2243.value;
        $l2242:;
        panda$core$Bit $tmp2244 = { $tmp2232 };
        bool $tmp2231 = $tmp2244.value;
        if ($tmp2231) goto $l2245;
        panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2231 = $tmp2246.value;
        $l2245:;
        panda$core$Bit $tmp2247 = { $tmp2231 };
        bool $tmp2230 = $tmp2247.value;
        if ($tmp2230) goto $l2248;
        panda$core$Bit $tmp2249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp2230 = $tmp2249.value;
        $l2248:;
        panda$core$Bit $tmp2250 = { $tmp2230 };
        bool $tmp2229 = $tmp2250.value;
        if ($tmp2229) goto $l2251;
        panda$core$Bit $tmp2252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92223.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp2229 = $tmp2252.value;
        $l2251:;
        panda$core$Bit $tmp2253 = { $tmp2229 };
        if ($tmp2253.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2254 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2254;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2255 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2255;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2256;
    org$pandalanguage$pandac$ASTNode* entry2263;
    org$pandalanguage$pandac$ASTNode* tmp2342265;
    org$pandalanguage$pandac$ASTNode* tmp2352266;
    org$pandalanguage$pandac$ASTNode* tmp2362268;
    panda$collections$Array* $tmp2257 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2257->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2257->refCount.value = 1;
    panda$collections$Array$init($tmp2257);
    entries2256 = $tmp2257;
    $l2259:;
    org$pandalanguage$pandac$parser$Token $tmp2261 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2262 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2261.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2262.value) goto $l2260;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2264 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2263 = $tmp2264;
        if (((panda$core$Bit) { entry2263 == NULL }).value) {
        {
            {
                tmp2342265 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2263));
                {
                    tmp2352266 = tmp2342265;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2256));
                    return tmp2352266;
                }
            }
        }
        }
        panda$core$Bit $tmp2267 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2267.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2256, ((panda$core$Object*) entry2263));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2263));
    }
    goto $l2259;
    $l2260:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2269 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2269->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2269->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp2271 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2256);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2269, ((panda$core$Int64) { 15 }), $tmp2271);
        tmp2362268 = $tmp2269;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2256));
        return tmp2362268;
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

