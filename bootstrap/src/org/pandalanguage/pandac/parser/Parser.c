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
typedef org$pandalanguage$pandac$Position (*$fn750)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn789)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1384)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1397)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1417)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1882)(org$pandalanguage$pandac$ASTNode*);

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
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x66\x27", 4, 145323586, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x66\x6f\x72\x27", 5, 14674690706, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x27", 4, 145324394, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27", 4, 145273490, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x69\x6c\x65\x27", 7, 149874454619016, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6c\x6f\x6f\x70\x27", 6, 1482768100521, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x61\x73\x73\x65\x72\x74\x27", 8, 15114083117845237, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x77\x68\x65\x6e\x27", 6, 1483905450613, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x61\x74\x63\x68\x27", 7, 149768636433004, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x77\x68\x65\x6e\x27\x2c\x20\x27\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x27\x2c\x20\x6f\x72\x20\x27\x7d\x27\x2c\x20\x62\x75\x74\x20", 42, -6287071850621394606, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3d\x27\x2c\x20\x70\x65\x72\x68\x61\x70\x73\x20\x79\x6f\x75\x20\x6d\x65\x61\x6e\x74\x20\x27\x3a\x3d\x27\x3f", 39, 5160334537588978262, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x76\x61\x72\x27\x2c\x20\x27\x64\x65\x66\x27\x2c\x20\x27\x70\x72\x6f\x70\x65\x72\x74\x79\x27\x2c\x20\x6f\x72\x20\x27\x63\x6f\x6e\x73\x74\x61\x6e\x74\x27", 48, 6102373705151611187, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x62\x72\x65\x61\x6b\x27", 7, 149654778879696, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6f\x6e\x74\x69\x6e\x75\x65\x27", 10, 6626032424543403520, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x72\x65\x74\x75\x72\x6e\x27", 8, 15131981939543051, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x64\x6f\x27\x2c\x20\x27\x66\x6f\x72\x27\x2c\x20\x27\x6c\x6f\x6f\x70\x27\x2c\x20\x6f\x72\x20\x27\x77\x68\x69\x6c\x65\x27\x20\x66\x6f\x6c\x6c\x6f\x77\x69\x6e\x67\x20\x6c\x61\x62\x65\x6c", 47, -2376482472870228684, NULL };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x73\x74\x61\x74\x65\x6d\x65\x6e\x74", 11, -6958121520392028097, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x70\x61\x63\x6b\x61\x67\x65\x27", 9, 1528111323012931595, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x75\x73\x65\x73\x27", 6, 1483708663627, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3c\x27", 3, 1434239, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3e\x27", 3, 1434441, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3a\x27", 3, 1434037, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 23, -3212616214776640413, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x20\x63\x6f\x6d\x6d\x65\x6e\x74", 34, 3008723279962797446, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x28\x27", 3, 1432219, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x6d\x65\x74\x68\x6f\x64\x27\x20\x6f\x72\x20\x27\x66\x75\x6e\x63\x74\x69\x6f\x6e\x27", 22, -2411921988033092219, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x69\x74\x27", 6, 1482454828215, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74", 4, 220598155, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x41\x6e\x64", 7, 227282500368930, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x68\x6f\x69\x63\x65\x27", 8, 15116090134765998, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 35, -6580693566830100568, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e", 13, 8609604847663634804, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x63\x6c\x61\x73\x73\x27", 7, 149664660681013, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x27", 11, -6748345327172963296, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72", 13, 5547544734723441827, NULL };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7b\x27", 3, 1440602, NULL };

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
    org$pandalanguage$pandac$ASTNode* tmp39694;
    org$pandalanguage$pandac$ASTNode* tmp46695;
    org$pandalanguage$pandac$parser$Token$Kind $tmp698;
    org$pandalanguage$pandac$ASTNode* tmp40701;
    org$pandalanguage$pandac$ASTNode* tmp47702;
    org$pandalanguage$pandac$parser$Token$Kind $tmp703;
    org$pandalanguage$pandac$ASTNode* tmp41706;
    org$pandalanguage$pandac$ASTNode* tmp48707;
    org$pandalanguage$pandac$ASTNode* arg712;
    org$pandalanguage$pandac$ASTNode* tmp49714;
    org$pandalanguage$pandac$parser$Token$Kind $tmp715;
    org$pandalanguage$pandac$ASTNode* tmp50718;
    org$pandalanguage$pandac$parser$Token$Kind $tmp721;
    panda$core$String* name723;
    org$pandalanguage$pandac$parser$Token$Kind $tmp724;
    org$pandalanguage$pandac$ASTNode* tmp51728;
    org$pandalanguage$pandac$ASTNode* target732;
    org$pandalanguage$pandac$ASTNode* tmp52734;
    org$pandalanguage$pandac$parser$Token$Kind $tmp737;
    panda$core$String* name739;
    panda$core$MutableString* finalName741;
    panda$core$Char8 $tmp744;
    panda$collections$Array* types745;
    org$pandalanguage$pandac$ASTNode* t752;
    org$pandalanguage$pandac$ASTNode* tmp42754;
    org$pandalanguage$pandac$ASTNode* tmp53755;
    org$pandalanguage$pandac$parser$Token$Kind $tmp758;
    org$pandalanguage$pandac$ASTNode* tmp43761;
    org$pandalanguage$pandac$ASTNode* tmp54762;
    org$pandalanguage$pandac$parser$Token$Kind $tmp764;
    org$pandalanguage$pandac$ASTNode* tmp44767;
    org$pandalanguage$pandac$ASTNode* tmp55768;
    panda$core$Char8 $tmp769;
    panda$core$Bit shouldAccept770;
    org$pandalanguage$pandac$parser$Token$Kind $match$652_29772;
    org$pandalanguage$pandac$ASTNode* tmp45793;
    org$pandalanguage$pandac$ASTNode* tmp56794;
    org$pandalanguage$pandac$ASTNode* tmp57795;
    org$pandalanguage$pandac$ASTNode* tmp58796;
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
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp39694 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                            {
                                tmp46695 = tmp39694;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp46695;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(args687, ((panda$core$Object*) expr692));
                    $l696:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp698, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp699 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp698);
                    if (!((panda$core$Bit) { $tmp699.nonnull }).value) goto $l697;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                            org$pandalanguage$pandac$ASTNode* $tmp700 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            expr692 = $tmp700;
                        }
                        if (((panda$core$Bit) { expr692 == NULL }).value) {
                        {
                            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                            {
                                tmp40701 = NULL;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                                {
                                    tmp47702 = tmp40701;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                    return tmp47702;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(args687, ((panda$core$Object*) expr692));
                    }
                    goto $l696;
                    $l697:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp703, ((panda$core$Int64) { 104 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp705 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp703, &$s704);
                    if (((panda$core$Bit) { !$tmp705.nonnull }).value) {
                    {
                        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                        {
                            tmp41706 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                            {
                                tmp48707 = tmp41706;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp48707;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr692));
                }
                }
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp708 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp708->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp708->refCount.value = 1;
                    panda$collections$ImmutableArray* $tmp710 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args687);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp708, ((panda$core$Int64) { 6 }), token682.position, result677, $tmp710);
                    result677 = $tmp708;
                }
            }
            }
            else {
            panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 101 }));
            if ($tmp711.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp713 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                arg712 = $tmp713;
                if (((panda$core$Bit) { arg712 == NULL }).value) {
                {
                    {
                        tmp49714 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                        return tmp49714;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp715, ((panda$core$Int64) { 102 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp717 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp715, &$s716);
                if (((panda$core$Bit) { !$tmp717.nonnull }).value) {
                {
                    {
                        tmp50718 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                        return tmp50718;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp719 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp719->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp719->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp721, ((panda$core$Int64) { 101 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp719, ((panda$core$Int64) { 2 }), token682.position, result677, $tmp721, arg712);
                    result677 = $tmp719;
                }
            }
            }
            else {
            panda$core$Bit $tmp722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 98 }));
            if ($tmp722.value) {
            {
                memset(&name723, 0, sizeof(name723));
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp724, ((panda$core$Int64) { 22 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp725 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp724);
                if (((panda$core$Bit) { $tmp725.nonnull }).value) {
                {
                    {
                        name723 = &$s726;
                    }
                }
                }
                else {
                {
                    {
                        panda$core$String* $tmp727 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
                        name723 = $tmp727;
                    }
                    if (((panda$core$Bit) { name723 == NULL }).value) {
                    {
                        {
                            tmp51728 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                            return tmp51728;
                        }
                    }
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp729 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp729->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp729->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String($tmp729, ((panda$core$Int64) { 13 }), token682.position, result677, name723);
                    result677 = $tmp729;
                }
            }
            }
            else {
            panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 89 }));
            if ($tmp731.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp733 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                target732 = $tmp733;
                if (((panda$core$Bit) { target732 == NULL }).value) {
                {
                    {
                        tmp52734 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                        return tmp52734;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    org$pandalanguage$pandac$ASTNode* $tmp735 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp735->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp735->refCount.value = 1;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp737, ((panda$core$Int64) { 89 }));
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp735, ((panda$core$Int64) { 2 }), token682.position, result677, $tmp737, target732);
                    result677 = $tmp735;
                }
            }
            }
            else {
            panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$540_13684.$rawValue, ((panda$core$Int64) { 62 }));
            if ($tmp738.value) {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token682);
                panda$core$String* $tmp740 = org$pandalanguage$pandac$parser$Parser$getClassName$org$pandalanguage$pandac$ASTNode$R$panda$core$String$Q(result677);
                name739 = $tmp740;
                if (((panda$core$Bit) { name739 != NULL }).value) {
                {
                    panda$core$MutableString* $tmp742 = (panda$core$MutableString*) pandaZAlloc(48);
                    $tmp742->$class = (panda$core$Class*) &panda$core$MutableString$class;
                    $tmp742->refCount.value = 1;
                    panda$core$MutableString$init$panda$core$String($tmp742, name739);
                    finalName741 = $tmp742;
                    panda$core$Char8$init$panda$core$UInt8(&$tmp744, ((panda$core$UInt8) { 60 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName741, $tmp744);
                    org$pandalanguage$pandac$parser$Parser$startSpeculative(self);
                    org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                    panda$collections$Array* $tmp746 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp746->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp746->refCount.value = 1;
                    panda$collections$Array$init($tmp746);
                    types745 = $tmp746;
                    org$pandalanguage$pandac$ASTNode* $tmp748 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp748->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp748->refCount.value = 1;
                    org$pandalanguage$pandac$Position $tmp751 = (($fn750) result677->$class->vtable[2])(result677);
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp748, ((panda$core$Int64) { 35 }), $tmp751, name739);
                    panda$collections$Array$add$panda$collections$Array$T(types745, ((panda$core$Object*) $tmp748));
                    org$pandalanguage$pandac$ASTNode* $tmp753 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                    t752 = $tmp753;
                    if (((panda$core$Bit) { t752 == NULL }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp42754 = result677;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types745));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t752));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName741));
                            }
                            {
                                tmp53755 = tmp42754;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp53755;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(types745, ((panda$core$Object*) t752));
                    panda$core$MutableString$append$panda$core$Object(finalName741, ((panda$core$Object*) t752));
                    $l756:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp758, ((panda$core$Int64) { 105 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp759 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp758);
                    if (!((panda$core$Bit) { $tmp759.nonnull }).value) goto $l757;
                    {
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t752));
                            org$pandalanguage$pandac$ASTNode* $tmp760 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
                            t752 = $tmp760;
                        }
                        if (((panda$core$Bit) { t752 == NULL }).value) {
                        {
                            org$pandalanguage$pandac$parser$Parser$rewind(self);
                            {
                                tmp43761 = result677;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types745));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t752));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName741));
                                }
                                {
                                    tmp54762 = tmp43761;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                    return tmp54762;
                                }
                            }
                        }
                        }
                        panda$collections$Array$add$panda$collections$Array$T(types745, ((panda$core$Object*) t752));
                        panda$core$MutableString$append$panda$core$String(finalName741, &$s763);
                        panda$core$MutableString$append$panda$core$Object(finalName741, ((panda$core$Object*) t752));
                    }
                    goto $l756;
                    $l757:;
                    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp764, ((panda$core$Int64) { 63 }));
                    org$pandalanguage$pandac$parser$Token$nullable $tmp766 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp764, &$s765);
                    if (((panda$core$Bit) { !$tmp766.nonnull }).value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp44767 = result677;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types745));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t752));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName741));
                            }
                            {
                                tmp55768 = tmp44767;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp55768;
                            }
                        }
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp769, ((panda$core$UInt8) { 62 }));
                    panda$core$MutableString$append$panda$core$Char8(finalName741, $tmp769);
                    memset(&shouldAccept770, 0, sizeof(shouldAccept770));
                    panda$core$Object* $tmp771 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                    if (((panda$core$Bit$wrapper*) $tmp771)->value.value) {
                    {
                        {
                            org$pandalanguage$pandac$parser$Token $tmp773 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                            $match$652_29772 = $tmp773.kind;
                            panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29772.$rawValue, ((panda$core$Int64) { 98 }));
                            bool $tmp776 = $tmp777.value;
                            if ($tmp776) goto $l778;
                            panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29772.$rawValue, ((panda$core$Int64) { 103 }));
                            $tmp776 = $tmp779.value;
                            $l778:;
                            panda$core$Bit $tmp780 = { $tmp776 };
                            bool $tmp775 = $tmp780.value;
                            if ($tmp775) goto $l781;
                            panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29772.$rawValue, ((panda$core$Int64) { 105 }));
                            $tmp775 = $tmp782.value;
                            $l781:;
                            panda$core$Bit $tmp783 = { $tmp775 };
                            bool $tmp774 = $tmp783.value;
                            if ($tmp774) goto $l784;
                            panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$652_29772.$rawValue, ((panda$core$Int64) { 89 }));
                            $tmp774 = $tmp785.value;
                            $l784:;
                            panda$core$Bit $tmp786 = { $tmp774 };
                            if ($tmp786.value) {
                            {
                                shouldAccept770 = ((panda$core$Bit) { true });
                            }
                            }
                            else {
                            {
                                shouldAccept770 = ((panda$core$Bit) { false });
                            }
                            }
                        }
                    }
                    }
                    else {
                    {
                        shouldAccept770 = ((panda$core$Bit) { true });
                    }
                    }
                    if (shouldAccept770.value) {
                    {
                        org$pandalanguage$pandac$parser$Parser$accept(self);
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                            org$pandalanguage$pandac$ASTNode* $tmp787 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                            $tmp787->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                            $tmp787->refCount.value = 1;
                            org$pandalanguage$pandac$Position $tmp790 = (($fn789) result677->$class->vtable[2])(result677);
                            panda$core$String* $tmp791 = panda$core$MutableString$finish$R$panda$core$String(finalName741);
                            panda$collections$ImmutableArray* $tmp792 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(types745);
                            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp787, ((panda$core$Int64) { 17 }), $tmp790, $tmp791, $tmp792);
                            result677 = $tmp787;
                        }
                        {
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types745));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t752));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName741));
                            }
                            goto $l680;
                        }
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$parser$Parser$rewind(self);
                        {
                            tmp45793 = result677;
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types745));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t752));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName741));
                            }
                            {
                                tmp56794 = tmp45793;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                                return tmp56794;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) types745));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t752));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalName741));
                    }
                }
                }
                {
                    tmp57795 = result677;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    return tmp57795;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, token682);
                {
                    tmp58796 = result677;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result677));
                    return tmp58796;
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
    org$pandalanguage$pandac$ASTNode* result797;
    org$pandalanguage$pandac$ASTNode* tmp59799;
    org$pandalanguage$pandac$parser$Token$nullable op802;
    org$pandalanguage$pandac$parser$Token$Kind $tmp803;
    org$pandalanguage$pandac$ASTNode* next805;
    org$pandalanguage$pandac$ASTNode* tmp60807;
    org$pandalanguage$pandac$ASTNode* tmp61808;
    org$pandalanguage$pandac$ASTNode* tmp62811;
    org$pandalanguage$pandac$ASTNode* $tmp798 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result797 = $tmp798;
    if (((panda$core$Bit) { result797 == NULL }).value) {
    {
        {
            tmp59799 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result797));
            return tmp59799;
        }
    }
    }
    $l800:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp803, ((panda$core$Int64) { 57 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp804 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp803);
        op802 = $tmp804;
        if (((panda$core$Bit) { !op802.nonnull }).value) {
        {
            goto $l801;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp806 = org$pandalanguage$pandac$parser$Parser$callExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next805 = $tmp806;
        if (((panda$core$Bit) { next805 == NULL }).value) {
        {
            {
                tmp60807 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next805));
                {
                    tmp61808 = tmp60807;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result797));
                    return tmp61808;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result797));
            org$pandalanguage$pandac$ASTNode* $tmp809 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp809->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp809->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp809, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op802.value).position, result797, ((org$pandalanguage$pandac$parser$Token) op802.value).kind, next805);
            result797 = $tmp809;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next805));
    }
    }
    $l801:;
    {
        tmp62811 = result797;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result797));
        return tmp62811;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token op812;
    org$pandalanguage$pandac$parser$Token$Kind $match$709_9814;
    org$pandalanguage$pandac$ASTNode* base824;
    org$pandalanguage$pandac$parser$Token $tmp813 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op812 = $tmp813;
    {
        $match$709_9814 = op812.kind;
        panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9814.$rawValue, ((panda$core$Int64) { 52 }));
        bool $tmp816 = $tmp817.value;
        if ($tmp816) goto $l818;
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9814.$rawValue, ((panda$core$Int64) { 49 }));
        $tmp816 = $tmp819.value;
        $l818:;
        panda$core$Bit $tmp820 = { $tmp816 };
        bool $tmp815 = $tmp820.value;
        if ($tmp815) goto $l821;
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$709_9814.$rawValue, ((panda$core$Int64) { 50 }));
        $tmp815 = $tmp822.value;
        $l821:;
        panda$core$Bit $tmp823 = { $tmp815 };
        if ($tmp823.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp825 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            base824 = $tmp825;
            if (((panda$core$Bit) { base824 == NULL }).value) {
            {
                return NULL;
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp826 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp826->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp826->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp826, ((panda$core$Int64) { 28 }), op812.position, op812.kind, base824);
            return $tmp826;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op812);
            org$pandalanguage$pandac$ASTNode* $tmp828 = org$pandalanguage$pandac$parser$Parser$exponentExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp828;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result829;
    org$pandalanguage$pandac$ASTNode* tmp63831;
    org$pandalanguage$pandac$parser$Token op834;
    org$pandalanguage$pandac$parser$Token$Kind $match$735_13836;
    org$pandalanguage$pandac$ASTNode* next862;
    org$pandalanguage$pandac$ASTNode* tmp65864;
    org$pandalanguage$pandac$parser$Token nextToken868;
    org$pandalanguage$pandac$ASTNode* next871;
    org$pandalanguage$pandac$ASTNode* tmp64873;
    org$pandalanguage$pandac$ASTNode* tmp66874;
    org$pandalanguage$pandac$parser$Token$Kind $tmp877;
    org$pandalanguage$pandac$ASTNode* tmp67878;
    org$pandalanguage$pandac$ASTNode* tmp68879;
    org$pandalanguage$pandac$ASTNode* $tmp830 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result829 = $tmp830;
    if (((panda$core$Bit) { result829 == NULL }).value) {
    {
        {
            tmp63831 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
            return tmp63831;
        }
    }
    }
    $l832:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp835 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op834 = $tmp835;
        {
            $match$735_13836 = op834.kind;
            panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 53 }));
            bool $tmp842 = $tmp843.value;
            if ($tmp842) goto $l844;
            panda$core$Bit $tmp845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 54 }));
            $tmp842 = $tmp845.value;
            $l844:;
            panda$core$Bit $tmp846 = { $tmp842 };
            bool $tmp841 = $tmp846.value;
            if ($tmp841) goto $l847;
            panda$core$Bit $tmp848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 55 }));
            $tmp841 = $tmp848.value;
            $l847:;
            panda$core$Bit $tmp849 = { $tmp841 };
            bool $tmp840 = $tmp849.value;
            if ($tmp840) goto $l850;
            panda$core$Bit $tmp851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 56 }));
            $tmp840 = $tmp851.value;
            $l850:;
            panda$core$Bit $tmp852 = { $tmp840 };
            bool $tmp839 = $tmp852.value;
            if ($tmp839) goto $l853;
            panda$core$Bit $tmp854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 72 }));
            $tmp839 = $tmp854.value;
            $l853:;
            panda$core$Bit $tmp855 = { $tmp839 };
            bool $tmp838 = $tmp855.value;
            if ($tmp838) goto $l856;
            panda$core$Bit $tmp857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 67 }));
            $tmp838 = $tmp857.value;
            $l856:;
            panda$core$Bit $tmp858 = { $tmp838 };
            bool $tmp837 = $tmp858.value;
            if ($tmp837) goto $l859;
            panda$core$Bit $tmp860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 69 }));
            $tmp837 = $tmp860.value;
            $l859:;
            panda$core$Bit $tmp861 = { $tmp837 };
            if ($tmp861.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp863 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next862 = $tmp863;
                if (((panda$core$Bit) { next862 == NULL }).value) {
                {
                    {
                        tmp65864 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
                        return tmp65864;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
                    org$pandalanguage$pandac$ASTNode* $tmp865 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp865->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp865->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp865, ((panda$core$Int64) { 2 }), op834.position, result829, op834.kind, next862);
                    result829 = $tmp865;
                }
            }
            }
            else {
            panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$735_13836.$rawValue, ((panda$core$Int64) { 63 }));
            if ($tmp867.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp869 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
                nextToken868 = $tmp869;
                panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(nextToken868.kind.$rawValue, ((panda$core$Int64) { 63 }));
                if ($tmp870.value) {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp872 = org$pandalanguage$pandac$parser$Parser$prefixExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    next871 = $tmp872;
                    if (((panda$core$Bit) { next871 == NULL }).value) {
                    {
                        {
                            tmp64873 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next871));
                            {
                                tmp66874 = tmp64873;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
                                return tmp66874;
                            }
                        }
                    }
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
                        org$pandalanguage$pandac$ASTNode* $tmp875 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                        $tmp875->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                        $tmp875->refCount.value = 1;
                        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp877, ((panda$core$Int64) { 1 }));
                        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp875, ((panda$core$Int64) { 2 }), op834.position, result829, $tmp877, next871);
                        result829 = $tmp875;
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next871));
                }
                }
                else {
                {
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, nextToken868);
                    org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op834);
                    {
                        tmp67878 = result829;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
                        return tmp67878;
                    }
                }
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op834);
                {
                    tmp68879 = result829;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
                    return tmp68879;
                }
            }
            }
            }
        }
    }
    }
    $l833:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result829));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result880;
    org$pandalanguage$pandac$ASTNode* tmp69882;
    org$pandalanguage$pandac$parser$Token op885;
    org$pandalanguage$pandac$parser$Token$Kind $match$776_13887;
    org$pandalanguage$pandac$ASTNode* next897;
    org$pandalanguage$pandac$ASTNode* tmp70899;
    org$pandalanguage$pandac$ASTNode* tmp71902;
    org$pandalanguage$pandac$ASTNode* $tmp881 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result880 = $tmp881;
    if (((panda$core$Bit) { result880 == NULL }).value) {
    {
        {
            tmp69882 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result880));
            return tmp69882;
        }
    }
    }
    $l883:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp886 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op885 = $tmp886;
        {
            $match$776_13887 = op885.kind;
            panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13887.$rawValue, ((panda$core$Int64) { 51 }));
            bool $tmp889 = $tmp890.value;
            if ($tmp889) goto $l891;
            panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13887.$rawValue, ((panda$core$Int64) { 52 }));
            $tmp889 = $tmp892.value;
            $l891:;
            panda$core$Bit $tmp893 = { $tmp889 };
            bool $tmp888 = $tmp893.value;
            if ($tmp888) goto $l894;
            panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$776_13887.$rawValue, ((panda$core$Int64) { 71 }));
            $tmp888 = $tmp895.value;
            $l894:;
            panda$core$Bit $tmp896 = { $tmp888 };
            if ($tmp896.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp898 = org$pandalanguage$pandac$parser$Parser$multiplicativeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next897 = $tmp898;
                if (((panda$core$Bit) { next897 == NULL }).value) {
                {
                    {
                        tmp70899 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result880));
                        return tmp70899;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result880));
                    org$pandalanguage$pandac$ASTNode* $tmp900 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp900->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp900->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp900, ((panda$core$Int64) { 2 }), op885.position, result880, op885.kind, next897);
                    result880 = $tmp900;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op885);
                {
                    tmp71902 = result880;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result880));
                    return tmp71902;
                }
            }
            }
        }
    }
    }
    $l884:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result880));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result903;
    org$pandalanguage$pandac$parser$Token$Kind $match$796_9904;
    org$pandalanguage$pandac$ASTNode* tmp72912;
    org$pandalanguage$pandac$parser$Token op913;
    org$pandalanguage$pandac$parser$Token$Kind $match$806_9915;
    org$pandalanguage$pandac$parser$Token next921;
    org$pandalanguage$pandac$ASTNode* right923;
    org$pandalanguage$pandac$ASTNode* tmp73934;
    org$pandalanguage$pandac$ASTNode* step935;
    org$pandalanguage$pandac$parser$Token$Kind $tmp936;
    org$pandalanguage$pandac$ASTNode* tmp74939;
    org$pandalanguage$pandac$ASTNode* tmp75940;
    org$pandalanguage$pandac$ASTNode* tmp76944;
    memset(&result903, 0, sizeof(result903));
    {
        org$pandalanguage$pandac$parser$Token $tmp905 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$796_9904 = $tmp905.kind;
        panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9904.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp906 = $tmp907.value;
        if ($tmp906) goto $l908;
        panda$core$Bit $tmp909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$796_9904.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp906 = $tmp909.value;
        $l908:;
        panda$core$Bit $tmp910 = { $tmp906 };
        if ($tmp910.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                result903 = NULL;
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                org$pandalanguage$pandac$ASTNode* $tmp911 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                result903 = $tmp911;
            }
            if (((panda$core$Bit) { result903 == NULL }).value) {
            {
                {
                    tmp72912 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                    return tmp72912;
                }
            }
            }
        }
        }
    }
    org$pandalanguage$pandac$parser$Token $tmp914 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    op913 = $tmp914;
    {
        $match$806_9915 = op913.kind;
        panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9915.$rawValue, ((panda$core$Int64) { 97 }));
        bool $tmp916 = $tmp917.value;
        if ($tmp916) goto $l918;
        panda$core$Bit $tmp919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$806_9915.$rawValue, ((panda$core$Int64) { 96 }));
        $tmp916 = $tmp919.value;
        $l918:;
        panda$core$Bit $tmp920 = { $tmp916 };
        if ($tmp920.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp922 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            next921 = $tmp922;
            memset(&right923, 0, sizeof(right923));
            panda$core$Bit $tmp926 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next921.kind.$rawValue, ((panda$core$Int64) { 102 }));
            bool $tmp925 = $tmp926.value;
            if (!$tmp925) goto $l927;
            panda$core$Bit $tmp928 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next921.kind.$rawValue, ((panda$core$Int64) { 104 }));
            $tmp925 = $tmp928.value;
            $l927:;
            panda$core$Bit $tmp929 = { $tmp925 };
            bool $tmp924 = $tmp929.value;
            if (!$tmp924) goto $l930;
            panda$core$Bit $tmp931 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(next921.kind.$rawValue, ((panda$core$Int64) { 33 }));
            $tmp924 = $tmp931.value;
            $l930:;
            panda$core$Bit $tmp932 = { $tmp924 };
            if ($tmp932.value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp933 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    right923 = $tmp933;
                }
                if (((panda$core$Bit) { right923 == NULL }).value) {
                {
                    {
                        tmp73934 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                        return tmp73934;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    right923 = NULL;
                }
            }
            }
            memset(&step935, 0, sizeof(step935));
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp936, ((panda$core$Int64) { 33 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp937 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp936);
            if (((panda$core$Bit) { $tmp937.nonnull }).value) {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp938 = org$pandalanguage$pandac$parser$Parser$additiveExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    step935 = $tmp938;
                }
                if (((panda$core$Bit) { step935 == NULL }).value) {
                {
                    {
                        tmp74939 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                        return tmp74939;
                    }
                }
                }
            }
            }
            else {
            {
                {
                    step935 = NULL;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp941 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp941->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp941->refCount.value = 1;
                panda$core$Bit $tmp943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op913.kind.$rawValue, ((panda$core$Int64) { 96 }));
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q($tmp941, ((panda$core$Int64) { 29 }), op913.position, result903, right923, $tmp943, step935);
                tmp75940 = $tmp941;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                return tmp75940;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op913);
            {
                tmp76944 = result903;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                return tmp76944;
            }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result945;
    org$pandalanguage$pandac$ASTNode* tmp77947;
    org$pandalanguage$pandac$parser$Token op950;
    org$pandalanguage$pandac$parser$Token$Kind $match$849_13952;
    org$pandalanguage$pandac$ASTNode* next982;
    org$pandalanguage$pandac$ASTNode* tmp78984;
    org$pandalanguage$pandac$ASTNode* tmp79987;
    org$pandalanguage$pandac$ASTNode* $tmp946 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result945 = $tmp946;
    if (((panda$core$Bit) { result945 == NULL }).value) {
    {
        {
            tmp77947 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result945));
            return tmp77947;
        }
    }
    }
    $l948:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp951 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op950 = $tmp951;
        {
            $match$849_13952 = op950.kind;
            panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 58 }));
            bool $tmp959 = $tmp960.value;
            if ($tmp959) goto $l961;
            panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 59 }));
            $tmp959 = $tmp962.value;
            $l961:;
            panda$core$Bit $tmp963 = { $tmp959 };
            bool $tmp958 = $tmp963.value;
            if ($tmp958) goto $l964;
            panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 60 }));
            $tmp958 = $tmp965.value;
            $l964:;
            panda$core$Bit $tmp966 = { $tmp958 };
            bool $tmp957 = $tmp966.value;
            if ($tmp957) goto $l967;
            panda$core$Bit $tmp968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 61 }));
            $tmp957 = $tmp968.value;
            $l967:;
            panda$core$Bit $tmp969 = { $tmp957 };
            bool $tmp956 = $tmp969.value;
            if ($tmp956) goto $l970;
            panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 62 }));
            $tmp956 = $tmp971.value;
            $l970:;
            panda$core$Bit $tmp972 = { $tmp956 };
            bool $tmp955 = $tmp972.value;
            if ($tmp955) goto $l973;
            panda$core$Bit $tmp974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 63 }));
            $tmp955 = $tmp974.value;
            $l973:;
            panda$core$Bit $tmp975 = { $tmp955 };
            bool $tmp954 = $tmp975.value;
            if ($tmp954) goto $l976;
            panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 64 }));
            $tmp954 = $tmp977.value;
            $l976:;
            panda$core$Bit $tmp978 = { $tmp954 };
            bool $tmp953 = $tmp978.value;
            if ($tmp953) goto $l979;
            panda$core$Bit $tmp980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$849_13952.$rawValue, ((panda$core$Int64) { 65 }));
            $tmp953 = $tmp980.value;
            $l979:;
            panda$core$Bit $tmp981 = { $tmp953 };
            if ($tmp981.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp983 = org$pandalanguage$pandac$parser$Parser$rangeExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next982 = $tmp983;
                if (((panda$core$Bit) { next982 == NULL }).value) {
                {
                    {
                        tmp78984 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result945));
                        return tmp78984;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result945));
                    org$pandalanguage$pandac$ASTNode* $tmp985 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp985->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp985->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp985, ((panda$core$Int64) { 2 }), op950.position, result945, op950.kind, next982);
                    result945 = $tmp985;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op950);
                {
                    tmp79987 = result945;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result945));
                    return tmp79987;
                }
            }
            }
        }
    }
    }
    $l949:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result945));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result988;
    org$pandalanguage$pandac$ASTNode* tmp80990;
    org$pandalanguage$pandac$parser$Token op993;
    org$pandalanguage$pandac$parser$Token$Kind $match$880_13995;
    org$pandalanguage$pandac$ASTNode* next1001;
    org$pandalanguage$pandac$ASTNode* tmp811003;
    org$pandalanguage$pandac$ASTNode* tmp821006;
    org$pandalanguage$pandac$ASTNode* $tmp989 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result988 = $tmp989;
    if (((panda$core$Bit) { result988 == NULL }).value) {
    {
        {
            tmp80990 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result988));
            return tmp80990;
        }
    }
    }
    $l991:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp994 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        op993 = $tmp994;
        {
            $match$880_13995 = op993.kind;
            panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13995.$rawValue, ((panda$core$Int64) { 66 }));
            bool $tmp996 = $tmp997.value;
            if ($tmp996) goto $l998;
            panda$core$Bit $tmp999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$880_13995.$rawValue, ((panda$core$Int64) { 70 }));
            $tmp996 = $tmp999.value;
            $l998:;
            panda$core$Bit $tmp1000 = { $tmp996 };
            if ($tmp1000.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1002 = org$pandalanguage$pandac$parser$Parser$comparisonExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                next1001 = $tmp1002;
                if (((panda$core$Bit) { next1001 == NULL }).value) {
                {
                    {
                        tmp811003 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result988));
                        return tmp811003;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result988));
                    org$pandalanguage$pandac$ASTNode* $tmp1004 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                    $tmp1004->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                    $tmp1004->refCount.value = 1;
                    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1004, ((panda$core$Int64) { 2 }), op993.position, result988, op993.kind, next1001);
                    result988 = $tmp1004;
                }
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, op993);
                {
                    tmp821006 = result988;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result988));
                    return tmp821006;
                }
            }
            }
        }
    }
    }
    $l992:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result988));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* result1007;
    org$pandalanguage$pandac$ASTNode* tmp831009;
    org$pandalanguage$pandac$parser$Token$nullable op1012;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1013;
    org$pandalanguage$pandac$ASTNode* next1015;
    org$pandalanguage$pandac$ASTNode* tmp841017;
    org$pandalanguage$pandac$ASTNode* tmp851018;
    org$pandalanguage$pandac$ASTNode* tmp861021;
    org$pandalanguage$pandac$ASTNode* $tmp1008 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    result1007 = $tmp1008;
    if (((panda$core$Bit) { result1007 == NULL }).value) {
    {
        {
            tmp831009 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1007));
            return tmp831009;
        }
    }
    }
    $l1010:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1013, ((panda$core$Int64) { 68 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1014 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1013);
        op1012 = $tmp1014;
        if (((panda$core$Bit) { !op1012.nonnull }).value) {
        {
            goto $l1011;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1016 = org$pandalanguage$pandac$parser$Parser$andExpression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        next1015 = $tmp1016;
        if (((panda$core$Bit) { next1015 == NULL }).value) {
        {
            {
                tmp841017 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1015));
                {
                    tmp851018 = tmp841017;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1007));
                    return tmp851018;
                }
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1007));
            org$pandalanguage$pandac$ASTNode* $tmp1019 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1019->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1019->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1019, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$parser$Token) op1012.value).position, result1007, ((org$pandalanguage$pandac$parser$Token) op1012.value).kind, next1015);
            result1007 = $tmp1019;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next1015));
    }
    }
    $l1011:;
    {
        tmp861021 = result1007;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1007));
        return tmp861021;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1022;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1023;
    org$pandalanguage$pandac$ASTNode* test1026;
    org$pandalanguage$pandac$ASTNode* tmp871028;
    panda$collections$ImmutableArray* ifTrue1029;
    org$pandalanguage$pandac$ASTNode* tmp881031;
    org$pandalanguage$pandac$ASTNode* ifFalse1032;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1033;
    org$pandalanguage$pandac$ASTNode* tmp891038;
    org$pandalanguage$pandac$ASTNode* tmp901040;
    org$pandalanguage$pandac$ASTNode* tmp911041;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1023, ((panda$core$Int64) { 36 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1025 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1023, &$s1024);
    start1022 = $tmp1025;
    if (((panda$core$Bit) { !start1022.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1027 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1026 = $tmp1027;
    if (((panda$core$Bit) { test1026 == NULL }).value) {
    {
        {
            tmp871028 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1026));
            return tmp871028;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1030 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    ifTrue1029 = $tmp1030;
    if (((panda$core$Bit) { ifTrue1029 == NULL }).value) {
    {
        {
            tmp881031 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1029));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1026));
            }
            return tmp881031;
        }
    }
    }
    memset(&ifFalse1032, 0, sizeof(ifFalse1032));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1033, ((panda$core$Int64) { 37 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1034 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1033);
    if (((panda$core$Bit) { $tmp1034.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1035 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1035.kind.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1036.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1032));
                org$pandalanguage$pandac$ASTNode* $tmp1037 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1032 = $tmp1037;
            }
            if (((panda$core$Bit) { ifFalse1032 == NULL }).value) {
            {
                {
                    tmp891038 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1029));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1026));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1032));
                    }
                    return tmp891038;
                }
            }
            }
        }
        }
        else {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1032));
                org$pandalanguage$pandac$ASTNode* $tmp1039 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
                ifFalse1032 = $tmp1039;
            }
            if (((panda$core$Bit) { ifFalse1032 == NULL }).value) {
            {
                {
                    tmp901040 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1029));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1026));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1032));
                    }
                    return tmp901040;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1032));
            ifFalse1032 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1042 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1042->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1042->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q($tmp1042, ((panda$core$Int64) { 19 }), ((org$pandalanguage$pandac$parser$Token) start1022.value).position, test1026, ifTrue1029, ifFalse1032);
        tmp911041 = $tmp1042;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifTrue1029));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1026));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ifFalse1032));
        }
        return tmp911041;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $tmp1044;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1044, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1046 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1044, &$s1045);
    if (((panda$core$Bit) { !$tmp1046.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1047 = org$pandalanguage$pandac$parser$Parser$type$panda$core$Bit$R$org$pandalanguage$pandac$ASTNode$Q(self, ((panda$core$Bit) { false }));
    return $tmp1047;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1048;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1049;
    org$pandalanguage$pandac$ASTNode* type1054;
    org$pandalanguage$pandac$ASTNode* tmp921056;
    org$pandalanguage$pandac$ASTNode* tmp931057;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1049, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1051 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1049, &$s1050);
    id1048 = $tmp1051;
    if (((panda$core$Bit) { !id1048.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1052 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1052.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1053.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1055 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        type1054 = $tmp1055;
        if (((panda$core$Bit) { type1054 == NULL }).value) {
        {
            {
                tmp921056 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1054));
                return tmp921056;
            }
        }
        }
        {
            org$pandalanguage$pandac$ASTNode* $tmp1058 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1058->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1058->refCount.value = 1;
            panda$core$String* $tmp1060 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1048.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1058, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1048.value).position, $tmp1060, type1054);
            tmp931057 = $tmp1058;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type1054));
            return tmp931057;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1061 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1061->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1061->refCount.value = 1;
    panda$core$String* $tmp1063 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1048.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1061, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1048.value).position, $tmp1063);
    return $tmp1061;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1064;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1065;
    org$pandalanguage$pandac$ASTNode* t1068;
    org$pandalanguage$pandac$ASTNode* tmp941070;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1071;
    org$pandalanguage$pandac$ASTNode* tmp951074;
    org$pandalanguage$pandac$ASTNode* list1075;
    org$pandalanguage$pandac$ASTNode* tmp961077;
    panda$collections$ImmutableArray* block1078;
    org$pandalanguage$pandac$ASTNode* tmp971080;
    org$pandalanguage$pandac$ASTNode* tmp981081;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1065, ((panda$core$Int64) { 32 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1067 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1065, &$s1066);
    start1064 = $tmp1067;
    if (((panda$core$Bit) { !start1064.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1069 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1068 = $tmp1069;
    if (((panda$core$Bit) { t1068 == NULL }).value) {
    {
        {
            tmp941070 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1068));
            return tmp941070;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1071, ((panda$core$Int64) { 34 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1073 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1071, &$s1072);
    if (((panda$core$Bit) { !$tmp1073.nonnull }).value) {
    {
        {
            tmp951074 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1068));
            return tmp951074;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1076 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    list1075 = $tmp1076;
    if (((panda$core$Bit) { list1075 == NULL }).value) {
    {
        {
            tmp961077 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1068));
            }
            return tmp961077;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1079 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    block1078 = $tmp1079;
    if (((panda$core$Bit) { block1078 == NULL }).value) {
    {
        {
            tmp971080 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1068));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1078));
            }
            return tmp971080;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1082 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1082->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1082->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1082, ((panda$core$Int64) { 16 }), ((org$pandalanguage$pandac$parser$Token) start1064.value).position, p_label, t1068, list1075, block1078);
        tmp981081 = $tmp1082;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) list1075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1068));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) block1078));
        }
        return tmp981081;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1084;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1085;
    org$pandalanguage$pandac$ASTNode* test1088;
    org$pandalanguage$pandac$ASTNode* tmp991090;
    panda$collections$ImmutableArray* body1091;
    org$pandalanguage$pandac$ASTNode* tmp1001093;
    org$pandalanguage$pandac$ASTNode* tmp1011094;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1085, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1087 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1085, &$s1086);
    start1084 = $tmp1087;
    if (((panda$core$Bit) { !start1084.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1089 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1088 = $tmp1089;
    if (((panda$core$Bit) { test1088 == NULL }).value) {
    {
        {
            tmp991090 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1088));
            return tmp991090;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1092 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1091 = $tmp1092;
    if (((panda$core$Bit) { body1091 == NULL }).value) {
    {
        {
            tmp1001093 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1088));
            }
            return tmp1001093;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1095 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1095->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1095->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1095, ((panda$core$Int64) { 40 }), ((org$pandalanguage$pandac$parser$Token) start1084.value).position, p_label, test1088, body1091);
        tmp1011094 = $tmp1095;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1091));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1088));
        }
        return tmp1011094;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1097;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1098;
    panda$collections$ImmutableArray* body1101;
    org$pandalanguage$pandac$ASTNode* tmp1021103;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1104;
    org$pandalanguage$pandac$ASTNode* tmp1031107;
    org$pandalanguage$pandac$ASTNode* test1108;
    org$pandalanguage$pandac$ASTNode* tmp1041110;
    org$pandalanguage$pandac$ASTNode* tmp1051111;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1098, ((panda$core$Int64) { 30 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1100 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1098, &$s1099);
    start1097 = $tmp1100;
    if (((panda$core$Bit) { !start1097.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1102 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1101 = $tmp1102;
    if (((panda$core$Bit) { body1101 == NULL }).value) {
    {
        {
            tmp1021103 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1101));
            return tmp1021103;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1104, ((panda$core$Int64) { 31 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1106 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1104, &$s1105);
    if (((panda$core$Bit) { !$tmp1106.nonnull }).value) {
    {
        {
            tmp1031107 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1101));
            return tmp1031107;
        }
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1109 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    test1108 = $tmp1109;
    if (((panda$core$Bit) { test1108 == NULL }).value) {
    {
        {
            tmp1041110 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1108));
            }
            return tmp1041110;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1112 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1112->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1112->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1112, ((panda$core$Int64) { 12 }), ((org$pandalanguage$pandac$parser$Token) start1097.value).position, p_label, body1101, test1108);
        tmp1051111 = $tmp1112;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test1108));
        }
        return tmp1051111;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, panda$core$String* p_label) {
    org$pandalanguage$pandac$parser$Token$nullable start1114;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1115;
    panda$collections$ImmutableArray* body1118;
    org$pandalanguage$pandac$ASTNode* tmp1061120;
    org$pandalanguage$pandac$ASTNode* tmp1071121;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1115, ((panda$core$Int64) { 35 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1117 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1115, &$s1116);
    start1114 = $tmp1117;
    if (((panda$core$Bit) { !start1114.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1119 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    body1118 = $tmp1119;
    if (((panda$core$Bit) { body1118 == NULL }).value) {
    {
        {
            tmp1061120 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1118));
            return tmp1061120;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1122 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1122->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1122->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1122, ((panda$core$Int64) { 21 }), ((org$pandalanguage$pandac$parser$Token) start1114.value).position, p_label, body1118);
        tmp1071121 = $tmp1122;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1118));
        return tmp1071121;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1124;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1125;
    org$pandalanguage$pandac$ASTNode* expr1128;
    org$pandalanguage$pandac$ASTNode* tmp1081130;
    org$pandalanguage$pandac$ASTNode* message1131;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1132;
    org$pandalanguage$pandac$ASTNode* tmp1091135;
    org$pandalanguage$pandac$ASTNode* tmp1101136;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1125, ((panda$core$Int64) { 44 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1127 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1125, &$s1126);
    start1124 = $tmp1127;
    if (((panda$core$Bit) { !start1124.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1129 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1128 = $tmp1129;
    if (((panda$core$Bit) { expr1128 == NULL }).value) {
    {
        {
            tmp1081130 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1128));
            return tmp1081130;
        }
    }
    }
    memset(&message1131, 0, sizeof(message1131));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1132, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1133 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1132);
    if (((panda$core$Bit) { $tmp1133.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1134 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            message1131 = $tmp1134;
        }
        if (((panda$core$Bit) { message1131 == NULL }).value) {
        {
            {
                tmp1091135 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1131));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1128));
                }
                return tmp1091135;
            }
        }
        }
    }
    }
    else {
    {
        {
            message1131 = NULL;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1137 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1137->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1137->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1137, ((panda$core$Int64) { 1 }), ((org$pandalanguage$pandac$parser$Token) start1124.value).position, expr1128, message1131);
        tmp1101136 = $tmp1137;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) message1131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1128));
        }
        return tmp1101136;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1139;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1140;
    panda$collections$Array* expressions1143;
    org$pandalanguage$pandac$ASTNode* expr1146;
    org$pandalanguage$pandac$ASTNode* tmp1111148;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1151;
    org$pandalanguage$pandac$ASTNode* tmp1121154;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1155;
    org$pandalanguage$pandac$ASTNode* tmp1131158;
    panda$collections$Array* statements1159;
    org$pandalanguage$pandac$parser$Token$Kind $match$1114_131164;
    org$pandalanguage$pandac$ASTNode* stmt1184;
    org$pandalanguage$pandac$ASTNode* tmp1151186;
    org$pandalanguage$pandac$ASTNode* stmt1187;
    org$pandalanguage$pandac$ASTNode* tmp1141189;
    org$pandalanguage$pandac$ASTNode* tmp1161190;
    org$pandalanguage$pandac$ASTNode* tmp1171191;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1140, ((panda$core$Int64) { 39 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1142 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1140, &$s1141);
    start1139 = $tmp1142;
    if (((panda$core$Bit) { !start1139.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1144 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1144->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1144->refCount.value = 1;
    panda$collections$Array$init($tmp1144);
    expressions1143 = $tmp1144;
    org$pandalanguage$pandac$ASTNode* $tmp1147 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1146 = $tmp1147;
    if (((panda$core$Bit) { expr1146 == NULL }).value) {
    {
        {
            tmp1111148 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1146));
            }
            return tmp1111148;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(expressions1143, ((panda$core$Object*) expr1146));
    $l1149:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1151, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1152 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1151);
    if (!((panda$core$Bit) { $tmp1152.nonnull }).value) goto $l1150;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1146));
            org$pandalanguage$pandac$ASTNode* $tmp1153 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1146 = $tmp1153;
        }
        if (((panda$core$Bit) { expr1146 == NULL }).value) {
        {
            {
                tmp1121154 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1143));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1146));
                }
                return tmp1121154;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(expressions1143, ((panda$core$Object*) expr1146));
    }
    goto $l1149;
    $l1150:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1155, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1157 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1155, &$s1156);
    if (((panda$core$Bit) { !$tmp1157.nonnull }).value) {
    {
        {
            tmp1131158 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1146));
            }
            return tmp1131158;
        }
    }
    }
    panda$collections$Array* $tmp1160 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1160->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1160->refCount.value = 1;
    panda$collections$Array$init($tmp1160);
    statements1159 = $tmp1160;
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
                stmt1184 = $tmp1185;
                if (((panda$core$Bit) { stmt1184 == NULL }).value) {
                {
                    {
                        tmp1151186 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1143));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1159));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1146));
                        }
                        return tmp1151186;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(statements1159, ((panda$core$Object*) stmt1184));
                goto $l1163;
            }
            }
            else {
            {
                {
                    org$pandalanguage$pandac$ASTNode* $tmp1188 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    stmt1187 = $tmp1188;
                    if (((panda$core$Bit) { stmt1187 == NULL }).value) {
                    {
                        {
                            tmp1141189 = NULL;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1187));
                            {
                                tmp1161190 = tmp1141189;
                                {
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1143));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1159));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1146));
                                }
                                return tmp1161190;
                            }
                        }
                    }
                    }
                    panda$collections$Array$add$panda$collections$Array$T(statements1159, ((panda$core$Object*) stmt1187));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stmt1187));
                }
            }
            }
            }
        }
    }
    }
    $l1163:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1192 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1192->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1192->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1194 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(expressions1143);
        panda$collections$ImmutableArray* $tmp1195 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1159);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1192, ((panda$core$Int64) { 39 }), ((org$pandalanguage$pandac$parser$Token) start1139.value).position, $tmp1194, $tmp1195);
        tmp1171191 = $tmp1192;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions1143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1159));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1146));
        }
        return tmp1171191;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1196;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1197;
    org$pandalanguage$pandac$ASTNode* expr1200;
    org$pandalanguage$pandac$ASTNode* tmp1181202;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1203;
    org$pandalanguage$pandac$ASTNode* tmp1191206;
    panda$collections$Array* whens1207;
    panda$collections$Array* other1210;
    org$pandalanguage$pandac$parser$Token token1213;
    org$pandalanguage$pandac$parser$Token$Kind $match$1155_131215;
    org$pandalanguage$pandac$ASTNode* w1218;
    org$pandalanguage$pandac$ASTNode* tmp1201220;
    org$pandalanguage$pandac$parser$Token o1222;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1224;
    org$pandalanguage$pandac$ASTNode* tmp1211227;
    org$pandalanguage$pandac$parser$Token$Kind $match$1171_251232;
    org$pandalanguage$pandac$ASTNode* stmt1244;
    org$pandalanguage$pandac$ASTNode* tmp1221246;
    org$pandalanguage$pandac$ASTNode* stmt1247;
    org$pandalanguage$pandac$ASTNode* tmp1231249;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1257;
    org$pandalanguage$pandac$ASTNode* tmp1241260;
    org$pandalanguage$pandac$ASTNode* tmp1251261;
    org$pandalanguage$pandac$ASTNode* tmp1261266;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1197, ((panda$core$Int64) { 38 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1199 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1197, &$s1198);
    start1196 = $tmp1199;
    if (((panda$core$Bit) { !start1196.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1201 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    expr1200 = $tmp1201;
    if (((panda$core$Bit) { expr1200 == NULL }).value) {
    {
        {
            tmp1181202 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
            return tmp1181202;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1203, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1205 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1203, &$s1204);
    if (((panda$core$Bit) { !$tmp1205.nonnull }).value) {
    {
        {
            tmp1191206 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
            return tmp1191206;
        }
    }
    }
    panda$collections$Array* $tmp1208 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1208->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1208->refCount.value = 1;
    panda$collections$Array$init($tmp1208);
    whens1207 = $tmp1208;
    other1210 = NULL;
    $l1211:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1214 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        token1213 = $tmp1214;
        {
            $match$1155_131215 = token1213.kind;
            panda$core$Bit $tmp1216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131215.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1216.value) {
            {
                goto $l1212;
            }
            }
            else {
            panda$core$Bit $tmp1217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131215.$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1217.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1219 = org$pandalanguage$pandac$parser$Parser$whenClause$R$org$pandalanguage$pandac$ASTNode$Q(self);
                w1218 = $tmp1219;
                if (((panda$core$Bit) { w1218 == NULL }).value) {
                {
                    {
                        tmp1201220 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
                        }
                        return tmp1201220;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(whens1207, ((panda$core$Object*) w1218));
            }
            }
            else {
            panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1155_131215.$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1221.value) {
            {
                org$pandalanguage$pandac$parser$Token $tmp1223 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                o1222 = $tmp1223;
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1224, ((panda$core$Int64) { 95 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1226 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1224, &$s1225);
                if (((panda$core$Bit) { !$tmp1226.nonnull }).value) {
                {
                    {
                        tmp1211227 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
                        }
                        return tmp1211227;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
                    panda$collections$Array* $tmp1228 = (panda$collections$Array*) pandaZAlloc(40);
                    $tmp1228->$class = (panda$core$Class*) &panda$collections$Array$class;
                    $tmp1228->refCount.value = 1;
                    panda$collections$Array$init($tmp1228);
                    other1210 = $tmp1228;
                }
                $l1230:;
                while (true) {
                {
                    {
                        org$pandalanguage$pandac$parser$Token $tmp1233 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
                        $match$1171_251232 = $tmp1233.kind;
                        panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251232.$rawValue, ((panda$core$Int64) { 100 }));
                        if ($tmp1234.value) {
                        {
                            goto $l1231;
                        }
                        }
                        else {
                        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251232.$rawValue, ((panda$core$Int64) { 28 }));
                        bool $tmp1236 = $tmp1237.value;
                        if ($tmp1236) goto $l1238;
                        panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251232.$rawValue, ((panda$core$Int64) { 29 }));
                        $tmp1236 = $tmp1239.value;
                        $l1238:;
                        panda$core$Bit $tmp1240 = { $tmp1236 };
                        bool $tmp1235 = $tmp1240.value;
                        if ($tmp1235) goto $l1241;
                        panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1171_251232.$rawValue, ((panda$core$Int64) { 27 }));
                        $tmp1235 = $tmp1242.value;
                        $l1241:;
                        panda$core$Bit $tmp1243 = { $tmp1235 };
                        if ($tmp1243.value) {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1245 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1244 = $tmp1245;
                            if (((panda$core$Bit) { stmt1244 == NULL }).value) {
                            {
                                {
                                    tmp1221246 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1207));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
                                    }
                                    return tmp1221246;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1210, ((panda$core$Object*) stmt1244));
                            goto $l1231;
                        }
                        }
                        else {
                        {
                            org$pandalanguage$pandac$ASTNode* $tmp1248 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                            stmt1247 = $tmp1248;
                            if (((panda$core$Bit) { stmt1247 == NULL }).value) {
                            {
                                {
                                    tmp1231249 = NULL;
                                    {
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1207));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
                                    }
                                    return tmp1231249;
                                }
                            }
                            }
                            panda$collections$Array$add$panda$collections$Array$T(other1210, ((panda$core$Object*) stmt1247));
                        }
                        }
                        }
                    }
                }
                }
                $l1231:;
                goto $l1212;
            }
            }
            else {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                panda$core$String* $tmp1252 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1213);
                panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1251, $tmp1252);
                panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1253, &$s1254);
                panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1250, $tmp1255);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, token1213, $tmp1256);
            }
            }
            }
            }
        }
    }
    }
    $l1212:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1257, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1259 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1257, &$s1258);
    if (((panda$core$Bit) { !$tmp1259.nonnull }).value) {
    {
        {
            tmp1241260 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1207));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
            }
            return tmp1241260;
        }
    }
    }
    if (((panda$core$Bit) { other1210 != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1262 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1262->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1262->refCount.value = 1;
            panda$collections$ImmutableArray* $tmp1264 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1207);
            panda$collections$ImmutableArray* $tmp1265 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(other1210);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1262, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1196.value).position, expr1200, $tmp1264, $tmp1265);
            tmp1251261 = $tmp1262;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1207));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
            }
            return tmp1251261;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1267 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1267->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1267->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1269 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(whens1207);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1267, ((panda$core$Int64) { 22 }), ((org$pandalanguage$pandac$parser$Token) start1196.value).position, expr1200, $tmp1269, NULL);
        tmp1261266 = $tmp1267;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) whens1207));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) other1210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1200));
        }
        return tmp1261266;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1270;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1271;
    panda$collections$Array* result1274;
    org$pandalanguage$pandac$parser$Token$Kind $match$1215_131279;
    org$pandalanguage$pandac$ASTNode* stmt1291;
    panda$collections$ImmutableArray* tmp1271293;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1294;
    panda$collections$ImmutableArray* tmp1281297;
    org$pandalanguage$pandac$ASTNode* stmt1298;
    panda$collections$ImmutableArray* tmp1291300;
    panda$collections$ImmutableArray* tmp1301301;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1271, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1273 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1271, &$s1272);
    start1270 = $tmp1273;
    if (((panda$core$Bit) { !start1270.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1275 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1275->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1275->refCount.value = 1;
    panda$collections$Array$init($tmp1275);
    result1274 = $tmp1275;
    $l1277:;
    while (true) {
    {
        {
            org$pandalanguage$pandac$parser$Token $tmp1280 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            $match$1215_131279 = $tmp1280.kind;
            panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131279.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp1281.value) {
            {
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                goto $l1278;
            }
            }
            else {
            panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131279.$rawValue, ((panda$core$Int64) { 28 }));
            bool $tmp1283 = $tmp1284.value;
            if ($tmp1283) goto $l1285;
            panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131279.$rawValue, ((panda$core$Int64) { 29 }));
            $tmp1283 = $tmp1286.value;
            $l1285:;
            panda$core$Bit $tmp1287 = { $tmp1283 };
            bool $tmp1282 = $tmp1287.value;
            if ($tmp1282) goto $l1288;
            panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1215_131279.$rawValue, ((panda$core$Int64) { 27 }));
            $tmp1282 = $tmp1289.value;
            $l1288:;
            panda$core$Bit $tmp1290 = { $tmp1282 };
            if ($tmp1290.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1292 = org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1291 = $tmp1292;
                if (((panda$core$Bit) { stmt1291 == NULL }).value) {
                {
                    {
                        tmp1271293 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1274));
                        return tmp1271293;
                    }
                }
                }
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1294, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Token$nullable $tmp1296 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1294, &$s1295);
                if (((panda$core$Bit) { !$tmp1296.nonnull }).value) {
                {
                    {
                        tmp1281297 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1274));
                        return tmp1281297;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1274, ((panda$core$Object*) stmt1291));
                goto $l1278;
            }
            }
            else {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1299 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
                stmt1298 = $tmp1299;
                if (((panda$core$Bit) { stmt1298 == NULL }).value) {
                {
                    {
                        tmp1291300 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1274));
                        return tmp1291300;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(result1274, ((panda$core$Object*) stmt1298));
            }
            }
            }
        }
    }
    }
    $l1278:;
    {
        panda$collections$ImmutableArray* $tmp1302 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1274);
        tmp1301301 = $tmp1302;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1274));
        return tmp1301301;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$ImmutableArray* statements1303;
    org$pandalanguage$pandac$ASTNode* tmp1311305;
    org$pandalanguage$pandac$ASTNode* tmp1321306;
    org$pandalanguage$pandac$Position $tmp1309;
    panda$collections$ImmutableArray* $tmp1304 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    statements1303 = $tmp1304;
    if (((panda$core$Bit) { statements1303 == NULL }).value) {
    {
        {
            tmp1311305 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1303));
            return tmp1311305;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1307 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1307->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1307->refCount.value = 1;
        org$pandalanguage$pandac$Position$init(&$tmp1309);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1307, ((panda$core$Int64) { 4 }), $tmp1309, statements1303);
        tmp1321306 = $tmp1307;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1303));
        return tmp1321306;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* start1310;
    org$pandalanguage$pandac$ASTNode* tmp1331312;
    org$pandalanguage$pandac$parser$Token$Kind $match$1259_91313;
    org$pandalanguage$pandac$parser$Token op1376;
    org$pandalanguage$pandac$ASTNode* rvalue1378;
    org$pandalanguage$pandac$ASTNode* tmp1341380;
    org$pandalanguage$pandac$ASTNode* tmp1351381;
    org$pandalanguage$pandac$parser$Token op1389;
    org$pandalanguage$pandac$ASTNode* rvalue1391;
    org$pandalanguage$pandac$ASTNode* tmp1361393;
    org$pandalanguage$pandac$ASTNode* tmp1371394;
    org$pandalanguage$pandac$ASTNode* tmp1381399;
    org$pandalanguage$pandac$ASTNode* $tmp1311 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
    start1310 = $tmp1311;
    if (((panda$core$Bit) { start1310 == NULL }).value) {
    {
        {
            tmp1331312 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1310));
            return tmp1331312;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1314 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1259_91313 = $tmp1314.kind;
        panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 73 }));
        bool $tmp1329 = $tmp1330.value;
        if ($tmp1329) goto $l1331;
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 74 }));
        $tmp1329 = $tmp1332.value;
        $l1331:;
        panda$core$Bit $tmp1333 = { $tmp1329 };
        bool $tmp1328 = $tmp1333.value;
        if ($tmp1328) goto $l1334;
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 75 }));
        $tmp1328 = $tmp1335.value;
        $l1334:;
        panda$core$Bit $tmp1336 = { $tmp1328 };
        bool $tmp1327 = $tmp1336.value;
        if ($tmp1327) goto $l1337;
        panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 76 }));
        $tmp1327 = $tmp1338.value;
        $l1337:;
        panda$core$Bit $tmp1339 = { $tmp1327 };
        bool $tmp1326 = $tmp1339.value;
        if ($tmp1326) goto $l1340;
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 77 }));
        $tmp1326 = $tmp1341.value;
        $l1340:;
        panda$core$Bit $tmp1342 = { $tmp1326 };
        bool $tmp1325 = $tmp1342.value;
        if ($tmp1325) goto $l1343;
        panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 78 }));
        $tmp1325 = $tmp1344.value;
        $l1343:;
        panda$core$Bit $tmp1345 = { $tmp1325 };
        bool $tmp1324 = $tmp1345.value;
        if ($tmp1324) goto $l1346;
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 79 }));
        $tmp1324 = $tmp1347.value;
        $l1346:;
        panda$core$Bit $tmp1348 = { $tmp1324 };
        bool $tmp1323 = $tmp1348.value;
        if ($tmp1323) goto $l1349;
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 80 }));
        $tmp1323 = $tmp1350.value;
        $l1349:;
        panda$core$Bit $tmp1351 = { $tmp1323 };
        bool $tmp1322 = $tmp1351.value;
        if ($tmp1322) goto $l1352;
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 81 }));
        $tmp1322 = $tmp1353.value;
        $l1352:;
        panda$core$Bit $tmp1354 = { $tmp1322 };
        bool $tmp1321 = $tmp1354.value;
        if ($tmp1321) goto $l1355;
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 82 }));
        $tmp1321 = $tmp1356.value;
        $l1355:;
        panda$core$Bit $tmp1357 = { $tmp1321 };
        bool $tmp1320 = $tmp1357.value;
        if ($tmp1320) goto $l1358;
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 83 }));
        $tmp1320 = $tmp1359.value;
        $l1358:;
        panda$core$Bit $tmp1360 = { $tmp1320 };
        bool $tmp1319 = $tmp1360.value;
        if ($tmp1319) goto $l1361;
        panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 84 }));
        $tmp1319 = $tmp1362.value;
        $l1361:;
        panda$core$Bit $tmp1363 = { $tmp1319 };
        bool $tmp1318 = $tmp1363.value;
        if ($tmp1318) goto $l1364;
        panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 85 }));
        $tmp1318 = $tmp1365.value;
        $l1364:;
        panda$core$Bit $tmp1366 = { $tmp1318 };
        bool $tmp1317 = $tmp1366.value;
        if ($tmp1317) goto $l1367;
        panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 86 }));
        $tmp1317 = $tmp1368.value;
        $l1367:;
        panda$core$Bit $tmp1369 = { $tmp1317 };
        bool $tmp1316 = $tmp1369.value;
        if ($tmp1316) goto $l1370;
        panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 87 }));
        $tmp1316 = $tmp1371.value;
        $l1370:;
        panda$core$Bit $tmp1372 = { $tmp1316 };
        bool $tmp1315 = $tmp1372.value;
        if ($tmp1315) goto $l1373;
        panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 88 }));
        $tmp1315 = $tmp1374.value;
        $l1373:;
        panda$core$Bit $tmp1375 = { $tmp1315 };
        if ($tmp1375.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1377 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1376 = $tmp1377;
            org$pandalanguage$pandac$ASTNode* $tmp1379 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1378 = $tmp1379;
            if (((panda$core$Bit) { rvalue1378 == NULL }).value) {
            {
                {
                    tmp1341380 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1310));
                    return tmp1341380;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1382 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp1382->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1382->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1385 = (($fn1384) start1310->$class->vtable[2])(start1310);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1382, ((panda$core$Int64) { 2 }), $tmp1385, start1310, op1376.kind, rvalue1378);
                tmp1351381 = $tmp1382;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1310));
                return tmp1351381;
            }
        }
        }
        else {
        panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1259_91313.$rawValue, ((panda$core$Int64) { 58 }));
        if ($tmp1386.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1387 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1387, &$s1388);
            org$pandalanguage$pandac$parser$Token $tmp1390 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            op1389 = $tmp1390;
            org$pandalanguage$pandac$ASTNode* $tmp1392 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            rvalue1391 = $tmp1392;
            if (((panda$core$Bit) { rvalue1391 == NULL }).value) {
            {
                {
                    tmp1361393 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1310));
                    return tmp1361393;
                }
            }
            }
            {
                org$pandalanguage$pandac$ASTNode* $tmp1395 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
                $tmp1395->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
                $tmp1395->refCount.value = 1;
                org$pandalanguage$pandac$Position $tmp1398 = (($fn1397) start1310->$class->vtable[2])(start1310);
                org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1395, ((panda$core$Int64) { 2 }), $tmp1398, start1310, op1389.kind, rvalue1391);
                tmp1371394 = $tmp1395;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1310));
                return tmp1371394;
            }
        }
        }
        else {
        {
            {
                tmp1381399 = start1310;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1310));
                return tmp1381399;
            }
        }
        }
        }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) start1310));
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$ASTNode* t1400;
    org$pandalanguage$pandac$ASTNode* tmp1391402;
    org$pandalanguage$pandac$ASTNode* value1403;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1404;
    org$pandalanguage$pandac$ASTNode* tmp1401407;
    org$pandalanguage$pandac$ASTNode* tmp1411413;
    org$pandalanguage$pandac$ASTNode* tmp1421414;
    org$pandalanguage$pandac$ASTNode* $tmp1401 = org$pandalanguage$pandac$parser$Parser$target$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1400 = $tmp1401;
    if (((panda$core$Bit) { t1400 == NULL }).value) {
    {
        {
            tmp1391402 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1400));
            return tmp1391402;
        }
    }
    }
    memset(&value1403, 0, sizeof(value1403));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1404, ((panda$core$Int64) { 73 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1405 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1404);
    if (((panda$core$Bit) { $tmp1405.nonnull }).value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1406 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1403 = $tmp1406;
        }
        if (((panda$core$Bit) { value1403 == NULL }).value) {
        {
            {
                tmp1401407 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1400));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1403));
                }
                return tmp1401407;
            }
        }
        }
    }
    }
    else {
    org$pandalanguage$pandac$parser$Token $tmp1408 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1408.kind.$rawValue, ((panda$core$Int64) { 58 }));
    if ($tmp1409.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1410 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
        org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, $tmp1410, &$s1411);
        {
            org$pandalanguage$pandac$ASTNode* $tmp1412 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            value1403 = $tmp1412;
        }
        if (((panda$core$Bit) { value1403 == NULL }).value) {
        {
            {
                tmp1411413 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1400));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1403));
                }
                return tmp1411413;
            }
        }
        }
    }
    }
    else {
    {
        {
            value1403 = NULL;
        }
    }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1415 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1415->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1415->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp1418 = (($fn1417) t1400->$class->vtable[2])(t1400);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q($tmp1415, ((panda$core$Int64) { 11 }), $tmp1418, t1400, value1403);
        tmp1421414 = $tmp1415;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) value1403));
        }
        return tmp1421414;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start1419;
    org$pandalanguage$pandac$Variable$Kind kind1421;
    org$pandalanguage$pandac$parser$Token$Kind $match$1318_91422;
    org$pandalanguage$pandac$Variable$Kind $tmp1424;
    org$pandalanguage$pandac$Variable$Kind $tmp1426;
    org$pandalanguage$pandac$Variable$Kind $tmp1428;
    org$pandalanguage$pandac$Variable$Kind $tmp1430;
    panda$collections$Array* declarations1432;
    org$pandalanguage$pandac$ASTNode* decl1435;
    org$pandalanguage$pandac$ASTNode* tmp1431437;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1440;
    org$pandalanguage$pandac$ASTNode* decl1442;
    org$pandalanguage$pandac$ASTNode* tmp1441444;
    org$pandalanguage$pandac$ASTNode* tmp1451445;
    org$pandalanguage$pandac$ASTNode* tmp1461446;
    org$pandalanguage$pandac$parser$Token $tmp1420 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
    start1419 = $tmp1420;
    memset(&kind1421, 0, sizeof(kind1421));
    {
        $match$1318_91422 = start1419.kind;
        panda$core$Bit $tmp1423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91422.$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1423.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1424, ((panda$core$Int64) { 0 }));
            kind1421 = $tmp1424;
        }
        }
        else {
        panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91422.$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1425.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1426, ((panda$core$Int64) { 1 }));
            kind1421 = $tmp1426;
        }
        }
        else {
        panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91422.$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1427.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1428, ((panda$core$Int64) { 3 }));
            kind1421 = $tmp1428;
        }
        }
        else {
        panda$core$Bit $tmp1429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1318_91422.$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1429.value) {
        {
            org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(&$tmp1430, ((panda$core$Int64) { 2 }));
            kind1421 = $tmp1430;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, start1419, &$s1431);
        }
        }
        }
        }
        }
    }
    panda$collections$Array* $tmp1433 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1433->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1433->refCount.value = 1;
    panda$collections$Array$init($tmp1433);
    declarations1432 = $tmp1433;
    org$pandalanguage$pandac$ASTNode* $tmp1436 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1435 = $tmp1436;
    if (((panda$core$Bit) { decl1435 == NULL }).value) {
    {
        {
            tmp1431437 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1435));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1432));
            }
            return tmp1431437;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(declarations1432, ((panda$core$Object*) decl1435));
    $l1438:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1440, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1441 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1440);
    if (!((panda$core$Bit) { $tmp1441.nonnull }).value) goto $l1439;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1443 = org$pandalanguage$pandac$parser$Parser$singleVar$R$org$pandalanguage$pandac$ASTNode$Q(self);
        decl1442 = $tmp1443;
        if (((panda$core$Bit) { decl1442 == NULL }).value) {
        {
            {
                tmp1441444 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1442));
                {
                    tmp1451445 = tmp1441444;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1435));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1432));
                    }
                    return tmp1451445;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(declarations1432, ((panda$core$Object*) decl1442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1442));
    }
    goto $l1438;
    $l1439:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1447 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1447->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1447->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1449 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(declarations1432);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1447, ((panda$core$Int64) { 38 }), start1419.position, kind1421, $tmp1449);
        tmp1461446 = $tmp1447;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1435));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) declarations1432));
        }
        return tmp1461446;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1450;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1451;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1454;
    org$pandalanguage$pandac$ASTNode* target1458;
    panda$collections$Array* args1462;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1465;
    org$pandalanguage$pandac$ASTNode* expr1467;
    org$pandalanguage$pandac$ASTNode* tmp1471469;
    org$pandalanguage$pandac$ASTNode* tmp1501470;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1473;
    org$pandalanguage$pandac$ASTNode* tmp1481476;
    org$pandalanguage$pandac$ASTNode* tmp1511477;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1478;
    org$pandalanguage$pandac$ASTNode* tmp1491481;
    org$pandalanguage$pandac$ASTNode* tmp1521482;
    org$pandalanguage$pandac$ASTNode* tmp1531483;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1451, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1453 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1451, &$s1452);
    start1450 = $tmp1453;
    if (((panda$core$Bit) { !start1450.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1454, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1456 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1454, &$s1455);
    if (((panda$core$Bit) { !$tmp1456.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$Bit$wrapper* $tmp1457;
    $tmp1457 = (panda$core$Bit$wrapper*) pandaZAlloc(13);
    $tmp1457->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    $tmp1457->refCount = 1;
    $tmp1457->value = ((panda$core$Bit) { true });
    panda$collections$Stack$push$panda$collections$Stack$T(self->commaSeparatedExpressionContext, ((panda$core$Object*) $tmp1457));
    org$pandalanguage$pandac$ASTNode* $tmp1459 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1459->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1459->refCount.value = 1;
    panda$core$String* $tmp1461 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1450.value));
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1459, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) start1450.value).position, $tmp1461);
    target1458 = $tmp1459;
    panda$collections$Array* $tmp1463 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1463->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1463->refCount.value = 1;
    panda$collections$Array$init($tmp1463);
    args1462 = $tmp1463;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1465, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1466 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1465);
    if (((panda$core$Bit) { !$tmp1466.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1468 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
        expr1467 = $tmp1468;
        if (((panda$core$Bit) { expr1467 == NULL }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1471469 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1467));
                {
                    tmp1501470 = tmp1471469;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1458));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1462));
                    }
                    return tmp1501470;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1462, ((panda$core$Object*) expr1467));
        $l1471:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1473, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1474 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1473);
        if (!((panda$core$Bit) { $tmp1474.nonnull }).value) goto $l1472;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1467));
                org$pandalanguage$pandac$ASTNode* $tmp1475 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
                expr1467 = $tmp1475;
            }
            if (((panda$core$Bit) { expr1467 == NULL }).value) {
            {
                panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
                {
                    tmp1481476 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1467));
                    {
                        tmp1511477 = tmp1481476;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1458));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1462));
                        }
                        return tmp1511477;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(args1462, ((panda$core$Object*) expr1467));
        }
        goto $l1471;
        $l1472:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1478, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1480 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1478, &$s1479);
        if (((panda$core$Bit) { !$tmp1480.nonnull }).value) {
        {
            panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
            {
                tmp1491481 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1467));
                {
                    tmp1521482 = tmp1491481;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1458));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1462));
                    }
                    return tmp1521482;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr1467));
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->commaSeparatedExpressionContext);
    {
        org$pandalanguage$pandac$ASTNode* $tmp1484 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1484->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1484->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp1486 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(args1462);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1484, ((panda$core$Int64) { 6 }), ((org$pandalanguage$pandac$parser$Token) start1450.value).position, target1458, $tmp1486);
        tmp1531483 = $tmp1484;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) target1458));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args1462));
        }
        return tmp1531483;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1487;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1488;
    org$pandalanguage$pandac$parser$Token$nullable label1491;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1492;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1488, ((panda$core$Int64) { 28 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1490 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1488, &$s1489);
    start1487 = $tmp1490;
    if (((panda$core$Bit) { !start1487.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1492, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1493 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1492);
    label1491 = $tmp1493;
    if (((panda$core$Bit) { label1491.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1494 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1494->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1494->refCount.value = 1;
        panda$core$String* $tmp1496 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1491.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1494, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1487.value).position, $tmp1496);
        return $tmp1494;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1497 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1497->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1497->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1497, ((panda$core$Int64) { 5 }), ((org$pandalanguage$pandac$parser$Token) start1487.value).position, NULL);
    return $tmp1497;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1499;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1500;
    org$pandalanguage$pandac$parser$Token$nullable label1503;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1504;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1500, ((panda$core$Int64) { 29 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1502 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1500, &$s1501);
    start1499 = $tmp1502;
    if (((panda$core$Bit) { !start1499.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1504, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1505 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1504);
    label1503 = $tmp1505;
    if (((panda$core$Bit) { label1503.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1506 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1506->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1506->refCount.value = 1;
        panda$core$String* $tmp1508 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) label1503.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1506, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1499.value).position, $tmp1508);
        return $tmp1506;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1509 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
    $tmp1509->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
    $tmp1509->refCount.value = 1;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q($tmp1509, ((panda$core$Int64) { 10 }), ((org$pandalanguage$pandac$parser$Token) start1499.value).position, NULL);
    return $tmp1509;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1511;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1512;
    org$pandalanguage$pandac$parser$Token$Kind $match$1422_91515;
    panda$collections$Array* children1528;
    org$pandalanguage$pandac$ASTNode* expr1531;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1512, ((panda$core$Int64) { 27 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1514 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1512, &$s1513);
    start1511 = $tmp1514;
    if (((panda$core$Bit) { !start1511.nonnull }).value) {
    {
        return NULL;
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp1516 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1422_91515 = $tmp1516.kind;
        panda$core$Bit $tmp1519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91515.$rawValue, ((panda$core$Int64) { 100 }));
        bool $tmp1518 = $tmp1519.value;
        if ($tmp1518) goto $l1520;
        panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91515.$rawValue, ((panda$core$Int64) { 39 }));
        $tmp1518 = $tmp1521.value;
        $l1520:;
        panda$core$Bit $tmp1522 = { $tmp1518 };
        bool $tmp1517 = $tmp1522.value;
        if ($tmp1517) goto $l1523;
        panda$core$Bit $tmp1524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1422_91515.$rawValue, ((panda$core$Int64) { 40 }));
        $tmp1517 = $tmp1524.value;
        $l1523:;
        panda$core$Bit $tmp1525 = { $tmp1517 };
        if ($tmp1525.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1526 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1526->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1526->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1526, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1511.value).position, NULL);
            return $tmp1526;
        }
        }
        else {
        {
            panda$collections$Array* $tmp1529 = (panda$collections$Array*) pandaZAlloc(40);
            $tmp1529->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp1529->refCount.value = 1;
            panda$collections$Array$init($tmp1529);
            children1528 = $tmp1529;
            org$pandalanguage$pandac$ASTNode* $tmp1532 = org$pandalanguage$pandac$parser$Parser$expression$R$org$pandalanguage$pandac$ASTNode$Q(self);
            expr1531 = $tmp1532;
            if (((panda$core$Bit) { expr1531 == NULL }).value) {
            {
                return NULL;
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(children1528, ((panda$core$Object*) expr1531));
            org$pandalanguage$pandac$ASTNode* $tmp1533 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1533->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1533->refCount.value = 1;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q($tmp1533, ((panda$core$Int64) { 31 }), ((org$pandalanguage$pandac$parser$Token) start1511.value).position, expr1531);
            return $tmp1533;
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$terminalStatement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1440_91535;
    {
        org$pandalanguage$pandac$parser$Token $tmp1536 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1440_91535 = $tmp1536.kind;
        panda$core$Bit $tmp1537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91535.$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1537.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1538 = org$pandalanguage$pandac$parser$Parser$breakStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1538;
        }
        }
        else {
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91535.$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1539.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1540 = org$pandalanguage$pandac$parser$Parser$continueStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1540;
        }
        }
        else {
        panda$core$Bit $tmp1541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1440_91535.$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1541.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1542 = org$pandalanguage$pandac$parser$Parser$returnStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1542;
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
    org$pandalanguage$pandac$parser$Token$Kind $match$1449_91543;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1553;
    {
        org$pandalanguage$pandac$parser$Token $tmp1544 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1449_91543 = $tmp1544.kind;
        panda$core$Bit $tmp1545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91543.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1545.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1546 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1546;
        }
        }
        else {
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91543.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1547.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1548 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1548;
        }
        }
        else {
        panda$core$Bit $tmp1549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91543.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1549.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1550 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1550;
        }
        }
        else {
        panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1449_91543.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1551.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1552 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, p_label);
            return $tmp1552;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1553, ((panda$core$Int64) { 30 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1553, &$s1554);
            return NULL;
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$1466_91555;
    org$pandalanguage$pandac$parser$Token id1574;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1576;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1603;
    {
        org$pandalanguage$pandac$parser$Token $tmp1556 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1466_91555 = $tmp1556.kind;
        panda$core$Bit $tmp1557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1557.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1558 = org$pandalanguage$pandac$parser$Parser$ifStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1558;
        }
        }
        else {
        panda$core$Bit $tmp1559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1559.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1560 = org$pandalanguage$pandac$parser$Parser$forLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1560;
        }
        }
        else {
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1561.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1562 = org$pandalanguage$pandac$parser$Parser$whileLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1562;
        }
        }
        else {
        panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1563.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1564 = org$pandalanguage$pandac$parser$Parser$doLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1564;
        }
        }
        else {
        panda$core$Bit $tmp1565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1565.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1566 = org$pandalanguage$pandac$parser$Parser$loopLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, NULL);
            return $tmp1566;
        }
        }
        else {
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1567.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1568 = org$pandalanguage$pandac$parser$Parser$assertStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1568;
        }
        }
        else {
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1569.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1570 = org$pandalanguage$pandac$parser$Parser$matchStatement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1570;
        }
        }
        else {
        panda$core$Bit $tmp1571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 99 }));
        if ($tmp1571.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1572 = org$pandalanguage$pandac$parser$Parser$block$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1572;
        }
        }
        else {
        panda$core$Bit $tmp1573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1573.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp1575 = org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
            id1574 = $tmp1575;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1576, ((panda$core$Int64) { 95 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1577 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1576);
            if (((panda$core$Bit) { $tmp1577.nonnull }).value) {
            {
                panda$core$String* $tmp1578 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, id1574);
                org$pandalanguage$pandac$ASTNode* $tmp1579 = org$pandalanguage$pandac$parser$Parser$anyLoop$panda$core$String$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, $tmp1578);
                return $tmp1579;
            }
            }
            org$pandalanguage$pandac$parser$Parser$pushback$org$pandalanguage$pandac$parser$Token(self, id1574);
            org$pandalanguage$pandac$ASTNode* $tmp1580 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1580;
        }
        }
        else {
        panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 46 }));
        bool $tmp1581 = $tmp1582.value;
        if ($tmp1581) goto $l1583;
        panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 47 }));
        $tmp1581 = $tmp1584.value;
        $l1583:;
        panda$core$Bit $tmp1585 = { $tmp1581 };
        if ($tmp1585.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1586 = org$pandalanguage$pandac$parser$Parser$expressionOrAssignment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1586;
        }
        }
        else {
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp1589 = $tmp1590.value;
        if ($tmp1589) goto $l1591;
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp1589 = $tmp1592.value;
        $l1591:;
        panda$core$Bit $tmp1593 = { $tmp1589 };
        bool $tmp1588 = $tmp1593.value;
        if ($tmp1588) goto $l1594;
        panda$core$Bit $tmp1595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp1588 = $tmp1595.value;
        $l1594:;
        panda$core$Bit $tmp1596 = { $tmp1588 };
        bool $tmp1587 = $tmp1596.value;
        if ($tmp1587) goto $l1597;
        panda$core$Bit $tmp1598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp1587 = $tmp1598.value;
        $l1597:;
        panda$core$Bit $tmp1599 = { $tmp1587 };
        if ($tmp1599.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1600 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1600;
        }
        }
        else {
        panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1466_91555.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1601.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1602 = org$pandalanguage$pandac$parser$Parser$initCall$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp1602;
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1603, ((panda$core$Int64) { 36 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1603, &$s1604);
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
    org$pandalanguage$pandac$parser$Token$nullable start1605;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1606;
    org$pandalanguage$pandac$parser$Token$nullable next1609;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1610;
    panda$core$MutableString* name1613;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1619;
    panda$core$Char8 $tmp1621;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1622;
    org$pandalanguage$pandac$ASTNode* tmp1541625;
    org$pandalanguage$pandac$ASTNode* tmp1551627;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1606, ((panda$core$Int64) { 14 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1608 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1606, &$s1607);
    start1605 = $tmp1608;
    if (((panda$core$Bit) { !start1605.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1610, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1612 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1610, &$s1611);
    next1609 = $tmp1612;
    if (((panda$core$Bit) { !next1609.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1614 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1614->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1614->refCount.value = 1;
    panda$core$String* $tmp1616 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1609.value));
    panda$core$MutableString$init$panda$core$String($tmp1614, $tmp1616);
    name1613 = $tmp1614;
    $l1617:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1619, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1620 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1619);
        next1609 = $tmp1620;
        if (((panda$core$Bit) { !next1609.nonnull }).value) {
        {
            goto $l1618;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1621, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1613, $tmp1621);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1622, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1624 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1622, &$s1623);
        next1609 = $tmp1624;
        if (((panda$core$Bit) { !next1609.nonnull }).value) {
        {
            {
                tmp1541625 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1613));
                return tmp1541625;
            }
        }
        }
        panda$core$String* $tmp1626 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1609.value));
        panda$core$MutableString$append$panda$core$String(name1613, $tmp1626);
    }
    }
    $l1618:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1628 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1628->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1628->refCount.value = 1;
        panda$core$String* $tmp1630 = panda$core$MutableString$finish$R$panda$core$String(name1613);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1628, ((panda$core$Int64) { 26 }), ((org$pandalanguage$pandac$parser$Token) start1605.value).position, $tmp1630);
        tmp1551627 = $tmp1628;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1613));
        return tmp1551627;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1631;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1632;
    org$pandalanguage$pandac$parser$Token$nullable next1635;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1636;
    panda$core$MutableString* name1639;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1645;
    panda$core$Char8 $tmp1647;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1648;
    org$pandalanguage$pandac$ASTNode* tmp1561651;
    org$pandalanguage$pandac$ASTNode* tmp1571653;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1632, ((panda$core$Int64) { 15 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1634 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1632, &$s1633);
    start1631 = $tmp1634;
    if (((panda$core$Bit) { !start1631.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1636, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1638 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1636, &$s1637);
    next1635 = $tmp1638;
    if (((panda$core$Bit) { !next1635.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1640 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1640->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1640->refCount.value = 1;
    panda$core$String* $tmp1642 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1635.value));
    panda$core$MutableString$init$panda$core$String($tmp1640, $tmp1642);
    name1639 = $tmp1640;
    $l1643:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1645, ((panda$core$Int64) { 98 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1646 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1645);
        next1635 = $tmp1646;
        if (((panda$core$Bit) { !next1635.nonnull }).value) {
        {
            goto $l1644;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp1647, ((panda$core$UInt8) { 46 }));
        panda$core$MutableString$append$panda$core$Char8(name1639, $tmp1647);
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1648, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1650 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1648, &$s1649);
        next1635 = $tmp1650;
        if (((panda$core$Bit) { !next1635.nonnull }).value) {
        {
            {
                tmp1561651 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1639));
                return tmp1561651;
            }
        }
        }
        panda$core$String* $tmp1652 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1635.value));
        panda$core$MutableString$append$panda$core$String(name1639, $tmp1652);
    }
    }
    $l1644:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1654 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1654->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1654->refCount.value = 1;
        panda$core$String* $tmp1656 = panda$core$MutableString$finish$R$panda$core$String(name1639);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1654, ((panda$core$Int64) { 37 }), ((org$pandalanguage$pandac$parser$Token) start1631.value).position, $tmp1656);
        tmp1571653 = $tmp1654;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1639));
        return tmp1571653;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1657;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1658;
    org$pandalanguage$pandac$parser$Token$nullable id1661;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1662;
    panda$collections$Array* parameters1665;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1668;
    org$pandalanguage$pandac$ASTNode* t1670;
    panda$collections$ImmutableArray* tmp1581672;
    panda$collections$ImmutableArray* tmp1591673;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1682;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1684;
    panda$collections$ImmutableArray* tmp1611687;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1688;
    org$pandalanguage$pandac$ASTNode* t1690;
    panda$collections$ImmutableArray* tmp1601692;
    panda$collections$ImmutableArray* tmp1621693;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1700;
    panda$collections$ImmutableArray* tmp1631703;
    panda$collections$ImmutableArray* tmp1641704;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1658, ((panda$core$Int64) { 62 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1660 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1658, &$s1659);
    start1657 = $tmp1660;
    if (((panda$core$Bit) { !start1657.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1662, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1664 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1662, &$s1663);
    id1661 = $tmp1664;
    if (((panda$core$Bit) { !id1661.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1666 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1666->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1666->refCount.value = 1;
    panda$collections$Array$init($tmp1666);
    parameters1665 = $tmp1666;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1668, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1669 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1668);
    if (((panda$core$Bit) { $tmp1669.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1671 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t1670 = $tmp1671;
        if (((panda$core$Bit) { t1670 == NULL }).value) {
        {
            {
                tmp1581672 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1670));
                {
                    tmp1591673 = tmp1581672;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1665));
                    return tmp1591673;
                }
            }
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1674 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1674->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1674->refCount.value = 1;
        panda$core$String* $tmp1676 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1661.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1674, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1661.value).position, $tmp1676, t1670);
        panda$collections$Array$add$panda$collections$Array$T(parameters1665, ((panda$core$Object*) $tmp1674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1670));
    }
    }
    else {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1677 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1677->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1677->refCount.value = 1;
        panda$core$String* $tmp1679 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1661.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1677, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1661.value).position, $tmp1679);
        panda$collections$Array$add$panda$collections$Array$T(parameters1665, ((panda$core$Object*) $tmp1677));
    }
    }
    $l1680:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1682, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1683 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1682);
    if (!((panda$core$Bit) { $tmp1683.nonnull }).value) goto $l1681;
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1684, ((panda$core$Int64) { 48 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1686 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1684, &$s1685);
        id1661 = $tmp1686;
        if (((panda$core$Bit) { !id1661.nonnull }).value) {
        {
            {
                tmp1611687 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1665));
                return tmp1611687;
            }
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1688, ((panda$core$Int64) { 95 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1689 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1688);
        if (((panda$core$Bit) { $tmp1689.nonnull }).value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1691 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1690 = $tmp1691;
            if (((panda$core$Bit) { t1690 == NULL }).value) {
            {
                {
                    tmp1601692 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1690));
                    {
                        tmp1621693 = tmp1601692;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1665));
                        return tmp1621693;
                    }
                }
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1694 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1694->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1694->refCount.value = 1;
            panda$core$String* $tmp1696 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1661.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q($tmp1694, ((panda$core$Int64) { 36 }), ((org$pandalanguage$pandac$parser$Token) id1661.value).position, $tmp1696, t1690);
            panda$collections$Array$add$panda$collections$Array$T(parameters1665, ((panda$core$Object*) $tmp1694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1690));
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1697 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
            $tmp1697->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
            $tmp1697->refCount.value = 1;
            panda$core$String* $tmp1699 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1661.value));
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1697, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$parser$Token) id1661.value).position, $tmp1699);
            panda$collections$Array$add$panda$collections$Array$T(parameters1665, ((panda$core$Object*) $tmp1697));
        }
        }
    }
    goto $l1680;
    $l1681:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1700, ((panda$core$Int64) { 63 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1702 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1700, &$s1701);
    if (((panda$core$Bit) { !$tmp1702.nonnull }).value) {
    {
        {
            tmp1631703 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1665));
            return tmp1631703;
        }
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1705 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters1665);
        tmp1641704 = $tmp1705;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1665));
        return tmp1641704;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1706;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1707;
    panda$collections$Array* result1710;
    org$pandalanguage$pandac$ASTNode* t1713;
    panda$collections$ImmutableArray* tmp1651715;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1718;
    panda$collections$ImmutableArray* tmp1661721;
    panda$collections$ImmutableArray* tmp1671722;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1707, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1709 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1707, &$s1708);
    start1706 = $tmp1709;
    if (((panda$core$Bit) { !start1706.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1711 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1711->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1711->refCount.value = 1;
    panda$collections$Array$init($tmp1711);
    result1710 = $tmp1711;
    org$pandalanguage$pandac$ASTNode* $tmp1714 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1713 = $tmp1714;
    if (((panda$core$Bit) { t1713 == NULL }).value) {
    {
        {
            tmp1651715 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1713));
            }
            return tmp1651715;
        }
    }
    }
    panda$collections$Array$add$panda$collections$Array$T(result1710, ((panda$core$Object*) t1713));
    $l1716:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1718, ((panda$core$Int64) { 105 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1719 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1718);
    if (!((panda$core$Bit) { $tmp1719.nonnull }).value) goto $l1717;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1713));
            org$pandalanguage$pandac$ASTNode* $tmp1720 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            t1713 = $tmp1720;
        }
        if (((panda$core$Bit) { t1713 == NULL }).value) {
        {
            {
                tmp1661721 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1710));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1713));
                }
                return tmp1661721;
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1710, ((panda$core$Object*) t1713));
    }
    goto $l1716;
    $l1717:;
    {
        panda$collections$ImmutableArray* $tmp1723 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1710);
        tmp1671722 = $tmp1723;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1710));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1713));
        }
        return tmp1671722;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* result1724;
    org$pandalanguage$pandac$parser$Token$nullable next1729;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1730;
    panda$collections$ImmutableArray* tmp1681735;
    panda$collections$Array* $tmp1725 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1725->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1725->refCount.value = 1;
    panda$collections$Array$init($tmp1725);
    result1724 = $tmp1725;
    $l1727:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1730, ((panda$core$Int64) { 13 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1731 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1730);
        next1729 = $tmp1731;
        if (((panda$core$Bit) { !next1729.nonnull }).value) {
        {
            goto $l1728;
        }
        }
        org$pandalanguage$pandac$ASTNode* $tmp1732 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1732->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1732->refCount.value = 1;
        panda$core$String* $tmp1734 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) next1729.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1732, ((panda$core$Int64) { 0 }), ((org$pandalanguage$pandac$parser$Token) next1729.value).position, $tmp1734);
        panda$collections$Array$add$panda$collections$Array$T(result1724, ((panda$core$Object*) $tmp1732));
    }
    }
    $l1728:;
    {
        panda$collections$ImmutableArray* $tmp1736 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1724);
        tmp1681735 = $tmp1736;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1724));
        return tmp1681735;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1737;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1738;
    panda$core$MutableString* result1741;
    org$pandalanguage$pandac$parser$Token next1746;
    org$pandalanguage$pandac$ASTNode* tmp1691751;
    org$pandalanguage$pandac$ASTNode* tmp1701753;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1738, ((panda$core$Int64) { 11 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1740 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1738, &$s1739);
    start1737 = $tmp1740;
    if (((panda$core$Bit) { !start1737.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$core$MutableString* $tmp1742 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp1742->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1742->refCount.value = 1;
    panda$core$MutableString$init($tmp1742);
    result1741 = $tmp1742;
    $l1744:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1747 = org$pandalanguage$pandac$parser$Parser$rawNext$R$org$pandalanguage$pandac$parser$Token(self);
        next1746 = $tmp1747;
        panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1746.kind.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1748.value) {
        {
            goto $l1745;
        }
        }
        panda$core$Bit $tmp1749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(next1746.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1749.value) {
        {
            org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) start1737.value), &$s1750);
            {
                tmp1691751 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1741));
                return tmp1691751;
            }
        }
        }
        panda$core$String* $tmp1752 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1746);
        panda$core$MutableString$append$panda$core$String(result1741, $tmp1752);
    }
    }
    $l1745:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp1754 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1754->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1754->refCount.value = 1;
        panda$core$String* $tmp1756 = panda$core$MutableString$finish$R$panda$core$String(result1741);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1754, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$parser$Token) start1737.value).position, $tmp1756);
        tmp1701753 = $tmp1754;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1741));
        return tmp1701753;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable id1757;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1758;
    org$pandalanguage$pandac$ASTNode* t1761;
    org$pandalanguage$pandac$ASTNode* tmp1711763;
    org$pandalanguage$pandac$ASTNode* tmp1721764;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1758, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1760 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1758, &$s1759);
    id1757 = $tmp1760;
    if (((panda$core$Bit) { !id1757.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$ASTNode* $tmp1762 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    t1761 = $tmp1762;
    if (((panda$core$Bit) { t1761 == NULL }).value) {
    {
        {
            tmp1711763 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1761));
            return tmp1711763;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1765 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1765->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1765->refCount.value = 1;
        panda$core$String* $tmp1767 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) id1757.value));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode($tmp1765, ((panda$core$Int64) { 27 }), ((org$pandalanguage$pandac$parser$Token) id1757.value).position, $tmp1767, t1761);
        tmp1721764 = $tmp1765;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1761));
        return tmp1721764;
    }
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$nullable start1768;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1769;
    panda$collections$Array* result1772;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1775;
    org$pandalanguage$pandac$ASTNode* param1777;
    panda$collections$ImmutableArray* tmp1731779;
    panda$collections$ImmutableArray* tmp1761780;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1783;
    panda$collections$ImmutableArray* tmp1741786;
    panda$collections$ImmutableArray* tmp1771787;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1788;
    panda$collections$ImmutableArray* tmp1751791;
    panda$collections$ImmutableArray* tmp1781792;
    panda$collections$ImmutableArray* tmp1791793;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1769, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1771 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1769, &$s1770);
    start1768 = $tmp1771;
    if (((panda$core$Bit) { !start1768.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1773 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1773->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1773->refCount.value = 1;
    panda$collections$Array$init($tmp1773);
    result1772 = $tmp1773;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1775, ((panda$core$Int64) { 104 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1776 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1775);
    if (((panda$core$Bit) { !$tmp1776.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1778 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
        param1777 = $tmp1778;
        if (((panda$core$Bit) { param1777 == NULL }).value) {
        {
            {
                tmp1731779 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1777));
                {
                    tmp1761780 = tmp1731779;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1772));
                    return tmp1761780;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(result1772, ((panda$core$Object*) param1777));
        $l1781:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1783, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1784 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1783);
        if (!((panda$core$Bit) { $tmp1784.nonnull }).value) goto $l1782;
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1785 = org$pandalanguage$pandac$parser$Parser$parameter$R$org$pandalanguage$pandac$ASTNode$Q(self);
                param1777 = $tmp1785;
            }
            if (((panda$core$Bit) { param1777 == NULL }).value) {
            {
                {
                    tmp1741786 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1777));
                    {
                        tmp1771787 = tmp1741786;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1772));
                        return tmp1771787;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(result1772, ((panda$core$Object*) param1777));
        }
        goto $l1781;
        $l1782:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1788, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1790 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1788, &$s1789);
        if (((panda$core$Bit) { !$tmp1790.nonnull }).value) {
        {
            {
                tmp1751791 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1777));
                {
                    tmp1781792 = tmp1751791;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1772));
                    return tmp1781792;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) param1777));
    }
    }
    {
        panda$collections$ImmutableArray* $tmp1794 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result1772);
        tmp1791793 = $tmp1794;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1772));
        return tmp1791793;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
    return NULL;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$MethodDecl$Kind kind1795;
    org$pandalanguage$pandac$parser$Token$nullable start1796;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1797;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1799;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1802;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1803;
    panda$core$String* name1804;
    org$pandalanguage$pandac$ASTNode* tmp1801806;
    panda$collections$ImmutableArray* params1807;
    org$pandalanguage$pandac$ASTNode* tmp1811809;
    org$pandalanguage$pandac$ASTNode* returnType1810;
    org$pandalanguage$pandac$ASTNode* tmp1821814;
    panda$collections$ImmutableArray* body1815;
    org$pandalanguage$pandac$ASTNode* tmp1831819;
    org$pandalanguage$pandac$parser$Token token1820;
    panda$core$String* tokenText1822;
    org$pandalanguage$pandac$ASTNode* post1835;
    org$pandalanguage$pandac$ASTNode* tmp1841837;
    org$pandalanguage$pandac$ASTNode* tmp1851838;
    org$pandalanguage$pandac$ASTNode* tmp1861839;
    memset(&kind1795, 0, sizeof(kind1795));
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1797, ((panda$core$Int64) { 20 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1798 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1797);
    start1796 = $tmp1798;
    if (((panda$core$Bit) { !start1796.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1799, ((panda$core$Int64) { 21 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1801 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1799, &$s1800);
        start1796 = $tmp1801;
        if (((panda$core$Bit) { !start1796.nonnull }).value) {
        {
            return NULL;
        }
        }
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1802, ((panda$core$Int64) { 0 }));
        kind1795 = $tmp1802;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1803, ((panda$core$Int64) { 1 }));
        kind1795 = $tmp1803;
    }
    }
    panda$core$String* $tmp1805 = org$pandalanguage$pandac$parser$Parser$methodName$R$panda$core$String$Q(self);
    name1804 = $tmp1805;
    if (((panda$core$Bit) { name1804 == NULL }).value) {
    {
        {
            tmp1801806 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1804));
            return tmp1801806;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1808 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1807 = $tmp1808;
    if (((panda$core$Bit) { params1807 == NULL }).value) {
    {
        {
            tmp1811809 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1807));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1804));
            }
            return tmp1811809;
        }
    }
    }
    memset(&returnType1810, 0, sizeof(returnType1810));
    org$pandalanguage$pandac$parser$Token $tmp1811 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1811.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp1812.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1813 = org$pandalanguage$pandac$parser$Parser$typeDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            returnType1810 = $tmp1813;
        }
        if (((panda$core$Bit) { returnType1810 == NULL }).value) {
        {
            {
                tmp1821814 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1807));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1810));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1804));
                }
                return tmp1821814;
            }
        }
        }
    }
    }
    else {
    {
        {
            returnType1810 = NULL;
        }
    }
    }
    memset(&body1815, 0, sizeof(body1815));
    org$pandalanguage$pandac$parser$Token $tmp1816 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp1817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1816.kind.$rawValue, ((panda$core$Int64) { 99 }));
    if ($tmp1817.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp1818 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            body1815 = $tmp1818;
        }
        if (((panda$core$Bit) { body1815 == NULL }).value) {
        {
            {
                tmp1831819 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1815));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1807));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1810));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1804));
                }
                return tmp1831819;
            }
        }
        }
    }
    }
    else {
    {
        {
            body1815 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1821 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1820 = $tmp1821;
    panda$core$String* $tmp1823 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1820);
    tokenText1822 = $tmp1823;
    panda$core$Bit $tmp1825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1820.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1824 = $tmp1825.value;
    if (!$tmp1824) goto $l1826;
    panda$core$Bit $tmp1829 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1822, &$s1828);
    bool $tmp1827 = $tmp1829.value;
    if ($tmp1827) goto $l1830;
    panda$core$Bit $tmp1832 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1822, &$s1831);
    $tmp1827 = $tmp1832.value;
    $l1830:;
    panda$core$Bit $tmp1833 = { $tmp1827 };
    $tmp1824 = $tmp1833.value;
    $l1826:;
    panda$core$Bit $tmp1834 = { $tmp1824 };
    if ($tmp1834.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1836 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1835 = $tmp1836;
        if (((panda$core$Bit) { post1835 == NULL }).value) {
        {
            {
                tmp1841837 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1835));
                {
                    tmp1851838 = tmp1841837;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1815));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1807));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1822));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1810));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1804));
                    }
                    return tmp1851838;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1835));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1840 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1840->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1840->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1840, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1796.value).position, p_doccomment, p_annotations, kind1795, name1804, params1807, returnType1810, body1815);
        tmp1861839 = $tmp1840;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) body1815));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1810));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1804));
        }
        return tmp1861839;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1842;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1843;
    panda$collections$ImmutableArray* params1846;
    org$pandalanguage$pandac$ASTNode* tmp1871848;
    panda$collections$ImmutableArray* b1849;
    org$pandalanguage$pandac$ASTNode* tmp1881851;
    org$pandalanguage$pandac$parser$Token token1852;
    panda$core$String* tokenText1854;
    org$pandalanguage$pandac$ASTNode* post1867;
    org$pandalanguage$pandac$ASTNode* tmp1891869;
    org$pandalanguage$pandac$ASTNode* tmp1901870;
    org$pandalanguage$pandac$ASTNode* tmp1911871;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1874;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1843, ((panda$core$Int64) { 22 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1845 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1843, &$s1844);
    start1842 = $tmp1845;
    if (((panda$core$Bit) { !start1842.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$ImmutableArray* $tmp1847 = org$pandalanguage$pandac$parser$Parser$parameters$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    params1846 = $tmp1847;
    if (((panda$core$Bit) { params1846 == NULL }).value) {
    {
        {
            tmp1871848 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1846));
            return tmp1871848;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp1850 = org$pandalanguage$pandac$parser$Parser$blockStatements$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
    b1849 = $tmp1850;
    if (((panda$core$Bit) { b1849 == NULL }).value) {
    {
        {
            tmp1881851 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1846));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1849));
            }
            return tmp1881851;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token $tmp1853 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    token1852 = $tmp1853;
    panda$core$String* $tmp1855 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, token1852);
    tokenText1854 = $tmp1855;
    panda$core$Bit $tmp1857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token1852.kind.$rawValue, ((panda$core$Int64) { 13 }));
    bool $tmp1856 = $tmp1857.value;
    if (!$tmp1856) goto $l1858;
    panda$core$Bit $tmp1861 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1854, &$s1860);
    bool $tmp1859 = $tmp1861.value;
    if ($tmp1859) goto $l1862;
    panda$core$Bit $tmp1864 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(tokenText1854, &$s1863);
    $tmp1859 = $tmp1864.value;
    $l1862:;
    panda$core$Bit $tmp1865 = { $tmp1859 };
    $tmp1856 = $tmp1865.value;
    $l1858:;
    panda$core$Bit $tmp1866 = { $tmp1856 };
    if ($tmp1866.value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp1868 = org$pandalanguage$pandac$parser$Parser$postconditions$R$org$pandalanguage$pandac$ASTNode$Q(self);
        post1867 = $tmp1868;
        if (((panda$core$Bit) { post1867 == NULL }).value) {
        {
            {
                tmp1891869 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1867));
                {
                    tmp1901870 = tmp1891869;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1846));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1854));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1849));
                    }
                    return tmp1901870;
                }
            }
        }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) post1867));
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1872 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1872->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1872->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1874, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1872, ((panda$core$Int64) { 23 }), ((org$pandalanguage$pandac$parser$Token) start1842.value).position, p_doccomment, p_annotations, $tmp1874, &$s1875, params1846, NULL, b1849);
        tmp1911871 = $tmp1872;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) params1846));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tokenText1854));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) b1849));
        }
        return tmp1911871;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$ASTNode* decl1876;
    org$pandalanguage$pandac$ASTNode* tmp1921878;
    org$pandalanguage$pandac$ASTNode* tmp1931879;
    org$pandalanguage$pandac$ASTNode* $tmp1877 = org$pandalanguage$pandac$parser$Parser$varDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
    decl1876 = $tmp1877;
    if (((panda$core$Bit) { decl1876 == NULL }).value) {
    {
        {
            tmp1921878 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1876));
            return tmp1921878;
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1880 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1880->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1880->refCount.value = 1;
        org$pandalanguage$pandac$Position $tmp1883 = (($fn1882) decl1876->$class->vtable[2])(decl1876);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode($tmp1880, ((panda$core$Int64) { 14 }), $tmp1883, p_doccomment, p_annotations, decl1876);
        tmp1931879 = $tmp1880;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl1876));
        return tmp1931879;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment) {
    org$pandalanguage$pandac$parser$Token$nullable name1884;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1885;
    panda$collections$Array* fields1888;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1891;
    org$pandalanguage$pandac$ASTNode* field1895;
    org$pandalanguage$pandac$ASTNode* tmp1941897;
    org$pandalanguage$pandac$ASTNode* tmp1961898;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1901;
    org$pandalanguage$pandac$ASTNode* tmp1951904;
    org$pandalanguage$pandac$ASTNode* tmp1971905;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1906;
    org$pandalanguage$pandac$ASTNode* tmp1981909;
    org$pandalanguage$pandac$ASTNode* tmp1991910;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1885, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1887 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1885, &$s1886);
    name1884 = $tmp1887;
    if (((panda$core$Bit) { !name1884.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1889 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1889->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1889->refCount.value = 1;
    panda$collections$Array$init($tmp1889);
    fields1888 = $tmp1889;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1891, ((panda$core$Int64) { 103 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1892 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1891);
    if (((panda$core$Bit) { $tmp1892.nonnull }).value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1893 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        panda$core$Bit $tmp1894 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1893.kind.$rawValue, ((panda$core$Int64) { 104 }));
        if ($tmp1894.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp1896 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
            field1895 = $tmp1896;
            if (((panda$core$Bit) { field1895 == NULL }).value) {
            {
                {
                    tmp1941897 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1895));
                    {
                        tmp1961898 = tmp1941897;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1888));
                        return tmp1961898;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(fields1888, ((panda$core$Object*) field1895));
            $l1899:;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1901, ((panda$core$Int64) { 105 }));
            org$pandalanguage$pandac$parser$Token$nullable $tmp1902 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1901);
            if (!((panda$core$Bit) { $tmp1902.nonnull }).value) goto $l1900;
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1895));
                    org$pandalanguage$pandac$ASTNode* $tmp1903 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    field1895 = $tmp1903;
                }
                if (((panda$core$Bit) { field1895 == NULL }).value) {
                {
                    {
                        tmp1951904 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1895));
                        {
                            tmp1971905 = tmp1951904;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1888));
                            return tmp1971905;
                        }
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(fields1888, ((panda$core$Object*) field1895));
            }
            goto $l1899;
            $l1900:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field1895));
        }
        }
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1906, ((panda$core$Int64) { 104 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp1908 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1906, &$s1907);
        if (((panda$core$Bit) { !$tmp1908.nonnull }).value) {
        {
            {
                tmp1981909 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1888));
                return tmp1981909;
            }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$ASTNode* $tmp1911 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp1911->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp1911->refCount.value = 1;
        panda$core$String* $tmp1913 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1884.value));
        panda$collections$ImmutableArray* $tmp1914 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(fields1888);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1911, ((panda$core$Int64) { 7 }), ((org$pandalanguage$pandac$parser$Token) name1884.value).position, p_doccomment, $tmp1913, $tmp1914);
        tmp1991910 = $tmp1911;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1888));
        return tmp1991910;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_choiceDoccomment, panda$collections$ImmutableArray* p_choiceAnnotations) {
    org$pandalanguage$pandac$parser$Token$nullable start1915;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1916;
    org$pandalanguage$pandac$parser$Token$nullable name1919;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1920;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1923;
    panda$collections$Array* members1926;
    org$pandalanguage$pandac$ASTNode* dc1929;
    org$pandalanguage$pandac$parser$Token next1932;
    org$pandalanguage$pandac$parser$Token$Kind $match$1854_131934;
    org$pandalanguage$pandac$ASTNode* c1980;
    org$pandalanguage$pandac$ASTNode* tmp2001982;
    panda$collections$ImmutableArray* a1983;
    org$pandalanguage$pandac$parser$Token next1988;
    org$pandalanguage$pandac$parser$Token$Kind $match$1878_131990;
    org$pandalanguage$pandac$ASTNode* tmp2011999;
    org$pandalanguage$pandac$ASTNode* tmp2022012;
    org$pandalanguage$pandac$ASTNode* decl2015;
    org$pandalanguage$pandac$ASTNode* tmp2032017;
    org$pandalanguage$pandac$ASTNode* decl2021;
    org$pandalanguage$pandac$ASTNode* tmp2042023;
    org$pandalanguage$pandac$ASTNode* decl2027;
    org$pandalanguage$pandac$ASTNode* tmp2052029;
    org$pandalanguage$pandac$ASTNode* decl2037;
    org$pandalanguage$pandac$ASTNode* tmp2062039;
    org$pandalanguage$pandac$ASTNode* decl2055;
    org$pandalanguage$pandac$ASTNode* tmp2072057;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2061;
    org$pandalanguage$pandac$ASTNode* tmp2082068;
    org$pandalanguage$pandac$ASTNode* tmp2092069;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2072;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1916, ((panda$core$Int64) { 19 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1918 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1916, &$s1917);
    start1915 = $tmp1918;
    if (((panda$core$Bit) { !start1915.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1920, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1922 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1920, &$s1921);
    name1919 = $tmp1922;
    if (((panda$core$Bit) { !name1919.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1923, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp1925 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp1923, &$s1924);
    if (((panda$core$Bit) { !$tmp1925.nonnull }).value) {
    {
        return NULL;
    }
    }
    panda$collections$Array* $tmp1927 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp1927->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1927->refCount.value = 1;
    panda$collections$Array$init($tmp1927);
    members1926 = $tmp1927;
    dc1929 = NULL;
    $l1930:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1933 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1932 = $tmp1933;
        {
            $match$1854_131934 = next1932.kind;
            panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 17 }));
            bool $tmp1943 = $tmp1944.value;
            if ($tmp1943) goto $l1945;
            panda$core$Bit $tmp1946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 18 }));
            $tmp1943 = $tmp1946.value;
            $l1945:;
            panda$core$Bit $tmp1947 = { $tmp1943 };
            bool $tmp1942 = $tmp1947.value;
            if ($tmp1942) goto $l1948;
            panda$core$Bit $tmp1949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 19 }));
            $tmp1942 = $tmp1949.value;
            $l1948:;
            panda$core$Bit $tmp1950 = { $tmp1942 };
            bool $tmp1941 = $tmp1950.value;
            if ($tmp1941) goto $l1951;
            panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 21 }));
            $tmp1941 = $tmp1952.value;
            $l1951:;
            panda$core$Bit $tmp1953 = { $tmp1941 };
            bool $tmp1940 = $tmp1953.value;
            if ($tmp1940) goto $l1954;
            panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp1940 = $tmp1955.value;
            $l1954:;
            panda$core$Bit $tmp1956 = { $tmp1940 };
            bool $tmp1939 = $tmp1956.value;
            if ($tmp1939) goto $l1957;
            panda$core$Bit $tmp1958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 13 }));
            $tmp1939 = $tmp1958.value;
            $l1957:;
            panda$core$Bit $tmp1959 = { $tmp1939 };
            bool $tmp1938 = $tmp1959.value;
            if ($tmp1938) goto $l1960;
            panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 23 }));
            $tmp1938 = $tmp1961.value;
            $l1960:;
            panda$core$Bit $tmp1962 = { $tmp1938 };
            bool $tmp1937 = $tmp1962.value;
            if ($tmp1937) goto $l1963;
            panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1937 = $tmp1964.value;
            $l1963:;
            panda$core$Bit $tmp1965 = { $tmp1937 };
            bool $tmp1936 = $tmp1965.value;
            if ($tmp1936) goto $l1966;
            panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1936 = $tmp1967.value;
            $l1966:;
            panda$core$Bit $tmp1968 = { $tmp1936 };
            bool $tmp1935 = $tmp1968.value;
            if ($tmp1935) goto $l1969;
            panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp1935 = $tmp1970.value;
            $l1969:;
            panda$core$Bit $tmp1971 = { $tmp1935 };
            if ($tmp1971.value) {
            {
                goto $l1931;
            }
            }
            else {
            panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1972.value) {
            {
                if (((panda$core$Bit) { dc1929 != NULL }).value) {
                {
                    panda$core$String* $tmp1974 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1932);
                    panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1973, $tmp1974);
                    panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1975, &$s1976);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1932, $tmp1977);
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    org$pandalanguage$pandac$ASTNode* $tmp1978 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1929 = $tmp1978;
                }
            }
            }
            else {
            panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1854_131934.$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp1979.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp1981 = org$pandalanguage$pandac$parser$Parser$choiceEntry$org$pandalanguage$pandac$ASTNode$Q$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1929);
                c1980 = $tmp1981;
                if (((panda$core$Bit) { c1980 == NULL }).value) {
                {
                    {
                        tmp2001982 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2001982;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1926, ((panda$core$Object*) c1980));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    dc1929 = NULL;
                }
            }
            }
            else {
            {
                goto $l1931;
            }
            }
            }
            }
        }
    }
    }
    $l1931:;
    panda$collections$ImmutableArray* $tmp1984 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
    $tmp1984->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp1984->refCount.value = 1;
    panda$collections$ImmutableArray$init($tmp1984);
    a1983 = $tmp1984;
    $l1986:;
    while (true) {
    {
        org$pandalanguage$pandac$parser$Token $tmp1989 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        next1988 = $tmp1989;
        {
            $match$1878_131990 = next1988.kind;
            panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1991.value) {
            {
                panda$core$Int64 $tmp1992 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1983);
                panda$core$Bit $tmp1993 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1992, ((panda$core$Int64) { 0 }));
                if ($tmp1993.value) {
                {
                    panda$core$String* $tmp1995 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1988);
                    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1994, $tmp1995);
                    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1988, $tmp1998);
                    {
                        tmp2011999 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2011999;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                    panda$collections$ImmutableArray* $tmp2000 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
                    a1983 = $tmp2000;
                }
            }
            }
            else {
            panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2001.value) {
            {
                bool $tmp2002 = ((panda$core$Bit) { dc1929 != NULL }).value;
                if ($tmp2002) goto $l2003;
                panda$core$Int64 $tmp2004 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(a1983);
                panda$core$Bit $tmp2005 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2004, ((panda$core$Int64) { 0 }));
                $tmp2002 = $tmp2005.value;
                $l2003:;
                panda$core$Bit $tmp2006 = { $tmp2002 };
                if ($tmp2006.value) {
                {
                    panda$core$String* $tmp2008 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1988);
                    panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2007, $tmp2008);
                    panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2010);
                    org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1988, $tmp2011);
                    {
                        tmp2022012 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2022012;
                    }
                }
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    org$pandalanguage$pandac$ASTNode* $tmp2013 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
                    dc1929 = $tmp2013;
                }
            }
            }
            else {
            panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2014.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2016 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1929, a1983);
                decl2015 = $tmp2016;
                if (((panda$core$Bit) { decl2015 == NULL }).value) {
                {
                    {
                        tmp2032017 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2032017;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1926, ((panda$core$Object*) decl2015));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    dc1929 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                    panda$collections$ImmutableArray* $tmp2018 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2018->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2018->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2018);
                    a1983 = $tmp2018;
                }
            }
            }
            else {
            panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2020.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2022 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1929, a1983);
                decl2021 = $tmp2022;
                if (((panda$core$Bit) { decl2021 == NULL }).value) {
                {
                    {
                        tmp2042023 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2042023;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1926, ((panda$core$Object*) decl2021));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    dc1929 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                    panda$collections$ImmutableArray* $tmp2024 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2024->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2024->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2024);
                    a1983 = $tmp2024;
                }
            }
            }
            else {
            panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2026.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2028 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1929, a1983);
                decl2027 = $tmp2028;
                if (((panda$core$Bit) { decl2027 == NULL }).value) {
                {
                    {
                        tmp2052029 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2052029;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1926, ((panda$core$Object*) decl2027));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    dc1929 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                    panda$collections$ImmutableArray* $tmp2030 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2030->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2030->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2030);
                    a1983 = $tmp2030;
                }
            }
            }
            else {
            panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 21 }));
            bool $tmp2032 = $tmp2033.value;
            if ($tmp2032) goto $l2034;
            panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 20 }));
            $tmp2032 = $tmp2035.value;
            $l2034:;
            panda$core$Bit $tmp2036 = { $tmp2032 };
            if ($tmp2036.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2038 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1929, a1983);
                decl2037 = $tmp2038;
                if (((panda$core$Bit) { decl2037 == NULL }).value) {
                {
                    {
                        tmp2062039 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2062039;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1926, ((panda$core$Object*) decl2037));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    dc1929 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                    panda$collections$ImmutableArray* $tmp2040 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2040->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2040->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2040);
                    a1983 = $tmp2040;
                }
            }
            }
            else {
            panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 23 }));
            bool $tmp2044 = $tmp2045.value;
            if ($tmp2044) goto $l2046;
            panda$core$Bit $tmp2047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 24 }));
            $tmp2044 = $tmp2047.value;
            $l2046:;
            panda$core$Bit $tmp2048 = { $tmp2044 };
            bool $tmp2043 = $tmp2048.value;
            if ($tmp2043) goto $l2049;
            panda$core$Bit $tmp2050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 25 }));
            $tmp2043 = $tmp2050.value;
            $l2049:;
            panda$core$Bit $tmp2051 = { $tmp2043 };
            bool $tmp2042 = $tmp2051.value;
            if ($tmp2042) goto $l2052;
            panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 26 }));
            $tmp2042 = $tmp2053.value;
            $l2052:;
            panda$core$Bit $tmp2054 = { $tmp2042 };
            if ($tmp2054.value) {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2056 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc1929, a1983);
                decl2055 = $tmp2056;
                if (((panda$core$Bit) { decl2055 == NULL }).value) {
                {
                    {
                        tmp2072057 = NULL;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                        }
                        return tmp2072057;
                    }
                }
                }
                panda$collections$Array$add$panda$collections$Array$T(members1926, ((panda$core$Object*) decl2055));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                    dc1929 = NULL;
                }
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                    panda$collections$ImmutableArray* $tmp2058 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
                    $tmp2058->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
                    $tmp2058->refCount.value = 1;
                    panda$collections$ImmutableArray$init($tmp2058);
                    a1983 = $tmp2058;
                }
            }
            }
            else {
            panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1878_131990.$rawValue, ((panda$core$Int64) { 100 }));
            if ($tmp2060.value) {
            {
                org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2061, ((panda$core$Int64) { 100 }));
                org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2061, &$s2062);
                goto $l1987;
            }
            }
            else {
            {
                panda$core$String* $tmp2064 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, next1988);
                panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2063, $tmp2064);
                panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
                org$pandalanguage$pandac$parser$Parser$error$org$pandalanguage$pandac$parser$Token$panda$core$String(self, next1988, $tmp2067);
                org$pandalanguage$pandac$parser$Parser$next$R$org$pandalanguage$pandac$parser$Token(self);
                {
                    tmp2082068 = NULL;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
                    }
                    return tmp2082068;
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
    $l1987:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2070 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2070->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2070->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2072, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp2073 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name1919.value));
        panda$collections$ImmutableArray* $tmp2074 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members1926);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2070, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start1915.value).position, p_choiceDoccomment, p_choiceAnnotations, $tmp2072, $tmp2073, NULL, NULL, $tmp2074);
        tmp2092069 = $tmp2070;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc1929));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1983));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members1926));
        }
        return tmp2092069;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token start2075;
    org$pandalanguage$pandac$ASTNode* dc2077;
    org$pandalanguage$pandac$ASTNode* tmp2102080;
    panda$collections$ImmutableArray* a2081;
    org$pandalanguage$pandac$ASTNode* tmp2112083;
    org$pandalanguage$pandac$parser$Token$Kind $match$1964_92084;
    org$pandalanguage$pandac$ASTNode* tmp2122087;
    org$pandalanguage$pandac$ASTNode* tmp2132090;
    org$pandalanguage$pandac$ASTNode* tmp2142093;
    org$pandalanguage$pandac$ASTNode* tmp2152100;
    org$pandalanguage$pandac$ASTNode* tmp2162103;
    org$pandalanguage$pandac$ASTNode* tmp2172118;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2120;
    org$pandalanguage$pandac$ASTNode* tmp2182122;
    org$pandalanguage$pandac$parser$Token $tmp2076 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    start2075 = $tmp2076;
    memset(&dc2077, 0, sizeof(dc2077));
    panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(start2075.kind.$rawValue, ((panda$core$Int64) { 11 }));
    if ($tmp2078.value) {
    {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2079 = org$pandalanguage$pandac$parser$Parser$doccomment$R$org$pandalanguage$pandac$ASTNode$Q(self);
            dc2077 = $tmp2079;
        }
        if (((panda$core$Bit) { dc2077 == NULL }).value) {
        {
            {
                tmp2102080 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                return tmp2102080;
            }
        }
        }
    }
    }
    else {
    {
        {
            dc2077 = NULL;
        }
    }
    }
    panda$collections$ImmutableArray* $tmp2082 = org$pandalanguage$pandac$parser$Parser$annotations$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(self);
    a2081 = $tmp2082;
    if (((panda$core$Bit) { a2081 == NULL }).value) {
    {
        {
            tmp2112083 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
            }
            return tmp2112083;
        }
    }
    }
    {
        org$pandalanguage$pandac$parser$Token $tmp2085 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$1964_92084 = $tmp2085.kind;
        panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2086.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2088 = org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2077, a2081);
                tmp2122087 = $tmp2088;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
                }
                return tmp2122087;
            }
        }
        }
        else {
        panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2089.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2091 = org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2077, a2081);
                tmp2132090 = $tmp2091;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
                }
                return tmp2132090;
            }
        }
        }
        else {
        panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2092.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2094 = org$pandalanguage$pandac$parser$Parser$choiceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2077, a2081);
                tmp2142093 = $tmp2094;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
                }
                return tmp2142093;
            }
        }
        }
        else {
        panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 21 }));
        bool $tmp2095 = $tmp2096.value;
        if ($tmp2095) goto $l2097;
        panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2095 = $tmp2098.value;
        $l2097:;
        panda$core$Bit $tmp2099 = { $tmp2095 };
        if ($tmp2099.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2101 = org$pandalanguage$pandac$parser$Parser$methodDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2077, a2081);
                tmp2152100 = $tmp2101;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
                }
                return tmp2152100;
            }
        }
        }
        else {
        panda$core$Bit $tmp2102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2102.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2104 = org$pandalanguage$pandac$parser$Parser$initDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2077, a2081);
                tmp2162103 = $tmp2104;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
                }
                return tmp2162103;
            }
        }
        }
        else {
        panda$core$Bit $tmp2108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 23 }));
        bool $tmp2107 = $tmp2108.value;
        if ($tmp2107) goto $l2109;
        panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 24 }));
        $tmp2107 = $tmp2110.value;
        $l2109:;
        panda$core$Bit $tmp2111 = { $tmp2107 };
        bool $tmp2106 = $tmp2111.value;
        if ($tmp2106) goto $l2112;
        panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 25 }));
        $tmp2106 = $tmp2113.value;
        $l2112:;
        panda$core$Bit $tmp2114 = { $tmp2106 };
        bool $tmp2105 = $tmp2114.value;
        if ($tmp2105) goto $l2115;
        panda$core$Bit $tmp2116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1964_92084.$rawValue, ((panda$core$Int64) { 26 }));
        $tmp2105 = $tmp2116.value;
        $l2115:;
        panda$core$Bit $tmp2117 = { $tmp2105 };
        if ($tmp2117.value) {
        {
            {
                org$pandalanguage$pandac$ASTNode* $tmp2119 = org$pandalanguage$pandac$parser$Parser$fieldDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(self, dc2077, a2081);
                tmp2172118 = $tmp2119;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
                }
                return tmp2172118;
            }
        }
        }
        else {
        {
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2120, ((panda$core$Int64) { 17 }));
            org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2120, &$s2121);
            {
                tmp2182122 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
                }
                return tmp2182122;
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dc2077));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a2081));
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$classDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2123;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2124;
    org$pandalanguage$pandac$parser$Token$nullable name2127;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2128;
    panda$collections$ImmutableArray* generics2131;
    org$pandalanguage$pandac$ASTNode* tmp2192135;
    panda$collections$ImmutableArray* stypes2136;
    org$pandalanguage$pandac$ASTNode* tmp2202140;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2141;
    org$pandalanguage$pandac$ASTNode* tmp2212144;
    panda$collections$Array* members2145;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2150;
    org$pandalanguage$pandac$ASTNode* member2152;
    org$pandalanguage$pandac$ASTNode* tmp2222154;
    org$pandalanguage$pandac$ASTNode* tmp2232155;
    org$pandalanguage$pandac$ASTNode* tmp2242156;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2159;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2124, ((panda$core$Int64) { 17 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2126 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2124, &$s2125);
    start2123 = $tmp2126;
    if (((panda$core$Bit) { !start2123.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2128, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2130 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2128, &$s2129);
    name2127 = $tmp2130;
    if (((panda$core$Bit) { !name2127.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2131, 0, sizeof(generics2131));
    org$pandalanguage$pandac$parser$Token $tmp2132 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2132.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2133.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2134 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2131 = $tmp2134;
        }
        if (((panda$core$Bit) { generics2131 == NULL }).value) {
        {
            {
                tmp2192135 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2131));
                return tmp2192135;
            }
        }
        }
    }
    }
    else {
    {
        {
            generics2131 = NULL;
        }
    }
    }
    memset(&stypes2136, 0, sizeof(stypes2136));
    org$pandalanguage$pandac$parser$Token $tmp2137 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2137.kind.$rawValue, ((panda$core$Int64) { 95 }));
    if ($tmp2138.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2139 = org$pandalanguage$pandac$parser$Parser$supertypes$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            stypes2136 = $tmp2139;
        }
        if (((panda$core$Bit) { stypes2136 == NULL }).value) {
        {
            {
                tmp2202140 = NULL;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2131));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2136));
                }
                return tmp2202140;
            }
        }
        }
    }
    }
    else {
    {
        {
            stypes2136 = NULL;
        }
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2141, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2143 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2141, &$s2142);
    if (((panda$core$Bit) { !$tmp2143.nonnull }).value) {
    {
        {
            tmp2212144 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2131));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2136));
            }
            return tmp2212144;
        }
    }
    }
    panda$collections$Array* $tmp2146 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2146->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2146->refCount.value = 1;
    panda$collections$Array$init($tmp2146);
    members2145 = $tmp2146;
    $l2148:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2150, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2151 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2150);
    if (!((panda$core$Bit) { !$tmp2151.nonnull }).value) goto $l2149;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2153 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2152 = $tmp2153;
        if (((panda$core$Bit) { member2152 == NULL }).value) {
        {
            {
                tmp2222154 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2152));
                {
                    tmp2232155 = tmp2222154;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2131));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2145));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2136));
                    }
                    return tmp2232155;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2145, ((panda$core$Object*) member2152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2152));
    }
    goto $l2148;
    $l2149:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2157 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2157->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2157->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2159, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2160 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2127.value));
        panda$collections$ImmutableArray* $tmp2161 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2145);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2157, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2123.value).position, p_doccomment, p_annotations, $tmp2159, $tmp2160, generics2131, stypes2136, $tmp2161);
        tmp2242156 = $tmp2157;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2145));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) stypes2136));
        }
        return tmp2242156;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$interfaceDeclaration$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self, org$pandalanguage$pandac$ASTNode* p_doccomment, panda$collections$ImmutableArray* p_annotations) {
    org$pandalanguage$pandac$parser$Token$nullable start2162;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2163;
    org$pandalanguage$pandac$parser$Token$nullable name2166;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2167;
    panda$collections$ImmutableArray* generics2170;
    org$pandalanguage$pandac$ASTNode* tmp2252174;
    panda$collections$Array* intfs2177;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2180;
    org$pandalanguage$pandac$ASTNode* t2182;
    org$pandalanguage$pandac$ASTNode* tmp2262184;
    org$pandalanguage$pandac$ASTNode* tmp2282185;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2188;
    org$pandalanguage$pandac$ASTNode* tmp2272191;
    org$pandalanguage$pandac$ASTNode* tmp2292192;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2193;
    org$pandalanguage$pandac$ASTNode* tmp2302196;
    panda$collections$Array* members2197;
    org$pandalanguage$pandac$parser$Token$Kind $tmp2202;
    org$pandalanguage$pandac$ASTNode* member2204;
    org$pandalanguage$pandac$ASTNode* tmp2312206;
    org$pandalanguage$pandac$ASTNode* tmp2322207;
    org$pandalanguage$pandac$ASTNode* tmp2332208;
    org$pandalanguage$pandac$ClassDecl$Kind $tmp2211;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2163, ((panda$core$Int64) { 18 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2165 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2163, &$s2164);
    start2162 = $tmp2165;
    if (((panda$core$Bit) { !start2162.nonnull }).value) {
    {
        return NULL;
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2167, ((panda$core$Int64) { 48 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2169 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2167, &$s2168);
    name2166 = $tmp2169;
    if (((panda$core$Bit) { !name2166.nonnull }).value) {
    {
        return NULL;
    }
    }
    memset(&generics2170, 0, sizeof(generics2170));
    org$pandalanguage$pandac$parser$Token $tmp2171 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2171.kind.$rawValue, ((panda$core$Int64) { 62 }));
    if ($tmp2172.value) {
    {
        {
            panda$collections$ImmutableArray* $tmp2173 = org$pandalanguage$pandac$parser$Parser$genericsDeclaration$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self);
            generics2170 = $tmp2173;
        }
        if (((panda$core$Bit) { generics2170 == NULL }).value) {
        {
            {
                tmp2252174 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2170));
                return tmp2252174;
            }
        }
        }
    }
    }
    else {
    {
        {
            panda$collections$ImmutableArray* $tmp2175 = (panda$collections$ImmutableArray*) pandaZAlloc(40);
            $tmp2175->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
            $tmp2175->refCount.value = 1;
            panda$collections$ImmutableArray$init($tmp2175);
            generics2170 = $tmp2175;
        }
    }
    }
    panda$collections$Array* $tmp2178 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2178->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2178->refCount.value = 1;
    panda$collections$Array$init($tmp2178);
    intfs2177 = $tmp2178;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2180, ((panda$core$Int64) { 95 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2181 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2180);
    if (((panda$core$Bit) { $tmp2181.nonnull }).value) {
    {
        org$pandalanguage$pandac$ASTNode* $tmp2183 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
        t2182 = $tmp2183;
        if (((panda$core$Bit) { t2182 == NULL }).value) {
        {
            {
                tmp2262184 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2182));
                {
                    tmp2282185 = tmp2262184;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2177));
                    }
                    return tmp2282185;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(intfs2177, ((panda$core$Object*) t2182));
        $l2186:;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2188, ((panda$core$Int64) { 105 }));
        org$pandalanguage$pandac$parser$Token$nullable $tmp2189 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2188);
        if (!((panda$core$Bit) { $tmp2189.nonnull }).value) goto $l2187;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2182));
                org$pandalanguage$pandac$ASTNode* $tmp2190 = org$pandalanguage$pandac$parser$Parser$type$R$org$pandalanguage$pandac$ASTNode$Q(self);
                t2182 = $tmp2190;
            }
            if (((panda$core$Bit) { t2182 == NULL }).value) {
            {
                {
                    tmp2272191 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2182));
                    {
                        tmp2292192 = tmp2272191;
                        {
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2170));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2177));
                        }
                        return tmp2292192;
                    }
                }
            }
            }
            panda$collections$Array$add$panda$collections$Array$T(intfs2177, ((panda$core$Object*) t2182));
        }
        goto $l2186;
        $l2187:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t2182));
    }
    }
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2193, ((panda$core$Int64) { 99 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2195 = org$pandalanguage$pandac$parser$Parser$expect$org$pandalanguage$pandac$parser$Token$Kind$panda$core$String$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2193, &$s2194);
    if (((panda$core$Bit) { !$tmp2195.nonnull }).value) {
    {
        {
            tmp2302196 = NULL;
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2177));
            }
            return tmp2302196;
        }
    }
    }
    panda$collections$Array* $tmp2198 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2198->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2198->refCount.value = 1;
    panda$collections$Array$init($tmp2198);
    members2197 = $tmp2198;
    $l2200:;
    org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp2202, ((panda$core$Int64) { 100 }));
    org$pandalanguage$pandac$parser$Token$nullable $tmp2203 = org$pandalanguage$pandac$parser$Parser$checkNext$org$pandalanguage$pandac$parser$Token$Kind$R$org$pandalanguage$pandac$parser$Token$Q(self, $tmp2202);
    if (!((panda$core$Bit) { !$tmp2203.nonnull }).value) goto $l2201;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2205 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
        member2204 = $tmp2205;
        if (((panda$core$Bit) { member2204 == NULL }).value) {
        {
            {
                tmp2312206 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2204));
                {
                    tmp2322207 = tmp2312206;
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2197));
                    }
                    return tmp2322207;
                }
            }
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(members2197, ((panda$core$Object*) member2204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) member2204));
    }
    goto $l2200;
    $l2201:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2209 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2209->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2209->refCount.value = 1;
        org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(&$tmp2211, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp2212 = org$pandalanguage$pandac$parser$Parser$text$org$pandalanguage$pandac$parser$Token$R$panda$core$String(self, ((org$pandalanguage$pandac$parser$Token) name2166.value));
        panda$collections$ImmutableArray* $tmp2213 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(intfs2177);
        panda$collections$ImmutableArray* $tmp2214 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(members2197);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2209, ((panda$core$Int64) { 9 }), ((org$pandalanguage$pandac$parser$Token) start2162.value).position, p_doccomment, p_annotations, $tmp2211, $tmp2212, generics2170, $tmp2213, $tmp2214);
        tmp2332208 = $tmp2209;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) generics2170));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intfs2177));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) members2197));
        }
        return tmp2332208;
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    org$pandalanguage$pandac$parser$Token$Kind $match$2088_92215;
    {
        org$pandalanguage$pandac$parser$Token $tmp2216 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
        $match$2088_92215 = $tmp2216.kind;
        panda$core$Bit $tmp2217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2217.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2218 = org$pandalanguage$pandac$parser$Parser$usesDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2218;
        }
        }
        else {
        panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2219.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2220 = org$pandalanguage$pandac$parser$Parser$packageDeclaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2220;
        }
        }
        else {
        panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 17 }));
        bool $tmp2226 = $tmp2227.value;
        if ($tmp2226) goto $l2228;
        panda$core$Bit $tmp2229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 18 }));
        $tmp2226 = $tmp2229.value;
        $l2228:;
        panda$core$Bit $tmp2230 = { $tmp2226 };
        bool $tmp2225 = $tmp2230.value;
        if ($tmp2225) goto $l2231;
        panda$core$Bit $tmp2232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 19 }));
        $tmp2225 = $tmp2232.value;
        $l2231:;
        panda$core$Bit $tmp2233 = { $tmp2225 };
        bool $tmp2224 = $tmp2233.value;
        if ($tmp2224) goto $l2234;
        panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 21 }));
        $tmp2224 = $tmp2235.value;
        $l2234:;
        panda$core$Bit $tmp2236 = { $tmp2224 };
        bool $tmp2223 = $tmp2236.value;
        if ($tmp2223) goto $l2237;
        panda$core$Bit $tmp2238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 20 }));
        $tmp2223 = $tmp2238.value;
        $l2237:;
        panda$core$Bit $tmp2239 = { $tmp2223 };
        bool $tmp2222 = $tmp2239.value;
        if ($tmp2222) goto $l2240;
        panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 13 }));
        $tmp2222 = $tmp2241.value;
        $l2240:;
        panda$core$Bit $tmp2242 = { $tmp2222 };
        bool $tmp2221 = $tmp2242.value;
        if ($tmp2221) goto $l2243;
        panda$core$Bit $tmp2244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2088_92215.$rawValue, ((panda$core$Int64) { 11 }));
        $tmp2221 = $tmp2244.value;
        $l2243:;
        panda$core$Bit $tmp2245 = { $tmp2221 };
        if ($tmp2245.value) {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2246 = org$pandalanguage$pandac$parser$Parser$declaration$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2246;
        }
        }
        else {
        {
            org$pandalanguage$pandac$ASTNode* $tmp2247 = org$pandalanguage$pandac$parser$Parser$statement$R$org$pandalanguage$pandac$ASTNode$Q(self);
            return $tmp2247;
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$pandac$parser$Parser$file$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$parser$Parser* self) {
    panda$collections$Array* entries2248;
    org$pandalanguage$pandac$ASTNode* entry2255;
    org$pandalanguage$pandac$ASTNode* tmp2342257;
    org$pandalanguage$pandac$ASTNode* tmp2352258;
    org$pandalanguage$pandac$ASTNode* tmp2362260;
    panda$collections$Array* $tmp2249 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp2249->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2249->refCount.value = 1;
    panda$collections$Array$init($tmp2249);
    entries2248 = $tmp2249;
    $l2251:;
    org$pandalanguage$pandac$parser$Token $tmp2253 = org$pandalanguage$pandac$parser$Parser$peek$R$org$pandalanguage$pandac$parser$Token(self);
    panda$core$Bit $tmp2254 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2253.kind.$rawValue, ((panda$core$Int64) { 0 }));
    if (!$tmp2254.value) goto $l2252;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2256 = org$pandalanguage$pandac$parser$Parser$bodyEntry$R$org$pandalanguage$pandac$ASTNode$Q(self);
        entry2255 = $tmp2256;
        if (((panda$core$Bit) { entry2255 == NULL }).value) {
        {
            {
                tmp2342257 = NULL;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2255));
                {
                    tmp2352258 = tmp2342257;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2248));
                    return tmp2352258;
                }
            }
        }
        }
        panda$core$Bit $tmp2259 = panda$core$Bit$$NOT$R$panda$core$Bit(self->inSpeculative);
        PANDA_ASSERT($tmp2259.value);
        panda$collections$Array$add$panda$collections$Array$T(entries2248, ((panda$core$Object*) entry2255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry2255));
    }
    goto $l2251;
    $l2252:;
    {
        org$pandalanguage$pandac$ASTNode* $tmp2261 = (org$pandalanguage$pandac$ASTNode*) pandaZAlloc(96);
        $tmp2261->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp2261->refCount.value = 1;
        panda$collections$ImmutableArray* $tmp2263 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(entries2248);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT($tmp2261, ((panda$core$Int64) { 15 }), $tmp2263);
        tmp2362260 = $tmp2261;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entries2248));
        return tmp2362260;
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

